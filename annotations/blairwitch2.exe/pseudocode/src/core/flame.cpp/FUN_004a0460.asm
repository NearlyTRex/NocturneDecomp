; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_FUN_004a0460(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_flameSize_005d58b4+1
;   TerminatedCString s_whichFlame_005d58bf
;   TerminatedCString s_globeScalar_005d58ca
;   TerminatedCString s_onEvent_005d58d6
;   TerminatedCString s_onEvent_005d58de
;   TerminatedCString s_flameState_005d58e6
;   TerminatedCString s_intensity_005d58f1
;   TerminatedCString s_randomness_005d58fb
;   TerminatedCString s_burnHero_005d5906
;   TerminatedCString s_burnEnemy_005d590f
;   int g_CFlameClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0460
        ;   Label: core_flame.cpp_FUN_004a0460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0461
    PUSH EBX                            ; 004a0465
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004a0466
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a046b
    PUSH 0x5d58b5                       ; 004a046e | s_flameSize_005d58b4+1
    LEA EAX,[EBX + 0x2b4]               ; 004a0473
    PUSH EAX                            ; 004a0479
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 004a047a
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    MOV EDX,dword ptr [0x00615ec0]      ; 004a047f | g_CFlameClassVersion
    ADD ESP,0x8                         ; 004a0485
    CMP EDX,0x2                         ; 004a0488
    JGE 0x004a0524                      ; 004a048b
        ;   XREF to: 004a0524 (CONDITIONAL_JUMP)  ; LAB_004a0524
    CMP dword ptr [0x00615ec0],0x3      ; 004a0491 | g_CFlameClassVersion
        ;   Label: LAB_004a0491
    JL 0x004a04ae                       ; 004a0498
        ;   XREF to: 004a04ae (CONDITIONAL_JUMP)  ; LAB_004a04ae
    PUSH 0x5d58d6                       ; 004a049a | = "onEvent"
    LEA EAX,[EBX + 0x314]               ; 004a049f
    PUSH EAX                            ; 004a04a5
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004a04a6
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a04ab
    CMP dword ptr [0x00615ec0],0x4      ; 004a04ae | g_CFlameClassVersion
        ;   Label: LAB_004a04ae
    JL 0x004a04cb                       ; 004a04b5
        ;   XREF to: 004a04cb (CONDITIONAL_JUMP)  ; LAB_004a04cb
    PUSH 0x5d58de                       ; 004a04b7 | = "onEvent"
    LEA EAX,[EBX + 0x378]               ; 004a04bc
    PUSH EAX                            ; 004a04c2
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004a04c3
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004a04c8
    CMP dword ptr [0x00615ec0],0x5      ; 004a04cb | g_CFlameClassVersion
        ;   Label: LAB_004a04cb
    JL 0x004a04e8                       ; 004a04d2
        ;   XREF to: 004a04e8 (CONDITIONAL_JUMP)  ; LAB_004a04e8
    PUSH 0x5d58e6                       ; 004a04d4 | = "flameState"
    LEA EAX,[EBX + 0x310]               ; 004a04d9
    PUSH EAX                            ; 004a04df
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004a04e0
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a04e5
    CMP dword ptr [0x00615ec0],0x6      ; 004a04e8 | g_CFlameClassVersion
        ;   Label: LAB_004a04e8
    JL 0x004a0519                       ; 004a04ef
        ;   XREF to: 004a0519 (CONDITIONAL_JUMP)  ; LAB_004a0519
    PUSH 0x5d58f1                       ; 004a04f1 | = "intensity"
    LEA EAX,[EBX + 0x3dc]               ; 004a04f6
    PUSH EAX                            ; 004a04fc
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004a04fd
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004a0502
    PUSH 0x5d58fb                       ; 004a0505 | = "randomness"
    LEA EAX,[EBX + 0x3e0]               ; 004a050a
    PUSH EAX                            ; 004a0510
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004a0511
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004a0516
    CMP dword ptr [0x00615ec0],0x7      ; 004a0519 | g_CFlameClassVersion
        ;   Label: LAB_004a0519
    JGE 0x004a0551                      ; 004a0520
        ;   XREF to: 004a0551 (CONDITIONAL_JUMP)  ; LAB_004a0551
    POP EBX                             ; 004a0522
    RET                                 ; 004a0523
    PUSH 0x5d58bf                       ; 004a0524 | = "whichFlame"
        ;   Label: LAB_004a0524
    LEA EAX,[EBX + 0x304]               ; 004a0529
    PUSH EAX                            ; 004a052f
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004a0530
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0535
    PUSH 0x5d58ca                       ; 004a0538 | = "globeScalar"
    LEA EAX,[EBX + 0x308]               ; 004a053d
    PUSH EAX                            ; 004a0543
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004a0544
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004a0549
    JMP 0x004a0491                      ; 004a054c
        ;   XREF to: 004a0491 (UNCONDITIONAL_JUMP)  ; LAB_004a0491
    PUSH 0x5d5906                       ; 004a0551 | = "burnHero"
        ;   Label: LAB_004a0551
    LEA EAX,[EBX + 0x3e4]               ; 004a0556
    PUSH EAX                            ; 004a055c
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004a055d
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0562
    PUSH 0x5d590f                       ; 004a0565 | = "burnEnemy"
    ADD EBX,0x3e8                       ; 004a056a
    PUSH EBX                            ; 004a0570
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004a0571
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a0576
    POP EBX                             ; 004a0579
    RET                                 ; 004a057a

