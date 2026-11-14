; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baal_cpp_CBaal_archive_FUN_00597c70(CBaal *this_ptr)
;
; Parameters:
; CBaal *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005d96a8+1
;   TerminatedCString s_modelName_005d96af
;   TerminatedCString s_guardDistance_005d96b9
;   TerminatedCString s_motion_state_005d96c7
;   TerminatedCString s_maxFadeTime_005d96d4
;   TerminatedCString s_fadeOutOpacity_005d96e0
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

    PUSH EBX                            ; 00597c70
        ;   Label: core_baal.cpp_CBaal_archive_FUN_00597c70
    PUSH ESI                            ; 00597c71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00597c72
    PUSH EBX                            ; 00597c76
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 00597c77
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00597c7c
    PUSH 0x5d96a9                       ; 00597c7f | s_speed_005d96a8+1
    LEA ESI,[EBX + 0xcdcc]              ; 00597c84
    PUSH ESI                            ; 00597c8a
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00597c8b
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00597c90
    PUSH 0x5d96af                       ; 00597c93 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 00597c98
    PUSH ESI                            ; 00597c9e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 00597c9f
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00597ca4
    PUSH 0x5d96b9                       ; 00597ca7 | = "guardDistance"
    LEA EAX,[EBX + 0xcddc]              ; 00597cac
    PUSH EAX                            ; 00597cb2
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00597cb3
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00597cb8
    PUSH 0x5d96c7                       ; 00597cbb | = "motion state"
    PUSH ESI                            ; 00597cc0
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00597cc1
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00597cc6
    PUSH 0x5d96d4                       ; 00597cc9 | = "maxFadeTime"
    LEA EAX,[EBX + 0xd06c]              ; 00597cce
    PUSH EAX                            ; 00597cd4
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00597cd5
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00597cda
    PUSH 0x5d96e0                       ; 00597cdd | = "fadeOutOpacity"
    ADD EBX,0xd070                      ; 00597ce2
    PUSH EBX                            ; 00597ce8
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00597ce9
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00597cee
    POP ESI                             ; 00597cf1
    POP EBX                             ; 00597cf2
    RET                                 ; 00597cf3

