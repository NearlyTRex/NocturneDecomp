; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_0056a388(uint *param_1,int *param_2,undefined1 *param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_0056f573 at 0056f625
;   crt_unknown.c_FUN_00571bdc at 00571c3d
;
; Called Functions:
;   crt_unknown.c_FUN_0056a697
;   crt_unknown.c_FUN_0056a827
;   crt_unknown.c_FUN_0056aa38
;   crt_unknown.c_FUN_0056f938
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056a388
        ;   Label: crt_unknown.c_FUN_0056a388
    MOV EBP,ESP                         ; 0056a389
    PUSH EBX                            ; 0056a38b
    PUSH ESI                            ; 0056a38c
    PUSH EDI                            ; 0056a38d
    SUB ESP,0x88                        ; 0056a38e
    MOV EBX,dword ptr [EBP + 0x8]       ; 0056a394
    MOV ESI,dword ptr [EBP + 0xc]       ; 0056a397
    PUSH 0x0                            ; 0056a39a
    FSTCW word ptr [ESP]                ; 0056a39c
    POP EAX                             ; 0056a3a0
    MOV dword ptr [EBP + -0x14],EAX     ; 0056a3a1
    OR AH,0x3                           ; 0056a3a4
    AND EAX,0xffff                      ; 0056a3a7
    PUSH EAX                            ; 0056a3ac
    FLDCW word ptr [ESP]                ; 0056a3ad
    POP EAX                             ; 0056a3b0
    MOV dword ptr [ESI + 0x14],0x0      ; 0056a3b1
    MOV AX,word ptr [EBX + 0x8]         ; 0056a3b8
    MOV word ptr [EBP + -0x40],AX       ; 0056a3bc
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056a3c0
    MOV dword ptr [EBP + -0x44],EAX     ; 0056a3c3
    MOV EAX,dword ptr [EBX]             ; 0056a3c6
    MOV dword ptr [EBP + -0x48],EAX     ; 0056a3c8
    TEST byte ptr [EBP + -0x3f],0x80    ; 0056a3cb
    JZ 0x0056a3d8                       ; 0056a3cf
        ;   XREF to: 0056a3d8 (CONDITIONAL_JUMP)  ; LAB_0056a3d8
    MOV dword ptr [ESI + 0x14],0xffffffff ; 0056a3d1
    AND byte ptr [EBP + -0x3f],0x7f     ; 0056a3d8
        ;   Label: LAB_0056a3d8
    MOV dword ptr [ESI + 0x1c],0x0      ; 0056a3dc
    MOV dword ptr [ESI + 0x20],0x0      ; 0056a3e3
    LEA EAX,[EBP + -0x48]               ; 0056a3ea
    MOV dword ptr [ESI + 0x24],0x0      ; 0056a3ed
    PUSH EAX                            ; 0056a3f4
    MOV dword ptr [ESI + 0x28],0x0      ; 0056a3f5
    XOR EDI,EDI                         ; 0056a3fc
    MOV dword ptr [ESI + 0x18],0x0      ; 0056a3fe
    CALL crt_unknown.c_FUN_0056f938     ; 0056a405
        ;   XREF to: 0056f938 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f938()
    ADD ESP,0x4                         ; 0056a40a
    CMP EAX,0x4                         ; 0056a40d
    JA 0x0056a590                       ; 0056a410
        ;   XREF to: 0056a590 (CONDITIONAL_JUMP)  ; LAB_0056a590
    JMP dword ptr CS:[EAX*0x4 + 0x56a374] ; 0056a416
    TEST byte ptr [ESI + 0x8],0x2       ; 0056a590
        ;   Label: LAB_0056a590
    JZ 0x0056a5b2                       ; 0056a594
        ;   XREF to: 0056a5b2 (CONDITIONAL_JUMP)  ; LAB_0056a5b2
    MOV EDX,dword ptr [EBP + -0x20]     ; 0056a596
    MOV EAX,dword ptr [ESI]             ; 0056a599
    ADD EAX,EDX                         ; 0056a59b
    ADD EAX,0xa                         ; 0056a59d
    MOV EBX,dword ptr [ESI + 0x4]       ; 0056a5a0
    MOV dword ptr [EBP + -0x18],EAX     ; 0056a5a3
    TEST EBX,EBX                        ; 0056a5a6
    JLE 0x0056a5ba                      ; 0056a5a8
        ;   XREF to: 0056a5ba (CONDITIONAL_JUMP)  ; LAB_0056a5ba
    LEA ECX,[EAX + EBX*0x1]             ; 0056a5aa
    MOV dword ptr [EBP + -0x18],ECX     ; 0056a5ad
    JMP 0x0056a5ba                      ; 0056a5b0
        ;   XREF to: 0056a5ba (UNCONDITIONAL_JUMP)  ; LAB_0056a5ba
    MOV EAX,dword ptr [ESI]             ; 0056a5b2
        ;   Label: LAB_0056a5b2
    ADD EAX,0x7                         ; 0056a5b4
    MOV dword ptr [EBP + -0x18],EAX     ; 0056a5b7
    MOV BH,byte ptr [ESI + 0x8]         ; 0056a5ba
        ;   Label: LAB_0056a5ba
    MOV EAX,0xf                         ; 0056a5bd
    TEST BH,0x20                        ; 0056a5c2
    JZ 0x0056a5cc                       ; 0056a5c5
        ;   XREF to: 0056a5cc (CONDITIONAL_JUMP)  ; LAB_0056a5cc
    MOV EAX,0x14                        ; 0056a5c7
    TEST byte ptr [ESI + 0x8],0x40      ; 0056a5cc
        ;   Label: LAB_0056a5cc
    JZ 0x0056a5d4                       ; 0056a5d0
        ;   XREF to: 0056a5d4 (CONDITIONAL_JUMP)  ; LAB_0056a5d4
    ADD EAX,EAX                         ; 0056a5d2
    MOV EDX,dword ptr [EBP + -0x18]     ; 0056a5d4
        ;   Label: LAB_0056a5d4
    ADD EAX,0x4                         ; 0056a5d7
    CMP EAX,EDX                         ; 0056a5da
    JGE 0x0056a5e1                      ; 0056a5dc
        ;   XREF to: 0056a5e1 (CONDITIONAL_JUMP)  ; LAB_0056a5e1
    MOV dword ptr [EBP + -0x18],EAX     ; 0056a5de
    MOV CH,0x30                         ; 0056a5e1
        ;   Label: LAB_0056a5e1
    XOR AL,AL                           ; 0056a5e3
    XOR EBX,EBX                         ; 0056a5e5
    MOV byte ptr [EBP + 0xffffff6c],CH  ; 0056a5e7
    MOV byte ptr [EBP + 0xffffff6d],AL  ; 0056a5ed
    LEA EAX,[EBP + 0xffffff6d]          ; 0056a5f3
    MOV dword ptr [EBP + -0x24],EBX     ; 0056a5f9
    MOV dword ptr [EBP + -0x1c],EAX     ; 0056a5fc
    MOV ECX,dword ptr [EBP + -0x18]     ; 0056a5ff
        ;   Label: LAB_0056a5ff
    TEST ECX,ECX                        ; 0056a602
    JLE 0x0056a6f5                      ; 0056a604
        ;   XREF to: 0056a6f5 (CONDITIONAL_JUMP)  ; LAB_0056a6f5
    LEA EAX,[ECX + -0x8]                ; 0056a60a
    MOV dword ptr [EBP + -0x18],EAX     ; 0056a60d
    TEST EDI,EDI                        ; 0056a610
    JNZ 0x0056a689                      ; 0056a612
        ;   XREF to: 0056a689 (CONDITIONAL_JUMP)  ; LAB_0056a689
    TEST word ptr [EBP + -0x40],0x7fff  ; 0056a614
    JZ 0x0056a6f5                       ; 0056a61a
        ;   XREF to: 0056a6f5 (CONDITIONAL_JUMP)  ; LAB_0056a6f5
    LEA EAX,[EBP + -0x48]               ; 0056a620
    FLD extended double ptr [EAX]       ; 0056a623
    PUSH EAX                            ; 0056a625
    PUSH EAX                            ; 0056a626
    FSTCW word ptr [ESP]                ; 0056a627
    POP EAX                             ; 0056a62b
    PUSH EAX                            ; 0056a62c
    OR AH,0xc                           ; 0056a62d
    PUSH EAX                            ; 0056a630
    FLDCW word ptr [ESP]                ; 0056a631
    POP EAX                             ; 0056a634
    FISTP dword ptr [ESP + 0x4]         ; 0056a635
    FLDCW word ptr [ESP]                ; 0056a639
    POP EAX                             ; 0056a63c
    POP EAX                             ; 0056a63d
    MOV EDX,dword ptr [EBP + -0x18]     ; 0056a63e
    MOV EDI,EAX                         ; 0056a641
    TEST EDX,EDX                        ; 0056a643
    JLE 0x0056a689                      ; 0056a645
        ;   XREF to: 0056a689 (CONDITIONAL_JUMP)  ; LAB_0056a689
    LEA EDX,[EBP + -0x54]               ; 0056a647
    LEA EBX,[EBP + -0x48]               ; 0056a64a
    PUSH EAX                            ; 0056a64d
    FILD dword ptr [ESP]                ; 0056a64e
    POP EAX                             ; 0056a651
    FSTP extended double ptr [EDX]      ; 0056a652
    LEA EDX,[EBP + -0x54]               ; 0056a654
    LEA EAX,[EBP + -0x48]               ; 0056a657
    FLD extended double ptr [EAX]       ; 0056a65a
    FLD extended double ptr [EDX]       ; 0056a65c
    FSUBP                               ; 0056a65e
    FSTP extended double ptr [EBX]      ; 0056a660
    MOV ECX,0x4019                      ; 0056a662
    MOV EBX,0xbebc2000                  ; 0056a667
    LEA EDX,[EBP + -0x54]               ; 0056a66c
    LEA EAX,[EBP + -0x48]               ; 0056a66f
    MOV word ptr [EBP + -0x4c],CX       ; 0056a672
    MOV dword ptr [EBP + -0x50],EBX     ; 0056a676
    XOR ECX,ECX                         ; 0056a679
    LEA EBX,[EBP + -0x48]               ; 0056a67b
    MOV dword ptr [EBP + -0x54],ECX     ; 0056a67e
    FLD extended double ptr [EAX]       ; 0056a681
    FLD extended double ptr [EDX]       ; 0056a683
    FMULP                               ; 0056a685
    FSTP extended double ptr [EBX]      ; 0056a687
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0056a689
        ;   Label: LAB_0056a689
    MOV EAX,EDI                         ; 0056a68c
    PUSH ECX                            ; 0056a68e
    PUSH EDX                            ; 0056a68f
    CALL crt_unknown.c_FUN_0056a697     ; 0056a690
        ;   XREF to: 0056a697 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a697()
    JMP 0x0056a6dc                      ; 0056a695
        ;   XREF to: 0056a6dc (UNCONDITIONAL_JUMP)  ; LAB_0056a6dc
    POP EDX                             ; 0056a6dc
        ;   Label: LAB_0056a6dc
    POP ECX                             ; 0056a6dd
    MOV AL,0x0                          ; 0056a6de
    MOV byte ptr [EBX],AL               ; 0056a6e0
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056a6e2
    MOV dword ptr [EBP + -0x1c],EBX     ; 0056a6e5
    ADD EAX,0x8                         ; 0056a6e8
    XOR EDI,EDI                         ; 0056a6eb
    MOV dword ptr [EBP + -0x24],EAX     ; 0056a6ed
    JMP 0x0056a5ff                      ; 0056a6f0
        ;   XREF to: 0056a5ff (UNCONDITIONAL_JUMP)  ; LAB_0056a5ff
    MOV EDX,dword ptr [EBP + -0x20]     ; 0056a6f5
        ;   Label: LAB_0056a6f5
    MOV EDI,dword ptr [EBP + -0x24]     ; 0056a6f8
    ADD EDX,0x7                         ; 0056a6fb
    LEA EAX,[EBP + 0xffffff6d]          ; 0056a6fe
    MOV dword ptr [EBP + -0x20],EDX     ; 0056a704
        ;   Label: LAB_0056a704
    CMP byte ptr [EAX],0x30             ; 0056a707
    JNZ 0x0056a714                      ; 0056a70a
        ;   XREF to: 0056a714 (CONDITIONAL_JUMP)  ; LAB_0056a714
    MOV EDX,dword ptr [EBP + -0x20]     ; 0056a70c
    DEC EDI                             ; 0056a70f
    DEC EDX                             ; 0056a710
    INC EAX                             ; 0056a711
    JMP 0x0056a704                      ; 0056a712
        ;   XREF to: 0056a704 (UNCONDITIONAL_JUMP)  ; LAB_0056a704
    MOV BL,byte ptr [ESI + 0x8]         ; 0056a714
        ;   Label: LAB_0056a714
    MOV EDX,dword ptr [ESI]             ; 0056a717
    TEST BL,0x2                         ; 0056a719
    JZ 0x0056a730                       ; 0056a71c
        ;   XREF to: 0056a730 (CONDITIONAL_JUMP)  ; LAB_0056a730
    MOV ECX,dword ptr [EBP + -0x20]     ; 0056a71e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0056a721
    ADD ECX,EBX                         ; 0056a724
    MOV dword ptr [EBP + -0x20],ECX     ; 0056a726
    LEA EBX,[ECX + 0x1]                 ; 0056a729
    ADD EDX,EBX                         ; 0056a72c
    JMP 0x0056a74d                      ; 0056a72e
        ;   XREF to: 0056a74d (UNCONDITIONAL_JUMP)  ; LAB_0056a74d
    TEST BL,0x1                         ; 0056a730
        ;   Label: LAB_0056a730
    JZ 0x0056a74d                       ; 0056a733
        ;   XREF to: 0056a74d (CONDITIONAL_JUMP)  ; LAB_0056a74d
    MOV EBX,dword ptr [ESI + 0x4]       ; 0056a735
    TEST EBX,EBX                        ; 0056a738
    JLE 0x0056a73f                      ; 0056a73a
        ;   XREF to: 0056a73f (CONDITIONAL_JUMP)  ; LAB_0056a73f
    INC EDX                             ; 0056a73c
    JMP 0x0056a741                      ; 0056a73d
        ;   XREF to: 0056a741 (UNCONDITIONAL_JUMP)  ; LAB_0056a741
    ADD EDX,EBX                         ; 0056a73f
        ;   Label: LAB_0056a73f
    MOV EBX,dword ptr [EBP + -0x20]     ; 0056a741
        ;   Label: LAB_0056a741
    MOV ECX,dword ptr [ESI + 0x4]       ; 0056a744
    INC EBX                             ; 0056a747
    SUB EBX,ECX                         ; 0056a748
    MOV dword ptr [EBP + -0x20],EBX     ; 0056a74a
    TEST EDX,EDX                        ; 0056a74d
        ;   Label: LAB_0056a74d
    JL 0x0056a7b9                       ; 0056a74f
        ;   XREF to: 0056a7b9 (CONDITIONAL_JUMP)  ; LAB_0056a7b9
    CMP EDX,EDI                         ; 0056a755
    JLE 0x0056a75b                      ; 0056a757
        ;   XREF to: 0056a75b (CONDITIONAL_JUMP)  ; LAB_0056a75b
    MOV EDX,EDI                         ; 0056a759
    MOV CL,byte ptr [ESI + 0x8]         ; 0056a75b
        ;   Label: LAB_0056a75b
    MOV EBX,0xf                         ; 0056a75e
    TEST CL,0x20                        ; 0056a763
    JZ 0x0056a76d                       ; 0056a766
        ;   XREF to: 0056a76d (CONDITIONAL_JUMP)  ; LAB_0056a76d
    MOV EBX,0x14                        ; 0056a768
    TEST byte ptr [ESI + 0x8],0x40      ; 0056a76d
        ;   Label: LAB_0056a76d
    JZ 0x0056a775                       ; 0056a771
        ;   XREF to: 0056a775 (CONDITIONAL_JUMP)  ; LAB_0056a775
    ADD EBX,EBX                         ; 0056a773
    CMP EDX,EBX                         ; 0056a775
        ;   Label: LAB_0056a775
    JLE 0x0056a77c                      ; 0056a777
        ;   XREF to: 0056a77c (CONDITIONAL_JUMP)  ; LAB_0056a77c
    LEA EDX,[EBX + 0x1]                 ; 0056a779
    MOV byte ptr [EBP + -0x10],0x30     ; 0056a77c
        ;   Label: LAB_0056a77c
    CMP EDI,EDX                         ; 0056a780
    JLE 0x0056a78e                      ; 0056a782
        ;   XREF to: 0056a78e (CONDITIONAL_JUMP)  ; LAB_0056a78e
    CMP byte ptr [EDX + EAX*0x1],0x35   ; 0056a784
    JC 0x0056a78e                       ; 0056a788
        ;   XREF to: 0056a78e (CONDITIONAL_JUMP)  ; LAB_0056a78e
    MOV byte ptr [EBP + -0x10],0x39     ; 0056a78a
    MOV CH,byte ptr [EBP + -0x10]       ; 0056a78e
        ;   Label: LAB_0056a78e
    MOV EBX,EDX                         ; 0056a791
    LEA EDI,[EDX + EAX*0x1]             ; 0056a793
    DEC EDI                             ; 0056a796
        ;   Label: LAB_0056a796
    MOV CL,byte ptr [EDI]               ; 0056a797
    DEC EBX                             ; 0056a799
    CMP CL,CH                           ; 0056a79a
    JNZ 0x0056a7a1                      ; 0056a79c
        ;   XREF to: 0056a7a1 (CONDITIONAL_JUMP)  ; LAB_0056a7a1
    DEC EDX                             ; 0056a79e
    JMP 0x0056a796                      ; 0056a79f
        ;   XREF to: 0056a796 (UNCONDITIONAL_JUMP)  ; LAB_0056a796
    CMP CH,0x39                         ; 0056a7a1
        ;   Label: LAB_0056a7a1
    JNZ 0x0056a7ac                      ; 0056a7a4
        ;   XREF to: 0056a7ac (CONDITIONAL_JUMP)  ; LAB_0056a7ac
    MOV CH,CL                           ; 0056a7a6
    INC CH                              ; 0056a7a8
    MOV byte ptr [EDI],CH               ; 0056a7aa
    TEST EBX,EBX                        ; 0056a7ac
        ;   Label: LAB_0056a7ac
    JGE 0x0056a7b9                      ; 0056a7ae
        ;   XREF to: 0056a7b9 (CONDITIONAL_JUMP)  ; LAB_0056a7b9
    MOV EBX,dword ptr [EBP + -0x20]     ; 0056a7b0
    DEC EAX                             ; 0056a7b3
    INC EBX                             ; 0056a7b4
    INC EDX                             ; 0056a7b5
    MOV dword ptr [EBP + -0x20],EBX     ; 0056a7b6
    TEST EDX,EDX                        ; 0056a7b9
        ;   Label: LAB_0056a7b9
    JG 0x0056a7d8                       ; 0056a7bb
        ;   XREF to: 0056a7d8 (CONDITIONAL_JUMP)  ; LAB_0056a7d8
    MOV EDX,0x1                         ; 0056a7bd
    XOR ECX,ECX                         ; 0056a7c2
    MOV AL,0x30                         ; 0056a7c4
    MOV dword ptr [EBP + -0x20],ECX     ; 0056a7c6
    MOV byte ptr [EBP + 0xffffff6c],AL  ; 0056a7c9
    LEA EAX,[EBP + 0xffffff6c]          ; 0056a7cf
    MOV dword ptr [ESI + 0x14],ECX      ; 0056a7d5
    MOV BL,byte ptr [ESI + 0x8]         ; 0056a7d8
        ;   Label: LAB_0056a7d8
    TEST BL,0x2                         ; 0056a7db
    JNZ 0x0056a7f7                      ; 0056a7de
        ;   XREF to: 0056a7f7 (CONDITIONAL_JUMP)  ; LAB_0056a7f7
    TEST BL,0x4                         ; 0056a7e0
    JZ 0x0056a809                       ; 0056a7e3
        ;   XREF to: 0056a809 (CONDITIONAL_JUMP)  ; LAB_0056a809
    MOV EDI,dword ptr [EBP + -0x20]     ; 0056a7e5
    CMP EDI,-0x4                        ; 0056a7e8
    JL 0x0056a7f1                       ; 0056a7eb
        ;   XREF to: 0056a7f1 (CONDITIONAL_JUMP)  ; LAB_0056a7f1
    CMP EDI,dword ptr [ESI]             ; 0056a7ed
    JL 0x0056a7f7                       ; 0056a7ef
        ;   XREF to: 0056a7f7 (CONDITIONAL_JUMP)  ; LAB_0056a7f7
    TEST byte ptr [ESI + 0x8],0x8       ; 0056a7f1
        ;   Label: LAB_0056a7f1
    JZ 0x0056a809                       ; 0056a7f5
        ;   XREF to: 0056a809 (CONDITIONAL_JUMP)  ; LAB_0056a809
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056a7f7
        ;   Label: LAB_0056a7f7
    PUSH ECX                            ; 0056a7fa
    MOV EDI,dword ptr [EBP + -0x20]     ; 0056a7fb
    PUSH EDI                            ; 0056a7fe
    PUSH EDX                            ; 0056a7ff
    PUSH EAX                            ; 0056a800
    PUSH ESI                            ; 0056a801
    CALL crt_unknown.c_FUN_0056a827     ; 0056a802
        ;   XREF to: 0056a827 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a827()
    JMP 0x0056a819                      ; 0056a807
        ;   XREF to: 0056a819 (UNCONDITIONAL_JUMP)  ; LAB_0056a819
    MOV EDI,dword ptr [EBP + 0x10]      ; 0056a809
        ;   Label: LAB_0056a809
    PUSH EDI                            ; 0056a80c
    MOV EBX,dword ptr [EBP + -0x20]     ; 0056a80d
    PUSH EBX                            ; 0056a810
    PUSH EDX                            ; 0056a811
    PUSH EAX                            ; 0056a812
    PUSH ESI                            ; 0056a813
    CALL crt_unknown.c_FUN_0056aa38     ; 0056a814
        ;   XREF to: 0056aa38 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056aa38()
    ADD ESP,0x14                        ; 0056a819
        ;   Label: LAB_0056a819
    XOR EAX,EAX                         ; 0056a81c
        ;   Label: LAB_0056a81c
    MOV AX,word ptr [EBP + -0x14]       ; 0056a81e
    JMP 0x0056a316                      ; 0056a822
        ;   XREF to: 0056a316 (UNCONDITIONAL_JUMP)  ; LAB_0056a316

