; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004d9900(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d84d2
;
; Called Functions:
;   core_dmodel.cpp_freeAllModels_FUN_00454460
;   core_skeleton.cpp_freeAllModels_FUN_0051f650
;   core_skeleton.cpp_freeAllSkeletons_FUN_0051f730
;   engine_texture.cpp_clearTextureCache_FUN_005459f0
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_clearTextureCache_FUN_005459f0 ; 004d9900
        ;   XREF to: 005459f0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005459f0()
        ;   Label: core_mission.cpp_CDemonMission_freeAllAssets_FUN_004d9900
    CALL core_dmodel.cpp_freeAllModels_FUN_00454460 ; 004d9905
        ;   XREF to: 00454460 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00454460()
    CALL core_skeleton.cpp_freeAllModels_FUN_0051f650 ; 004d990a
        ;   XREF to: 0051f650 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_0051f650()
    JMP 0x0051f730                      ; 004d990f
        ;   XREF to: 0051f730 (UNCONDITIONAL_CALL)

