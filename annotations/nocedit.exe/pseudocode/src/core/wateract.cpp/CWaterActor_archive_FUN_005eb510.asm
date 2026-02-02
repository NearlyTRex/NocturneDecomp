; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_wateract_cpp_CWaterActor_archive_FUN_005eb510(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_size_0065730f
;   TerminatedCString s_opacity_00657314
;   TerminatedCString s_heightDelta_0065731c
;   TerminatedCString s_timeToMove_00657328
;   TerminatedCString s_moveSound_00657333
;   TerminatedCString s_moveEvent_0065733d
;   TerminatedCString s_param_00657347
;   TerminatedCString s_heightDelta_0065734d
;   TerminatedCString s_timeToMoveUp_00657359
;   TerminatedCString s_timeToMoveDown_00657366
;   TerminatedCString s_moveUpSound_00657375
;   TerminatedCString s_moveDownSound_00657381
;   TerminatedCString s_moveUpEvent_0065738f
;   TerminatedCString s_moveDownEvent_0065739b
;   TerminatedCString s_param_006573a9
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_archiveVector_FUN_0040b340
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eb510
        ;   Label: core_wateract.cpp_CWaterActor_archive_FUN_005eb510
    MOV EBX,dword ptr [ESP + 0x8]       ; 005eb511
    PUSH EBX                            ; 005eb515
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 005eb516
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005eb51b
    PUSH 0x65730f                       ; 005eb51e | = "size"
    LEA EAX,[EBX + 0x158]               ; 005eb523
    PUSH EAX                            ; 005eb529
    CALL core_actor.cpp_archiveVector_FUN_0040b340 ; 005eb52a
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb52f
    PUSH 0x657314                       ; 005eb532 | = "opacity"
    LEA EAX,[EBX + 0x164]               ; 005eb537
    PUSH EAX                            ; 005eb53d
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005eb53e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00684870]      ; 005eb543 | g_CWaterActorVersion
    ADD ESP,0x8                         ; 005eb549
    CMP EDX,0x2                         ; 005eb54c
    JZ 0x005eb65b                       ; 005eb54f
        ;   XREF to: 005eb65b (CONDITIONAL_JUMP)  ; LAB_005eb65b
    CMP dword ptr [0x00684870],0x3      ; 005eb555 | g_CWaterActorVersion
        ;   Label: LAB_005eb555
    JL 0x005eb616                       ; 005eb55c
        ;   XREF to: 005eb616 (CONDITIONAL_JUMP)  ; LAB_005eb616
    PUSH 0x65734d                       ; 005eb562 | = "heightDelta"
    LEA EAX,[EBX + 0x168]               ; 005eb567
    PUSH EAX                            ; 005eb56d
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb56e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb573
    PUSH 0x657359                       ; 005eb576 | = "timeToMoveUp"
    LEA EAX,[EBX + 0x16c]               ; 005eb57b
    PUSH EAX                            ; 005eb581
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb582
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb587
    PUSH 0x657366                       ; 005eb58a | = "timeToMoveDown"
    LEA EAX,[EBX + 0x170]               ; 005eb58f
    PUSH EAX                            ; 005eb595
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb596
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb59b
    PUSH 0x657375                       ; 005eb59e | = "moveUpSound"
    LEA EAX,[EBX + 0x174]               ; 005eb5a3
    PUSH EAX                            ; 005eb5a9
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005eb5aa
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005eb5af
    PUSH 0x657381                       ; 005eb5b2 | = "moveDownSound"
    LEA EAX,[EBX + 0x194]               ; 005eb5b7
    PUSH EAX                            ; 005eb5bd
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005eb5be
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005eb5c3
    PUSH 0x65738f                       ; 005eb5c6 | = "moveUpEvent"
    LEA EAX,[EBX + 0x1b4]               ; 005eb5cb
    PUSH EAX                            ; 005eb5d1
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005eb5d2
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005eb5d7
    PUSH 0x65739b                       ; 005eb5da | = "moveDownEvent"
    LEA EAX,[EBX + 0x218]               ; 005eb5df
    PUSH EAX                            ; 005eb5e5
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005eb5e6
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005eb5eb
    PUSH 0x6573a9                       ; 005eb5ee | = "param"
    LEA EAX,[EBX + 0x27c]               ; 005eb5f3
    PUSH EAX                            ; 005eb5f9
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb5fa
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb5ff
    PUSH 0x6573af                       ; 005eb602 | = "state"
    LEA EAX,[EBX + 0x280]               ; 005eb607
    PUSH EAX                            ; 005eb60d
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005eb60e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb613
    CMP dword ptr [0x00684870],0x4      ; 005eb616 | g_CWaterActorVersion
        ;   Label: LAB_005eb616
    JL 0x005eb633                       ; 005eb61d
        ;   XREF to: 005eb633 (CONDITIONAL_JUMP)  ; LAB_005eb633
    PUSH 0x6573b5                       ; 005eb61f | = "patchSize"
    LEA EAX,[EBX + 0x284]               ; 005eb624
    PUSH EAX                            ; 005eb62a
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb62b
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb630
    CMP dword ptr [0x00684870],0x5      ; 005eb633 | g_CWaterActorVersion
        ;   Label: LAB_005eb633
    JL 0x005eb650                       ; 005eb63a
        ;   XREF to: 005eb650 (CONDITIONAL_JUMP)  ; LAB_005eb650
    PUSH 0x6573bf                       ; 005eb63c | = "roundFlag"
    LEA EAX,[EBX + 0x288]               ; 005eb641
    PUSH EAX                            ; 005eb647
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005eb648
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb64d
    CMP dword ptr [0x00684870],0x6      ; 005eb650 | g_CWaterActorVersion
        ;   Label: LAB_005eb650
    JGE 0x005eb6c4                      ; 005eb657
        ;   XREF to: 005eb6c4 (CONDITIONAL_JUMP)  ; LAB_005eb6c4
    POP EBX                             ; 005eb659
    RET                                 ; 005eb65a
    PUSH 0x65731c                       ; 005eb65b | = "heightDelta"
        ;   Label: LAB_005eb65b
    LEA EAX,[EBX + 0x168]               ; 005eb660
    PUSH EAX                            ; 005eb666
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb667
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb66c
    PUSH 0x657328                       ; 005eb66f | = "timeToMove"
    LEA EAX,[EBX + 0x16c]               ; 005eb674
    PUSH EAX                            ; 005eb67a
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb67b
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb680
    PUSH 0x657333                       ; 005eb683 | = "moveSound"
    LEA EAX,[EBX + 0x174]               ; 005eb688
    PUSH EAX                            ; 005eb68e
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005eb68f
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005eb694
    PUSH 0x65733d                       ; 005eb697 | = "moveEvent"
    LEA EAX,[EBX + 0x1b4]               ; 005eb69c
    PUSH EAX                            ; 005eb6a2
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005eb6a3
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005eb6a8
    PUSH 0x657347                       ; 005eb6ab | = "param"
    LEA EAX,[EBX + 0x27c]               ; 005eb6b0
    PUSH EAX                            ; 005eb6b6
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005eb6b7
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb6bc
    JMP 0x005eb555                      ; 005eb6bf
        ;   XREF to: 005eb555 (UNCONDITIONAL_JUMP)  ; LAB_005eb555
    PUSH 0x6573c9                       ; 005eb6c4 | = "colR"
        ;   Label: LAB_005eb6c4
    LEA EAX,[EBX + 0x28c]               ; 005eb6c9
    PUSH EAX                            ; 005eb6cf
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005eb6d0
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb6d5
    PUSH 0x6573ce                       ; 005eb6d8 | = "colG"
    LEA EAX,[EBX + 0x290]               ; 005eb6dd
    PUSH EAX                            ; 005eb6e3
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005eb6e4
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb6e9
    PUSH 0x6573d3                       ; 005eb6ec | = "colB"
    ADD EBX,0x294                       ; 005eb6f1
    PUSH EBX                            ; 005eb6f7
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005eb6f8
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005eb6fd
    POP EBX                             ; 005eb700
    RET                                 ; 005eb701

