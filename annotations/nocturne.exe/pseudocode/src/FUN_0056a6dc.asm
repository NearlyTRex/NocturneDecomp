; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined2 FUN_0056a6dc(void)
;
; Parameters:
; undefined2       Stack[0x0]:2   local_res0
; Local Variables:
; undefined2       Stack[-0x4]:2  local_4
;
; Called Functions:
;   FUN_0056a697
;   FUN_0056a827
;   FUN_0056aa38
;
; *****************************************************************************

section .text

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
    CALL FUN_0056a697                   ; 0056a690
        ;   XREF to: 0056a697 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a697()
    JMP 0x0056a6dc                      ; 0056a695
        ;   XREF to: 0056a6dc (UNCONDITIONAL_JUMP)
    POP EDX                             ; 0056a6dc
        ;   Label: FUN_0056a6dc
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
    CALL FUN_0056a827                   ; 0056a802
        ;   XREF to: 0056a827 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a827()
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
    CALL FUN_0056aa38                   ; 0056a814
        ;   XREF to: 0056aa38 (UNCONDITIONAL_CALL)  ; undefined FUN_0056aa38()
    ADD ESP,0x14                        ; 0056a819
        ;   Label: LAB_0056a819
    XOR EAX,EAX                         ; 0056a81c
        ;   Label: LAB_0056a81c
    MOV AX,word ptr [EBP + -0x14]       ; 0056a81e
    JMP 0x0056a316                      ; 0056a822
        ;   XREF to: 0056a316 (UNCONDITIONAL_JUMP)  ; LAB_0056a316

