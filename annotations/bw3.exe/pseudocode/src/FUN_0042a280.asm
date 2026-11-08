; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042a280(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dd0d0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_0046c730
;   FUN_0046d460
;   FUN_0046d4b0
;   FUN_0046d4c0
;   FUN_0046d540
;   FUN_0046e5e0
;   FUN_00538400
;   FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a280
        ;   Label: FUN_0042a280
    PUSH ESI                            ; 0042a281
    PUSH EDI                            ; 0042a282
    PUSH EBP                            ; 0042a283
    SUB ESP,0xc4                        ; 0042a284
    MOV EDX,dword ptr [0x005f2afc]      ; 0042a28a | DAT_005f2afc
    PUSH EDX                            ; 0042a290
    CALL FUN_0046d540                   ; 0042a291
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 0042a296
    TEST EAX,EAX                        ; 0042a299
    JZ 0x0042a2aa                       ; 0042a29b
        ;   XREF to: 0042a2aa (CONDITIONAL_JUMP)  ; LAB_0042a2aa
    XOR EAX,EAX                         ; 0042a29d
        ;   Label: LAB_0042a29d
    ADD ESP,0xc4                        ; 0042a29f
    POP EBP                             ; 0042a2a5
    POP EDI                             ; 0042a2a6
    POP ESI                             ; 0042a2a7
    POP EBX                             ; 0042a2a8
    RET                                 ; 0042a2a9
    MOV ECX,dword ptr [ESP + 0xd8]      ; 0042a2aa
        ;   Label: LAB_0042a2aa
    PUSH ECX                            ; 0042a2b1
    CALL FUN_004087f0                   ; 0042a2b2
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0042a2b7
    PUSH 0x0                            ; 0042a2ba
    MOV EBX,dword ptr [ESP + 0xdc]      ; 0042a2bc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042a2c3
    PUSH EBX                            ; 0042a2ca
    MOV EAX,dword ptr [EAX + 0x154]     ; 0042a2cb
    LEA ESI,[ESP + 0x30]                ; 0042a2d1
    LEA EDI,[ESP + 0x48]                ; 0042a2d5
    CALL dword ptr [EAX + 0x1c]         ; 0042a2d9
    MOV ECX,0x6                         ; 0042a2dc
    ADD ESP,0x4                         ; 0042a2e1
    LEA EAX,[ESP + 0x44]                ; 0042a2e4
    LEA ESI,[ESP + 0x2c]                ; 0042a2e8
    PUSH EAX                            ; 0042a2ec
    MOVSD.REP ES:EDI,ESI                ; 0042a2ed
    CALL FUN_0041daf0                   ; 0042a2ef
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0042a2f4
    PUSH EBX                            ; 0042a2f7
    MOV dword ptr [EBX + 0x574],EAX     ; 0042a2f8
    CALL FUN_00408830                   ; 0042a2fe
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    MOV EDI,dword ptr [EBX + 0x574]     ; 0042a303
    ADD ESP,0x4                         ; 0042a309
    TEST EDI,EDI                        ; 0042a30c
    JZ 0x0042a29d                       ; 0042a30e
        ;   XREF to: 0042a29d (CONDITIONAL_JUMP)  ; LAB_0042a29d
    LEA EAX,[EBX + 0x16c]               ; 0042a310
    PUSH EAX                            ; 0042a316
    MOV EBP,dword ptr [0x005f2afc]      ; 0042a317 | DAT_005f2afc
    PUSH EBP                            ; 0042a31d
    CALL FUN_0046e5e0                   ; 0042a31e
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 0042a323
    PUSH 0x0                            ; 0042a326
    MOV EAX,[0x005f2afc]                ; 0042a328 | DAT_005f2afc
    PUSH EAX                            ; 0042a32d
    CALL FUN_0046d460                   ; 0042a32e
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    MOV EDX,0x4                         ; 0042a333
    MOV EAX,0x1                         ; 0042a338
    ADD ESP,0x8                         ; 0042a33d
    MOV EBX,dword ptr [0x005f2afc]      ; 0042a340 | DAT_005f2afc
    XOR ECX,ECX                         ; 0042a346
    PUSH 0xffff                         ; 0042a348
    MOV dword ptr [ESP + 0x8],EDX       ; 0042a34d
    MOV dword ptr [ESP + 0x18],ECX      ; 0042a351
    MOV dword ptr [ESP + 0x14],ECX      ; 0042a355
    MOV dword ptr [ESP + 0x10],ECX      ; 0042a359
    MOV dword ptr [ESP + 0xc],ECX       ; 0042a35d
    MOV dword ptr [ESP + 0x1c],ECX      ; 0042a361
    MOV dword ptr [ESP + 0x20],EAX      ; 0042a365
    MOV EDX,0x2                         ; 0042a369
    MOV ECX,0x3                         ; 0042a36e
    PUSH EBX                            ; 0042a373
    MOV dword ptr [ESP + 0x28],EDX      ; 0042a374
    MOV dword ptr [ESP + 0x2c],ECX      ; 0042a378
    CALL FUN_0046d4c0                   ; 0042a37c
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 0042a381
    XOR ESI,ESI                         ; 0042a384
    PUSH ESI                            ; 0042a386
    MOV ESI,dword ptr [0x005f2afc]      ; 0042a387 | DAT_005f2afc
    PUSH ESI                            ; 0042a38d
    CALL FUN_0046d4b0                   ; 0042a38e
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4b0()
    ADD ESP,0x8                         ; 0042a393
    XOR EBP,EBP                         ; 0042a396
    MOV EDI,dword ptr [ESP + 0xd8]      ; 0042a398
    MOV ESI,dword ptr [ESP + 0xd8]      ; 0042a39f
    ADD EDI,0x28c                       ; 0042a3a6
    ADD ESI,0x2b0                       ; 0042a3ac
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0042a3b2
        ;   Label: LAB_0042a3b2
    MOV EAX,dword ptr [EAX + 0x158]     ; 0042a3b9
    DEC EAX                             ; 0042a3bf
    CMP EBP,EAX                         ; 0042a3c0
    JGE 0x0042a846                      ; 0042a3c2
        ;   XREF to: 0042a846 (CONDITIONAL_JUMP)  ; LAB_0042a846
    MOV EAX,[0x005f2afc]                ; 0042a3c8 | DAT_005f2afc
    LEA EBX,[ESP + 0x88]                ; 0042a3cd
    MOV EDX,dword ptr [EAX]             ; 0042a3d4
    MOV EAX,EDI                         ; 0042a3d6
    FLD float ptr [EAX]                 ; 0042a3d8
    FMUL float ptr [0x005dd0d0]         ; 0042a3da | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a3e0
    FLD float ptr [EAX + 0x4]           ; 0042a3e2
    FMUL float ptr [0x005dd0d0]         ; 0042a3e5 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a3eb
    FLD float ptr [EAX + 0x8]           ; 0042a3ee
    FMUL float ptr [0x005dd0d0]         ; 0042a3f1 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a3f7
    LEA EAX,[ESP + 0x88]                ; 0042a3fa
    PUSH EAX                            ; 0042a401
    PUSH EDX                            ; 0042a402
    CALL FUN_0056356c                   ; 0042a403
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0042a408 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0042a40d
    ADD ESP,0x8                         ; 0042a40f
    LEA EDX,[EAX + 0x30]                ; 0042a412
    LEA EBX,[ESP + 0x58]                ; 0042a415
    MOV EAX,EDI                         ; 0042a419
    FLD float ptr [EAX]                 ; 0042a41b
    FMUL float ptr [0x005dd0d0]         ; 0042a41d | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a423
    FLD float ptr [EAX + 0x4]           ; 0042a425
    FMUL float ptr [0x005dd0d0]         ; 0042a428 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a42e
    FLD float ptr [EAX + 0x8]           ; 0042a431
    FMUL float ptr [0x005dd0d0]         ; 0042a434 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a43a
    LEA EAX,[ESP + 0x58]                ; 0042a43d
    PUSH EAX                            ; 0042a441
    PUSH EDX                            ; 0042a442
    CALL FUN_0056356c                   ; 0042a443
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0042a448 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0042a44d
    ADD ESP,0x8                         ; 0042a44f
    LEA EDX,[EAX + 0x60]                ; 0042a452
    LEA EBX,[ESP + 0x7c]                ; 0042a455
    MOV EAX,ESI                         ; 0042a459
    FLD float ptr [EAX]                 ; 0042a45b
    FMUL float ptr [0x005dd0d0]         ; 0042a45d | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a463
    FLD float ptr [EAX + 0x4]           ; 0042a465
    FMUL float ptr [0x005dd0d0]         ; 0042a468 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a46e
    FLD float ptr [EAX + 0x8]           ; 0042a471
    FMUL float ptr [0x005dd0d0]         ; 0042a474 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a47a
    LEA EAX,[ESP + 0x7c]                ; 0042a47d
    PUSH EAX                            ; 0042a481
    PUSH EDX                            ; 0042a482
    CALL FUN_0056356c                   ; 0042a483
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0042a488 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0042a48d
    ADD ESP,0x8                         ; 0042a48f
    LEA EDX,[EAX + 0x90]                ; 0042a492
    LEA EBX,[ESP + 0xac]                ; 0042a498
    MOV EAX,ESI                         ; 0042a49f
    FLD float ptr [EAX]                 ; 0042a4a1
    FMUL float ptr [0x005dd0d0]         ; 0042a4a3 | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a4a9
    FLD float ptr [EAX + 0x4]           ; 0042a4ab
    FMUL float ptr [0x005dd0d0]         ; 0042a4ae | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a4b4
    FLD float ptr [EAX + 0x8]           ; 0042a4b7
    FMUL float ptr [0x005dd0d0]         ; 0042a4ba | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a4c0
    LEA EAX,[ESP + 0xac]                ; 0042a4c3
    PUSH EAX                            ; 0042a4ca
    PUSH EDX                            ; 0042a4cb
    CALL FUN_0056356c                   ; 0042a4cc
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0042a4d1 | DAT_005f2afc
    MOV EBX,dword ptr [EAX]             ; 0042a4d6
    SUB dword ptr [EBX + 0x4],0x40      ; 0042a4d8
    MOV EBX,dword ptr [EAX]             ; 0042a4dc
    ADD dword ptr [EBX + 0x34],0x40     ; 0042a4de
    MOV EBX,dword ptr [EAX]             ; 0042a4e2
    ADD dword ptr [EBX + 0x64],0x40     ; 0042a4e4
    MOV EBX,dword ptr [EAX]             ; 0042a4e8
    SUB dword ptr [EBX + 0x94],0x40     ; 0042a4ea
    MOV EDX,dword ptr [EAX]             ; 0042a4f1
    MOV dword ptr [EDX + 0x10],0x80000000 ; 0042a4f3
    MOV EDX,dword ptr [EAX]             ; 0042a4fa
    MOV dword ptr [EDX + 0x40],0x80000000 ; 0042a4fc
    MOV EDX,dword ptr [EAX]             ; 0042a503
    MOV dword ptr [EDX + 0x70],0x80000000 ; 0042a505
    MOV EDX,dword ptr [EAX]             ; 0042a50c
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 0042a50e
    MOV EDX,dword ptr [EAX]             ; 0042a518
    MOV dword ptr [EDX + 0x18],0x80000  ; 0042a51a
    MOV EDX,dword ptr [EAX]             ; 0042a521
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0042a523
    MOV EDX,dword ptr [EAX]             ; 0042a52a
    MOV dword ptr [EDX + 0x48],0x80000  ; 0042a52c
    MOV EDX,dword ptr [EAX]             ; 0042a533
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0042a535
    MOV EDX,dword ptr [EAX]             ; 0042a53c
    MOV dword ptr [EDX + 0x78],0xf80000 ; 0042a53e
    MOV EDX,dword ptr [EAX]             ; 0042a545
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0042a547
    MOV EDX,dword ptr [EAX]             ; 0042a54e
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 0042a550
    MOV EAX,dword ptr [EAX]             ; 0042a55a
    ADD ESP,0x8                         ; 0042a55c
    LEA EBX,[ESP + 0x64]                ; 0042a55f
    MOV dword ptr [EAX + 0xac],0x80000  ; 0042a563
    MOV EAX,EDI                         ; 0042a56d
    FLD float ptr [EAX]                 ; 0042a56f
    FMUL float ptr [0x005dd0d0]         ; 0042a571 | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a577
    FLD float ptr [EAX + 0x4]           ; 0042a579
    FMUL float ptr [0x005dd0d0]         ; 0042a57c | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a582
    FLD float ptr [EAX + 0x8]           ; 0042a585
    FMUL float ptr [0x005dd0d0]         ; 0042a588 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a58e
    PUSH 0x2                            ; 0042a591
    PUSH 0x0                            ; 0042a593
    PUSH 0x0                            ; 0042a595
    LEA EAX,[ESP + 0x70]                ; 0042a597
    PUSH EAX                            ; 0042a59b
    MOV EBX,dword ptr [0x00603b28]      ; 0042a59c | DAT_00603b28
    PUSH EBX                            ; 0042a5a2
    CALL FUN_00538400                   ; 0042a5a3
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; undefined FUN_00538400()
    ADD ESP,0x14                        ; 0042a5a8
    LEA EBX,[ESP + 0x64]                ; 0042a5ab
    MOV EAX,ESI                         ; 0042a5af
    FLD float ptr [EAX]                 ; 0042a5b1
    FMUL float ptr [0x005dd0d0]         ; 0042a5b3 | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a5b9
    FLD float ptr [EAX + 0x4]           ; 0042a5bb
    FMUL float ptr [0x005dd0d0]         ; 0042a5be | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a5c4
    FLD float ptr [EAX + 0x8]           ; 0042a5c7
    FMUL float ptr [0x005dd0d0]         ; 0042a5ca | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a5d0
    PUSH 0x2                            ; 0042a5d3
    PUSH 0x2                            ; 0042a5d5
    PUSH 0x0                            ; 0042a5d7
    LEA EAX,[ESP + 0x70]                ; 0042a5d9
    PUSH EAX                            ; 0042a5dd
    MOV EAX,[0x00603b28]                ; 0042a5de | DAT_00603b28
    PUSH EAX                            ; 0042a5e3
    CALL FUN_00538400                   ; 0042a5e4
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; undefined FUN_00538400()
    ADD ESP,0x14                        ; 0042a5e9
    MOV EAX,ESP                         ; 0042a5ec
    PUSH EAX                            ; 0042a5ee
    MOV EDX,dword ptr [0x005f2afc]      ; 0042a5ef | DAT_005f2afc
    PUSH EDX                            ; 0042a5f5
    LEA EBX,[ESP + 0x78]                ; 0042a5f6
    CALL FUN_0046c730                   ; 0042a5fa
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    MOV EDX,dword ptr [0x005f2afc]      ; 0042a5ff | DAT_005f2afc
    ADD ESP,0x8                         ; 0042a605
    MOV EAX,EDI                         ; 0042a608
    MOV EDX,dword ptr [EDX]             ; 0042a60a
    FLD float ptr [EAX]                 ; 0042a60c
    FMUL float ptr [0x005dd0d0]         ; 0042a60e | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a614
    FLD float ptr [EAX + 0x4]           ; 0042a616
    FMUL float ptr [0x005dd0d0]         ; 0042a619 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a61f
    FLD float ptr [EAX + 0x8]           ; 0042a622
    FMUL float ptr [0x005dd0d0]         ; 0042a625 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a62b
    LEA EAX,[ESP + 0x70]                ; 0042a62e
    PUSH EAX                            ; 0042a632
    PUSH EDX                            ; 0042a633
    CALL FUN_0056356c                   ; 0042a634
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0042a639 | DAT_005f2afc
    MOV EAX,dword ptr [EAX]             ; 0042a63e
    ADD ESP,0x8                         ; 0042a640
    LEA EDX,[EAX + 0x30]                ; 0042a643
    LEA EBX,[ESP + 0xa0]                ; 0042a646
    MOV EAX,EDI                         ; 0042a64d
    FLD float ptr [EAX]                 ; 0042a64f
    FMUL float ptr [0x005dd0d0]         ; 0042a651 | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a657
    FLD float ptr [EAX + 0x4]           ; 0042a659
    FMUL float ptr [0x005dd0d0]         ; 0042a65c | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a662
    FLD float ptr [EAX + 0x8]           ; 0042a665
    FMUL float ptr [0x005dd0d0]         ; 0042a668 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a66e
    LEA EAX,[ESP + 0xa0]                ; 0042a671
    PUSH EAX                            ; 0042a678
    PUSH EDX                            ; 0042a679
    CALL FUN_0056356c                   ; 0042a67a
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    ADD ESP,0x8                         ; 0042a67f
    MOV EAX,[0x005f2afc]                ; 0042a682 | DAT_005f2afc
    LEA EBX,[ESP + 0xb8]                ; 0042a687
    MOV EDX,dword ptr [EAX]             ; 0042a68e
    MOV EAX,ESI                         ; 0042a690
    FLD float ptr [EAX]                 ; 0042a692
    FMUL float ptr [0x005dd0d0]         ; 0042a694 | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a69a
    FLD float ptr [EAX + 0x4]           ; 0042a69c
    FMUL float ptr [0x005dd0d0]         ; 0042a69f | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a6a5
    FLD float ptr [EAX + 0x8]           ; 0042a6a8
    FMUL float ptr [0x005dd0d0]         ; 0042a6ab | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a6b1
    LEA EAX,[ESP + 0xb8]                ; 0042a6b4
    PUSH EAX                            ; 0042a6bb
    ADD EDX,0x60                        ; 0042a6bc
    PUSH EDX                            ; 0042a6bf
    CALL FUN_0056356c                   ; 0042a6c0
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0042a6c5 | DAT_005f2afc
    LEA EBX,[ESP + 0x9c]                ; 0042a6ca
    ADD ESP,0x8                         ; 0042a6d1
    MOV EDX,dword ptr [EAX]             ; 0042a6d4
    MOV EAX,ESI                         ; 0042a6d6
    FLD float ptr [EAX]                 ; 0042a6d8
    FMUL float ptr [0x005dd0d0]         ; 0042a6da | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a6e0
    FLD float ptr [EAX + 0x4]           ; 0042a6e2
    FMUL float ptr [0x005dd0d0]         ; 0042a6e5 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a6eb
    FLD float ptr [EAX + 0x8]           ; 0042a6ee
    FMUL float ptr [0x005dd0d0]         ; 0042a6f1 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a6f7
    LEA EAX,[ESP + 0x94]                ; 0042a6fa
    PUSH EAX                            ; 0042a701
    ADD EDX,0x90                        ; 0042a702
    PUSH EDX                            ; 0042a708
    CALL FUN_0056356c                   ; 0042a709
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV EAX,[0x005f2afc]                ; 0042a70e | DAT_005f2afc
    MOV EBX,dword ptr [EAX]             ; 0042a713
    SUB dword ptr [EBX],0x40            ; 0042a715
    MOV EBX,dword ptr [EAX]             ; 0042a718
    ADD dword ptr [EBX + 0x30],0x40     ; 0042a71a
    MOV EBX,dword ptr [EAX]             ; 0042a71e
    ADD dword ptr [EBX + 0x60],0x40     ; 0042a720
    MOV EBX,dword ptr [EAX]             ; 0042a724
    SUB dword ptr [EBX + 0x90],0x40     ; 0042a726
    MOV EDX,dword ptr [EAX]             ; 0042a72d
    MOV dword ptr [EDX + 0x10],0x80000000 ; 0042a72f
    MOV EDX,dword ptr [EAX]             ; 0042a736
    MOV dword ptr [EDX + 0x40],0x80000000 ; 0042a738
    MOV EDX,dword ptr [EAX]             ; 0042a73f
    MOV dword ptr [EDX + 0x70],0x80000000 ; 0042a741
    MOV EDX,dword ptr [EAX]             ; 0042a748
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 0042a74a
    MOV EDX,dword ptr [EAX]             ; 0042a754
    MOV dword ptr [EDX + 0x18],0x80000  ; 0042a756
    MOV EDX,dword ptr [EAX]             ; 0042a75d
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0042a75f
    MOV EDX,dword ptr [EAX]             ; 0042a766
    MOV dword ptr [EDX + 0x48],0x80000  ; 0042a768
    MOV EDX,dword ptr [EAX]             ; 0042a76f
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0042a771
    MOV EDX,dword ptr [EAX]             ; 0042a778
    MOV dword ptr [EDX + 0x78],0xf80000 ; 0042a77a
    MOV EDX,dword ptr [EAX]             ; 0042a781
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0042a783
    MOV EDX,dword ptr [EAX]             ; 0042a78a
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 0042a78c
    MOV EAX,dword ptr [EAX]             ; 0042a796
    ADD ESP,0x8                         ; 0042a798
    LEA EBX,[ESP + 0x64]                ; 0042a79b
    MOV dword ptr [EAX + 0xac],0x80000  ; 0042a79f
    MOV EAX,EDI                         ; 0042a7a9
    FLD float ptr [EAX]                 ; 0042a7ab
    FMUL float ptr [0x005dd0d0]         ; 0042a7ad | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a7b3
    FLD float ptr [EAX + 0x4]           ; 0042a7b5
    FMUL float ptr [0x005dd0d0]         ; 0042a7b8 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a7be
    FLD float ptr [EAX + 0x8]           ; 0042a7c1
    FMUL float ptr [0x005dd0d0]         ; 0042a7c4 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a7ca
    PUSH 0x2                            ; 0042a7cd
    PUSH 0x0                            ; 0042a7cf
    PUSH 0x0                            ; 0042a7d1
    LEA EAX,[ESP + 0x70]                ; 0042a7d3
    PUSH EAX                            ; 0042a7d7
    MOV ECX,dword ptr [0x00603b28]      ; 0042a7d8 | DAT_00603b28
    PUSH ECX                            ; 0042a7de
    CALL FUN_00538400                   ; 0042a7df
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; undefined FUN_00538400()
    ADD ESP,0x14                        ; 0042a7e4
    LEA EBX,[ESP + 0x64]                ; 0042a7e7
    MOV EAX,ESI                         ; 0042a7eb
    FLD float ptr [EAX]                 ; 0042a7ed
    FMUL float ptr [0x005dd0d0]         ; 0042a7ef | DAT_005dd0d0
    FISTP dword ptr [EBX]               ; 0042a7f5
    FLD float ptr [EAX + 0x4]           ; 0042a7f7
    FMUL float ptr [0x005dd0d0]         ; 0042a7fa | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x4]         ; 0042a800
    FLD float ptr [EAX + 0x8]           ; 0042a803
    FMUL float ptr [0x005dd0d0]         ; 0042a806 | DAT_005dd0d0
    FISTP dword ptr [EBX + 0x8]         ; 0042a80c
    PUSH 0x2                            ; 0042a80f
    PUSH 0x2                            ; 0042a811
    PUSH 0x0                            ; 0042a813
    LEA EAX,[ESP + 0x70]                ; 0042a815
    PUSH EAX                            ; 0042a819
    MOV EBX,dword ptr [0x00603b28]      ; 0042a81a | DAT_00603b28
    PUSH EBX                            ; 0042a820
    CALL FUN_00538400                   ; 0042a821
        ;   XREF to: 00538400 (UNCONDITIONAL_CALL)  ; undefined FUN_00538400()
    ADD ESP,0x14                        ; 0042a826
    MOV EAX,ESP                         ; 0042a829
    PUSH EAX                            ; 0042a82b
    MOV EAX,[0x005f2afc]                ; 0042a82c | DAT_005f2afc
    ADD EDI,0x24                        ; 0042a831
    PUSH EAX                            ; 0042a834
    INC EBP                             ; 0042a835
    ADD ESI,0x24                        ; 0042a836
    CALL FUN_0046c730                   ; 0042a839
        ;   XREF to: 0046c730 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c730()
    ADD ESP,0x8                         ; 0042a83e
    JMP 0x0042a3b2                      ; 0042a841
        ;   XREF to: 0042a3b2 (UNCONDITIONAL_JUMP)  ; LAB_0042a3b2
    MOV EAX,0x1                         ; 0042a846
        ;   Label: LAB_0042a846
    ADD ESP,0xc4                        ; 0042a84b
    POP EBP                             ; 0042a851
    POP EDI                             ; 0042a852
    POP ESI                             ; 0042a853
    POP EBX                             ; 0042a854
    RET                                 ; 0042a855

