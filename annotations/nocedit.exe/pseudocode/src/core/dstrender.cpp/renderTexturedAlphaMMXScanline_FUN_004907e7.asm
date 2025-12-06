; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
;
;
; XREF[5]:
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityDirect_FUN_0048b650 at 0048b6a8
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityWithIndices_FUN_0048b730 at 0048b7a8
;   engine_drender.cpp_CDemonRenderer_renderPerspectiveLit_FUN_0048b550 at 0048b5c4
;   engine_drender.cpp_CDemonRenderer_renderUltraPremiumDirect_FUN_0048b890 at 0048b8e8
;   engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970 at 0048b9e8
;
; Referenced Globals:
;   uint g_PerspectiveNextU = 0x0
;   uint g_PerspectiveNextV = 0x0
;   uint g_StartDepthZ = 0x0
;   int g_DeltaTextureU = 0x0
;   int g_DeltaTextureV = 0x0
;   int g_DeltaDepthZ = 0x0
;   int g_PerspectiveScanlinePixelCount = 0x0
;   uint* g_PerspectiveScanlineZPtr = 00000000
;   ulonglong g_TextureShift1 = 0x10
;   ulonglong g_TextureShift2 = 0x8
;   ulonglong g_TextureMask1 = 0xff
;   ulonglong g_TextureMask2 = 0xff00
;   void*[1024] g_ScreenBufferArray
;   undefined4 DAT_02d02584
;   void* g_CurrentTextureData
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004907e7
        ;   Label: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
    PUSH EDI                            ; 004907e8
    PUSH EBP                            ; 004907e9
    MOV EAX,dword ptr [ESI + 0x8]       ; 004907ea
    MOV ECX,dword ptr [EDI + 0x8]       ; 004907ed
    CMP EAX,ECX                         ; 004907f0
    JBE 0x004907f7                      ; 004907f2 | LAB_004907f7
        ;   XREF to: 004907f7 (CONDITIONAL_JUMP)
    XCHG EAX,ECX                        ; 004907f4
    XCHG EDI,ESI                        ; 004907f5
    SHR ECX,0x10                        ; 004907f7
        ;   Label: LAB_004907f7
    SHR EAX,0x10                        ; 004907fa
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 004907fd | void *[1024] g_ScreenBufferArray
    SUB ECX,EAX                         ; 00490804
    JLE 0x004908fc                      ; 00490806 | LAB_004908fc
        ;   XREF to: 004908fc (CONDITIONAL_JUMP)
    SHL ECX,0x1                         ; 0049080c
    LEA EBP,[EBP + EAX*0x2]             ; 0049080e
    MOV dword ptr [0x006723d4],ECX      ; 00490812 | int g_PerspectiveScanlinePixelCount
    MOV dword ptr [0x006723d8],EBP      ; 00490818 | uint * g_PerspectiveScanlineZPtr
    MOV EAX,dword ptr [EDI + 0x18]      ; 0049081e
    MOV EBX,dword ptr [ESI + 0x18]      ; 00490821
    SUB EAX,EBX                         ; 00490824
    IMUL dword ptr [ECX*0x2 + 0x2d02584] ; 00490826 | DAT_02d02584
    MOV dword ptr [0x006723a8],EBX      ; 0049082d | uint g_PerspectiveNextU
    MOV dword ptr [0x006723c4],EDX      ; 00490833 | int g_DeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 00490839
    MOV EBX,dword ptr [ESI + 0x20]      ; 0049083c
    SUB EAX,EBX                         ; 0049083f
    IMUL dword ptr [ECX*0x2 + 0x2d02584] ; 00490841 | DAT_02d02584
    MOV dword ptr [0x006723ac],EBX      ; 00490848 | uint g_PerspectiveNextV
    MOV dword ptr [0x006723c8],EDX      ; 0049084e | int g_DeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 00490854
    MOV EBX,dword ptr [ESI + 0x28]      ; 00490857
    SUB EAX,EBX                         ; 0049085a
    IMUL dword ptr [ECX*0x2 + 0x2d02584] ; 0049085c | DAT_02d02584
    MOV dword ptr [0x006723b4],EBX      ; 00490863 | uint g_StartDepthZ
    MOV dword ptr [0x006723cc],EDX      ; 00490869 | int g_DeltaDepthZ
    MOV ECX,dword ptr [0x006723a8]      ; 0049086f | uint g_PerspectiveNextU
    MOV EDX,dword ptr [0x006723ac]      ; 00490875 | uint g_PerspectiveNextV
    MOV EDI,0x0                         ; 0049087b
    MOV ESI,dword ptr [0x006723b4]      ; 00490880 | uint g_StartDepthZ
    MOV EBP,dword ptr [0x006723d8]      ; 00490886 | uint * g_PerspectiveScanlineZPtr
        ;   Label: LAB_00490886
    ADD EBP,EDI                         ; 0049088c
    MOVZX EAX,word ptr [EBP]            ; 0049088e
    CMP ESI,EAX                         ; 00490892
    JNC 0x004908dd                      ; 00490894 | LAB_004908dd
        ;   XREF to: 004908dd (CONDITIONAL_JUMP)
    MOVD MM0,ECX                        ; 00490896
    MOVD MM2,EDX                        ; 00490899
    PSRLQ MM0,qword ptr [0x006826e0]    ; 0049089c | ulonglong g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 004908a3 | ulonglong g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 004908aa | ulonglong g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 004908b1 | ulonglong g_TextureMask2
    PADDD MM0,MM2                       ; 004908b8
    MOVD EBX,MM0                        ; 004908bb
    MOV EAX,[0x02d03e84]                ; 004908be | void * g_CurrentTextureOpacityData
    TEST EAX,0xffffffff                 ; 004908c3
    JNZ 0x004908cf                      ; 004908c8 | LAB_004908cf
        ;   XREF to: 004908cf (CONDITIONAL_JUMP)
    MOV EAX,[0x02d03e80]                ; 004908ca | void * g_CurrentTextureData
    ADD EBX,EAX                         ; 004908cf
        ;   Label: LAB_004908cf
    MOVZX EAX,byte ptr [EBX]            ; 004908d1
    CMP EAX,0x0                         ; 004908d4
    JZ 0x004908dd                       ; 004908d7 | LAB_004908dd
        ;   XREF to: 004908dd (CONDITIONAL_JUMP)
    MOV word ptr [EBP],SI               ; 004908d9
    ADD EDI,0x2                         ; 004908dd
        ;   Label: LAB_004908dd
    CMP EDI,dword ptr [0x006723d4]      ; 004908e0 | int g_PerspectiveScanlinePixelCount
    JA 0x004908fc                       ; 004908e6 | LAB_004908fc
        ;   XREF to: 004908fc (CONDITIONAL_JUMP)
    ADD ECX,dword ptr [0x006723c4]      ; 004908e8 | int g_DeltaTextureU
    ADD EDX,dword ptr [0x006723c8]      ; 004908ee | int g_DeltaTextureV
    ADD ESI,dword ptr [0x006723cc]      ; 004908f4 | int g_DeltaDepthZ
    JMP 0x00490886                      ; 004908fa | LAB_00490886
        ;   XREF to: 00490886 (UNCONDITIONAL_JUMP)
    POP EBP                             ; 004908fc
        ;   Label: LAB_004908fc
    EMMS                                ; 004908fd
    POP EDI                             ; 004908ff
    POP ESI                             ; 00490900
    RET                                 ; 00490901

