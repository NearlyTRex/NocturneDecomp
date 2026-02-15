; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_renderDepthOnlyReversed_FUN_004906e9(SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 at 0048d557
;
; Referenced Globals:
;   uint*[1200] g_ZBufferScanlineArray
;   undefined4 DAT_02d02584
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004906e9
        ;   Label: core_dstrender.cpp_renderDepthOnlyReversed_FUN_004906e9
    PUSH EDI                            ; 004906ea
    MOV EAX,dword ptr [ESI + 0x8]       ; 004906eb
    MOV ECX,dword ptr [EDI + 0x8]       ; 004906ee
    CMP EAX,ECX                         ; 004906f1
    JBE 0x004906f8                      ; 004906f3
        ;   XREF to: 004906f8 (CONDITIONAL_JUMP)  ; LAB_004906f8
    XCHG EAX,ECX                        ; 004906f5
    XCHG EDI,ESI                        ; 004906f6
    SHR EAX,0x10                        ; 004906f8
        ;   Label: LAB_004906f8
    SHR ECX,0x10                        ; 004906fb
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 004906fe | g_ZBufferScanlineArray
    SUB ECX,EAX                         ; 00490705
    JLE 0x0049072c                      ; 00490707
        ;   XREF to: 0049072c (CONDITIONAL_JUMP)  ; LAB_0049072c
    SHL EAX,0x2                         ; 00490709
    ADD EBX,EAX                         ; 0049070c
    MOV EAX,dword ptr [EDI + 0x28]      ; 0049070e
    SUB EAX,dword ptr [ESI + 0x28]      ; 00490711
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 00490714 | DAT_02d02584
    MOV ESI,dword ptr [ESI + 0x28]      ; 0049071b
    CMP ESI,dword ptr [EBX]             ; 0049071e
        ;   Label: LAB_0049071e
    JL 0x00490724                       ; 00490720
        ;   XREF to: 00490724 (CONDITIONAL_JUMP)  ; LAB_00490724
    MOV dword ptr [EBX],ESI             ; 00490722
    ADD ESI,EDX                         ; 00490724
        ;   Label: LAB_00490724
    ADD EBX,0x4                         ; 00490726
    DEC ECX                             ; 00490729
    JG 0x0049071e                       ; 0049072a
        ;   XREF to: 0049071e (CONDITIONAL_JUMP)  ; LAB_0049071e
    POP EDI                             ; 0049072c
        ;   Label: LAB_0049072c
    POP ESI                             ; 0049072d
    RET                                 ; 0049072e

