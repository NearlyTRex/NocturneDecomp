; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6(void)
;
;
; XREF[13]:
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20 at 0046bc7c
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730 at 0046c785
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800 at 0046c875
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_0046be60 at 0046bebc
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 at 0046dd6e
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_0046d960 at 0046d9bd
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240 at 0046b259
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 at 0046b308
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 at 0046b878
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70 at 0046babb
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6b5d4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046f9a6
        ;   Label: core_dstrendr.cpp_renderDepthOnlyStandard_FUN_0046f9a6
    PUSH EDI                            ; 0046f9a7
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046f9a8
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046f9ab
    CMP EAX,ECX                         ; 0046f9ae
    JBE 0x0046f9b5                      ; 0046f9b0
        ;   XREF to: 0046f9b5 (CONDITIONAL_JUMP)  ; LAB_0046f9b5
    XCHG EAX,ECX                        ; 0046f9b2
    XCHG EDI,ESI                        ; 0046f9b3
    SHR EAX,0x10                        ; 0046f9b5
        ;   Label: LAB_0046f9b5
    SHR ECX,0x10                        ; 0046f9b8
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046f9bb | DAT_01c5faec
    SUB ECX,EAX                         ; 0046f9c2
    JLE 0x0046f9f1                      ; 0046f9c4
        ;   XREF to: 0046f9f1 (CONDITIONAL_JUMP)  ; LAB_0046f9f1
    SHL EAX,0x1                         ; 0046f9c6
    ADD EBX,EAX                         ; 0046f9c8
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046f9ca
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046f9cd
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d4] ; 0046f9d0 | DAT_01c6b5d4
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046f9d7
    MOV EAX,ESI                         ; 0046f9da
        ;   Label: LAB_0046f9da
    SAR EAX,0x8                         ; 0046f9dc
    MOVZX EDI,word ptr [EBX]            ; 0046f9df
    CMP EAX,EDI                         ; 0046f9e2
    JNC 0x0046f9e9                      ; 0046f9e4
        ;   XREF to: 0046f9e9 (CONDITIONAL_JUMP)  ; LAB_0046f9e9
    MOV word ptr [EBX],AX               ; 0046f9e6
    ADD ESI,EDX                         ; 0046f9e9
        ;   Label: LAB_0046f9e9
    ADD EBX,0x2                         ; 0046f9eb
    DEC ECX                             ; 0046f9ee
    JG 0x0046f9da                       ; 0046f9ef
        ;   XREF to: 0046f9da (CONDITIONAL_JUMP)  ; LAB_0046f9da
    POP EDI                             ; 0046f9f1
        ;   Label: LAB_0046f9f1
    POP ESI                             ; 0046f9f2
    RET                                 ; 0046f9f3

