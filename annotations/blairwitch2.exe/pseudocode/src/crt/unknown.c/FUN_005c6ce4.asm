; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c6ce4(short *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c6b44 at 005c6bf0
;
; Referenced Globals:
;   undefined4 DAT_026807e0
;   undefined4 DAT_026807e8
;
; Called Functions:
;   crt_string.c_memmove_FUN_005ba1f0
;   crt_unknown.c_FUN_005b86a0
;   crt_unknown.c_FUN_005c6fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6ce4
        ;   Label: crt_unknown.c_FUN_005c6ce4
    PUSH ESI                            ; 005c6ce5
    PUSH EDI                            ; 005c6ce6
    PUSH EBP                            ; 005c6ce7
    MOV EBP,dword ptr [0x026807e8]      ; 005c6ce8 | DAT_026807e8
    JMP 0x005c6dd8                      ; 005c6cee
        ;   XREF to: 005c6dd8 (UNCONDITIONAL_JUMP)  ; LAB_005c6dd8
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c6cf3
        ;   Label: LAB_005c6cf3
    CMP word ptr [ESI],0x0              ; 005c6cf7
    JZ 0x005c6dd5                       ; 005c6cfb
        ;   XREF to: 005c6dd5 (CONDITIONAL_JUMP)  ; LAB_005c6dd5
    XOR EAX,EAX                         ; 005c6d01
        ;   Label: LAB_005c6d01
    MOV AX,word ptr [EBX]               ; 005c6d03
    PUSH EAX                            ; 005c6d06
    CALL crt_unknown.c_FUN_005c6fd0     ; 005c6d07
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6fd0()
    MOV EDI,EAX                         ; 005c6d0c
    XOR EAX,EAX                         ; 005c6d0e
    ADD ESP,0x4                         ; 005c6d10
    MOV AX,word ptr [ESI]               ; 005c6d13
    PUSH EAX                            ; 005c6d16
    CALL crt_unknown.c_FUN_005c6fd0     ; 005c6d17
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6fd0()
    ADD ESP,0x4                         ; 005c6d1c
    CMP DI,AX                           ; 005c6d1f
    JNZ 0x005c6dd5                      ; 005c6d22
        ;   XREF to: 005c6dd5 (CONDITIONAL_JUMP)  ; LAB_005c6dd5
    CMP word ptr [EBX],0x3d             ; 005c6d28
    JNZ 0x005c6dc2                      ; 005c6d2c
        ;   XREF to: 005c6dc2 (CONDITIONAL_JUMP)  ; LAB_005c6dc2
    MOV EDX,dword ptr [0x026807e8]      ; 005c6d32 | DAT_026807e8
    MOV ESI,EBP                         ; 005c6d38
    SUB ESI,EDX                         ; 005c6d3a
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c6d3c
    SAR ESI,0x2                         ; 005c6d40
    TEST EBX,EBX                        ; 005c6d43
    JZ 0x005c6dba                       ; 005c6d45
        ;   XREF to: 005c6dba (CONDITIONAL_JUMP)  ; LAB_005c6dba
    MOV EDX,dword ptr [EBP]             ; 005c6d4b
    MOV EBX,EBP                         ; 005c6d4e
    TEST EDX,EDX                        ; 005c6d50
    JZ 0x005c6d63                       ; 005c6d52
        ;   XREF to: 005c6d63 (CONDITIONAL_JUMP)  ; LAB_005c6d63
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c6d54
        ;   Label: LAB_005c6d54
    MOV dword ptr [EBX],EAX             ; 005c6d57
    MOV ECX,dword ptr [EBX + 0x4]       ; 005c6d59
    ADD EBX,0x4                         ; 005c6d5c
    TEST ECX,ECX                        ; 005c6d5f
    JNZ 0x005c6d54                      ; 005c6d61
        ;   XREF to: 005c6d54 (CONDITIONAL_JUMP)  ; LAB_005c6d54
    MOV EDI,dword ptr [0x026807e0]      ; 005c6d63 | DAT_026807e0
        ;   Label: LAB_005c6d63
    TEST EDI,EDI                        ; 005c6d69
    JZ 0x005c6db3                       ; 005c6d6b
        ;   XREF to: 005c6db3 (CONDITIONAL_JUMP)  ; LAB_005c6db3
    MOV EAX,EDI                         ; 005c6d6d
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 005c6d6f
    JZ 0x005c6d7e                       ; 005c6d73
        ;   XREF to: 005c6d7e (CONDITIONAL_JUMP)  ; LAB_005c6d7e
    PUSH EDX                            ; 005c6d75
    CALL crt_unknown.c_FUN_005b86a0     ; 005c6d76
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005c6d7b
    MOV EAX,[0x026807e8]                ; 005c6d7e | DAT_026807e8
        ;   Label: LAB_005c6d7e
    MOV EBP,EBX                         ; 005c6d83
    SUB EBP,EAX                         ; 005c6d85
    SAR EBP,0x2                         ; 005c6d87
    PUSH EBP                            ; 005c6d8a
    MOV EDX,dword ptr [0x026807e0]      ; 005c6d8b | DAT_026807e0
    PUSH EDX                            ; 005c6d91
    PUSH EBX                            ; 005c6d92
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 005c6d93
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005c6d98
    MOV dword ptr [0x026807e0],EBX      ; 005c6d9b | DAT_026807e0
    CMP ESI,EBP                         ; 005c6da1
    JGE 0x005c6db3                      ; 005c6da3
        ;   XREF to: 005c6db3 (CONDITIONAL_JUMP)  ; LAB_005c6db3
    LEA EAX,[ESI + EBX*0x1]             ; 005c6da5
    INC EAX                             ; 005c6da8
        ;   Label: LAB_005c6da8
    MOV BL,byte ptr [EAX]               ; 005c6da9
    INC ESI                             ; 005c6dab
    MOV byte ptr [EAX + -0x1],BL        ; 005c6dac
    CMP ESI,EBP                         ; 005c6daf
    JL 0x005c6da8                       ; 005c6db1
        ;   XREF to: 005c6da8 (CONDITIONAL_JUMP)  ; LAB_005c6da8
    XOR EAX,EAX                         ; 005c6db3
        ;   Label: LAB_005c6db3
    POP EBP                             ; 005c6db5
    POP EDI                             ; 005c6db6
    POP ESI                             ; 005c6db7
    POP EBX                             ; 005c6db8
    RET                                 ; 005c6db9
    LEA EAX,[ESI + 0x1]                 ; 005c6dba
        ;   Label: LAB_005c6dba
    POP EBP                             ; 005c6dbd
    POP EDI                             ; 005c6dbe
    POP ESI                             ; 005c6dbf
    POP EBX                             ; 005c6dc0
    RET                                 ; 005c6dc1
    ADD EBX,0x2                         ; 005c6dc2
        ;   Label: LAB_005c6dc2
    MOV CX,word ptr [ESI + 0x2]         ; 005c6dc5
    ADD ESI,0x2                         ; 005c6dc9
    TEST CX,CX                          ; 005c6dcc
    JNZ 0x005c6d01                      ; 005c6dcf
        ;   XREF to: 005c6d01 (CONDITIONAL_JUMP)  ; LAB_005c6d01
    ADD EBP,0x4                         ; 005c6dd5
        ;   Label: LAB_005c6dd5
    MOV EBX,dword ptr [EBP]             ; 005c6dd8
        ;   Label: LAB_005c6dd8
    TEST EBX,EBX                        ; 005c6ddb
    JNZ 0x005c6cf3                      ; 005c6ddd
        ;   XREF to: 005c6cf3 (CONDITIONAL_JUMP)  ; LAB_005c6cf3
    MOV EAX,[0x026807e8]                ; 005c6de3 | DAT_026807e8
    SUB EAX,EBP                         ; 005c6de8
    SAR EAX,0x2                         ; 005c6dea
    POP EBP                             ; 005c6ded
    POP EDI                             ; 005c6dee
    POP ESI                             ; 005c6def
    POP EBX                             ; 005c6df0
    RET                                 ; 005c6df1

