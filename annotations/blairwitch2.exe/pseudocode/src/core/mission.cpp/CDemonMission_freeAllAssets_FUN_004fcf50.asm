; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004fcf50(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fba97
;
; Called Functions:
;   core_dmodel.cpp_freeAllModels_FUN_0044fc50
;   core_skeleton.cpp_freeAllModels_FUN_00548f80
;   core_skeleton.cpp_freeAllSkeletons_FUN_00549090
;   engine_texture.cpp_FUN_00575010
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_00575010 ; 004fcf50
        ;   XREF to: 00575010 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00575010()
        ;   Label: core_mission.cpp_CDemonMission_freeAllAssets_FUN_004fcf50
    CALL core_dmodel.cpp_freeAllModels_FUN_0044fc50 ; 004fcf55
        ;   XREF to: 0044fc50 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_0044fc50()
    CALL core_skeleton.cpp_freeAllModels_FUN_00548f80 ; 004fcf5a
        ;   XREF to: 00548f80 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_00548f80()
    JMP 0x00549090                      ; 004fcf5f
        ;   XREF to: 00549090 (UNCONDITIONAL_CALL)

