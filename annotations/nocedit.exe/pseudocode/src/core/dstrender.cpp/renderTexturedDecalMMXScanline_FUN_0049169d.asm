; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrender_cpp_renderTexturedDecalMMXScanline_FUN_0049169d(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderSpecialDepth_FUN_0048b420 at 0048b52d
;
; Referenced Globals:
;   uint g_PerspectiveNextU = 0x0
;   uint g_PerspectiveNextV = 0x0
;   uint g_StartDepthZ = 0x0
;   int g_SoftwareDeltaTextureU = 0x0
;   int g_SoftwareDeltaTextureV = 0x0
;   int g_SoftwareDeltaDepthZ = 0x0
;   void* g_PerspectiveScanlineColorPtr = 00000000
;   int g_PerspectiveScanlinePixelCount = 0x0
;   uint* g_PerspectiveScanlineZPtr = 00000000
;   _MMX_INTEGER g_TextureShift1
;   _MMX_INTEGER g_TextureShift2
;   _MMX_INTEGER g_TextureMask1
;   _MMX_INTEGER g_TextureMask2
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049169d
        ;   Label: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_0049169d
    PUSH EDI                            ; 0049169e
    PUSH EBP                            ; 0049169f
    MOV EAX,dword ptr [ESI + 0x8]       ; 004916a0
    MOV ECX,dword ptr [EDI + 0x8]       ; 004916a3
    CMP EAX,ECX                         ; 004916a6
    JBE 0x004916ad                      ; 004916a8
        ;   XREF to: 004916ad (CONDITIONAL_JUMP)  ; LAB_004916ad
    XCHG EAX,ECX                        ; 004916aa
    XCHG EDI,ESI                        ; 004916ab
    SHR ECX,0x10                        ; 004916ad
        ;   Label: LAB_004916ad
    SHR EAX,0x10                        ; 004916b0
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 004916b3 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 004916ba | g_ScreenBufferArray
    SUB ECX,EAX                         ; 004916c1
    JLE 0x004917b6                      ; 004916c3
        ;   XREF to: 004917b6 (CONDITIONAL_JUMP)  ; LAB_004917b6
    LEA EBX,[EBX + EAX*0x4]             ; 004916c9
    SHL ECX,0x2                         ; 004916cc
    LEA EBP,[EBP + EAX*0x4]             ; 004916cf
    MOV dword ptr [0x006723d4],ECX      ; 004916d3 | g_PerspectiveScanlinePixelCount
    MOV dword ptr [0x006723d0],EBX      ; 004916d9 | g_PerspectiveScanlineColorPtr
    MOV dword ptr [0x006723d8],EBP      ; 004916df | g_PerspectiveScanlineZPtr
    MOV EAX,dword ptr [EDI + 0x18]      ; 004916e5
    MOV EBX,dword ptr [ESI + 0x18]      ; 004916e8
    SUB EAX,EBX                         ; 004916eb
    IMUL dword ptr [ECX + 0x2d02584]    ; 004916ed | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006723a8],EBX      ; 004916f3 | g_PerspectiveNextU
    MOV dword ptr [0x006723c4],EDX      ; 004916f9 | g_SoftwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 004916ff
    MOV EBX,dword ptr [ESI + 0x20]      ; 00491702
    SUB EAX,EBX                         ; 00491705
    IMUL dword ptr [ECX + 0x2d02584]    ; 00491707 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006723ac],EBX      ; 0049170d | g_PerspectiveNextV
    MOV dword ptr [0x006723c8],EDX      ; 00491713 | g_SoftwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 00491719
    MOV EBX,dword ptr [ESI + 0x28]      ; 0049171c
    SUB EAX,EBX                         ; 0049171f
    IMUL dword ptr [ECX + 0x2d02584]    ; 00491721 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006723b4],EBX      ; 00491727 | g_StartDepthZ
    MOV dword ptr [0x006723cc],EDX      ; 0049172d | g_SoftwareDeltaDepthZ
    MOV ECX,dword ptr [0x006723a8]      ; 00491733 | g_PerspectiveNextU
    MOV EDX,dword ptr [0x006723ac]      ; 00491739 | g_PerspectiveNextV
    MOV EDI,0x0                         ; 0049173f
    MOV ESI,dword ptr [0x006723b4]      ; 00491744 | g_StartDepthZ
    MOV EAX,[0x006723d8]                ; 0049174a | g_PerspectiveScanlineZPtr
        ;   Label: LAB_0049174a
    ADD EAX,EDI                         ; 0049174f
    CMP ESI,dword ptr [EAX]             ; 00491751
    JL 0x00491797                       ; 00491753
        ;   XREF to: 00491797 (CONDITIONAL_JUMP)  ; LAB_00491797
    MOVD MM0,ECX                        ; 00491755
    MOVD MM2,EDX                        ; 00491758
    PSRLQ MM0,qword ptr [0x006826e0]    ; 0049175b | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 00491762 | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 00491769 | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 00491770 | g_TextureMask2
    PADDD MM0,MM2                       ; 00491777
    MOVD EBX,MM0                        ; 0049177a
    ADD EBX,dword ptr [0x02d03e80]      ; 0049177d | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 00491783
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 00491786 | g_Hardware32BitPalette
    MOV EBX,dword ptr [0x006723d0]      ; 0049178d | g_PerspectiveScanlineColorPtr
    ADD EBX,EDI                         ; 00491793
    MOV dword ptr [EBX],EAX             ; 00491795
    ADD EDI,0x4                         ; 00491797
        ;   Label: LAB_00491797
    CMP EDI,dword ptr [0x006723d4]      ; 0049179a | g_PerspectiveScanlinePixelCount
    JA 0x004917b6                       ; 004917a0
        ;   XREF to: 004917b6 (CONDITIONAL_JUMP)  ; LAB_004917b6
    ADD ECX,dword ptr [0x006723c4]      ; 004917a2 | g_SoftwareDeltaTextureU
    ADD EDX,dword ptr [0x006723c8]      ; 004917a8 | g_SoftwareDeltaTextureV
    ADD ESI,dword ptr [0x006723cc]      ; 004917ae | g_SoftwareDeltaDepthZ
    JMP 0x0049174a                      ; 004917b4
        ;   XREF to: 0049174a (UNCONDITIONAL_JUMP)  ; LAB_0049174a
    POP EBP                             ; 004917b6
        ;   Label: LAB_004917b6
    EMMS                                ; 004917b7
    POP EDI                             ; 004917b9
    POP ESI                             ; 004917ba
    RET                                 ; 004917bb

