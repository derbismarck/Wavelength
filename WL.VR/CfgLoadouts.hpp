class CfgLoadouts {
    
    //Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.

    //Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
    allowMagnifiedOptics = 1;

    //Do Vehicle Loadouts
    //(1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
    setVehicleLoadouts = 1;

    //Fallback: use a basic soldiers loadout when the unit's classname isn't found
    useFallback = 1;

    #define MEDICAL_MODE_BASIC 1
    #define MEDICAL_MODE_ADVANCED 2

    MEDICAL_MODE = MEDICAL_MODE_BASIC;

    class MEDICAL_BASIC {
        class STANDARD {
            items[] = {"ACE_fieldDressing:3","ACE_morphine"};
        };
        class LEADER {
            items[] = {"ACE_fieldDressing:4","ACE_morphine"};
        };
        class MEDIC {
            items[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"};
        };
        class VEHICLE {
            items[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
        };
    };

    class MEDICAL_ADVANCED {
        class STANDARD {
            items[] = {"ACE_fieldDressing:3","ACE_elasticBandage:3","ACE_packingBandage:3","ACE_quikclot:3","ACE_morphine","ACE_epinephrine","ACE_tourniquet"};
        };
        class LEADER {
            items[] = {"ACE_fieldDressing:4","ACE_elasticBandage:4","ACE_packingBandage:4","ACE_quikclot:4","ACE_morphine","ACE_epinephrine","ACE_tourniquet"};
        };
        class MEDIC {
            items[] = {"ACE_fieldDressing:15","ACE_elasticBandage:20","ACE_packingBandage:20","ACE_quikclot:15","ACE_atropine:12","ACE_morphine:8","ACE_epinephrine:8","ACE_tourniquet:5","ACE_salineIV_500:6"};
        };
        class VEHICLE: MEDIC {};
    };

    //Only include one hpp per faction!
    //use (//) to comment out other files

    //BLUFOR FACTION:
    #include "Loadouts\bluefor_standard.hpp" //Our Standard "us tan" loadout


    //INDFOR FACTION:
    #include "Loadouts\indfor_standard.hpp" //Our Standard "ukraine" loadout


    //OPFOR FACTION:
    #include "Loadouts\opfor_standard.hpp" //Our standard "middle-east" loadout


    //Bonus example civilian loadouts:
    class CIV_F {
        class C_man_1 {
            uniform[] = {"U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite"};  /// randomized
            vest[] = {}; /// randomized
            headgear[] = {}; /// randomized
            backpack[] = {}; /// randomized
            backpackItems[] = {};
            weapons[] = {}; /// randomized
            launchers[] = {}; /// randomized
            handguns[] = {}; /// randomized
            magazines[] = {};
            items[] = {"ACE_fieldDressing:3"};
            linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
            attachments[] = {};
        };
        class C_journalist_F: C_man_1 {
            uniform[] = {"U_C_Journalist"};  /// randomized
            vest[] = {"V_Press_F"}; /// randomized
            headgear[] = {"H_Cap_press"}; /// randomized
        };
        class CEO: C_man_1 {
            uniform[] = {"U_Marshal"};  /// randomized
            headgear[] = {"H_Hat_brown"};
            items[] += {};
        };
        class C_man_hunter_1_F: C_man_1 {
            uniform[] = {"U_C_HunterBody_grn"};  /// randomized
            headgear[] = {"H_Booniehat_grn"};  /// randomized
            weapons[] = {};
            magazines[] = {};
            backpack[] = {"B_OutdoorPack_blk"};
        };
    };
};
