class CfgVehicles {
    class gm_plane_base;
    class gm_do28d2_base: gm_plane_base {
        aftb_staticLine_enabled = 1;
        aftb_staticLine_condition = "true";
    };
    class gm_do28d2_medevac_base : gm_do28d2_base {
        aftb_staticLine_enabled = 0;
        aftb_staticLine_condition = "true";
    };
    class gm_l410_base;
    class gm_l410t_base : gm_l410_base {
        aftb_staticLine_enabled = 1;
        aftb_staticLine_condition = "true";
    };
};
