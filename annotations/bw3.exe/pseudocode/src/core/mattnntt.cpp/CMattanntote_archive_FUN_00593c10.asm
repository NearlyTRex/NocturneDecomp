; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mattnntt_cpp_CMattanntote_archive_FUN_00593c10(CMattanntote *this_ptr)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d9202+1
;   TerminatedCString s_modelName_005d9209
;   TerminatedCString s_guardDistance_005d9213
;   TerminatedCString s_motion_state_005d9221
;   TerminatedCString s_maxFadeTime_005d922e
;   TerminatedCString s_fadeOutOpacity_005d923a
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00593c10
        ;   Label: core_mattnntt.cpp_CMattanntote_archive_FUN_00593c10
    PUSH ESI                            ; 00593c11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00593c12
    PUSH EBX                            ; 00593c16
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 00593c17
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00593c1c
    PUSH 0x5d9203                       ; 00593c1f | s_speed_005d9202+1
    LEA ESI,[EBX + 0xcdcc]              ; 00593c24
    PUSH ESI                            ; 00593c2a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00593c2b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00593c30
    PUSH 0x5d9209                       ; 00593c33 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00593c38
    PUSH ESI                            ; 00593c3e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 00593c3f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00593c44
    PUSH 0x5d9213                       ; 00593c47 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 00593c4c
    PUSH EAX                            ; 00593c52
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00593c53
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00593c58
    PUSH 0x5d9221                       ; 00593c5b | = "motion state"
    PUSH ESI                            ; 00593c60
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00593c61
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00593c66
    PUSH 0x5d922e                       ; 00593c69 | = "maxFadeTime"
    LEA EAX,[EBX + 0xd06c]              ; 00593c6e
    PUSH EAX                            ; 00593c74
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00593c75
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00593c7a
    PUSH 0x5d923a                       ; 00593c7d | = "fadeOutOpacity"
    ADD EBX,0xd070                      ; 00593c82
    PUSH EBX                            ; 00593c88
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00593c89
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00593c8e
    POP ESI                             ; 00593c91
    POP EBX                             ; 00593c92
    RET                                 ; 00593c93

