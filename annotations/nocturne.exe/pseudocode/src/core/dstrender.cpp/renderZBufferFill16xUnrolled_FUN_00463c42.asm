; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderZBufferFill16xUnrolled_FUN_00463c42(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90 at 0045f071
;
; Referenced Globals:
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c00024
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01c00c80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463c42
        ;   Label: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00463c42
    PUSH EDI                            ; 00463c43
    PUSH EBP                            ; 00463c44
    MOV EAX,dword ptr [ESI + 0x8]       ; 00463c45
    MOV ECX,dword ptr [EDI + 0x8]       ; 00463c48
    CMP EAX,ECX                         ; 00463c4b
    JBE 0x00463c52                      ; 00463c4d
        ;   XREF to: 00463c52 (CONDITIONAL_JUMP)  ; LAB_00463c52
    XCHG EAX,ECX                        ; 00463c4f
    XCHG EDI,ESI                        ; 00463c50
    SHR EAX,0x10                        ; 00463c52
        ;   Label: LAB_00463c52
    SHR ECX,0x10                        ; 00463c55
    MOV EBP,dword ptr [EBX*0x4 + 0x1bd4260] ; 00463c58 | DAT_01bd4260
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00463c5f | DAT_01bd2fa0
    SUB ECX,EAX                         ; 00463c66
    JLE 0x00463d94                      ; 00463c68
        ;   XREF to: 00463d94 (CONDITIONAL_JUMP)  ; LAB_00463d94
    SHL EAX,0x2                         ; 00463c6e
    ADD EBX,EAX                         ; 00463c71
    ADD EBP,EAX                         ; 00463c73
    INC ECX                             ; 00463c75
    MOV EAX,dword ptr [EDI + 0x28]      ; 00463c76
    SUB EAX,dword ptr [ESI + 0x28]      ; 00463c79
    IMUL dword ptr [ECX*0x4 + 0x1c00c80] ; 00463c7c | DAT_01c00c80
    MOV EDI,EBX                         ; 00463c83
    MOV EBX,EBP                         ; 00463c85
    DEC ECX                             ; 00463c87
    MOV ESI,dword ptr [ESI + 0x28]      ; 00463c88
    XOR EAX,EAX                         ; 00463c8b
    MOV AL,[0x01c00c70]                 ; 00463c8d | DAT_01c00c70
    MOV EAX,dword ptr [EAX*0x4 + 0x1c00024] ; 00463c92 | DAT_01c00024
    SUB ECX,0x4                         ; 00463c99
        ;   Label: LAB_00463c99
    JL 0x00463d6e                       ; 00463c9c
        ;   XREF to: 00463d6e (CONDITIONAL_JUMP)  ; LAB_00463d6e
    MOV EBP,ESI                         ; 00463ca2
    SHR EBP,0x8                         ; 00463ca4
    MOV dword ptr [EBX],EBP             ; 00463ca7
    ADD ESI,EDX                         ; 00463ca9
    MOV EBP,ESI                         ; 00463cab
    SHR EBP,0x8                         ; 00463cad
    MOV dword ptr [EBX + 0x4],EBP       ; 00463cb0
    ADD ESI,EDX                         ; 00463cb3
    MOV EBP,ESI                         ; 00463cb5
    SHR EBP,0x8                         ; 00463cb7
    MOV dword ptr [EBX + 0x8],EBP       ; 00463cba
    ADD ESI,EDX                         ; 00463cbd
    MOV EBP,ESI                         ; 00463cbf
    SHR EBP,0x8                         ; 00463cc1
    MOV dword ptr [EBX + 0xc],EBP       ; 00463cc4
    ADD ESI,EDX                         ; 00463cc7
    ADD EBX,0x10                        ; 00463cc9
    ADD EDI,0x10                        ; 00463ccc
    SUB ECX,0x4                         ; 00463ccf
    JL 0x00463d6e                       ; 00463cd2
        ;   XREF to: 00463d6e (CONDITIONAL_JUMP)  ; LAB_00463d6e
    MOV EBP,ESI                         ; 00463cd8
    SHR EBP,0x8                         ; 00463cda
    MOV dword ptr [EBX],EBP             ; 00463cdd
    ADD ESI,EDX                         ; 00463cdf
    MOV EBP,ESI                         ; 00463ce1
    SHR EBP,0x8                         ; 00463ce3
    MOV dword ptr [EBX + 0x4],EBP       ; 00463ce6
    ADD ESI,EDX                         ; 00463ce9
    MOV EBP,ESI                         ; 00463ceb
    SHR EBP,0x8                         ; 00463ced
    MOV dword ptr [EBX + 0x8],EBP       ; 00463cf0
    ADD ESI,EDX                         ; 00463cf3
    MOV EBP,ESI                         ; 00463cf5
    SHR EBP,0x8                         ; 00463cf7
    MOV dword ptr [EBX + 0xc],EBP       ; 00463cfa
    ADD ESI,EDX                         ; 00463cfd
    ADD EBX,0x10                        ; 00463cff
    ADD EDI,0x10                        ; 00463d02
    SUB ECX,0x4                         ; 00463d05
    JL 0x00463d6e                       ; 00463d08
        ;   XREF to: 00463d6e (CONDITIONAL_JUMP)  ; LAB_00463d6e
    MOV EBP,ESI                         ; 00463d0a
    SHR EBP,0x8                         ; 00463d0c
    MOV dword ptr [EBX],EBP             ; 00463d0f
    ADD ESI,EDX                         ; 00463d11
    MOV EBP,ESI                         ; 00463d13
    SHR EBP,0x8                         ; 00463d15
    MOV dword ptr [EBX + 0x4],EBP       ; 00463d18
    ADD ESI,EDX                         ; 00463d1b
    MOV EBP,ESI                         ; 00463d1d
    SHR EBP,0x8                         ; 00463d1f
    MOV dword ptr [EBX + 0x8],EBP       ; 00463d22
    ADD ESI,EDX                         ; 00463d25
    MOV EBP,ESI                         ; 00463d27
    SHR EBP,0x8                         ; 00463d29
    MOV dword ptr [EBX + 0xc],EBP       ; 00463d2c
    ADD ESI,EDX                         ; 00463d2f
    ADD EBX,0x10                        ; 00463d31
    ADD EDI,0x10                        ; 00463d34
    SUB ECX,0x4                         ; 00463d37
    JL 0x00463d6e                       ; 00463d3a
        ;   XREF to: 00463d6e (CONDITIONAL_JUMP)  ; LAB_00463d6e
    MOV EBP,ESI                         ; 00463d3c
    SHR EBP,0x8                         ; 00463d3e
    MOV dword ptr [EBX],EBP             ; 00463d41
    ADD ESI,EDX                         ; 00463d43
    MOV EBP,ESI                         ; 00463d45
    SHR EBP,0x8                         ; 00463d47
    MOV dword ptr [EBX + 0x4],EBP       ; 00463d4a
    ADD ESI,EDX                         ; 00463d4d
    MOV EBP,ESI                         ; 00463d4f
    SHR EBP,0x8                         ; 00463d51
    MOV dword ptr [EBX + 0x8],EBP       ; 00463d54
    ADD ESI,EDX                         ; 00463d57
    MOV EBP,ESI                         ; 00463d59
    SHR EBP,0x8                         ; 00463d5b
    MOV dword ptr [EBX + 0xc],EBP       ; 00463d5e
    ADD ESI,EDX                         ; 00463d61
    ADD EBX,0x10                        ; 00463d63
    ADD EDI,0x10                        ; 00463d66
    JMP 0x00463c99                      ; 00463d69
        ;   XREF to: 00463c99 (UNCONDITIONAL_JUMP)  ; LAB_00463c99
    ADD ECX,0x4                         ; 00463d6e
        ;   Label: LAB_00463d6e
    JLE 0x00463d94                      ; 00463d71
        ;   XREF to: 00463d94 (CONDITIONAL_JUMP)  ; LAB_00463d94
    MOV EBP,ESI                         ; 00463d73
    SHR EBP,0x8                         ; 00463d75
    MOV dword ptr [EBX],EBP             ; 00463d78
    ADD ESI,EDX                         ; 00463d7a
    DEC ECX                             ; 00463d7c
    JLE 0x00463d94                      ; 00463d7d
        ;   XREF to: 00463d94 (CONDITIONAL_JUMP)  ; LAB_00463d94
    MOV EBP,ESI                         ; 00463d7f
    SHR EBP,0x8                         ; 00463d81
    MOV dword ptr [EBX + 0x4],EBP       ; 00463d84
    ADD ESI,EDX                         ; 00463d87
    DEC ECX                             ; 00463d89
    JLE 0x00463d94                      ; 00463d8a
        ;   XREF to: 00463d94 (CONDITIONAL_JUMP)  ; LAB_00463d94
    MOV EBP,ESI                         ; 00463d8c
    SHR EBP,0x8                         ; 00463d8e
    MOV dword ptr [EBX + 0x8],EBP       ; 00463d91
    POP EBP                             ; 00463d94
        ;   Label: LAB_00463d94
    POP EDI                             ; 00463d95
    POP ESI                             ; 00463d96
    RET                                 ; 00463d97

