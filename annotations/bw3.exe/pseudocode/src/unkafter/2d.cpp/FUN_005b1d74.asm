; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005b1d74(short *param_1,int param_2)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b1bd4 at 005b1c80
;
; Referenced Globals:
;   undefined4 DAT_02d25920
;   undefined4 DAT_02d25928
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;   crt_unknown.c_FUN_005a3770
;   unkafter_2d.cpp_FUN_005b2060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1d74
        ;   Label: unkafter_2d.cpp_FUN_005b1d74
    PUSH ESI                            ; 005b1d75
    PUSH EDI                            ; 005b1d76
    PUSH EBP                            ; 005b1d77
    MOV EBP,dword ptr [0x02d25928]      ; 005b1d78 | DAT_02d25928
    JMP 0x005b1e68                      ; 005b1d7e
        ;   XREF to: 005b1e68 (UNCONDITIONAL_JUMP)  ; LAB_005b1e68
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b1d83
        ;   Label: LAB_005b1d83
    CMP word ptr [ESI],0x0              ; 005b1d87
    JZ 0x005b1e65                       ; 005b1d8b
        ;   XREF to: 005b1e65 (CONDITIONAL_JUMP)  ; LAB_005b1e65
    XOR EAX,EAX                         ; 005b1d91
        ;   Label: LAB_005b1d91
    MOV AX,word ptr [EBX]               ; 005b1d93
    PUSH EAX                            ; 005b1d96
    CALL unkafter_2d.cpp_FUN_005b2060   ; 005b1d97
        ;   XREF to: 005b2060 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b2060()
    MOV EDI,EAX                         ; 005b1d9c
    XOR EAX,EAX                         ; 005b1d9e
    ADD ESP,0x4                         ; 005b1da0
    MOV AX,word ptr [ESI]               ; 005b1da3
    PUSH EAX                            ; 005b1da6
    CALL unkafter_2d.cpp_FUN_005b2060   ; 005b1da7
        ;   XREF to: 005b2060 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b2060()
    ADD ESP,0x4                         ; 005b1dac
    CMP DI,AX                           ; 005b1daf
    JNZ 0x005b1e65                      ; 005b1db2
        ;   XREF to: 005b1e65 (CONDITIONAL_JUMP)  ; LAB_005b1e65
    CMP word ptr [EBX],0x3d             ; 005b1db8
    JNZ 0x005b1e52                      ; 005b1dbc
        ;   XREF to: 005b1e52 (CONDITIONAL_JUMP)  ; LAB_005b1e52
    MOV EDX,dword ptr [0x02d25928]      ; 005b1dc2 | DAT_02d25928
    MOV ESI,EBP                         ; 005b1dc8
    SUB ESI,EDX                         ; 005b1dca
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b1dcc
    SAR ESI,0x2                         ; 005b1dd0
    TEST EBX,EBX                        ; 005b1dd3
    JZ 0x005b1e4a                       ; 005b1dd5
        ;   XREF to: 005b1e4a (CONDITIONAL_JUMP)  ; LAB_005b1e4a
    MOV EDX,dword ptr [EBP]             ; 005b1ddb
    MOV EBX,EBP                         ; 005b1dde
    TEST EDX,EDX                        ; 005b1de0
    JZ 0x005b1df3                       ; 005b1de2
        ;   XREF to: 005b1df3 (CONDITIONAL_JUMP)  ; LAB_005b1df3
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b1de4
        ;   Label: LAB_005b1de4
    MOV dword ptr [EBX],EAX             ; 005b1de7
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b1de9
    ADD EBX,0x4                         ; 005b1dec
    TEST ECX,ECX                        ; 005b1def
    JNZ 0x005b1de4                      ; 005b1df1
        ;   XREF to: 005b1de4 (CONDITIONAL_JUMP)  ; LAB_005b1de4
    MOV EDI,dword ptr [0x02d25920]      ; 005b1df3 | DAT_02d25920
        ;   Label: LAB_005b1df3
    TEST EDI,EDI                        ; 005b1df9
    JZ 0x005b1e43                       ; 005b1dfb
        ;   XREF to: 005b1e43 (CONDITIONAL_JUMP)  ; LAB_005b1e43
    MOV EAX,EDI                         ; 005b1dfd
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 005b1dff
    JZ 0x005b1e0e                       ; 005b1e03
        ;   XREF to: 005b1e0e (CONDITIONAL_JUMP)  ; LAB_005b1e0e
    PUSH EDX                            ; 005b1e05
    CALL crt_unknown.c_FUN_005a3770     ; 005b1e06
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005b1e0b
    MOV EAX,[0x02d25928]                ; 005b1e0e | DAT_02d25928
        ;   Label: LAB_005b1e0e
    MOV EBP,EBX                         ; 005b1e13
    SUB EBP,EAX                         ; 005b1e15
    SAR EBP,0x2                         ; 005b1e17
    PUSH EBP                            ; 005b1e1a
    MOV EDX,dword ptr [0x02d25920]      ; 005b1e1b | DAT_02d25920
    PUSH EDX                            ; 005b1e21
    PUSH EBX                            ; 005b1e22
    CALL crt_string.c_memmove_FUN_005a54c0 ; 005b1e23
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005b1e28
    MOV dword ptr [0x02d25920],EBX      ; 005b1e2b | DAT_02d25920
    CMP ESI,EBP                         ; 005b1e31
    JGE 0x005b1e43                      ; 005b1e33
        ;   XREF to: 005b1e43 (CONDITIONAL_JUMP)  ; LAB_005b1e43
    LEA EAX,[ESI + EBX*0x1]             ; 005b1e35
    INC EAX                             ; 005b1e38
        ;   Label: LAB_005b1e38
    MOV BL,byte ptr [EAX]               ; 005b1e39
    INC ESI                             ; 005b1e3b
    MOV byte ptr [EAX + -0x1],BL        ; 005b1e3c
    CMP ESI,EBP                         ; 005b1e3f
    JL 0x005b1e38                       ; 005b1e41
        ;   XREF to: 005b1e38 (CONDITIONAL_JUMP)  ; LAB_005b1e38
    XOR EAX,EAX                         ; 005b1e43
        ;   Label: LAB_005b1e43
    POP EBP                             ; 005b1e45
    POP EDI                             ; 005b1e46
    POP ESI                             ; 005b1e47
    POP EBX                             ; 005b1e48
    RET                                 ; 005b1e49
    LEA EAX,[ESI + 0x1]                 ; 005b1e4a
        ;   Label: LAB_005b1e4a
    POP EBP                             ; 005b1e4d
    POP EDI                             ; 005b1e4e
    POP ESI                             ; 005b1e4f
    POP EBX                             ; 005b1e50
    RET                                 ; 005b1e51
    ADD EBX,0x2                         ; 005b1e52
        ;   Label: LAB_005b1e52
    MOV CX,word ptr [ESI + 0x2]         ; 005b1e55
    ADD ESI,0x2                         ; 005b1e59
    TEST CX,CX                          ; 005b1e5c
    JNZ 0x005b1d91                      ; 005b1e5f
        ;   XREF to: 005b1d91 (CONDITIONAL_JUMP)  ; LAB_005b1d91
    ADD EBP,0x4                         ; 005b1e65
        ;   Label: LAB_005b1e65
    MOV EBX,dword ptr [EBP]             ; 005b1e68
        ;   Label: LAB_005b1e68
    TEST EBX,EBX                        ; 005b1e6b
    JNZ 0x005b1d83                      ; 005b1e6d
        ;   XREF to: 005b1d83 (CONDITIONAL_JUMP)  ; LAB_005b1d83
    MOV EAX,[0x02d25928]                ; 005b1e73 | DAT_02d25928
    SUB EAX,EBP                         ; 005b1e78
    SAR EAX,0x2                         ; 005b1e7a
    POP EBP                             ; 005b1e7d
    POP EDI                             ; 005b1e7e
    POP ESI                             ; 005b1e7f
    POP EBX                             ; 005b1e80
    RET                                 ; 005b1e81

