; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00573ca0(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00573afc at 00573b98
;
; Referenced Globals:
;   undefined4 DAT_02de54a0
;   undefined4 DAT_02de54a4
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_00565e20
;   crt_string.c_memmove_FUN_00566170
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573ca0
        ;   Label: FUN_00573ca0
    PUSH ESI                            ; 00573ca1
    PUSH EDI                            ; 00573ca2
    PUSH EBP                            ; 00573ca3
    MOV EBP,dword ptr [0x02de54a4]      ; 00573ca4 | DAT_02de54a4
    JMP 0x00573d89                      ; 00573caa
        ;   XREF to: 00573d89 (UNCONDITIONAL_JUMP)  ; LAB_00573d89
    MOV ESI,dword ptr [ESP + 0x14]      ; 00573caf
        ;   Label: LAB_00573caf
    CMP byte ptr [ESI],0x0              ; 00573cb3
    JZ 0x00573d86                       ; 00573cb6
        ;   XREF to: 00573d86 (CONDITIONAL_JUMP)  ; LAB_00573d86
    XOR EAX,EAX                         ; 00573cbc
        ;   Label: LAB_00573cbc
    MOV AL,byte ptr [EBX]               ; 00573cbe
    PUSH EAX                            ; 00573cc0
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 00573cc1
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    MOV EDI,EAX                         ; 00573cc6
    XOR EAX,EAX                         ; 00573cc8
    ADD ESP,0x4                         ; 00573cca
    MOV AL,byte ptr [ESI]               ; 00573ccd
    PUSH EAX                            ; 00573ccf
    CALL crt_ctype.c_toupper_FUN_00565e20 ; 00573cd0
        ;   XREF to: 00565e20 (UNCONDITIONAL_CALL)  ; undefined crt_ctype.c_toupper_FUN_00565e20()
    ADD ESP,0x4                         ; 00573cd5
    CMP EDI,EAX                         ; 00573cd8
    JNZ 0x00573d86                      ; 00573cda
        ;   XREF to: 00573d86 (CONDITIONAL_JUMP)  ; LAB_00573d86
    CMP byte ptr [EBX],0x3d             ; 00573ce0
    JNZ 0x00573d79                      ; 00573ce3
        ;   XREF to: 00573d79 (CONDITIONAL_JUMP)  ; LAB_00573d79
    MOV EDX,dword ptr [0x02de54a4]      ; 00573ce9 | DAT_02de54a4
    MOV ESI,EBP                         ; 00573cef
    SUB ESI,EDX                         ; 00573cf1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00573cf3
    SAR ESI,0x2                         ; 00573cf7
    TEST EBX,EBX                        ; 00573cfa
    JZ 0x00573d71                       ; 00573cfc
        ;   XREF to: 00573d71 (CONDITIONAL_JUMP)  ; LAB_00573d71
    MOV EDI,dword ptr [EBP]             ; 00573d02
    MOV EBX,EBP                         ; 00573d05
    TEST EDI,EDI                        ; 00573d07
    JZ 0x00573d1a                       ; 00573d09
        ;   XREF to: 00573d1a (CONDITIONAL_JUMP)  ; LAB_00573d1a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00573d0b
        ;   Label: LAB_00573d0b
    MOV dword ptr [EBX],EAX             ; 00573d0e
    MOV ECX,dword ptr [EBX + 0x4]       ; 00573d10
    ADD EBX,0x4                         ; 00573d13
    TEST ECX,ECX                        ; 00573d16
    JNZ 0x00573d0b                      ; 00573d18
        ;   XREF to: 00573d0b (CONDITIONAL_JUMP)  ; LAB_00573d0b
    MOV EBP,dword ptr [0x02de54a0]      ; 00573d1a | DAT_02de54a0
        ;   Label: LAB_00573d1a
    TEST EBP,EBP                        ; 00573d20
    JZ 0x00573d6a                       ; 00573d22
        ;   XREF to: 00573d6a (CONDITIONAL_JUMP)  ; LAB_00573d6a
    MOV EAX,EBP                         ; 00573d24
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 00573d26
    JZ 0x00573d35                       ; 00573d2a
        ;   XREF to: 00573d35 (CONDITIONAL_JUMP)  ; LAB_00573d35
    PUSH EDI                            ; 00573d2c
    CALL crt_unknown.c_FUN_005638d0     ; 00573d2d
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00573d32
    MOV EAX,[0x02de54a4]                ; 00573d35 | DAT_02de54a4
        ;   Label: LAB_00573d35
    MOV EDI,EBX                         ; 00573d3a
    SUB EDI,EAX                         ; 00573d3c
    SAR EDI,0x2                         ; 00573d3e
    PUSH EDI                            ; 00573d41
    MOV EDX,dword ptr [0x02de54a0]      ; 00573d42 | DAT_02de54a0
    PUSH EDX                            ; 00573d48
    PUSH EBX                            ; 00573d49
    CALL crt_string.c_memmove_FUN_00566170 ; 00573d4a
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 00573d4f
    MOV dword ptr [0x02de54a0],EBX      ; 00573d52 | DAT_02de54a0
    CMP ESI,EDI                         ; 00573d58
    JGE 0x00573d6a                      ; 00573d5a
        ;   XREF to: 00573d6a (CONDITIONAL_JUMP)  ; LAB_00573d6a
    LEA EAX,[ESI + EBX*0x1]             ; 00573d5c
    INC EAX                             ; 00573d5f
        ;   Label: LAB_00573d5f
    MOV BL,byte ptr [EAX]               ; 00573d60
    INC ESI                             ; 00573d62
    MOV byte ptr [EAX + -0x1],BL        ; 00573d63
    CMP ESI,EDI                         ; 00573d66
    JL 0x00573d5f                       ; 00573d68
        ;   XREF to: 00573d5f (CONDITIONAL_JUMP)  ; LAB_00573d5f
    XOR EAX,EAX                         ; 00573d6a
        ;   Label: LAB_00573d6a
    POP EBP                             ; 00573d6c
    POP EDI                             ; 00573d6d
    POP ESI                             ; 00573d6e
    POP EBX                             ; 00573d6f
    RET                                 ; 00573d70
    LEA EAX,[ESI + 0x1]                 ; 00573d71
        ;   Label: LAB_00573d71
    POP EBP                             ; 00573d74
    POP EDI                             ; 00573d75
    POP ESI                             ; 00573d76
    POP EBX                             ; 00573d77
    RET                                 ; 00573d78
    INC EBX                             ; 00573d79
        ;   Label: LAB_00573d79
    MOV DH,byte ptr [ESI + 0x1]         ; 00573d7a
    INC ESI                             ; 00573d7d
    TEST DH,DH                          ; 00573d7e
    JNZ 0x00573cbc                      ; 00573d80
        ;   XREF to: 00573cbc (CONDITIONAL_JUMP)  ; LAB_00573cbc
    ADD EBP,0x4                         ; 00573d86
        ;   Label: LAB_00573d86
    MOV EBX,dword ptr [EBP]             ; 00573d89
        ;   Label: LAB_00573d89
    TEST EBX,EBX                        ; 00573d8c
    JNZ 0x00573caf                      ; 00573d8e
        ;   XREF to: 00573caf (CONDITIONAL_JUMP)  ; LAB_00573caf
    MOV EAX,[0x02de54a4]                ; 00573d94 | DAT_02de54a4
    SUB EAX,EBP                         ; 00573d99
    SAR EAX,0x2                         ; 00573d9b
    POP EBP                             ; 00573d9e
    POP EDI                             ; 00573d9f
    POP ESI                             ; 00573da0
    POP EBX                             ; 00573da1
    RET                                 ; 00573da2

