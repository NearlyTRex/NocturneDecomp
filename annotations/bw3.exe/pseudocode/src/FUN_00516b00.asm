; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516b00(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6e2b0
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01ed319c
;   undefined4 DAT_01ed36a0
;   undefined4 DAT_01ed36a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516b00
        ;   Label: FUN_00516b00
    PUSH ESI                            ; 00516b01
    PUSH EDI                            ; 00516b02
    PUSH EBP                            ; 00516b03
    SUB ESP,0x8                         ; 00516b04
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00516b07
    MOV EBP,dword ptr [ESP + 0x20]      ; 00516b0b
    MOV EDI,dword ptr [EBP + 0x14]      ; 00516b0f
    MOV EBX,dword ptr [ESI + 0x14]      ; 00516b12
    SAR EDI,0x10                        ; 00516b15
    SAR EBX,0x10                        ; 00516b18
    CMP EBX,EDI                         ; 00516b1b
    JZ 0x00516d23                       ; 00516b1d
        ;   XREF to: 00516d23 (CONDITIONAL_JUMP)  ; LAB_00516d23
    MOV EDX,dword ptr [EBP + 0x14]      ; 00516b23
    CMP EDX,dword ptr [ESI + 0x14]      ; 00516b26
    JGE 0x00516b37                      ; 00516b29
        ;   XREF to: 00516b37 (CONDITIONAL_JUMP)  ; LAB_00516b37
    MOV EAX,ESI                         ; 00516b2b
    MOV ESI,EBP                         ; 00516b2d
    MOV EBP,EAX                         ; 00516b2f
    MOV EAX,EBX                         ; 00516b31
    MOV EBX,EDI                         ; 00516b33
    MOV EDI,EAX                         ; 00516b35
    MOV EAX,[0x01ed319c]                ; 00516b37 | DAT_01ed319c
        ;   Label: LAB_00516b37
    LEA ECX,[EAX*0x4 + 0x0]             ; 00516b3c
    ADD ECX,EAX                         ; 00516b43
    SHL ECX,0x4                         ; 00516b45
    ADD ECX,0x1ed31a0                   ; 00516b48
    MOV dword ptr [ECX],EBX             ; 00516b4e
    MOV EAX,[0x01ed36a0]                ; 00516b50 | DAT_01ed36a0
    MOV dword ptr [ECX + 0x4],EDI       ; 00516b55
    CMP EBX,EAX                         ; 00516b58
    JGE 0x00516b62                      ; 00516b5a
        ;   XREF to: 00516b62 (CONDITIONAL_JUMP)  ; LAB_00516b62
    MOV dword ptr [0x01ed36a0],EBX      ; 00516b5c | DAT_01ed36a0
    CMP EDI,dword ptr [0x01ed36a4]      ; 00516b62 | DAT_01ed36a4
        ;   Label: LAB_00516b62
    JLE 0x00516b70                      ; 00516b68
        ;   XREF to: 00516b70 (CONDITIONAL_JUMP)  ; LAB_00516b70
    MOV dword ptr [0x01ed36a4],EDI      ; 00516b6a | DAT_01ed36a4
    MOV EDI,dword ptr [ESI + 0x14]      ; 00516b70
        ;   Label: LAB_00516b70
    MOV EBX,dword ptr [EBP + 0x14]      ; 00516b73
    SUB EBX,EDI                         ; 00516b76
    CMP EBX,0x10000                     ; 00516b78
    JNC 0x00516d2b                      ; 00516b7e
        ;   XREF to: 00516d2b (CONDITIONAL_JUMP)  ; LAB_00516d2b
    XOR EBX,EBX                         ; 00516b84
    MOV EAX,dword ptr [EBP + 0x10]      ; 00516b86
        ;   Label: LAB_00516b86
    MOV EDX,dword ptr [ESI + 0x10]      ; 00516b89
    MOV EDI,dword ptr [ESI + 0x14]      ; 00516b8c
    SUB EAX,EDX                         ; 00516b8f
    AND EDI,0xffff                      ; 00516b91
    MOV EDX,EAX                         ; 00516b97
    MOV EAX,EBX                         ; 00516b99
    XOR DI,0xffff                       ; 00516b9b
    IMUL EDX                            ; 00516b9f
    SHRD EAX,EDX,0x10                   ; 00516ba1
    MOV EDX,EAX                         ; 00516ba5
    MOV dword ptr [ECX + 0xc],EAX       ; 00516ba7
    MOV EAX,EDI                         ; 00516baa
    IMUL EDX                            ; 00516bac
    SHRD EAX,EDX,0x10                   ; 00516bae
    MOV dword ptr [ESP],EAX             ; 00516bb2
    MOV EDX,dword ptr [ESP]             ; 00516bb5
    MOV EAX,dword ptr [ESI + 0x10]      ; 00516bb8
    ADD EAX,EDX                         ; 00516bbb
    MOV dword ptr [ECX + 0x8],EAX       ; 00516bbd
    MOV EAX,dword ptr [EBP + 0x18]      ; 00516bc0
    MOV EDX,dword ptr [ESI + 0x18]      ; 00516bc3
    SUB EAX,EDX                         ; 00516bc6
    MOV EDX,EAX                         ; 00516bc8
    MOV EAX,EBX                         ; 00516bca
    IMUL EDX                            ; 00516bcc
    SHRD EAX,EDX,0x10                   ; 00516bce
    MOV EDX,EAX                         ; 00516bd2
    MOV dword ptr [ECX + 0x1c],EAX      ; 00516bd4
    MOV EAX,EDI                         ; 00516bd7
    IMUL EDX                            ; 00516bd9
    SHRD EAX,EDX,0x10                   ; 00516bdb
    MOV dword ptr [ESP],EAX             ; 00516bdf
    MOV EDX,dword ptr [ESP]             ; 00516be2
    MOV EAX,dword ptr [ESI + 0x18]      ; 00516be5
    ADD EAX,EDX                         ; 00516be8
    MOV dword ptr [ECX + 0x18],EAX      ; 00516bea
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00516bed
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00516bf0
    SUB EAX,EDX                         ; 00516bf3
    MOV EDX,EAX                         ; 00516bf5
    MOV EAX,EBX                         ; 00516bf7
    IMUL EDX                            ; 00516bf9
    SHRD EAX,EDX,0x10                   ; 00516bfb
    MOV EDX,EAX                         ; 00516bff
    MOV dword ptr [ECX + 0x24],EAX      ; 00516c01
    MOV EAX,EDI                         ; 00516c04
    IMUL EDX                            ; 00516c06
    SHRD EAX,EDX,0x10                   ; 00516c08
    MOV dword ptr [ESP],EAX             ; 00516c0c
    MOV EDX,dword ptr [ESP]             ; 00516c0f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00516c12
    ADD EAX,EDX                         ; 00516c15
    MOV dword ptr [ECX + 0x20],EAX      ; 00516c17
    MOV EAX,dword ptr [EBP + 0x20]      ; 00516c1a
    MOV EDX,dword ptr [ESI + 0x20]      ; 00516c1d
    SUB EAX,EDX                         ; 00516c20
    MOV EDX,EAX                         ; 00516c22
    MOV EAX,EBX                         ; 00516c24
    IMUL EDX                            ; 00516c26
    SHRD EAX,EDX,0x10                   ; 00516c28
    MOV EDX,EAX                         ; 00516c2c
    MOV dword ptr [ECX + 0x14],EAX      ; 00516c2e
    MOV EAX,EDI                         ; 00516c31
    IMUL EDX                            ; 00516c33
    SHRD EAX,EDX,0x10                   ; 00516c35
    MOV dword ptr [ESP],EAX             ; 00516c39
    MOV EDX,dword ptr [ESP]             ; 00516c3c
    MOV EAX,dword ptr [ESI + 0x20]      ; 00516c3f
    ADD EAX,EDX                         ; 00516c42
    MOV dword ptr [ECX + 0x10],EAX      ; 00516c44
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00516c47
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00516c4a
    SUB EAX,EDX                         ; 00516c4d
    MOV EDX,EAX                         ; 00516c4f
    MOV EAX,EBX                         ; 00516c51
    IMUL EDX                            ; 00516c53
    SHRD EAX,EDX,0x10                   ; 00516c55
    MOV EDX,EAX                         ; 00516c59
    MOV dword ptr [ECX + 0x34],EAX      ; 00516c5b
    MOV EAX,EDI                         ; 00516c5e
    IMUL EDX                            ; 00516c60
    SHRD EAX,EDX,0x10                   ; 00516c62
    MOV dword ptr [ESP],EAX             ; 00516c66
    MOV EDX,dword ptr [ESP]             ; 00516c69
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00516c6c
    ADD EAX,EDX                         ; 00516c6f
    MOV dword ptr [ECX + 0x30],EAX      ; 00516c71
    CMP dword ptr [0x01c6e2b8],0x1      ; 00516c74 | DAT_01c6e2b8
    JNZ 0x00516d4a                      ; 00516c7b
        ;   XREF to: 00516d4a (CONDITIONAL_JUMP)  ; LAB_00516d4a
    CMP dword ptr [0x01c6e2b0],0x0      ; 00516c81 | DAT_01c6e2b0
    JZ 0x00516d3b                       ; 00516c88
        ;   XREF to: 00516d3b (CONDITIONAL_JUMP)  ; LAB_00516d3b
    MOV EAX,0x7fffffff                  ; 00516c8e
    SUB EAX,dword ptr [ESI + 0x8]       ; 00516c93
    MOV EDX,0x7fffffff                  ; 00516c96
    MOV dword ptr [ESP + 0x4],EAX       ; 00516c9b
    SUB EDX,dword ptr [EBP + 0x8]       ; 00516c9f
    SUB EDX,dword ptr [ESP + 0x4]       ; 00516ca2
        ;   Label: LAB_00516ca2
    MOV EAX,EBX                         ; 00516ca6
    IMUL EDX                            ; 00516ca8
    SHRD EAX,EDX,0x10                   ; 00516caa
    MOV EDX,EAX                         ; 00516cae
    MOV dword ptr [ECX + 0x2c],EAX      ; 00516cb0
    MOV EAX,EDI                         ; 00516cb3
    IMUL EDX                            ; 00516cb5
    SHRD EAX,EDX,0x10                   ; 00516cb7
    MOV EDX,dword ptr [ESP + 0x4]       ; 00516cbb
    ADD EDX,EAX                         ; 00516cbf
    MOV dword ptr [ECX + 0x28],EDX      ; 00516cc1
    MOV EAX,dword ptr [EBP + 0x24]      ; 00516cc4
        ;   Label: LAB_00516cc4
    MOV EDX,dword ptr [ESI + 0x24]      ; 00516cc7
    SUB EAX,EDX                         ; 00516cca
    MOV EDX,EAX                         ; 00516ccc
    MOV EAX,EBX                         ; 00516cce
    IMUL EDX                            ; 00516cd0
    SHRD EAX,EDX,0x10                   ; 00516cd2
    MOV EDX,EAX                         ; 00516cd6
    MOV dword ptr [ECX + 0x3c],EAX      ; 00516cd8
    MOV EAX,EDI                         ; 00516cdb
    IMUL EDX                            ; 00516cdd
    SHRD EAX,EDX,0x10                   ; 00516cdf
    MOV dword ptr [ESP],EAX             ; 00516ce3
    MOV EDX,dword ptr [ESP]             ; 00516ce6
    MOV EAX,dword ptr [ESI + 0x24]      ; 00516ce9
    ADD EAX,EDX                         ; 00516cec
    MOV dword ptr [ECX + 0x38],EAX      ; 00516cee
    MOV EDX,dword ptr [EBP + 0x28]      ; 00516cf1
    SUB EDX,dword ptr [ESI + 0x28]      ; 00516cf4
    MOV EAX,EBX                         ; 00516cf7
    IMUL EDX                            ; 00516cf9
    SHRD EAX,EDX,0x10                   ; 00516cfb
    MOV EDX,EAX                         ; 00516cff
    MOV dword ptr [ECX + 0x44],EAX      ; 00516d01
    MOV EAX,EDI                         ; 00516d04
    IMUL EDX                            ; 00516d06
    SHRD EAX,EDX,0x10                   ; 00516d08
    MOV EDX,EAX                         ; 00516d0c
    MOV EAX,dword ptr [ESI + 0x28]      ; 00516d0e
    ADD EAX,EDX                         ; 00516d11
    MOV EDX,dword ptr [0x01ed319c]      ; 00516d13 | DAT_01ed319c
    INC EDX                             ; 00516d19
    MOV dword ptr [ECX + 0x40],EAX      ; 00516d1a
    MOV dword ptr [0x01ed319c],EDX      ; 00516d1d | DAT_01ed319c
    ADD ESP,0x8                         ; 00516d23
        ;   Label: LAB_00516d23
    POP EBP                             ; 00516d26
    POP EDI                             ; 00516d27
    POP ESI                             ; 00516d28
    POP EBX                             ; 00516d29
    RET                                 ; 00516d2a
    MOV EAX,0xffffffff                  ; 00516d2b
        ;   Label: LAB_00516d2b
    XOR EDX,EDX                         ; 00516d30
    DIV EBX                             ; 00516d32
    MOV EBX,EAX                         ; 00516d34
    JMP 0x00516b86                      ; 00516d36
        ;   XREF to: 00516b86 (UNCONDITIONAL_JUMP)  ; LAB_00516b86
    MOV EAX,dword ptr [ESI + 0xc]       ; 00516d3b
        ;   Label: LAB_00516d3b
    MOV EDX,dword ptr [EBP + 0xc]       ; 00516d3e
    MOV dword ptr [ESP + 0x4],EAX       ; 00516d41
    JMP 0x00516ca2                      ; 00516d45
        ;   XREF to: 00516ca2 (UNCONDITIONAL_JUMP)  ; LAB_00516ca2
    MOV EAX,dword ptr [EBP + 0x8]       ; 00516d4a
        ;   Label: LAB_00516d4a
    MOV EDX,dword ptr [ESI + 0x8]       ; 00516d4d
    SUB EAX,EDX                         ; 00516d50
    MOV EDX,EAX                         ; 00516d52
    MOV EAX,EBX                         ; 00516d54
    IMUL EDX                            ; 00516d56
    SHRD EAX,EDX,0x10                   ; 00516d58
    MOV EDX,EAX                         ; 00516d5c
    MOV dword ptr [ECX + 0x2c],EAX      ; 00516d5e
    MOV EAX,EDI                         ; 00516d61
    IMUL EDX                            ; 00516d63
    SHRD EAX,EDX,0x10                   ; 00516d65
    MOV dword ptr [ESP],EAX             ; 00516d69
    MOV EDX,dword ptr [ESP]             ; 00516d6c
    MOV EAX,dword ptr [ESI + 0x8]       ; 00516d6f
    ADD EAX,EDX                         ; 00516d72
    MOV dword ptr [ECX + 0x28],EAX      ; 00516d74
    JMP 0x00516cc4                      ; 00516d77
        ;   XREF to: 00516cc4 (UNCONDITIONAL_JUMP)  ; LAB_00516cc4

