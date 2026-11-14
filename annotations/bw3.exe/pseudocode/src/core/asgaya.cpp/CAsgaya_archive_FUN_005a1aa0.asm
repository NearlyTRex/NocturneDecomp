; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_asgaya_cpp_CAsgaya_archive_FUN_005a1aa0(CAsgaya *this_ptr)
;
; Parameters:
; CAsgaya *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005da656
;   TerminatedCString s_motion_state_005da660
;   TerminatedCString s_shootMe_005da66d
;   TerminatedCString s_poolMe_005da675
;   TerminatedCString s_speed_005da67c
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_npc.cpp_CNPC_archive_FUN_00509800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1aa0
        ;   Label: core_asgaya.cpp_CAsgaya_archive_FUN_005a1aa0
    PUSH ESI                            ; 005a1aa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a1aa2
    PUSH EBX                            ; 005a1aa6
    CALL core_npc.cpp_CNPC_archive_FUN_00509800 ; 005a1aa7
        ;   XREF to: 00509800 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_archive_FUN_00509800(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005a1aac
    PUSH 0x5da656                       ; 005a1aaf | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 005a1ab4
    PUSH ESI                            ; 005a1aba
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 005a1abb
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a1ac0
    PUSH 0x5da660                       ; 005a1ac3 | = "motion state"
    PUSH ESI                            ; 005a1ac8
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 005a1ac9
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 005a1ace
    PUSH 0x5da66d                       ; 005a1ad1 | = "shootMe"
    LEA ESI,[EBX + 0x33fa4]             ; 005a1ad6
    PUSH ESI                            ; 005a1adc
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005a1add
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a1ae2
    PUSH 0x5da675                       ; 005a1ae5 | = "poolMe"
    LEA ESI,[EBX + 0x33fa8]             ; 005a1aea
    PUSH ESI                            ; 005a1af0
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 005a1af1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a1af6
    PUSH 0x5da67c                       ; 005a1af9 | = "speed"
    ADD EBX,0x33fac                     ; 005a1afe
    PUSH EBX                            ; 005a1b04
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 005a1b05
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a1b0a
    POP ESI                             ; 005a1b0d
    POP EBX                             ; 005a1b0e
    RET                                 ; 005a1b0f

