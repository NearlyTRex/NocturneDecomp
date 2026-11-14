; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flashlit_cpp_FUN_004b9d10(byte *param_1,byte *param_2,byte *param_3)
;
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005c12b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9d10
        ;   Label: core_flashlit.cpp_FUN_004b9d10
    PUSH ESI                            ; 004b9d11
    PUSH EDI                            ; 004b9d12
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b9d13
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b9d17
    MOV AL,byte ptr [ESI]               ; 004b9d1b
        ;   Label: LAB_004b9d1b
    INC AL                              ; 004b9d1d
    AND EAX,0xff                        ; 004b9d1f
    TEST byte ptr [EAX + 0x626114],0x2  ; 004b9d24
    JZ 0x004b9d30                       ; 004b9d2b
        ;   XREF to: 004b9d30 (CONDITIONAL_JUMP)  ; LAB_004b9d30
    INC ESI                             ; 004b9d2d
    JMP 0x004b9d1b                      ; 004b9d2e
        ;   XREF to: 004b9d1b (UNCONDITIONAL_JUMP)  ; LAB_004b9d1b
    CMP byte ptr [ESI],0x5c             ; 004b9d30
        ;   Label: LAB_004b9d30
    JNZ 0x004b9d7a                      ; 004b9d33
        ;   XREF to: 004b9d7a (CONDITIONAL_JUMP)  ; LAB_004b9d7a
    MOV CL,byte ptr [EBX]               ; 004b9d35
    INC ESI                             ; 004b9d37
    TEST CL,CL                          ; 004b9d38
    JZ 0x004b9d65                       ; 004b9d3a
        ;   XREF to: 004b9d65 (CONDITIONAL_JUMP)  ; LAB_004b9d65
    XOR EAX,EAX                         ; 004b9d3c
        ;   Label: LAB_004b9d3c
    MOV AL,byte ptr [ESI]               ; 004b9d3e
    PUSH EAX                            ; 004b9d40
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004b9d41
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    MOV EDI,EAX                         ; 004b9d46
    XOR EAX,EAX                         ; 004b9d48
    ADD ESP,0x4                         ; 004b9d4a
    MOV AL,byte ptr [EBX]               ; 004b9d4d
    PUSH EAX                            ; 004b9d4f
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004b9d50
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004b9d55
    CMP EDI,EAX                         ; 004b9d58
    JNZ 0x004b9d7a                      ; 004b9d5a
        ;   XREF to: 004b9d7a (CONDITIONAL_JUMP)  ; LAB_004b9d7a
    INC ESI                             ; 004b9d5c
    MOV CH,byte ptr [EBX + 0x1]         ; 004b9d5d
    INC EBX                             ; 004b9d60
    TEST CH,CH                          ; 004b9d61
    JNZ 0x004b9d3c                      ; 004b9d63
        ;   XREF to: 004b9d3c (CONDITIONAL_JUMP)  ; LAB_004b9d3c
    MOV AL,byte ptr [ESI]               ; 004b9d65
        ;   Label: LAB_004b9d65
    INC AL                              ; 004b9d67
    AND EAX,0xff                        ; 004b9d69
    TEST byte ptr [EAX + 0x626114],0x2  ; 004b9d6e
    JZ 0x004b9d80                       ; 004b9d75
        ;   XREF to: 004b9d80 (CONDITIONAL_JUMP)  ; LAB_004b9d80
    INC ESI                             ; 004b9d77
    JMP 0x004b9d65                      ; 004b9d78
        ;   XREF to: 004b9d65 (UNCONDITIONAL_JUMP)  ; LAB_004b9d65
    XOR EAX,EAX                         ; 004b9d7a
        ;   Label: LAB_004b9d7a
    POP EDI                             ; 004b9d7c
    POP ESI                             ; 004b9d7d
    POP EBX                             ; 004b9d7e
    RET                                 ; 004b9d7f
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b9d80
        ;   Label: LAB_004b9d80
    PUSH EDI                            ; 004b9d84
    MOV AL,byte ptr [ESI]               ; 004b9d85
        ;   Label: LAB_004b9d85
    MOV byte ptr [EDI],AL               ; 004b9d87
    CMP AL,0x0                          ; 004b9d89
    JZ 0x004b9d9d                       ; 004b9d8b
        ;   XREF to: 004b9d9d (CONDITIONAL_JUMP)  ; LAB_004b9d9d
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9d8d
    ADD ESI,0x2                         ; 004b9d90
    MOV byte ptr [EDI + 0x1],AL         ; 004b9d93
    ADD EDI,0x2                         ; 004b9d96
    CMP AL,0x0                          ; 004b9d99
    JNZ 0x004b9d85                      ; 004b9d9b
        ;   XREF to: 004b9d85 (CONDITIONAL_JUMP)  ; LAB_004b9d85
    POP EDI                             ; 004b9d9d
        ;   Label: LAB_004b9d9d
    MOV EAX,0x1                         ; 004b9d9e
    POP EDI                             ; 004b9da3
    POP ESI                             ; 004b9da4
    POP EBX                             ; 004b9da5
    RET                                 ; 004b9da6

