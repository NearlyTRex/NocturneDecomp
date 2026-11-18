; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a73c8(uint *param_1,int *param_2,undefined1 *param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005ad52f at 005ad5e1
;   crt_unknown.c_FUN_005afa5c at 005afabd
;
; Called Functions:
;   crt_unknown.c_FUN_005a7360
;   crt_unknown.c_FUN_005a76d7
;   crt_unknown.c_FUN_005ad64c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a73c8
        ;   Label: crt_unknown.c_FUN_005a73c8
    MOV EBP,ESP                         ; 005a73c9
    PUSH EBX                            ; 005a73cb
    PUSH ESI                            ; 005a73cc
    PUSH EDI                            ; 005a73cd
    SUB ESP,0x88                        ; 005a73ce
    MOV EBX,dword ptr [EBP + 0x8]       ; 005a73d4
    MOV ESI,dword ptr [EBP + 0xc]       ; 005a73d7
    PUSH 0x0                            ; 005a73da
    FSTCW word ptr [ESP]                ; 005a73dc
    POP EAX                             ; 005a73e0
    MOV dword ptr [EBP + -0x14],EAX     ; 005a73e1
    OR AH,0x3                           ; 005a73e4
    AND EAX,0xffff                      ; 005a73e7
    PUSH EAX                            ; 005a73ec
    FLDCW word ptr [ESP]                ; 005a73ed
    POP EAX                             ; 005a73f0
    MOV dword ptr [ESI + 0x14],0x0      ; 005a73f1
    MOV AX,word ptr [EBX + 0x8]         ; 005a73f8
    MOV word ptr [EBP + -0x40],AX       ; 005a73fc
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a7400
    MOV dword ptr [EBP + -0x44],EAX     ; 005a7403
    MOV EAX,dword ptr [EBX]             ; 005a7406
    MOV dword ptr [EBP + -0x48],EAX     ; 005a7408
    TEST byte ptr [EBP + -0x3f],0x80    ; 005a740b
    JZ 0x005a7418                       ; 005a740f
        ;   XREF to: 005a7418 (CONDITIONAL_JUMP)  ; LAB_005a7418
    MOV dword ptr [ESI + 0x14],0xffffffff ; 005a7411
    AND byte ptr [EBP + -0x3f],0x7f     ; 005a7418
        ;   Label: LAB_005a7418
    MOV dword ptr [ESI + 0x1c],0x0      ; 005a741c
    MOV dword ptr [ESI + 0x20],0x0      ; 005a7423
    LEA EAX,[EBP + -0x48]               ; 005a742a
    MOV dword ptr [ESI + 0x24],0x0      ; 005a742d
    PUSH EAX                            ; 005a7434
    MOV dword ptr [ESI + 0x28],0x0      ; 005a7435
    XOR EDI,EDI                         ; 005a743c
    MOV dword ptr [ESI + 0x18],0x0      ; 005a743e
    CALL crt_unknown.c_FUN_005ad64c     ; 005a7445
        ;   XREF to: 005ad64c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad64c()
    ADD ESP,0x4                         ; 005a744a
    CMP EAX,0x4                         ; 005a744d
    JA 0x005a75d0                       ; 005a7450
        ;   XREF to: 005a75d0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x5a73b4] ; 005a7456 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    XOR ECX,ECX                         ; 005a745e
        ;   Label: caseD_0
    MOV dword ptr [ESI + 0x14],0x0      ; 005a7460
    MOV dword ptr [EBP + -0x20],ECX     ; 005a7467
    JMP 0x005a75d0                      ; 005a746a
        ;   XREF to: 005a75d0 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x10]      ; 005a746f
        ;   Label: caseD_2
    MOV byte ptr [EAX],0x6e             ; 005a7472
    MOV byte ptr [EAX + 0x1],0x61       ; 005a7475
    MOV byte ptr [EAX + 0x2],0x6e       ; 005a7479
    MOV byte ptr [EAX + 0x3],0x0        ; 005a747d
        ;   Label: LAB_005a747d
    MOV dword ptr [ESI + 0x1c],0x3      ; 005a7481
    JMP 0x005a785c                      ; 005a7488
        ;   XREF to: 005a785c (UNCONDITIONAL_JUMP)  ; LAB_005a785c
    MOV EAX,dword ptr [EBP + 0x10]      ; 005a748d
        ;   Label: caseD_3
    MOV byte ptr [EAX],0x69             ; 005a7490
    MOV byte ptr [EAX + 0x1],0x6e       ; 005a7493
    MOV byte ptr [EAX + 0x2],0x66       ; 005a7497
    JMP 0x005a747d                      ; 005a749b
        ;   XREF to: 005a747d (UNCONDITIONAL_JUMP)  ; LAB_005a747d
    XOR EAX,EAX                         ; 005a749d
        ;   Label: caseD_1
    MOV AX,word ptr [EBP + -0x40]       ; 005a749f
    SUB EAX,0x3ffe                      ; 005a74a3
    MOV dword ptr [EBP + -0x20],EAX     ; 005a74a8
    IMUL EDX,EAX,0x7597                 ; 005a74ab
    MOV EBX,0x186a0                     ; 005a74b1
    MOV EAX,EDX                         ; 005a74b6
    SAR EDX,0x1f                        ; 005a74b8
    IDIV EBX                            ; 005a74bb
    MOV dword ptr [EBP + -0x20],EAX     ; 005a74bd
    LEA ECX,[EAX + -0x4]                ; 005a74c0
    MOV dword ptr [EBP + -0x20],ECX     ; 005a74c3
    TEST ECX,ECX                        ; 005a74c6
    JZ 0x005a75d0                       ; 005a74c8
        ;   XREF to: 005a75d0 (CONDITIONAL_JUMP)  ; default
    JGE 0x005a74f1                      ; 005a74ce
        ;   XREF to: 005a74f1 (CONDITIONAL_JUMP)  ; LAB_005a74f1
    MOV EAX,ECX                         ; 005a74d0
    NEG EAX                             ; 005a74d2
    ADD EAX,0x3                         ; 005a74d4
    AND AL,0xfc                         ; 005a74d7
    MOV EBX,EAX                         ; 005a74d9
    NEG EBX                             ; 005a74db
    MOV dword ptr [EBP + -0x20],EAX     ; 005a74dd
    MOV EAX,EBX                         ; 005a74e0
    NEG EAX                             ; 005a74e2
    PUSH EAX                            ; 005a74e4
    LEA EAX,[EBP + -0x48]               ; 005a74e5
    PUSH EAX                            ; 005a74e8
    MOV dword ptr [EBP + -0x20],EBX     ; 005a74e9
    JMP 0x005a75c8                      ; 005a74ec
        ;   XREF to: 005a75c8 (UNCONDITIONAL_JUMP)  ; LAB_005a75c8
    MOV EDX,dword ptr [EBP + -0x40]     ; 005a74f1
        ;   Label: LAB_005a74f1
    CMP DX,0x4019                       ; 005a74f4
    JC 0x005a7506                       ; 005a74f9
        ;   XREF to: 005a7506 (CONDITIONAL_JUMP)  ; LAB_005a7506
    JNZ 0x005a7510                      ; 005a74fb
        ;   XREF to: 005a7510 (CONDITIONAL_JUMP)  ; LAB_005a7510
    CMP dword ptr [EBP + -0x44],0xbebc2000 ; 005a74fd
    JNC 0x005a7510                      ; 005a7504
        ;   XREF to: 005a7510 (CONDITIONAL_JUMP)  ; LAB_005a7510
    XOR EDX,EDX                         ; 005a7506
        ;   Label: LAB_005a7506
    MOV dword ptr [EBP + -0x20],EDX     ; 005a7508
    JMP 0x005a75d0                      ; 005a750b
        ;   XREF to: 005a75d0 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBP + -0x40]     ; 005a7510
        ;   Label: LAB_005a7510
    CMP CX,0x4034                       ; 005a7513
    JC 0x005a753e                       ; 005a7518
        ;   XREF to: 005a753e (CONDITIONAL_JUMP)  ; LAB_005a753e
    JNZ 0x005a75ba                      ; 005a751a
        ;   XREF to: 005a75ba (CONDITIONAL_JUMP)  ; LAB_005a75ba
    MOV ECX,dword ptr [EBP + -0x44]     ; 005a7520
    CMP ECX,0x8e1bc9bf                  ; 005a7523
    JC 0x005a753e                       ; 005a7529
        ;   XREF to: 005a753e (CONDITIONAL_JUMP)  ; LAB_005a753e
    JNZ 0x005a75ba                      ; 005a752b
        ;   XREF to: 005a75ba (CONDITIONAL_JUMP)  ; LAB_005a75ba
    CMP dword ptr [EBP + -0x48],0x4000000 ; 005a7531
    JNC 0x005a75ba                      ; 005a7538
        ;   XREF to: 005a75ba (CONDITIONAL_JUMP)  ; LAB_005a75ba
    MOV EDX,0x4019                      ; 005a753e
        ;   Label: LAB_005a753e
    MOV EBX,0xbebc2000                  ; 005a7543
    LEA EAX,[EBP + -0x48]               ; 005a7548
    XOR ECX,ECX                         ; 005a754b
    MOV word ptr [EBP + -0x34],DX       ; 005a754d
    MOV dword ptr [EBP + -0x38],EBX     ; 005a7551
    LEA EBX,[EBP + -0x30]               ; 005a7554
    LEA EDX,[EBP + -0x3c]               ; 005a7557
    MOV dword ptr [EBP + -0x3c],ECX     ; 005a755a
    FLD extended double ptr [EAX]       ; 005a755d
    FLD extended double ptr [EDX]       ; 005a755f
    FDIVP                               ; 005a7561
    FSTP extended double ptr [EBX]      ; 005a7563
    LEA EAX,[EBP + -0x30]               ; 005a7565
    LEA EBX,[EBP + -0x3c]               ; 005a7568
    FLD extended double ptr [EAX]       ; 005a756b
    PUSH EAX                            ; 005a756d
    PUSH EAX                            ; 005a756e
    FSTCW word ptr [ESP]                ; 005a756f
    POP EAX                             ; 005a7573
    PUSH EAX                            ; 005a7574
    OR AH,0xc                           ; 005a7575
    PUSH EAX                            ; 005a7578
    FLDCW word ptr [ESP]                ; 005a7579
    POP EAX                             ; 005a757c
    FISTP dword ptr [ESP + 0x4]         ; 005a757d
    FLDCW word ptr [ESP]                ; 005a7581
    POP EAX                             ; 005a7584
    POP EAX                             ; 005a7585
    LEA EDX,[EBP + -0x30]               ; 005a7586
    MOV EDI,EAX                         ; 005a7589
    PUSH EAX                            ; 005a758b
    FILD dword ptr [ESP]                ; 005a758c
    POP EAX                             ; 005a758f
    FSTP extended double ptr [EDX]      ; 005a7590
    LEA EDX,[EBP + -0x3c]               ; 005a7592
    LEA EAX,[EBP + -0x30]               ; 005a7595
    FLD extended double ptr [EAX]       ; 005a7598
    FLD extended double ptr [EDX]       ; 005a759a
    FMULP                               ; 005a759c
    FSTP extended double ptr [EBX]      ; 005a759e
    LEA EBX,[EBP + -0x48]               ; 005a75a0
    LEA EDX,[EBP + -0x3c]               ; 005a75a3
    LEA EAX,[EBP + -0x48]               ; 005a75a6
    FLD extended double ptr [EAX]       ; 005a75a9
    FLD extended double ptr [EDX]       ; 005a75ab
    FSUBP                               ; 005a75ad
    FSTP extended double ptr [EBX]      ; 005a75af
    MOV dword ptr [EBP + -0x20],0x8     ; 005a75b1
    JMP 0x005a75d0                      ; 005a75b8
        ;   XREF to: 005a75d0 (UNCONDITIONAL_JUMP)  ; default
    AND byte ptr [EBP + -0x20],0xfc     ; 005a75ba
        ;   Label: LAB_005a75ba
    MOV EAX,dword ptr [EBP + -0x20]     ; 005a75be
    NEG EAX                             ; 005a75c1
    PUSH EAX                            ; 005a75c3
    LEA EAX,[EBP + -0x48]               ; 005a75c4
    PUSH EAX                            ; 005a75c7
    CALL crt_unknown.c_FUN_005a7360     ; 005a75c8
        ;   XREF to: 005a7360 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7360()
        ;   Label: LAB_005a75c8
    ADD ESP,0x8                         ; 005a75cd
    TEST byte ptr [ESI + 0x8],0x2       ; 005a75d0
        ;   Label: default
    JZ 0x005a75f2                       ; 005a75d4
        ;   XREF to: 005a75f2 (CONDITIONAL_JUMP)  ; LAB_005a75f2
    MOV EDX,dword ptr [EBP + -0x20]     ; 005a75d6
    MOV EAX,dword ptr [ESI]             ; 005a75d9
    ADD EAX,EDX                         ; 005a75db
    ADD EAX,0xa                         ; 005a75dd
    MOV EBX,dword ptr [ESI + 0x4]       ; 005a75e0
    MOV dword ptr [EBP + -0x18],EAX     ; 005a75e3
    TEST EBX,EBX                        ; 005a75e6
    JLE 0x005a75fa                      ; 005a75e8
        ;   XREF to: 005a75fa (CONDITIONAL_JUMP)  ; LAB_005a75fa
    LEA ECX,[EAX + EBX*0x1]             ; 005a75ea
    MOV dword ptr [EBP + -0x18],ECX     ; 005a75ed
    JMP 0x005a75fa                      ; 005a75f0
        ;   XREF to: 005a75fa (UNCONDITIONAL_JUMP)  ; LAB_005a75fa
    MOV EAX,dword ptr [ESI]             ; 005a75f2
        ;   Label: LAB_005a75f2
    ADD EAX,0x7                         ; 005a75f4
    MOV dword ptr [EBP + -0x18],EAX     ; 005a75f7
    MOV BH,byte ptr [ESI + 0x8]         ; 005a75fa
        ;   Label: LAB_005a75fa
    MOV EAX,0xf                         ; 005a75fd
    TEST BH,0x20                        ; 005a7602
    JZ 0x005a760c                       ; 005a7605
        ;   XREF to: 005a760c (CONDITIONAL_JUMP)  ; LAB_005a760c
    MOV EAX,0x14                        ; 005a7607
    TEST byte ptr [ESI + 0x8],0x40      ; 005a760c
        ;   Label: LAB_005a760c
    JZ 0x005a7614                       ; 005a7610
        ;   XREF to: 005a7614 (CONDITIONAL_JUMP)  ; LAB_005a7614
    ADD EAX,EAX                         ; 005a7612
    MOV EDX,dword ptr [EBP + -0x18]     ; 005a7614
        ;   Label: LAB_005a7614
    ADD EAX,0x4                         ; 005a7617
    CMP EAX,EDX                         ; 005a761a
    JGE 0x005a7621                      ; 005a761c
        ;   XREF to: 005a7621 (CONDITIONAL_JUMP)  ; LAB_005a7621
    MOV dword ptr [EBP + -0x18],EAX     ; 005a761e
    MOV CH,0x30                         ; 005a7621
        ;   Label: LAB_005a7621
    XOR AL,AL                           ; 005a7623
    XOR EBX,EBX                         ; 005a7625
    MOV byte ptr [EBP + 0xffffff6c],CH  ; 005a7627
    MOV byte ptr [EBP + 0xffffff6d],AL  ; 005a762d
    LEA EAX,[EBP + 0xffffff6d]          ; 005a7633
    MOV dword ptr [EBP + -0x24],EBX     ; 005a7639
    MOV dword ptr [EBP + -0x1c],EAX     ; 005a763c
    MOV ECX,dword ptr [EBP + -0x18]     ; 005a763f
        ;   Label: LAB_005a763f
    TEST ECX,ECX                        ; 005a7642
    JLE 0x005a7735                      ; 005a7644
        ;   XREF to: 005a7735 (CONDITIONAL_JUMP)  ; LAB_005a7735
    LEA EAX,[ECX + -0x8]                ; 005a764a
    MOV dword ptr [EBP + -0x18],EAX     ; 005a764d
    TEST EDI,EDI                        ; 005a7650
    JNZ 0x005a76c9                      ; 005a7652
        ;   XREF to: 005a76c9 (CONDITIONAL_JUMP)  ; LAB_005a76c9
    TEST word ptr [EBP + -0x40],0x7fff  ; 005a7654
    JZ 0x005a7735                       ; 005a765a
        ;   XREF to: 005a7735 (CONDITIONAL_JUMP)  ; LAB_005a7735
    LEA EAX,[EBP + -0x48]               ; 005a7660
    FLD extended double ptr [EAX]       ; 005a7663
    PUSH EAX                            ; 005a7665
    PUSH EAX                            ; 005a7666
    FSTCW word ptr [ESP]                ; 005a7667
    POP EAX                             ; 005a766b
    PUSH EAX                            ; 005a766c
    OR AH,0xc                           ; 005a766d
    PUSH EAX                            ; 005a7670
    FLDCW word ptr [ESP]                ; 005a7671
    POP EAX                             ; 005a7674
    FISTP dword ptr [ESP + 0x4]         ; 005a7675
    FLDCW word ptr [ESP]                ; 005a7679
    POP EAX                             ; 005a767c
    POP EAX                             ; 005a767d
    MOV EDX,dword ptr [EBP + -0x18]     ; 005a767e
    MOV EDI,EAX                         ; 005a7681
    TEST EDX,EDX                        ; 005a7683
    JLE 0x005a76c9                      ; 005a7685
        ;   XREF to: 005a76c9 (CONDITIONAL_JUMP)  ; LAB_005a76c9
    LEA EDX,[EBP + -0x54]               ; 005a7687
    LEA EBX,[EBP + -0x48]               ; 005a768a
    PUSH EAX                            ; 005a768d
    FILD dword ptr [ESP]                ; 005a768e
    POP EAX                             ; 005a7691
    FSTP extended double ptr [EDX]      ; 005a7692
    LEA EDX,[EBP + -0x54]               ; 005a7694
    LEA EAX,[EBP + -0x48]               ; 005a7697
    FLD extended double ptr [EAX]       ; 005a769a
    FLD extended double ptr [EDX]       ; 005a769c
    FSUBP                               ; 005a769e
    FSTP extended double ptr [EBX]      ; 005a76a0
    MOV ECX,0x4019                      ; 005a76a2
    MOV EBX,0xbebc2000                  ; 005a76a7
    LEA EDX,[EBP + -0x54]               ; 005a76ac
    LEA EAX,[EBP + -0x48]               ; 005a76af
    MOV word ptr [EBP + -0x4c],CX       ; 005a76b2
    MOV dword ptr [EBP + -0x50],EBX     ; 005a76b6
    XOR ECX,ECX                         ; 005a76b9
    LEA EBX,[EBP + -0x48]               ; 005a76bb
    MOV dword ptr [EBP + -0x54],ECX     ; 005a76be
    FLD extended double ptr [EAX]       ; 005a76c1
    FLD extended double ptr [EDX]       ; 005a76c3
    FMULP                               ; 005a76c5
    FSTP extended double ptr [EBX]      ; 005a76c7
    MOV EBX,dword ptr [EBP + -0x1c]     ; 005a76c9
        ;   Label: LAB_005a76c9
    MOV EAX,EDI                         ; 005a76cc
    PUSH ECX                            ; 005a76ce
    PUSH EDX                            ; 005a76cf
    CALL crt_unknown.c_FUN_005a76d7     ; 005a76d0
        ;   XREF to: 005a76d7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a76d7()
    JMP 0x005a771c                      ; 005a76d5
        ;   XREF to: 005a771c (UNCONDITIONAL_JUMP)

