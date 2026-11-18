; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[57]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a45
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0 at 00406385
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 00404799
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406e30
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406cf0
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405575
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405695
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406af0 at 00406b98
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 0040583b
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610 at 004066c0
;   ... and 47 more
;
; Referenced Globals:
;   int g_INT_005fba38 = 0xff
;   int g_ScanlinePixelCount = 0x0
;   int g_StartTextureU = 0x0
;   int g_StartTextureV = 0x0
;   int g_StartDepthW = 0x0
;   int* g_CurrentScreenPtr = 00000000
;   int* g_CurrentZBufferPtr = 00000000
;   int g_HardwareDeltaTextureU = 0x0
;   int g_HardwareDeltaTextureV = 0x0
;   int g_HardwareDeltaDepthZ = 0x0
;   double g_BufferFillZeroQword = 0.0
;   qword g_VertexRedStart = 0x0
;   _MMX_INTEGER g_VertexGreenStart
;   _MMX_INTEGER g_VertexBlueStart
;   qword g_VertexRedDelta = 0x0
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00561713
        ;   Label: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_00561713
    PUSH EDI                            ; 00561714
    PUSH EBP                            ; 00561715
    MOV EAX,dword ptr [ESI + 0x8]       ; 00561716
    MOV ECX,dword ptr [EDI + 0x8]       ; 00561719
    CMP EAX,ECX                         ; 0056171c
    JBE 0x00561723                      ; 0056171e
        ;   XREF to: 00561723 (CONDITIONAL_JUMP)  ; LAB_00561723
    XCHG EAX,ECX                        ; 00561720
    XCHG EDI,ESI                        ; 00561721
    SHR ECX,0x10                        ; 00561723
        ;   Label: LAB_00561723
    SHR EAX,0x10                        ; 00561726
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 00561729 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 00561730 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00561737
    JLE 0x00561c0c                      ; 00561739
        ;   XREF to: 00561c0c (CONDITIONAL_JUMP)  ; LAB_00561c0c
    LEA EBX,[EBX + EAX*0x2]             ; 0056173f
    SHL ECX,0x2                         ; 00561742
    LEA EBP,[EBP + EAX*0x4]             ; 00561745
    MOV dword ptr [0x006048a4],ECX      ; 00561749 | g_ScanlinePixelCount
    MOV dword ptr [0x00604908],EBX      ; 0056174f | g_CurrentScreenPtr
    MOV dword ptr [0x0060490c],EBP      ; 00561755 | g_CurrentZBufferPtr
    CMP dword ptr [0x01c6e2b4],0x80     ; 0056175b | g_RenderStateFlags
    JZ 0x00561f99                       ; 00561765
        ;   XREF to: 00561f99 (CONDITIONAL_JUMP)  ; LAB_00561f99
    CMP dword ptr [0x01c6e2b8],0x5      ; 0056176b | g_VertexPreprocessMode
    JNZ 0x005617e4                      ; 00561772
        ;   XREF to: 005617e4 (CONDITIONAL_JUMP)  ; LAB_005617e4
    MOV EAX,dword ptr [ESI + 0x18]      ; 00561774
    MOV EBX,dword ptr [ESI + 0x28]      ; 00561777
    CDQ                                 ; 0056177a
    SHLD EDX,EAX,0x18                   ; 0056177b
    SHL EAX,0x18                        ; 0056177f
    IDIV EBX                            ; 00561782
    MOV [0x006048e0],EAX                ; 00561784 | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 00561789
    MOV EBX,dword ptr [EDI + 0x28]      ; 0056178c
    CDQ                                 ; 0056178f
    SHLD EDX,EAX,0x18                   ; 00561790
    SHL EAX,0x18                        ; 00561794
    IDIV EBX                            ; 00561797
    SUB EAX,dword ptr [0x006048e0]      ; 00561799 | g_StartTextureU
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056179f | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00604d10],EDX      ; 005617a5 | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 005617ab
    MOV EBX,dword ptr [ESI + 0x28]      ; 005617ae
    CDQ                                 ; 005617b1
    SHLD EDX,EAX,0x18                   ; 005617b2
    SHL EAX,0x18                        ; 005617b6
    IDIV EBX                            ; 005617b9
    MOV [0x006048e4],EAX                ; 005617bb | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 005617c0
    MOV EBX,dword ptr [EDI + 0x28]      ; 005617c3
    CDQ                                 ; 005617c6
    SHLD EDX,EAX,0x18                   ; 005617c7
    SHL EAX,0x18                        ; 005617cb
    IDIV EBX                            ; 005617ce
    SUB EAX,dword ptr [0x006048e4]      ; 005617d0 | g_StartTextureV
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005617d6 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00604d14],EDX      ; 005617dc | g_HardwareDeltaTextureV
    JMP 0x00561818                      ; 005617e2
        ;   XREF to: 00561818 (UNCONDITIONAL_JUMP)  ; LAB_00561818
    MOV EAX,dword ptr [EDI + 0x18]      ; 005617e4
        ;   Label: LAB_005617e4
    MOV EBX,dword ptr [ESI + 0x18]      ; 005617e7
    SUB EAX,EBX                         ; 005617ea
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005617ec | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006048e0],EBX      ; 005617f2 | g_StartTextureU
    MOV dword ptr [0x00604d10],EDX      ; 005617f8 | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 005617fe
    MOV EBX,dword ptr [ESI + 0x20]      ; 00561801
    SUB EAX,EBX                         ; 00561804
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00561806 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006048e4],EBX      ; 0056180c | g_StartTextureV
    MOV dword ptr [0x00604d14],EDX      ; 00561812 | g_HardwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 00561818
        ;   Label: LAB_00561818
    MOV EBX,dword ptr [ESI + 0x28]      ; 0056181b
    SUB EAX,EBX                         ; 0056181e
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00561820 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006048ec],EBX      ; 00561826 | g_StartDepthW
    MOV dword ptr [0x00604d18],EDX      ; 0056182c | g_HardwareDeltaDepthZ
    MOV EAX,dword ptr [EDI + 0x30]      ; 00561832
    MOV EBX,dword ptr [ESI + 0x30]      ; 00561835
    SUB EAX,EBX                         ; 00561838
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056183a | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00604dd0],EBX      ; 00561840 | g_VertexAlphaStart
    MOV dword ptr [0x00604dd8],EDX      ; 00561846 | g_VertexAlphaDelta
    MOV EBP,dword ptr [0x00604dd0]      ; 0056184c | g_VertexAlphaStart
    PXOR MM7,MM7                        ; 00561852
    TEST dword ptr [0x01c6e2b4],0x200   ; 00561855 | g_RenderStateFlags
    JNZ 0x00561894                      ; 0056185f
        ;   XREF to: 00561894 (CONDITIONAL_JUMP)  ; LAB_00561894
    TEST dword ptr [0x01c6e2b4],0x4     ; 00561861 | g_RenderStateFlags
    JNZ 0x00561951                      ; 0056186b
        ;   XREF to: 00561951 (CONDITIONAL_JUMP)  ; LAB_00561951
    TEST dword ptr [0x01c6e2b4],0x10    ; 00561871 | g_RenderStateFlags
    JNZ 0x005619dd                      ; 0056187b
        ;   XREF to: 005619dd (CONDITIONAL_JUMP)  ; LAB_005619dd
    MOVQ MM5,qword ptr [0x00605f08]     ; 00561881 | g_QWORD_ARRAY_00605710[255]
    PSLLW MM5,0x7                       ; 00561888
    PXOR MM6,MM6                        ; 0056188c
    JMP 0x00561a07                      ; 0056188f
        ;   XREF to: 00561a07 (UNCONDITIONAL_JUMP)  ; LAB_00561a07
    MOV EAX,dword ptr [EDI + 0x10]      ; 00561894
        ;   Label: LAB_00561894
    MOV EBX,dword ptr [ESI + 0x10]      ; 00561897
    SHR EAX,0x1                         ; 0056189a
    SHR EBX,0x1                         ; 0056189c
    SUB EAX,EBX                         ; 0056189e
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005618a0 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005618a6
    AND EDX,0xffff                      ; 005618ac
    MOV dword ptr [0x00604d90],EBX      ; 005618b2 | g_VertexRedStart
    MOV dword ptr [0x00604db0],EDX      ; 005618b8 | g_VertexRedDelta
    MOV EAX,dword ptr [EDI + 0x38]      ; 005618be
    MOV EBX,dword ptr [ESI + 0x38]      ; 005618c1
    SHR EAX,0x1                         ; 005618c4
    SHR EBX,0x1                         ; 005618c6
    SUB EAX,EBX                         ; 005618c8
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005618ca | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005618d0
    AND EDX,0xffff                      ; 005618d6
    MOV dword ptr [0x00604d98],EBX      ; 005618dc | g_VertexGreenStart
    MOV dword ptr [0x00604db8],EDX      ; 005618e2 | g_VertexGreenDelta
    MOV EAX,dword ptr [EDI + 0x40]      ; 005618e8
    MOV EBX,dword ptr [ESI + 0x40]      ; 005618eb
    SHR EAX,0x1                         ; 005618ee
    SHR EBX,0x1                         ; 005618f0
    SUB EAX,EBX                         ; 005618f2
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 005618f4 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005618fa
    AND EDX,0xffff                      ; 00561900
    MOV dword ptr [0x00604da0],EBX      ; 00561906 | g_VertexBlueStart
    MOV dword ptr [0x00604dc0],EDX      ; 0056190c | g_VertexBlueDelta
    MOVQ MM5,qword ptr [0x00604d90]     ; 00561912 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x00604db0]     ; 00561919 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 00561920
    PSLLQ MM6,0x10                      ; 00561924
    POR MM5,qword ptr [0x00604d98]      ; 00561928 | g_VertexGreenStart
    POR MM6,qword ptr [0x00604db8]      ; 0056192f | g_VertexGreenDelta
    PSLLQ MM5,0x10                      ; 00561936
    PSLLQ MM6,0x10                      ; 0056193a
    POR MM5,qword ptr [0x00604da0]      ; 0056193e | g_VertexBlueStart
    POR MM6,qword ptr [0x00604dc0]      ; 00561945 | g_VertexBlueDelta
    JMP 0x00561a07                      ; 0056194c
        ;   XREF to: 00561a07 (UNCONDITIONAL_JUMP)  ; LAB_00561a07
    MOV EAX,dword ptr [EDI + 0x10]      ; 00561951
        ;   Label: LAB_00561951
    MOV EBX,dword ptr [ESI + 0x10]      ; 00561954
    SUB EAX,0x100                       ; 00561957
    SUB EBX,0x100                       ; 0056195c
    CMP EAX,0xfff                       ; 00561962
    JBE 0x0056196e                      ; 00561967
        ;   XREF to: 0056196e (CONDITIONAL_JUMP)  ; LAB_0056196e
    MOV EAX,0xfff                       ; 00561969
    CMP EBX,0xfff                       ; 0056196e
        ;   Label: LAB_0056196e
    JBE 0x0056197b                      ; 00561974
        ;   XREF to: 0056197b (CONDITIONAL_JUMP)  ; LAB_0056197b
    MOV EBX,0xfff                       ; 00561976
    SHL EAX,0x3                         ; 0056197b
        ;   Label: LAB_0056197b
    SHL EBX,0x3                         ; 0056197e
    SUB EAX,EBX                         ; 00561981
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00561983 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 00561989
    AND EDX,0xffff                      ; 0056198f
    MOV dword ptr [0x00604d90],EBX      ; 00561995 | g_VertexRedStart
    MOV dword ptr [0x00604db0],EDX      ; 0056199b | g_VertexRedDelta
    MOVQ MM5,qword ptr [0x00604d90]     ; 005619a1 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x00604db0]     ; 005619a8 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005619af
    PSLLQ MM6,0x10                      ; 005619b3
    POR MM5,qword ptr [0x00604d90]      ; 005619b7 | g_VertexRedStart
    POR MM6,qword ptr [0x00604db0]      ; 005619be | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005619c5
    PSLLQ MM6,0x10                      ; 005619c9
    POR MM5,qword ptr [0x00604d90]      ; 005619cd | g_VertexRedStart
    POR MM6,qword ptr [0x00604db0]      ; 005619d4 | g_VertexRedDelta
    JMP 0x00561a07                      ; 005619db
        ;   XREF to: 00561a07 (UNCONDITIONAL_JUMP)  ; LAB_00561a07
    MOV EAX,[0x01c6b5c4]                ; 005619dd | g_INT_01c6b5c4
        ;   Label: LAB_005619dd
    SUB EAX,0x100                       ; 005619e2
    SHR EAX,0x4                         ; 005619e7
    CMP EAX,0xff                        ; 005619ea
    JC 0x005619f6                       ; 005619ef
        ;   XREF to: 005619f6 (CONDITIONAL_JUMP)  ; LAB_005619f6
    MOV EAX,0xff                        ; 005619f1
    MOVQ MM5,qword ptr [EAX*0x8 + 0x605710] ; 005619f6 | g_QWORD_ARRAY_00605710[255]
        ;   Label: LAB_005619f6
    PSLLW MM5,0x7                       ; 005619fe
    PXOR MM6,MM6                        ; 00561a02
    JMP 0x00561a07                      ; 00561a05
        ;   XREF to: 00561a07 (UNCONDITIONAL_JUMP)  ; LAB_00561a07
    MOV ECX,dword ptr [0x006048e0]      ; 00561a07 | g_StartTextureU
        ;   Label: LAB_00561a07
    MOV EDX,dword ptr [0x006048e4]      ; 00561a0d | g_StartTextureV
    MOV ESI,dword ptr [0x006048ec]      ; 00561a13 | g_StartDepthW
    MOV EDI,0x0                         ; 00561a19
    CMP dword ptr [0x01c6ced4],0x0      ; 00561a1e | g_CurrentTextureOpacityData
    JNZ 0x00561a37                      ; 00561a25
        ;   XREF to: 00561a37 (CONDITIONAL_JUMP)  ; LAB_00561a37
    TEST dword ptr [0x01c6e2b4],0x2     ; 00561a27 | g_RenderStateFlags
    JZ 0x00561e01                       ; 00561a31
        ;   XREF to: 00561e01 (CONDITIONAL_JUMP)  ; LAB_00561e01
    TEST dword ptr [0x01c6e2b4],0x100   ; 00561a37 | g_RenderStateFlags
        ;   Label: LAB_00561a37
    JNZ 0x00561a56                      ; 00561a41
        ;   XREF to: 00561a56 (CONDITIONAL_JUMP)  ; LAB_00561a56
    MOV EBP,dword ptr [0x005fba38]      ; 00561a43 | g_INT_005fba38
    SHL EBP,0x8                         ; 00561a49
    MOV dword ptr [0x00604dd8],0x0      ; 00561a4c | g_VertexAlphaDelta
    CMP dword ptr [0x01c6ced4],0x0      ; 00561a56 | g_CurrentTextureOpacityData
        ;   Label: LAB_00561a56
    JNZ 0x00561c12                      ; 00561a5d
        ;   XREF to: 00561c12 (CONDITIONAL_JUMP)  ; LAB_00561c12
    TEST dword ptr [0x01c6e2b4],0x40    ; 00561a63 | g_RenderStateFlags
        ;   Label: LAB_00561a63
    JZ 0x00561a7f                       ; 00561a6d
        ;   XREF to: 00561a7f (CONDITIONAL_JUMP)  ; LAB_00561a7f
    LEA EAX,[EDI]                       ; 00561a6f
    ADD EAX,dword ptr [0x0060490c]      ; 00561a71 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 00561a77
    JL 0x00561bd4                       ; 00561a79
        ;   XREF to: 00561bd4 (CONDITIONAL_JUMP)  ; LAB_00561bd4
    MOVD MM0,ECX                        ; 00561a7f
        ;   Label: LAB_00561a7f
    MOVD MM2,EDX                        ; 00561a82
    PSRLQ MM0,qword ptr [0x00604df8]    ; 00561a85 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00604e18]    ; 00561a8c | g_TextureShift2
    PAND MM0,qword ptr [0x00604e38]     ; 00561a93 | g_TextureMask1
    PAND MM2,qword ptr [0x00604e58]     ; 00561a9a | g_TextureMask2
    PADDD MM0,MM2                       ; 00561aa1
    MOVD EBX,MM0                        ; 00561aa4
    ADD EBX,dword ptr [0x01c6ced0]      ; 00561aa7 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 00561aad
    MOV EAX,dword ptr [EAX*0x4 + 0x1c6a974] ; 00561ab0 | g_Hardware32BitPalette
    CMP EAX,0x0                         ; 00561ab7
    JZ 0x00561bd4                       ; 00561aba
        ;   XREF to: 00561bd4 (CONDITIONAL_JUMP)  ; LAB_00561bd4
    MOVD MM0,EAX                        ; 00561ac0
    PUNPCKLBW MM0,MM7                   ; 00561ac3
    PXOR MM4,MM4                        ; 00561ac6
    TEST dword ptr [0x01c6e2b4],0x20    ; 00561ac9 | g_RenderStateFlags
    JZ 0x00561b1e                       ; 00561ad3
        ;   XREF to: 00561b1e (CONDITIONAL_JUMP)  ; LAB_00561b1e
    MOV EBX,EDI                         ; 00561ad5
    SHR EBX,0x1                         ; 00561ad7
    ADD EBX,dword ptr [0x00604908]      ; 00561ad9 | g_CurrentScreenPtr
    MOVZX EBX,word ptr [EBX]            ; 00561adf
    MOVD MM4,EBX                        ; 00561ae2
    PAND MM4,qword ptr [0x00604e70]     ; 00561ae5 | g_BlueMask16
    PSLLQ MM4,qword ptr [0x00604f00]    ; 00561aec | g_BlueBitShift
    MOVD MM2,EBX                        ; 00561af3
    PAND MM2,qword ptr [0x00604e68]     ; 00561af6 | g_GreenMask16
    PSLLQ MM2,qword ptr [0x00604ee0]    ; 00561afd | g_GreenBlueDitherShift
    POR MM4,MM2                         ; 00561b04
    MOVD MM2,EBX                        ; 00561b07
    PAND MM2,qword ptr [0x00604e60]     ; 00561b0a | g_RedMask16
    PSLLQ MM2,qword ptr [0x00604ec0]    ; 00561b11 | g_TotalDitherShift
    POR MM4,MM2                         ; 00561b18
    PUNPCKLBW MM4,MM7                   ; 00561b1b
    PSLLW MM0,0x4                       ; 00561b1e
        ;   Label: LAB_00561b1e
    MOVQ MM7,MM5                        ; 00561b22
    MOV EAX,EBP                         ; 00561b25
    PSRLW MM7,0x3                       ; 00561b27
    SAR EAX,0x8                         ; 00561b2b
    PMULHW MM0,MM7                      ; 00561b2e
    MOVQ MM2,qword ptr [EAX*0x8 + 0x605710] ; 00561b31 | g_QWORD_ARRAY_00605710[255]
    PXOR MM7,MM7                        ; 00561b39
    MOVQ MM3,MM2                        ; 00561b3c
    PACKUSWB MM0,MM7                    ; 00561b3f
    PXOR MM3,qword ptr [0x00605f08]     ; 00561b42 | g_QWORD_ARRAY_00605710[255]
    PUNPCKLBW MM0,MM7                   ; 00561b49
    CMP dword ptr [0x01c6e2ac],0x0      ; 00561b4c | g_INT_01c6e2ac
    JNZ 0x00561b67                      ; 00561b53
        ;   XREF to: 00561b67 (CONDITIONAL_JUMP)  ; LAB_00561b67
    PMULLW MM4,MM3                      ; 00561b55
    PMULLW MM0,MM2                      ; 00561b58
    PADDUSW MM0,MM4                     ; 00561b5b
    PSRLW MM0,0x8                       ; 00561b5e
    PACKUSWB MM0,MM7                    ; 00561b62
    JMP 0x00561b78                      ; 00561b65
        ;   XREF to: 00561b78 (UNCONDITIONAL_JUMP)  ; LAB_00561b78
    PSLLW MM4,0x8                       ; 00561b67
        ;   Label: LAB_00561b67
    PMULLW MM0,MM2                      ; 00561b6b
    PADDUSW MM0,MM4                     ; 00561b6e
    PSRLW MM0,0x8                       ; 00561b71
    PACKUSWB MM0,MM7                    ; 00561b75
    MOV EBX,EDI                         ; 00561b78
        ;   Label: LAB_00561b78
    SHR EBX,0x1                         ; 00561b7a
    ADD EBX,dword ptr [0x00604908]      ; 00561b7c | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 00561b82
    MOVQ MM4,MM0                        ; 00561b85
    PAND MM0,qword ptr [0x00604eb8]     ; 00561b88 | g_BlueMask32
    PAND MM2,qword ptr [0x00604e98]     ; 00561b8f | g_GreenMask32
    PAND MM4,qword ptr [0x00604e78]     ; 00561b96 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00561b9d | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00561ba4 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x00604ec0]    ; 00561bab | g_TotalDitherShift
    POR MM0,MM2                         ; 00561bb2
    POR MM0,MM4                         ; 00561bb5
    MOVD EAX,MM0                        ; 00561bb8
    MOV word ptr [EBX],AX               ; 00561bbb
    TEST dword ptr [0x01c6e2b4],0x80    ; 00561bbe | g_RenderStateFlags
    JZ 0x00561bd4                       ; 00561bc8
        ;   XREF to: 00561bd4 (CONDITIONAL_JUMP)  ; LAB_00561bd4
    MOV EAX,EDI                         ; 00561bca
    ADD EAX,dword ptr [0x0060490c]      ; 00561bcc | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 00561bd2
    ADD EDI,0x4                         ; 00561bd4
        ;   Label: LAB_00561bd4
    CMP EDI,dword ptr [0x006048a4]      ; 00561bd7 | g_ScanlinePixelCount
    JNC 0x00561c0c                      ; 00561bdd
        ;   XREF to: 00561c0c (CONDITIONAL_JUMP)  ; LAB_00561c0c
    ADD ECX,dword ptr [0x00604d10]      ; 00561bdf | g_HardwareDeltaTextureU
    PADDW MM5,MM6                       ; 00561be5
    ADD EDX,dword ptr [0x00604d14]      ; 00561be8 | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 00561bee
    ADD ESI,dword ptr [0x00604d18]      ; 00561bf1 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 00561bf7 | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x00604dd8]      ; 00561bfe | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 00561c04
    JMP 0x00561a63                      ; 00561c07
        ;   XREF to: 00561a63 (UNCONDITIONAL_JUMP)  ; LAB_00561a63
    POP EBP                             ; 00561c0c
        ;   Label: LAB_00561c0c
    EMMS                                ; 00561c0d
    POP EDI                             ; 00561c0f
    POP ESI                             ; 00561c10
    RET                                 ; 00561c11
    TEST dword ptr [0x01c6e2b4],0x40    ; 00561c12 | g_RenderStateFlags
        ;   Label: LAB_00561c12
    JZ 0x00561c2e                       ; 00561c1c
        ;   XREF to: 00561c2e (CONDITIONAL_JUMP)  ; LAB_00561c2e
    LEA EAX,[EDI]                       ; 00561c1e
    ADD EAX,dword ptr [0x0060490c]      ; 00561c20 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 00561c26
    JL 0x00561dc3                       ; 00561c28
        ;   XREF to: 00561dc3 (CONDITIONAL_JUMP)  ; LAB_00561dc3
    MOVD MM0,ECX                        ; 00561c2e
        ;   Label: LAB_00561c2e
    MOVD MM2,EDX                        ; 00561c31
    PSRLQ MM0,qword ptr [0x00604df8]    ; 00561c34 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00604e18]    ; 00561c3b | g_TextureShift2
    PAND MM0,qword ptr [0x00604e38]     ; 00561c42 | g_TextureMask1
    PAND MM2,qword ptr [0x00604e58]     ; 00561c49 | g_TextureMask2
    PADDD MM0,MM2                       ; 00561c50
    MOVD EBX,MM0                        ; 00561c53
    ADD EBX,dword ptr [0x01c6ced0]      ; 00561c56 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 00561c5c
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 00561c5f | g_Hardware32BitPalette
    PUNPCKLBW MM0,MM7                   ; 00561c67
    SUB EBX,dword ptr [0x01c6ced0]      ; 00561c6a | g_CurrentTextureData
    ADD EBX,dword ptr [0x01c6ced4]      ; 00561c70 | g_CurrentTextureOpacityData
    MOVZX EAX,byte ptr [EBX]            ; 00561c76
    TEST EAX,0xffffffff                 ; 00561c79
    JZ 0x00561dc3                       ; 00561c7e
        ;   XREF to: 00561dc3 (CONDITIONAL_JUMP)  ; LAB_00561dc3
    CMP EBP,0xff00                      ; 00561c84
    JLE 0x00561c97                      ; 00561c8a
        ;   XREF to: 00561c97 (CONDITIONAL_JUMP)  ; LAB_00561c97
    CMP EAX,0xff                        ; 00561c8c
    JGE 0x00561d2a                      ; 00561c91
        ;   XREF to: 00561d2a (CONDITIONAL_JUMP)  ; LAB_00561d2a
    MOV EBX,EDI                         ; 00561c97
        ;   Label: LAB_00561c97
    SHR EBX,0x1                         ; 00561c99
    ADD EBX,dword ptr [0x00604908]      ; 00561c9b | g_CurrentScreenPtr
    MOVZX EBX,word ptr [EBX]            ; 00561ca1
    MOVD MM4,EBX                        ; 00561ca4
    PAND MM4,qword ptr [0x00604e70]     ; 00561ca7 | g_BlueMask16
    PSLLQ MM4,qword ptr [0x00604f00]    ; 00561cae | g_BlueBitShift
    MOVD MM2,EBX                        ; 00561cb5
    PAND MM2,qword ptr [0x00604e68]     ; 00561cb8 | g_GreenMask16
    PSLLQ MM2,qword ptr [0x00604ee0]    ; 00561cbf | g_GreenBlueDitherShift
    POR MM4,MM2                         ; 00561cc6
    MOVD MM2,EBX                        ; 00561cc9
    PAND MM2,qword ptr [0x00604e60]     ; 00561ccc | g_RedMask16
    PSLLQ MM2,qword ptr [0x00604ec0]    ; 00561cd3 | g_TotalDitherShift
    POR MM4,MM2                         ; 00561cda
    PUNPCKLBW MM4,MM7                   ; 00561cdd
    PSLLW MM0,0x4                       ; 00561ce0
    MOVQ MM7,MM5                        ; 00561ce4
    IMUL EAX,EBP                        ; 00561ce7
    PSRLW MM7,0x3                       ; 00561cea
    SHR EAX,0x10                        ; 00561cee
    PMULHW MM0,MM7                      ; 00561cf1
    MOVQ MM2,qword ptr [EAX*0x8 + 0x605710] ; 00561cf4 | g_QWORD_ARRAY_00605710
    PXOR MM7,MM7                        ; 00561cfc
    MOVQ MM3,MM2                        ; 00561cff
    PACKUSWB MM0,MM7                    ; 00561d02
    PXOR MM3,qword ptr [0x00605f08]     ; 00561d05 | g_QWORD_ARRAY_00605710[255]
    PUNPCKLBW MM0,MM7                   ; 00561d0c
    CMP dword ptr [0x01c6e2ac],0x0      ; 00561d0f | g_INT_01c6e2ac
    JNZ 0x00561d56                      ; 00561d16
        ;   XREF to: 00561d56 (CONDITIONAL_JUMP)  ; LAB_00561d56
    PMULLW MM4,MM3                      ; 00561d18
    PMULLW MM0,MM2                      ; 00561d1b
    PADDUSW MM0,MM4                     ; 00561d1e
    PSRLW MM0,0x8                       ; 00561d21
    PACKUSWB MM0,MM7                    ; 00561d25
    JMP 0x00561d67                      ; 00561d28
        ;   XREF to: 00561d67 (UNCONDITIONAL_JUMP)  ; LAB_00561d67
    CMP EBP,0xff                        ; 00561d2a
        ;   Label: LAB_00561d2a
    JL 0x00561c97                       ; 00561d30
        ;   XREF to: 00561c97 (CONDITIONAL_JUMP)  ; LAB_00561c97
    CMP dword ptr [0x01c6e2ac],0x0      ; 00561d36 | g_INT_01c6e2ac
    JNZ 0x00561c97                      ; 00561d3d
        ;   XREF to: 00561c97 (CONDITIONAL_JUMP)  ; LAB_00561c97
    MOVQ MM3,MM5                        ; 00561d43
    PSRLW MM3,0x3                       ; 00561d46
    PSLLW MM0,0x4                       ; 00561d4a
    PMULHW MM0,MM3                      ; 00561d4e
    PACKUSWB MM0,MM7                    ; 00561d51
    JMP 0x00561d67                      ; 00561d54
        ;   XREF to: 00561d67 (UNCONDITIONAL_JUMP)  ; LAB_00561d67
    PSLLW MM4,0x8                       ; 00561d56
        ;   Label: LAB_00561d56
    PMULLW MM0,MM2                      ; 00561d5a
    PADDUSW MM0,MM4                     ; 00561d5d
    PSRLW MM0,0x8                       ; 00561d60
    PACKUSWB MM0,MM7                    ; 00561d64
    MOV EBX,EDI                         ; 00561d67
        ;   Label: LAB_00561d67
    SHR EBX,0x1                         ; 00561d69
    ADD EBX,dword ptr [0x00604908]      ; 00561d6b | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 00561d71
    MOVQ MM4,MM0                        ; 00561d74
    PAND MM0,qword ptr [0x00604eb8]     ; 00561d77 | g_BlueMask32
    PAND MM2,qword ptr [0x00604e98]     ; 00561d7e | g_GreenMask32
    PAND MM4,qword ptr [0x00604e78]     ; 00561d85 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00561d8c | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00561d93 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x00604ec0]    ; 00561d9a | g_TotalDitherShift
    POR MM0,MM2                         ; 00561da1
    POR MM0,MM4                         ; 00561da4
    MOVD EAX,MM0                        ; 00561da7
    MOV word ptr [EBX],AX               ; 00561daa
    TEST dword ptr [0x01c6e2b4],0x80    ; 00561dad | g_RenderStateFlags
    JZ 0x00561dc3                       ; 00561db7
        ;   XREF to: 00561dc3 (CONDITIONAL_JUMP)  ; LAB_00561dc3
    MOV EAX,EDI                         ; 00561db9
    ADD EAX,dword ptr [0x0060490c]      ; 00561dbb | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 00561dc1
    ADD EDI,0x4                         ; 00561dc3
        ;   Label: LAB_00561dc3
    CMP EDI,dword ptr [0x006048a4]      ; 00561dc6 | g_ScanlinePixelCount
    JNC 0x00561dfb                      ; 00561dcc
        ;   XREF to: 00561dfb (CONDITIONAL_JUMP)  ; LAB_00561dfb
    ADD ECX,dword ptr [0x00604d10]      ; 00561dce | g_HardwareDeltaTextureU
    PADDW MM5,MM6                       ; 00561dd4
    ADD EDX,dword ptr [0x00604d14]      ; 00561dd7 | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 00561ddd
    ADD ESI,dword ptr [0x00604d18]      ; 00561de0 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 00561de6 | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x00604dd8]      ; 00561ded | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 00561df3
    JMP 0x00561c12                      ; 00561df6
        ;   XREF to: 00561c12 (UNCONDITIONAL_JUMP)  ; LAB_00561c12
    POP EBP                             ; 00561dfb
        ;   Label: LAB_00561dfb
    EMMS                                ; 00561dfc
    POP EDI                             ; 00561dfe
    POP ESI                             ; 00561dff
    RET                                 ; 00561e00
    MOVQ MM1,qword ptr [0x01c6e2bc]     ; 00561e01 | g_SolidColorMode
        ;   Label: LAB_00561e01
    PUNPCKLBW MM1,MM7                   ; 00561e08
    TEST dword ptr [0x01c6e2b4],0x8     ; 00561e0b | g_RenderStateFlags
    JNZ 0x00561e26                      ; 00561e15
        ;   XREF to: 00561e26 (CONDITIONAL_JUMP)  ; LAB_00561e26
    MOV EBP,0x0                         ; 00561e17
    MOV dword ptr [0x00604dd8],0x0      ; 00561e1c | g_VertexAlphaDelta
    TEST dword ptr [0x01c6e2b4],0x40    ; 00561e26 | g_RenderStateFlags
        ;   Label: LAB_00561e26
    JZ 0x00561e42                       ; 00561e30
        ;   XREF to: 00561e42 (CONDITIONAL_JUMP)  ; LAB_00561e42
    LEA EAX,[EDI]                       ; 00561e32
    ADD EAX,dword ptr [0x0060490c]      ; 00561e34 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 00561e3a
    JL 0x00561f33                       ; 00561e3c
        ;   XREF to: 00561f33 (CONDITIONAL_JUMP)  ; LAB_00561f33
    TEST dword ptr [0x01c6e2b4],0x1     ; 00561e42 | g_RenderStateFlags
        ;   Label: LAB_00561e42
    JZ 0x00561f75                       ; 00561e4c
        ;   XREF to: 00561f75 (CONDITIONAL_JUMP)  ; LAB_00561f75
    MOVD MM0,ECX                        ; 00561e52
    MOVD MM2,EDX                        ; 00561e55
    PSRLQ MM0,qword ptr [0x00604df8]    ; 00561e58 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00604e18]    ; 00561e5f | g_TextureShift2
    PAND MM0,qword ptr [0x00604e38]     ; 00561e66 | g_TextureMask1
    PAND MM2,qword ptr [0x00604e58]     ; 00561e6d | g_TextureMask2
    PADDD MM0,MM2                       ; 00561e74
    MOVD EBX,MM0                        ; 00561e77
    ADD EBX,dword ptr [0x01c6ced0]      ; 00561e7a | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 00561e80
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c6a974] ; 00561e83 | g_Hardware32BitPalette
    MOVQ MM3,MM5                        ; 00561e8b
        ;   Label: LAB_00561e8b
    PUNPCKLBW MM0,MM7                   ; 00561e8e
    PSRLW MM3,0x3                       ; 00561e91
    PSLLW MM0,0x4                       ; 00561e95
    PMULHW MM0,MM3                      ; 00561e99
    PACKUSWB MM0,MM7                    ; 00561e9c
    TEST dword ptr [0x01c6e2b4],0x8     ; 00561e9f | g_RenderStateFlags
    JZ 0x00561ed8                       ; 00561ea9
        ;   XREF to: 00561ed8 (CONDITIONAL_JUMP)  ; LAB_00561ed8
    MOV EAX,EBP                         ; 00561eab
    SAR EAX,0x8                         ; 00561ead
    MOVQ MM3,qword ptr [EAX*0x8 + 0x605710] ; 00561eb0 | g_QWORD_ARRAY_00605710
    MOVQ MM4,MM1                        ; 00561eb8
    MOVQ MM2,MM3                        ; 00561ebb
    PMULLW MM4,MM3                      ; 00561ebe
    PXOR MM2,qword ptr [0x00605f08]     ; 00561ec1 | g_QWORD_ARRAY_00605710[255]
    PUNPCKLBW MM0,MM7                   ; 00561ec8
    PMULLW MM0,MM2                      ; 00561ecb
    PADDW MM0,MM4                       ; 00561ece
    PSRLW MM0,0x8                       ; 00561ed1
    PACKUSWB MM0,MM7                    ; 00561ed5
    MOV EBX,EDI                         ; 00561ed8
        ;   Label: LAB_00561ed8
    SHR EBX,0x1                         ; 00561eda
    ADD EBX,dword ptr [0x00604908]      ; 00561edc | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 00561ee2
    MOVQ MM4,MM0                        ; 00561ee5
    PAND MM0,qword ptr [0x00604eb8]     ; 00561ee8 | g_BlueMask32
    PAND MM2,qword ptr [0x00604e98]     ; 00561eef | g_GreenMask32
    PAND MM4,qword ptr [0x00604e78]     ; 00561ef6 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00604f00]    ; 00561efd | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00604ee0]    ; 00561f04 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x00604ec0]    ; 00561f0b | g_TotalDitherShift
    POR MM0,MM2                         ; 00561f12
    POR MM0,MM4                         ; 00561f15
    MOVD EAX,MM0                        ; 00561f18
    MOV word ptr [EBX],AX               ; 00561f1b
    TEST dword ptr [0x01c6e2b4],0x80    ; 00561f1e | g_RenderStateFlags
    JZ 0x00561f33                       ; 00561f28
        ;   XREF to: 00561f33 (CONDITIONAL_JUMP)  ; LAB_00561f33
    MOV EAX,[0x0060490c]                ; 00561f2a | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 00561f2f
    MOV dword ptr [EAX],ESI             ; 00561f31
    ADD EDI,0x4                         ; 00561f33
        ;   Label: LAB_00561f33
    CMP EDI,dword ptr [0x006048a4]      ; 00561f36 | g_ScanlinePixelCount
    JNC 0x00561c0c                      ; 00561f3c
        ;   XREF to: 00561c0c (CONDITIONAL_JUMP)  ; LAB_00561c0c
    ADD ECX,dword ptr [0x00604d10]      ; 00561f42 | g_HardwareDeltaTextureU
    PADDW MM5,MM6                       ; 00561f48
    ADD EDX,dword ptr [0x00604d14]      ; 00561f4b | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 00561f51
    ADD ESI,dword ptr [0x00604d18]      ; 00561f54 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x00604d1c]  ; 00561f5a | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x00604dd8]      ; 00561f61 | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 00561f67
    JMP 0x00561e26                      ; 00561f6a
        ;   XREF to: 00561e26 (UNCONDITIONAL_JUMP)  ; LAB_00561e26
    TEST dword ptr [0x01c6e2b4],0x200   ; 00561f75 | g_RenderStateFlags
        ;   Label: LAB_00561f75
    JNZ 0x00561f8d                      ; 00561f7f
        ;   XREF to: 00561f8d (CONDITIONAL_JUMP)  ; LAB_00561f8d
    MOVD MM0,dword ptr [0x01c6b5c0]     ; 00561f81 | g_INT_01c6b5c0
    JMP 0x00561e8b                      ; 00561f88
        ;   XREF to: 00561e8b (UNCONDITIONAL_JUMP)  ; LAB_00561e8b
    MOVD MM0,dword ptr [0x00604f08]     ; 00561f8d | g_SpecialColor
        ;   Label: LAB_00561f8d
    JMP 0x00561e8b                      ; 00561f94
        ;   XREF to: 00561e8b (UNCONDITIONAL_JUMP)  ; LAB_00561e8b
    MOV EAX,dword ptr [EDI + 0x28]      ; 00561f99
        ;   Label: LAB_00561f99
    MOV EBX,dword ptr [ESI + 0x28]      ; 00561f9c
    SUB EAX,EBX                         ; 00561f9f
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00561fa1 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006048ec],EBX      ; 00561fa7 | g_StartDepthW
    MOV dword ptr [0x00604d18],EDX      ; 00561fad | g_HardwareDeltaDepthZ
    MOV EAX,[0x006048ec]                ; 00561fb3 | g_StartDepthW
    MOV EBX,dword ptr [0x00604d18]      ; 00561fb8 | g_HardwareDeltaDepthZ
    MOV ESI,dword ptr [0x0060490c]      ; 00561fbe | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x006048a4]      ; 00561fc4 | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 00561fca
        ;   Label: LAB_00561fca
    ADD EAX,EBX                         ; 00561fcc
    ADD ESI,0x4                         ; 00561fce
    SUB ECX,0x4                         ; 00561fd1
    JG 0x00561fca                       ; 00561fd4
        ;   XREF to: 00561fca (CONDITIONAL_JUMP)  ; LAB_00561fca
    POP EBP                             ; 00561fd6
    EMMS                                ; 00561fd7
    POP EDI                             ; 00561fd9
    POP ESI                             ; 00561fda
    RET                                 ; 00561fdb

