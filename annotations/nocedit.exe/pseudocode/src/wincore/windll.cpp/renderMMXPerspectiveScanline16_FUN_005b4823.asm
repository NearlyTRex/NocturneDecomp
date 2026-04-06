; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[77]:
;   engine_3d.c_flushPremiumRenderBuffer_FUN_004070c0 at 00407272
;   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 at 004040db
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessingWithUV_FUN_00407720 at 00407826
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 at 004076d7
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404c01
;   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 at 00405eab
;   engine_3d.c_renderPolygonDepthWriteTexturedLit2_FUN_00406000 at 0040608b
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 at 00405e0b
;   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 at 004059eb
;   engine_3d.c_renderPolygonEngineAPIPremiumDirect_FUN_00407470 at 004075f7
;   ... and 67 more
;
; Referenced Globals:
;   int g_CurrentAlphaValue = 0xff
;   int g_ScanlinePixelCount = 0x0
;   int g_StartTextureU = 0x0
;   int g_StartTextureV = 0x0
;   int g_StartDepthW = 0x0
;   int* g_CurrentScreenPtr = 00000000
;   int* g_CurrentZBufferPtr = 00000000
;   int g_DeltaTextureU = 0x0
;   int g_DeltaTextureV = 0x0
;   int g_DeltaDepthW = 0x0
;   double g_SelectedClearColor = 0.0
;   int g_VertexRedStart = 0x0
;   int g_VertexGreenStart = 0x0
;   int g_VertexBlueStart = 0x0
;   int g_VertexRedDelta = 0x0
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b4823
        ;   Label: wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
    PUSH EDI                            ; 005b4824
    PUSH EBP                            ; 005b4825
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b4826
    MOV ECX,dword ptr [EDI + 0x8]       ; 005b4829
    CMP EAX,ECX                         ; 005b482c
    JBE 0x005b4833                      ; 005b482e
        ;   XREF to: 005b4833 (CONDITIONAL_JUMP)  ; LAB_005b4833
    XCHG EAX,ECX                        ; 005b4830
    XCHG EDI,ESI                        ; 005b4831
    SHR ECX,0x10                        ; 005b4833
        ;   Label: LAB_005b4833
    SHR EAX,0x10                        ; 005b4836
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 005b4839 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 005b4840 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 005b4847
    JLE 0x005b4d1c                      ; 005b4849
        ;   XREF to: 005b4d1c (CONDITIONAL_JUMP)  ; LAB_005b4d1c
    LEA EBX,[EBX + EAX*0x2]             ; 005b484f
    SHL ECX,0x2                         ; 005b4852
    LEA EBP,[EBP + EAX*0x4]             ; 005b4855
    MOV dword ptr [0x006821a4],ECX      ; 005b4859 | g_ScanlinePixelCount
    MOV dword ptr [0x00682208],EBX      ; 005b485f | g_CurrentScreenPtr
    MOV dword ptr [0x0068220c],EBP      ; 005b4865 | g_CurrentZBufferPtr
    CMP dword ptr [0x02d052a0],0x80     ; 005b486b | g_RenderStateFlags
    JZ 0x005b50a9                       ; 005b4875
        ;   XREF to: 005b50a9 (CONDITIONAL_JUMP)  ; LAB_005b50a9
    CMP dword ptr [0x02d052a4],0x5      ; 005b487b | g_RenderStateFlag2
    JNZ 0x005b48f4                      ; 005b4882
        ;   XREF to: 005b48f4 (CONDITIONAL_JUMP)  ; LAB_005b48f4
    MOV EAX,dword ptr [ESI + 0x18]      ; 005b4884
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b4887
    CDQ                                 ; 005b488a
    SHLD EDX,EAX,0x18                   ; 005b488b
    SHL EAX,0x18                        ; 005b488f
    IDIV EBX                            ; 005b4892
    MOV [0x006821e0],EAX                ; 005b4894 | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b4899
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b489c
    CDQ                                 ; 005b489f
    SHLD EDX,EAX,0x18                   ; 005b48a0
    SHL EAX,0x18                        ; 005b48a4
    IDIV EBX                            ; 005b48a7
    SUB EAX,dword ptr [0x006821e0]      ; 005b48a9 | g_StartTextureU
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b48af | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00682610],EDX      ; 005b48b5 | g_DeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 005b48bb
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b48be
    CDQ                                 ; 005b48c1
    SHLD EDX,EAX,0x18                   ; 005b48c2
    SHL EAX,0x18                        ; 005b48c6
    IDIV EBX                            ; 005b48c9
    MOV [0x006821e4],EAX                ; 005b48cb | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b48d0
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b48d3
    CDQ                                 ; 005b48d6
    SHLD EDX,EAX,0x18                   ; 005b48d7
    SHL EAX,0x18                        ; 005b48db
    IDIV EBX                            ; 005b48de
    SUB EAX,dword ptr [0x006821e4]      ; 005b48e0 | g_StartTextureV
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b48e6 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00682614],EDX      ; 005b48ec | g_DeltaTextureV
    JMP 0x005b4928                      ; 005b48f2
        ;   XREF to: 005b4928 (UNCONDITIONAL_JUMP)  ; LAB_005b4928
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b48f4
        ;   Label: LAB_005b48f4
    MOV EBX,dword ptr [ESI + 0x18]      ; 005b48f7
    SUB EAX,EBX                         ; 005b48fa
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b48fc | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821e0],EBX      ; 005b4902 | g_StartTextureU
    MOV dword ptr [0x00682610],EDX      ; 005b4908 | g_DeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b490e
    MOV EBX,dword ptr [ESI + 0x20]      ; 005b4911
    SUB EAX,EBX                         ; 005b4914
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b4916 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821e4],EBX      ; 005b491c | g_StartTextureV
    MOV dword ptr [0x00682614],EDX      ; 005b4922 | g_DeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b4928
        ;   Label: LAB_005b4928
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b492b
    SUB EAX,EBX                         ; 005b492e
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b4930 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821ec],EBX      ; 005b4936 | g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b493c | g_DeltaDepthW
    MOV EAX,dword ptr [EDI + 0x30]      ; 005b4942
    MOV EBX,dword ptr [ESI + 0x30]      ; 005b4945
    SUB EAX,EBX                         ; 005b4948
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b494a | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006826d0],EBX      ; 005b4950 | g_VertexAlphaStart
    MOV dword ptr [0x006826d8],EDX      ; 005b4956 | g_VertexAlphaDelta
    MOV EBP,dword ptr [0x006826d0]      ; 005b495c | g_VertexAlphaStart
    PXOR MM7,MM7                        ; 005b4962
    TEST dword ptr [0x02d052a0],0x200   ; 005b4965 | g_RenderStateFlags
    JNZ 0x005b49a4                      ; 005b496f
        ;   XREF to: 005b49a4 (CONDITIONAL_JUMP)  ; LAB_005b49a4
    TEST dword ptr [0x02d052a0],0x4     ; 005b4971 | g_RenderStateFlags
    JNZ 0x005b4a61                      ; 005b497b
        ;   XREF to: 005b4a61 (CONDITIONAL_JUMP)  ; LAB_005b4a61
    TEST dword ptr [0x02d052a0],0x10    ; 005b4981 | g_RenderStateFlags
    JNZ 0x005b4aed                      ; 005b498b
        ;   XREF to: 005b4aed (CONDITIONAL_JUMP)  ; LAB_005b4aed
    MOVQ MM5,qword ptr [0x006837f8]     ; 005b4991 | g_AlphaTable[255].red
    PSLLW MM5,0x7                       ; 005b4998
    PXOR MM6,MM6                        ; 005b499c
    JMP 0x005b4b17                      ; 005b499f
        ;   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)  ; LAB_005b4b17
    MOV EAX,dword ptr [EDI + 0x10]      ; 005b49a4
        ;   Label: LAB_005b49a4
    MOV EBX,dword ptr [ESI + 0x10]      ; 005b49a7
    SHR EAX,0x1                         ; 005b49aa
    SHR EBX,0x1                         ; 005b49ac
    SUB EAX,EBX                         ; 005b49ae
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b49b0 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b49b6
    AND EDX,0xffff                      ; 005b49bc
    MOV dword ptr [0x00682690],EBX      ; 005b49c2 | g_VertexRedStart
    MOV dword ptr [0x006826b0],EDX      ; 005b49c8 | g_VertexRedDelta
    MOV EAX,dword ptr [EDI + 0x38]      ; 005b49ce
    MOV EBX,dword ptr [ESI + 0x38]      ; 005b49d1
    SHR EAX,0x1                         ; 005b49d4
    SHR EBX,0x1                         ; 005b49d6
    SUB EAX,EBX                         ; 005b49d8
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b49da | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b49e0
    AND EDX,0xffff                      ; 005b49e6
    MOV dword ptr [0x00682698],EBX      ; 005b49ec | g_VertexGreenStart
    MOV dword ptr [0x006826b8],EDX      ; 005b49f2 | g_VertexGreenDelta
    MOV EAX,dword ptr [EDI + 0x40]      ; 005b49f8
    MOV EBX,dword ptr [ESI + 0x40]      ; 005b49fb
    SHR EAX,0x1                         ; 005b49fe
    SHR EBX,0x1                         ; 005b4a00
    SUB EAX,EBX                         ; 005b4a02
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b4a04 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b4a0a
    AND EDX,0xffff                      ; 005b4a10
    MOV dword ptr [0x006826a0],EBX      ; 005b4a16 | g_VertexBlueStart
    MOV dword ptr [0x006826c0],EDX      ; 005b4a1c | g_VertexBlueDelta
    MOVQ MM5,qword ptr [0x00682690]     ; 005b4a22 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x006826b0]     ; 005b4a29 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005b4a30
    PSLLQ MM6,0x10                      ; 005b4a34
    POR MM5,qword ptr [0x00682698]      ; 005b4a38 | g_VertexGreenStart
    POR MM6,qword ptr [0x006826b8]      ; 005b4a3f | g_VertexGreenDelta
    PSLLQ MM5,0x10                      ; 005b4a46
    PSLLQ MM6,0x10                      ; 005b4a4a
    POR MM5,qword ptr [0x006826a0]      ; 005b4a4e | g_VertexBlueStart
    POR MM6,qword ptr [0x006826c0]      ; 005b4a55 | g_VertexBlueDelta
    JMP 0x005b4b17                      ; 005b4a5c
        ;   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)  ; LAB_005b4b17
    MOV EAX,dword ptr [EDI + 0x10]      ; 005b4a61
        ;   Label: LAB_005b4a61
    MOV EBX,dword ptr [ESI + 0x10]      ; 005b4a64
    SUB EAX,0x100                       ; 005b4a67
    SUB EBX,0x100                       ; 005b4a6c
    CMP EAX,0xfff                       ; 005b4a72
    JBE 0x005b4a7e                      ; 005b4a77
        ;   XREF to: 005b4a7e (CONDITIONAL_JUMP)  ; LAB_005b4a7e
    MOV EAX,0xfff                       ; 005b4a79
    CMP EBX,0xfff                       ; 005b4a7e
        ;   Label: LAB_005b4a7e
    JBE 0x005b4a8b                      ; 005b4a84
        ;   XREF to: 005b4a8b (CONDITIONAL_JUMP)  ; LAB_005b4a8b
    MOV EBX,0xfff                       ; 005b4a86
    SHL EAX,0x3                         ; 005b4a8b
        ;   Label: LAB_005b4a8b
    SHL EBX,0x3                         ; 005b4a8e
    SUB EAX,EBX                         ; 005b4a91
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b4a93 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b4a99
    AND EDX,0xffff                      ; 005b4a9f
    MOV dword ptr [0x00682690],EBX      ; 005b4aa5 | g_VertexRedStart
    MOV dword ptr [0x006826b0],EDX      ; 005b4aab | g_VertexRedDelta
    MOVQ MM5,qword ptr [0x00682690]     ; 005b4ab1 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x006826b0]     ; 005b4ab8 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005b4abf
    PSLLQ MM6,0x10                      ; 005b4ac3
    POR MM5,qword ptr [0x00682690]      ; 005b4ac7 | g_VertexRedStart
    POR MM6,qword ptr [0x006826b0]      ; 005b4ace | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005b4ad5
    PSLLQ MM6,0x10                      ; 005b4ad9
    POR MM5,qword ptr [0x00682690]      ; 005b4add | g_VertexRedStart
    POR MM6,qword ptr [0x006826b0]      ; 005b4ae4 | g_VertexRedDelta
    JMP 0x005b4b17                      ; 005b4aeb
        ;   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)  ; LAB_005b4b17
    MOV EAX,[0x02d02574]                ; 005b4aed | g_CurrentLightingValue
        ;   Label: LAB_005b4aed
    SUB EAX,0x100                       ; 005b4af2
    SHR EAX,0x4                         ; 005b4af7
    CMP EAX,0xff                        ; 005b4afa
    JC 0x005b4b06                       ; 005b4aff
        ;   XREF to: 005b4b06 (CONDITIONAL_JUMP)  ; LAB_005b4b06
    MOV EAX,0xff                        ; 005b4b01
    MOVQ MM5,qword ptr [EAX*0x8 + 0x683000] ; 005b4b06 | g_AlphaTable | g_AlphaTable[255].red
        ;   Label: LAB_005b4b06
    PSLLW MM5,0x7                       ; 005b4b0e
    PXOR MM6,MM6                        ; 005b4b12
    JMP 0x005b4b17                      ; 005b4b15
        ;   XREF to: 005b4b17 (UNCONDITIONAL_JUMP)  ; LAB_005b4b17
    MOV ECX,dword ptr [0x006821e0]      ; 005b4b17 | g_StartTextureU
        ;   Label: LAB_005b4b17
    MOV EDX,dword ptr [0x006821e4]      ; 005b4b1d | g_StartTextureV
    MOV ESI,dword ptr [0x006821ec]      ; 005b4b23 | g_StartDepthW
    MOV EDI,0x0                         ; 005b4b29
    CMP dword ptr [0x02d03e84],0x0      ; 005b4b2e | g_CurrentTextureOpacityData
    JNZ 0x005b4b47                      ; 005b4b35
        ;   XREF to: 005b4b47 (CONDITIONAL_JUMP)  ; LAB_005b4b47
    TEST dword ptr [0x02d052a0],0x2     ; 005b4b37 | g_RenderStateFlags
    JZ 0x005b4f11                       ; 005b4b41
        ;   XREF to: 005b4f11 (CONDITIONAL_JUMP)  ; LAB_005b4f11
    TEST dword ptr [0x02d052a0],0x100   ; 005b4b47 | g_RenderStateFlags
        ;   Label: LAB_005b4b47
    JNZ 0x005b4b66                      ; 005b4b51
        ;   XREF to: 005b4b66 (CONDITIONAL_JUMP)  ; LAB_005b4b66
    MOV EBP,dword ptr [0x006793b4]      ; 005b4b53 | g_CurrentAlphaValue
    SHL EBP,0x8                         ; 005b4b59
    MOV dword ptr [0x006826d8],0x0      ; 005b4b5c | g_VertexAlphaDelta
    CMP dword ptr [0x02d03e84],0x0      ; 005b4b66 | g_CurrentTextureOpacityData
        ;   Label: LAB_005b4b66
    JNZ 0x005b4d22                      ; 005b4b6d
        ;   XREF to: 005b4d22 (CONDITIONAL_JUMP)  ; LAB_005b4d22
    TEST dword ptr [0x02d052a0],0x40    ; 005b4b73 | g_RenderStateFlags
        ;   Label: LAB_005b4b73
    JZ 0x005b4b8f                       ; 005b4b7d
        ;   XREF to: 005b4b8f (CONDITIONAL_JUMP)  ; LAB_005b4b8f
    LEA EAX,[EDI]                       ; 005b4b7f
    ADD EAX,dword ptr [0x0068220c]      ; 005b4b81 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b4b87
    JL 0x005b4ce4                       ; 005b4b89
        ;   XREF to: 005b4ce4 (CONDITIONAL_JUMP)  ; LAB_005b4ce4
    MOVD MM0,ECX                        ; 005b4b8f
        ;   Label: LAB_005b4b8f
    MOVD MM2,EDX                        ; 005b4b92
    PSRLQ MM0,qword ptr [0x006826e0]    ; 005b4b95 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 005b4b9c | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 005b4ba3 | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 005b4baa | g_TextureMask2
    PADDD MM0,MM2                       ; 005b4bb1
    MOVD EBX,MM0                        ; 005b4bb4
    ADD EBX,dword ptr [0x02d03e80]      ; 005b4bb7 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 005b4bbd
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 005b4bc0 | g_Hardware32BitPalette
    CMP EAX,0x0                         ; 005b4bc7
    JZ 0x005b4ce4                       ; 005b4bca
        ;   XREF to: 005b4ce4 (CONDITIONAL_JUMP)  ; LAB_005b4ce4
    MOVD MM0,EAX                        ; 005b4bd0
    PUNPCKLBW MM0,MM7                   ; 005b4bd3
    PXOR MM4,MM4                        ; 005b4bd6
    TEST dword ptr [0x02d052a0],0x20    ; 005b4bd9 | g_RenderStateFlags
    JZ 0x005b4c2e                       ; 005b4be3
        ;   XREF to: 005b4c2e (CONDITIONAL_JUMP)  ; LAB_005b4c2e
    MOV EBX,EDI                         ; 005b4be5
    SHR EBX,0x1                         ; 005b4be7
    ADD EBX,dword ptr [0x00682208]      ; 005b4be9 | g_CurrentScreenPtr
    MOVZX EBX,word ptr [EBX]            ; 005b4bef
    MOVD MM4,EBX                        ; 005b4bf2
    PAND MM4,qword ptr [0x00682758]     ; 005b4bf5 | g_BlueMask16
    PSLLQ MM4,qword ptr [0x006827e8]    ; 005b4bfc | g_BlueBitShift
    MOVD MM2,EBX                        ; 005b4c03
    PAND MM2,qword ptr [0x00682750]     ; 005b4c06 | g_GreenMask16
    PSLLQ MM2,qword ptr [0x006827c8]    ; 005b4c0d | g_GreenBlueBits
    POR MM4,MM2                         ; 005b4c14
    MOVD MM2,EBX                        ; 005b4c17
    PAND MM2,qword ptr [0x00682748]     ; 005b4c1a | g_RedMask16
    PSLLQ MM2,qword ptr [0x006827a8]    ; 005b4c21 | g_TotalColorBits
    POR MM4,MM2                         ; 005b4c28
    PUNPCKLBW MM4,MM7                   ; 005b4c2b
    PSLLW MM0,0x4                       ; 005b4c2e
        ;   Label: LAB_005b4c2e
    MOVQ MM7,MM5                        ; 005b4c32
    MOV EAX,EBP                         ; 005b4c35
    PSRLW MM7,0x3                       ; 005b4c37
    SAR EAX,0x8                         ; 005b4c3b
    PMULHW MM0,MM7                      ; 005b4c3e
    MOVQ MM2,qword ptr [EAX*0x8 + 0x683000] ; 005b4c41 | g_AlphaTable[255].red
    PXOR MM7,MM7                        ; 005b4c49
    MOVQ MM3,MM2                        ; 005b4c4c
    PACKUSWB MM0,MM7                    ; 005b4c4f
    PXOR MM3,qword ptr [0x006837f8]     ; 005b4c52 | g_AlphaTable[255].red
    PUNPCKLBW MM0,MM7                   ; 005b4c59
    CMP dword ptr [0x02d05298],0x0      ; 005b4c5c | g_BlendMode
    JNZ 0x005b4c77                      ; 005b4c63
        ;   XREF to: 005b4c77 (CONDITIONAL_JUMP)  ; LAB_005b4c77
    PMULLW MM4,MM3                      ; 005b4c65
    PMULLW MM0,MM2                      ; 005b4c68
    PADDUSW MM0,MM4                     ; 005b4c6b
    PSRLW MM0,0x8                       ; 005b4c6e
    PACKUSWB MM0,MM7                    ; 005b4c72
    JMP 0x005b4c88                      ; 005b4c75
        ;   XREF to: 005b4c88 (UNCONDITIONAL_JUMP)  ; LAB_005b4c88
    PSLLW MM4,0x8                       ; 005b4c77
        ;   Label: LAB_005b4c77
    PMULLW MM0,MM2                      ; 005b4c7b
    PADDUSW MM0,MM4                     ; 005b4c7e
    PSRLW MM0,0x8                       ; 005b4c81
    PACKUSWB MM0,MM7                    ; 005b4c85
    MOV EBX,EDI                         ; 005b4c88
        ;   Label: LAB_005b4c88
    SHR EBX,0x1                         ; 005b4c8a
    ADD EBX,dword ptr [0x00682208]      ; 005b4c8c | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 005b4c92
    MOVQ MM4,MM0                        ; 005b4c95
    PAND MM0,qword ptr [0x006827a0]     ; 005b4c98 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 005b4c9f | g_GreenMask32
    PAND MM4,qword ptr [0x00682760]     ; 005b4ca6 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 005b4cad | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 005b4cb4 | g_GreenBlueBits
    PSRLQ MM4,qword ptr [0x006827a8]    ; 005b4cbb | g_TotalColorBits
    POR MM0,MM2                         ; 005b4cc2
    POR MM0,MM4                         ; 005b4cc5
    MOVD EAX,MM0                        ; 005b4cc8
    MOV word ptr [EBX],AX               ; 005b4ccb
    TEST dword ptr [0x02d052a0],0x80    ; 005b4cce | g_RenderStateFlags
    JZ 0x005b4ce4                       ; 005b4cd8
        ;   XREF to: 005b4ce4 (CONDITIONAL_JUMP)  ; LAB_005b4ce4
    MOV EAX,EDI                         ; 005b4cda
    ADD EAX,dword ptr [0x0068220c]      ; 005b4cdc | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 005b4ce2
    ADD EDI,0x4                         ; 005b4ce4
        ;   Label: LAB_005b4ce4
    CMP EDI,dword ptr [0x006821a4]      ; 005b4ce7 | g_ScanlinePixelCount
    JNC 0x005b4d1c                      ; 005b4ced
        ;   XREF to: 005b4d1c (CONDITIONAL_JUMP)  ; LAB_005b4d1c
    ADD ECX,dword ptr [0x00682610]      ; 005b4cef | g_DeltaTextureU
    PADDW MM5,MM6                       ; 005b4cf5
    ADD EDX,dword ptr [0x00682614]      ; 005b4cf8 | g_DeltaTextureV
    MOVQ MM0,MM5                        ; 005b4cfe
    ADD ESI,dword ptr [0x00682618]      ; 005b4d01 | g_DeltaDepthW
    PCMPGTW MM5,qword ptr [0x0068261c]  ; 005b4d07 | g_SelectedClearColor
    ADD EBP,dword ptr [0x006826d8]      ; 005b4d0e | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 005b4d14
    JMP 0x005b4b73                      ; 005b4d17
        ;   XREF to: 005b4b73 (UNCONDITIONAL_JUMP)  ; LAB_005b4b73
    POP EBP                             ; 005b4d1c
        ;   Label: LAB_005b4d1c
    EMMS                                ; 005b4d1d
    POP EDI                             ; 005b4d1f
    POP ESI                             ; 005b4d20
    RET                                 ; 005b4d21
    TEST dword ptr [0x02d052a0],0x40    ; 005b4d22 | g_RenderStateFlags
        ;   Label: LAB_005b4d22
    JZ 0x005b4d3e                       ; 005b4d2c
        ;   XREF to: 005b4d3e (CONDITIONAL_JUMP)  ; LAB_005b4d3e
    LEA EAX,[EDI]                       ; 005b4d2e
    ADD EAX,dword ptr [0x0068220c]      ; 005b4d30 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b4d36
    JL 0x005b4ed3                       ; 005b4d38
        ;   XREF to: 005b4ed3 (CONDITIONAL_JUMP)  ; LAB_005b4ed3
    MOVD MM0,ECX                        ; 005b4d3e
        ;   Label: LAB_005b4d3e
    MOVD MM2,EDX                        ; 005b4d41
    PSRLQ MM0,qword ptr [0x006826e0]    ; 005b4d44 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 005b4d4b | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 005b4d52 | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 005b4d59 | g_TextureMask2
    PADDD MM0,MM2                       ; 005b4d60
    MOVD EBX,MM0                        ; 005b4d63
    ADD EBX,dword ptr [0x02d03e80]      ; 005b4d66 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 005b4d6c
    MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924] ; 005b4d6f | g_Hardware32BitPalette
    PUNPCKLBW MM0,MM7                   ; 005b4d77
    SUB EBX,dword ptr [0x02d03e80]      ; 005b4d7a | g_CurrentTextureData
    ADD EBX,dword ptr [0x02d03e84]      ; 005b4d80 | g_CurrentTextureOpacityData
    MOVZX EAX,byte ptr [EBX]            ; 005b4d86
    TEST EAX,0xffffffff                 ; 005b4d89
    JZ 0x005b4ed3                       ; 005b4d8e
        ;   XREF to: 005b4ed3 (CONDITIONAL_JUMP)  ; LAB_005b4ed3
    CMP EBP,0xff00                      ; 005b4d94
    JLE 0x005b4da7                      ; 005b4d9a
        ;   XREF to: 005b4da7 (CONDITIONAL_JUMP)  ; LAB_005b4da7
    CMP EAX,0xff                        ; 005b4d9c
    JGE 0x005b4e3a                      ; 005b4da1
        ;   XREF to: 005b4e3a (CONDITIONAL_JUMP)  ; LAB_005b4e3a
    MOV EBX,EDI                         ; 005b4da7
        ;   Label: LAB_005b4da7
    SHR EBX,0x1                         ; 005b4da9
    ADD EBX,dword ptr [0x00682208]      ; 005b4dab | g_CurrentScreenPtr
    MOVZX EBX,word ptr [EBX]            ; 005b4db1
    MOVD MM4,EBX                        ; 005b4db4
    PAND MM4,qword ptr [0x00682758]     ; 005b4db7 | g_BlueMask16
    PSLLQ MM4,qword ptr [0x006827e8]    ; 005b4dbe | g_BlueBitShift
    MOVD MM2,EBX                        ; 005b4dc5
    PAND MM2,qword ptr [0x00682750]     ; 005b4dc8 | g_GreenMask16
    PSLLQ MM2,qword ptr [0x006827c8]    ; 005b4dcf | g_GreenBlueBits
    POR MM4,MM2                         ; 005b4dd6
    MOVD MM2,EBX                        ; 005b4dd9
    PAND MM2,qword ptr [0x00682748]     ; 005b4ddc | g_RedMask16
    PSLLQ MM2,qword ptr [0x006827a8]    ; 005b4de3 | g_TotalColorBits
    POR MM4,MM2                         ; 005b4dea
    PUNPCKLBW MM4,MM7                   ; 005b4ded
    PSLLW MM0,0x4                       ; 005b4df0
    MOVQ MM7,MM5                        ; 005b4df4
    IMUL EAX,EBP                        ; 005b4df7
    PSRLW MM7,0x3                       ; 005b4dfa
    SHR EAX,0x10                        ; 005b4dfe
    PMULHW MM0,MM7                      ; 005b4e01
    MOVQ MM2,qword ptr [EAX*0x8 + 0x683000] ; 005b4e04 | g_AlphaTable
    PXOR MM7,MM7                        ; 005b4e0c
    MOVQ MM3,MM2                        ; 005b4e0f
    PACKUSWB MM0,MM7                    ; 005b4e12
    PXOR MM3,qword ptr [0x006837f8]     ; 005b4e15 | g_AlphaTable[255].red
    PUNPCKLBW MM0,MM7                   ; 005b4e1c
    CMP dword ptr [0x02d05298],0x0      ; 005b4e1f | g_BlendMode
    JNZ 0x005b4e66                      ; 005b4e26
        ;   XREF to: 005b4e66 (CONDITIONAL_JUMP)  ; LAB_005b4e66
    PMULLW MM4,MM3                      ; 005b4e28
    PMULLW MM0,MM2                      ; 005b4e2b
    PADDUSW MM0,MM4                     ; 005b4e2e
    PSRLW MM0,0x8                       ; 005b4e31
    PACKUSWB MM0,MM7                    ; 005b4e35
    JMP 0x005b4e77                      ; 005b4e38
        ;   XREF to: 005b4e77 (UNCONDITIONAL_JUMP)  ; LAB_005b4e77
    CMP EBP,0xff                        ; 005b4e3a
        ;   Label: LAB_005b4e3a
    JL 0x005b4da7                       ; 005b4e40
        ;   XREF to: 005b4da7 (CONDITIONAL_JUMP)  ; LAB_005b4da7
    CMP dword ptr [0x02d05298],0x0      ; 005b4e46 | g_BlendMode
    JNZ 0x005b4da7                      ; 005b4e4d
        ;   XREF to: 005b4da7 (CONDITIONAL_JUMP)  ; LAB_005b4da7
    MOVQ MM3,MM5                        ; 005b4e53
    PSRLW MM3,0x3                       ; 005b4e56
    PSLLW MM0,0x4                       ; 005b4e5a
    PMULHW MM0,MM3                      ; 005b4e5e
    PACKUSWB MM0,MM7                    ; 005b4e61
    JMP 0x005b4e77                      ; 005b4e64
        ;   XREF to: 005b4e77 (UNCONDITIONAL_JUMP)  ; LAB_005b4e77
    PSLLW MM4,0x8                       ; 005b4e66
        ;   Label: LAB_005b4e66
    PMULLW MM0,MM2                      ; 005b4e6a
    PADDUSW MM0,MM4                     ; 005b4e6d
    PSRLW MM0,0x8                       ; 005b4e70
    PACKUSWB MM0,MM7                    ; 005b4e74
    MOV EBX,EDI                         ; 005b4e77
        ;   Label: LAB_005b4e77
    SHR EBX,0x1                         ; 005b4e79
    ADD EBX,dword ptr [0x00682208]      ; 005b4e7b | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 005b4e81
    MOVQ MM4,MM0                        ; 005b4e84
    PAND MM0,qword ptr [0x006827a0]     ; 005b4e87 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 005b4e8e | g_GreenMask32
    PAND MM4,qword ptr [0x00682760]     ; 005b4e95 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 005b4e9c | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 005b4ea3 | g_GreenBlueBits
    PSRLQ MM4,qword ptr [0x006827a8]    ; 005b4eaa | g_TotalColorBits
    POR MM0,MM2                         ; 005b4eb1
    POR MM0,MM4                         ; 005b4eb4
    MOVD EAX,MM0                        ; 005b4eb7
    MOV word ptr [EBX],AX               ; 005b4eba
    TEST dword ptr [0x02d052a0],0x80    ; 005b4ebd | g_RenderStateFlags
    JZ 0x005b4ed3                       ; 005b4ec7
        ;   XREF to: 005b4ed3 (CONDITIONAL_JUMP)  ; LAB_005b4ed3
    MOV EAX,EDI                         ; 005b4ec9
    ADD EAX,dword ptr [0x0068220c]      ; 005b4ecb | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 005b4ed1
    ADD EDI,0x4                         ; 005b4ed3
        ;   Label: LAB_005b4ed3
    CMP EDI,dword ptr [0x006821a4]      ; 005b4ed6 | g_ScanlinePixelCount
    JNC 0x005b4f0b                      ; 005b4edc
        ;   XREF to: 005b4f0b (CONDITIONAL_JUMP)  ; LAB_005b4f0b
    ADD ECX,dword ptr [0x00682610]      ; 005b4ede | g_DeltaTextureU
    PADDW MM5,MM6                       ; 005b4ee4
    ADD EDX,dword ptr [0x00682614]      ; 005b4ee7 | g_DeltaTextureV
    MOVQ MM0,MM5                        ; 005b4eed
    ADD ESI,dword ptr [0x00682618]      ; 005b4ef0 | g_DeltaDepthW
    PCMPGTW MM5,qword ptr [0x0068261c]  ; 005b4ef6 | g_SelectedClearColor
    ADD EBP,dword ptr [0x006826d8]      ; 005b4efd | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 005b4f03
    JMP 0x005b4d22                      ; 005b4f06
        ;   XREF to: 005b4d22 (UNCONDITIONAL_JUMP)  ; LAB_005b4d22
    POP EBP                             ; 005b4f0b
        ;   Label: LAB_005b4f0b
    EMMS                                ; 005b4f0c
    POP EDI                             ; 005b4f0e
    POP ESI                             ; 005b4f0f
    RET                                 ; 005b4f10
    MOVQ MM1,qword ptr [0x02d052a8]     ; 005b4f11 | g_SolidColorMode
        ;   Label: LAB_005b4f11
    PUNPCKLBW MM1,MM7                   ; 005b4f18
    TEST dword ptr [0x02d052a0],0x8     ; 005b4f1b | g_RenderStateFlags
    JNZ 0x005b4f36                      ; 005b4f25
        ;   XREF to: 005b4f36 (CONDITIONAL_JUMP)  ; LAB_005b4f36
    MOV EBP,0x0                         ; 005b4f27
    MOV dword ptr [0x006826d8],0x0      ; 005b4f2c | g_VertexAlphaDelta
    TEST dword ptr [0x02d052a0],0x40    ; 005b4f36 | g_RenderStateFlags
        ;   Label: LAB_005b4f36
    JZ 0x005b4f52                       ; 005b4f40
        ;   XREF to: 005b4f52 (CONDITIONAL_JUMP)  ; LAB_005b4f52
    LEA EAX,[EDI]                       ; 005b4f42
    ADD EAX,dword ptr [0x0068220c]      ; 005b4f44 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b4f4a
    JL 0x005b5043                       ; 005b4f4c
        ;   XREF to: 005b5043 (CONDITIONAL_JUMP)  ; LAB_005b5043
    TEST dword ptr [0x02d052a0],0x1     ; 005b4f52 | g_RenderStateFlags
        ;   Label: LAB_005b4f52
    JZ 0x005b5085                       ; 005b4f5c
        ;   XREF to: 005b5085 (CONDITIONAL_JUMP)  ; LAB_005b5085
    MOVD MM0,ECX                        ; 005b4f62
    MOVD MM2,EDX                        ; 005b4f65
    PSRLQ MM0,qword ptr [0x006826e0]    ; 005b4f68 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 005b4f6f | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 005b4f76 | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 005b4f7d | g_TextureMask2
    PADDD MM0,MM2                       ; 005b4f84
    MOVD EBX,MM0                        ; 005b4f87
    ADD EBX,dword ptr [0x02d03e80]      ; 005b4f8a | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 005b4f90
    MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924] ; 005b4f93 | g_Hardware32BitPalette
    MOVQ MM3,MM5                        ; 005b4f9b
        ;   Label: LAB_005b4f9b
    PUNPCKLBW MM0,MM7                   ; 005b4f9e
    PSRLW MM3,0x3                       ; 005b4fa1
    PSLLW MM0,0x4                       ; 005b4fa5
    PMULHW MM0,MM3                      ; 005b4fa9
    PACKUSWB MM0,MM7                    ; 005b4fac
    TEST dword ptr [0x02d052a0],0x8     ; 005b4faf | g_RenderStateFlags
    JZ 0x005b4fe8                       ; 005b4fb9
        ;   XREF to: 005b4fe8 (CONDITIONAL_JUMP)  ; LAB_005b4fe8
    MOV EAX,EBP                         ; 005b4fbb
    SAR EAX,0x8                         ; 005b4fbd
    MOVQ MM3,qword ptr [EAX*0x8 + 0x683000] ; 005b4fc0 | g_AlphaTable
    MOVQ MM4,MM1                        ; 005b4fc8
    MOVQ MM2,MM3                        ; 005b4fcb
    PMULLW MM4,MM3                      ; 005b4fce
    PXOR MM2,qword ptr [0x006837f8]     ; 005b4fd1 | g_AlphaTable[255].red
    PUNPCKLBW MM0,MM7                   ; 005b4fd8
    PMULLW MM0,MM2                      ; 005b4fdb
    PADDW MM0,MM4                       ; 005b4fde
    PSRLW MM0,0x8                       ; 005b4fe1
    PACKUSWB MM0,MM7                    ; 005b4fe5
    MOV EBX,EDI                         ; 005b4fe8
        ;   Label: LAB_005b4fe8
    SHR EBX,0x1                         ; 005b4fea
    ADD EBX,dword ptr [0x00682208]      ; 005b4fec | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 005b4ff2
    MOVQ MM4,MM0                        ; 005b4ff5
    PAND MM0,qword ptr [0x006827a0]     ; 005b4ff8 | g_BlueMask32
    PAND MM2,qword ptr [0x00682780]     ; 005b4fff | g_GreenMask32
    PAND MM4,qword ptr [0x00682760]     ; 005b5006 | g_RedMask32
    PSRLQ MM0,qword ptr [0x006827e8]    ; 005b500d | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x006827c8]    ; 005b5014 | g_GreenBlueBits
    PSRLQ MM4,qword ptr [0x006827a8]    ; 005b501b | g_TotalColorBits
    POR MM0,MM2                         ; 005b5022
    POR MM0,MM4                         ; 005b5025
    MOVD EAX,MM0                        ; 005b5028
    MOV word ptr [EBX],AX               ; 005b502b
    TEST dword ptr [0x02d052a0],0x80    ; 005b502e | g_RenderStateFlags
    JZ 0x005b5043                       ; 005b5038
        ;   XREF to: 005b5043 (CONDITIONAL_JUMP)  ; LAB_005b5043
    MOV EAX,[0x0068220c]                ; 005b503a | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 005b503f
    MOV dword ptr [EAX],ESI             ; 005b5041
    ADD EDI,0x4                         ; 005b5043
        ;   Label: LAB_005b5043
    CMP EDI,dword ptr [0x006821a4]      ; 005b5046 | g_ScanlinePixelCount
    JNC 0x005b4d1c                      ; 005b504c
        ;   XREF to: 005b4d1c (CONDITIONAL_JUMP)  ; LAB_005b4d1c
    ADD ECX,dword ptr [0x00682610]      ; 005b5052 | g_DeltaTextureU
    PADDW MM5,MM6                       ; 005b5058
    ADD EDX,dword ptr [0x00682614]      ; 005b505b | g_DeltaTextureV
    MOVQ MM0,MM5                        ; 005b5061
    ADD ESI,dword ptr [0x00682618]      ; 005b5064 | g_DeltaDepthW
    PCMPGTW MM5,qword ptr [0x0068261c]  ; 005b506a | g_SelectedClearColor
    ADD EBP,dword ptr [0x006826d8]      ; 005b5071 | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 005b5077
    JMP 0x005b4f36                      ; 005b507a
        ;   XREF to: 005b4f36 (UNCONDITIONAL_JUMP)  ; LAB_005b4f36
    TEST dword ptr [0x02d052a0],0x200   ; 005b5085 | g_RenderStateFlags
        ;   Label: LAB_005b5085
    JNZ 0x005b509d                      ; 005b508f
        ;   XREF to: 005b509d (CONDITIONAL_JUMP)  ; LAB_005b509d
    MOVD MM0,dword ptr [0x02d02570]     ; 005b5091 | g_ActiveRenderColor
    JMP 0x005b4f9b                      ; 005b5098
        ;   XREF to: 005b4f9b (UNCONDITIONAL_JUMP)  ; LAB_005b4f9b
    MOVD MM0,dword ptr [0x006827f0]     ; 005b509d | g_SpecialColor
        ;   Label: LAB_005b509d
    JMP 0x005b4f9b                      ; 005b50a4
        ;   XREF to: 005b4f9b (UNCONDITIONAL_JUMP)  ; LAB_005b4f9b
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b50a9
        ;   Label: LAB_005b50a9
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b50ac
    SUB EAX,EBX                         ; 005b50af
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b50b1 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821ec],EBX      ; 005b50b7 | g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b50bd | g_DeltaDepthW
    MOV EAX,[0x006821ec]                ; 005b50c3 | g_StartDepthW
    MOV EBX,dword ptr [0x00682618]      ; 005b50c8 | g_DeltaDepthW
    MOV ESI,dword ptr [0x0068220c]      ; 005b50ce | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x006821a4]      ; 005b50d4 | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 005b50da
        ;   Label: LAB_005b50da
    ADD EAX,EBX                         ; 005b50dc
    ADD ESI,0x4                         ; 005b50de
    SUB ECX,0x4                         ; 005b50e1
    JG 0x005b50da                       ; 005b50e4
        ;   XREF to: 005b50da (CONDITIONAL_JUMP)  ; LAB_005b50da
    POP EBP                             ; 005b50e6
    EMMS                                ; 005b50e7
    POP EDI                             ; 005b50e9
    POP ESI                             ; 005b50ea
    RET                                 ; 005b50eb

