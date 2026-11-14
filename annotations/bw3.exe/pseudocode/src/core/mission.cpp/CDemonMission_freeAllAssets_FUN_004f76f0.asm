; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_freeAllAssets_FUN_004f76f0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0 at 004f61c7
;
; Called Functions:
;   core_dmodel.cpp_freeAllModels_FUN_004624d0
;   core_skeleton.cpp_freeAllModels_FUN_005501a0
;   core_skeleton.cpp_freeAllSkeletons_FUN_005502d0
;   engine_texture.cpp_FUN_0056ac20
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_0056ac20 ; 004f76f0
        ;   XREF to: 0056ac20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056ac20()
        ;   Label: core_mission.cpp_CDemonMission_freeAllAssets_FUN_004f76f0
    CALL core_dmodel.cpp_freeAllModels_FUN_004624d0 ; 004f76f5
        ;   XREF to: 004624d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_004624d0()
    CALL core_skeleton.cpp_freeAllModels_FUN_005501a0 ; 004f76fa
        ;   XREF to: 005501a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_freeAllModels_FUN_005501a0()
    JMP 0x005502d0                      ; 004f76ff
        ;   XREF to: 005502d0 (UNCONDITIONAL_CALL)

