; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_winfont_cpp_FUN_005b1c50(int param_1,undefined4 param_2,LPCSTR param_3,int param_4,int param_5,undefined4 param_6)
;
;
; XREF[1]:
;   engine_winfont.cpp_CWinFont_drawText_FUN_005b1c00 at 005b1c3d
;
; Referenced Globals:
;   void* PTR_SetTextColor_005d0430 = 001d089e
;   void* PTR_TextOutA_005d0434 = 001d08ae
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;
; Called Functions:
;   SetTextColor
;   TextOutA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1c50
        ;   Label: engine_winfont.cpp_FUN_005b1c50
    PUSH ESI                            ; 005b1c51
    PUSH EDI                            ; 005b1c52
    PUSH EBP                            ; 005b1c53
    SUB ESP,0x1c                        ; 005b1c54
    MOV EBX,dword ptr [ESP + 0x30]      ; 005b1c57
    MOV ESI,dword ptr [ESP + 0x38]      ; 005b1c5b
    LEA EDI,[EBX + 0x6a5c]              ; 005b1c5f
    MOV EDX,dword ptr [ESP + 0x38]      ; 005b1c65
    PUSH EDI                            ; 005b1c69
    MOV AL,byte ptr [ESI]               ; 005b1c6a
        ;   Label: LAB_005b1c6a
    MOV byte ptr [EDI],AL               ; 005b1c6c
    CMP AL,0x0                          ; 005b1c6e
    JZ 0x005b1c82                       ; 005b1c70
        ;   XREF to: 005b1c82 (CONDITIONAL_JUMP)  ; LAB_005b1c82
    MOV AL,byte ptr [ESI + 0x1]         ; 005b1c72
    ADD ESI,0x2                         ; 005b1c75
    MOV byte ptr [EDI + 0x1],AL         ; 005b1c78
    ADD EDI,0x2                         ; 005b1c7b
    CMP AL,0x0                          ; 005b1c7e
    JNZ 0x005b1c6a                      ; 005b1c80
        ;   XREF to: 005b1c6a (CONDITIONAL_JUMP)  ; LAB_005b1c6a
    POP EDI                             ; 005b1c82
        ;   Label: LAB_005b1c82
    PUSH EDX                            ; 005b1c83
    MOV EAX,dword ptr [EBX + 0x6a44]    ; 005b1c84
    PUSH EBX                            ; 005b1c8a
    CALL dword ptr [EAX + 0x8]          ; 005b1c8b
    ADD ESP,0x8                         ; 005b1c8e
    MOV ECX,dword ptr [ESP + 0x38]      ; 005b1c91
    MOV dword ptr [EBX + 0x6b5c],EAX    ; 005b1c95
    PUSH ECX                            ; 005b1c9b
    MOV EAX,dword ptr [EBX + 0x6a44]    ; 005b1c9c
    PUSH EBX                            ; 005b1ca2
    CALL dword ptr [EAX + 0xc]          ; 005b1ca3
    ADD ESP,0x8                         ; 005b1ca6
    MOV dword ptr [EBX + 0x6b60],EAX    ; 005b1ca9
    SUB ECX,ECX                         ; 005b1caf
    DEC ECX                             ; 005b1cb1
    XOR EAX,EAX                         ; 005b1cb2
    SCASB.REPNE ES:EDI                  ; 005b1cb4
    NOT ECX                             ; 005b1cb6
    DEC ECX                             ; 005b1cb8
    PUSH 0x0                            ; 005b1cb9
    MOV EDI,dword ptr [EBX + 0x6a48]    ; 005b1cbb
    PUSH EDI                            ; 005b1cc1
    MOV ESI,ECX                         ; 005b1cc2
    CALL dword ptr CS:[0x5d0430]        ; 005b1cc4 | PTR_SetTextColor_005d0430
    PUSH ESI                            ; 005b1ccb
    MOV EBP,dword ptr [ESP + 0x3c]      ; 005b1ccc
    PUSH EBP                            ; 005b1cd0
    PUSH 0x0                            ; 005b1cd1
    PUSH 0x0                            ; 005b1cd3
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 005b1cd5
    PUSH EAX                            ; 005b1cdb
    CALL dword ptr CS:[0x5d0434]        ; 005b1cdc | PTR_TextOutA_005d0434
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005b1ce3
    MOV EAX,dword ptr [EBX + 0x6b64]    ; 005b1ce7
    MOV ECX,dword ptr [0x0061b498]      ; 005b1ced | DAT_0061b498
    ADD EAX,EDX                         ; 005b1cf3
    CMP EAX,ECX                         ; 005b1cf5
    JL 0x005b1d9d                       ; 005b1cf7
        ;   XREF to: 005b1d9d (CONDITIONAL_JUMP)  ; LAB_005b1d9d
    SUB ECX,EDX                         ; 005b1cfd
    MOV EDI,dword ptr [ESP + 0x40]      ; 005b1cff
        ;   Label: LAB_005b1cff
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 005b1d03
    MOV EBP,dword ptr [0x0061b49c]      ; 005b1d09 | DAT_0061b49c
    ADD EAX,EDI                         ; 005b1d0f
    CMP EAX,EBP                         ; 005b1d11
    JL 0x005b1da8                       ; 005b1d13
        ;   XREF to: 005b1da8 (CONDITIONAL_JUMP)  ; LAB_005b1da8
    MOV EAX,EBP                         ; 005b1d19
    SUB EAX,EDI                         ; 005b1d1b
    MOV ESI,dword ptr [EBX + 0x6b5c]    ; 005b1d1d
        ;   Label: LAB_005b1d1d
    MOV dword ptr [ESP],EAX             ; 005b1d23
    CMP ECX,ESI                         ; 005b1d26
    JLE 0x005b1d2c                      ; 005b1d28
        ;   XREF to: 005b1d2c (CONDITIONAL_JUMP)  ; LAB_005b1d2c
    MOV ECX,ESI                         ; 005b1d2a
    MOV EAX,dword ptr [ESP]             ; 005b1d2c
        ;   Label: LAB_005b1d2c
    MOV EDI,dword ptr [EBX + 0x6b60]    ; 005b1d2f
    CMP EAX,EDI                         ; 005b1d35
    JLE 0x005b1d3c                      ; 005b1d37
        ;   XREF to: 005b1d3c (CONDITIONAL_JUMP)  ; LAB_005b1d3c
    MOV dword ptr [ESP],EDI             ; 005b1d39
    CMP dword ptr [0x0061b4a0],0x10     ; 005b1d3c | DAT_0061b4a0
        ;   Label: LAB_005b1d3c
    JNZ 0x005b1df7                      ; 005b1d43
        ;   XREF to: 005b1df7 (CONDITIONAL_JUMP)  ; LAB_005b1df7
    MOV EAX,dword ptr [ESP + 0x44]      ; 005b1d49
    XOR ESI,ESI                         ; 005b1d4d
    MOV EDI,dword ptr [ESP]             ; 005b1d4f
    MOV dword ptr [ESP + 0x14],ESI      ; 005b1d52
    MOV dword ptr [ESP + 0x18],EAX      ; 005b1d56
    TEST EDI,EDI                        ; 005b1d5a
    JLE 0x005b1d95                      ; 005b1d5c
        ;   XREF to: 005b1d95 (CONDITIONAL_JUMP)  ; LAB_005b1d95
    MOV EAX,dword ptr [ESP + 0x40]      ; 005b1d5e
    MOV dword ptr [ESP + 0x8],EAX       ; 005b1d62
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b1d66
        ;   Label: LAB_005b1d66
    ADD EAX,dword ptr [EBX + 0x6b78]    ; 005b1d6a
    TEST EAX,EAX                        ; 005b1d70
    JL 0x005b1d7c                       ; 005b1d72
        ;   XREF to: 005b1d7c (CONDITIONAL_JUMP)  ; LAB_005b1d7c
    CMP EAX,dword ptr [0x0061b49c]      ; 005b1d74 | DAT_0061b49c
    JL 0x005b1db3                       ; 005b1d7a
        ;   XREF to: 005b1db3 (CONDITIONAL_JUMP)  ; LAB_005b1db3
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b1d7c
        ;   Label: LAB_005b1d7c
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b1d80
    MOV ESI,dword ptr [ESP]             ; 005b1d84
    INC EAX                             ; 005b1d87
    INC EDX                             ; 005b1d88
    MOV dword ptr [ESP + 0x8],EAX       ; 005b1d89
    MOV dword ptr [ESP + 0x14],EDX      ; 005b1d8d
    CMP EDX,ESI                         ; 005b1d91
    JL 0x005b1d66                       ; 005b1d93
        ;   XREF to: 005b1d66 (CONDITIONAL_JUMP)  ; LAB_005b1d66
    ADD ESP,0x1c                        ; 005b1d95
        ;   Label: LAB_005b1d95
    POP EBP                             ; 005b1d98
    POP EDI                             ; 005b1d99
    POP ESI                             ; 005b1d9a
    POP EBX                             ; 005b1d9b
    RET                                 ; 005b1d9c
    MOV ECX,dword ptr [EBX + 0x6b64]    ; 005b1d9d
        ;   Label: LAB_005b1d9d
    JMP 0x005b1cff                      ; 005b1da3
        ;   XREF to: 005b1cff (UNCONDITIONAL_JUMP)  ; LAB_005b1cff
    MOV EAX,dword ptr [EBX + 0x6b68]    ; 005b1da8
        ;   Label: LAB_005b1da8
    JMP 0x005b1d1d                      ; 005b1dae
        ;   XREF to: 005b1d1d (UNCONDITIONAL_JUMP)  ; LAB_005b1d1d
    MOV ESI,dword ptr [EAX*0x4 + 0x1c4354c] ; 005b1db3 | DAT_01c4354c
        ;   Label: LAB_005b1db3
    XOR EAX,EAX                         ; 005b1dba
    TEST ECX,ECX                        ; 005b1dbc
    JLE 0x005b1d7c                      ; 005b1dbe
        ;   XREF to: 005b1d7c (CONDITIONAL_JUMP)  ; LAB_005b1d7c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005b1dc0
    ADD EDX,EDX                         ; 005b1dc4
    ADD EDX,ESI                         ; 005b1dc6
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b1dc8
        ;   Label: LAB_005b1dc8
    IMUL ESI,dword ptr [EBX + 0x6b64]   ; 005b1dcc
    MOV EDI,dword ptr [EBX + 0x6a58]    ; 005b1dd3
    ADD ESI,EAX                         ; 005b1dd9
    MOV SI,word ptr [EDI + ESI*0x2]     ; 005b1ddb
    CMP SI,0x7c1f                       ; 005b1ddf
    JZ 0x005b1ded                       ; 005b1de4
        ;   XREF to: 005b1ded (CONDITIONAL_JUMP)  ; LAB_005b1ded
    MOV ESI,dword ptr [ESP + 0x18]      ; 005b1de6
    MOV word ptr [EDX],SI               ; 005b1dea
    INC EAX                             ; 005b1ded
        ;   Label: LAB_005b1ded
    ADD EDX,0x2                         ; 005b1dee
    CMP EAX,ECX                         ; 005b1df1
    JGE 0x005b1d7c                      ; 005b1df3
        ;   XREF to: 005b1d7c (CONDITIONAL_JUMP)  ; LAB_005b1d7c
    JMP 0x005b1dc8                      ; 005b1df5
        ;   XREF to: 005b1dc8 (UNCONDITIONAL_JUMP)  ; LAB_005b1dc8
    MOV EAX,dword ptr [ESP + 0x44]      ; 005b1df7
        ;   Label: LAB_005b1df7
    MOV dword ptr [ESP + 0xc],EAX       ; 005b1dfb
    XOR EAX,EAX                         ; 005b1dff
    MOV EDX,dword ptr [ESP]             ; 005b1e01
    MOV dword ptr [ESP + 0x10],EAX      ; 005b1e04
    TEST EDX,EDX                        ; 005b1e08
    JLE 0x005b1d95                      ; 005b1e0a
        ;   XREF to: 005b1d95 (CONDITIONAL_JUMP)  ; LAB_005b1d95
    MOV EAX,dword ptr [ESP + 0x40]      ; 005b1e0c
    MOV dword ptr [ESP + 0x4],EAX       ; 005b1e10
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1e14
        ;   Label: LAB_005b1e14
    ADD EAX,dword ptr [EBX + 0x6b78]    ; 005b1e18
    TEST EAX,EAX                        ; 005b1e1e
    JL 0x005b1e2a                       ; 005b1e20
        ;   XREF to: 005b1e2a (CONDITIONAL_JUMP)  ; LAB_005b1e2a
    CMP EAX,dword ptr [0x0061b49c]      ; 005b1e22 | DAT_0061b49c
    JL 0x005b1e49                       ; 005b1e28
        ;   XREF to: 005b1e49 (CONDITIONAL_JUMP)  ; LAB_005b1e49
    MOV EBP,dword ptr [ESP + 0x4]       ; 005b1e2a
        ;   Label: LAB_005b1e2a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b1e2e
    MOV EDX,dword ptr [ESP]             ; 005b1e32
    INC EBP                             ; 005b1e35
    INC EAX                             ; 005b1e36
    MOV dword ptr [ESP + 0x4],EBP       ; 005b1e37
    MOV dword ptr [ESP + 0x10],EAX      ; 005b1e3b
    CMP EAX,EDX                         ; 005b1e3f
    JGE 0x005b1d95                      ; 005b1e41
        ;   XREF to: 005b1d95 (CONDITIONAL_JUMP)  ; LAB_005b1d95
    JMP 0x005b1e14                      ; 005b1e47
        ;   XREF to: 005b1e14 (UNCONDITIONAL_JUMP)  ; LAB_005b1e14
    MOV EDX,dword ptr [EAX*0x4 + 0x1c4354c] ; 005b1e49 | DAT_01c4354c
        ;   Label: LAB_005b1e49
    XOR EAX,EAX                         ; 005b1e50
    TEST ECX,ECX                        ; 005b1e52
    JLE 0x005b1e2a                      ; 005b1e54
        ;   XREF to: 005b1e2a (CONDITIONAL_JUMP)  ; LAB_005b1e2a
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005b1e56
    SHL ESI,0x2                         ; 005b1e5a
    ADD EDX,ESI                         ; 005b1e5d
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b1e5f
        ;   Label: LAB_005b1e5f
    IMUL ESI,dword ptr [EBX + 0x6b64]   ; 005b1e63
    MOV EDI,dword ptr [EBX + 0x6a58]    ; 005b1e6a
    ADD ESI,EAX                         ; 005b1e70
    MOV ESI,dword ptr [EDI + ESI*0x4]   ; 005b1e72
    CMP ESI,0xff00ff                    ; 005b1e75
    JZ 0x005b1e83                       ; 005b1e7b
        ;   XREF to: 005b1e83 (CONDITIONAL_JUMP)  ; LAB_005b1e83
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b1e7d
    MOV dword ptr [EDX],ESI             ; 005b1e81
    INC EAX                             ; 005b1e83
        ;   Label: LAB_005b1e83
    ADD EDX,0x4                         ; 005b1e84
    CMP EAX,ECX                         ; 005b1e87
    JGE 0x005b1e2a                      ; 005b1e89
        ;   XREF to: 005b1e2a (CONDITIONAL_JUMP)  ; LAB_005b1e2a
    JMP 0x005b1e5f                      ; 005b1e8b
        ;   XREF to: 005b1e5f (UNCONDITIONAL_JUMP)  ; LAB_005b1e5f

