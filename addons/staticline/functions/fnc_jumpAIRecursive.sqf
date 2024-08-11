#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Waypoint function for the static line jump waypoint.
 * Based on https://github.com/acemod/ACE3/blob/master/addons/fastroping/functions/fnc_deployAIWaypoint.sqf
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Array of units <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, _unitsToDeploy] call haf_staticLine_fnc_jumpAIRecursive;
 *
 * Public: No
 */

params ["_vehicle", "_unitsToDeploy", "_jumpInterval"];
TRACE_3("fnc_jumpAI_recursive",_vehicle,_unitsToDeploy,_jumpInterval);

private _unit = _unitsToDeploy deleteAt 0;
[_vehicle, _unit] call FUNC(jump);

if (_unitsToDeploy isNotEqualTo []) then {
    [{
        _this call FUNC(jumpAIRecursive);
    }, _this, _jumpInterval] call CBA_fnc_waitAndExecute;
};

nil;