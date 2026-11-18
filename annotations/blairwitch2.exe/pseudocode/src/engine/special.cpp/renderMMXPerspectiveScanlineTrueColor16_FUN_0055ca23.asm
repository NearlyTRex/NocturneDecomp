; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[2]:
;   engine_mini3d.cpp_fillPolygon_FUN_004f7a50 at 004f7d4a
;   engine_mini3d.cpp_rasterizeTriangle_FUN_004f7280 at 004f7a02
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
;   ... and 31 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055ca23
        ;   Label: engine_special.cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23
    PUSH EDI                            ; 0055ca24
    PUSH EBP                            ; 0055ca25
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055ca26
    MOV ECX,dword ptr [EDI + 0x8]       ; 0055ca29
    CMP EAX,ECX                         ; 0055ca2c
    JBE 0x0055ca33                      ; 0055ca2e
        ;   XREF to: 0055ca33 (CONDITIONAL_JUMP)  ; LAB_0055ca33
    XCHG EAX,ECX                        ; 0055ca30
    XCHG EDI,ESI                        ; 0055ca31
    SHR ECX,0x10                        ; 0055ca33
        ;   Label: LAB_0055ca33
    SHR EAX,0x10                        ; 0055ca36
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055ca39 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055ca40 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 0055ca47
    JLE 0x0055cea0                      ; 0055ca49
        ;   XREF to: 0055cea0 (CONDITIONAL_JUMP)  ; LAB_0055cea0
    LEA EBX,[EBX + EAX*0x2]             ; 0055ca4f
    SHL ECX,0x2                         ; 0055ca52
    LEA EBP,[EBP + EAX*0x4]             ; 0055ca55
    MOV dword ptr [0x0061c314],ECX      ; 0055ca59 | g_ScanlinePixelCount
    MOV dword ptr [0x0061c378],EBX      ; 0055ca5f | g_CurrentScreenPtr
    MOV dword ptr [0x0061c37c],EBP      ; 0055ca65 | g_CurrentZBufferPtr
    CMP dword ptr [0x01c38b54],0x80     ; 0055ca6b | g_RenderStateFlags
    JZ 0x0055d070                       ; 0055ca75
        ;   XREF to: 0055d070 (CONDITIONAL_JUMP)  ; LAB_0055d070
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055ca7b
    MOV EBX,dword ptr [ESI + 0x18]      ; 0055ca7e
    SUB EAX,EBX                         ; 0055ca81
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055ca83
    MOV dword ptr [0x0061c350],EBX      ; 0055ca89 | g_StartTextureU
    MOV dword ptr [0x0061c780],EDX      ; 0055ca8f | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055ca95
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055ca98
    SUB EAX,EBX                         ; 0055ca9b
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055ca9d
    MOV dword ptr [0x0061c354],EBX      ; 0055caa3 | g_StartTextureV
    MOV dword ptr [0x0061c784],EDX      ; 0055caa9 | g_HardwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055caaf
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055cab2
    SUB EAX,EBX                         ; 0055cab5
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055cab7
    MOV dword ptr [0x0061c35c],EBX      ; 0055cabd | g_StartDepthW
    MOV dword ptr [0x0061c788],EDX      ; 0055cac3 | g_HardwareDeltaDepthZ
    TEST dword ptr [0x01c38b54],0x8     ; 0055cac9 | g_RenderStateFlags
    JZ 0x0055cb00                       ; 0055cad3
        ;   XREF to: 0055cb00 (CONDITIONAL_JUMP)  ; LAB_0055cb00
    MOV EAX,dword ptr [EDI + 0x30]      ; 0055cad5
    MOV EBX,dword ptr [ESI + 0x30]      ; 0055cad8
    SUB EAX,EBX                         ; 0055cadb
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055cadd
    MOV dword ptr [0x0061c840],EBX      ; 0055cae3 | g_VertexAlphaStart
    MOV dword ptr [0x0061c848],EDX      ; 0055cae9 | g_VertexAlphaDelta
    JMP 0x0055cb14                      ; 0055caef
        ;   XREF to: 0055cb14 (UNCONDITIONAL_JUMP)  ; LAB_0055cb14
    MOV dword ptr [0x0061c840],0x0      ; 0055cb00 | g_VertexAlphaStart
        ;   Label: LAB_0055cb00
    MOV dword ptr [0x0061c848],0x0      ; 0055cb0a | g_VertexAlphaDelta
    TEST dword ptr [0x01c38b54],0x20    ; 0055cb14 | g_RenderStateFlags
        ;   Label: LAB_0055cb14
    JZ 0x0055cb3a                       ; 0055cb1e
        ;   XREF to: 0055cb3a (CONDITIONAL_JUMP)  ; LAB_0055cb3a
    MOV EAX,dword ptr [EDI + 0x48]      ; 0055cb20
    MOV EBX,dword ptr [ESI + 0x48]      ; 0055cb23
    SUB EAX,EBX                         ; 0055cb26
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055cb28
    MOV dword ptr [0x0061c850],EBX      ; 0055cb2e | g_INT_0061c850
    MOV dword ptr [0x0061c858],EDX      ; 0055cb34 | g_INT_0061c858
    MOV EAX,dword ptr [EDI + 0x10]      ; 0055cb3a
        ;   Label: LAB_0055cb3a
    MOV EBX,dword ptr [ESI + 0x10]      ; 0055cb3d
    SHR EAX,0x1                         ; 0055cb40
    SHR EBX,0x1                         ; 0055cb42
    SUB EAX,EBX                         ; 0055cb44
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055cb46
    AND EBX,0xffff                      ; 0055cb4c
    AND EDX,0xffff                      ; 0055cb52
    MOV dword ptr [0x0061c800],EBX      ; 0055cb58 | g_VertexRedStart
    MOV dword ptr [0x0061c820],EDX      ; 0055cb5e | g_VertexRedDelta
    MOV EAX,dword ptr [EDI + 0x38]      ; 0055cb64
    MOV EBX,dword ptr [ESI + 0x38]      ; 0055cb67
    SHR EAX,0x1                         ; 0055cb6a
    SHR EBX,0x1                         ; 0055cb6c
    SUB EAX,EBX                         ; 0055cb6e
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055cb70
    AND EBX,0xffff                      ; 0055cb76
    AND EDX,0xffff                      ; 0055cb7c
    MOV dword ptr [0x0061c808],EBX      ; 0055cb82 | g_VertexGreenStart
    MOV dword ptr [0x0061c828],EDX      ; 0055cb88 | g_VertexGreenDelta
    MOV EAX,dword ptr [EDI + 0x40]      ; 0055cb8e
    MOV EBX,dword ptr [ESI + 0x40]      ; 0055cb91
    SHR EAX,0x1                         ; 0055cb94
    SHR EBX,0x1                         ; 0055cb96
    SUB EAX,EBX                         ; 0055cb98
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055cb9a
    AND EBX,0xffff                      ; 0055cba0
    AND EDX,0xffff                      ; 0055cba6
    MOV dword ptr [0x0061c810],EBX      ; 0055cbac | g_VertexBlueStart
    MOV dword ptr [0x0061c830],EDX      ; 0055cbb2 | g_VertexBlueDelta
    MOVQ MM5,qword ptr [0x0061c800]     ; 0055cbb8 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x0061c820]     ; 0055cbbf | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 0055cbc6
    PSLLQ MM6,0x10                      ; 0055cbca
    POR MM5,qword ptr [0x0061c808]      ; 0055cbce | g_VertexGreenStart
    POR MM6,qword ptr [0x0061c828]      ; 0055cbd5 | g_VertexGreenDelta
    PSLLQ MM5,0x10                      ; 0055cbdc
    PSLLQ MM6,0x10                      ; 0055cbe0
    POR MM5,qword ptr [0x0061c810]      ; 0055cbe4 | g_VertexBlueStart
    POR MM6,qword ptr [0x0061c830]      ; 0055cbeb | g_VertexBlueDelta
    MOVQ qword ptr [0x0061c860],MM6     ; 0055cbf2 | g_QWORD_0061c860
    MOV ECX,dword ptr [0x0061c350]      ; 0055cbf9 | g_StartTextureU
    MOV EDX,dword ptr [0x0061c354]      ; 0055cbff | g_StartTextureV
    MOV ESI,dword ptr [0x0061c35c]      ; 0055cc05 | g_StartDepthW
    MOV EDI,0x0                         ; 0055cc0b
    MOV EBP,dword ptr [0x0061c840]      ; 0055cc10 | g_VertexAlphaStart
    PXOR MM7,MM7                        ; 0055cc16
    TEST dword ptr [0x01c38b54],0x20    ; 0055cc19 | g_RenderStateFlags
    JZ 0x0055cea6                       ; 0055cc23
        ;   XREF to: 0055cea6 (CONDITIONAL_JUMP)  ; LAB_0055cea6
    MOVD MM6,dword ptr [0x0061c850]     ; 0055cc29 | g_INT_0061c850
    TEST dword ptr [0x01c38b54],0x40    ; 0055cc30 | g_RenderStateFlags
        ;   Label: LAB_0055cc30
    JZ 0x0055cc4c                       ; 0055cc3a
        ;   XREF to: 0055cc4c (CONDITIONAL_JUMP)  ; LAB_0055cc4c
    LEA EAX,[EDI]                       ; 0055cc3c
    ADD EAX,dword ptr [0x0061c37c]      ; 0055cc3e | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0055cc44
    JL 0x0055ce56                       ; 0055cc46
        ;   XREF to: 0055ce56 (CONDITIONAL_JUMP)  ; LAB_0055ce56
    MOVD MM0,ECX                        ; 0055cc4c
        ;   Label: LAB_0055cc4c
    MOVD MM2,EDX                        ; 0055cc4f
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055cc52 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055cc59 | g_TextureShift2
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055cc60 | g_TextureMask1
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055cc67 | g_TextureMask2
    PADDD MM0,MM2                       ; 0055cc6e
    MOVD EBX,MM0                        ; 0055cc71
    TEST dword ptr [0x01c37784],0xffffffff ; 0055cc74 | g_INT_01c37784
    JNZ 0x0055ccb8                      ; 0055cc7e
        ;   XREF to: 0055ccb8 (CONDITIONAL_JUMP)  ; LAB_0055ccb8
    ADD EBX,dword ptr [0x01c37770]      ; 0055cc80 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 0055cc86
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055cc89
    PUNPCKLBW MM0,MM7                   ; 0055cc91
    TEST dword ptr [0x01c37774],0xffffffff ; 0055cc94 | g_CurrentTextureOpacityData
    JZ 0x0055ccb1                       ; 0055cc9e
        ;   XREF to: 0055ccb1 (CONDITIONAL_JUMP)  ; LAB_0055ccb1
    SUB EBX,dword ptr [0x01c37770]      ; 0055cca0 | g_CurrentTextureData
    ADD EBX,dword ptr [0x01c37774]      ; 0055cca6 | g_CurrentTextureOpacityData
    MOVZX EAX,byte ptr [EBX]            ; 0055ccac
    JMP 0x0055cccc                      ; 0055ccaf
        ;   XREF to: 0055cccc (UNCONDITIONAL_JUMP)  ; LAB_0055cccc
    MOV EAX,0xff                        ; 0055ccb1
        ;   Label: LAB_0055ccb1
    JMP 0x0055cccc                      ; 0055ccb6
        ;   XREF to: 0055cccc (UNCONDITIONAL_JUMP)  ; LAB_0055cccc
    SHL EBX,0x2                         ; 0055ccb8
        ;   Label: LAB_0055ccb8
    ADD EBX,dword ptr [0x01c37770]      ; 0055ccbb | g_CurrentTextureData
    MOV EAX,dword ptr [EBX]             ; 0055ccc1
    MOVD MM0,EAX                        ; 0055ccc3
    PUNPCKLBW MM0,MM7                   ; 0055ccc6
    SHR EAX,0x18                        ; 0055ccc9
    TEST EAX,0xffffffff                 ; 0055cccc
        ;   Label: LAB_0055cccc
    JZ 0x0055ce56                       ; 0055ccd1
        ;   XREF to: 0055ce56 (CONDITIONAL_JUMP)  ; LAB_0055ce56
    MOV EBX,EDI                         ; 0055ccd7
    SHR EBX,0x1                         ; 0055ccd9
    ADD EBX,dword ptr [0x0061c378]      ; 0055ccdb | g_CurrentScreenPtr
    MOVZX EBX,word ptr [EBX]            ; 0055cce1
    MOVD MM4,EBX                        ; 0055cce4
    PAND MM4,qword ptr [0x0061c8e0]     ; 0055cce7 | g_BlueMask16
    PSLLQ MM4,qword ptr [0x0061c970]    ; 0055ccee | g_BlueBitShift
    MOVD MM2,EBX                        ; 0055ccf5
    PAND MM2,qword ptr [0x0061c8d8]     ; 0055ccf8 | g_GreenMask16
    PSLLQ MM2,qword ptr [0x0061c950]    ; 0055ccff | g_GreenBlueDitherShift
    POR MM4,MM2                         ; 0055cd06
    MOVD MM2,EBX                        ; 0055cd09
    PAND MM2,qword ptr [0x0061c8d0]     ; 0055cd0c | g_RedMask16
    PSLLQ MM2,qword ptr [0x0061c930]    ; 0055cd13 | g_TotalDitherShift
    POR MM4,MM2                         ; 0055cd1a
    PUNPCKLBW MM4,MM7                   ; 0055cd1d
    PSLLW MM0,0x4                       ; 0055cd20
    MOVQ MM7,MM5                        ; 0055cd24
    PSRLW MM7,0x3                       ; 0055cd27
    PMULHW MM0,MM7                      ; 0055cd2b
    PXOR MM7,MM7                        ; 0055cd2e
    PACKUSWB MM0,MM7                    ; 0055cd31
    PUNPCKLBW MM0,MM7                   ; 0055cd34
    MOVD EBX,MM6                        ; 0055cd37
    IMUL EAX,EBX                        ; 0055cd3a
    SHR EAX,0x10                        ; 0055cd3d
    TEST dword ptr [0x01c38b54],0x8     ; 0055cd40 | g_RenderStateFlags
    JNZ 0x0055cd4e                      ; 0055cd4a
        ;   XREF to: 0055cd4e (CONDITIONAL_JUMP)  ; LAB_0055cd4e
    JMP 0x0055cd7c                      ; 0055cd4c
        ;   XREF to: 0055cd7c (UNCONDITIONAL_JUMP)  ; LAB_0055cd7c
    MOV EBX,EBP                         ; 0055cd4e
        ;   Label: LAB_0055cd4e
    SAR EBX,0x8                         ; 0055cd50
    MOVQ MM1,qword ptr [EBX*0x8 + 0x61d180] ; 0055cd53 | g_QWORD_ARRAY_0061d180
    MOVQ MM2,MM1                        ; 0055cd5b
    PXOR MM2,qword ptr [0x0061d978]     ; 0055cd5e | g_QWORD_ARRAY_0061d180[255]
    MOVD MM3,dword ptr [0x01c38b5c]     ; 0055cd65 | g_SolidColorMode
    PUNPCKLBW MM3,MM7                   ; 0055cd6c
    PMULLW MM0,MM2                      ; 0055cd6f
    PMULLW MM3,MM1                      ; 0055cd72
    PADDW MM0,MM3                       ; 0055cd75
    PSRLW MM0,0x8                       ; 0055cd78
    MOVQ MM2,qword ptr [EAX*0x8 + 0x61d180] ; 0055cd7c | g_QWORD_ARRAY_0061d180
        ;   Label: LAB_0055cd7c
    MOVQ MM3,MM2                        ; 0055cd84
    PXOR MM3,qword ptr [0x0061d978]     ; 0055cd87 | g_QWORD_ARRAY_0061d180[255]
    CMP dword ptr [0x01c38b4c],0x1      ; 0055cd8e | g_BlendMode
    JZ 0x0055cdc0                       ; 0055cd95
        ;   XREF to: 0055cdc0 (CONDITIONAL_JUMP)  ; LAB_0055cdc0
    CMP dword ptr [0x01c38b4c],0x2      ; 0055cd97 | g_BlendMode
    JZ 0x0055cdd0                       ; 0055cd9e
        ;   XREF to: 0055cdd0 (CONDITIONAL_JUMP)  ; LAB_0055cdd0
    CMP dword ptr [0x01c38b4c],0x3      ; 0055cda0 | g_BlendMode
    JZ 0x0055cde0                       ; 0055cda7
        ;   XREF to: 0055cde0 (CONDITIONAL_JUMP)  ; LAB_0055cde0
    PMULLW MM0,MM2                      ; 0055cda9
    PMULLW MM4,MM3                      ; 0055cdac
    JMP 0x0055cdf0                      ; 0055cdaf
        ;   XREF to: 0055cdf0 (UNCONDITIONAL_JUMP)  ; LAB_0055cdf0
    PMULLW MM0,MM2                      ; 0055cdc0
        ;   Label: LAB_0055cdc0
    PSLLW MM4,0x8                       ; 0055cdc3
    JMP 0x0055cdf0                      ; 0055cdc7
        ;   XREF to: 0055cdf0 (UNCONDITIONAL_JUMP)  ; LAB_0055cdf0
    PMULLW MM4,MM0                      ; 0055cdd0
        ;   Label: LAB_0055cdd0
    PMULLW MM0,MM2                      ; 0055cdd3
    JMP 0x0055cdf0                      ; 0055cdd6
        ;   XREF to: 0055cdf0 (UNCONDITIONAL_JUMP)  ; LAB_0055cdf0
    MOVQ MM1,MM0                        ; 0055cde0
        ;   Label: LAB_0055cde0
    PXOR MM1,qword ptr [0x0061d978]     ; 0055cde3 | g_QWORD_ARRAY_0061d180[255]
    PMULLW MM4,MM1                      ; 0055cdea
    PMULLW MM0,MM2                      ; 0055cded
    PADDUSW MM0,MM4                     ; 0055cdf0
        ;   Label: LAB_0055cdf0
    PSRLW MM0,0x8                       ; 0055cdf3
    PACKUSWB MM0,MM7                    ; 0055cdf7
    MOV EBX,EDI                         ; 0055cdfa
    SHR EBX,0x1                         ; 0055cdfc
    ADD EBX,dword ptr [0x0061c378]      ; 0055cdfe | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 0055ce04
    MOVQ MM4,MM0                        ; 0055ce07
    PAND MM0,qword ptr [0x0061c928]     ; 0055ce0a | g_BlueMask32
    PAND MM2,qword ptr [0x0061c908]     ; 0055ce11 | g_GreenMask32
    PAND MM4,qword ptr [0x0061c8e8]     ; 0055ce18 | g_RedMask32
    PSRLQ MM0,qword ptr [0x0061c970]    ; 0055ce1f | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0055ce26 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x0061c930]    ; 0055ce2d | g_TotalDitherShift
    POR MM0,MM2                         ; 0055ce34
    POR MM0,MM4                         ; 0055ce37
    MOVD EAX,MM0                        ; 0055ce3a
    MOV word ptr [EBX],AX               ; 0055ce3d
    TEST dword ptr [0x01c38b54],0x80    ; 0055ce40 | g_RenderStateFlags
    JZ 0x0055ce56                       ; 0055ce4a
        ;   XREF to: 0055ce56 (CONDITIONAL_JUMP)  ; LAB_0055ce56
    MOV EAX,EDI                         ; 0055ce4c
    ADD EAX,dword ptr [0x0061c37c]      ; 0055ce4e | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 0055ce54
    ADD EDI,0x4                         ; 0055ce56
        ;   Label: LAB_0055ce56
    CMP EDI,dword ptr [0x0061c314]      ; 0055ce59 | g_ScanlinePixelCount
    JNC 0x0055cea0                      ; 0055ce5f
        ;   XREF to: 0055cea0 (CONDITIONAL_JUMP)  ; LAB_0055cea0
    ADD ECX,dword ptr [0x0061c780]      ; 0055ce61 | g_HardwareDeltaTextureU
    PADDW MM5,qword ptr [0x0061c860]    ; 0055ce67 | g_QWORD_0061c860
    ADD EDX,dword ptr [0x0061c784]      ; 0055ce6e | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 0055ce74
    ADD ESI,dword ptr [0x0061c788]      ; 0055ce77 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055ce7d | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x0061c848]      ; 0055ce84 | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 0055ce8a
    PADDD MM6,qword ptr [0x0061c858]    ; 0055ce8d | g_INT_0061c858
    JMP 0x0055cc30                      ; 0055ce94
        ;   XREF to: 0055cc30 (UNCONDITIONAL_JUMP)  ; LAB_0055cc30
    POP EBP                             ; 0055cea0
        ;   Label: LAB_0055cea0
    EMMS                                ; 0055cea1
    POP EDI                             ; 0055cea3
    POP ESI                             ; 0055cea4
    RET                                 ; 0055cea5
    MOVD MM1,dword ptr [0x01c38b5c]     ; 0055cea6 | g_SolidColorMode
        ;   Label: LAB_0055cea6
    PUNPCKLBW MM1,MM7                   ; 0055cead
    TEST dword ptr [0x01c38b54],0x8     ; 0055ceb0 | g_RenderStateFlags
    JNZ 0x0055cecb                      ; 0055ceba
        ;   XREF to: 0055cecb (CONDITIONAL_JUMP)  ; LAB_0055cecb
    MOV EBP,0x0                         ; 0055cebc
    MOV dword ptr [0x0061c848],0x0      ; 0055cec1 | g_VertexAlphaDelta
    TEST dword ptr [0x01c38b54],0x40    ; 0055cecb | g_RenderStateFlags
        ;   Label: LAB_0055cecb
    JZ 0x0055cee7                       ; 0055ced5
        ;   XREF to: 0055cee7 (CONDITIONAL_JUMP)  ; LAB_0055cee7
    LEA EAX,[EDI]                       ; 0055ced7
    ADD EAX,dword ptr [0x0061c37c]      ; 0055ced9 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0055cedf
    JL 0x0055cff2                       ; 0055cee1
        ;   XREF to: 0055cff2 (CONDITIONAL_JUMP)  ; LAB_0055cff2
    TEST dword ptr [0x01c38b54],0x1     ; 0055cee7 | g_RenderStateFlags
        ;   Label: LAB_0055cee7
    JZ 0x0055d046                       ; 0055cef1
        ;   XREF to: 0055d046 (CONDITIONAL_JUMP)  ; LAB_0055d046
    MOVD MM0,ECX                        ; 0055cef7
    MOVD MM2,EDX                        ; 0055cefa
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055cefd | g_TextureShift1
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055cf04 | g_TextureShift2
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055cf0b | g_TextureMask1
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055cf12 | g_TextureMask2
    PADDD MM0,MM2                       ; 0055cf19
    MOVD EBX,MM0                        ; 0055cf1c
    TEST dword ptr [0x01c37784],0xffffffff ; 0055cf1f | g_INT_01c37784
    JNZ 0x0055cf3e                      ; 0055cf29
        ;   XREF to: 0055cf3e (CONDITIONAL_JUMP)  ; LAB_0055cf3e
    ADD EBX,dword ptr [0x01c37770]      ; 0055cf2b | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 0055cf31
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055cf34
    JMP 0x0055cf4a                      ; 0055cf3c
        ;   XREF to: 0055cf4a (UNCONDITIONAL_JUMP)  ; LAB_0055cf4a
    SHL EBX,0x2                         ; 0055cf3e
        ;   Label: LAB_0055cf3e
    ADD EBX,dword ptr [0x01c37770]      ; 0055cf41 | g_CurrentTextureData
    MOVD MM0,dword ptr [EBX]            ; 0055cf47
    MOVQ MM3,MM5                        ; 0055cf4a
        ;   Label: LAB_0055cf4a
    PUNPCKLBW MM0,MM7                   ; 0055cf4d
    PSRLW MM3,0x3                       ; 0055cf50
    PSLLW MM0,0x4                       ; 0055cf54
    PMULHW MM0,MM3                      ; 0055cf58
    PACKUSWB MM0,MM7                    ; 0055cf5b
    TEST dword ptr [0x01c38b54],0x8     ; 0055cf5e | g_RenderStateFlags
    JZ 0x0055cf97                       ; 0055cf68
        ;   XREF to: 0055cf97 (CONDITIONAL_JUMP)  ; LAB_0055cf97
    MOV EAX,EBP                         ; 0055cf6a
    SAR EAX,0x8                         ; 0055cf6c
    MOVQ MM3,qword ptr [EAX*0x8 + 0x61d180] ; 0055cf6f | g_QWORD_ARRAY_0061d180
    MOVQ MM4,MM1                        ; 0055cf77
    MOVQ MM2,MM3                        ; 0055cf7a
    PMULLW MM4,MM3                      ; 0055cf7d
    PXOR MM2,qword ptr [0x0061d978]     ; 0055cf80 | g_QWORD_ARRAY_0061d180[255]
    PUNPCKLBW MM0,MM7                   ; 0055cf87
    PMULLW MM0,MM2                      ; 0055cf8a
    PADDW MM0,MM4                       ; 0055cf8d
    PSRLW MM0,0x8                       ; 0055cf90
    PACKUSWB MM0,MM7                    ; 0055cf94
    MOV EBX,EDI                         ; 0055cf97
        ;   Label: LAB_0055cf97
    SHR EBX,0x1                         ; 0055cf99
    ADD EBX,dword ptr [0x0061c378]      ; 0055cf9b | g_CurrentScreenPtr
    MOVQ MM2,MM0                        ; 0055cfa1
    MOVQ MM4,MM0                        ; 0055cfa4
    PAND MM0,qword ptr [0x0061c928]     ; 0055cfa7 | g_BlueMask32
    PAND MM2,qword ptr [0x0061c908]     ; 0055cfae | g_GreenMask32
    PAND MM4,qword ptr [0x0061c8e8]     ; 0055cfb5 | g_RedMask32
    PSRLQ MM0,qword ptr [0x0061c970]    ; 0055cfbc | g_BlueBitShift
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0055cfc3 | g_GreenBlueDitherShift
    PSRLQ MM4,qword ptr [0x0061c930]    ; 0055cfca | g_TotalDitherShift
    POR MM0,MM2                         ; 0055cfd1
    POR MM0,MM4                         ; 0055cfd4
    MOVD EAX,MM0                        ; 0055cfd7
    MOV word ptr [EBX],AX               ; 0055cfda
    TEST dword ptr [0x01c38b54],0x80    ; 0055cfdd | g_RenderStateFlags
    JZ 0x0055cff2                       ; 0055cfe7
        ;   XREF to: 0055cff2 (CONDITIONAL_JUMP)  ; LAB_0055cff2
    MOV EAX,[0x0061c37c]                ; 0055cfe9 | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 0055cfee
    MOV dword ptr [EAX],ESI             ; 0055cff0
    ADD EDI,0x4                         ; 0055cff2
        ;   Label: LAB_0055cff2
    CMP EDI,dword ptr [0x0061c314]      ; 0055cff5 | g_ScanlinePixelCount
    JNC 0x0055cea0                      ; 0055cffb
        ;   XREF to: 0055cea0 (CONDITIONAL_JUMP)  ; LAB_0055cea0
    ADD ECX,dword ptr [0x0061c780]      ; 0055d001 | g_HardwareDeltaTextureU
    PADDW MM5,qword ptr [0x0061c860]    ; 0055d007 | g_QWORD_0061c860
    ADD EDX,dword ptr [0x0061c784]      ; 0055d00e | g_HardwareDeltaTextureV
    MOVQ MM0,MM5                        ; 0055d014
    ADD ESI,dword ptr [0x0061c788]      ; 0055d017 | g_HardwareDeltaDepthZ
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055d01d | g_BufferFillZeroQword
    ADD EBP,dword ptr [0x0061c848]      ; 0055d024 | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 0055d02a
    JMP 0x0055cecb                      ; 0055d02d
        ;   XREF to: 0055cecb (UNCONDITIONAL_JUMP)  ; LAB_0055cecb
    TEST dword ptr [0x01c38b54],0x200   ; 0055d046 | g_RenderStateFlags
        ;   Label: LAB_0055d046
    JNZ 0x0055d060                      ; 0055d050
        ;   XREF to: 0055d060 (CONDITIONAL_JUMP)  ; LAB_0055d060
    MOVD MM0,dword ptr [0x01c35e60]     ; 0055d052 | g_INT_01c35e60
    JMP 0x0055cf4a                      ; 0055d059
        ;   XREF to: 0055cf4a (UNCONDITIONAL_JUMP)  ; LAB_0055cf4a
    MOVD MM0,dword ptr [0x0061c978]     ; 0055d060 | g_SpecialColor
        ;   Label: LAB_0055d060
    JMP 0x0055cf4a                      ; 0055d067
        ;   XREF to: 0055cf4a (UNCONDITIONAL_JUMP)  ; LAB_0055cf4a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055d070
        ;   Label: LAB_0055d070
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055d073
    SUB EAX,EBX                         ; 0055d076
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055d078
    MOV dword ptr [0x0061c35c],EBX      ; 0055d07e | g_StartDepthW
    MOV dword ptr [0x0061c788],EDX      ; 0055d084 | g_HardwareDeltaDepthZ
    MOV EAX,[0x0061c35c]                ; 0055d08a | g_StartDepthW
    MOV EBX,dword ptr [0x0061c788]      ; 0055d08f | g_HardwareDeltaDepthZ
    MOV ESI,dword ptr [0x0061c37c]      ; 0055d095 | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x0061c314]      ; 0055d09b | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 0055d0a1
        ;   Label: LAB_0055d0a1
    ADD EAX,EBX                         ; 0055d0a3
    ADD ESI,0x4                         ; 0055d0a5
    SUB ECX,0x4                         ; 0055d0a8
    JG 0x0055d0a1                       ; 0055d0ab
        ;   XREF to: 0055d0a1 (CONDITIONAL_JUMP)  ; LAB_0055d0a1
    POP EBP                             ; 0055d0ad
    EMMS                                ; 0055d0ae
    POP EDI                             ; 0055d0b0
    POP ESI                             ; 0055d0b1
    RET                                 ; 0055d0b2

