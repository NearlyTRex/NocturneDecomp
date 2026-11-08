; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053c650(int *param_1,undefined4 param_2,char *param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_Out_of_memory_005ed9db
;   TerminatedCString s_Too_many_PODs_already_mo_005ed9e9
;
; Called Functions:
;   FUN_00531090
;   FUN_0053b1a0
;   FUN_0053b210
;   FUN_0053b250
;   FUN_005c0344
;   FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c650
        ;   Label: FUN_0053c650
    PUSH ESI                            ; 0053c651
    PUSH EDI                            ; 0053c652
    PUSH EBP                            ; 0053c653
    MOV ESI,dword ptr [ESP + 0x14]      ; 0053c654
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053c658
    PUSH 0x42c                          ; 0053c65c
    CALL FUN_005c0f32                   ; 0053c661
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f32()
    ADD ESP,0x4                         ; 0053c666
    TEST EAX,EAX                        ; 0053c669
    JNZ 0x0053c6a4                      ; 0053c66b
        ;   XREF to: 0053c6a4 (CONDITIONAL_JUMP)  ; LAB_0053c6a4
    MOV EBX,EAX                         ; 0053c66d
        ;   Label: LAB_0053c66d
    TEST EBX,EBX                        ; 0053c66f
    JZ 0x0053c6af                       ; 0053c671
        ;   XREF to: 0053c6af (CONDITIONAL_JUMP)  ; LAB_0053c6af
    PUSH EDI                            ; 0053c673
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053c674
    PUSH EDX                            ; 0053c678
    PUSH EBX                            ; 0053c679
    CALL FUN_0053b250                   ; 0053c67a
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0xc                         ; 0053c67f
    TEST EAX,EAX                        ; 0053c682
    JNZ 0x0053c6da                      ; 0053c684
        ;   XREF to: 0053c6da (CONDITIONAL_JUMP)  ; LAB_0053c6da
    TEST EBX,EBX                        ; 0053c686
    JZ 0x0053c69d                       ; 0053c688
        ;   XREF to: 0053c69d (CONDITIONAL_JUMP)  ; LAB_0053c69d
    PUSH EAX                            ; 0053c68a
    PUSH EBX                            ; 0053c68b
    CALL FUN_0053b210                   ; 0053c68c
        ;   XREF to: 0053b210 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b210()
    ADD ESP,0x8                         ; 0053c691
    PUSH EAX                            ; 0053c694
    CALL FUN_005c0344                   ; 0053c695
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0053c69a
    XOR EAX,EAX                         ; 0053c69d
        ;   Label: LAB_0053c69d
    POP EBP                             ; 0053c69f
    POP EDI                             ; 0053c6a0
    POP ESI                             ; 0053c6a1
    POP EBX                             ; 0053c6a2
    RET                                 ; 0053c6a3
    PUSH EAX                            ; 0053c6a4
        ;   Label: LAB_0053c6a4
    CALL FUN_0053b1a0                   ; 0053c6a5
        ;   XREF to: 0053b1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b1a0()
    ADD ESP,0x4                         ; 0053c6aa
    JMP 0x0053c66d                      ; 0053c6ad
        ;   XREF to: 0053c66d (UNCONDITIONAL_JUMP)  ; LAB_0053c66d
    PUSH 0x5ed9db                       ; 0053c6af | = "Out of memory"
        ;   Label: LAB_0053c6af
    CALL FUN_00531090                   ; 0053c6b4
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0053c6b9
    MOV ESI,EAX                         ; 0053c6bc
    PUSH EDI                            ; 0053c6be
    MOV AL,byte ptr [ESI]               ; 0053c6bf
        ;   Label: LAB_0053c6bf
    MOV byte ptr [EDI],AL               ; 0053c6c1
    CMP AL,0x0                          ; 0053c6c3
    JZ 0x0053c6d7                       ; 0053c6c5
        ;   XREF to: 0053c6d7 (CONDITIONAL_JUMP)  ; LAB_0053c6d7
    MOV AL,byte ptr [ESI + 0x1]         ; 0053c6c7
    ADD ESI,0x2                         ; 0053c6ca
    MOV byte ptr [EDI + 0x1],AL         ; 0053c6cd
    ADD EDI,0x2                         ; 0053c6d0
    CMP AL,0x0                          ; 0053c6d3
    JNZ 0x0053c6bf                      ; 0053c6d5
        ;   XREF to: 0053c6bf (CONDITIONAL_JUMP)  ; LAB_0053c6bf
    POP EDI                             ; 0053c6d7
        ;   Label: LAB_0053c6d7
    JMP 0x0053c69d                      ; 0053c6d8
        ;   XREF to: 0053c69d (UNCONDITIONAL_JUMP)  ; LAB_0053c69d
    MOV ECX,dword ptr [ESP + 0x18]      ; 0053c6da
        ;   Label: LAB_0053c6da
    PUSH ECX                            ; 0053c6de
    MOV EAX,dword ptr [ESI + 0x194]     ; 0053c6df
    PUSH ESI                            ; 0053c6e5
    CALL dword ptr [EAX + 0x10]         ; 0053c6e6
    MOV EBP,dword ptr [ESI]             ; 0053c6e9
    ADD ESP,0x8                         ; 0053c6eb
    CMP EBP,0x64                        ; 0053c6ee
    JL 0x0053c73b                       ; 0053c6f1
        ;   XREF to: 0053c73b (CONDITIONAL_JUMP)  ; LAB_0053c73b
    TEST EBX,EBX                        ; 0053c6f3
    JZ 0x0053c70b                       ; 0053c6f5
        ;   XREF to: 0053c70b (CONDITIONAL_JUMP)  ; LAB_0053c70b
    PUSH 0x0                            ; 0053c6f7
    PUSH EBX                            ; 0053c6f9
    CALL FUN_0053b210                   ; 0053c6fa
        ;   XREF to: 0053b210 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b210()
    ADD ESP,0x8                         ; 0053c6ff
    PUSH EAX                            ; 0053c702
    CALL FUN_005c0344                   ; 0053c703
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0053c708
    PUSH 0x5ed9e9                       ; 0053c70b | = "Too many PODs already mounted"
        ;   Label: LAB_0053c70b
    CALL FUN_00531090                   ; 0053c710
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0053c715
    MOV ESI,EAX                         ; 0053c718
    PUSH EDI                            ; 0053c71a
    MOV AL,byte ptr [ESI]               ; 0053c71b
        ;   Label: LAB_0053c71b
    MOV byte ptr [EDI],AL               ; 0053c71d
    CMP AL,0x0                          ; 0053c71f
    JZ 0x0053c733                       ; 0053c721
        ;   XREF to: 0053c733 (CONDITIONAL_JUMP)  ; LAB_0053c733
    MOV AL,byte ptr [ESI + 0x1]         ; 0053c723
    ADD ESI,0x2                         ; 0053c726
    MOV byte ptr [EDI + 0x1],AL         ; 0053c729
    ADD EDI,0x2                         ; 0053c72c
    CMP AL,0x0                          ; 0053c72f
    JNZ 0x0053c71b                      ; 0053c731
        ;   XREF to: 0053c71b (CONDITIONAL_JUMP)  ; LAB_0053c71b
    POP EDI                             ; 0053c733
        ;   Label: LAB_0053c733
    XOR EAX,EAX                         ; 0053c734
    POP EBP                             ; 0053c736
    POP EDI                             ; 0053c737
    POP ESI                             ; 0053c738
    POP EBX                             ; 0053c739
    RET                                 ; 0053c73a
    MOV EAX,EBP                         ; 0053c73b
        ;   Label: LAB_0053c73b
    MOV dword ptr [ESI + EAX*0x4 + 0x4],EBX ; 0053c73d
    MOV EAX,0x1                         ; 0053c741
    ADD dword ptr [ESI],EAX             ; 0053c746
    POP EBP                             ; 0053c748
    POP EDI                             ; 0053c749
    POP ESI                             ; 0053c74a
    POP EBX                             ; 0053c74b
    RET                                 ; 0053c74c

