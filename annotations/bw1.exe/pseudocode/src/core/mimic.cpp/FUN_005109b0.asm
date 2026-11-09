; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mimic_cpp_FUN_005109b0(CEnemy *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_speed_005e8a13
;   TerminatedCString s_modelName_005e8a19
;   TerminatedCString s_attackCondition_005e8a23
;   TerminatedCString s_attackMode_005e8a33
;   TerminatedCString s_mirrorPlaneActor_005e8a3e
;   TerminatedCString s_motion_state_005e8a4f
;   TerminatedCString s_morphActorType_005e8a5c
;   TerminatedCString s_mirrorCondition_005e8a6b
;   int g_CMimicClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_FUN_0040b7f0
;   core_actor.cpp_FUN_0040b870
;   core_enemy.cpp_CEnemy_archive_FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005109b0
        ;   Label: core_mimic.cpp_FUN_005109b0
    PUSH ESI                            ; 005109b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005109b2
    PUSH EBX                            ; 005109b6
    CALL core_enemy.cpp_CEnemy_archive_FUN_004a0520 ; 005109b7
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004a0520(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005109bc
    PUSH 0x5e8a13                       ; 005109bf | = "speed"
    LEA ESI,[EBX + 0xc1d0]              ; 005109c4
    PUSH ESI                            ; 005109ca
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005109cb
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 005109d0
    PUSH 0x5e8a19                       ; 005109d3 | = "modelName"
    LEA ESI,[EBX + 0x158]               ; 005109d8
    PUSH ESI                            ; 005109de
    CALL core_actor.cpp_FUN_0040b7f0    ; 005109df
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b7f0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 005109e4
    PUSH 0x5e8a23                       ; 005109e7 | = "attackCondition"
    LEA EAX,[EBX + 0xc2cc]              ; 005109ec
    PUSH EAX                            ; 005109f2
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005109f3
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005109f8
    PUSH 0x5e8a33                       ; 005109fb | = "attackMode"
    LEA EAX,[EBX + 0x46e60]             ; 00510a00
    PUSH EAX                            ; 00510a06
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00510a07
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00510a0c
    PUSH 0x5e8a3e                       ; 00510a0f | = "mirrorPlaneActor"
    LEA EAX,[EBX + 0x46e64]             ; 00510a14
    PUSH EAX                            ; 00510a1a
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00510a1b
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    MOV EDX,dword ptr [0x0061f5a0]      ; 00510a20 | g_CMimicClassVersion
    ADD ESP,0x8                         ; 00510a26
    CMP EDX,0x2                         ; 00510a29
    JGE 0x00510a3a                      ; 00510a2c
        ;   XREF to: 00510a3a (CONDITIONAL_JUMP)  ; LAB_00510a3a
    CMP dword ptr [0x0061f5a0],0x3      ; 00510a2e | g_CMimicClassVersion
    JGE 0x00510a68                      ; 00510a35
        ;   XREF to: 00510a68 (CONDITIONAL_JUMP)  ; LAB_00510a68
    POP ESI                             ; 00510a37
    POP EBX                             ; 00510a38
    RET                                 ; 00510a39
    PUSH 0x5e8a4f                       ; 00510a3a | = "motion state"
        ;   Label: LAB_00510a3a
    PUSH ESI                            ; 00510a3f
    CALL core_actor.cpp_FUN_0040b870    ; 00510a40
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_0040b870(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00510a45
    PUSH 0x5e8a5c                       ; 00510a48 | = "morphActorType"
    LEA ESI,[EBX + 0x46e68]             ; 00510a4d
    PUSH ESI                            ; 00510a53
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00510a54
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00510a59
    CMP dword ptr [0x0061f5a0],0x3      ; 00510a5c | g_CMimicClassVersion
    JGE 0x00510a68                      ; 00510a63
        ;   XREF to: 00510a68 (CONDITIONAL_JUMP)  ; LAB_00510a68
    POP ESI                             ; 00510a65
    POP EBX                             ; 00510a66
    RET                                 ; 00510a67
    PUSH 0x5e8a6b                       ; 00510a68 | = "mirrorCondition"
        ;   Label: LAB_00510a68
    ADD EBX,0xc268                      ; 00510a6d
    PUSH EBX                            ; 00510a73
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 00510a74
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00510a79
    POP ESI                             ; 00510a7c
    POP EBX                             ; 00510a7d
    RET                                 ; 00510a7e

