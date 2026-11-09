; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthOnlyStandard_FUN_00486e26(void)
;
;
; XREF[13]:
;   engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_00482540 at 0048259c
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 at 004830a5
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 at 00483195
;   engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_00482780 at 004827dc
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0 at 0048468e
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280 at 004842dd
;   engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80 at 00481b99
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00 at 00481c48
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 at 00482198
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390 at 004823db
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4f034
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486e26
        ;   Label: core_dstrendr.cpp_renderDepthOnlyStandard_FUN_00486e26
    PUSH EDI                            ; 00486e27
    MOV EAX,dword ptr [ESI + 0x8]       ; 00486e28
    MOV ECX,dword ptr [EDI + 0x8]       ; 00486e2b
    CMP EAX,ECX                         ; 00486e2e
    JBE 0x00486e35                      ; 00486e30
        ;   XREF to: 00486e35 (CONDITIONAL_JUMP)  ; LAB_00486e35
    XCHG EAX,ECX                        ; 00486e32
    XCHG EDI,ESI                        ; 00486e33
    SHR EAX,0x10                        ; 00486e35
        ;   Label: LAB_00486e35
    SHR ECX,0x10                        ; 00486e38
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 00486e3b | DAT_01c4354c
    SUB ECX,EAX                         ; 00486e42
    JLE 0x00486e71                      ; 00486e44
        ;   XREF to: 00486e71 (CONDITIONAL_JUMP)  ; LAB_00486e71
    SHL EAX,0x1                         ; 00486e46
    ADD EBX,EAX                         ; 00486e48
    MOV EAX,dword ptr [EDI + 0x28]      ; 00486e4a
    SUB EAX,dword ptr [ESI + 0x28]      ; 00486e4d
    IMUL dword ptr [ECX*0x4 + 0x1c4f034] ; 00486e50 | DAT_01c4f034
    MOV ESI,dword ptr [ESI + 0x28]      ; 00486e57
    MOV EAX,ESI                         ; 00486e5a
        ;   Label: LAB_00486e5a
    SAR EAX,0x8                         ; 00486e5c
    MOVZX EDI,word ptr [EBX]            ; 00486e5f
    CMP EAX,EDI                         ; 00486e62
    JNC 0x00486e69                      ; 00486e64
        ;   XREF to: 00486e69 (CONDITIONAL_JUMP)  ; LAB_00486e69
    MOV word ptr [EBX],AX               ; 00486e66
    ADD ESI,EDX                         ; 00486e69
        ;   Label: LAB_00486e69
    ADD EBX,0x2                         ; 00486e6b
    DEC ECX                             ; 00486e6e
    JG 0x00486e5a                       ; 00486e6f
        ;   XREF to: 00486e5a (CONDITIONAL_JUMP)  ; LAB_00486e5a
    POP EDI                             ; 00486e71
        ;   Label: LAB_00486e71
    POP ESI                             ; 00486e72
    RET                                 ; 00486e73

