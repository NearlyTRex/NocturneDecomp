; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_archive_FUN_004f1c20(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_speed_005dd98c
;   TerminatedCString s_modelName_005dd992
;   TerminatedCString s_attackCondition_005dd99c
;   TerminatedCString s_attackMode_005dd9ac
;   TerminatedCString s_mirrorPlaneActor_005dd9b7
;   TerminatedCString s_motion_state_005dd9c8
;   TerminatedCString s_morphActorType_005dd9d5
;   TerminatedCString s_mirrorCondition_005dd9e4
;   int g_CMimicClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1c20
        ;   Label: core_mimic.cpp_CMimic_archive_FUN_004f1c20
    PUSH ESI                            ; 004f1c21
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f1c22
    PUSH EBX                            ; 004f1c26
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 004f1c27
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004f1c2c
    PUSH 0x5dd98c                       ; 004f1c2f | = "speed"
    LEA ESI,[EBX + 0x10a60]             ; 004f1c34
    PUSH ESI                            ; 004f1c3a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004f1c3b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f1c40
    PUSH 0x5dd992                       ; 004f1c43 | = "modelName"
    LEA ESI,[EBX + 0x2b4]               ; 004f1c48
    PUSH ESI                            ; 004f1c4e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 004f1c4f
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f1c54
    PUSH 0x5dd99c                       ; 004f1c57 | = "attackCondition"
    LEA EAX,[EBX + 0x10b5c]             ; 004f1c5c
    PUSH EAX                            ; 004f1c62
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004f1c63
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f1c68
    PUSH 0x5dd9ac                       ; 004f1c6b | = "attackMode"
    LEA EAX,[EBX + 0x4b6f0]             ; 004f1c70
    PUSH EAX                            ; 004f1c76
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004f1c77
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004f1c7c
    PUSH 0x5dd9b7                       ; 004f1c7f | = "mirrorPlaneActor"
    LEA EAX,[EBX + 0x4b6f4]             ; 004f1c84
    PUSH EAX                            ; 004f1c8a
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004f1c8b
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    MOV EDX,dword ptr [0x006180b8]      ; 004f1c90 | g_CMimicClassVersion
    ADD ESP,0x8                         ; 004f1c96
    CMP EDX,0x2                         ; 004f1c99
    JGE 0x004f1caa                      ; 004f1c9c
        ;   XREF to: 004f1caa (CONDITIONAL_JUMP)  ; LAB_004f1caa
    CMP dword ptr [0x006180b8],0x3      ; 004f1c9e | g_CMimicClassVersion
    JGE 0x004f1cd8                      ; 004f1ca5
        ;   XREF to: 004f1cd8 (CONDITIONAL_JUMP)  ; LAB_004f1cd8
    POP ESI                             ; 004f1ca7
    POP EBX                             ; 004f1ca8
    RET                                 ; 004f1ca9
    PUSH 0x5dd9c8                       ; 004f1caa | = "motion state"
        ;   Label: LAB_004f1caa
    PUSH ESI                            ; 004f1caf
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 004f1cb0
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bb60(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 004f1cb5
    PUSH 0x5dd9d5                       ; 004f1cb8 | = "morphActorType"
    LEA ESI,[EBX + 0x4b6f8]             ; 004f1cbd
    PUSH ESI                            ; 004f1cc3
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004f1cc4
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f1cc9
    CMP dword ptr [0x006180b8],0x3      ; 004f1ccc | g_CMimicClassVersion
    JGE 0x004f1cd8                      ; 004f1cd3
        ;   XREF to: 004f1cd8 (CONDITIONAL_JUMP)  ; LAB_004f1cd8
    POP ESI                             ; 004f1cd5
    POP EBX                             ; 004f1cd6
    RET                                 ; 004f1cd7
    PUSH 0x5dd9e4                       ; 004f1cd8 | = "mirrorCondition"
        ;   Label: LAB_004f1cd8
    ADD EBX,0x10af8                     ; 004f1cdd
    PUSH EBX                            ; 004f1ce3
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004f1ce4
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004f1ce9
    POP ESI                             ; 004f1cec
    POP EBX                             ; 004f1ced
    RET                                 ; 004f1cee

