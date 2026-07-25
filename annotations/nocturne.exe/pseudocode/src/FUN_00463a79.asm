; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00463a79(void)
;
;
; XREF[18]:
;   FUN_0045f270 at 0045f2fc
;   FUN_00461720 at 004618f6
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedDirect_FUN_0045f700 at 0045f71a
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_0045f8d0 at 0045f99d
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790 at 0045f7ec
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 at 004602f5
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 at 004603e5
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0045f9d0 at 0045fa2c
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 at 0046150d
;   engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0 at 00460515
;   ... and 8 more
;
; Referenced Globals:
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01c00c84
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00463a79
        ;   Label: FUN_00463a79
    PUSH EDI                            ; 00463a7a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00463a7b
    MOV ECX,dword ptr [EDI + 0x8]       ; 00463a7e
    CMP EAX,ECX                         ; 00463a81
    JBE 0x00463a88                      ; 00463a83
        ;   XREF to: 00463a88 (CONDITIONAL_JUMP)  ; LAB_00463a88
    XCHG EAX,ECX                        ; 00463a85
    XCHG EDI,ESI                        ; 00463a86
    SHR EAX,0x10                        ; 00463a88
        ;   Label: LAB_00463a88
    SHR ECX,0x10                        ; 00463a8b
    MOV EBX,dword ptr [EBX*0x4 + 0x1bd2fa0] ; 00463a8e | DAT_01bd2fa0
    SUB ECX,EAX                         ; 00463a95
    JLE 0x00463ac4                      ; 00463a97
        ;   XREF to: 00463ac4 (CONDITIONAL_JUMP)  ; LAB_00463ac4
    SHL EAX,0x1                         ; 00463a99
    ADD EBX,EAX                         ; 00463a9b
    MOV EAX,dword ptr [EDI + 0x28]      ; 00463a9d
    SUB EAX,dword ptr [ESI + 0x28]      ; 00463aa0
    IMUL dword ptr [ECX*0x4 + 0x1c00c84] ; 00463aa3 | DAT_01c00c84
    MOV ESI,dword ptr [ESI + 0x28]      ; 00463aaa
    MOV EAX,ESI                         ; 00463aad
        ;   Label: LAB_00463aad
    SAR EAX,0x8                         ; 00463aaf
    MOVZX EDI,word ptr [EBX]            ; 00463ab2
    CMP EAX,EDI                         ; 00463ab5
    JNC 0x00463abc                      ; 00463ab7
        ;   XREF to: 00463abc (CONDITIONAL_JUMP)  ; LAB_00463abc
    MOV word ptr [EBX],AX               ; 00463ab9
    ADD ESI,EDX                         ; 00463abc
        ;   Label: LAB_00463abc
    ADD EBX,0x2                         ; 00463abe
    DEC ECX                             ; 00463ac1
    JG 0x00463aad                       ; 00463ac2
        ;   XREF to: 00463aad (CONDITIONAL_JUMP)  ; LAB_00463aad
    POP EDI                             ; 00463ac4
        ;   Label: LAB_00463ac4
    POP ESI                             ; 00463ac5
    RET                                 ; 00463ac6

