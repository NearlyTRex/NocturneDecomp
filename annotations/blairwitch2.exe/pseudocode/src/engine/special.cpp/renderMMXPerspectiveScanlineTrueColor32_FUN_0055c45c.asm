; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_0055c45c(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[2]:
;   engine_mini3d.cpp_fillPolygon_FUN_004f7a50 at 004f7c08
;   engine_mini3d.cpp_rasterizeTriangle_FUN_004f7280 at 004f78be
;
; Referenced Globals:
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
;   _MMX_INTEGER g_VertexGreenDelta
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055c45c
        ;   Label: engine_special.cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_0055c45c
    PUSH EDI                            ; 0055c45d
    PUSH EBP                            ; 0055c45e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055c45f
    MOV ECX,dword ptr [EDI + 0x8]       ; 0055c462
    CMP EAX,ECX                         ; 0055c465
    JBE 0x0055c46c                      ; 0055c467
        ;   XREF to: 0055c46c (CONDITIONAL_JUMP)  ; LAB_0055c46c
    XCHG EAX,ECX                        ; 0055c469
    XCHG EDI,ESI                        ; 0055c46a
    SHR ECX,0x10                        ; 0055c46c
        ;   Label: LAB_0055c46c
    SHR EAX,0x10                        ; 0055c46f
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055c472 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055c479 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 0055c480
    JLE 0x0055c850                      ; 0055c482
        ;   XREF to: 0055c850 (CONDITIONAL_JUMP)  ; LAB_0055c850
    LEA EBX,[EBX + EAX*0x4]             ; 0055c488
    SHL ECX,0x2                         ; 0055c48b
    LEA EBP,[EBP + EAX*0x4]             ; 0055c48e
    MOV dword ptr [0x0061c314],ECX      ; 0055c492 | g_ScanlinePixelCount
    MOV dword ptr [0x0061c378],EBX      ; 0055c498 | g_CurrentScreenPtr
    MOV dword ptr [0x0061c37c],EBP      ; 0055c49e | g_CurrentZBufferPtr
    CMP dword ptr [0x01c38b54],0x80     ; 0055c4a4 | g_RenderStateFlags
    JZ 0x0055c9e0                       ; 0055c4ae
        ;   XREF to: 0055c9e0 (CONDITIONAL_JUMP)  ; LAB_0055c9e0
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055c4b4
    MOV EBX,dword ptr [ESI + 0x18]      ; 0055c4b7
    SUB EAX,EBX                         ; 0055c4ba
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c4bc | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c350],EBX      ; 0055c4c2 | g_StartTextureU
    MOV dword ptr [0x0061c780],EDX      ; 0055c4c8 | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055c4ce
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055c4d1
    SUB EAX,EBX                         ; 0055c4d4
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c4d6 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c354],EBX      ; 0055c4dc | g_StartTextureV
    MOV dword ptr [0x0061c784],EDX      ; 0055c4e2 | g_HardwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055c4e8
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055c4eb
    SUB EAX,EBX                         ; 0055c4ee
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c4f0 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c35c],EBX      ; 0055c4f6 | g_StartDepthW
    MOV dword ptr [0x0061c788],EDX      ; 0055c4fc | g_HardwareDeltaDepthZ
    TEST dword ptr [0x01c38b54],0x8     ; 0055c502 | g_RenderStateFlags
    JZ 0x0055c530                       ; 0055c50c
        ;   XREF to: 0055c530 (CONDITIONAL_JUMP)  ; LAB_0055c530
    MOV EAX,dword ptr [EDI + 0x30]      ; 0055c50e
    MOV EBX,dword ptr [ESI + 0x30]      ; 0055c511
    SUB EAX,EBX                         ; 0055c514
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c516 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c840],EBX      ; 0055c51c | g_VertexAlphaStart
    MOV dword ptr [0x0061c848],EDX      ; 0055c522 | g_VertexAlphaDelta
    JMP 0x0055c544                      ; 0055c528
        ;   XREF to: 0055c544 (UNCONDITIONAL_JUMP)  ; LAB_0055c544
    MOV dword ptr [0x0061c840],0x0      ; 0055c530 | g_VertexAlphaStart
        ;   Label: LAB_0055c530
    MOV dword ptr [0x0061c848],0x0      ; 0055c53a | g_VertexAlphaDelta
    TEST dword ptr [0x01c38b54],0x20    ; 0055c544 | g_RenderStateFlags
        ;   Label: LAB_0055c544
    JZ 0x0055c56a                       ; 0055c54e
        ;   XREF to: 0055c56a (CONDITIONAL_JUMP)  ; LAB_0055c56a
    MOV EAX,dword ptr [EDI + 0x48]      ; 0055c550
    MOV EBX,dword ptr [ESI + 0x48]      ; 0055c553
    SUB EAX,EBX                         ; 0055c556
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c558 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c850],EBX      ; 0055c55e | g_INT_0061c850
    MOV dword ptr [0x0061c858],EDX      ; 0055c564 | g_INT_0061c858
    MOV EAX,dword ptr [EDI + 0x10]      ; 0055c56a
        ;   Label: LAB_0055c56a
    MOV EBX,dword ptr [ESI + 0x10]      ; 0055c56d
    SHR EAX,0x1                         ; 0055c570
    SHR EBX,0x1                         ; 0055c572
    SUB EAX,EBX                         ; 0055c574
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c576 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0055c57c
    AND EDX,0xffff                      ; 0055c582
    MOV dword ptr [0x0061c800],EBX      ; 0055c588 | g_VertexRedStart
    MOV dword ptr [0x0061c820],EDX      ; 0055c58e | g_VertexRedDelta
    MOV EAX,dword ptr [EDI + 0x38]      ; 0055c594
    MOV EBX,dword ptr [ESI + 0x38]      ; 0055c597
    SHR EAX,0x1                         ; 0055c59a
    SHR EBX,0x1                         ; 0055c59c
    SUB EAX,EBX                         ; 0055c59e
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c5a0 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0055c5a6
    AND EDX,0xffff                      ; 0055c5ac
    MOV dword ptr [0x0061c808],EBX      ; 0055c5b2 | g_VertexGreenStart
    MOV dword ptr [0x0061c828],EDX      ; 0055c5b8 | g_VertexGreenDelta
    MOV EAX,dword ptr [EDI + 0x40]      ; 0055c5be
    MOV EBX,dword ptr [ESI + 0x40]      ; 0055c5c1
    SHR EAX,0x1                         ; 0055c5c4
    SHR EBX,0x1                         ; 0055c5c6
    SUB EAX,EBX                         ; 0055c5c8
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c5ca | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 0055c5d0
    AND EDX,0xffff                      ; 0055c5d6
    MOV dword ptr [0x0061c810],EBX      ; 0055c5dc | g_VertexBlueStart
    MOV dword ptr [0x0061c830],EDX      ; 0055c5e2 | g_VertexBlueDelta
    MOVQ MM5,qword ptr [0x0061c800]     ; 0055c5e8 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x0061c820]     ; 0055c5ef | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 0055c5f6
    PSLLQ MM6,0x10                      ; 0055c5fa
    POR MM5,qword ptr [0x0061c808]      ; 0055c5fe | g_VertexGreenStart
    POR MM6,qword ptr [0x0061c828]      ; 0055c605 | g_VertexGreenDelta
    PSLLQ MM5,0x10                      ; 0055c60c
    PSLLQ MM6,0x10                      ; 0055c610
    POR MM5,qword ptr [0x0061c810]      ; 0055c614 | g_VertexBlueStart
    POR MM6,qword ptr [0x0061c830]      ; 0055c61b | g_VertexBlueDelta
    MOVQ qword ptr [0x0061c860],MM6     ; 0055c622 | g_QWORD_0061c860
    MOV ECX,dword ptr [0x0061c350]      ; 0055c629 | g_StartTextureU
    MOV EDX,dword ptr [0x0061c354]      ; 0055c62f | g_StartTextureV
    MOV ESI,dword ptr [0x0061c35c]      ; 0055c635 | g_StartDepthW
    MOV EDI,0x0                         ; 0055c63b
    MOV EBP,dword ptr [0x0061c840]      ; 0055c640 | g_VertexAlphaStart
    PXOR MM7,MM7                        ; 0055c646
    TEST dword ptr [0x01c38b54],0x20    ; 0055c649 | g_RenderStateFlags
    JZ 0x0055c856                       ; 0055c653
        ;   XREF to: 0055c856 (CONDITIONAL_JUMP)  ; LAB_0055c856
    MOVD MM6,dword ptr [0x0061c850]     ; 0055c659 | g_INT_0061c850
    TEST dword ptr [0x01c38b54],0x40    ; 0055c660 | g_RenderStateFlags
        ;   Label: LAB_0055c660
    JZ 0x0055c67c                       ; 0055c66a
        ;   XREF to: 0055c67c (CONDITIONAL_JUMP)  ; LAB_0055c67c
    LEA EAX,[EDI]                       ; 0055c66c
    ADD EAX,dword ptr [0x0061c37c]      ; 0055c66e | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0055c674
    JL 0x0055c80b                       ; 0055c676
        ;   XREF to: 0055c80b (CONDITIONAL_JUMP)  ; LAB_0055c80b
    MOVD MM0,ECX                        ; 0055c67c
        ;   Label: LAB_0055c67c
    MOVD MM2,EDX                        ; 0055c67f
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055c682 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055c689 | g_TextureShift2
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055c690 | g_TextureMask1
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055c697 | g_TextureMask2
    PADDD MM0,MM2                       ; 0055c69e
    MOVD EBX,MM0                        ; 0055c6a1
    TEST dword ptr [0x01c37784],0xffffffff ; 0055c6a4 | g_INT_01c37784
    JNZ 0x0055c6e8                      ; 0055c6ae
        ;   XREF to: 0055c6e8 (CONDITIONAL_JUMP)  ; LAB_0055c6e8
    ADD EBX,dword ptr [0x01c37770]      ; 0055c6b0 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 0055c6b6
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055c6b9 | g_Hardware32BitPalette
    PUNPCKLBW MM0,MM7                   ; 0055c6c1
    TEST dword ptr [0x01c37774],0xffffffff ; 0055c6c4 | g_CurrentTextureOpacityData
    JZ 0x0055c6e1                       ; 0055c6ce
        ;   XREF to: 0055c6e1 (CONDITIONAL_JUMP)  ; LAB_0055c6e1
    SUB EBX,dword ptr [0x01c37770]      ; 0055c6d0 | g_CurrentTextureData
    ADD EBX,dword ptr [0x01c37774]      ; 0055c6d6 | g_CurrentTextureOpacityData
    MOVZX EAX,byte ptr [EBX]            ; 0055c6dc
    JMP 0x0055c6fc                      ; 0055c6df
        ;   XREF to: 0055c6fc (UNCONDITIONAL_JUMP)  ; LAB_0055c6fc
    MOV EAX,0xff                        ; 0055c6e1
        ;   Label: LAB_0055c6e1
    JMP 0x0055c6fc                      ; 0055c6e6
        ;   XREF to: 0055c6fc (UNCONDITIONAL_JUMP)  ; LAB_0055c6fc
    SHL EBX,0x2                         ; 0055c6e8
        ;   Label: LAB_0055c6e8
    ADD EBX,dword ptr [0x01c37770]      ; 0055c6eb | g_CurrentTextureData
    MOV EAX,dword ptr [EBX]             ; 0055c6f1
    MOVD MM0,EAX                        ; 0055c6f3
    PUNPCKLBW MM0,MM7                   ; 0055c6f6
    SHR EAX,0x18                        ; 0055c6f9
    TEST EAX,0xffffffff                 ; 0055c6fc
        ;   Label: LAB_0055c6fc
    JZ 0x0055c80b                       ; 0055c701
        ;   XREF to: 0055c80b (CONDITIONAL_JUMP)  ; LAB_0055c80b
    MOV EBX,EDI                         ; 0055c707
    ADD EBX,dword ptr [0x0061c378]      ; 0055c709 | g_CurrentScreenPtr
    MOVD MM4,dword ptr [EBX]            ; 0055c70f
    PUNPCKLBW MM4,MM7                   ; 0055c712
    PSLLW MM0,0x4                       ; 0055c715
    MOVQ MM7,MM5                        ; 0055c719
    PSRLW MM7,0x3                       ; 0055c71c
    PMULHW MM0,MM7                      ; 0055c720
    PXOR MM7,MM7                        ; 0055c723
    PACKUSWB MM0,MM7                    ; 0055c726
    PUNPCKLBW MM0,MM7                   ; 0055c729
    MOVD EBX,MM6                        ; 0055c72c
    IMUL EAX,EBX                        ; 0055c72f
    SHR EAX,0x10                        ; 0055c732
    TEST dword ptr [0x01c38b54],0x8     ; 0055c735 | g_RenderStateFlags
    JNZ 0x0055c743                      ; 0055c73f
        ;   XREF to: 0055c743 (CONDITIONAL_JUMP)  ; LAB_0055c743
    JMP 0x0055c771                      ; 0055c741
        ;   XREF to: 0055c771 (UNCONDITIONAL_JUMP)  ; LAB_0055c771
    MOV EBX,EBP                         ; 0055c743
        ;   Label: LAB_0055c743
    SAR EBX,0x8                         ; 0055c745
    MOVQ MM1,qword ptr [EBX*0x8 + 0x61d180] ; 0055c748 | g_QWORD_ARRAY_0061d180
    MOVQ MM2,MM1                        ; 0055c750
    PXOR MM2,qword ptr [0x0061d978]     ; 0055c753 | g_QWORD_ARRAY_0061d180[255]
    MOVD MM3,dword ptr [0x01c38b5c]     ; 0055c75a | g_SolidColorMode
    PUNPCKLBW MM3,MM7                   ; 0055c761
    PMULLW MM0,MM2                      ; 0055c764
    PMULLW MM3,MM1                      ; 0055c767
    PADDW MM0,MM3                       ; 0055c76a
    PSRLW MM0,0x8                       ; 0055c76d
    MOVQ MM2,qword ptr [EAX*0x8 + 0x61d180] ; 0055c771 | g_QWORD_ARRAY_0061d180
        ;   Label: LAB_0055c771
    MOVQ MM3,MM2                        ; 0055c779
    PXOR MM3,qword ptr [0x0061d978]     ; 0055c77c | g_QWORD_ARRAY_0061d180[255]
    CMP dword ptr [0x01c38b4c],0x1      ; 0055c783 | g_BlendMode
    JZ 0x0055c7b0                       ; 0055c78a
        ;   XREF to: 0055c7b0 (CONDITIONAL_JUMP)  ; LAB_0055c7b0
    CMP dword ptr [0x01c38b4c],0x2      ; 0055c78c | g_BlendMode
    JZ 0x0055c7c0                       ; 0055c793
        ;   XREF to: 0055c7c0 (CONDITIONAL_JUMP)  ; LAB_0055c7c0
    CMP dword ptr [0x01c38b4c],0x3      ; 0055c795 | g_BlendMode
    JZ 0x0055c7d0                       ; 0055c79c
        ;   XREF to: 0055c7d0 (CONDITIONAL_JUMP)  ; LAB_0055c7d0
    PMULLW MM0,MM2                      ; 0055c79e
    PMULLW MM4,MM3                      ; 0055c7a1
    JMP 0x0055c7e0                      ; 0055c7a4
        ;   XREF to: 0055c7e0 (UNCONDITIONAL_JUMP)  ; LAB_0055c7e0
    PMULLW MM0,MM2                      ; 0055c7b0
        ;   Label: LAB_0055c7b0
    PSLLW MM4,0x8                       ; 0055c7b3
    JMP 0x0055c7e0                      ; 0055c7b7
        ;   XREF to: 0055c7e0 (UNCONDITIONAL_JUMP)  ; LAB_0055c7e0
    PMULLW MM4,MM0                      ; 0055c7c0
        ;   Label: LAB_0055c7c0
    PMULLW MM0,MM2                      ; 0055c7c3
    JMP 0x0055c7e0                      ; 0055c7c6
        ;   XREF to: 0055c7e0 (UNCONDITIONAL_JUMP)  ; LAB_0055c7e0
    MOVQ MM1,MM0                        ; 0055c7d0
        ;   Label: LAB_0055c7d0
    PXOR MM1,qword ptr [0x0061d978]     ; 0055c7d3 | g_QWORD_ARRAY_0061d180[255]
    PMULLW MM4,MM1                      ; 0055c7da
    PMULLW MM0,MM2                      ; 0055c7dd
    PADDUSW MM0,MM4                     ; 0055c7e0
        ;   Label: LAB_0055c7e0
    PSRLW MM0,0x8                       ; 0055c7e3
    PACKUSWB MM0,MM7                    ; 0055c7e7
    MOV EBX,EDI                         ; 0055c7ea
    ADD EBX,dword ptr [0x0061c378]      ; 0055c7ec | g_CurrentScreenPtr
    MOVD dword ptr [EBX],MM0            ; 0055c7f2
    TEST dword ptr [0x01c38b54],0x80    ; 0055c7f5 | g_RenderStateFlags
    JZ 0x0055c80b                       ; 0055c7ff
        ;   XREF to: 0055c80b (CONDITIONAL_JUMP)  ; LAB_0055c80b
    MOV EAX,EDI                         ; 0055c801
    ADD EAX,dword ptr [0x0061c37c]      ; 0055c803 | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 0055c809
    ADD EDI,0x4                         ; 0055c80b
        ;   Label: LAB_0055c80b
    CMP EDI,dword ptr [0x0061c314]      ; 0055c80e | g_ScanlinePixelCount
    JNC 0x0055c850                      ; 0055c814
        ;   XREF to: 0055c850 (CONDITIONAL_JUMP)  ; LAB_0055c850
    ADD ECX,dword ptr [0x0061c780]      ; 0055c816 | g_HardwareDeltaTextureU
    PADDW MM5,qword ptr [0x0061c860]    ; 0055c81c | g_QWORD_0061c860
    ADD EDX,dword ptr [0x0061c784]      ; 0055c823 | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 0055c829
    ADD ESI,dword ptr [0x0061c788]      ; 0055c82c | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055c832 | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x0061c848]      ; 0055c839 | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 0055c83f
    PADDD MM6,qword ptr [0x0061c858]    ; 0055c842 | g_INT_0061c858
    JMP 0x0055c660                      ; 0055c849
        ;   XREF to: 0055c660 (UNCONDITIONAL_JUMP)  ; LAB_0055c660
    POP EBP                             ; 0055c850
        ;   Label: LAB_0055c850
    EMMS                                ; 0055c851
    POP EDI                             ; 0055c853
    POP ESI                             ; 0055c854
    RET                                 ; 0055c855
    MOVD MM1,dword ptr [0x01c38b5c]     ; 0055c856 | g_SolidColorMode
        ;   Label: LAB_0055c856
    PUNPCKLBW MM1,MM7                   ; 0055c85d
    TEST dword ptr [0x01c38b54],0x8     ; 0055c860 | g_RenderStateFlags
    JNZ 0x0055c87b                      ; 0055c86a
        ;   XREF to: 0055c87b (CONDITIONAL_JUMP)  ; LAB_0055c87b
    MOV EBP,0x0                         ; 0055c86c
    MOV dword ptr [0x0061c848],0x0      ; 0055c871 | g_VertexAlphaDelta
    TEST dword ptr [0x01c38b54],0x40    ; 0055c87b | g_RenderStateFlags
        ;   Label: LAB_0055c87b
    JZ 0x0055c897                       ; 0055c885
        ;   XREF to: 0055c897 (CONDITIONAL_JUMP)  ; LAB_0055c897
    LEA EAX,[EDI]                       ; 0055c887
    ADD EAX,dword ptr [0x0061c37c]      ; 0055c889 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0055c88f
    JL 0x0055c967                       ; 0055c891
        ;   XREF to: 0055c967 (CONDITIONAL_JUMP)  ; LAB_0055c967
    TEST dword ptr [0x01c38b54],0x1     ; 0055c897 | g_RenderStateFlags
        ;   Label: LAB_0055c897
    JZ 0x0055c9b6                       ; 0055c8a1
        ;   XREF to: 0055c9b6 (CONDITIONAL_JUMP)  ; LAB_0055c9b6
    MOVD MM0,ECX                        ; 0055c8a7
    MOVD MM2,EDX                        ; 0055c8aa
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055c8ad | g_TextureShift1
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055c8b4 | g_TextureShift2
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055c8bb | g_TextureMask1
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055c8c2 | g_TextureMask2
    PADDD MM0,MM2                       ; 0055c8c9
    MOVD EBX,MM0                        ; 0055c8cc
    TEST dword ptr [0x01c37784],0xffffffff ; 0055c8cf | g_INT_01c37784
    JNZ 0x0055c8ee                      ; 0055c8d9
        ;   XREF to: 0055c8ee (CONDITIONAL_JUMP)  ; LAB_0055c8ee
    ADD EBX,dword ptr [0x01c37770]      ; 0055c8db | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 0055c8e1
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055c8e4 | g_Hardware32BitPalette
    JMP 0x0055c8fa                      ; 0055c8ec
        ;   XREF to: 0055c8fa (UNCONDITIONAL_JUMP)  ; LAB_0055c8fa
    SHL EBX,0x2                         ; 0055c8ee
        ;   Label: LAB_0055c8ee
    ADD EBX,dword ptr [0x01c37770]      ; 0055c8f1 | g_CurrentTextureData
    MOVD MM0,dword ptr [EBX]            ; 0055c8f7
    MOVQ MM3,MM5                        ; 0055c8fa
        ;   Label: LAB_0055c8fa
    PUNPCKLBW MM0,MM7                   ; 0055c8fd
    PSRLW MM3,0x3                       ; 0055c900
    PSLLW MM0,0x4                       ; 0055c904
    PMULHW MM0,MM3                      ; 0055c908
    PACKUSWB MM0,MM7                    ; 0055c90b
    TEST dword ptr [0x01c38b54],0x8     ; 0055c90e | g_RenderStateFlags
    JZ 0x0055c947                       ; 0055c918
        ;   XREF to: 0055c947 (CONDITIONAL_JUMP)  ; LAB_0055c947
    MOV EAX,EBP                         ; 0055c91a
    SAR EAX,0x8                         ; 0055c91c
    MOVQ MM3,qword ptr [EAX*0x8 + 0x61d180] ; 0055c91f | g_QWORD_ARRAY_0061d180
    MOVQ MM4,MM1                        ; 0055c927
    MOVQ MM2,MM3                        ; 0055c92a
    PMULLW MM4,MM3                      ; 0055c92d
    PXOR MM2,qword ptr [0x0061d978]     ; 0055c930 | g_QWORD_ARRAY_0061d180[255]
    PUNPCKLBW MM0,MM7                   ; 0055c937
    PMULLW MM0,MM2                      ; 0055c93a
    PADDW MM0,MM4                       ; 0055c93d
    PSRLW MM0,0x8                       ; 0055c940
    PACKUSWB MM0,MM7                    ; 0055c944
    MOV EBX,dword ptr [0x0061c378]      ; 0055c947 | g_CurrentScreenPtr
        ;   Label: LAB_0055c947
    ADD EBX,EDI                         ; 0055c94d
    MOVD dword ptr [EBX],MM0            ; 0055c94f
    TEST dword ptr [0x01c38b54],0x80    ; 0055c952 | g_RenderStateFlags
    JZ 0x0055c967                       ; 0055c95c
        ;   XREF to: 0055c967 (CONDITIONAL_JUMP)  ; LAB_0055c967
    MOV EAX,[0x0061c37c]                ; 0055c95e | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 0055c963
    MOV dword ptr [EAX],ESI             ; 0055c965
    ADD EDI,0x4                         ; 0055c967
        ;   Label: LAB_0055c967
    CMP EDI,dword ptr [0x0061c314]      ; 0055c96a | g_ScanlinePixelCount
    JNC 0x0055c850                      ; 0055c970
        ;   XREF to: 0055c850 (CONDITIONAL_JUMP)  ; LAB_0055c850
    ADD ECX,dword ptr [0x0061c780]      ; 0055c976 | g_HardwareDeltaTextureU
    PADDW MM5,qword ptr [0x0061c860]    ; 0055c97c | g_QWORD_0061c860
    ADD EDX,dword ptr [0x0061c784]      ; 0055c983 | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 0055c989
    ADD ESI,dword ptr [0x0061c788]      ; 0055c98c | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055c992 | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x0061c848]      ; 0055c999 | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 0055c99f
    JMP 0x0055c87b                      ; 0055c9a2
        ;   XREF to: 0055c87b (UNCONDITIONAL_JUMP)  ; LAB_0055c87b
    TEST dword ptr [0x01c38b54],0x200   ; 0055c9b6 | g_RenderStateFlags
        ;   Label: LAB_0055c9b6
    JNZ 0x0055c9d0                      ; 0055c9c0
        ;   XREF to: 0055c9d0 (CONDITIONAL_JUMP)  ; LAB_0055c9d0
    MOVD MM0,dword ptr [0x01c35e60]     ; 0055c9c2 | g_INT_01c35e60
    JMP 0x0055c8fa                      ; 0055c9c9
        ;   XREF to: 0055c8fa (UNCONDITIONAL_JUMP)  ; LAB_0055c8fa
    MOVD MM0,dword ptr [0x0061c978]     ; 0055c9d0 | g_SpecialColor
        ;   Label: LAB_0055c9d0
    JMP 0x0055c8fa                      ; 0055c9d7
        ;   XREF to: 0055c8fa (UNCONDITIONAL_JUMP)  ; LAB_0055c8fa
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055c9e0
        ;   Label: LAB_0055c9e0
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055c9e3
    SUB EAX,EBX                         ; 0055c9e6
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c9e8 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x0061c35c],EBX      ; 0055c9ee | g_StartDepthW
    MOV dword ptr [0x0061c788],EDX      ; 0055c9f4 | g_HardwareDeltaDepthZ
    MOV EAX,[0x0061c35c]                ; 0055c9fa | g_StartDepthW
    MOV EBX,dword ptr [0x0061c788]      ; 0055c9ff | g_HardwareDeltaDepthZ
    MOV ESI,dword ptr [0x0061c37c]      ; 0055ca05 | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x0061c314]      ; 0055ca0b | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 0055ca11
        ;   Label: LAB_0055ca11
    ADD EAX,EBX                         ; 0055ca13
    ADD ESI,0x4                         ; 0055ca15
    SUB ECX,0x4                         ; 0055ca18
    JG 0x0055ca11                       ; 0055ca1b
        ;   XREF to: 0055ca11 (CONDITIONAL_JUMP)  ; LAB_0055ca11
    POP EBP                             ; 0055ca1d
    EMMS                                ; 0055ca1e
    POP EDI                             ; 0055ca20
    POP ESI                             ; 0055ca21
    RET                                 ; 0055ca22

