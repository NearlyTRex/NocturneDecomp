; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[57]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a45
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280 at 00406365
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 00404799
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406e10
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406cd0
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405575
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405695
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0 at 00406b78
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 0040583b
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004065f0 at 004066a0
;   ... and 47 more
;
; Referenced Globals:
;   int g_CurrentAlphaValue = 0xff
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

    PUSH ESI                            ; 0057e5e3
        ;   Label: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3
    PUSH EDI                            ; 0057e5e4
    PUSH EBP                            ; 0057e5e5
    MOV EAX,dword ptr [ESI + 0x8]       ; 0057e5e6
    MOV ECX,dword ptr [EDI + 0x8]       ; 0057e5e9
    CMP EAX,ECX                         ; 0057e5ec
    JBE 0x0057e5f3                      ; 0057e5ee
        ;   XREF to: 0057e5f3 (CONDITIONAL_JUMP)  ; LAB_0057e5f3
    XCHG EAX,ECX                        ; 0057e5f0
    XCHG EDI,ESI                        ; 0057e5f1
    SHR ECX,0x10                        ; 0057e5f3
        ;   Label: LAB_0057e5f3
    SHR EAX,0x10                        ; 0057e5f6
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0057e5f9 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057e600 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 0057e607
    JLE 0x0057eadc                      ; 0057e609
        ;   XREF to: 0057eadc (CONDITIONAL_JUMP)  ; LAB_0057eadc
    LEA EBX,[EBX + EAX*0x2]             ; 0057e60f
    SHL ECX,0x2                         ; 0057e612
    LEA EBP,[EBP + EAX*0x4]             ; 0057e615
    MOV dword ptr [0x00623964],ECX      ; 0057e619 | g_ScanlinePixelCount
    MOV dword ptr [0x006239c8],EBX      ; 0057e61f | g_CurrentScreenPtr
    MOV dword ptr [0x006239cc],EBP      ; 0057e625 | g_CurrentZBufferPtr
    CMP dword ptr [0x01c51d14],0x80     ; 0057e62b | g_RenderStateFlags
    JZ 0x0057ee69                       ; 0057e635
        ;   XREF to: 0057ee69 (CONDITIONAL_JUMP)  ; LAB_0057ee69
    CMP dword ptr [0x01c51d18],0x5      ; 0057e63b | g_VertexPreprocessMode
    JNZ 0x0057e6b4                      ; 0057e642
        ;   XREF to: 0057e6b4 (CONDITIONAL_JUMP)  ; LAB_0057e6b4
    MOV EAX,dword ptr [ESI + 0x18]      ; 0057e644
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057e647
    CDQ                                 ; 0057e64a
    SHLD EDX,EAX,0x18                   ; 0057e64b
    SHL EAX,0x18                        ; 0057e64f
    IDIV EBX                            ; 0057e652
    MOV [0x006239a0],EAX                ; 0057e654 | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057e659
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057e65c
    CDQ                                 ; 0057e65f
    SHLD EDX,EAX,0x18                   ; 0057e660
    SHL EAX,0x18                        ; 0057e664
    IDIV EBX                            ; 0057e667
    SUB EAX,dword ptr [0x006239a0]      ; 0057e669 | g_StartTextureU
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e66f | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00623dd0],EDX      ; 0057e675 | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 0057e67b
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057e67e
    CDQ                                 ; 0057e681
    SHLD EDX,EAX,0x18                   ; 0057e682
    SHL EAX,0x18                        ; 0057e686
    IDIV EBX                            ; 0057e689
    MOV [0x006239a4],EAX                ; 0057e68b | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057e690
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057e693
    CDQ                                 ; 0057e696
    SHLD EDX,EAX,0x18                   ; 0057e697
    SHL EAX,0x18                        ; 0057e69b
    IDIV EBX                            ; 0057e69e
    SUB EAX,dword ptr [0x006239a4]      ; 0057e6a0 | g_StartTextureV
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e6a6 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00623dd4],EDX      ; 0057e6ac | g_HardwareDeltaTextureV
    JMP 0x0057e6e8                      ; 0057e6b2
        ;   XREF to: 0057e6e8 (UNCONDITIONAL_JUMP)  ; LAB_0057e6e8
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057e6b4
        ;   Label: LAB_0057e6b4
    MOV EBX,dword ptr [ESI + 0x18]      ; 0057e6b7
    SUB EAX,EBX                         ; 0057e6ba
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e6bc | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006239a0],EBX      ; 0057e6c2 | g_StartTextureU
    MOV dword ptr [0x00623dd0],EDX      ; 0057e6c8 | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057e6ce
    MOV EBX,dword ptr [ESI + 0x20]      ; 0057e6d1
    SUB EAX,EBX                         ; 0057e6d4
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e6d6 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006239a4],EBX      ; 0057e6dc | g_StartTextureV
    MOV dword ptr [0x00623dd4],EDX      ; 0057e6e2 | g_HardwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057e6e8
        ;   Label: LAB_0057e6e8
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057e6eb
    SUB EAX,EBX                         ; 0057e6ee
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e6f0 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006239ac],EBX      ; 0057e6f6 | g_StartDepthW
    MOV dword ptr [0x00623dd8],EDX      ; 0057e6fc | g_HardwareDeltaDepthZ
    MOV EAX,dword ptr [EDI + 0x30]      ; 0057e702
    MOV EBX,dword ptr [ESI + 0x30]      ; 0057e705
    SUB EAX,EBX                         ; 0057e708
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e70a | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00623e90],EBX      ; 0057e710 | g_VertexAlphaStart
    MOV dword ptr [0x00623e98],EDX      ; 0057e716 | g_VertexAlphaDelta
    MOV EBP,dword ptr [0x00623e90]      ; 0057e71c | g_VertexAlphaStart
    PXOR MM7,MM7                        ; 0057e722
    TEST dword ptr [0x01c51d14],0x200   ; 0057e725 | g_RenderStateFlags
    JNZ 0x0057e764                      ; 0057e72f
        ;   XREF to: 0057e764 (CONDITIONAL_JUMP)  ; LAB_0057e764
    TEST dword ptr [0x01c51d14],0x4     ; 0057e731 | g_RenderStateFlags
    JNZ 0x0057e821                      ; 0057e73b
        ;   XREF to: 0057e821 (CONDITIONAL_JUMP)  ; LAB_0057e821
    TEST dword ptr [0x01c51d14],0x10    ; 0057e741 | g_RenderStateFlags
    JNZ 0x0057e8ad                      ; 0057e74b
        ;   XREF to: 0057e8ad (CONDITIONAL_JUMP)  ; LAB_0057e8ad
    MOVQ MM5,qword ptr [0x00624fc8]     ; 0057e751 | g_QWORD_ARRAY_006247d0[255]
    PSLLW MM5,0x7                       ; 0057e758
    PXOR MM6,MM6                        ; 0057e75c
    JMP 0x0057e8d7                      ; 0057e75f
        ;   XREF to: 0057e8d7 (UNCONDITIONAL_JUMP)  ; LAB_0057e8d7
    MOV EAX,dword ptr [EDI + 0x10]      ; 0057e764
        ;   Label: LAB_0057e764
    MOV EBX,dword ptr [ESI + 0x10]      ; 0057e767
    SHR EAX,0x1                         ; 0057e76a
    SHR EBX,0x1                         ; 0057e76c
    SUB EAX,EBX                         ; 0057e76e
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e770 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0057e776
    AND EDX,0xffff                      ; 0057e77c
    MOV dword ptr [0x00623e50],EBX      ; 0057e782 | g_VertexRedStart
    MOV dword ptr [0x00623e70],EDX      ; 0057e788 | g_VertexRedDelta
    MOV EAX,dword ptr [EDI + 0x38]      ; 0057e78e
    MOV EBX,dword ptr [ESI + 0x38]      ; 0057e791
    SHR EAX,0x1                         ; 0057e794
    SHR EBX,0x1                         ; 0057e796
    SUB EAX,EBX                         ; 0057e798
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e79a | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0057e7a0
    AND EDX,0xffff                      ; 0057e7a6
    MOV dword ptr [0x00623e58],EBX      ; 0057e7ac | g_VertexGreenStart
    MOV dword ptr [0x00623e78],EDX      ; 0057e7b2 | g_VertexGreenDelta
    MOV EAX,dword ptr [EDI + 0x40]      ; 0057e7b8
    MOV EBX,dword ptr [ESI + 0x40]      ; 0057e7bb
    SHR EAX,0x1                         ; 0057e7be
    SHR EBX,0x1                         ; 0057e7c0
    SUB EAX,EBX                         ; 0057e7c2
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e7c4 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0057e7ca
    AND EDX,0xffff                      ; 0057e7d0
    MOV dword ptr [0x00623e60],EBX      ; 0057e7d6 | g_VertexBlueStart
    MOV dword ptr [0x00623e80],EDX      ; 0057e7dc | g_VertexBlueDelta
    MOVQ MM5,qword ptr [0x00623e50]     ; 0057e7e2 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x00623e70]     ; 0057e7e9 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 0057e7f0
    PSLLQ MM6,0x10                      ; 0057e7f4
    POR MM5,qword ptr [0x00623e58]      ; 0057e7f8 | g_VertexGreenStart
    POR MM6,qword ptr [0x00623e78]      ; 0057e7ff | g_VertexGreenDelta
    PSLLQ MM5,0x10                      ; 0057e806
    PSLLQ MM6,0x10                      ; 0057e80a
    POR MM5,qword ptr [0x00623e60]      ; 0057e80e | g_VertexBlueStart
    POR MM6,qword ptr [0x00623e80]      ; 0057e815 | g_VertexBlueDelta
    JMP 0x0057e8d7                      ; 0057e81c
        ;   XREF to: 0057e8d7 (UNCONDITIONAL_JUMP)  ; LAB_0057e8d7
    MOV EAX,dword ptr [EDI + 0x10]      ; 0057e821
        ;   Label: LAB_0057e821
    MOV EBX,dword ptr [ESI + 0x10]      ; 0057e824
    SUB EAX,0x100                       ; 0057e827
    SUB EBX,0x100                       ; 0057e82c
    CMP EAX,0xfff                       ; 0057e832
    JBE 0x0057e83e                      ; 0057e837
        ;   XREF to: 0057e83e (CONDITIONAL_JUMP)  ; LAB_0057e83e
    MOV EAX,0xfff                       ; 0057e839
    CMP EBX,0xfff                       ; 0057e83e
        ;   Label: LAB_0057e83e
    JBE 0x0057e84b                      ; 0057e844
        ;   XREF to: 0057e84b (CONDITIONAL_JUMP)  ; LAB_0057e84b
    MOV EBX,0xfff                       ; 0057e846
    SHL EAX,0x3                         ; 0057e84b
        ;   Label: LAB_0057e84b
    SHL EBX,0x3                         ; 0057e84e
    SUB EAX,EBX                         ; 0057e851
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057e853 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0057e859
    AND EDX,0xffff                      ; 0057e85f
    MOV dword ptr [0x00623e50],EBX      ; 0057e865 | g_VertexRedStart
    MOV dword ptr [0x00623e70],EDX      ; 0057e86b | g_VertexRedDelta
    MOVQ MM5,qword ptr [0x00623e50]     ; 0057e871 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x00623e70]     ; 0057e878 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 0057e87f
    PSLLQ MM6,0x10                      ; 0057e883
    POR MM5,qword ptr [0x00623e50]      ; 0057e887 | g_VertexRedStart
    POR MM6,qword ptr [0x00623e70]      ; 0057e88e | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 0057e895
    PSLLQ MM6,0x10                      ; 0057e899
    POR MM5,qword ptr [0x00623e50]      ; 0057e89d | g_VertexRedStart
    POR MM6,qword ptr [0x00623e70]      ; 0057e8a4 | g_VertexRedDelta
    JMP 0x0057e8d7                      ; 0057e8ab
        ;   XREF to: 0057e8d7 (UNCONDITIONAL_JUMP)  ; LAB_0057e8d7
    MOV EAX,[0x01c4f024]                ; 0057e8ad | g_CurrentLightingValue
        ;   Label: LAB_0057e8ad
    SUB EAX,0x100                       ; 0057e8b2
    SHR EAX,0x4                         ; 0057e8b7
    CMP EAX,0xff                        ; 0057e8ba
    JC 0x0057e8c6                       ; 0057e8bf
        ;   XREF to: 0057e8c6 (CONDITIONAL_JUMP)  ; LAB_0057e8c6
    MOV EAX,0xff                        ; 0057e8c1
    MOVQ MM5,qword ptr [EAX*0x8 + 0x6247d0] ; 0057e8c6 | g_QWORD_ARRAY_006247d0[255]
        ;   Label: LAB_0057e8c6
    PSLLW MM5,0x7                       ; 0057e8ce
    PXOR MM6,MM6                        ; 0057e8d2
    JMP 0x0057e8d7                      ; 0057e8d5
        ;   XREF to: 0057e8d7 (UNCONDITIONAL_JUMP)  ; LAB_0057e8d7
    MOV ECX,dword ptr [0x006239a0]      ; 0057e8d7 | g_StartTextureU
        ;   Label: LAB_0057e8d7
    MOV EDX,dword ptr [0x006239a4]      ; 0057e8dd | g_StartTextureV
    MOV ESI,dword ptr [0x006239ac]      ; 0057e8e3 | g_StartDepthW
    MOV EDI,0x0                         ; 0057e8e9
    CMP dword ptr [0x01c50934],0x0      ; 0057e8ee | g_CurrentTextureOpacityData
    JNZ 0x0057e907                      ; 0057e8f5
        ;   XREF to: 0057e907 (CONDITIONAL_JUMP)  ; LAB_0057e907
    TEST dword ptr [0x01c51d14],0x2     ; 0057e8f7 | g_RenderStateFlags
    JZ 0x0057ecd1                       ; 0057e901
        ;   XREF to: 0057ecd1 (CONDITIONAL_JUMP)  ; LAB_0057ecd1
    TEST dword ptr [0x01c51d14],0x100   ; 0057e907 | g_RenderStateFlags
        ;   Label: LAB_0057e907
    JNZ 0x0057e926                      ; 0057e911
        ;   XREF to: 0057e926 (CONDITIONAL_JUMP)  ; LAB_0057e926
    MOV EBP,dword ptr [0x0061b4b8]      ; 0057e913 | g_CurrentAlphaValue
    SHL EBP,0x8                         ; 0057e919
    MOV dword ptr [0x00623e98],0x0      ; 0057e91c | g_VertexAlphaDelta
    CMP dword ptr [0x01c50934],0x0      ; 0057e926 | g_CurrentTextureOpacityData
        ;   Label: LAB_0057e926
    JNZ 0x0057eae2                      ; 0057e92d
        ;   XREF to: 0057eae2 (CONDITIONAL_JUMP)  ; LAB_0057eae2
    TEST dword ptr [0x01c51d14],0x40    ; 0057e933 | g_RenderStateFlags
        ;   Label: LAB_0057e933
    JZ 0x0057e94f                       ; 0057e93d
        ;   XREF to: 0057e94f (CONDITIONAL_JUMP)  ; LAB_0057e94f
    LEA EAX,[EDI]                       ; 0057e93f
    ADD EAX,dword ptr [0x006239cc]      ; 0057e941 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0057e947
    JL 0x0057eaa4                       ; 0057e949
        ;   XREF to: 0057eaa4 (CONDITIONAL_JUMP)  ; LAB_0057eaa4
    MOVD MM0,ECX                        ; 0057e94f
        ;   Label: LAB_0057e94f
    MOVD MM2,EDX                        ; 0057e952
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057e955 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057e95c | g_TextureShift2
    PAND MM0,qword ptr [0x00623ef8]     ; 0057e963 | g_TextureMask1
    PAND MM2,qword ptr [0x00623f18]     ; 0057e96a | g_TextureMask2
    PADDD MM0,MM2                       ; 0057e971
    MOVD EBX,MM0                        ; 0057e974
    ADD EBX,dword ptr [0x01c50930]      ; 0057e977 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 0057e97d
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057e980 | g_Hardware32BitPalette
    CMP EAX,0x0                         ; 0057e987
    JZ 0x0057eaa4                       ; 0057e98a
        ;   XREF to: 0057eaa4 (CONDITIONAL_JUMP)  ; LAB_0057eaa4
    MOVD MM0,EAX                        ; 0057e990
    PUNPCKLBW MM0,MM7                   ; 0057e993
    PXOR MM4,MM4                        ; 0057e996
    TEST dword ptr [0x01c51d14],0x20    ; 0057e999 | g_RenderStateFlags
    JZ 0x0057e9ee                       ; 0057e9a3
        ;   XREF to: 0057e9ee (CONDITIONAL_JUMP)  ; LAB_0057e9ee
    MOV EBX,EDI                         ; 0057e9a5
    SHR EBX,0x1                         ; 0057e9a7
    ADD EBX,dword ptr [0x006239c8]      ; 0057e9a9 | g_CurrentScreenPtr
    MOVZX EBX,word ptr [EBX]            ; 0057e9af
    MOVD MM4,EBX                        ; 0057e9b2
    PAND MM4,qword ptr [0x00623f30]     ; 0057e9b5 | g_BlueMask16
    PSLLQ MM4,qword ptr [0x00623fc0]    ; 0057e9bc | g_BlueBitShift
    MOVD MM2,EBX                        ; 0057e9c3
    PAND MM2,qword ptr [0x00623f28]     ; 0057e9c6 | g_GreenMask16
    PSLLQ MM2,qword ptr [0x00623fa0]    ; 0057e9cd | g_GreenBlueDitherShift
    POR MM4,MM2                         ; 0057e9d4
    MOVD MM2,EBX                        ; 0057e9d7
    PAND MM2,qword ptr [0x00623f20]     ; 0057e9da | g_RedMask16
    PSLLQ MM2,qword ptr [0x00623f80]    ; 0057e9e1 | g_TotalDitherShift
    POR MM4,MM2                         ; 0057e9e8
    PUNPCKLBW MM4,MM7                   ; 0057e9eb
    PSLLW MM0,0x4                       ; 0057e9ee
        ;   Label: LAB_0057e9ee
    MOVQ MM7,MM5                        ; 0057e9f2
    MOV EAX,EBP                         ; 0057e9f5
    PSRLW MM7,0x3                       ; 0057e9f7
    SAR EAX,0x8                         ; 0057e9fb
    PMULHW MM0,MM7                      ; 0057e9fe
    MOVQ MM2,qword ptr [EAX*0x8 + 0x6247d0] ; 0057ea01 | g_QWORD_ARRAY_006247d0[255]
    PXOR MM7,MM7                        ; 0057ea09
    MOVQ MM3,MM2                        ; 0057ea0c
    PACKUSWB MM0,MM7                    ; 0057ea0f
    PXOR MM3,qword ptr [0x00624fc8]     ; 0057ea12 | g_QWORD_ARRAY_006247d0[255]
    PUNPCKLBW MM0,MM7                   ; 0057ea19
    CMP dword ptr [0x01c51d0c],0x0      ; 0057ea1c | g_BlendMode
    JNZ 0x0057ea37                      ; 0057ea23
        ;   XREF to: 0057ea37 (CONDITIONAL_JUMP)  ; LAB_0057ea37
    PMULLW MM4,MM3                      ; 0057ea25
    PMULLW MM0,MM2                      ; 0057ea28
    PADDUSW MM0,MM4                     ; 0057ea2b
    PSRLW MM0,0x8                       ; 0057ea2e
    PACKUSWB MM0,MM7                    ; 0057ea32
    JMP 0x0057ea48                      ; 0057ea35
        ;   XREF to: 0057ea48 (UNCONDITIONAL_JUMP)  ; LAB_0057ea48
    PSLLW MM4,0x8                       ; 0057ea37
        ;   Label: LAB_0057ea37
    PMULLW MM0,MM2                      ; 0057ea3b
    PADDUSW MM0,MM4                     ; 0057ea3e
    PSRLW MM0,0x8                       ; 0057ea41
    PACKUSWB MM0,MM7                    ; 0057ea45
    MOV EBX,EDI                         ; 0057ea48
        ;   Label: LAB_0057ea48
    SHR EBX,0x1                         ; 0057ea4a
    ADD EBX,dword ptr [0x006239c8]      ; 0057ea4c | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 0057ea52
    MOVQ MM4,MM0                        ; 0057ea55
    PAND MM0,qword ptr [0x00623f78]     ; 0057ea58 | g_BlueMask32
    PAND MM2,qword ptr [0x00623f58]     ; 0057ea5f | g_GreenMask32
    PAND MM4,qword ptr [0x00623f38]     ; 0057ea66 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0057ea6d | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0057ea74 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x00623f80]    ; 0057ea7b | g_TotalDitherShift
    POR MM0,MM2                         ; 0057ea82
    POR MM0,MM4                         ; 0057ea85
    MOVD EAX,MM0                        ; 0057ea88
    MOV word ptr [EBX],AX               ; 0057ea8b
    TEST dword ptr [0x01c51d14],0x80    ; 0057ea8e | g_RenderStateFlags
    JZ 0x0057eaa4                       ; 0057ea98
        ;   XREF to: 0057eaa4 (CONDITIONAL_JUMP)  ; LAB_0057eaa4
    MOV EAX,EDI                         ; 0057ea9a
    ADD EAX,dword ptr [0x006239cc]      ; 0057ea9c | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 0057eaa2
    ADD EDI,0x4                         ; 0057eaa4
        ;   Label: LAB_0057eaa4
    CMP EDI,dword ptr [0x00623964]      ; 0057eaa7 | g_ScanlinePixelCount
    JNC 0x0057eadc                      ; 0057eaad
        ;   XREF to: 0057eadc (CONDITIONAL_JUMP)  ; LAB_0057eadc
    ADD ECX,dword ptr [0x00623dd0]      ; 0057eaaf | g_HardwareDeltaTextureU
    PADDW MM5,MM6                       ; 0057eab5
    ADD EDX,dword ptr [0x00623dd4]      ; 0057eab8 | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 0057eabe
    ADD ESI,dword ptr [0x00623dd8]      ; 0057eac1 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057eac7 | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x00623e98]      ; 0057eace | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 0057ead4
    JMP 0x0057e933                      ; 0057ead7
        ;   XREF to: 0057e933 (UNCONDITIONAL_JUMP)  ; LAB_0057e933
    POP EBP                             ; 0057eadc
        ;   Label: LAB_0057eadc
    EMMS                                ; 0057eadd
    POP EDI                             ; 0057eadf
    POP ESI                             ; 0057eae0
    RET                                 ; 0057eae1
    TEST dword ptr [0x01c51d14],0x40    ; 0057eae2 | g_RenderStateFlags
        ;   Label: LAB_0057eae2
    JZ 0x0057eafe                       ; 0057eaec
        ;   XREF to: 0057eafe (CONDITIONAL_JUMP)  ; LAB_0057eafe
    LEA EAX,[EDI]                       ; 0057eaee
    ADD EAX,dword ptr [0x006239cc]      ; 0057eaf0 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0057eaf6
    JL 0x0057ec93                       ; 0057eaf8
        ;   XREF to: 0057ec93 (CONDITIONAL_JUMP)  ; LAB_0057ec93
    MOVD MM0,ECX                        ; 0057eafe
        ;   Label: LAB_0057eafe
    MOVD MM2,EDX                        ; 0057eb01
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057eb04 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057eb0b | g_TextureShift2
    PAND MM0,qword ptr [0x00623ef8]     ; 0057eb12 | g_TextureMask1
    PAND MM2,qword ptr [0x00623f18]     ; 0057eb19 | g_TextureMask2
    PADDD MM0,MM2                       ; 0057eb20
    MOVD EBX,MM0                        ; 0057eb23
    ADD EBX,dword ptr [0x01c50930]      ; 0057eb26 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 0057eb2c
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057eb2f | g_Hardware32BitPalette
    PUNPCKLBW MM0,MM7                   ; 0057eb37
    SUB EBX,dword ptr [0x01c50930]      ; 0057eb3a | g_CurrentTextureData
    ADD EBX,dword ptr [0x01c50934]      ; 0057eb40 | g_CurrentTextureOpacityData
    MOVZX EAX,byte ptr [EBX]            ; 0057eb46
    TEST EAX,0xffffffff                 ; 0057eb49
    JZ 0x0057ec93                       ; 0057eb4e
        ;   XREF to: 0057ec93 (CONDITIONAL_JUMP)  ; LAB_0057ec93
    CMP EBP,0xff00                      ; 0057eb54
    JLE 0x0057eb67                      ; 0057eb5a
        ;   XREF to: 0057eb67 (CONDITIONAL_JUMP)  ; LAB_0057eb67
    CMP EAX,0xff                        ; 0057eb5c
    JGE 0x0057ebfa                      ; 0057eb61
        ;   XREF to: 0057ebfa (CONDITIONAL_JUMP)  ; LAB_0057ebfa
    MOV EBX,EDI                         ; 0057eb67
        ;   Label: LAB_0057eb67
    SHR EBX,0x1                         ; 0057eb69
    ADD EBX,dword ptr [0x006239c8]      ; 0057eb6b | g_CurrentScreenPtr
    MOVZX EBX,word ptr [EBX]            ; 0057eb71
    MOVD MM4,EBX                        ; 0057eb74
    PAND MM4,qword ptr [0x00623f30]     ; 0057eb77 | g_BlueMask16
    PSLLQ MM4,qword ptr [0x00623fc0]    ; 0057eb7e | g_BlueBitShift
    MOVD MM2,EBX                        ; 0057eb85
    PAND MM2,qword ptr [0x00623f28]     ; 0057eb88 | g_GreenMask16
    PSLLQ MM2,qword ptr [0x00623fa0]    ; 0057eb8f | g_GreenBlueDitherShift
    POR MM4,MM2                         ; 0057eb96
    MOVD MM2,EBX                        ; 0057eb99
    PAND MM2,qword ptr [0x00623f20]     ; 0057eb9c | g_RedMask16
    PSLLQ MM2,qword ptr [0x00623f80]    ; 0057eba3 | g_TotalDitherShift
    POR MM4,MM2                         ; 0057ebaa
    PUNPCKLBW MM4,MM7                   ; 0057ebad
    PSLLW MM0,0x4                       ; 0057ebb0
    MOVQ MM7,MM5                        ; 0057ebb4
    IMUL EAX,EBP                        ; 0057ebb7
    PSRLW MM7,0x3                       ; 0057ebba
    SHR EAX,0x10                        ; 0057ebbe
    PMULHW MM0,MM7                      ; 0057ebc1
    MOVQ MM2,qword ptr [EAX*0x8 + 0x6247d0] ; 0057ebc4 | g_QWORD_ARRAY_006247d0
    PXOR MM7,MM7                        ; 0057ebcc
    MOVQ MM3,MM2                        ; 0057ebcf
    PACKUSWB MM0,MM7                    ; 0057ebd2
    PXOR MM3,qword ptr [0x00624fc8]     ; 0057ebd5 | g_QWORD_ARRAY_006247d0[255]
    PUNPCKLBW MM0,MM7                   ; 0057ebdc
    CMP dword ptr [0x01c51d0c],0x0      ; 0057ebdf | g_BlendMode
    JNZ 0x0057ec26                      ; 0057ebe6
        ;   XREF to: 0057ec26 (CONDITIONAL_JUMP)  ; LAB_0057ec26
    PMULLW MM4,MM3                      ; 0057ebe8
    PMULLW MM0,MM2                      ; 0057ebeb
    PADDUSW MM0,MM4                     ; 0057ebee
    PSRLW MM0,0x8                       ; 0057ebf1
    PACKUSWB MM0,MM7                    ; 0057ebf5
    JMP 0x0057ec37                      ; 0057ebf8
        ;   XREF to: 0057ec37 (UNCONDITIONAL_JUMP)  ; LAB_0057ec37
    CMP EBP,0xff                        ; 0057ebfa
        ;   Label: LAB_0057ebfa
    JL 0x0057eb67                       ; 0057ec00
        ;   XREF to: 0057eb67 (CONDITIONAL_JUMP)  ; LAB_0057eb67
    CMP dword ptr [0x01c51d0c],0x0      ; 0057ec06 | g_BlendMode
    JNZ 0x0057eb67                      ; 0057ec0d
        ;   XREF to: 0057eb67 (CONDITIONAL_JUMP)  ; LAB_0057eb67
    MOVQ MM3,MM5                        ; 0057ec13
    PSRLW MM3,0x3                       ; 0057ec16
    PSLLW MM0,0x4                       ; 0057ec1a
    PMULHW MM0,MM3                      ; 0057ec1e
    PACKUSWB MM0,MM7                    ; 0057ec21
    JMP 0x0057ec37                      ; 0057ec24
        ;   XREF to: 0057ec37 (UNCONDITIONAL_JUMP)  ; LAB_0057ec37
    PSLLW MM4,0x8                       ; 0057ec26
        ;   Label: LAB_0057ec26
    PMULLW MM0,MM2                      ; 0057ec2a
    PADDUSW MM0,MM4                     ; 0057ec2d
    PSRLW MM0,0x8                       ; 0057ec30
    PACKUSWB MM0,MM7                    ; 0057ec34
    MOV EBX,EDI                         ; 0057ec37
        ;   Label: LAB_0057ec37
    SHR EBX,0x1                         ; 0057ec39
    ADD EBX,dword ptr [0x006239c8]      ; 0057ec3b | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 0057ec41
    MOVQ MM4,MM0                        ; 0057ec44
    PAND MM0,qword ptr [0x00623f78]     ; 0057ec47 | g_BlueMask32
    PAND MM2,qword ptr [0x00623f58]     ; 0057ec4e | g_GreenMask32
    PAND MM4,qword ptr [0x00623f38]     ; 0057ec55 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0057ec5c | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0057ec63 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x00623f80]    ; 0057ec6a | g_TotalDitherShift
    POR MM0,MM2                         ; 0057ec71
    POR MM0,MM4                         ; 0057ec74
    MOVD EAX,MM0                        ; 0057ec77
    MOV word ptr [EBX],AX               ; 0057ec7a
    TEST dword ptr [0x01c51d14],0x80    ; 0057ec7d | g_RenderStateFlags
    JZ 0x0057ec93                       ; 0057ec87
        ;   XREF to: 0057ec93 (CONDITIONAL_JUMP)  ; LAB_0057ec93
    MOV EAX,EDI                         ; 0057ec89
    ADD EAX,dword ptr [0x006239cc]      ; 0057ec8b | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 0057ec91
    ADD EDI,0x4                         ; 0057ec93
        ;   Label: LAB_0057ec93
    CMP EDI,dword ptr [0x00623964]      ; 0057ec96 | g_ScanlinePixelCount
    JNC 0x0057eccb                      ; 0057ec9c
        ;   XREF to: 0057eccb (CONDITIONAL_JUMP)  ; LAB_0057eccb
    ADD ECX,dword ptr [0x00623dd0]      ; 0057ec9e | g_HardwareDeltaTextureU
    PADDW MM5,MM6                       ; 0057eca4
    ADD EDX,dword ptr [0x00623dd4]      ; 0057eca7 | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 0057ecad
    ADD ESI,dword ptr [0x00623dd8]      ; 0057ecb0 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057ecb6 | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x00623e98]      ; 0057ecbd | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 0057ecc3
    JMP 0x0057eae2                      ; 0057ecc6
        ;   XREF to: 0057eae2 (UNCONDITIONAL_JUMP)  ; LAB_0057eae2
    POP EBP                             ; 0057eccb
        ;   Label: LAB_0057eccb
    EMMS                                ; 0057eccc
    POP EDI                             ; 0057ecce
    POP ESI                             ; 0057eccf
    RET                                 ; 0057ecd0
    MOVQ MM1,qword ptr [0x01c51d1c]     ; 0057ecd1 | g_SolidColorMode
        ;   Label: LAB_0057ecd1
    PUNPCKLBW MM1,MM7                   ; 0057ecd8
    TEST dword ptr [0x01c51d14],0x8     ; 0057ecdb | g_RenderStateFlags
    JNZ 0x0057ecf6                      ; 0057ece5
        ;   XREF to: 0057ecf6 (CONDITIONAL_JUMP)  ; LAB_0057ecf6
    MOV EBP,0x0                         ; 0057ece7
    MOV dword ptr [0x00623e98],0x0      ; 0057ecec | g_VertexAlphaDelta
    TEST dword ptr [0x01c51d14],0x40    ; 0057ecf6 | g_RenderStateFlags
        ;   Label: LAB_0057ecf6
    JZ 0x0057ed12                       ; 0057ed00
        ;   XREF to: 0057ed12 (CONDITIONAL_JUMP)  ; LAB_0057ed12
    LEA EAX,[EDI]                       ; 0057ed02
    ADD EAX,dword ptr [0x006239cc]      ; 0057ed04 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0057ed0a
    JL 0x0057ee03                       ; 0057ed0c
        ;   XREF to: 0057ee03 (CONDITIONAL_JUMP)  ; LAB_0057ee03
    TEST dword ptr [0x01c51d14],0x1     ; 0057ed12 | g_RenderStateFlags
        ;   Label: LAB_0057ed12
    JZ 0x0057ee45                       ; 0057ed1c
        ;   XREF to: 0057ee45 (CONDITIONAL_JUMP)  ; LAB_0057ee45
    MOVD MM0,ECX                        ; 0057ed22
    MOVD MM2,EDX                        ; 0057ed25
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057ed28 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057ed2f | g_TextureShift2
    PAND MM0,qword ptr [0x00623ef8]     ; 0057ed36 | g_TextureMask1
    PAND MM2,qword ptr [0x00623f18]     ; 0057ed3d | g_TextureMask2
    PADDD MM0,MM2                       ; 0057ed44
    MOVD EBX,MM0                        ; 0057ed47
    ADD EBX,dword ptr [0x01c50930]      ; 0057ed4a | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 0057ed50
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057ed53 | g_Hardware32BitPalette
    MOVQ MM3,MM5                        ; 0057ed5b
        ;   Label: LAB_0057ed5b
    PUNPCKLBW MM0,MM7                   ; 0057ed5e
    PSRLW MM3,0x3                       ; 0057ed61
    PSLLW MM0,0x4                       ; 0057ed65
    PMULHW MM0,MM3                      ; 0057ed69
    PACKUSWB MM0,MM7                    ; 0057ed6c
    TEST dword ptr [0x01c51d14],0x8     ; 0057ed6f | g_RenderStateFlags
    JZ 0x0057eda8                       ; 0057ed79
        ;   XREF to: 0057eda8 (CONDITIONAL_JUMP)  ; LAB_0057eda8
    MOV EAX,EBP                         ; 0057ed7b
    SAR EAX,0x8                         ; 0057ed7d
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6247d0] ; 0057ed80 | g_QWORD_ARRAY_006247d0
    MOVQ MM4,MM1                        ; 0057ed88
    MOVQ MM2,MM3                        ; 0057ed8b
    PMULLW MM4,MM3                      ; 0057ed8e
    PXOR MM2,qword ptr [0x00624fc8]     ; 0057ed91 | g_QWORD_ARRAY_006247d0[255]
    PUNPCKLBW MM0,MM7                   ; 0057ed98
    PMULLW MM0,MM2                      ; 0057ed9b
    PADDW MM0,MM4                       ; 0057ed9e
    PSRLW MM0,0x8                       ; 0057eda1
    PACKUSWB MM0,MM7                    ; 0057eda5
    MOV EBX,EDI                         ; 0057eda8
        ;   Label: LAB_0057eda8
    SHR EBX,0x1                         ; 0057edaa
    ADD EBX,dword ptr [0x006239c8]      ; 0057edac | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 0057edb2
    MOVQ MM4,MM0                        ; 0057edb5
    PAND MM0,qword ptr [0x00623f78]     ; 0057edb8 | g_BlueMask32
    PAND MM2,qword ptr [0x00623f58]     ; 0057edbf | g_GreenMask32
    PAND MM4,qword ptr [0x00623f38]     ; 0057edc6 | g_RedMask32
    PSRLQ MM0,qword ptr [0x00623fc0]    ; 0057edcd | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x00623fa0]    ; 0057edd4 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x00623f80]    ; 0057eddb | g_TotalDitherShift
    POR MM0,MM2                         ; 0057ede2
    POR MM0,MM4                         ; 0057ede5
    MOVD EAX,MM0                        ; 0057ede8
    MOV word ptr [EBX],AX               ; 0057edeb
    TEST dword ptr [0x01c51d14],0x80    ; 0057edee | g_RenderStateFlags
    JZ 0x0057ee03                       ; 0057edf8
        ;   XREF to: 0057ee03 (CONDITIONAL_JUMP)  ; LAB_0057ee03
    MOV EAX,[0x006239cc]                ; 0057edfa | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 0057edff
    MOV dword ptr [EAX],ESI             ; 0057ee01
    ADD EDI,0x4                         ; 0057ee03
        ;   Label: LAB_0057ee03
    CMP EDI,dword ptr [0x00623964]      ; 0057ee06 | g_ScanlinePixelCount
    JNC 0x0057eadc                      ; 0057ee0c
        ;   XREF to: 0057eadc (CONDITIONAL_JUMP)  ; LAB_0057eadc
    ADD ECX,dword ptr [0x00623dd0]      ; 0057ee12 | g_HardwareDeltaTextureU
    PADDW MM5,MM6                       ; 0057ee18
    ADD EDX,dword ptr [0x00623dd4]      ; 0057ee1b | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 0057ee21
    ADD ESI,dword ptr [0x00623dd8]      ; 0057ee24 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057ee2a | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x00623e98]      ; 0057ee31 | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 0057ee37
    JMP 0x0057ecf6                      ; 0057ee3a
        ;   XREF to: 0057ecf6 (UNCONDITIONAL_JUMP)  ; LAB_0057ecf6
    TEST dword ptr [0x01c51d14],0x200   ; 0057ee45 | g_RenderStateFlags
        ;   Label: LAB_0057ee45
    JNZ 0x0057ee5d                      ; 0057ee4f
        ;   XREF to: 0057ee5d (CONDITIONAL_JUMP)  ; LAB_0057ee5d
    MOVD MM0,dword ptr [0x01c4f020]     ; 0057ee51 | g_INT_01c4f020
    JMP 0x0057ed5b                      ; 0057ee58
        ;   XREF to: 0057ed5b (UNCONDITIONAL_JUMP)  ; LAB_0057ed5b
    MOVD MM0,dword ptr [0x00623fc8]     ; 0057ee5d | g_SpecialColor
        ;   Label: LAB_0057ee5d
    JMP 0x0057ed5b                      ; 0057ee64
        ;   XREF to: 0057ed5b (UNCONDITIONAL_JUMP)  ; LAB_0057ed5b
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057ee69
        ;   Label: LAB_0057ee69
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057ee6c
    SUB EAX,EBX                         ; 0057ee6f
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057ee71 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006239ac],EBX      ; 0057ee77 | g_StartDepthW
    MOV dword ptr [0x00623dd8],EDX      ; 0057ee7d | g_HardwareDeltaDepthZ
    MOV EAX,[0x006239ac]                ; 0057ee83 | g_StartDepthW
    MOV EBX,dword ptr [0x00623dd8]      ; 0057ee88 | g_HardwareDeltaDepthZ
    MOV ESI,dword ptr [0x006239cc]      ; 0057ee8e | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x00623964]      ; 0057ee94 | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 0057ee9a
        ;   Label: LAB_0057ee9a
    ADD EAX,EBX                         ; 0057ee9c
    ADD ESI,0x4                         ; 0057ee9e
    SUB ECX,0x4                         ; 0057eea1
    JG 0x0057ee9a                       ; 0057eea4
        ;   XREF to: 0057ee9a (CONDITIONAL_JUMP)  ; LAB_0057ee9a
    POP EBP                             ; 0057eea6
    EMMS                                ; 0057eea7
    POP EDI                             ; 0057eea9
    POP ESI                             ; 0057eeaa
    RET                                 ; 0057eeab

