; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_00515f00(CPendulum *this_ptr)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005e1a99+1
;   TerminatedCString s_startEvent_005e1aa4
;   TerminatedCString s_moving_005e1aaf
;   TerminatedCString s_param_005e1ab6
;   TerminatedCString s_maxAngle_005e1abc
;   TerminatedCString s_swooshSound_005e1ac5
;   TerminatedCString s_creak1Sound_005e1ad1
;   TerminatedCString s_creak2Sound_005e1add
;   TerminatedCString s_swooshPhaseBias_005e1ae9
;   TerminatedCString s_killHero_005e1af9
;   TerminatedCString s_killEnemy_005e1b02
;   TerminatedCString s_decay_005e1b0c
;   TerminatedCString s_decayTimer_005e1b12
;   TerminatedCString s_groundType_005e1b1d
;   TerminatedCString s_stopEvent_005e1b28
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515f00
        ;   Label: core_pendulum.cpp_CPendulum_archive_FUN_00515f00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515f01
    PUSH EBX                            ; 00515f05
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00515f06
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00515f0b
    PUSH 0x5e1a9a                       ; 00515f0e | s_modelName_005e1a99+1
    LEA EAX,[EBX + 0x2b4]               ; 00515f13
    PUSH EAX                            ; 00515f19
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 00515f1a
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 00515f1f
    PUSH 0x5e1aa4                       ; 00515f22 | = "startEvent"
    LEA EAX,[EBX + 0x430]               ; 00515f27
    PUSH EAX                            ; 00515f2d
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00515f2e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00515f33
    PUSH 0x5e1aaf                       ; 00515f36 | = "moving"
    LEA EAX,[EBX + 0x4f8]               ; 00515f3b
    PUSH EAX                            ; 00515f41
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00515f42
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00515f47
    PUSH 0x5e1ab6                       ; 00515f4a | = "param"
    LEA EAX,[EBX + 0x4fc]               ; 00515f4f
    PUSH EAX                            ; 00515f55
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00515f56
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00515f5b
    PUSH 0x5e1abc                       ; 00515f5e | = "maxAngle"
    LEA EAX,[EBX + 0x504]               ; 00515f63
    PUSH EAX                            ; 00515f69
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00515f6a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    MOV EDX,dword ptr [0x0061b3a4]      ; 00515f6f | g_CPendulumClassVersion
    ADD ESP,0x8                         ; 00515f75
    CMP EDX,0x2                         ; 00515f78
    JGE 0x0051606d                      ; 00515f7b
        ;   XREF to: 0051606d (CONDITIONAL_JUMP)  ; LAB_0051606d
    CMP dword ptr [0x0061b3a4],0x3      ; 00515f81 | g_CPendulumClassVersion
        ;   Label: LAB_00515f81
    JL 0x00515fc6                       ; 00515f88
        ;   XREF to: 00515fc6 (CONDITIONAL_JUMP)  ; LAB_00515fc6
    PUSH 0x5e1ad1                       ; 00515f8a | = "creak1Sound"
    LEA EAX,[EBX + 0x52c]               ; 00515f8f
    PUSH EAX                            ; 00515f95
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00515f96
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00515f9b
    PUSH 0x5e1add                       ; 00515f9e | = "creak2Sound"
    LEA EAX,[EBX + 0x54c]               ; 00515fa3
    PUSH EAX                            ; 00515fa9
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00515faa
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00515faf
    PUSH 0x5e1ae9                       ; 00515fb2 | = "swooshPhaseBias"
    LEA EAX,[EBX + 0x528]               ; 00515fb7
    PUSH EAX                            ; 00515fbd
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00515fbe
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00515fc3
    CMP dword ptr [0x0061b3a4],0x4      ; 00515fc6 | g_CPendulumClassVersion
        ;   Label: LAB_00515fc6
    JL 0x00515ff7                       ; 00515fcd
        ;   XREF to: 00515ff7 (CONDITIONAL_JUMP)  ; LAB_00515ff7
    PUSH 0x5e1af9                       ; 00515fcf | = "killHero"
    LEA EAX,[EBX + 0x584]               ; 00515fd4
    PUSH EAX                            ; 00515fda
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00515fdb
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00515fe0
    PUSH 0x5e1b02                       ; 00515fe3 | = "killEnemy"
    LEA EAX,[EBX + 0x588]               ; 00515fe8
    PUSH EAX                            ; 00515fee
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00515fef
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00515ff4
    CMP dword ptr [0x0061b3a4],0x5      ; 00515ff7 | g_CPendulumClassVersion
        ;   Label: LAB_00515ff7
    JL 0x00516028                       ; 00515ffe
        ;   XREF to: 00516028 (CONDITIONAL_JUMP)  ; LAB_00516028
    PUSH 0x5e1b0c                       ; 00516000 | = "decay"
    LEA EAX,[EBX + 0x58c]               ; 00516005
    PUSH EAX                            ; 0051600b
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0051600c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00516011
    PUSH 0x5e1b12                       ; 00516014 | = "decayTimer"
    LEA EAX,[EBX + 0x590]               ; 00516019
    PUSH EAX                            ; 0051601f
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00516020
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00516025
    CMP dword ptr [0x0061b3a4],0x6      ; 00516028 | g_CPendulumClassVersion
        ;   Label: LAB_00516028
    JL 0x00516045                       ; 0051602f
        ;   XREF to: 00516045 (CONDITIONAL_JUMP)  ; LAB_00516045
    PUSH 0x5e1b1d                       ; 00516031 | = "groundType"
    LEA EAX,[EBX + 0x594]               ; 00516036
    PUSH EAX                            ; 0051603c
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0051603d
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00516042
    CMP dword ptr [0x0061b3a4],0x7      ; 00516045 | g_CPendulumClassVersion
        ;   Label: LAB_00516045
    JL 0x00516062                       ; 0051604c
        ;   XREF to: 00516062 (CONDITIONAL_JUMP)  ; LAB_00516062
    PUSH 0x5e1b28                       ; 0051604e | = "stopEvent"
    LEA EAX,[EBX + 0x494]               ; 00516053
    PUSH EAX                            ; 00516059
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0051605a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0051605f
    CMP dword ptr [0x0061b3a4],0x8      ; 00516062 | g_CPendulumClassVersion
        ;   Label: LAB_00516062
    JGE 0x00516086                      ; 00516069
        ;   XREF to: 00516086 (CONDITIONAL_JUMP)  ; LAB_00516086
    POP EBX                             ; 0051606b
    RET                                 ; 0051606c
    PUSH 0x5e1ac5                       ; 0051606d | = "swooshSound"
        ;   Label: LAB_0051606d
    LEA EAX,[EBX + 0x508]               ; 00516072
    PUSH EAX                            ; 00516078
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00516079
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0051607e
    JMP 0x00515f81                      ; 00516081
        ;   XREF to: 00515f81 (UNCONDITIONAL_JUMP)  ; LAB_00515f81
    PUSH 0x5e1b32                       ; 00516086 | = "oneShot"
        ;   Label: LAB_00516086
    ADD EBX,0x598                       ; 0051608b
    PUSH EBX                            ; 00516091
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00516092
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00516097
    POP EBX                             ; 0051609a
    RET                                 ; 0051609b

