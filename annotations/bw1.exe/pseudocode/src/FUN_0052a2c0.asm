; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052a2c0(float *param_1,int param_2,int param_3)
;
; Local Variables:
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
;   FUN_0052a7d0 at 0052a80f
;
; Referenced Globals:
;   undefined4 DAT_005eb4ce
;   undefined4 DAT_005eb4d6
;   undefined4 DAT_005eb4de
;   undefined4 DAT_005eb4e6
;   undefined4 DAT_005eb4ee
;   undefined4 DAT_005eb4f6
;   undefined4 DAT_005eb4fe
;   undefined4 DAT_005eb506
;   undefined4 DAT_006202e0
;   undefined4 DAT_01d3eb78
;   undefined4 DAT_01d3eb7c
;   undefined4 DAT_01d3eb80
;   undefined4 DAT_01d3eb84
;   undefined4 DAT_01d3eb88
;   undefined4 DAT_01d3eb90
;   ... and 14 more
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a2c0
        ;   Label: FUN_0052a2c0
    PUSH ESI                            ; 0052a2c1
    PUSH EDI                            ; 0052a2c2
    PUSH EBP                            ; 0052a2c3
    MOV EBP,ESP                         ; 0052a2c4
    SUB ESP,0x8c                        ; 0052a2c6
    CMP dword ptr [0x006202e0],0x1      ; 0052a2cc | DAT_006202e0
    JNZ 0x0052a58f                      ; 0052a2d3
        ;   XREF to: 0052a58f (CONDITIONAL_JUMP)  ; LAB_0052a58f
    XOR EDX,EDX                         ; 0052a2d9
    XOR ECX,ECX                         ; 0052a2db
    FLD double ptr [0x005eb4ce]         ; 0052a2dd | DAT_005eb4ce
    FLD double ptr [0x005eb4ee]         ; 0052a2e3 | DAT_005eb4ee
    MOV dword ptr [EBP + -0x4],EDX      ; 0052a2e9
        ;   Label: LAB_0052a2e9
    FILD dword ptr [EBP + -0x4]         ; 0052a2ec
    FADD ST0,ST1                        ; 0052a2ef
    FMUL ST2                            ; 0052a2f1
    FSIN                                ; 0052a2f3
    ADD ECX,0x8                         ; 0052a2f5
    INC EDX                             ; 0052a2f8
    FSTP double ptr [ECX + 0x1d3e9c0]   ; 0052a2f9
    CMP EDX,0x24                        ; 0052a2ff
    JL 0x0052a2e9                       ; 0052a302
        ;   XREF to: 0052a2e9 (CONDITIONAL_JUMP)  ; LAB_0052a2e9
    FSTP ST0                            ; 0052a304
    FSTP ST0                            ; 0052a306
    XOR EDX,EDX                         ; 0052a308
    XOR ECX,ECX                         ; 0052a30a
    FLD double ptr [0x005eb4ce]         ; 0052a30c | DAT_005eb4ce
    FLD double ptr [0x005eb4ee]         ; 0052a312 | DAT_005eb4ee
    MOV dword ptr [EBP + -0x4],EDX      ; 0052a318
        ;   Label: LAB_0052a318
    FILD dword ptr [EBP + -0x4]         ; 0052a31b
    FADD ST0,ST1                        ; 0052a31e
    FMUL ST2                            ; 0052a320
    FSIN                                ; 0052a322
    ADD ECX,0x8                         ; 0052a324
    INC EDX                             ; 0052a327
    FSTP double ptr [ECX + 0x1d3eae0]   ; 0052a328
    CMP EDX,0x12                        ; 0052a32e
    JL 0x0052a318                       ; 0052a331
        ;   XREF to: 0052a318 (CONDITIONAL_JUMP)  ; LAB_0052a318
    FSTP ST0                            ; 0052a333
    MOV EAX,0x90                        ; 0052a335
    MOV EBX,0x3ff00000                  ; 0052a33a
    FSTP ST0                            ; 0052a33f
    ADD EAX,0x8                         ; 0052a341
        ;   Label: LAB_0052a341
    XOR ECX,ECX                         ; 0052a344
    MOV dword ptr [EAX + 0x1d3eae4],EBX ; 0052a346 | DAT_01d3eb7c | DAT_01d3eb84
    MOV dword ptr [EAX + 0x1d3eae0],ECX ; 0052a34c | DAT_01d3eb78 | DAT_01d3eb80
    CMP EAX,0xc0                        ; 0052a352
    JNZ 0x0052a341                      ; 0052a357
        ;   XREF to: 0052a341 (CONDITIONAL_JUMP)  ; LAB_0052a341
    MOV EDX,0x18                        ; 0052a359
    MOV ECX,EAX                         ; 0052a35e
    FLD double ptr [0x005eb4d6]         ; 0052a360 | DAT_005eb4d6
    FLD double ptr [0x005eb4f6]         ; 0052a366 | DAT_005eb4f6
    FLD double ptr [0x005eb4ee]         ; 0052a36c | DAT_005eb4ee
    MOV dword ptr [EBP + -0x4],EDX      ; 0052a372
        ;   Label: LAB_0052a372
    FILD dword ptr [EBP + -0x4]         ; 0052a375
    FADD ST0,ST1                        ; 0052a378
    FADD ST0,ST2                        ; 0052a37a
    FMUL ST3                            ; 0052a37c
    FSIN                                ; 0052a37e
    ADD ECX,0x8                         ; 0052a380
    INC EDX                             ; 0052a383
    FSTP double ptr [ECX + 0x1d3eae0]   ; 0052a384 | DAT_01d3eb88 | DAT_01d3eb90
    CMP EDX,0x1e                        ; 0052a38a
    JL 0x0052a372                       ; 0052a38d
        ;   XREF to: 0052a372 (CONDITIONAL_JUMP)  ; LAB_0052a372
    FSTP ST0                            ; 0052a38f
    MOV EAX,0xf0                        ; 0052a391
    FSTP ST0                            ; 0052a396
    FSTP ST0                            ; 0052a398
    ADD EAX,0x8                         ; 0052a39a
        ;   Label: LAB_0052a39a
    XOR ESI,ESI                         ; 0052a39d
    MOV dword ptr [EAX + 0x1d3eae0],ESI ; 0052a39f | DAT_01d3ebd8 | DAT_01d3ebe0
    MOV dword ptr [EAX + 0x1d3eae4],ESI ; 0052a3a5 | DAT_01d3ebdc | DAT_01d3ebe4
    CMP EAX,0x120                       ; 0052a3ab
    JNZ 0x0052a39a                      ; 0052a3b0
        ;   XREF to: 0052a39a (CONDITIONAL_JUMP)  ; LAB_0052a39a
    XOR EAX,EAX                         ; 0052a3b2
    ADD EAX,0x8                         ; 0052a3b4
        ;   Label: LAB_0052a3b4
    XOR EDX,EDX                         ; 0052a3b7
    MOV dword ptr [EAX + 0x1d3ed20],EDX ; 0052a3b9
    MOV dword ptr [EAX + 0x1d3ed24],EDX ; 0052a3bf
    CMP EAX,0x30                        ; 0052a3c5
    JNZ 0x0052a3b4                      ; 0052a3c8
        ;   XREF to: 0052a3b4 (CONDITIONAL_JUMP)  ; LAB_0052a3b4
    MOV EDX,0x6                         ; 0052a3ca
    MOV ECX,EAX                         ; 0052a3cf
    FLD double ptr [0x005eb4d6]         ; 0052a3d1 | DAT_005eb4d6
    FLD double ptr [0x005eb4fe]         ; 0052a3d7 | DAT_005eb4fe
    FLD double ptr [0x005eb4ee]         ; 0052a3dd | DAT_005eb4ee
    MOV dword ptr [EBP + -0x4],EDX      ; 0052a3e3
        ;   Label: LAB_0052a3e3
    FILD dword ptr [EBP + -0x4]         ; 0052a3e6
    FADD ST0,ST1                        ; 0052a3e9
    FADD ST0,ST2                        ; 0052a3eb
    FMUL ST3                            ; 0052a3ed
    FSIN                                ; 0052a3ef
    ADD ECX,0x8                         ; 0052a3f1
    INC EDX                             ; 0052a3f4
    FSTP double ptr [ECX + 0x1d3ed20]   ; 0052a3f5
    CMP EDX,0xc                         ; 0052a3fb
    JL 0x0052a3e3                       ; 0052a3fe
        ;   XREF to: 0052a3e3 (CONDITIONAL_JUMP)  ; LAB_0052a3e3
    FSTP ST0                            ; 0052a400
    MOV EAX,0x60                        ; 0052a402
    MOV ESI,0x3ff00000                  ; 0052a407
    FSTP ST0                            ; 0052a40c
    FSTP ST0                            ; 0052a40e
    ADD EAX,0x8                         ; 0052a410
        ;   Label: LAB_0052a410
    XOR EBX,EBX                         ; 0052a413
    MOV dword ptr [EAX + 0x1d3ed24],ESI ; 0052a415 | DAT_01d3ed8c | DAT_01d3ed94
    MOV dword ptr [EAX + 0x1d3ed20],EBX ; 0052a41b | DAT_01d3ed88 | DAT_01d3ed90
    CMP EAX,0x90                        ; 0052a421
    JNZ 0x0052a410                      ; 0052a426
        ;   XREF to: 0052a410 (CONDITIONAL_JUMP)  ; LAB_0052a410
    MOV EDX,0x12                        ; 0052a428
    MOV ECX,EAX                         ; 0052a42d
    FLD double ptr [0x005eb4ce]         ; 0052a42f | DAT_005eb4ce
    FLD double ptr [0x005eb4ee]         ; 0052a435 | DAT_005eb4ee
    MOV dword ptr [EBP + -0x4],EDX      ; 0052a43b
        ;   Label: LAB_0052a43b
    FILD dword ptr [EBP + -0x4]         ; 0052a43e
    FADD ST0,ST1                        ; 0052a441
    FMUL ST2                            ; 0052a443
    FSIN                                ; 0052a445
    ADD ECX,0x8                         ; 0052a447
    INC EDX                             ; 0052a44a
    FSTP double ptr [ECX + 0x1d3ed20]   ; 0052a44b | DAT_01d3ed98 | DAT_01d3eda0
    CMP EDX,0x24                        ; 0052a451
    JL 0x0052a43b                       ; 0052a454
        ;   XREF to: 0052a43b (CONDITIONAL_JUMP)  ; LAB_0052a43b
    FSTP ST0                            ; 0052a456
    FSTP ST0                            ; 0052a458
    XOR EDX,EDX                         ; 0052a45a
    XOR ECX,ECX                         ; 0052a45c
    FLD double ptr [0x005eb4d6]         ; 0052a45e | DAT_005eb4d6
    FLD double ptr [0x005eb4ee]         ; 0052a464 | DAT_005eb4ee
    MOV dword ptr [EBP + -0x4],EDX      ; 0052a46a
        ;   Label: LAB_0052a46a
    FILD dword ptr [EBP + -0x4]         ; 0052a46d
    FADD ST0,ST1                        ; 0052a470
    FMUL ST2                            ; 0052a472
    FSIN                                ; 0052a474
    ADD ECX,0x8                         ; 0052a476
    INC EDX                             ; 0052a479
    FSTP double ptr [ECX + 0x1d3ec00]   ; 0052a47a
    CMP EDX,0xc                         ; 0052a480
    JL 0x0052a46a                       ; 0052a483
        ;   XREF to: 0052a46a (CONDITIONAL_JUMP)  ; LAB_0052a46a
    FSTP ST0                            ; 0052a485
    MOV EAX,0x60                        ; 0052a487
    FSTP ST0                            ; 0052a48c
    ADD EAX,0x8                         ; 0052a48e
        ;   Label: LAB_0052a48e
    XOR EDI,EDI                         ; 0052a491
    MOV dword ptr [EAX + 0x1d3ec00],EDI ; 0052a493 | DAT_01d3ec68 | DAT_01d3ec70
    MOV dword ptr [EAX + 0x1d3ec04],EDI ; 0052a499 | DAT_01d3ec6c | DAT_01d3ec74
    CMP EAX,0x120                       ; 0052a49f
    JNZ 0x0052a48e                      ; 0052a4a4
        ;   XREF to: 0052a48e (CONDITIONAL_JUMP)  ; LAB_0052a48e
    MOV EBX,0xc                         ; 0052a4a6
    MOV dword ptr [EBP + -0x14],EDI     ; 0052a4ab
    MOV EDI,0x1                         ; 0052a4ae
    MOV dword ptr [EBP + -0x20],EBX     ; 0052a4b3
    MOV ECX,0x1                         ; 0052a4b6
        ;   Label: LAB_0052a4b6
    MOV EDX,dword ptr [EBP + -0x20]     ; 0052a4bb
    ADD EDX,ECX                         ; 0052a4be
    MOV EBX,dword ptr [EBP + -0x14]     ; 0052a4c0
    CMP EDX,ECX                         ; 0052a4c3
    JLE 0x0052a4f4                      ; 0052a4c5
        ;   XREF to: 0052a4f4 (CONDITIONAL_JUMP)  ; LAB_0052a4f4
    FLD double ptr [0x005eb4de]         ; 0052a4c7 | DAT_005eb4de
    LEA ESI,[EDI + 0x6]                 ; 0052a4cd
    MOV dword ptr [EBP + -0x4],ESI      ; 0052a4d0
        ;   Label: LAB_0052a4d0
    FILD dword ptr [EBP + -0x4]         ; 0052a4d3
    FMUL ST1                            ; 0052a4d6
    MOV dword ptr [EBP + -0x4],ECX      ; 0052a4d8
    FILD dword ptr [EBP + -0x4]         ; 0052a4db
    FMULP                               ; 0052a4de
    FCOS                                ; 0052a4e0
    ADD EBX,0x8                         ; 0052a4e2
    ADD ECX,0x2                         ; 0052a4e5
    FSTP double ptr [EBX + 0x1d3ee40]   ; 0052a4e8
    CMP ECX,EDX                         ; 0052a4ee
    JL 0x0052a4d0                       ; 0052a4f0
        ;   XREF to: 0052a4d0 (CONDITIONAL_JUMP)  ; LAB_0052a4d0
    FSTP ST0                            ; 0052a4f2
    MOV ESI,dword ptr [EBP + -0x14]     ; 0052a4f4
        ;   Label: LAB_0052a4f4
    ADD ESI,0x30                        ; 0052a4f7
    ADD EDI,0x2                         ; 0052a4fa
    MOV dword ptr [EBP + -0x14],ESI     ; 0052a4fd
    CMP EDI,0x19                        ; 0052a500
    JNZ 0x0052a4b6                      ; 0052a503
        ;   XREF to: 0052a4b6 (CONDITIONAL_JUMP)  ; LAB_0052a4b6
    MOV EAX,0x90                        ; 0052a505
    MOV EDX,0x26                        ; 0052a50a
    XOR EDI,EDI                         ; 0052a50f
    MOV dword ptr [EBP + -0x1c],EAX     ; 0052a511
    MOV dword ptr [EBP + -0x18],EDX     ; 0052a514
    MOV dword ptr [EBP + -0x10],EDI     ; 0052a517
    IMUL EBX,dword ptr [EBP + -0x10],0x90 ; 0052a51a
        ;   Label: LAB_0052a51a
    MOV EAX,dword ptr [EBP + -0x10]     ; 0052a521
    ADD EAX,EAX                         ; 0052a524
    ADD EAX,0x13                        ; 0052a526
    IMUL ECX,EAX,0x0                    ; 0052a529
    MOV ESI,dword ptr [EBP + -0x18]     ; 0052a52c
    MOV EDI,dword ptr [EBP + -0x1c]     ; 0052a52f
    ADD ECX,EAX                         ; 0052a532
    FLD double ptr [0x005eb4e6]         ; 0052a534 | DAT_005eb4e6
    MOV dword ptr [EBP + -0x4],0x90     ; 0052a53a
        ;   Label: LAB_0052a53a
    MOV EDX,ECX                         ; 0052a541
    MOV EAX,ECX                         ; 0052a543
    SAR EDX,0x1f                        ; 0052a545
    IDIV dword ptr [EBP + -0x4]         ; 0052a548
    MOV dword ptr [EBP + -0x4],EDX      ; 0052a54b
    FILD dword ptr [EBP + -0x4]         ; 0052a54e
    FMUL ST1                            ; 0052a551
    FCOS                                ; 0052a553
    ADD EBX,0x8                         ; 0052a555
    ADD ECX,ESI                         ; 0052a558
    FSTP double ptr [EBX + 0x1d3f080]   ; 0052a55a
    CMP EBX,EDI                         ; 0052a560
    JNZ 0x0052a53a                      ; 0052a562
        ;   XREF to: 0052a53a (CONDITIONAL_JUMP)  ; LAB_0052a53a
    FSTP ST0                            ; 0052a564
    MOV ESI,dword ptr [EBP + -0x18]     ; 0052a566
    MOV EDI,dword ptr [EBP + -0x10]     ; 0052a569
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0052a56c
    ADD ESI,0x4                         ; 0052a56f
    INC EDI                             ; 0052a572
    ADD EBX,0x90                        ; 0052a573
    MOV dword ptr [EBP + -0x18],ESI     ; 0052a579
    MOV dword ptr [EBP + -0x10],EDI     ; 0052a57c
    MOV dword ptr [EBP + -0x1c],EBX     ; 0052a57f
    CMP EDI,0x24                        ; 0052a582
    JL 0x0052a51a                       ; 0052a585
        ;   XREF to: 0052a51a (CONDITIONAL_JUMP)  ; LAB_0052a51a
    XOR EDX,EDX                         ; 0052a587
    MOV dword ptr [0x006202e0],EDX      ; 0052a589 | DAT_006202e0
    CMP dword ptr [EBP + 0x1c],0x2      ; 0052a58f
        ;   Label: LAB_0052a58f
    JZ 0x0052a670                       ; 0052a593
        ;   XREF to: 0052a670 (CONDITIONAL_JUMP)  ; LAB_0052a670
    XOR EDX,EDX                         ; 0052a599
    MOV dword ptr [EBP + -0x34],EDX     ; 0052a59b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052a59e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052a5a1
        ;   Label: LAB_0052a5a1
    ADD EAX,EDI                         ; 0052a5a8
    FLD float ptr [EAX]                 ; 0052a5aa
    FABS                                ; 0052a5ac
    FCOMP double ptr [0x005eb506]       ; 0052a5ae | DAT_005eb506
    FNSTSW AX                           ; 0052a5b4
    SAHF                                ; 0052a5b6
    JBE 0x0052a5c6                      ; 0052a5b7
        ;   XREF to: 0052a5c6 (CONDITIONAL_JUMP)  ; LAB_0052a5c6
    MOV EAX,dword ptr [EBP + -0x34]     ; 0052a5b9
    INC dword ptr [EBP + -0x34]         ; 0052a5bc
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff74],EDX ; 0052a5bf
    INC EDX                             ; 0052a5c6
        ;   Label: LAB_0052a5c6
    CMP EDX,0x12                        ; 0052a5c7
    JL 0x0052a5a1                       ; 0052a5ca
        ;   XREF to: 0052a5a1 (CONDITIONAL_JUMP)  ; LAB_0052a5a1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0052a5cc
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052a5cf
    ADD EAX,EDX                         ; 0052a5d6
    MOV EDX,0x1d3e9c8                   ; 0052a5d8
    SHL EAX,0x5                         ; 0052a5dd
    XOR EBX,EBX                         ; 0052a5e0
    ADD EDX,EAX                         ; 0052a5e2
    MOV dword ptr [EBP + -0xc],EBX      ; 0052a5e4
    MOV dword ptr [EBP + -0x24],EDX     ; 0052a5e7
    MOV EAX,dword ptr [EBP + -0xc]      ; 0052a5ea
        ;   Label: LAB_0052a5ea
    MOV EDX,dword ptr [EBP + 0x18]      ; 0052a5ed
    SHL EAX,0x2                         ; 0052a5f0
    ADD EDX,EAX                         ; 0052a5f3
    MOV dword ptr [EBP + -0x30],EDX     ; 0052a5f5
    MOV ESI,dword ptr [EBP + -0xc]      ; 0052a5f8
    IMUL EAX,ESI,0x90                   ; 0052a5fb
    MOV EDX,0x1d3f088                   ; 0052a601
    ADD EDX,EAX                         ; 0052a606
    MOV dword ptr [EBP + -0x2c],EDX     ; 0052a608
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052a60b
    MOV dword ptr [EBP + -0x8],EAX      ; 0052a60e
    MOV EDX,dword ptr [EBP + -0x24]     ; 0052a611
    LEA EAX,[ESI*0x8 + 0x0]             ; 0052a614
    ADD EDX,EAX                         ; 0052a61b
    MOV dword ptr [EBP + -0x28],EDX     ; 0052a61d
    FLDZ                                ; 0052a620
    MOV ECX,dword ptr [EBP + 0xffffffcc] ; 0052a622
    SUB ECX,0x1                         ; 0052a628
    JL 0x0052a655                       ; 0052a62b
        ;   XREF to: 0052a655 (CONDITIONAL_JUMP)  ; LAB_0052a655
    MOV EBX,dword ptr [EBP + 0xffffffd4] ; 0052a62d
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 0052a633
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff74] ; 0052a639
        ;   Label: LAB_0052a639
    FLD float ptr [ESI + EAX*0x4]       ; 0052a640
    FMUL double ptr [EBX + EAX*0x8]     ; 0052a643
    FADDP                               ; 0052a646
    SUB ECX,0x1                         ; 0052a648
    JGE 0x0052a639                      ; 0052a64b
        ;   XREF to: 0052a639 (CONDITIONAL_JUMP)  ; LAB_0052a639
    MOV EBX,dword ptr [EBP + 0xffffffd8] ; 0052a64d
    FMUL double ptr [EBX]               ; 0052a653
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 0052a655
        ;   Label: LAB_0052a655
    FSTP float ptr [EBX]                ; 0052a65b
    MOV EDI,dword ptr [EBP + -0xc]      ; 0052a65d
    INC EDI                             ; 0052a660
    MOV dword ptr [EBP + -0xc],EDI      ; 0052a661
    CMP EDI,0x24                        ; 0052a664
    JL 0x0052a5ea                       ; 0052a667
        ;   XREF to: 0052a5ea (CONDITIONAL_JUMP)  ; LAB_0052a5ea
    MOV ESP,EBP                         ; 0052a669
    POP EBP                             ; 0052a66b
    POP EDI                             ; 0052a66c
    POP ESI                             ; 0052a66d
    POP EBX                             ; 0052a66e
    RET                                 ; 0052a66f
    PUSH 0x90                           ; 0052a670
        ;   Label: LAB_0052a670
    PUSH 0x0                            ; 0052a675
    MOV ESI,dword ptr [EBP + 0x18]      ; 0052a677
    PUSH ESI                            ; 0052a67a
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052a67b
    CALL FUN_005bfb70                   ; 0052a67e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0052a683
    MOV EDX,ESI                         ; 0052a686
    XOR ECX,ECX                         ; 0052a688
    XOR EAX,EAX                         ; 0052a68a
    FLD float ptr [EBX + 0xc]           ; 0052a68c
        ;   Label: LAB_0052a68c
    FMUL double ptr [EAX + 0x1d3ee50]   ; 0052a68f
    FLD float ptr [EBX]                 ; 0052a695
    FMUL double ptr [EAX + 0x1d3ee48]   ; 0052a697
    FADDP                               ; 0052a69d
    FLD float ptr [EBX + 0x18]          ; 0052a69f
    FMUL double ptr [EAX + 0x1d3ee58]   ; 0052a6a2
    FADDP                               ; 0052a6a8
    FLD float ptr [EBX + 0x24]          ; 0052a6aa
    FMUL double ptr [EAX + 0x1d3ee60]   ; 0052a6ad
    FADDP                               ; 0052a6b3
    FLD float ptr [EBX + 0x30]          ; 0052a6b5
    FMUL double ptr [EAX + 0x1d3ee68]   ; 0052a6b8
    FADDP                               ; 0052a6be
    FLD float ptr [EBX + 0x3c]          ; 0052a6c0
    FMUL double ptr [EAX + 0x1d3ee70]   ; 0052a6c3
    FADDP                               ; 0052a6c9
    FMUL double ptr [ECX + 0x1d3ec08]   ; 0052a6cb
    ADD EDX,0x4                         ; 0052a6d1
    ADD ECX,0x8                         ; 0052a6d4
    FLD float ptr [EDX + 0x14]          ; 0052a6d7
    FXCH                                ; 0052a6da
    FADD ST0,ST1                        ; 0052a6dc
    ADD EAX,0x30                        ; 0052a6de
    FSTP ST1                            ; 0052a6e1
    FSTP float ptr [EDX + 0x14]         ; 0052a6e3
    CMP ECX,0x60                        ; 0052a6e6
    JNZ 0x0052a68c                      ; 0052a6e9
        ;   XREF to: 0052a68c (CONDITIONAL_JUMP)  ; LAB_0052a68c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0052a6eb
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052a6ee
    XOR EAX,EAX                         ; 0052a6f1
    XOR EDX,EDX                         ; 0052a6f3
    FLD float ptr [EBX + 0x10]          ; 0052a6f5
        ;   Label: LAB_0052a6f5
    FMUL double ptr [EAX + 0x1d3ee50]   ; 0052a6f8
    FLD float ptr [EBX + 0x4]           ; 0052a6fe
    FMUL double ptr [EAX + 0x1d3ee48]   ; 0052a701
    FADDP                               ; 0052a707
    FLD float ptr [EBX + 0x1c]          ; 0052a709
    FMUL double ptr [EAX + 0x1d3ee58]   ; 0052a70c
    FADDP                               ; 0052a712
    FLD float ptr [EBX + 0x28]          ; 0052a714
    FMUL double ptr [EAX + 0x1d3ee60]   ; 0052a717
    FADDP                               ; 0052a71d
    FLD float ptr [EBX + 0x34]          ; 0052a71f
    FMUL double ptr [EAX + 0x1d3ee68]   ; 0052a722
    FADDP                               ; 0052a728
    FLD float ptr [EBX + 0x40]          ; 0052a72a
    FMUL double ptr [EAX + 0x1d3ee70]   ; 0052a72d
    FADDP                               ; 0052a733
    FMUL double ptr [EDX + 0x1d3ec08]   ; 0052a735
    ADD ECX,0x4                         ; 0052a73b
    ADD EDX,0x8                         ; 0052a73e
    FLD float ptr [ECX + 0x2c]          ; 0052a741
    FXCH                                ; 0052a744
    FADD ST0,ST1                        ; 0052a746
    ADD EAX,0x30                        ; 0052a748
    FSTP ST1                            ; 0052a74b
    FSTP float ptr [ECX + 0x2c]         ; 0052a74d
    CMP EDX,0x60                        ; 0052a750
    JNZ 0x0052a6f5                      ; 0052a753
        ;   XREF to: 0052a6f5 (CONDITIONAL_JUMP)  ; LAB_0052a6f5
    MOV ECX,dword ptr [EBP + 0x18]      ; 0052a755
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052a758
    XOR EAX,EAX                         ; 0052a75b
    XOR EDX,EDX                         ; 0052a75d
    FLD float ptr [EBX + 0x14]          ; 0052a75f
        ;   Label: LAB_0052a75f
    FMUL double ptr [EAX + 0x1d3ee50]   ; 0052a762
    FLD float ptr [EBX + 0x8]           ; 0052a768
    FMUL double ptr [EAX + 0x1d3ee48]   ; 0052a76b
    FADDP                               ; 0052a771
    FLD float ptr [EBX + 0x20]          ; 0052a773
    FMUL double ptr [EAX + 0x1d3ee58]   ; 0052a776
    FADDP                               ; 0052a77c
    FLD float ptr [EBX + 0x2c]          ; 0052a77e
    FMUL double ptr [EAX + 0x1d3ee60]   ; 0052a781
    FADDP                               ; 0052a787
    FLD float ptr [EBX + 0x38]          ; 0052a789
    FMUL double ptr [EAX + 0x1d3ee68]   ; 0052a78c
    FADDP                               ; 0052a792
    FLD float ptr [EBX + 0x44]          ; 0052a794
    FMUL double ptr [EAX + 0x1d3ee70]   ; 0052a797
    FADDP                               ; 0052a79d
    FMUL double ptr [EDX + 0x1d3ec08]   ; 0052a79f
    ADD ECX,0x4                         ; 0052a7a5
    ADD EDX,0x8                         ; 0052a7a8
    FLD float ptr [ECX + 0x44]          ; 0052a7ab
    FXCH                                ; 0052a7ae
    FADD ST0,ST1                        ; 0052a7b0
    ADD EAX,0x30                        ; 0052a7b2
    FSTP ST1                            ; 0052a7b5
    FSTP float ptr [ECX + 0x44]         ; 0052a7b7
    CMP EDX,0x60                        ; 0052a7ba
    JNZ 0x0052a75f                      ; 0052a7bd
        ;   XREF to: 0052a75f (CONDITIONAL_JUMP)  ; LAB_0052a75f
    MOV ESP,EBP                         ; 0052a7bf
    POP EBP                             ; 0052a7c1
    POP EDI                             ; 0052a7c2
    POP ESI                             ; 0052a7c3
    POP EBX                             ; 0052a7c4
    RET                                 ; 0052a7c5

