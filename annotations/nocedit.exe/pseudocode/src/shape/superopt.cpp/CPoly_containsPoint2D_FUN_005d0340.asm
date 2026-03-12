; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CPoly_containsPoint2D_FUN_005d0340(CPoly *this_ptr,CVector2d *point)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVector2d *      Stack[0x8]:4   point
; Local Variables:
; double           Stack[-0x1d8]:8  local_1d8
; double           Stack[-0x1d0]:8  local_1d0
; double           Stack[-0x1b0]:8  local_1b0
; CVector2d        Stack[-0x1a8]:16  local_1a8
; CVector2d        Stack[-0x198]:16  local_198
; CVector2d        Stack[-0x188]:16  local_188
; CVector2d        Stack[-0x178]:16  local_178
; double           Stack[-0x18]:8  local_18
;
; Called Functions:
;   shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d0340
        ;   Label: shape_superopt.cpp_CPoly_containsPoint2D_FUN_005d0340
    PUSH ESI                            ; 005d0341
    PUSH EBP                            ; 005d0342
    MOV EBP,ESP                         ; 005d0343
    SUB ESP,0x1c8                       ; 005d0345
    AND ESP,0xfffffff8                  ; 005d034b
    MOV EDX,dword ptr [EBP + 0x10]      ; 005d034e
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d0351
    FLDZ                                ; 005d0354
    FCOMP double ptr [EDX + 0x40]       ; 005d0356
    FNSTSW AX                           ; 005d0359
    SAHF                                ; 005d035b
    JBE 0x005d05ba                      ; 005d035c
        ;   XREF to: 005d05ba (CONDITIONAL_JUMP)  ; LAB_005d05ba
    FLD double ptr [EDX + 0x40]         ; 005d0362
    FCHS                                ; 005d0365
    FSTP double ptr [ESP + 0x8]         ; 005d0367
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d036b
        ;   Label: LAB_005d036b
    MOV dword ptr [ESP + 0x20],EAX      ; 005d036f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d0373
    FLDZ                                ; 005d0377
    MOV dword ptr [ESP + 0x24],EAX      ; 005d0379
    FCOMP double ptr [EDX + 0x48]       ; 005d037d
    FNSTSW AX                           ; 005d0380
    SAHF                                ; 005d0382
    JA 0x005d05cd                       ; 005d0383
        ;   XREF to: 005d05cd (CONDITIONAL_JUMP)  ; LAB_005d05cd
    MOV EAX,dword ptr [EDX + 0x48]      ; 005d0389
    MOV dword ptr [ESP],EAX             ; 005d038c
    MOV EAX,dword ptr [EDX + 0x4c]      ; 005d038f
    MOV dword ptr [ESP + 0x4],EAX       ; 005d0392
    MOV EAX,dword ptr [ESP]             ; 005d0396
        ;   Label: LAB_005d0396
    MOV dword ptr [ESP + 0x10],EAX      ; 005d0399
    MOV EAX,dword ptr [ESP + 0x4]       ; 005d039d
    FLDZ                                ; 005d03a1
    MOV dword ptr [ESP + 0x14],EAX      ; 005d03a3
    FCOMP double ptr [EDX + 0x50]       ; 005d03a7
    FNSTSW AX                           ; 005d03aa
    SAHF                                ; 005d03ac
    JA 0x005d05da                       ; 005d03ad
        ;   XREF to: 005d05da (CONDITIONAL_JUMP)  ; LAB_005d05da
    MOV EAX,dword ptr [EDX + 0x50]      ; 005d03b3
    MOV dword ptr [ESP + 0x28],EAX      ; 005d03b6
    MOV EAX,dword ptr [EDX + 0x54]      ; 005d03ba
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d03bd
    FLD double ptr [ESP + 0x20]         ; 005d03c1
        ;   Label: LAB_005d03c1
    MOV EAX,dword ptr [ESP + 0x28]      ; 005d03c5
    MOV ECX,dword ptr [EDX]             ; 005d03c9
    MOV dword ptr [ESP + 0x18],EAX      ; 005d03cb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005d03cf
    MOV ECX,dword ptr [ECX + 0x4]       ; 005d03d3
    MOV dword ptr [ESP + 0x1c],EAX      ; 005d03d6
    FCOMP double ptr [ESP + 0x10]       ; 005d03da
    FNSTSW AX                           ; 005d03de
    SAHF                                ; 005d03e0
    JC 0x005d070c                       ; 005d03e1
        ;   XREF to: 005d070c (CONDITIONAL_JUMP)  ; LAB_005d070c
    FLD double ptr [ESP + 0x20]         ; 005d03e7
    FCOMP double ptr [ESP + 0x28]       ; 005d03eb
    FNSTSW AX                           ; 005d03ef
    SAHF                                ; 005d03f1
    JC 0x005d070c                       ; 005d03f2
        ;   XREF to: 005d070c (CONDITIONAL_JUMP)  ; LAB_005d070c
    FLDZ                                ; 005d03f8
    FCOMP double ptr [EDX + 0x40]       ; 005d03fa
    FNSTSW AX                           ; 005d03fd
    SAHF                                ; 005d03ff
    JBE 0x005d05e8                      ; 005d0400
        ;   XREF to: 005d05e8 (CONDITIONAL_JUMP)  ; LAB_005d05e8
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d0406
    SHL EAX,0x3                         ; 005d0409
    MOV ESI,EAX                         ; 005d040c
    SHL EAX,0x3                         ; 005d040e
    SUB EAX,ESI                         ; 005d0411
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d0413
    MOV dword ptr [ESP + 0xd8],ESI      ; 005d0417
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d041e
    MOV dword ptr [ESP + 0xdc],ESI      ; 005d0422
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d0429
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d042d
    MOV dword ptr [ESP + 0xe4],EAX      ; 005d0431
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005d0438
    MOV dword ptr [ESP + 0x40],EAX      ; 005d043f
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005d0443
    MOV dword ptr [ESP + 0x44],EAX      ; 005d044a
    MOV EAX,dword ptr [ESP + 0xe4]      ; 005d044e
    MOV dword ptr [ESP + 0x48],ESI      ; 005d0455
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d0459
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d045d
    SHL EAX,0x3                         ; 005d0460
    MOV dword ptr [ESP + 0xe0],ESI      ; 005d0463
    MOV ESI,EAX                         ; 005d046a
    SHL EAX,0x3                         ; 005d046c
    SUB EAX,ESI                         ; 005d046f
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d0471
    MOV dword ptr [ESP + 0x88],ESI      ; 005d0475
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d047c
    MOV dword ptr [ESP + 0x8c],ESI      ; 005d0480
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d0487
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d048b
    MOV dword ptr [ESP + 0x94],EAX      ; 005d048f
    MOV EAX,dword ptr [ESP + 0x88]      ; 005d0496
    MOV dword ptr [ESP + 0x60],EAX      ; 005d049d
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005d04a1
    MOV dword ptr [ESP + 0x64],EAX      ; 005d04a8
    MOV EAX,dword ptr [ESP + 0x94]      ; 005d04ac
    MOV dword ptr [ESP + 0x68],ESI      ; 005d04b3
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d04b7
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d04bb
    SHL EAX,0x3                         ; 005d04be
    MOV EDX,EAX                         ; 005d04c1
    SHL EAX,0x3                         ; 005d04c3
    SUB EAX,EDX                         ; 005d04c6
    ADD ECX,EAX                         ; 005d04c8
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d04ca
    MOV dword ptr [ESP + 0xa8],EAX      ; 005d04cd
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d04d4
    MOV dword ptr [ESP + 0xac],EAX      ; 005d04d7
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d04de
    MOV dword ptr [ESP + 0xb0],EAX      ; 005d04e1
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d04e8
    MOV dword ptr [ESP + 0xb4],EAX      ; 005d04eb
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005d04f2
    MOV dword ptr [ESP + 0x30],EAX      ; 005d04f9
    MOV EAX,dword ptr [ESP + 0xac]      ; 005d04fd
    MOV dword ptr [ESP + 0x34],EAX      ; 005d0504
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005d0508
    MOV dword ptr [ESP + 0x38],EAX      ; 005d050f
    MOV EAX,dword ptr [ESP + 0xb4]      ; 005d0513
    MOV dword ptr [ESP + 0x90],ESI      ; 005d051a
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d0521
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d0525
        ;   Label: LAB_005d0525
    MOV dword ptr [ESP + 0x110],EAX     ; 005d0528
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d052f
    MOV dword ptr [ESP + 0x114],EAX     ; 005d0532
    MOV EAX,dword ptr [EBX + 0x10]      ; 005d0539
    MOV dword ptr [ESP + 0x118],EAX     ; 005d053c
    MOV EAX,dword ptr [EBX + 0x14]      ; 005d0543
    MOV dword ptr [ESP + 0x11c],EAX     ; 005d0546
    MOV EAX,dword ptr [ESP + 0x110]     ; 005d054d
    MOV dword ptr [ESP + 0x50],EAX      ; 005d0554
    MOV EAX,dword ptr [ESP + 0x114]     ; 005d0558
    MOV dword ptr [ESP + 0x54],EAX      ; 005d055f
    MOV EAX,dword ptr [ESP + 0x118]     ; 005d0563
    MOV dword ptr [ESP + 0x58],EAX      ; 005d056a
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005d056e
    MOV dword ptr [ESP + 0x5c],EAX      ; 005d0575
        ;   Label: LAB_005d0575
    LEA EAX,[ESP + 0x50]                ; 005d0579
    PUSH EAX                            ; 005d057d
    LEA EAX,[ESP + 0x64]                ; 005d057e
    PUSH EAX                            ; 005d0582
    LEA EAX,[ESP + 0x48]                ; 005d0583
    PUSH EAX                            ; 005d0587
    CALL shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640 ; 005d0588
        ;   XREF to: 005d6640 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3)
    MOV dword ptr [ESP + 0x1cc],EAX     ; 005d058d
    MOV dword ptr [ESP + 0x1d0],EDX     ; 005d0594
    FLD double ptr [ESP + 0x1cc]        ; 005d059b
    FLDZ                                ; 005d05a2
    ADD ESP,0xc                         ; 005d05a4
    FCOMPP                              ; 005d05a7
    FNSTSW AX                           ; 005d05a9
    SAHF                                ; 005d05ab
    JNC 0x005d0c56                      ; 005d05ac
        ;   XREF to: 005d0c56 (CONDITIONAL_JUMP)  ; LAB_005d0c56
    XOR EAX,EAX                         ; 005d05b2
        ;   Label: LAB_005d05b2
    MOV ESP,EBP                         ; 005d05b4
    POP EBP                             ; 005d05b6
    POP ESI                             ; 005d05b7
    POP EBX                             ; 005d05b8
    RET                                 ; 005d05b9
    MOV EAX,dword ptr [EDX + 0x40]      ; 005d05ba
        ;   Label: LAB_005d05ba
    MOV dword ptr [ESP + 0x8],EAX       ; 005d05bd
    MOV EAX,dword ptr [EDX + 0x44]      ; 005d05c1
    MOV dword ptr [ESP + 0xc],EAX       ; 005d05c4
    JMP 0x005d036b                      ; 005d05c8
        ;   XREF to: 005d036b (UNCONDITIONAL_JUMP)  ; LAB_005d036b
    FLD double ptr [EDX + 0x48]         ; 005d05cd
        ;   Label: LAB_005d05cd
    FCHS                                ; 005d05d0
    FSTP double ptr [ESP]               ; 005d05d2
    JMP 0x005d0396                      ; 005d05d5
        ;   XREF to: 005d0396 (UNCONDITIONAL_JUMP)  ; LAB_005d0396
    FLD double ptr [EDX + 0x50]         ; 005d05da
        ;   Label: LAB_005d05da
    FCHS                                ; 005d05dd
    FSTP double ptr [ESP + 0x28]        ; 005d05df
    JMP 0x005d03c1                      ; 005d05e3
        ;   XREF to: 005d03c1 (UNCONDITIONAL_JUMP)  ; LAB_005d03c1
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d05e8
        ;   Label: LAB_005d05e8
    SHL EAX,0x3                         ; 005d05eb
    MOV ESI,EAX                         ; 005d05ee
    SHL EAX,0x3                         ; 005d05f0
    SUB EAX,ESI                         ; 005d05f3
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d05f5
    MOV dword ptr [ESP + 0x188],ESI     ; 005d05f9
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d0600
    MOV dword ptr [ESP + 0x18c],ESI     ; 005d0604
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d060b
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d060f
    MOV dword ptr [ESP + 0xcc],EAX      ; 005d0613
    MOV EAX,dword ptr [ESP + 0x188]     ; 005d061a
    MOV dword ptr [ESP + 0x30],EAX      ; 005d0621
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005d0625
    MOV dword ptr [ESP + 0x34],EAX      ; 005d062c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005d0630
    MOV dword ptr [ESP + 0x38],ESI      ; 005d0637
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d063b
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d063f
    SHL EAX,0x3                         ; 005d0642
    MOV dword ptr [ESP + 0xc8],ESI      ; 005d0645
    MOV ESI,EAX                         ; 005d064c
    SHL EAX,0x3                         ; 005d064e
    SUB EAX,ESI                         ; 005d0651
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d0653
    MOV dword ptr [ESP + 0x190],ESI     ; 005d0657
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d065e
    MOV dword ptr [ESP + 0x194],ESI     ; 005d0662
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d0669
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d066d
    MOV dword ptr [ESP + 0xf4],EAX      ; 005d0671
    MOV EAX,dword ptr [ESP + 0x190]     ; 005d0678
    MOV dword ptr [ESP + 0x60],EAX      ; 005d067f
    MOV EAX,dword ptr [ESP + 0x194]     ; 005d0683
    MOV dword ptr [ESP + 0x64],EAX      ; 005d068a
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005d068e
    MOV dword ptr [ESP + 0x68],ESI      ; 005d0695
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d0699
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d069d
    SHL EAX,0x3                         ; 005d06a0
    MOV EDX,EAX                         ; 005d06a3
    SHL EAX,0x3                         ; 005d06a5
    SUB EAX,EDX                         ; 005d06a8
    ADD ECX,EAX                         ; 005d06aa
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d06ac
    MOV dword ptr [ESP + 0x100],EAX     ; 005d06af
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d06b6
    MOV dword ptr [ESP + 0x104],EAX     ; 005d06b9
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d06c0
    MOV dword ptr [ESP + 0x108],EAX     ; 005d06c3
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d06ca
    MOV dword ptr [ESP + 0x10c],EAX     ; 005d06cd
    MOV EAX,dword ptr [ESP + 0x100]     ; 005d06d4
    MOV dword ptr [ESP + 0x40],EAX      ; 005d06db
    MOV EAX,dword ptr [ESP + 0x104]     ; 005d06df
    MOV dword ptr [ESP + 0x44],EAX      ; 005d06e6
    MOV EAX,dword ptr [ESP + 0x108]     ; 005d06ea
    MOV dword ptr [ESP + 0x48],EAX      ; 005d06f1
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005d06f5
    MOV dword ptr [ESP + 0xf0],ESI      ; 005d06fc
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d0703
    JMP 0x005d0525                      ; 005d0707
        ;   XREF to: 005d0525 (UNCONDITIONAL_JUMP)  ; LAB_005d0525
    FLD double ptr [ESP + 0x10]         ; 005d070c
        ;   Label: LAB_005d070c
    FCOMP double ptr [ESP + 0x20]       ; 005d0710
    FNSTSW AX                           ; 005d0714
    SAHF                                ; 005d0716
    JC 0x005d09c1                       ; 005d0717
        ;   XREF to: 005d09c1 (CONDITIONAL_JUMP)  ; LAB_005d09c1
    FLD double ptr [ESP + 0x10]         ; 005d071d
    FCOMP double ptr [ESP + 0x18]       ; 005d0721
    FNSTSW AX                           ; 005d0725
    SAHF                                ; 005d0727
    JC 0x005d09c1                       ; 005d0728
        ;   XREF to: 005d09c1 (CONDITIONAL_JUMP)  ; LAB_005d09c1
    FLDZ                                ; 005d072e
    FCOMP double ptr [EDX + 0x48]       ; 005d0730
    FNSTSW AX                           ; 005d0733
    SAHF                                ; 005d0735
    JNC 0x005d08a0                      ; 005d0736
        ;   XREF to: 005d08a0 (CONDITIONAL_JUMP)  ; LAB_005d08a0
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d073c
    SHL EAX,0x3                         ; 005d073f
    MOV ESI,EAX                         ; 005d0742
    SHL EAX,0x3                         ; 005d0744
    SUB EAX,ESI                         ; 005d0747
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d0749
    MOV dword ptr [ESP + 0x70],ESI      ; 005d074c
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d0750
    MOV dword ptr [ESP + 0x74],ESI      ; 005d0754
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d0758
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d075c
    MOV dword ptr [ESP + 0x9c],EAX      ; 005d0760
    MOV EAX,dword ptr [ESP + 0x70]      ; 005d0767
    MOV dword ptr [ESP + 0x40],EAX      ; 005d076b
    MOV EAX,dword ptr [ESP + 0x74]      ; 005d076f
    MOV dword ptr [ESP + 0x44],EAX      ; 005d0773
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005d0777
    MOV dword ptr [ESP + 0x48],ESI      ; 005d077e
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d0782
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d0786
    SHL EAX,0x3                         ; 005d0789
    MOV dword ptr [ESP + 0x98],ESI      ; 005d078c
    MOV ESI,EAX                         ; 005d0793
    SHL EAX,0x3                         ; 005d0795
    SUB EAX,ESI                         ; 005d0798
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d079a
    MOV dword ptr [ESP + 0x148],ESI     ; 005d079d
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d07a4
    MOV dword ptr [ESP + 0x14c],ESI     ; 005d07a8
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d07af
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d07b3
    MOV dword ptr [ESP + 0xec],EAX      ; 005d07b7
    MOV EAX,dword ptr [ESP + 0x148]     ; 005d07be
    MOV dword ptr [ESP + 0x60],EAX      ; 005d07c5
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005d07c9
    MOV dword ptr [ESP + 0x64],EAX      ; 005d07d0
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d07d4
    MOV dword ptr [ESP + 0x68],ESI      ; 005d07db
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d07df
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d07e3
    SHL EAX,0x3                         ; 005d07e6
    MOV EDX,EAX                         ; 005d07e9
    SHL EAX,0x3                         ; 005d07eb
    SUB EAX,EDX                         ; 005d07ee
    ADD ECX,EAX                         ; 005d07f0
    MOV EAX,dword ptr [ECX]             ; 005d07f2
    MOV dword ptr [ESP + 0x168],EAX     ; 005d07f4
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d07fb
    MOV dword ptr [ESP + 0x16c],EAX     ; 005d07fe
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d0805
    MOV dword ptr [ESP + 0xb8],EAX      ; 005d0808
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d080f
    MOV dword ptr [ESP + 0xbc],EAX      ; 005d0812
    MOV EAX,dword ptr [ESP + 0x168]     ; 005d0819
    MOV dword ptr [ESP + 0x30],EAX      ; 005d0820
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005d0824
    MOV dword ptr [ESP + 0x34],EAX      ; 005d082b
    MOV EAX,dword ptr [ESP + 0xb8]      ; 005d082f
    MOV dword ptr [ESP + 0x38],EAX      ; 005d0836
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005d083a
    MOV dword ptr [ESP + 0xe8],ESI      ; 005d0841
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d0848
    MOV EAX,dword ptr [EBX]             ; 005d084c
        ;   Label: LAB_005d084c
    MOV dword ptr [ESP + 0x1a8],EAX     ; 005d084e
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d0855
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005d0858
    MOV EAX,dword ptr [EBX + 0x10]      ; 005d085f
    MOV dword ptr [ESP + 0x130],EAX     ; 005d0862
    MOV EAX,dword ptr [EBX + 0x14]      ; 005d0869
    MOV dword ptr [ESP + 0x134],EAX     ; 005d086c
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005d0873
    MOV dword ptr [ESP + 0x50],EAX      ; 005d087a
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 005d087e
    MOV dword ptr [ESP + 0x54],EAX      ; 005d0885
    MOV EAX,dword ptr [ESP + 0x130]     ; 005d0889
    MOV dword ptr [ESP + 0x58],EAX      ; 005d0890
    MOV EAX,dword ptr [ESP + 0x134]     ; 005d0894
    JMP 0x005d0575                      ; 005d089b
        ;   XREF to: 005d0575 (UNCONDITIONAL_JUMP)  ; LAB_005d0575
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d08a0
        ;   Label: LAB_005d08a0
    SHL EAX,0x3                         ; 005d08a3
    MOV ESI,EAX                         ; 005d08a6
    SHL EAX,0x3                         ; 005d08a8
    SUB EAX,ESI                         ; 005d08ab
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d08ad
    MOV dword ptr [ESP + 0x180],ESI     ; 005d08b0
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d08b7
    MOV dword ptr [ESP + 0x184],ESI     ; 005d08bb
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d08c2
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d08c6
    MOV dword ptr [ESP + 0x174],EAX     ; 005d08ca
    MOV EAX,dword ptr [ESP + 0x180]     ; 005d08d1
    MOV dword ptr [ESP + 0x30],EAX      ; 005d08d8
    MOV EAX,dword ptr [ESP + 0x184]     ; 005d08dc
    MOV dword ptr [ESP + 0x34],EAX      ; 005d08e3
    MOV EAX,dword ptr [ESP + 0x174]     ; 005d08e7
    MOV dword ptr [ESP + 0x38],ESI      ; 005d08ee
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d08f2
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d08f6
    SHL EAX,0x3                         ; 005d08f9
    MOV dword ptr [ESP + 0x170],ESI     ; 005d08fc
    MOV ESI,EAX                         ; 005d0903
    SHL EAX,0x3                         ; 005d0905
    SUB EAX,ESI                         ; 005d0908
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d090a
    MOV dword ptr [ESP + 0xd0],ESI      ; 005d090d
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d0914
    MOV dword ptr [ESP + 0xd4],ESI      ; 005d0918
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 005d091f
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x14] ; 005d0923
    MOV dword ptr [ESP + 0x144],EAX     ; 005d0927
    MOV EAX,dword ptr [ESP + 0xd0]      ; 005d092e
    MOV dword ptr [ESP + 0x60],EAX      ; 005d0935
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005d0939
    MOV dword ptr [ESP + 0x64],EAX      ; 005d0940
    MOV EAX,dword ptr [ESP + 0x144]     ; 005d0944
    MOV dword ptr [ESP + 0x68],ESI      ; 005d094b
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d094f
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d0953
    SHL EAX,0x3                         ; 005d0956
    MOV EDX,EAX                         ; 005d0959
    SHL EAX,0x3                         ; 005d095b
    SUB EAX,EDX                         ; 005d095e
    ADD ECX,EAX                         ; 005d0960
    MOV EAX,dword ptr [ECX]             ; 005d0962
    MOV dword ptr [ESP + 0x198],EAX     ; 005d0964
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d096b
    MOV dword ptr [ESP + 0x19c],EAX     ; 005d096e
    MOV EAX,dword ptr [ECX + 0x10]      ; 005d0975
    MOV dword ptr [ESP + 0x160],EAX     ; 005d0978
    MOV EAX,dword ptr [ECX + 0x14]      ; 005d097f
    MOV dword ptr [ESP + 0x164],EAX     ; 005d0982
    MOV EAX,dword ptr [ESP + 0x198]     ; 005d0989
    MOV dword ptr [ESP + 0x40],EAX      ; 005d0990
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005d0994
    MOV dword ptr [ESP + 0x44],EAX      ; 005d099b
    MOV EAX,dword ptr [ESP + 0x160]     ; 005d099f
    MOV dword ptr [ESP + 0x48],EAX      ; 005d09a6
    MOV EAX,dword ptr [ESP + 0x164]     ; 005d09aa
    MOV dword ptr [ESP + 0x140],ESI     ; 005d09b1
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d09b8
    JMP 0x005d084c                      ; 005d09bc
        ;   XREF to: 005d084c (UNCONDITIONAL_JUMP)  ; LAB_005d084c
    FLDZ                                ; 005d09c1
        ;   Label: LAB_005d09c1
    FCOMP double ptr [EDX + 0x50]       ; 005d09c3
    FNSTSW AX                           ; 005d09c6
    SAHF                                ; 005d09c8
    JBE 0x005d0b33                      ; 005d09c9
        ;   XREF to: 005d0b33 (CONDITIONAL_JUMP)  ; LAB_005d0b33
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d09cf
    SHL EAX,0x3                         ; 005d09d2
    MOV ESI,EAX                         ; 005d09d5
    SHL EAX,0x3                         ; 005d09d7
    SUB EAX,ESI                         ; 005d09da
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d09dc
    MOV dword ptr [ESP + 0x1b0],ESI     ; 005d09df
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d09e6
    MOV dword ptr [ESP + 0x1b4],ESI     ; 005d09ea
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d09f1
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d09f5
    MOV dword ptr [ESP + 0x124],EAX     ; 005d09f9
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 005d0a00
    MOV dword ptr [ESP + 0x40],EAX      ; 005d0a07
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 005d0a0b
    MOV dword ptr [ESP + 0x44],EAX      ; 005d0a12
    MOV EAX,dword ptr [ESP + 0x124]     ; 005d0a16
    MOV dword ptr [ESP + 0x48],ESI      ; 005d0a1d
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d0a21
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d0a25
    SHL EAX,0x3                         ; 005d0a28
    MOV dword ptr [ESP + 0x120],ESI     ; 005d0a2b
    MOV ESI,EAX                         ; 005d0a32
    SHL EAX,0x3                         ; 005d0a34
    SUB EAX,ESI                         ; 005d0a37
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d0a39
    MOV dword ptr [ESP + 0x78],ESI      ; 005d0a3c
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d0a40
    MOV dword ptr [ESP + 0x7c],ESI      ; 005d0a44
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d0a48
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d0a4c
    MOV dword ptr [ESP + 0x13c],EAX     ; 005d0a50
    MOV EAX,dword ptr [ESP + 0x78]      ; 005d0a57
    MOV dword ptr [ESP + 0x60],EAX      ; 005d0a5b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005d0a5f
    MOV dword ptr [ESP + 0x64],EAX      ; 005d0a63
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005d0a67
    MOV dword ptr [ESP + 0x68],ESI      ; 005d0a6e
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d0a72
    MOV EAX,dword ptr [EDX + 0xc]       ; 005d0a76
    SHL EAX,0x3                         ; 005d0a79
    MOV EDX,EAX                         ; 005d0a7c
    SHL EAX,0x3                         ; 005d0a7e
    SUB EAX,EDX                         ; 005d0a81
    ADD ECX,EAX                         ; 005d0a83
    MOV EAX,dword ptr [ECX]             ; 005d0a85
    MOV dword ptr [ESP + 0x80],EAX      ; 005d0a87
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d0a8e
    MOV dword ptr [ESP + 0x84],EAX      ; 005d0a91
    MOV EAX,dword ptr [ECX + 0x8]       ; 005d0a98
    MOV dword ptr [ESP + 0x158],EAX     ; 005d0a9b
    MOV EAX,dword ptr [ECX + 0xc]       ; 005d0aa2
    MOV dword ptr [ESP + 0x15c],EAX     ; 005d0aa5
    MOV EAX,dword ptr [ESP + 0x80]      ; 005d0aac
    MOV dword ptr [ESP + 0x30],EAX      ; 005d0ab3
    MOV EAX,dword ptr [ESP + 0x84]      ; 005d0ab7
    MOV dword ptr [ESP + 0x34],EAX      ; 005d0abe
    MOV EAX,dword ptr [ESP + 0x158]     ; 005d0ac2
    MOV dword ptr [ESP + 0x38],EAX      ; 005d0ac9
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005d0acd
    MOV dword ptr [ESP + 0x138],ESI     ; 005d0ad4
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d0adb
    MOV EAX,dword ptr [EBX]             ; 005d0adf
        ;   Label: LAB_005d0adf
    MOV dword ptr [ESP + 0x150],EAX     ; 005d0ae1
    MOV EAX,dword ptr [EBX + 0x4]       ; 005d0ae8
    MOV dword ptr [ESP + 0x154],EAX     ; 005d0aeb
    MOV EAX,dword ptr [EBX + 0x8]       ; 005d0af2
    MOV dword ptr [ESP + 0xf8],EAX      ; 005d0af5
    MOV EAX,dword ptr [EBX + 0xc]       ; 005d0afc
    MOV dword ptr [ESP + 0xfc],EAX      ; 005d0aff
    MOV EAX,dword ptr [ESP + 0x150]     ; 005d0b06
    MOV dword ptr [ESP + 0x50],EAX      ; 005d0b0d
    MOV EAX,dword ptr [ESP + 0x154]     ; 005d0b11
    MOV dword ptr [ESP + 0x54],EAX      ; 005d0b18
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005d0b1c
    MOV dword ptr [ESP + 0x58],EAX      ; 005d0b23
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005d0b27
    JMP 0x005d0575                      ; 005d0b2e
        ;   XREF to: 005d0575 (UNCONDITIONAL_JUMP)  ; LAB_005d0575
    MOV EAX,dword ptr [EDX + 0x4]       ; 005d0b33
        ;   Label: LAB_005d0b33
    SHL EAX,0x3                         ; 005d0b36
    MOV ESI,EAX                         ; 005d0b39
    SHL EAX,0x3                         ; 005d0b3b
    SUB EAX,ESI                         ; 005d0b3e
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d0b40
    MOV dword ptr [ESP + 0xa0],ESI      ; 005d0b43
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d0b4a
    MOV dword ptr [ESP + 0xa4],ESI      ; 005d0b4e
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d0b55
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d0b59
    MOV dword ptr [ESP + 0x17c],EAX     ; 005d0b5d
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005d0b64
    MOV dword ptr [ESP + 0x30],EAX      ; 005d0b6b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005d0b6f
    MOV dword ptr [ESP + 0x34],EAX      ; 005d0b76
    MOV EAX,dword ptr [ESP + 0x17c]     ; 005d0b7a
    MOV dword ptr [ESP + 0x38],ESI      ; 005d0b81
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d0b85
    MOV EAX,dword ptr [EDX + 0x8]       ; 005d0b89
    SHL EAX,0x3                         ; 005d0b8c
    MOV dword ptr [ESP + 0x178],ESI     ; 005d0b8f
    MOV ESI,EAX                         ; 005d0b96
    SHL EAX,0x3                         ; 005d0b98
    SUB EAX,ESI                         ; 005d0b9b
    MOV ESI,dword ptr [ECX + EAX*0x1]   ; 005d0b9d
    MOV dword ptr [ESP + 0xc0],ESI      ; 005d0ba0
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x4] ; 005d0ba7
    MOV dword ptr [ESP + 0xc4],ESI      ; 005d0bab
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 005d0bb2
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0xc] ; 005d0bb6
    MOV dword ptr [ESP + 0x12c],EAX     ; 005d0bba
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005d0bc1
    MOV dword ptr [ESP + 0x60],EAX      ; 005d0bc8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005d0bcc
    MOV dword ptr [ESP + 0x64],EAX      ; 005d0bd3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005d0bd7
    MOV dword ptr [ESP + 0x68],ESI      ; 005d0bde
    MOV dword ptr [ESP + 0x6c],EAX      ; 005d0be2
    MOV EDX,dword ptr [EDX + 0xc]       ; 005d0be6
    SHL EDX,0x3                         ; 005d0be9
    MOV EAX,EDX                         ; 005d0bec
    SHL EDX,0x3                         ; 005d0bee
    SUB EDX,EAX                         ; 005d0bf1
    MOV EAX,dword ptr [ECX + EDX*0x1]   ; 005d0bf3
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005d0bf6
    MOV EAX,dword ptr [ECX + EDX*0x1 + 0x4] ; 005d0bfd
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005d0c01
    MOV EAX,dword ptr [ECX + EDX*0x1 + 0x8] ; 005d0c08
    MOV dword ptr [ESP + 0x1a0],EAX     ; 005d0c0c
    MOV EAX,dword ptr [ECX + EDX*0x1 + 0xc] ; 005d0c13
    MOV dword ptr [ESP + 0x1a4],EAX     ; 005d0c17
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 005d0c1e
    MOV dword ptr [ESP + 0x40],EAX      ; 005d0c25
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 005d0c29
    MOV dword ptr [ESP + 0x44],EAX      ; 005d0c30
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005d0c34
    MOV dword ptr [ESP + 0x48],EAX      ; 005d0c3b
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 005d0c3f
    MOV dword ptr [ESP + 0x128],ESI     ; 005d0c46
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d0c4d
    JMP 0x005d0adf                      ; 005d0c51
        ;   XREF to: 005d0adf (UNCONDITIONAL_JUMP)  ; LAB_005d0adf
    LEA EAX,[ESP + 0x50]                ; 005d0c56
        ;   Label: LAB_005d0c56
    PUSH EAX                            ; 005d0c5a
    LEA EAX,[ESP + 0x34]                ; 005d0c5b
    PUSH EAX                            ; 005d0c5f
    LEA EAX,[ESP + 0x68]                ; 005d0c60
    PUSH EAX                            ; 005d0c64
    CALL shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640 ; 005d0c65
        ;   XREF to: 005d6640 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3)
    MOV dword ptr [ESP + 0x1cc],EAX     ; 005d0c6a
    MOV dword ptr [ESP + 0x1d0],EDX     ; 005d0c71
    FLD double ptr [ESP + 0x1cc]        ; 005d0c78
    FLDZ                                ; 005d0c7f
    ADD ESP,0xc                         ; 005d0c81
    FCOMPP                              ; 005d0c84
    FNSTSW AX                           ; 005d0c86
    SAHF                                ; 005d0c88
    JC 0x005d05b2                       ; 005d0c89
        ;   XREF to: 005d05b2 (CONDITIONAL_JUMP)  ; LAB_005d05b2
    LEA EAX,[ESP + 0x50]                ; 005d0c8f
    PUSH EAX                            ; 005d0c93
    LEA EAX,[ESP + 0x44]                ; 005d0c94
    PUSH EAX                            ; 005d0c98
    LEA EAX,[ESP + 0x38]                ; 005d0c99
    PUSH EAX                            ; 005d0c9d
    CALL shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640 ; 005d0c9e
        ;   XREF to: 005d6640 (UNCONDITIONAL_CALL)  ; double shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d * p1, CVector2d * p2, CVector2d * p3)
    MOV dword ptr [ESP + 0x1cc],EAX     ; 005d0ca3
    MOV dword ptr [ESP + 0x1d0],EDX     ; 005d0caa
    FLD double ptr [ESP + 0x1cc]        ; 005d0cb1
    FLDZ                                ; 005d0cb8
    ADD ESP,0xc                         ; 005d0cba
    FCOMPP                              ; 005d0cbd
    FNSTSW AX                           ; 005d0cbf
    SAHF                                ; 005d0cc1
    JC 0x005d05b2                       ; 005d0cc2
        ;   XREF to: 005d05b2 (CONDITIONAL_JUMP)  ; LAB_005d05b2
    MOV EAX,0x1                         ; 005d0cc8
    MOV ESP,EBP                         ; 005d0ccd
    POP EBP                             ; 005d0ccf
    POP ESI                             ; 005d0cd0
    POP EBX                             ; 005d0cd1
    RET                                 ; 005d0cd2

