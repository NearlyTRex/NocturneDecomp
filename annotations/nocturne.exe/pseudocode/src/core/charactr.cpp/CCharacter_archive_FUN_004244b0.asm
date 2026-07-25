; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_archive_FUN_004244b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004b49a0 at 004b4a33
;   FUN_004eed10 at 004eed20
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0 at 00479731
;
; Referenced Globals:
;   TerminatedCString s_hitPoints_00579e21
;   TerminatedCString s_numCarryHands_00579e2b
;   TerminatedCString s_carry_hand_00579e39
;   TerminatedCString s_carry_actor_00579e44
;   TerminatedCString s_numCarryHands_00579e50
;   TerminatedCString s_carry_hand_00579e5e
;   TerminatedCString s_carry_actor_00579e69
;   TerminatedCString s_talkToMeEvent_00579e75
;   TerminatedCString s_grabbedBy_00579e83
;   TerminatedCString s_grabbedType_00579e8d
;   TerminatedCString s_clothList_00579e99
;   TerminatedCString s_sizeScale_00579ea3
;   TerminatedCString s_healthBarMode_00579ead
;   TerminatedCString s_descriptiveName_00579ebb
;   TerminatedCString s_maxHitPoints_00579ecb
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveClothList_FUN_0040cf70
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveLocalizedString_FUN_0040c7f0
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004244b0
        ;   Label: core_charactr.cpp_CCharacter_archive_FUN_004244b0
    PUSH ESI                            ; 004244b1
    PUSH EDI                            ; 004244b2
    PUSH EBP                            ; 004244b3
    SUB ESP,0x10                        ; 004244b4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004244b7
    PUSH EBX                            ; 004244bb
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004244bc
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 004244c1
    PUSH 0x579e21                       ; 004244c4 | = "hitPoints"
    LEA EAX,[EBX + 0x2434]              ; 004244c9
    PUSH EAX                            ; 004244cf
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004244d0
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005ad1e8]      ; 004244d5 | INT_005ad1e8
    ADD ESP,0x8                         ; 004244db
    CMP EDX,0x2                         ; 004244de
    JL 0x00424560                       ; 004244e1
        ;   XREF to: 00424560 (CONDITIONAL_JUMP)  ; LAB_00424560
    CMP dword ptr [0x00763e88],0x1      ; 004244e7 | DAT_00763e88
    JZ 0x00424600                       ; 004244ee
        ;   XREF to: 00424600 (CONDITIONAL_JUMP)  ; LAB_00424600
    XOR ESI,ESI                         ; 004244f4
    MOV EAX,EBX                         ; 004244f6
    MOV dword ptr [ESP],ESI             ; 004244f8
    LEA EDX,[EBX + 0x88]                ; 004244fb
    MOV dword ptr [ESP + 0xc],ESI       ; 00424501
    CMP dword ptr [EAX + 0x24ac],0x0    ; 00424505
        ;   Label: LAB_00424505
    JZ 0x00424512                       ; 0042450c
        ;   XREF to: 00424512 (CONDITIONAL_JUMP)  ; LAB_00424512
    INC dword ptr [ESP + 0xc]           ; 0042450e
    ADD EAX,0x44                        ; 00424512
        ;   Label: LAB_00424512
    CMP EAX,EDX                         ; 00424515
    JNZ 0x00424505                      ; 00424517
        ;   XREF to: 00424505 (CONDITIONAL_JUMP)  ; LAB_00424505
    PUSH 0x579e50                       ; 00424519 | = "numCarryHands"
    LEA EAX,[ESP + 0x10]                ; 0042451e
    MOV EDI,0x2                         ; 00424522
    PUSH EAX                            ; 00424527
    XOR EBP,EBP                         ; 00424528
    MOV dword ptr [ESP + 0x8],EDI       ; 0042452a
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0042452e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00424533
    LEA ESI,[EBX + 0x24a4]              ; 00424536
    MOV dword ptr [ESP],EBP             ; 0042453c
    IMUL EAX,dword ptr [ESP],0x44       ; 0042453f
        ;   Label: LAB_0042453f
    CMP dword ptr [EBX + EAX*0x1 + 0x24ac],0x0 ; 00424543
    JNZ 0x00424667                      ; 0042454b
        ;   XREF to: 00424667 (CONDITIONAL_JUMP)  ; LAB_00424667
    MOV EBP,dword ptr [ESP]             ; 00424551
        ;   Label: LAB_00424551
    INC EBP                             ; 00424554
    MOV dword ptr [ESP],EBP             ; 00424555
    CMP EBP,0x2                         ; 00424558
    JL 0x0042453f                       ; 0042455b
        ;   XREF to: 0042453f (CONDITIONAL_JUMP)  ; LAB_0042453f
    LEA EAX,[EAX]                       ; 0042455d
    CMP dword ptr [0x005ad1e8],0x3      ; 00424560 | INT_005ad1e8
        ;   Label: LAB_00424560
    JL 0x0042457d                       ; 00424567
        ;   XREF to: 0042457d (CONDITIONAL_JUMP)  ; LAB_0042457d
    PUSH 0x579e75                       ; 00424569 | = "talkToMeEvent"
    LEA EAX,[EBX + 0x252c]              ; 0042456e
    PUSH EAX                            ; 00424574
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00424575
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0042457a
    CMP dword ptr [0x005ad1e8],0x4      ; 0042457d | INT_005ad1e8
        ;   Label: LAB_0042457d
    JL 0x004245c2                       ; 00424584
        ;   XREF to: 004245c2 (CONDITIONAL_JUMP)  ; LAB_004245c2
    PUSH 0x579e83                       ; 00424586 | = "grabbedBy"
    LEA EAX,[EBX + 0x2590]              ; 0042458b
    PUSH EAX                            ; 00424591
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00424592
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00424597
    PUSH 0x579e8d                       ; 0042459a | = "grabbedType"
    LEA EAX,[EBX + 0x2594]              ; 0042459f
    PUSH EAX                            ; 004245a5
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004245a6
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004245ab
    PUSH 0x579e99                       ; 004245ae | = "clothList"
    LEA EAX,[EBX + 0x2a8c]              ; 004245b3
    PUSH EAX                            ; 004245b9
    CALL core_actor.cpp_archiveClothList_FUN_0040cf70 ; 004245ba
        ;   XREF to: 0040cf70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveClothList_FUN_0040cf70()
    ADD ESP,0x8                         ; 004245bf
    CMP dword ptr [0x005ad1e8],0x5      ; 004245c2 | INT_005ad1e8
        ;   Label: LAB_004245c2
    JL 0x004245df                       ; 004245c9
        ;   XREF to: 004245df (CONDITIONAL_JUMP)  ; LAB_004245df
    PUSH 0x579ea3                       ; 004245cb | = "sizeScale"
    LEA EAX,[EBX + 0x2614]              ; 004245d0
    PUSH EAX                            ; 004245d6
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004245d7
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004245dc
    CMP dword ptr [0x005ad1e8],0x6      ; 004245df | INT_005ad1e8
        ;   Label: LAB_004245df
    JGE 0x00424695                      ; 004245e6
        ;   XREF to: 00424695 (CONDITIONAL_JUMP)  ; LAB_00424695
    MOV EAX,dword ptr [EBX + 0x2434]    ; 004245ec
    MOV dword ptr [EBX + 0x2438],EAX    ; 004245f2
    ADD ESP,0x10                        ; 004245f8
    POP EBP                             ; 004245fb
    POP EDI                             ; 004245fc
    POP ESI                             ; 004245fd
    POP EBX                             ; 004245fe
    RET                                 ; 004245ff
    PUSH 0x579e2b                       ; 00424600 | = "numCarryHands"
        ;   Label: LAB_00424600
    LEA EAX,[ESP + 0x8]                 ; 00424605
    PUSH EAX                            ; 00424609
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0042460a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0042460f
    XOR EBP,EBP                         ; 00424612
    MOV EAX,dword ptr [ESP + 0x4]       ; 00424614
    MOV dword ptr [ESP],EBP             ; 00424618
    TEST EAX,EAX                        ; 0042461b
    JLE 0x00424560                      ; 0042461d
        ;   XREF to: 00424560 (CONDITIONAL_JUMP)  ; LAB_00424560
    LEA ESI,[EBX + 0x24a4]              ; 00424623
    PUSH 0x579e39                       ; 00424629 | = "carry hand"
        ;   Label: LAB_00424629
    LEA EAX,[ESP + 0xc]                 ; 0042462e
    PUSH EAX                            ; 00424632
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00424633
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00424638
    IMUL EAX,dword ptr [ESP + 0x8],0x44 ; 0042463b
    ADD EAX,ESI                         ; 00424640
    PUSH 0x579e44                       ; 00424642 | = "carry actor"
    ADD EAX,0x8                         ; 00424647
    PUSH EAX                            ; 0042464a
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0042464b
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00424650
    MOV ECX,dword ptr [ESP]             ; 00424653
    INC ECX                             ; 00424656
    MOV EDI,dword ptr [ESP + 0x4]       ; 00424657
    MOV dword ptr [ESP],ECX             ; 0042465b
    CMP ECX,EDI                         ; 0042465e
    JL 0x00424629                       ; 00424660
        ;   XREF to: 00424629 (CONDITIONAL_JUMP)  ; LAB_00424629
    JMP 0x00424560                      ; 00424662
        ;   XREF to: 00424560 (UNCONDITIONAL_JUMP)  ; LAB_00424560
    PUSH 0x579e5e                       ; 00424667 | = "carry hand"
        ;   Label: LAB_00424667
    LEA EAX,[ESP + 0x4]                 ; 0042466c
    PUSH EAX                            ; 00424670
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 00424671
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 00424676
    IMUL EAX,dword ptr [ESP],0x44       ; 00424679
    ADD EAX,ESI                         ; 0042467d
    PUSH 0x579e69                       ; 0042467f | = "carry actor"
    ADD EAX,0x8                         ; 00424684
    PUSH EAX                            ; 00424687
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00424688
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0042468d
    JMP 0x00424551                      ; 00424690
        ;   XREF to: 00424551 (UNCONDITIONAL_JUMP)  ; LAB_00424551
    PUSH 0x579ead                       ; 00424695 | = "healthBarMode"
        ;   Label: LAB_00424695
    LEA EAX,[EBX + 0x243c]              ; 0042469a
    PUSH EAX                            ; 004246a0
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004246a1
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 004246a6
    PUSH 0x579ebb                       ; 004246a9 | = "descriptiveName"
    LEA EAX,[EBX + 0x2440]              ; 004246ae
    PUSH EAX                            ; 004246b4
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040c7f0 ; 004246b5
        ;   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveLocalizedString_FUN_0040c7f0()
    ADD ESP,0x8                         ; 004246ba
    PUSH 0x579ecb                       ; 004246bd | = "maxHitPoints"
    ADD EBX,0x2438                      ; 004246c2
    PUSH EBX                            ; 004246c8
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004246c9
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004246ce
    ADD ESP,0x10                        ; 004246d1
    POP EBP                             ; 004246d4
    POP EDI                             ; 004246d5
    POP ESI                             ; 004246d6
    POP EBX                             ; 004246d7
    RET                                 ; 004246d8

