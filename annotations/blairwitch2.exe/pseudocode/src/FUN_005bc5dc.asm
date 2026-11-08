; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005bc5dc(void)
;
; Parameters:
; undefined2       Stack[0x0]:2   local_res0
; Local Variables:
; undefined2       Stack[-0x4]:2  local_4
;
; XREF[1]:
;   FUN_005bc288 at 005bc595
;
; Called Functions:
;   FUN_005bc727
;   FUN_005bc938
;
; *****************************************************************************

section .text

    POP EDX                             ; 005bc5dc
        ;   Label: FUN_005bc5dc
    POP ECX                             ; 005bc5dd
    MOV AL,0x0                          ; 005bc5de
    MOV byte ptr [EBX],AL               ; 005bc5e0
    MOV EAX,dword ptr [EBP + -0x24]     ; 005bc5e2
    MOV dword ptr [EBP + -0x1c],EBX     ; 005bc5e5
    ADD EAX,0x8                         ; 005bc5e8
    XOR EDI,EDI                         ; 005bc5eb
    MOV dword ptr [EBP + -0x24],EAX     ; 005bc5ed
    JMP 0x005bc4ff                      ; 005bc5f0
        ;   XREF to: 005bc4ff (UNCONDITIONAL_JUMP)  ; LAB_005bc4ff
    MOV EDX,dword ptr [EBP + -0x20]     ; 005bc5f5
        ;   Label: LAB_005bc5f5
    MOV EDI,dword ptr [EBP + -0x24]     ; 005bc5f8
    ADD EDX,0x7                         ; 005bc5fb
    LEA EAX,[EBP + 0xffffff6d]          ; 005bc5fe
    MOV dword ptr [EBP + -0x20],EDX     ; 005bc604
        ;   Label: LAB_005bc604
    CMP byte ptr [EAX],0x30             ; 005bc607
    JNZ 0x005bc614                      ; 005bc60a
        ;   XREF to: 005bc614 (CONDITIONAL_JUMP)  ; LAB_005bc614
    MOV EDX,dword ptr [EBP + -0x20]     ; 005bc60c
    DEC EDI                             ; 005bc60f
    DEC EDX                             ; 005bc610
    INC EAX                             ; 005bc611
    JMP 0x005bc604                      ; 005bc612
        ;   XREF to: 005bc604 (UNCONDITIONAL_JUMP)  ; LAB_005bc604
    MOV BL,byte ptr [ESI + 0x8]         ; 005bc614
        ;   Label: LAB_005bc614
    MOV EDX,dword ptr [ESI]             ; 005bc617
    TEST BL,0x2                         ; 005bc619
    JZ 0x005bc630                       ; 005bc61c
        ;   XREF to: 005bc630 (CONDITIONAL_JUMP)  ; LAB_005bc630
    MOV ECX,dword ptr [EBP + -0x20]     ; 005bc61e
    MOV EBX,dword ptr [ESI + 0x4]       ; 005bc621
    ADD ECX,EBX                         ; 005bc624
    MOV dword ptr [EBP + -0x20],ECX     ; 005bc626
    LEA EBX,[ECX + 0x1]                 ; 005bc629
    ADD EDX,EBX                         ; 005bc62c
    JMP 0x005bc64d                      ; 005bc62e
        ;   XREF to: 005bc64d (UNCONDITIONAL_JUMP)  ; LAB_005bc64d
    TEST BL,0x1                         ; 005bc630
        ;   Label: LAB_005bc630
    JZ 0x005bc64d                       ; 005bc633
        ;   XREF to: 005bc64d (CONDITIONAL_JUMP)  ; LAB_005bc64d
    MOV EBX,dword ptr [ESI + 0x4]       ; 005bc635
    TEST EBX,EBX                        ; 005bc638
    JLE 0x005bc63f                      ; 005bc63a
        ;   XREF to: 005bc63f (CONDITIONAL_JUMP)  ; LAB_005bc63f
    INC EDX                             ; 005bc63c
    JMP 0x005bc641                      ; 005bc63d
        ;   XREF to: 005bc641 (UNCONDITIONAL_JUMP)  ; LAB_005bc641
    ADD EDX,EBX                         ; 005bc63f
        ;   Label: LAB_005bc63f
    MOV EBX,dword ptr [EBP + -0x20]     ; 005bc641
        ;   Label: LAB_005bc641
    MOV ECX,dword ptr [ESI + 0x4]       ; 005bc644
    INC EBX                             ; 005bc647
    SUB EBX,ECX                         ; 005bc648
    MOV dword ptr [EBP + -0x20],EBX     ; 005bc64a
    TEST EDX,EDX                        ; 005bc64d
        ;   Label: LAB_005bc64d
    JL 0x005bc6b9                       ; 005bc64f
        ;   XREF to: 005bc6b9 (CONDITIONAL_JUMP)  ; LAB_005bc6b9
    CMP EDX,EDI                         ; 005bc655
    JLE 0x005bc65b                      ; 005bc657
        ;   XREF to: 005bc65b (CONDITIONAL_JUMP)  ; LAB_005bc65b
    MOV EDX,EDI                         ; 005bc659
    MOV CL,byte ptr [ESI + 0x8]         ; 005bc65b
        ;   Label: LAB_005bc65b
    MOV EBX,0xf                         ; 005bc65e
    TEST CL,0x20                        ; 005bc663
    JZ 0x005bc66d                       ; 005bc666
        ;   XREF to: 005bc66d (CONDITIONAL_JUMP)  ; LAB_005bc66d
    MOV EBX,0x14                        ; 005bc668
    TEST byte ptr [ESI + 0x8],0x40      ; 005bc66d
        ;   Label: LAB_005bc66d
    JZ 0x005bc675                       ; 005bc671
        ;   XREF to: 005bc675 (CONDITIONAL_JUMP)  ; LAB_005bc675
    ADD EBX,EBX                         ; 005bc673
    CMP EDX,EBX                         ; 005bc675
        ;   Label: LAB_005bc675
    JLE 0x005bc67c                      ; 005bc677
        ;   XREF to: 005bc67c (CONDITIONAL_JUMP)  ; LAB_005bc67c
    LEA EDX,[EBX + 0x1]                 ; 005bc679
    MOV byte ptr [EBP + -0x10],0x30     ; 005bc67c
        ;   Label: LAB_005bc67c
    CMP EDI,EDX                         ; 005bc680
    JLE 0x005bc68e                      ; 005bc682
        ;   XREF to: 005bc68e (CONDITIONAL_JUMP)  ; LAB_005bc68e
    CMP byte ptr [EDX + EAX*0x1],0x35   ; 005bc684
    JC 0x005bc68e                       ; 005bc688
        ;   XREF to: 005bc68e (CONDITIONAL_JUMP)  ; LAB_005bc68e
    MOV byte ptr [EBP + -0x10],0x39     ; 005bc68a
    MOV CH,byte ptr [EBP + -0x10]       ; 005bc68e
        ;   Label: LAB_005bc68e
    MOV EBX,EDX                         ; 005bc691
    LEA EDI,[EDX + EAX*0x1]             ; 005bc693
    DEC EDI                             ; 005bc696
        ;   Label: LAB_005bc696
    MOV CL,byte ptr [EDI]               ; 005bc697
    DEC EBX                             ; 005bc699
    CMP CL,CH                           ; 005bc69a
    JNZ 0x005bc6a1                      ; 005bc69c
        ;   XREF to: 005bc6a1 (CONDITIONAL_JUMP)  ; LAB_005bc6a1
    DEC EDX                             ; 005bc69e
    JMP 0x005bc696                      ; 005bc69f
        ;   XREF to: 005bc696 (UNCONDITIONAL_JUMP)  ; LAB_005bc696
    CMP CH,0x39                         ; 005bc6a1
        ;   Label: LAB_005bc6a1
    JNZ 0x005bc6ac                      ; 005bc6a4
        ;   XREF to: 005bc6ac (CONDITIONAL_JUMP)  ; LAB_005bc6ac
    MOV CH,CL                           ; 005bc6a6
    INC CH                              ; 005bc6a8
    MOV byte ptr [EDI],CH               ; 005bc6aa
    TEST EBX,EBX                        ; 005bc6ac
        ;   Label: LAB_005bc6ac
    JGE 0x005bc6b9                      ; 005bc6ae
        ;   XREF to: 005bc6b9 (CONDITIONAL_JUMP)  ; LAB_005bc6b9
    MOV EBX,dword ptr [EBP + -0x20]     ; 005bc6b0
    DEC EAX                             ; 005bc6b3
    INC EBX                             ; 005bc6b4
    INC EDX                             ; 005bc6b5
    MOV dword ptr [EBP + -0x20],EBX     ; 005bc6b6
    TEST EDX,EDX                        ; 005bc6b9
        ;   Label: LAB_005bc6b9
    JG 0x005bc6d8                       ; 005bc6bb
        ;   XREF to: 005bc6d8 (CONDITIONAL_JUMP)  ; LAB_005bc6d8
    MOV EDX,0x1                         ; 005bc6bd
    XOR ECX,ECX                         ; 005bc6c2
    MOV AL,0x30                         ; 005bc6c4
    MOV dword ptr [EBP + -0x20],ECX     ; 005bc6c6
    MOV byte ptr [EBP + 0xffffff6c],AL  ; 005bc6c9
    LEA EAX,[EBP + 0xffffff6c]          ; 005bc6cf
    MOV dword ptr [ESI + 0x14],ECX      ; 005bc6d5
    MOV BL,byte ptr [ESI + 0x8]         ; 005bc6d8
        ;   Label: LAB_005bc6d8
    TEST BL,0x2                         ; 005bc6db
    JNZ 0x005bc6f7                      ; 005bc6de
        ;   XREF to: 005bc6f7 (CONDITIONAL_JUMP)  ; LAB_005bc6f7
    TEST BL,0x4                         ; 005bc6e0
    JZ 0x005bc709                       ; 005bc6e3
        ;   XREF to: 005bc709 (CONDITIONAL_JUMP)  ; LAB_005bc709
    MOV EDI,dword ptr [EBP + -0x20]     ; 005bc6e5
    CMP EDI,-0x4                        ; 005bc6e8
    JL 0x005bc6f1                       ; 005bc6eb
        ;   XREF to: 005bc6f1 (CONDITIONAL_JUMP)  ; LAB_005bc6f1
    CMP EDI,dword ptr [ESI]             ; 005bc6ed
    JL 0x005bc6f7                       ; 005bc6ef
        ;   XREF to: 005bc6f7 (CONDITIONAL_JUMP)  ; LAB_005bc6f7
    TEST byte ptr [ESI + 0x8],0x8       ; 005bc6f1
        ;   Label: LAB_005bc6f1
    JZ 0x005bc709                       ; 005bc6f5
        ;   XREF to: 005bc709 (CONDITIONAL_JUMP)  ; LAB_005bc709
    MOV ECX,dword ptr [EBP + 0x10]      ; 005bc6f7
        ;   Label: LAB_005bc6f7
    PUSH ECX                            ; 005bc6fa
    MOV EDI,dword ptr [EBP + -0x20]     ; 005bc6fb
    PUSH EDI                            ; 005bc6fe
    PUSH EDX                            ; 005bc6ff
    PUSH EAX                            ; 005bc700
    PUSH ESI                            ; 005bc701
    CALL FUN_005bc727                   ; 005bc702
        ;   XREF to: 005bc727 (UNCONDITIONAL_CALL)  ; undefined FUN_005bc727()
    JMP 0x005bc719                      ; 005bc707
        ;   XREF to: 005bc719 (UNCONDITIONAL_JUMP)  ; LAB_005bc719
    MOV EDI,dword ptr [EBP + 0x10]      ; 005bc709
        ;   Label: LAB_005bc709
    PUSH EDI                            ; 005bc70c
    MOV EBX,dword ptr [EBP + -0x20]     ; 005bc70d
    PUSH EBX                            ; 005bc710
    PUSH EDX                            ; 005bc711
    PUSH EAX                            ; 005bc712
    PUSH ESI                            ; 005bc713
    CALL FUN_005bc938                   ; 005bc714
        ;   XREF to: 005bc938 (UNCONDITIONAL_CALL)  ; undefined FUN_005bc938()
    ADD ESP,0x14                        ; 005bc719
        ;   Label: LAB_005bc719
    XOR EAX,EAX                         ; 005bc71c
        ;   Label: LAB_005bc71c
    MOV AX,word ptr [EBP + -0x14]       ; 005bc71e
    JMP 0x005bc216                      ; 005bc722
        ;   XREF to: 005bc216 (UNCONDITIONAL_JUMP)  ; LAB_005bc216

