; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461c02(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0070ca74
;   undefined4 DAT_01ba51c8
;   undefined4 DAT_01ba56cc
;   undefined4 DAT_01ba56d0
;   undefined4 DAT_01c38b55
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00461c02
        ;   Label: FUN_00461c02
    MOV EDX,0x4598901                   ; 00461c03
    CMP EDI,EAX                         ; 00461c08
    JGE 0x00461c12                      ; 00461c0a
        ;   XREF to: 00461c12 (CONDITIONAL_JUMP)  ; LAB_00461c12
    MOV dword ptr [0x01ba56cc],EDI      ; 00461c0c | DAT_01ba56cc
    CMP EBX,dword ptr [0x01ba56d0]      ; 00461c12 | DAT_01ba56d0
        ;   Label: LAB_00461c12
    JLE 0x00461c20                      ; 00461c18
        ;   XREF to: 00461c20 (CONDITIONAL_JUMP)  ; LAB_00461c20
    MOV dword ptr [0x01ba56d0],EBX      ; 00461c1a | DAT_01ba56d0
    MOV EDI,dword ptr [ESI + 0x14]      ; 00461c20
        ;   Label: LAB_00461c20
    MOV EBX,dword ptr [EBP + 0x14]      ; 00461c23
    SUB EBX,EDI                         ; 00461c26
    CMP EBX,0x10000                     ; 00461c28
    JNC 0x00461dc7                      ; 00461c2e
        ;   XREF to: 00461dc7 (CONDITIONAL_JUMP)  ; LAB_00461dc7
    XOR EBX,EBX                         ; 00461c34
    MOV EAX,dword ptr [EBP + 0x10]      ; 00461c36
        ;   Label: LAB_00461c36
    MOV EDX,dword ptr [ESI + 0x10]      ; 00461c39
    MOV EDI,dword ptr [ESI + 0x14]      ; 00461c3c
    SUB EAX,EDX                         ; 00461c3f
    AND EDI,0xffff                      ; 00461c41
    MOV EDX,EAX                         ; 00461c47
    MOV EAX,EBX                         ; 00461c49
    XOR DI,0xffff                       ; 00461c4b
    IMUL EDX                            ; 00461c4f
    SHRD EAX,EDX,0x10                   ; 00461c51
    MOV EDX,EAX                         ; 00461c55
    MOV dword ptr [ECX + 0xc],EAX       ; 00461c57
    MOV EAX,EDI                         ; 00461c5a
    IMUL EDX                            ; 00461c5c
    SHRD EAX,EDX,0x10                   ; 00461c5e
    MOV dword ptr [ESP],EAX             ; 00461c62
    MOV EDX,dword ptr [ESP]             ; 00461c65
    MOV EAX,dword ptr [ESI + 0x10]      ; 00461c68
    ADD EAX,EDX                         ; 00461c6b
    MOV dword ptr [ECX + 0x8],EAX       ; 00461c6d
    MOV EAX,dword ptr [EBP + 0x18]      ; 00461c70
    MOV EDX,dword ptr [ESI + 0x18]      ; 00461c73
    SUB EAX,EDX                         ; 00461c76
    MOV EDX,EAX                         ; 00461c78
    MOV EAX,EBX                         ; 00461c7a
    IMUL EDX                            ; 00461c7c
    SHRD EAX,EDX,0x10                   ; 00461c7e
    MOV EDX,EAX                         ; 00461c82
    MOV dword ptr [ECX + 0x1c],EAX      ; 00461c84
    MOV EAX,EDI                         ; 00461c87
    IMUL EDX                            ; 00461c89
    SHRD EAX,EDX,0x10                   ; 00461c8b
    MOV dword ptr [ESP],EAX             ; 00461c8f
    MOV EDX,dword ptr [ESP]             ; 00461c92
    MOV EAX,dword ptr [ESI + 0x18]      ; 00461c95
    ADD EAX,EDX                         ; 00461c98
    MOV dword ptr [ECX + 0x18],EAX      ; 00461c9a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00461c9d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00461ca0
    SUB EAX,EDX                         ; 00461ca3
    MOV EDX,EAX                         ; 00461ca5
    MOV EAX,EBX                         ; 00461ca7
    IMUL EDX                            ; 00461ca9
    SHRD EAX,EDX,0x10                   ; 00461cab
    MOV EDX,EAX                         ; 00461caf
    MOV dword ptr [ECX + 0x24],EAX      ; 00461cb1
    MOV EAX,EDI                         ; 00461cb4
    IMUL EDX                            ; 00461cb6
    SHRD EAX,EDX,0x10                   ; 00461cb8
    MOV dword ptr [ESP],EAX             ; 00461cbc
    MOV EDX,dword ptr [ESP]             ; 00461cbf
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00461cc2
    ADD EAX,EDX                         ; 00461cc5
    MOV dword ptr [ECX + 0x20],EAX      ; 00461cc7
    MOV EAX,dword ptr [EBP + 0x20]      ; 00461cca
    MOV EDX,dword ptr [ESI + 0x20]      ; 00461ccd
    SUB EAX,EDX                         ; 00461cd0
    MOV EDX,EAX                         ; 00461cd2
    MOV EAX,EBX                         ; 00461cd4
    IMUL EDX                            ; 00461cd6
    SHRD EAX,EDX,0x10                   ; 00461cd8
    MOV EDX,EAX                         ; 00461cdc
    MOV dword ptr [ECX + 0x14],EAX      ; 00461cde
    MOV EAX,EDI                         ; 00461ce1
    IMUL EDX                            ; 00461ce3
    SHRD EAX,EDX,0x10                   ; 00461ce5
    MOV dword ptr [ESP],EAX             ; 00461ce9
    MOV EDX,dword ptr [ESP]             ; 00461cec
    MOV EAX,dword ptr [ESI + 0x20]      ; 00461cef
    ADD EAX,EDX                         ; 00461cf2
    MOV dword ptr [ECX + 0x10],EAX      ; 00461cf4
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00461cf7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00461cfa
    SUB EAX,EDX                         ; 00461cfd
    MOV EDX,EAX                         ; 00461cff
    MOV EAX,EBX                         ; 00461d01
    IMUL EDX                            ; 00461d03
    SHRD EAX,EDX,0x10                   ; 00461d05
    MOV EDX,EAX                         ; 00461d09
    MOV dword ptr [ECX + 0x34],EAX      ; 00461d0b
    MOV EAX,EDI                         ; 00461d0e
    IMUL EDX                            ; 00461d10
    SHRD EAX,EDX,0x10                   ; 00461d12
    MOV dword ptr [ESP],EAX             ; 00461d16
    MOV EDX,dword ptr [ESP]             ; 00461d19
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00461d1c
    ADD EAX,EDX                         ; 00461d1f
    MOV dword ptr [ECX + 0x30],EAX      ; 00461d21
    CMP dword ptr [0x0070ca74],0x0      ; 00461d24 | DAT_0070ca74
    JZ 0x00461dd7                       ; 00461d2b
        ;   XREF to: 00461dd7 (CONDITIONAL_JUMP)  ; LAB_00461dd7
    MOV EAX,dword ptr [EBP + 0x8]       ; 00461d31
    MOV EDX,dword ptr [ESI + 0x8]       ; 00461d34
    SUB EAX,EDX                         ; 00461d37
    MOV EDX,EAX                         ; 00461d39
    MOV EAX,EBX                         ; 00461d3b
    IMUL EDX                            ; 00461d3d
    SHRD EAX,EDX,0x10                   ; 00461d3f
    MOV EDX,EAX                         ; 00461d43
    MOV dword ptr [ECX + 0x2c],EAX      ; 00461d45
    MOV EAX,EDI                         ; 00461d48
    IMUL EDX                            ; 00461d4a
    SHRD EAX,EDX,0x10                   ; 00461d4c
    MOV dword ptr [ESP],EAX             ; 00461d50
    MOV EDX,dword ptr [ESP]             ; 00461d53
    MOV EAX,dword ptr [ESI + 0x8]       ; 00461d56
    ADD EAX,EDX                         ; 00461d59
        ;   Label: LAB_00461d59
    MOV dword ptr [ECX + 0x28],EAX      ; 00461d5b
    TEST byte ptr [0x01c38b55],0x2      ; 00461d5e | DAT_01c38b55
    JZ 0x00461db9                       ; 00461d65
        ;   XREF to: 00461db9 (CONDITIONAL_JUMP)  ; LAB_00461db9
    MOV EAX,dword ptr [EBP + 0x24]      ; 00461d67
    MOV EDX,dword ptr [ESI + 0x24]      ; 00461d6a
    SUB EAX,EDX                         ; 00461d6d
    MOV EDX,EAX                         ; 00461d6f
    MOV EAX,EBX                         ; 00461d71
    IMUL EDX                            ; 00461d73
    SHRD EAX,EDX,0x10                   ; 00461d75
    MOV EDX,EAX                         ; 00461d79
    MOV dword ptr [ECX + 0x3c],EAX      ; 00461d7b
    MOV EAX,EDI                         ; 00461d7e
    IMUL EDX                            ; 00461d80
    SHRD EAX,EDX,0x10                   ; 00461d82
    MOV dword ptr [ESP],EAX             ; 00461d86
    MOV EDX,dword ptr [ESP]             ; 00461d89
    MOV EAX,dword ptr [ESI + 0x24]      ; 00461d8c
    ADD EAX,EDX                         ; 00461d8f
    MOV dword ptr [ECX + 0x38],EAX      ; 00461d91
    MOV EDX,dword ptr [EBP + 0x28]      ; 00461d94
    MOV EBP,dword ptr [ESI + 0x28]      ; 00461d97
    MOV EAX,EBX                         ; 00461d9a
    SUB EDX,EBP                         ; 00461d9c
    IMUL EDX                            ; 00461d9e
    SHRD EAX,EDX,0x10                   ; 00461da0
    MOV EDX,EAX                         ; 00461da4
    MOV dword ptr [ECX + 0x44],EAX      ; 00461da6
    MOV EAX,EDI                         ; 00461da9
    IMUL EDX                            ; 00461dab
    SHRD EAX,EDX,0x10                   ; 00461dad
    MOV EBX,dword ptr [ESI + 0x28]      ; 00461db1
    ADD EBX,EAX                         ; 00461db4
    MOV dword ptr [ECX + 0x40],EBX      ; 00461db6
    INC dword ptr [0x01ba51c8]          ; 00461db9 | DAT_01ba51c8
        ;   Label: LAB_00461db9
    ADD ESP,0x4                         ; 00461dbf
    POP EBP                             ; 00461dc2
    POP EDI                             ; 00461dc3
    POP ESI                             ; 00461dc4
    POP EBX                             ; 00461dc5
    RET                                 ; 00461dc6
    MOV EAX,0xffffffff                  ; 00461dc7
        ;   Label: LAB_00461dc7
    XOR EDX,EDX                         ; 00461dcc
    DIV EBX                             ; 00461dce
    MOV EBX,EAX                         ; 00461dd0
    JMP 0x00461c36                      ; 00461dd2
        ;   XREF to: 00461c36 (UNCONDITIONAL_JUMP)  ; LAB_00461c36
    MOV EAX,dword ptr [EBP + 0xc]       ; 00461dd7
        ;   Label: LAB_00461dd7
    MOV EDX,dword ptr [ESI + 0xc]       ; 00461dda
    SUB EAX,EDX                         ; 00461ddd
    MOV EDX,EAX                         ; 00461ddf
    MOV EAX,EBX                         ; 00461de1
    IMUL EDX                            ; 00461de3
    SHRD EAX,EDX,0x10                   ; 00461de5
    MOV EDX,EAX                         ; 00461de9
    MOV dword ptr [ECX + 0x2c],EAX      ; 00461deb
    MOV EAX,EDI                         ; 00461dee
    IMUL EDX                            ; 00461df0
    SHRD EAX,EDX,0x10                   ; 00461df2
    MOV dword ptr [ESP],EAX             ; 00461df6
    MOV EDX,dword ptr [ESP]             ; 00461df9
    MOV EAX,dword ptr [ESI + 0xc]       ; 00461dfc
    JMP 0x00461d59                      ; 00461dff
        ;   XREF to: 00461d59 (UNCONDITIONAL_JUMP)  ; LAB_00461d59

