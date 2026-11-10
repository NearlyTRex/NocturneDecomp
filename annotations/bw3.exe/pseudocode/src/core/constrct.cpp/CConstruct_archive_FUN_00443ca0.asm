; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_constrct_cpp_CConstruct_archive_FUN_00443ca0(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_speed_005b96a4+1
;   TerminatedCString s_modelName_005b96ab
;   TerminatedCString s_motion_state_005b96b5
;   TerminatedCString s_fallEvent_005b96c2
;   TerminatedCString s_mistState_005b96cc
;   TerminatedCString s_vanishTimer_005b96d6
;   TerminatedCString s_newPos_005b96e2
;   TerminatedCString s_deathEvent_005b96e9
;   TerminatedCString s_recombineTime_005b96f4
;   TerminatedCString s_blownUp_005b9702
;   TerminatedCString s_param_005b970a
;   TerminatedCString s_boxCount_005b9710
;   TerminatedCString s_partStatus_005b9719
;   TerminatedCString s_boxListPos_005b9724
;   TerminatedCString s_boxListOrient_005b972f
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b930
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveMotionState_FUN_0040bab0
;   core_actor.cpp_archivePartStatus_FUN_0040bba0
;   core_actor.cpp_archiveQuaternion_FUN_0040b5e0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_enemy.cpp_CEnemy_archive_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443ca0
        ;   Label: core_constrct.cpp_CConstruct_archive_FUN_00443ca0
    PUSH EBP                            ; 00443ca1
    SUB ESP,0x20                        ; 00443ca2
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00443ca5
    PUSH EDX                            ; 00443ca9
    CALL core_enemy.cpp_CEnemy_archive_FUN_00489120 ; 00443caa
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00489120(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00443caf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443cb2
    PUSH 0x5b96a5                       ; 00443cb6 | s_speed_005b96a4+1
    ADD EAX,0xcdcc                      ; 00443cbb
    PUSH EAX                            ; 00443cc0
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00443cc1
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00443cc6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00443cc9
    PUSH 0x5b96ab                       ; 00443ccd | = "modelName"
    ADD EBX,0x158                       ; 00443cd2
    PUSH EBX                            ; 00443cd8
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30 ; 00443cd9
        ;   XREF to: 0040ba30 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveDeformableModelInstance_FUN_0040ba30(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00443cde
    PUSH 0x5b96b5                       ; 00443ce1 | = "motion state"
    PUSH EBX                            ; 00443ce6
    CALL core_actor.cpp_archiveMotionState_FUN_0040bab0 ; 00443ce7
        ;   XREF to: 0040bab0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040bab0(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 00443cec
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443cef
    PUSH 0x5b96c2                       ; 00443cf3 | = "fallEvent"
    ADD EAX,0xd054                      ; 00443cf8
    PUSH EAX                            ; 00443cfd
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00443cfe
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV ECX,dword ptr [0x005f16c0]      ; 00443d03 | g_CConstructClassVersion
    ADD ESP,0x8                         ; 00443d09
    CMP ECX,0x3                         ; 00443d0c
    JL 0x00443d20                       ; 00443d0f
        ;   XREF to: 00443d20 (CONDITIONAL_JUMP)  ; LAB_00443d20
    CMP dword ptr [0x005f16c0],0x1      ; 00443d11 | g_CConstructClassVersion
    JG 0x00443d7b                       ; 00443d18
        ;   XREF to: 00443d7b (CONDITIONAL_JUMP)  ; LAB_00443d7b
    ADD ESP,0x20                        ; 00443d1a
        ;   Label: LAB_00443d1a
    POP EBP                             ; 00443d1d
    POP EBX                             ; 00443d1e
    RET                                 ; 00443d1f
    PUSH 0x5b96cc                       ; 00443d20 | = "mistState"
        ;   Label: LAB_00443d20
    XOR EBX,EBX                         ; 00443d25
    LEA EAX,[ESP + 0x10]                ; 00443d27
    MOV dword ptr [ESP + 0x10],EBX      ; 00443d2b
    MOV dword ptr [ESP + 0x14],EBX      ; 00443d2f
    MOV dword ptr [ESP + 0xc],EBX       ; 00443d33
    PUSH EAX                            ; 00443d37
    MOV dword ptr [ESP + 0xc],EBX       ; 00443d38
    MOV dword ptr [ESP + 0x8],EBX       ; 00443d3c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00443d40
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00443d45
    PUSH 0x5b96d6                       ; 00443d48 | = "vanishTimer"
    LEA EAX,[ESP + 0x14]                ; 00443d4d
    PUSH EAX                            ; 00443d51
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00443d52
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00443d57
    PUSH 0x5b96e2                       ; 00443d5a | = "newPos"
    LEA EAX,[ESP + 0x4]                 ; 00443d5f
    PUSH EAX                            ; 00443d63
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00443d64
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00443d69
    CMP dword ptr [0x005f16c0],0x1      ; 00443d6c | g_CConstructClassVersion
    JG 0x00443d7b                       ; 00443d73
        ;   XREF to: 00443d7b (CONDITIONAL_JUMP)  ; LAB_00443d7b
    ADD ESP,0x20                        ; 00443d75
    POP EBP                             ; 00443d78
    POP EBX                             ; 00443d79
    RET                                 ; 00443d7a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443d7b
        ;   Label: LAB_00443d7b
    PUSH 0x5b96e9                       ; 00443d7f | = "deathEvent"
    ADD EAX,0xd114                      ; 00443d84
    PUSH EAX                            ; 00443d89
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00443d8a
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00443d8f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443d92
    PUSH 0x5b96f4                       ; 00443d96 | = "recombineTime"
    ADD EAX,0xd178                      ; 00443d9b
    PUSH EAX                            ; 00443da0
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00443da1
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00443da6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443da9
    PUSH 0x5b9702                       ; 00443dad | = "blownUp"
    ADD EAX,0xd844                      ; 00443db2
    PUSH EAX                            ; 00443db7
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00443db8
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00443dbd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443dc0
    PUSH 0x5b970a                       ; 00443dc4 | = "param"
    ADD EAX,0xd850                      ; 00443dc9
    PUSH EAX                            ; 00443dce
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00443dcf
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 00443dd4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443dd7
    PUSH 0x5b9710                       ; 00443ddb | = "boxCount"
    ADD EAX,0xd180                      ; 00443de0
    PUSH EAX                            ; 00443de5
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00443de6
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00443deb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443dee
    PUSH 0x5b9719                       ; 00443df2 | = "partStatus"
    ADD EAX,0x158                       ; 00443df7
    PUSH EAX                            ; 00443dfc
    CALL core_actor.cpp_archivePartStatus_FUN_0040bba0 ; 00443dfd
        ;   XREF to: 0040bba0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archivePartStatus_FUN_0040bba0(CDeformableModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00443e02
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00443e05
    MOV ECX,dword ptr [EAX + 0xd180]    ; 00443e09
    XOR EBX,EBX                         ; 00443e0f
    TEST ECX,ECX                        ; 00443e11
    JLE 0x00443d1a                      ; 00443e13
        ;   XREF to: 00443d1a (CONDITIONAL_JUMP)  ; LAB_00443d1a
    PUSH EDI                            ; 00443e19
    PUSH ESI                            ; 00443e1a
    MOV ESI,dword ptr [ESP + 0x34]      ; 00443e1b
    ADD EAX,0xd184                      ; 00443e1f
    MOV EBP,dword ptr [ESP + 0x34]      ; 00443e24
    MOV dword ptr [ESP + 0x1c],EAX      ; 00443e28
    MOV EAX,dword ptr [ESP + 0x34]      ; 00443e2c
    MOV EDI,dword ptr [ESP + 0x34]      ; 00443e30
    ADD EAX,0xd1bc                      ; 00443e34
    ADD ESI,0xd1c8                      ; 00443e39
    MOV dword ptr [ESP + 0x20],EAX      ; 00443e3f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00443e43
    ADD EBP,0xd1ac                      ; 00443e47
    ADD EAX,0xd190                      ; 00443e4d
    ADD EDI,0xd19c                      ; 00443e52
    MOV dword ptr [ESP + 0x24],EAX      ; 00443e58
    IMUL EAX,EBX,0x48                   ; 00443e5c
        ;   Label: LAB_00443e5c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00443e5f
    PUSH 0x5b9724                       ; 00443e63 | = "boxListPos"
    ADD EAX,EDX                         ; 00443e68
    PUSH EAX                            ; 00443e6a
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00443e6b
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00443e70
    PUSH 0x5b972f                       ; 00443e73 | = "boxListOrient"
    MOV ECX,dword ptr [ESP + 0x28]      ; 00443e78
    PUSH ECX                            ; 00443e7c
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00443e7d
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00443e82
    PUSH 0x5b973d                       ; 00443e85 | = "boxListDestOrient"
    PUSH EDI                            ; 00443e8a
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b5e0 ; 00443e8b
        ;   XREF to: 0040b5e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveQuaternion_FUN_0040b5e0()
    ADD ESP,0x8                         ; 00443e90
    PUSH 0x5b974f                       ; 00443e93 | = "boxListStartOrient"
    PUSH EBP                            ; 00443e98
    CALL core_actor.cpp_archiveQuaternion_FUN_0040b5e0 ; 00443e99
        ;   XREF to: 0040b5e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveQuaternion_FUN_0040b5e0()
    ADD ESP,0x8                         ; 00443e9e
    PUSH 0x5b9762                       ; 00443ea1 | = "sourcePos"
    MOV EAX,dword ptr [ESP + 0x24]      ; 00443ea6
    PUSH EAX                            ; 00443eaa
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00443eab
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b400()
    ADD ESP,0x8                         ; 00443eb0
    PUSH 0x5b976c                       ; 00443eb3 | = "boxListPart"
    INC EBX                             ; 00443eb8
    PUSH ESI                            ; 00443eb9
    ADD EDI,0x48                        ; 00443eba
    ADD EBP,0x48                        ; 00443ebd
    CALL core_actor.cpp_archiveActor_FUN_0040b930 ; 00443ec0
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b930()
    ADD ESP,0x8                         ; 00443ec5
    ADD ESI,0x48                        ; 00443ec8
    MOV EDX,dword ptr [ESP + 0x20]      ; 00443ecb
    MOV ECX,dword ptr [ESP + 0x24]      ; 00443ecf
    MOV EAX,dword ptr [ESP + 0x34]      ; 00443ed3
    ADD EDX,0x48                        ; 00443ed7
    ADD ECX,0x48                        ; 00443eda
    MOV dword ptr [ESP + 0x20],EDX      ; 00443edd
    MOV EDX,dword ptr [EAX + 0xd180]    ; 00443ee1
    MOV dword ptr [ESP + 0x24],ECX      ; 00443ee7
    CMP EBX,EDX                         ; 00443eeb
    JL 0x00443e5c                       ; 00443eed
        ;   XREF to: 00443e5c (CONDITIONAL_JUMP)  ; LAB_00443e5c
    POP ESI                             ; 00443ef3
    POP EDI                             ; 00443ef4
    ADD ESP,0x20                        ; 00443ef5
    POP EBP                             ; 00443ef8
    POP EBX                             ; 00443ef9
    RET                                 ; 00443efa

