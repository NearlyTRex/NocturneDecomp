; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0056a388(uint *param_1,int *param_2,undefined1 *param_3)
;
;
; XREF[2]:
;   FUN_0056f573 at 0056f625
;   FUN_00571bdc at 00571c3d
;
; Called Functions:
;   FUN_0056a697
;   FUN_0056f938
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056a388
        ;   Label: FUN_0056a388
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
    CALL FUN_0056f938                   ; 0056a405
        ;   XREF to: 0056f938 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f938()
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
    CALL FUN_0056a697                   ; 0056a690
        ;   XREF to: 0056a697 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a697()
    JMP 0x0056a6dc                      ; 0056a695
        ;   XREF to: 0056a6dc (UNCONDITIONAL_JUMP)

