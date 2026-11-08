; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc2b0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ce580 at 004cea12
;
; Referenced Globals:
;   undefined4 s_d_s_005e139b+1
;   undefined4 DAT_005e13a4
;   undefined4 DAT_005e13ac
;   undefined4 DAT_005e13b4
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_00622ad0
;   undefined4 DAT_0152d23c
;   undefined4 DAT_0152d240
;   undefined4 DAT_0152d244
;   undefined4 DAT_0152d248
;   undefined4 DAT_01cd09e8
;   undefined4 DAT_01cd0ae8
;   undefined4 DAT_01cd0aec
;   undefined4 DAT_01fe3930
;
; Called Functions:
;   FUN_004031c0
;   FUN_00403250
;   FUN_00406bd0
;   FUN_004c1dd0
;   FUN_004c3ea0
;   FUN_004c4260
;   FUN_004c44e0
;   FUN_004c4510
;   FUN_00543950
;   FUN_005bfb40
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc2b0
        ;   Label: FUN_004cc2b0
    PUSH ESI                            ; 004cc2b1
    PUSH EDI                            ; 004cc2b2
    PUSH EBP                            ; 004cc2b3
    MOV EBP,ESP                         ; 004cc2b4
    SUB ESP,0x160                       ; 004cc2b6
    AND ESP,0xfffffff8                  ; 004cc2bc
    MOV EAX,[0x0061b498]                ; 004cc2bf | DAT_0061b498
    MOV dword ptr [ESP + 0x110],EAX     ; 004cc2c4
    MOV EAX,[0x0061b49c]                ; 004cc2cb | DAT_0061b49c
    MOV dword ptr [ESP + 0x114],EAX     ; 004cc2d0
    MOV dword ptr [ESP + 0x10c],EAX     ; 004cc2d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cc2de
    TEST dword ptr [EAX + 0x3b4],0x7fffffff ; 004cc2e1
    JNZ 0x004cc66d                      ; 004cc2eb
        ;   XREF to: 004cc66d (CONDITIONAL_JUMP)  ; LAB_004cc66d
    LEA EAX,[EAX]                       ; 004cc2f1
    LEA EDX,[EDX]                       ; 004cc2f7
    LEA EAX,[EAX]                       ; 004cc2fd
    FLD float ptr [0x01cd0aec]          ; 004cc300 | DAT_01cd0aec
        ;   Label: LAB_004cc300
    FLDZ                                ; 004cc306
    FCOMPP                              ; 004cc308
    FNSTSW AX                           ; 004cc30a
    SAHF                                ; 004cc30c
    JNC 0x004cc3c6                      ; 004cc30d
        ;   XREF to: 004cc3c6 (CONDITIONAL_JUMP)  ; LAB_004cc3c6
    MOV EDX,dword ptr [0x0061b49c]      ; 004cc313 | DAT_0061b49c
    MOV EBX,dword ptr [0x0152d23c]      ; 004cc319 | DAT_0152d23c
    CMP EDX,0x1e0                       ; 004cc31f
    JGE 0x004cc33b                      ; 004cc325
        ;   XREF to: 004cc33b (CONDITIONAL_JUMP)  ; LAB_004cc33b
    MOV EBX,dword ptr [0x0152d240]      ; 004cc327 | DAT_0152d240
    CMP EDX,0x180                       ; 004cc32d
    JGE 0x004cc33b                      ; 004cc333
        ;   XREF to: 004cc33b (CONDITIONAL_JUMP)  ; LAB_004cc33b
    MOV EBX,dword ptr [0x0152d248]      ; 004cc335 | DAT_0152d248
    PUSH 0x58                           ; 004cc33b
        ;   Label: LAB_004cc33b
    PUSH EBX                            ; 004cc33d
    CALL FUN_004c4510                   ; 004cc33e
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    ADD ESP,0x8                         ; 004cc343
    PUSH 0x58                           ; 004cc346
    PUSH EBX                            ; 004cc348
    MOV EDI,EAX                         ; 004cc349
    CALL FUN_004c44e0                   ; 004cc34b
        ;   XREF to: 004c44e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c44e0()
    ADD ESP,0x8                         ; 004cc350
    MOV ESI,EAX                         ; 004cc353
    MOV EAX,[0x00622ad0]                ; 004cc355 | DAT_00622ad0
    PUSH EAX                            ; 004cc35a
    CALL FUN_00543950                   ; 004cc35b
        ;   XREF to: 00543950 (UNCONDITIONAL_CALL)  ; undefined FUN_00543950()
    ADD ESP,0x4                         ; 004cc360
    MOV EDX,dword ptr [0x00622ad0]      ; 004cc363 | DAT_00622ad0
    PUSH EDX                            ; 004cc369
    CALL FUN_00543950                   ; 004cc36a
        ;   XREF to: 00543950 (UNCONDITIONAL_CALL)  ; undefined FUN_00543950()
    MOV EDX,dword ptr [0x0061b49c]      ; 004cc36f | DAT_0061b49c
    SUB EDX,EAX                         ; 004cc375
    MOV EAX,EDX                         ; 004cc377
    ADD ESP,0x4                         ; 004cc379
    SUB EAX,EDI                         ; 004cc37c
    PUSH 0xffff                         ; 004cc37e
    MOV EDI,EAX                         ; 004cc383
    CALL FUN_00406bd0                   ; 004cc385
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
    ADD ESP,0x4                         ; 004cc38a
    PUSH 0x1cd09e8                      ; 004cc38d | DAT_01cd09e8
    MOV ECX,dword ptr [0x01cd0ae8]      ; 004cc392 | DAT_01cd0ae8
    PUSH ECX                            ; 004cc398
    PUSH 0x5e139c                       ; 004cc399 | s_d_s_005e139b+1
    LEA EAX,[ESP + 0x18]                ; 004cc39e
    PUSH EAX                            ; 004cc3a2
    CALL FUN_005bfb40                   ; 004cc3a3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 004cc3a8
    PUSH 0x0                            ; 004cc3ab
    PUSH 0xf8                           ; 004cc3ad
    SUB EDI,ESI                         ; 004cc3b2
    PUSH EDI                            ; 004cc3b4
    ADD ESI,ESI                         ; 004cc3b5
    PUSH ESI                            ; 004cc3b7
    LEA EAX,[ESP + 0x1c]                ; 004cc3b8
    PUSH EAX                            ; 004cc3bc
    PUSH EBX                            ; 004cc3bd
    CALL FUN_004c1dd0                   ; 004cc3be
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    ADD ESP,0x18                        ; 004cc3c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cc3c6
        ;   Label: LAB_004cc3c6
    CMP dword ptr [EAX + 0x244],0x0     ; 004cc3c9
    JNZ 0x004cc666                      ; 004cc3d0
        ;   XREF to: 004cc666 (CONDITIONAL_JUMP)  ; LAB_004cc666
    CMP dword ptr [EAX + 0x3bc],0x0     ; 004cc3d6
    JLE 0x004cc666                      ; 004cc3dd
        ;   XREF to: 004cc666 (CONDITIONAL_JUMP)  ; LAB_004cc666
    MOV EAX,dword ptr [ESP + 0x110]     ; 004cc3e3
    MOV EDX,EAX                         ; 004cc3ea
    SAR EDX,0x1f                        ; 004cc3ec
    SHL EDX,0x2                         ; 004cc3ef
    SBB EAX,EDX                         ; 004cc3f2
    SAR EAX,0x2                         ; 004cc3f4
    MOV EBX,EAX                         ; 004cc3f7
    MOV EAX,dword ptr [ESP + 0x114]     ; 004cc3f9
    MOV EDX,EAX                         ; 004cc400
    MOV ESI,0x28                        ; 004cc402
    SAR EDX,0x1f                        ; 004cc407
    IDIV ESI                            ; 004cc40a
    MOV dword ptr [ESP + 0x12c],EAX     ; 004cc40c
    MOV EAX,[0x0152d248]                ; 004cc413 | DAT_0152d248
    MOV EDI,dword ptr [0x0061b498]      ; 004cc418 | DAT_0061b498
    MOV dword ptr [ESP + 0x130],EAX     ; 004cc41e
    CMP EDI,0x280                       ; 004cc425
    JG 0x004cc7f0                       ; 004cc42b
        ;   XREF to: 004cc7f0 (CONDITIONAL_JUMP)  ; LAB_004cc7f0
    CMP dword ptr [0x0061b498],0x320    ; 004cc431 | DAT_0061b498
        ;   Label: LAB_004cc431
    JLE 0x004cc449                      ; 004cc43b
        ;   XREF to: 004cc449 (CONDITIONAL_JUMP)  ; LAB_004cc449
    MOV EAX,[0x0152d23c]                ; 004cc43d | DAT_0152d23c
    MOV dword ptr [ESP + 0x130],EAX     ; 004cc442
    PUSH 0x58                           ; 004cc449
        ;   Label: LAB_004cc449
    MOV EDX,dword ptr [ESP + 0x134]     ; 004cc44b
    PUSH EDX                            ; 004cc452
    CALL FUN_004c4510                   ; 004cc453
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    ADD ESP,0x8                         ; 004cc458
    CMP EAX,dword ptr [ESP + 0x12c]     ; 004cc45b
    JLE 0x004cc47d                      ; 004cc462
        ;   XREF to: 004cc47d (CONDITIONAL_JUMP)  ; LAB_004cc47d
    PUSH 0x58                           ; 004cc464
    MOV ESI,dword ptr [ESP + 0x134]     ; 004cc466
    PUSH ESI                            ; 004cc46d
    CALL FUN_004c4510                   ; 004cc46e
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    ADD ESP,0x8                         ; 004cc473
    MOV dword ptr [ESP + 0x12c],EAX     ; 004cc476
    MOV EAX,dword ptr [ESP + 0x110]     ; 004cc47d
        ;   Label: LAB_004cc47d
    MOV EDX,EAX                         ; 004cc484
    MOV ESI,0x50                        ; 004cc486
    SAR EDX,0x1f                        ; 004cc48b
    IDIV ESI                            ; 004cc48e
    MOV dword ptr [ESP + 0x134],EAX     ; 004cc490
    ADD EAX,EBX                         ; 004cc497
    MOV dword ptr [ESP + 0x118],EAX     ; 004cc499
    MOV EAX,dword ptr [ESP + 0x114]     ; 004cc4a0
    MOV EDX,EAX                         ; 004cc4a7
    SAR EDX,0x1f                        ; 004cc4a9
    IDIV ESI                            ; 004cc4ac
    MOV ESI,dword ptr [ESP + 0x10c]     ; 004cc4ae
    SUB ESI,EAX                         ; 004cc4b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cc4b7
    XOR EDI,EDI                         ; 004cc4ba
    MOV EDX,dword ptr [EAX + 0x3bc]     ; 004cc4bc
    MOV dword ptr [ESP + 0x150],EDI     ; 004cc4c2
    TEST EDX,EDX                        ; 004cc4c9
    JLE 0x004cc666                      ; 004cc4cb
        ;   XREF to: 004cc666 (CONDITIONAL_JUMP)  ; LAB_004cc666
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004cc4d1
    LEA EBX,[EAX + 0x3c0]               ; 004cc4d8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cc4de
    SUB EAX,EDX                         ; 004cc4e5
    MOV EDX,EAX                         ; 004cc4e7
    SAR EDX,0x1f                        ; 004cc4e9
    SUB EAX,EDX                         ; 004cc4ec
    SAR EAX,0x1                         ; 004cc4ee
    MOV dword ptr [ESP + 0x120],EAX     ; 004cc4f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cc4f7
    MOV dword ptr [ESP + 0x154],EBX     ; 004cc4fa
    MOV dword ptr [ESP + 0x158],EAX     ; 004cc501
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004cc508
        ;   Label: LAB_004cc508
    MOV EAX,ESI                         ; 004cc50f
    SUB EAX,EBX                         ; 004cc511
    MOV dword ptr [ESP + 0x140],EAX     ; 004cc513
    MOV dword ptr [ESP + 0x13c],EAX     ; 004cc51a
    MOV EAX,dword ptr [ESP + 0x118]     ; 004cc521
    MOV dword ptr [ESP + 0x148],EAX     ; 004cc528
    MOV EAX,dword ptr [ESP + 0x158]     ; 004cc52f
    MOV EDI,0x2                         ; 004cc536
    MOV EAX,dword ptr [EAX + 0x8c0]     ; 004cc53b
    MOV dword ptr [ESP + 0x14c],ESI     ; 004cc541
    MOV dword ptr [ESP + 0x8],EAX       ; 004cc548
    MOV EBX,dword ptr [ESP + 0x134]     ; 004cc54c
    FLD float ptr [ESP + 0x8]           ; 004cc553
    FCOMP double ptr [0x005e13ac]       ; 004cc557 | DAT_005e13ac
    FNSTSW AX                           ; 004cc55d
    SAHF                                ; 004cc55f
    JNC 0x004cc567                      ; 004cc560
        ;   XREF to: 004cc567 (CONDITIONAL_JUMP)  ; LAB_004cc567
    MOV EDI,0xfb                        ; 004cc562
    FLD float ptr [ESP + 0x8]           ; 004cc567
        ;   Label: LAB_004cc567
    FCOMP double ptr [0x005e13b4]       ; 004cc56b | DAT_005e13b4
    FNSTSW AX                           ; 004cc571
    SAHF                                ; 004cc573
    JNC 0x004cc57b                      ; 004cc574
        ;   XREF to: 004cc57b (CONDITIONAL_JUMP)  ; LAB_004cc57b
    MOV EDI,0x1                         ; 004cc576
    PUSH 0x0                            ; 004cc57b
        ;   Label: LAB_004cc57b
    PUSH 0x0                            ; 004cc57d
    MOV EAX,dword ptr [ESP + 0x154]     ; 004cc57f
    PUSH EAX                            ; 004cc586
    MOV EDX,dword ptr [ESP + 0x154]     ; 004cc587
    PUSH EDX                            ; 004cc58e
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004cc58f
    PUSH ECX                            ; 004cc596
    PUSH EBX                            ; 004cc597
    CALL FUN_00403250                   ; 004cc598
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; undefined FUN_00403250()
    ADD ESP,0x18                        ; 004cc59d
    MOV EAX,dword ptr [ESP + 0x148]     ; 004cc5a0
    SUB EAX,EBX                         ; 004cc5a7
    INC EAX                             ; 004cc5a9
    MOV dword ptr [ESP + 0x15c],EAX     ; 004cc5aa
    FILD dword ptr [ESP + 0x15c]        ; 004cc5b1
    FMUL float ptr [ESP + 0x8]          ; 004cc5b8
    CALL FUN_005c03a0                   ; 004cc5bc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x144]       ; 004cc5c1
    MOV EAX,dword ptr [ESP + 0x144]     ; 004cc5c8
    TEST EAX,EAX                        ; 004cc5cf
    JLE 0x004cc5f0                      ; 004cc5d1
        ;   XREF to: 004cc5f0 (CONDITIONAL_JUMP)  ; LAB_004cc5f0
    PUSH EDI                            ; 004cc5d3
    MOV EDX,dword ptr [ESP + 0x150]     ; 004cc5d4
    PUSH EDX                            ; 004cc5db
    ADD EAX,EBX                         ; 004cc5dc
    PUSH EAX                            ; 004cc5de
    MOV ECX,dword ptr [ESP + 0x148]     ; 004cc5df
    PUSH ECX                            ; 004cc5e6
    PUSH EBX                            ; 004cc5e7
    CALL FUN_004031c0                   ; 004cc5e8
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004cc5ed
    PUSH 0x0                            ; 004cc5f0
        ;   Label: LAB_004cc5f0
    PUSH 0xf8                           ; 004cc5f2
    MOV ECX,dword ptr [ESP + 0x148]     ; 004cc5f7
    PUSH ECX                            ; 004cc5fe
    MOV EBX,dword ptr [ESP + 0x140]     ; 004cc5ff
    PUSH EBX                            ; 004cc606
    MOV EDI,dword ptr [ESP + 0x164]     ; 004cc607
    PUSH EDI                            ; 004cc60e
    MOV EAX,dword ptr [ESP + 0x144]     ; 004cc60f
    PUSH EAX                            ; 004cc616
    CALL FUN_004c1dd0                   ; 004cc617
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    ADD ESP,0x18                        ; 004cc61c
    LEA EBX,[EDI + 0x100]               ; 004cc61f
    MOV EDX,dword ptr [ESP + 0x120]     ; 004cc625
    MOV ECX,dword ptr [ESP + 0x158]     ; 004cc62c
    MOV EDI,dword ptr [ESP + 0x150]     ; 004cc633
    MOV dword ptr [ESP + 0x154],EBX     ; 004cc63a
    ADD ECX,0x4                         ; 004cc641
    SUB ESI,EDX                         ; 004cc644
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cc646
    INC EDI                             ; 004cc649
    MOV dword ptr [ESP + 0x158],ECX     ; 004cc64a
    MOV ECX,dword ptr [EDX + 0x3bc]     ; 004cc651
    MOV dword ptr [ESP + 0x150],EDI     ; 004cc657
    CMP EDI,ECX                         ; 004cc65e
    JL 0x004cc508                       ; 004cc660
        ;   XREF to: 004cc508 (CONDITIONAL_JUMP)  ; LAB_004cc508
    MOV ESP,EBP                         ; 004cc666
        ;   Label: LAB_004cc666
    POP EBP                             ; 004cc668
    POP EDI                             ; 004cc669
    POP ESI                             ; 004cc66a
    POP EBX                             ; 004cc66b
    RET                                 ; 004cc66c
    FLD1                                ; 004cc66d
        ;   Label: LAB_004cc66d
    FLD float ptr [EAX + 0x3b4]         ; 004cc66f
    FSTP double ptr [ESP]               ; 004cc675
    FCOMP double ptr [ESP]              ; 004cc678
    FNSTSW AX                           ; 004cc67b
    SAHF                                ; 004cc67d
    JBE 0x004cc7e6                      ; 004cc67e
        ;   XREF to: 004cc7e6 (CONDITIONAL_JUMP)  ; LAB_004cc7e6
    FLD double ptr [ESP]                ; 004cc684
    FMUL double ptr [0x005e13a4]        ; 004cc687 | DAT_005e13a4
    CALL FUN_005c03a0                   ; 004cc68d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x15c]       ; 004cc692
    MOV ECX,dword ptr [ESP + 0x15c]     ; 004cc699
    PUSH ECX                            ; 004cc6a0
    CALL FUN_00406bd0                   ; 004cc6a1
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
        ;   Label: LAB_004cc6a1
    ADD ESP,0x4                         ; 004cc6a6
    MOV EAX,[0x0152d244]                ; 004cc6a9 | DAT_0152d244
    MOV dword ptr [ESP + 0x138],EAX     ; 004cc6ae
    MOV EAX,[0x01fe3930]                ; 004cc6b5 | DAT_01fe3930
    CMP EAX,0x1e0                       ; 004cc6ba
    JGE 0x004cc6cd                      ; 004cc6bf
        ;   XREF to: 004cc6cd (CONDITIONAL_JUMP)  ; LAB_004cc6cd
    MOV EAX,[0x0152d248]                ; 004cc6c1 | DAT_0152d248
    MOV dword ptr [ESP + 0x138],EAX     ; 004cc6c6
    MOV EDX,dword ptr [0x01fe3930]      ; 004cc6cd | DAT_01fe3930
        ;   Label: LAB_004cc6cd
    LEA EAX,[EDX*0x8 + 0x0]             ; 004cc6d3
    ADD EDX,EAX                         ; 004cc6da
    MOV EBX,0xa                         ; 004cc6dc
    MOV EAX,EDX                         ; 004cc6e1
    SAR EDX,0x1f                        ; 004cc6e3
    IDIV EBX                            ; 004cc6e6
    PUSH EAX                            ; 004cc6e8
    PUSH 0x100                          ; 004cc6e9
    PUSH EBX                            ; 004cc6ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cc6ef
    PUSH 0x1cc91a0                      ; 004cc6f2
    ADD EAX,0x2b4                       ; 004cc6f7
    PUSH EAX                            ; 004cc6fc
    MOV EBX,dword ptr [ESP + 0x14c]     ; 004cc6fd
    PUSH EBX                            ; 004cc704
    CALL FUN_004c4260                   ; 004cc705
        ;   XREF to: 004c4260 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4260()
    ADD ESP,0x18                        ; 004cc70a
    PUSH 0x58                           ; 004cc70d
    MOV ESI,dword ptr [ESP + 0x13c]     ; 004cc70f
    PUSH ESI                            ; 004cc716
    MOV EBX,EAX                         ; 004cc717
    MOV dword ptr [ESP + 0x130],EAX     ; 004cc719
    CALL FUN_004c4510                   ; 004cc720
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; undefined FUN_004c4510()
    IMUL EBX,EAX                        ; 004cc725
    ADD ESP,0x8                         ; 004cc728
    MOV ESI,EAX                         ; 004cc72b
    MOV dword ptr [ESP + 0x11c],EAX     ; 004cc72d
    MOV EAX,[0x0061b49c]                ; 004cc734 | DAT_0061b49c
    MOV EDI,dword ptr [0x00622ad0]      ; 004cc739 | DAT_00622ad0
    SUB EAX,EBX                         ; 004cc73f
    PUSH EDI                            ; 004cc741
    MOV EBX,EAX                         ; 004cc742
    CALL FUN_00543950                   ; 004cc744
        ;   XREF to: 00543950 (UNCONDITIONAL_CALL)  ; undefined FUN_00543950()
    SUB EBX,EAX                         ; 004cc749
    MOV EAX,EBX                         ; 004cc74b
    MOV EDX,dword ptr [0x0152d248]      ; 004cc74d | DAT_0152d248
    SUB EAX,ESI                         ; 004cc753
    ADD ESP,0x4                         ; 004cc755
    MOV ESI,EAX                         ; 004cc758
    CMP EDX,dword ptr [ESP + 0x138]     ; 004cc75a
    JNZ 0x004cc766                      ; 004cc761
        ;   XREF to: 004cc766 (CONDITIONAL_JUMP)  ; LAB_004cc766
    SUB ESI,0x7                         ; 004cc763
    MOV ECX,dword ptr [ESP + 0x128]     ; 004cc766
        ;   Label: LAB_004cc766
    MOV EAX,[0x0061b498]                ; 004cc76d | DAT_0061b498
    XOR EDI,EDI                         ; 004cc772
    DEC EAX                             ; 004cc774
    TEST ECX,ECX                        ; 004cc775
    JLE 0x004cc300                      ; 004cc777
        ;   XREF to: 004cc300 (CONDITIONAL_JUMP)  ; LAB_004cc300
    MOV EBX,0x1cc91a0                   ; 004cc77d
    MOV dword ptr [ESP + 0x124],EAX     ; 004cc782
    PUSH EBX                            ; 004cc789
        ;   Label: LAB_004cc789
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004cc78a
    PUSH EAX                            ; 004cc791
    CALL FUN_004c3ea0                   ; 004cc792
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    ADD ESP,0x8                         ; 004cc797
    MOV EDX,dword ptr [ESP + 0x124]     ; 004cc79a
    SUB EDX,EAX                         ; 004cc7a1
    MOV EAX,EDX                         ; 004cc7a3
    SAR EDX,0x1f                        ; 004cc7a5
    SUB EAX,EDX                         ; 004cc7a8
    SAR EAX,0x1                         ; 004cc7aa
    PUSH 0x0                            ; 004cc7ac
    PUSH 0xf8                           ; 004cc7ae
    PUSH ESI                            ; 004cc7b3
    PUSH EAX                            ; 004cc7b4
    PUSH EBX                            ; 004cc7b5
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004cc7b6
    PUSH EDX                            ; 004cc7bd
    INC EDI                             ; 004cc7be
    CALL FUN_004c1dd0                   ; 004cc7bf
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1dd0()
    ADD ESP,0x18                        ; 004cc7c4
    ADD EBX,0x100                       ; 004cc7c7
    MOV ECX,dword ptr [ESP + 0x11c]     ; 004cc7cd
    MOV EAX,dword ptr [ESP + 0x128]     ; 004cc7d4
    ADD ESI,ECX                         ; 004cc7db
    CMP EDI,EAX                         ; 004cc7dd
    JL 0x004cc789                       ; 004cc7df
        ;   XREF to: 004cc789 (CONDITIONAL_JUMP)  ; LAB_004cc789
    JMP 0x004cc300                      ; 004cc7e1
        ;   XREF to: 004cc300 (UNCONDITIONAL_JUMP)  ; LAB_004cc300
    PUSH 0xffff                         ; 004cc7e6
        ;   Label: LAB_004cc7e6
    JMP 0x004cc6a1                      ; 004cc7eb
        ;   XREF to: 004cc6a1 (UNCONDITIONAL_JUMP)  ; LAB_004cc6a1
    MOV EAX,[0x0152d240]                ; 004cc7f0 | DAT_0152d240
        ;   Label: LAB_004cc7f0
    MOV dword ptr [ESP + 0x130],EAX     ; 004cc7f5
    JMP 0x004cc431                      ; 004cc7fc
        ;   XREF to: 004cc431 (UNCONDITIONAL_JUMP)  ; LAB_004cc431

