; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051bf10(void)
;
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0 at 0051a9f7
;
; Called Functions:
;   core_dmodel.cpp_freeAllModels_FUN_00468830
;   core_skeleton.cpp_FUN_0056b610
;   core_skeleton.cpp_FUN_0056b740
;   engine_texture.cpp_FUN_00597c30
;
; *****************************************************************************

section .text

    CALL engine_texture.cpp_FUN_00597c30 ; 0051bf10
        ;   XREF to: 00597c30 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597c30()
        ;   Label: core_mission.cpp_FUN_0051bf10
    CALL core_dmodel.cpp_freeAllModels_FUN_00468830 ; 0051bf15
        ;   XREF to: 00468830 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_freeAllModels_FUN_00468830()
    CALL core_skeleton.cpp_FUN_0056b610 ; 0051bf1a
        ;   XREF to: 0056b610 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0056b610()
    JMP 0x0056b740                      ; 0051bf1f
        ;   XREF to: 0056b740 (UNCONDITIONAL_CALL)

