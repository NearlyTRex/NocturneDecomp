; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551cb0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)
;
;
; XREF[1]:
;   FUN_004b5190 at 004b58d7
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_00400000
;   undefined4 DAT_0061bcc0
;   undefined4 DAT_02641c20
;   undefined4 DAT_02641c24
;   undefined4 DAT_02641c2c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551cb0
        ;   Label: FUN_00551cb0
    PUSH ESI                            ; 00551cb1
    PUSH EDI                            ; 00551cb2
    PUSH EBP                            ; 00551cb3
    MOV EDI,dword ptr [ESP + 0x28]      ; 00551cb4
    XOR EBX,EBX                         ; 00551cb8
    XOR ECX,ECX                         ; 00551cba
    XOR ESI,ESI                         ; 00551cbc
    XOR EAX,EAX                         ; 00551cbe
    XOR EDX,EDX                         ; 00551cc0
    CMP dword ptr [EAX + 0x2641a88],0x1 ; 00551cc2
        ;   Label: LAB_00551cc2
    JGE 0x00551d33                      ; 00551cc9
        ;   XREF to: 00551d33 (CONDITIONAL_JUMP)  ; LAB_00551d33
    ADD EAX,0x1ac                       ; 00551ccf
        ;   Label: LAB_00551ccf
    CMP EAX,0x6b00                      ; 00551cd4
    JNZ 0x00551cc2                      ; 00551cd9
        ;   XREF to: 00551cc2 (CONDITIONAL_JUMP)  ; LAB_00551cc2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00551cdb
    TEST EAX,EAX                        ; 00551cdf
    JZ 0x00551ce5                       ; 00551ce1
        ;   XREF to: 00551ce5 (CONDITIONAL_JUMP)  ; LAB_00551ce5
    MOV dword ptr [EAX],EDX             ; 00551ce3
    MOV EBP,dword ptr [ESP + 0x18]      ; 00551ce5
        ;   Label: LAB_00551ce5
    TEST EBP,EBP                        ; 00551ce9
    JZ 0x00551cf0                       ; 00551ceb
        ;   XREF to: 00551cf0 (CONDITIONAL_JUMP)  ; LAB_00551cf0
    MOV dword ptr [EBP],EBX             ; 00551ced
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00551cf0
        ;   Label: LAB_00551cf0
    TEST EAX,EAX                        ; 00551cf4
    JZ 0x00551cfa                       ; 00551cf6
        ;   XREF to: 00551cfa (CONDITIONAL_JUMP)  ; LAB_00551cfa
    MOV dword ptr [EAX],ECX             ; 00551cf8
    MOV EBP,dword ptr [ESP + 0x20]      ; 00551cfa
        ;   Label: LAB_00551cfa
    TEST EBP,EBP                        ; 00551cfe
    JZ 0x00551d05                       ; 00551d00
        ;   XREF to: 00551d05 (CONDITIONAL_JUMP)  ; LAB_00551d05
    MOV dword ptr [EBP],ESI             ; 00551d02
    CMP dword ptr [ESP + 0x24],0x0      ; 00551d05
        ;   Label: LAB_00551d05
    JZ 0x00551d1b                       ; 00551d0a
        ;   XREF to: 00551d1b (CONDITIONAL_JUMP)  ; LAB_00551d1b
    MOV EAX,0x40                        ; 00551d0c
    ADD EDX,ECX                         ; 00551d11
    SUB EAX,EDX                         ; 00551d13
    MOV EDX,dword ptr [ESP + 0x24]      ; 00551d15
    MOV dword ptr [EDX],EAX             ; 00551d19
    TEST EDI,EDI                        ; 00551d1b
        ;   Label: LAB_00551d1b
    JZ 0x00551d2e                       ; 00551d1d
        ;   XREF to: 00551d2e (CONDITIONAL_JUMP)  ; LAB_00551d2e
    MOV EAX,[0x0061bcc0]                ; 00551d1f | DAT_0061bcc0
    ADD EBX,ESI                         ; 00551d24
    SUB EAX,EBX                         ; 00551d26 | IMAGE_DOS_HEADER_00400000
    MOV dword ptr [EDI],EAX             ; 00551d28 | IMAGE_DOS_HEADER_00400000
    TEST EAX,EAX                        ; 00551d2a
    JL 0x00551d67                       ; 00551d2c
        ;   XREF to: 00551d67 (CONDITIONAL_JUMP)  ; LAB_00551d67
    POP EBP                             ; 00551d2e
        ;   Label: LAB_00551d2e
    POP EDI                             ; 00551d2f
    POP ESI                             ; 00551d30
    POP EBX                             ; 00551d31
    RET                                 ; 00551d32
    CMP dword ptr [EAX + 0x2641a78],0x0 ; 00551d33 | DAT_02641c24
        ;   Label: LAB_00551d33
    JZ 0x00551d47                       ; 00551d3a
        ;   XREF to: 00551d47 (CONDITIONAL_JUMP)  ; LAB_00551d47
    MOV EBP,dword ptr [EAX + 0x2641a8c] ; 00551d3c
        ;   Label: LAB_00551d3c
    INC EDX                             ; 00551d42
    ADD EBX,EBP                         ; 00551d43
    JMP 0x00551ccf                      ; 00551d45
        ;   XREF to: 00551ccf (UNCONDITIONAL_JUMP)  ; LAB_00551ccf
    CMP dword ptr [EAX + 0x2641a74],0x0 ; 00551d47 | DAT_02641c20
        ;   Label: LAB_00551d47
    JNZ 0x00551d3c                      ; 00551d4e
        ;   XREF to: 00551d3c (CONDITIONAL_JUMP)  ; LAB_00551d3c
    CMP dword ptr [EAX + 0x2641a80],0x0 ; 00551d50 | DAT_02641c2c
    JNZ 0x00551d3c                      ; 00551d57
        ;   XREF to: 00551d3c (CONDITIONAL_JUMP)  ; LAB_00551d3c
    MOV EBP,dword ptr [EAX + 0x2641a8c] ; 00551d59
    INC ECX                             ; 00551d5f
    ADD ESI,EBP                         ; 00551d60
    JMP 0x00551ccf                      ; 00551d62
        ;   XREF to: 00551ccf (UNCONDITIONAL_JUMP)  ; LAB_00551ccf
    MOV dword ptr [EDI],0x0             ; 00551d67
        ;   Label: LAB_00551d67
    POP EBP                             ; 00551d6d
    POP EDI                             ; 00551d6e
    POP ESI                             ; 00551d6f
    POP EBX                             ; 00551d70
    RET                                 ; 00551d71

