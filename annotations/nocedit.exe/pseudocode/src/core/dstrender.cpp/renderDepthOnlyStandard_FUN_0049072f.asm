; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[20]:
;   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0 at 0048a8e8
;   engine_drender.cpp_CDemonRenderer_renderBasicTextured_FUN_0048a820 at 0048a839
;   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeatureWithIndices_FUN_0048bfe0 at 0048c055
;   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 at 0048bf65
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 at 0048be35
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 at 0048bd45
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 at 0048d30e
;   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 at 0048d46d
;   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 at 0048bc15
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 at 0048bb25
;   ... and 10 more
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;   undefined4 DAT_02d02584
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049072f
        ;   Label: core_dstrender.cpp_renderDepthOnlyStandard_FUN_0049072f
    PUSH EDI                            ; 00490730
    MOV EAX,dword ptr [ESI + 0x8]       ; 00490731
    MOV ECX,dword ptr [EDI + 0x8]       ; 00490734
    CMP EAX,ECX                         ; 00490737
    JBE 0x0049073e                      ; 00490739
        ;   XREF to: 0049073e (CONDITIONAL_JUMP)  ; LAB_0049073e
    XCHG EAX,ECX                        ; 0049073b
    XCHG EDI,ESI                        ; 0049073c
    SHR EAX,0x10                        ; 0049073e
        ;   Label: LAB_0049073e
    SHR ECX,0x10                        ; 00490741
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 00490744 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 0049074b
    JLE 0x0049077a                      ; 0049074d
        ;   XREF to: 0049077a (CONDITIONAL_JUMP)  ; LAB_0049077a
    SHL EAX,0x1                         ; 0049074f
    ADD EBX,EAX                         ; 00490751
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490753
    SUB EAX,dword ptr [ESI + 0x28]      ; 00490756
    IMUL dword ptr [ECX*0x4 + 0x2d02584] ; 00490759 | DAT_02d02584
    MOV ESI,dword ptr [ESI + 0x28]      ; 00490760
    MOV EAX,ESI                         ; 00490763
        ;   Label: LAB_00490763
    SAR EAX,0x8                         ; 00490765
    MOVZX EDI,word ptr [EBX]            ; 00490768
    CMP EAX,EDI                         ; 0049076b
    JNC 0x00490772                      ; 0049076d
        ;   XREF to: 00490772 (CONDITIONAL_JUMP)  ; LAB_00490772
    MOV word ptr [EBX],AX               ; 0049076f
    ADD ESI,EDX                         ; 00490772
        ;   Label: LAB_00490772
    ADD EBX,0x2                         ; 00490774
    DEC ECX                             ; 00490777
    JG 0x00490763                       ; 00490778
        ;   XREF to: 00490763 (CONDITIONAL_JUMP)  ; LAB_00490763
    POP EDI                             ; 0049077a
        ;   Label: LAB_0049077a
    POP ESI                             ; 0049077b
    RET                                 ; 0049077c

