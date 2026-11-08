; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044a380(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d73e2
;   undefined4 DAT_005d73ea
;   undefined4 DAT_005d73f2
;   undefined4 DAT_005d73fa
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_00408850
;   FUN_0044aa10
;   FUN_00484f00
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a380
        ;   Label: FUN_0044a380
    PUSH ESI                            ; 0044a381
    PUSH EDI                            ; 0044a382
    PUSH EBP                            ; 0044a383
    MOV EBP,ESP                         ; 0044a384
    SUB ESP,0x8c                        ; 0044a386
    AND ESP,0xfffffff8                  ; 0044a38c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044a38f
    PUSH EBX                            ; 0044a392
    CALL FUN_00408850                   ; 0044a393
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 0044a398
    LEA EAX,[EBX + 0x164]               ; 0044a39b
    PUSH EAX                            ; 0044a3a1
    MOV EDX,dword ptr [0x00612560]      ; 0044a3a2 | DAT_00612560
    PUSH EDX                            ; 0044a3a8
    CALL FUN_00484f00                   ; 0044a3a9
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 0044a3ae
    FLD1                                ; 0044a3b1
        ;   Label: LAB_0044a3b1
    FLD float ptr [EBX + 0x158]         ; 0044a3b3
    FXCH                                ; 0044a3b9
    FDIV float ptr [EBX + 0x1fc]        ; 0044a3bb
    FXCH                                ; 0044a3c1
    FMUL ST1                            ; 0044a3c3
    FLD float ptr [EBX + 0x15c]         ; 0044a3c5
    FMULP ST2                           ; 0044a3cb
    CALL FUN_005c03a0                   ; 0044a3cd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x84]        ; 0044a3d2
    MOV EAX,dword ptr [ESP + 0x84]      ; 0044a3d9
    CALL FUN_005c03a0                   ; 0044a3e0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    INC EAX                             ; 0044a3e5
    FISTP dword ptr [ESP + 0x88]        ; 0044a3e6
    MOV dword ptr [ESP + 0x64],EAX      ; 0044a3ed
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044a3f1
    INC EAX                             ; 0044a3f8
    MOV dword ptr [ESP + 0x30],EAX      ; 0044a3f9
    MOV EAX,dword ptr [ESP + 0x84]      ; 0044a3fd
    MOV dword ptr [EBX + 0x1c72c],EAX   ; 0044a404
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044a40a
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044a411
    MOV dword ptr [EBX + 0x1c730],EAX   ; 0044a415
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044a41b
    IMUL EAX,ECX                        ; 0044a41f
    MOV dword ptr [EBX + 0x204],EAX     ; 0044a422
    CMP EAX,0x3e8                       ; 0044a428
    JG 0x0044a9ab                       ; 0044a42d
        ;   XREF to: 0044a9ab (CONDITIONAL_JUMP)  ; LAB_0044a9ab
    LEA EDX,[ECX + -0x1]                ; 0044a433
    MOV dword ptr [ESP + 0x88],EDX      ; 0044a436
    FILD dword ptr [ESP + 0x88]         ; 0044a43d
    FDIVR float ptr [EBX + 0x15c]       ; 0044a444
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044a44a
    DEC EAX                             ; 0044a44e
    MOV dword ptr [ESP + 0x88],EAX      ; 0044a44f
    FILD dword ptr [ESP + 0x88]         ; 0044a456
    FDIVR float ptr [EBX + 0x158]       ; 0044a45d
    XOR EDI,EDI                         ; 0044a463
    XOR ESI,ESI                         ; 0044a465
    MOV ECX,dword ptr [EBX + 0x15c]     ; 0044a467
    MOV dword ptr [ESP + 0x78],EDI      ; 0044a46d
    MOV dword ptr [ESP + 0x60],ECX      ; 0044a471
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044a475
    FXCH                                ; 0044a479
    FSTP float ptr [ESP + 0x24]         ; 0044a47b
    FSTP float ptr [ESP + 0x3c]         ; 0044a47f
    TEST ECX,ECX                        ; 0044a483
    JLE 0x0044a67a                      ; 0044a485
        ;   XREF to: 0044a67a (CONDITIONAL_JUMP)  ; LAB_0044a67a
    MOV dword ptr [ESP + 0x44],EAX      ; 0044a48b
    MOV dword ptr [ESP + 0x40],EDX      ; 0044a48f
    MOV dword ptr [ESP + 0x54],EAX      ; 0044a493
    MOV dword ptr [ESP + 0x48],EAX      ; 0044a497
    MOV dword ptr [ESP + 0x4c],EDX      ; 0044a49b
    MOV dword ptr [ESP + 0x38],EAX      ; 0044a49f
    LEA EAX,[EBX + 0x208]               ; 0044a4a3
    MOV dword ptr [ESP + 0x50],EDX      ; 0044a4a9
    MOV dword ptr [ESP + 0x28],EAX      ; 0044a4ad
    FLD float ptr [EBX + 0x158]         ; 0044a4b1
        ;   Label: LAB_0044a4b1
    FCHS                                ; 0044a4b7
    FMUL double ptr [0x005d73ea]        ; 0044a4b9 | DAT_005d73ea
    MOV ECX,dword ptr [ESP + 0x64]      ; 0044a4bf
    XOR EDX,EDX                         ; 0044a4c3
    FSTP float ptr [ESP + 0x70]         ; 0044a4c5
    TEST ECX,ECX                        ; 0044a4c9
    JLE 0x0044a661                      ; 0044a4cb
        ;   XREF to: 0044a661 (CONDITIONAL_JUMP)  ; LAB_0044a661
    MOV ECX,dword ptr [ESP + 0x78]      ; 0044a4d1
    IMUL EAX,ECX,0x74                   ; 0044a4d5
    MOV EDI,dword ptr [ESP + 0x28]      ; 0044a4d8
    ADD EAX,EDI                         ; 0044a4dc
    MOV dword ptr [ESP + 0x80],EAX      ; 0044a4de
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044a4e5
    NEG EAX                             ; 0044a4e9
    ADD EAX,ECX                         ; 0044a4eb
    MOV dword ptr [ESP + 0x74],EAX      ; 0044a4ed
    MOV EAX,dword ptr [ESP + 0x80]      ; 0044a4f1
        ;   Label: LAB_0044a4f1
    MOV ECX,dword ptr [ESP + 0x70]      ; 0044a4f8
    MOV dword ptr [EAX + 0x14],0x0      ; 0044a4fc
    MOV dword ptr [EAX + 0xc],ECX       ; 0044a503
    MOV ECX,dword ptr [ESP + 0x60]      ; 0044a506
    MOV dword ptr [EAX + 0x10],ECX      ; 0044a50a
    TEST ESI,ESI                        ; 0044a50d
    JNZ 0x0044a9c6                      ; 0044a50f
        ;   XREF to: 0044a9c6 (CONDITIONAL_JUMP)  ; LAB_0044a9c6
    CMP dword ptr [EBX + 0x180],0x0     ; 0044a515
    JZ 0x0044a9c6                       ; 0044a51c
        ;   XREF to: 0044a9c6 (CONDITIONAL_JUMP)  ; LAB_0044a9c6
    MOV dword ptr [EAX + 0x68],0x1      ; 0044a522
        ;   Label: LAB_0044a522
    MOV dword ptr [EAX + 0x70],0x0      ; 0044a529
        ;   Label: LAB_0044a529
    TEST EDX,EDX                        ; 0044a530
    JNZ 0x0044a53f                      ; 0044a532
        ;   XREF to: 0044a53f (CONDITIONAL_JUMP)  ; LAB_0044a53f
    TEST ESI,ESI                        ; 0044a534
    JNZ 0x0044a53f                      ; 0044a536
        ;   XREF to: 0044a53f (CONDITIONAL_JUMP)  ; LAB_0044a53f
    MOV dword ptr [EAX + 0x70],0x1      ; 0044a538
    TEST EDX,EDX                        ; 0044a53f
        ;   Label: LAB_0044a53f
    JNZ 0x0044a550                      ; 0044a541
        ;   XREF to: 0044a550 (CONDITIONAL_JUMP)  ; LAB_0044a550
    CMP ESI,dword ptr [ESP + 0x4c]      ; 0044a543
    JNZ 0x0044a550                      ; 0044a547
        ;   XREF to: 0044a550 (CONDITIONAL_JUMP)  ; LAB_0044a550
    MOV dword ptr [EAX + 0x70],0x1      ; 0044a549
    CMP EDX,dword ptr [ESP + 0x48]      ; 0044a550
        ;   Label: LAB_0044a550
    JNZ 0x0044a561                      ; 0044a554
        ;   XREF to: 0044a561 (CONDITIONAL_JUMP)  ; LAB_0044a561
    TEST ESI,ESI                        ; 0044a556
    JNZ 0x0044a561                      ; 0044a558
        ;   XREF to: 0044a561 (CONDITIONAL_JUMP)  ; LAB_0044a561
    MOV dword ptr [EAX + 0x70],0x1      ; 0044a55a
    CMP EDX,dword ptr [ESP + 0x54]      ; 0044a561
        ;   Label: LAB_0044a561
    JNZ 0x0044a574                      ; 0044a565
        ;   XREF to: 0044a574 (CONDITIONAL_JUMP)  ; LAB_0044a574
    CMP ESI,dword ptr [ESP + 0x40]      ; 0044a567
    JNZ 0x0044a574                      ; 0044a56b
        ;   XREF to: 0044a574 (CONDITIONAL_JUMP)  ; LAB_0044a574
    MOV dword ptr [EAX + 0x70],0x1      ; 0044a56d
    MOV dword ptr [EAX + 0x44],0x0      ; 0044a574
        ;   Label: LAB_0044a574
    TEST ESI,ESI                        ; 0044a57b
    JLE 0x0044a58d                      ; 0044a57d
        ;   XREF to: 0044a58d (CONDITIONAL_JUMP)  ; LAB_0044a58d
    MOV ECX,dword ptr [EAX + 0x44]      ; 0044a57f
    MOV EDI,dword ptr [ESP + 0x74]      ; 0044a582
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 0044a586
    INC dword ptr [EAX + 0x44]          ; 0044a58a
    TEST EDX,EDX                        ; 0044a58d
        ;   Label: LAB_0044a58d
    JLE 0x0044a5a0                      ; 0044a58f
        ;   XREF to: 0044a5a0 (CONDITIONAL_JUMP)  ; LAB_0044a5a0
    MOV EDI,dword ptr [ESP + 0x78]      ; 0044a591
    MOV ECX,dword ptr [EAX + 0x44]      ; 0044a595
    DEC EDI                             ; 0044a598
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 0044a599
    INC dword ptr [EAX + 0x44]          ; 0044a59d
    CMP EDX,dword ptr [ESP + 0x44]      ; 0044a5a0
        ;   Label: LAB_0044a5a0
    JGE 0x0044a5b5                      ; 0044a5a4
        ;   XREF to: 0044a5b5 (CONDITIONAL_JUMP)  ; LAB_0044a5b5
    MOV EDI,dword ptr [ESP + 0x78]      ; 0044a5a6
    MOV ECX,dword ptr [EAX + 0x44]      ; 0044a5aa
    INC EDI                             ; 0044a5ad
    MOV dword ptr [EAX + ECX*0x4 + 0x48],EDI ; 0044a5ae
    INC dword ptr [EAX + 0x44]          ; 0044a5b2
    FLD float ptr [EBX + 0x158]         ; 0044a5b5
        ;   Label: LAB_0044a5b5
    FLD ST0                             ; 0044a5bb
    FMUL double ptr [0x005d73ea]        ; 0044a5bd | DAT_005d73ea
    FADD float ptr [EAX + 0xc]          ; 0044a5c3
    FDIVRP                              ; 0044a5c6
    FLD double ptr [0x005d73f2]         ; 0044a5c8 | DAT_005d73f2
    FXCH                                ; 0044a5ce
    FMUL ST1                            ; 0044a5d0
    FLD double ptr [0x005d73fa]         ; 0044a5d2 | DAT_005d73fa
    FXCH                                ; 0044a5d8
    FMUL ST1                            ; 0044a5da
    CALL FUN_005c03a0                   ; 0044a5dc
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x84]        ; 0044a5e1
    MOV ECX,dword ptr [ESP + 0x84]      ; 0044a5e8
    ADD ECX,0x20000                     ; 0044a5ef
    MOV dword ptr [EAX + 0x18],ECX      ; 0044a5f5
    FLD float ptr [EAX + 0x10]          ; 0044a5f8
    FDIV float ptr [EBX + 0x15c]        ; 0044a5fb
    FLD1                                ; 0044a601
    FSUBRP                              ; 0044a603
    FMULP ST2                           ; 0044a605
    FMULP                               ; 0044a607
    FLD float ptr [ESP + 0x70]          ; 0044a609
    MOV EDI,dword ptr [ESP + 0x80]      ; 0044a60d
    INC EDX                             ; 0044a614
    FADD float ptr [ESP + 0x3c]         ; 0044a615
    ADD EDI,0x74                        ; 0044a619
    FSTP float ptr [ESP + 0x70]         ; 0044a61c
    CALL FUN_005c03a0                   ; 0044a620
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x84]        ; 0044a625
    MOV ECX,dword ptr [ESP + 0x84]      ; 0044a62c
    MOV dword ptr [ESP + 0x80],EDI      ; 0044a633
    ADD ECX,0x20000                     ; 0044a63a
    MOV EDI,dword ptr [ESP + 0x64]      ; 0044a640
    MOV dword ptr [EAX + 0x1c],ECX      ; 0044a644
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044a647
    MOV ECX,dword ptr [ESP + 0x78]      ; 0044a64b
    INC EAX                             ; 0044a64f
    INC ECX                             ; 0044a650
    MOV dword ptr [ESP + 0x74],EAX      ; 0044a651
    MOV dword ptr [ESP + 0x78],ECX      ; 0044a655
    CMP EDX,EDI                         ; 0044a659
    JL 0x0044a4f1                       ; 0044a65b
        ;   XREF to: 0044a4f1 (CONDITIONAL_JUMP)  ; LAB_0044a4f1
    FLD float ptr [ESP + 0x60]          ; 0044a661
        ;   Label: LAB_0044a661
    MOV EDI,dword ptr [ESP + 0x30]      ; 0044a665
    FSUB float ptr [ESP + 0x24]         ; 0044a669
    INC ESI                             ; 0044a66d
    FSTP float ptr [ESP + 0x60]         ; 0044a66e
    CMP ESI,EDI                         ; 0044a672
    JL 0x0044a4b1                       ; 0044a674
        ;   XREF to: 0044a4b1 (CONDITIONAL_JUMP)  ; LAB_0044a4b1
    XOR EAX,EAX                         ; 0044a67a
        ;   Label: LAB_0044a67a
    MOV EDX,dword ptr [EBX + 0x204]     ; 0044a67c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044a682
    TEST EDX,EDX                        ; 0044a686
    JLE 0x0044a746                      ; 0044a688
        ;   XREF to: 0044a746 (CONDITIONAL_JUMP)  ; LAB_0044a746
    LEA EAX,[EBX + 0x208]               ; 0044a68e
    MOV dword ptr [ESP + 0x34],EAX      ; 0044a694
    MOV dword ptr [ESP + 0x58],EAX      ; 0044a698
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044a69c
        ;   Label: LAB_0044a69c
    XOR ECX,ECX                         ; 0044a6a0
    MOV EDI,dword ptr [EAX + 0x44]      ; 0044a6a2
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044a6a5
    TEST EDI,EDI                        ; 0044a6a9
    JLE 0x0044a724                      ; 0044a6ab
        ;   XREF to: 0044a724 (CONDITIONAL_JUMP)  ; LAB_0044a724
    FLD float ptr [ESP]                 ; 0044a6ad
    ADD EAX,0xc                         ; 0044a6b0
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044a6b3
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044a6b7
    IMUL EAX,dword ptr [EDX + 0x48],0x74 ; 0044a6bb
        ;   Label: LAB_0044a6bb
    ADD EAX,dword ptr [ESP + 0x58]      ; 0044a6bf
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0044a6c3
    LEA EDI,[ESP + 0x10]                ; 0044a6c7
    FLD float ptr [ESI + 0x4]           ; 0044a6cb
    FLD float ptr [ESI + 0x8]           ; 0044a6ce
    FLD float ptr [ESI]                 ; 0044a6d1
    LEA ESI,[ESP + 0x4]                 ; 0044a6d3
    FSUB float ptr [EAX + 0xc]          ; 0044a6d7
    FXCH ST2                            ; 0044a6da
    FSUB float ptr [EAX + 0x10]         ; 0044a6dc
    FXCH                                ; 0044a6df
    FSUB float ptr [EAX + 0x14]         ; 0044a6e1
    FXCH ST2                            ; 0044a6e4
    FSTP float ptr [ESP + 0x4]          ; 0044a6e6
    FSTP float ptr [ESP + 0x8]          ; 0044a6ea
    FSTP float ptr [ESP + 0xc]          ; 0044a6ee
    MOVSD ES:EDI,ESI                    ; 0044a6f2
    MOVSD ES:EDI,ESI                    ; 0044a6f3
    MOVSD ES:EDI,ESI                    ; 0044a6f4
    FLD float ptr [ESP + 0x14]          ; 0044a6f5
    FMUL ST0                            ; 0044a6f9
    FLD float ptr [ESP + 0x10]          ; 0044a6fb
    FMUL ST0                            ; 0044a6ff
    FADDP                               ; 0044a701
    FLD float ptr [ESP + 0x18]          ; 0044a703
    FMUL ST0                            ; 0044a707
    FADDP                               ; 0044a709
    FST ST1                             ; 0044a70b
    FSQRT                               ; 0044a70d
    INC ECX                             ; 0044a70f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0044a710
    FSTP float ptr [EDX + 0x58]         ; 0044a714
    MOV EDI,dword ptr [EAX + 0x44]      ; 0044a717
    ADD EDX,0x4                         ; 0044a71a
    CMP ECX,EDI                         ; 0044a71d
    JL 0x0044a6bb                       ; 0044a71f
        ;   XREF to: 0044a6bb (CONDITIONAL_JUMP)  ; LAB_0044a6bb
    FSTP float ptr [ESP]                ; 0044a721
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044a724
        ;   Label: LAB_0044a724
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0044a728
    MOV EDX,dword ptr [EBX + 0x204]     ; 0044a72c
    ADD ESI,0x74                        ; 0044a732
    INC EDI                             ; 0044a735
    MOV dword ptr [ESP + 0x34],ESI      ; 0044a736
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044a73a
    CMP EDI,EDX                         ; 0044a73e
    JL 0x0044a69c                       ; 0044a740
        ;   XREF to: 0044a69c (CONDITIONAL_JUMP)  ; LAB_0044a69c
    MOV ESI,dword ptr [EBX + 0x204]     ; 0044a746
        ;   Label: LAB_0044a746
    XOR ECX,ECX                         ; 0044a74c
    TEST ESI,ESI                        ; 0044a74e
    JLE 0x0044a798                      ; 0044a750
        ;   XREF to: 0044a798 (CONDITIONAL_JUMP)  ; LAB_0044a798
    LEA ESI,[EBX + 0x208]               ; 0044a752
    LEA EAX,[EBX + 0x214]               ; 0044a758
    IMUL EDX,ECX,0x74                   ; 0044a75e
        ;   Label: LAB_0044a75e
    ADD EDX,ESI                         ; 0044a761
    CMP EDX,EAX                         ; 0044a763
    JZ 0x0044a777                       ; 0044a765
        ;   XREF to: 0044a777 (CONDITIONAL_JUMP)  ; LAB_0044a777
    MOV EDI,dword ptr [EAX]             ; 0044a767
    MOV dword ptr [EDX],EDI             ; 0044a769
    MOV EDI,dword ptr [EAX + 0x4]       ; 0044a76b
    MOV dword ptr [EDX + 0x4],EDI       ; 0044a76e
    MOV EDI,dword ptr [EAX + 0x8]       ; 0044a771
    MOV dword ptr [EDX + 0x8],EDI       ; 0044a774
    MOV dword ptr [EDX + 0x34],0x0      ; 0044a777
        ;   Label: LAB_0044a777
    INC ECX                             ; 0044a77e
    MOV EDI,dword ptr [EDX + 0x34]      ; 0044a77f
    MOV dword ptr [EDX + 0x30],EDI      ; 0044a782
    MOV EDI,dword ptr [EDX + 0x30]      ; 0044a785
    MOV dword ptr [EDX + 0x2c],EDI      ; 0044a788
    MOV EDX,dword ptr [EBX + 0x204]     ; 0044a78b
    ADD EAX,0x74                        ; 0044a791
    CMP ECX,EDX                         ; 0044a794
    JL 0x0044a75e                       ; 0044a796
        ;   XREF to: 0044a75e (CONDITIONAL_JUMP)  ; LAB_0044a75e
    LEA EAX,[EBX + 0x1f614]             ; 0044a798
        ;   Label: LAB_0044a798
    MOV ESI,dword ptr [EBX + 0x1c730]   ; 0044a79e
    XOR ECX,ECX                         ; 0044a7a4
    LEA EDX,[EBX + 0x42894]             ; 0044a7a6
    MOV dword ptr [ESP + 0x68],ECX      ; 0044a7ac
    TEST ESI,ESI                        ; 0044a7b0
    JLE 0x0044a981                      ; 0044a7b2
        ;   XREF to: 0044a981 (CONDITIONAL_JUMP)  ; LAB_0044a981
    XOR EDI,EDI                         ; 0044a7b8
        ;   Label: LAB_0044a7b8
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 0044a7ba
    MOV dword ptr [ESP + 0x7c],EDI      ; 0044a7c0
    TEST ECX,ECX                        ; 0044a7c4
    JLE 0x0044a96a                      ; 0044a7c6
        ;   XREF to: 0044a96a (CONDITIONAL_JUMP)  ; LAB_0044a96a
    MOV dword ptr [EAX + 0x14],0x0      ; 0044a7cc
        ;   Label: LAB_0044a7cc
    MOV dword ptr [EAX + 0x4],0x3       ; 0044a7d3
    MOV ECX,dword ptr [EAX + 0x14]      ; 0044a7da
    MOV dword ptr [EAX + 0x10],ECX      ; 0044a7dd
    MOV dword ptr [EAX + 0xc],ECX       ; 0044a7e0
    MOV dword ptr [EAX + 0x8],ECX       ; 0044a7e3
    MOV dword ptr [EDX + 0x4],0x3       ; 0044a7e6
    MOV dword ptr [EDX + 0x14],0x0      ; 0044a7ed
    MOV ECX,dword ptr [EDX + 0x14]      ; 0044a7f4
    MOV dword ptr [EDX + 0x10],ECX      ; 0044a7f7
    MOV dword ptr [EDX + 0xc],ECX       ; 0044a7fa
    MOV dword ptr [EDX + 0x8],ECX       ; 0044a7fd
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 0044a800
    MOV ESI,dword ptr [ESP + 0x68]      ; 0044a806
    INC ECX                             ; 0044a80a
    IMUL ECX,ESI                        ; 0044a80b
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0044a80e
    ADD ESI,ECX                         ; 0044a812
    MOV dword ptr [EAX + 0x18],ESI      ; 0044a814
    IMUL ECX,ESI,0x74                   ; 0044a817
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 0044a81a
    MOV dword ptr [EAX + 0x1c],EDI      ; 0044a821
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 0044a824
    INC ESI                             ; 0044a82b
    MOV dword ptr [EAX + 0x20],ECX      ; 0044a82c
    MOV dword ptr [EAX + 0x24],ESI      ; 0044a82f
    IMUL ECX,ESI,0x74                   ; 0044a832
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 0044a835
    MOV dword ptr [EAX + 0x28],EDI      ; 0044a83c
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 0044a83f
    MOV dword ptr [EAX + 0x2c],ECX      ; 0044a846
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 0044a849
    INC ECX                             ; 0044a84f
    ADD ESI,ECX                         ; 0044a850
    MOV dword ptr [EAX + 0x30],ESI      ; 0044a852
    IMUL ECX,ESI,0x74                   ; 0044a855
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x220] ; 0044a858
    MOV dword ptr [EAX + 0x34],ESI      ; 0044a85f
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 0044a862
    MOV dword ptr [EAX + 0x38],ECX      ; 0044a869
    LEA EDI,[EDX + 0x18]                ; 0044a86c
    LEA ESI,[EAX + 0x30]                ; 0044a86f
    MOVSD ES:EDI,ESI                    ; 0044a872
    MOVSD ES:EDI,ESI                    ; 0044a873
    MOVSD ES:EDI,ESI                    ; 0044a874
    LEA EDI,[EDX + 0x24]                ; 0044a875
    LEA ESI,[EAX + 0x24]                ; 0044a878
    MOVSD ES:EDI,ESI                    ; 0044a87b
    MOVSD ES:EDI,ESI                    ; 0044a87c
    MOVSD ES:EDI,ESI                    ; 0044a87d
    LEA EDI,[EDX + 0x30]                ; 0044a87e
    LEA ESI,[EAX + 0x18]                ; 0044a881
    MOVSD ES:EDI,ESI                    ; 0044a884
    MOVSD ES:EDI,ESI                    ; 0044a885
    MOVSD ES:EDI,ESI                    ; 0044a886
    MOV dword ptr [EAX + 0x4c],0x3      ; 0044a887
    MOV dword ptr [EAX + 0x5c],0x0      ; 0044a88e
    MOV ECX,dword ptr [EAX + 0x5c]      ; 0044a895
    MOV dword ptr [EAX + 0x58],ECX      ; 0044a898
    MOV dword ptr [EAX + 0x54],ECX      ; 0044a89b
    MOV dword ptr [EAX + 0x50],ECX      ; 0044a89e
    MOV dword ptr [EDX + 0x4c],0x3      ; 0044a8a1
    MOV dword ptr [EDX + 0x5c],0x0      ; 0044a8a8
    MOV ECX,dword ptr [EDX + 0x5c]      ; 0044a8af
    MOV dword ptr [EDX + 0x58],ECX      ; 0044a8b2
    MOV dword ptr [EDX + 0x54],ECX      ; 0044a8b5
    MOV dword ptr [EDX + 0x50],ECX      ; 0044a8b8
    MOV ESI,dword ptr [EBX + 0x1c72c]   ; 0044a8bb
    MOV EDI,dword ptr [ESP + 0x68]      ; 0044a8c1
    INC ESI                             ; 0044a8c5
    IMUL ESI,EDI                        ; 0044a8c6
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0044a8c9
    ADD ESI,ECX                         ; 0044a8cd
    MOV dword ptr [EAX + 0x60],ESI      ; 0044a8cf
    IMUL ECX,ESI,0x74                   ; 0044a8d2
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 0044a8d5
    MOV dword ptr [EAX + 0x64],EDI      ; 0044a8dc
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 0044a8df
    MOV dword ptr [EAX + 0x68],ECX      ; 0044a8e6
    MOV ECX,dword ptr [EBX + 0x1c72c]   ; 0044a8e9
    ADD ECX,0x2                         ; 0044a8ef
    ADD ESI,ECX                         ; 0044a8f2
    MOV dword ptr [EAX + 0x6c],ESI      ; 0044a8f4
    IMUL ECX,ESI,0x74                   ; 0044a8f7
    MOV EDI,dword ptr [ECX + EBX*0x1 + 0x220] ; 0044a8fa
    MOV dword ptr [EAX + 0x70],EDI      ; 0044a901
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 0044a904
    DEC ESI                             ; 0044a90b
    MOV dword ptr [EAX + 0x74],ECX      ; 0044a90c
    MOV dword ptr [EAX + 0x78],ESI      ; 0044a90f
    IMUL ECX,ESI,0x74                   ; 0044a912
    MOV ESI,dword ptr [ECX + EBX*0x1 + 0x220] ; 0044a915
    MOV dword ptr [EAX + 0x7c],ESI      ; 0044a91c
    MOV ECX,dword ptr [ECX + EBX*0x1 + 0x224] ; 0044a91f
    MOV dword ptr [EAX + 0x80],ECX      ; 0044a926
    LEA EDI,[EDX + 0x60]                ; 0044a92c
    LEA ESI,[EAX + 0x78]                ; 0044a92f
    MOVSD ES:EDI,ESI                    ; 0044a932
    MOVSD ES:EDI,ESI                    ; 0044a933
    MOVSD ES:EDI,ESI                    ; 0044a934
    LEA EDI,[EDX + 0x6c]                ; 0044a935
    LEA ESI,[EAX + 0x6c]                ; 0044a938
    MOVSD ES:EDI,ESI                    ; 0044a93b
    MOVSD ES:EDI,ESI                    ; 0044a93c
    MOVSD ES:EDI,ESI                    ; 0044a93d
    LEA EDI,[EDX + 0x78]                ; 0044a93e
    LEA ESI,[EAX + 0x60]                ; 0044a941
    ADD EAX,0x48                        ; 0044a944
    ADD EDX,0x48                        ; 0044a947
    MOVSD ES:EDI,ESI                    ; 0044a94a
    MOVSD ES:EDI,ESI                    ; 0044a94b
    MOVSD ES:EDI,ESI                    ; 0044a94c
    ADD EAX,0x48                        ; 0044a94d
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0044a950
    ADD EDX,0x48                        ; 0044a954
    INC ESI                             ; 0044a957
    MOV EDI,dword ptr [EBX + 0x1c72c]   ; 0044a958
    MOV dword ptr [ESP + 0x7c],ESI      ; 0044a95e
    CMP ESI,EDI                         ; 0044a962
    JL 0x0044a7cc                       ; 0044a964
        ;   XREF to: 0044a7cc (CONDITIONAL_JUMP)  ; LAB_0044a7cc
    MOV ECX,dword ptr [ESP + 0x68]      ; 0044a96a
        ;   Label: LAB_0044a96a
    INC ECX                             ; 0044a96e
    MOV ESI,dword ptr [EBX + 0x1c730]   ; 0044a96f
    MOV dword ptr [ESP + 0x68],ECX      ; 0044a975
    CMP ECX,ESI                         ; 0044a979
    JL 0x0044a7b8                       ; 0044a97b
        ;   XREF to: 0044a7b8 (CONDITIONAL_JUMP)  ; LAB_0044a7b8
    PUSH EBX                            ; 0044a981
        ;   Label: LAB_0044a981
    CALL FUN_0044aa10                   ; 0044a982
        ;   XREF to: 0044aa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0044aa10()
    MOV EDX,dword ptr [EBX + 0x17c]     ; 0044a987
    ADD ESP,0x4                         ; 0044a98d
    CMP EDX,0xfde8                      ; 0044a990
    SETLE AL                            ; 0044a996
    AND EAX,0xff                        ; 0044a999
    MOV dword ptr [EBX + 0xfc],EAX      ; 0044a99e
    MOV ESP,EBP                         ; 0044a9a4
    POP EBP                             ; 0044a9a6
    POP EDI                             ; 0044a9a7
    POP ESI                             ; 0044a9a8
    POP EBX                             ; 0044a9a9
    RET                                 ; 0044a9aa
    FLD float ptr [EBX + 0x1fc]         ; 0044a9ab
        ;   Label: LAB_0044a9ab
    FLD ST0                             ; 0044a9b1
    FMUL double ptr [0x005d73e2]        ; 0044a9b3 | DAT_005d73e2
    FSTP ST1                            ; 0044a9b9
    FSTP float ptr [EBX + 0x1fc]        ; 0044a9bb
    JMP 0x0044a3b1                      ; 0044a9c1
        ;   XREF to: 0044a3b1 (UNCONDITIONAL_JUMP)  ; LAB_0044a3b1
    CMP ESI,dword ptr [ESP + 0x50]      ; 0044a9c6
        ;   Label: LAB_0044a9c6
    JNZ 0x0044a9d9                      ; 0044a9ca
        ;   XREF to: 0044a9d9 (CONDITIONAL_JUMP)  ; LAB_0044a9d9
    CMP dword ptr [EBX + 0x18c],0x0     ; 0044a9cc
    JNZ 0x0044a522                      ; 0044a9d3
        ;   XREF to: 0044a522 (CONDITIONAL_JUMP)  ; LAB_0044a522
    TEST EDX,EDX                        ; 0044a9d9
        ;   Label: LAB_0044a9d9
    JNZ 0x0044a9ea                      ; 0044a9db
        ;   XREF to: 0044a9ea (CONDITIONAL_JUMP)  ; LAB_0044a9ea
    CMP dword ptr [EBX + 0x184],0x0     ; 0044a9dd
    JNZ 0x0044a522                      ; 0044a9e4
        ;   XREF to: 0044a522 (CONDITIONAL_JUMP)  ; LAB_0044a522
    CMP EDX,dword ptr [ESP + 0x38]      ; 0044a9ea
        ;   Label: LAB_0044a9ea
    JNZ 0x0044a9fd                      ; 0044a9ee
        ;   XREF to: 0044a9fd (CONDITIONAL_JUMP)  ; LAB_0044a9fd
    CMP dword ptr [EBX + 0x188],0x0     ; 0044a9f0
    JNZ 0x0044a522                      ; 0044a9f7
        ;   XREF to: 0044a522 (CONDITIONAL_JUMP)  ; LAB_0044a522
    MOV dword ptr [EAX + 0x68],0x0      ; 0044a9fd
        ;   Label: LAB_0044a9fd
    JMP 0x0044a529                      ; 0044aa04
        ;   XREF to: 0044a529 (UNCONDITIONAL_JUMP)  ; LAB_0044a529

