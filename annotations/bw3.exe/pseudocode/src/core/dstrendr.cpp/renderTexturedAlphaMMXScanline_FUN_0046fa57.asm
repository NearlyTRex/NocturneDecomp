; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_renderDestReadBlendPoly_FUN_0046c3b0 at 0046c428
;   engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90 at 0046c004
;
; Referenced Globals:
;   uint g_PerspectiveNextU = 0x0
;   uint g_PerspectiveNextV = 0x0
;   uint g_StartDepthZ = 0x0
;   int g_SoftwareDeltaTextureU = 0x0
;   int g_SoftwareDeltaTextureV = 0x0
;   int g_SoftwareDeltaDepthZ = 0x0
;   int g_PerspectiveScanlinePixelCount = 0x0
;   uint* g_PerspectiveScanlineZPtr = 00000000
;   qword g_TextureShift1 = 0x10
;   qword g_TextureShift2 = 0x8
;   qword g_TextureMask1 = 0xff
;   qword g_TextureMask2 = 0xff00
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ReciprocalLookupTable[1]
;   uchar* g_CurrentTextureData
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046fa57
        ;   Label: core_dstrendr.cpp_renderTexturedAlphaMMXScanline_FUN_0046fa57
    PUSH EDI                            ; 0046fa58
    PUSH EBP                            ; 0046fa59
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046fa5a
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046fa5d
    CMP EAX,ECX                         ; 0046fa60
    JBE 0x0046fa67                      ; 0046fa62
        ;   XREF to: 0046fa67 (CONDITIONAL_JUMP)  ; LAB_0046fa67
    XCHG EAX,ECX                        ; 0046fa64
    XCHG EDI,ESI                        ; 0046fa65
    SHR ECX,0x10                        ; 0046fa67
        ;   Label: LAB_0046fa67
    SHR EAX,0x10                        ; 0046fa6a
    MOV EBP,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046fa6d | g_ScreenBufferArray
    SUB ECX,EAX                         ; 0046fa74
    JLE 0x0046fb6c                      ; 0046fa76
        ;   XREF to: 0046fb6c (CONDITIONAL_JUMP)  ; LAB_0046fb6c
    SHL ECX,0x1                         ; 0046fa7c
    LEA EBP,[EBP + EAX*0x2]             ; 0046fa7e
    MOV dword ptr [0x005f4ac4],ECX      ; 0046fa82 | g_PerspectiveScanlinePixelCount
    MOV dword ptr [0x005f4ac8],EBP      ; 0046fa88 | g_PerspectiveScanlineZPtr
    MOV EAX,dword ptr [EDI + 0x18]      ; 0046fa8e
    MOV EBX,dword ptr [ESI + 0x18]      ; 0046fa91
    SUB EAX,EBX                         ; 0046fa94
    IMUL dword ptr [ECX*0x2 + 0x1c6b5d4] ; 0046fa96 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005f4a98],EBX      ; 0046fa9d | g_PerspectiveNextU
    MOV dword ptr [0x005f4ab4],EDX      ; 0046faa3 | g_SoftwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 0046faa9
    MOV EBX,dword ptr [ESI + 0x20]      ; 0046faac
    SUB EAX,EBX                         ; 0046faaf
    IMUL dword ptr [ECX*0x2 + 0x1c6b5d4] ; 0046fab1 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005f4a9c],EBX      ; 0046fab8 | g_PerspectiveNextV
    MOV dword ptr [0x005f4ab8],EDX      ; 0046fabe | g_SoftwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046fac4
    MOV EBX,dword ptr [ESI + 0x28]      ; 0046fac7
    SUB EAX,EBX                         ; 0046faca
    IMUL dword ptr [ECX*0x2 + 0x1c6b5d4] ; 0046facc | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x005f4aa4],EBX      ; 0046fad3 | g_StartDepthZ
    MOV dword ptr [0x005f4abc],EDX      ; 0046fad9 | g_SoftwareDeltaDepthZ
    MOV ECX,dword ptr [0x005f4a98]      ; 0046fadf | g_PerspectiveNextU
    MOV EDX,dword ptr [0x005f4a9c]      ; 0046fae5 | g_PerspectiveNextV
    MOV EDI,0x0                         ; 0046faeb
    MOV ESI,dword ptr [0x005f4aa4]      ; 0046faf0 | g_StartDepthZ
    MOV EBP,dword ptr [0x005f4ac8]      ; 0046faf6 | g_PerspectiveScanlineZPtr
        ;   Label: LAB_0046faf6
    ADD EBP,EDI                         ; 0046fafc
    MOVZX EAX,word ptr [EBP]            ; 0046fafe
    CMP ESI,EAX                         ; 0046fb02
    JNC 0x0046fb4d                      ; 0046fb04
        ;   XREF to: 0046fb4d (CONDITIONAL_JUMP)  ; LAB_0046fb4d
    MOVD MM0,ECX                        ; 0046fb06
    MOVD MM2,EDX                        ; 0046fb09
    PSRLQ MM0,qword ptr [0x00604df8]    ; 0046fb0c | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00604e18]    ; 0046fb13 | g_TextureShift2
    PAND MM0,qword ptr [0x00604e38]     ; 0046fb1a | g_TextureMask1
    PAND MM2,qword ptr [0x00604e58]     ; 0046fb21 | g_TextureMask2
    PADDD MM0,MM2                       ; 0046fb28
    MOVD EBX,MM0                        ; 0046fb2b
    MOV EAX,[0x01c6ced4]                ; 0046fb2e | g_CurrentTextureOpacityData
    TEST EAX,0xffffffff                 ; 0046fb33
    JNZ 0x0046fb3f                      ; 0046fb38
        ;   XREF to: 0046fb3f (CONDITIONAL_JUMP)  ; LAB_0046fb3f
    MOV EAX,[0x01c6ced0]                ; 0046fb3a | g_CurrentTextureData
    ADD EBX,EAX                         ; 0046fb3f
        ;   Label: LAB_0046fb3f
    MOVZX EAX,byte ptr [EBX]            ; 0046fb41
    CMP EAX,0x0                         ; 0046fb44
    JZ 0x0046fb4d                       ; 0046fb47
        ;   XREF to: 0046fb4d (CONDITIONAL_JUMP)  ; LAB_0046fb4d
    MOV word ptr [EBP],SI               ; 0046fb49
    ADD EDI,0x2                         ; 0046fb4d
        ;   Label: LAB_0046fb4d
    CMP EDI,dword ptr [0x005f4ac4]      ; 0046fb50 | g_PerspectiveScanlinePixelCount
    JA 0x0046fb6c                       ; 0046fb56
        ;   XREF to: 0046fb6c (CONDITIONAL_JUMP)  ; LAB_0046fb6c
    ADD ECX,dword ptr [0x005f4ab4]      ; 0046fb58 | g_SoftwareDeltaTextureU
    ADD EDX,dword ptr [0x005f4ab8]      ; 0046fb5e | g_SoftwareDeltaTextureV
    ADD ESI,dword ptr [0x005f4abc]      ; 0046fb64 | g_SoftwareDeltaDepthZ
    JMP 0x0046faf6                      ; 0046fb6a
        ;   XREF to: 0046faf6 (UNCONDITIONAL_JUMP)  ; LAB_0046faf6
    POP EBP                             ; 0046fb6c
        ;   Label: LAB_0046fb6c
    EMMS                                ; 0046fb6d
    POP EDI                             ; 0046fb6f
    POP ESI                             ; 0046fb70
    RET                                 ; 0046fb71

