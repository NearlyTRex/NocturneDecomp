; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dstrender_cpp_renderPerspectiveTexturedScanline_FUN_004940e9 (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)
;
; Parameters:
; SEdgeData *      Stack[0x4]:4   left_edge
; SEdgeData *      Stack[0x8]:4   right_edge
; int              Stack[0xc]:4   scanline_y
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0048ad90 at 0048adf2
;
; Referenced Globals:
;   uint g_PerspectiveNextU = 0x0
;   uint g_PerspectiveNextV = 0x0
;   int g_DeltaTextureU = 0x0
;   int g_DeltaTextureV = 0x0
;   void* g_PerspectiveScanlineColorPtr = 00000000
;   int g_PerspectiveScanlinePixelCount = 0x0
;   ulonglong g_TextureShift1 = 0x10
;   ulonglong g_TextureShift2 = 0x8
;   ulonglong g_TextureMask1 = 0xff
;   ulonglong g_TextureMask2 = 0xff00
;   void*[1200] g_ScreenBufferArray
;   undefined4 DAT_02d02584
;   void* g_CurrentTextureData
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004940e9
        ;   Label: core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9
    PUSH EDI                            ; 004940ea
    PUSH EBP                            ; 004940eb
    MOV EAX,dword ptr [ESI + 0x8]       ; 004940ec
    MOV ECX,dword ptr [EDI + 0x8]       ; 004940ef
    CMP EAX,ECX                         ; 004940f2
    JBE 0x004940f9                      ; 004940f4
        ;   XREF to: 004940f9 (CONDITIONAL_JUMP)  ; LAB_004940f9
    XCHG EAX,ECX                        ; 004940f6
    XCHG EDI,ESI                        ; 004940f7
    SHR ECX,0x10                        ; 004940f9
        ;   Label: LAB_004940f9
    SHR EAX,0x10                        ; 004940fc
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 004940ff | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00494106
    JLE 0x004941d0                      ; 00494108
        ;   XREF to: 004941d0 (CONDITIONAL_JUMP)  ; LAB_004941d0
    LEA EBX,[EBX + EAX*0x4]             ; 0049410e
    SHL ECX,0x2                         ; 00494111
    MOV dword ptr [0x006723d4],ECX      ; 00494114 | g_PerspectiveScanlinePixelCount
    MOV dword ptr [0x006723d0],EBX      ; 0049411a | g_PerspectiveScanlineColorPtr
    MOV EAX,dword ptr [EDI + 0x18]      ; 00494120
    MOV EBX,dword ptr [ESI + 0x18]      ; 00494123
    SUB EAX,EBX                         ; 00494126
    IMUL dword ptr [ECX + 0x2d02584]    ; 00494128 | DAT_02d02584
    MOV dword ptr [0x006723a8],EBX      ; 0049412e | g_PerspectiveNextU
    MOV dword ptr [0x006723c4],EDX      ; 00494134 | g_DeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 0049413a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0049413d
    SUB EAX,EBX                         ; 00494140
    IMUL dword ptr [ECX + 0x2d02584]    ; 00494142 | DAT_02d02584
    MOV dword ptr [0x006723ac],EBX      ; 00494148 | g_PerspectiveNextV
    MOV dword ptr [0x006723c8],EDX      ; 0049414e | g_DeltaTextureV
    MOV ECX,dword ptr [0x006723a8]      ; 00494154 | g_PerspectiveNextU
    MOV EDX,dword ptr [0x006723ac]      ; 0049415a | g_PerspectiveNextV
    MOV EDI,0x0                         ; 00494160
    MOVD MM0,ECX                        ; 00494165
        ;   Label: LAB_00494165
    MOVD MM2,EDX                        ; 00494168
    PSRLQ MM0,qword ptr [0x006826e0]    ; 0049416b | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 00494172 | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 00494179 | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 00494180 | g_TextureMask2
    PADDD MM0,MM2                       ; 00494187
    MOVD EBX,MM0                        ; 0049418a
    SHL EBX,0x2                         ; 0049418d
    ADD EBX,dword ptr [0x02d03e80]      ; 00494190 | g_CurrentTextureData
    MOVD MM0,dword ptr [EBX]            ; 00494196
    MOV EBX,dword ptr [0x006723d0]      ; 00494199 | g_PerspectiveScanlineColorPtr
    ADD EBX,EDI                         ; 0049419f
    MOVD dword ptr [EBX],MM0            ; 004941a1
    ADD EDI,0x4                         ; 004941a4
    CMP EDI,dword ptr [0x006723d4]      ; 004941a7 | g_PerspectiveScanlinePixelCount
    JNC 0x004941d0                      ; 004941ad
        ;   XREF to: 004941d0 (CONDITIONAL_JUMP)  ; LAB_004941d0
    ADD ECX,dword ptr [0x006723c4]      ; 004941af | g_DeltaTextureU
    PADDW MM5,MM6                       ; 004941b5
    ADD EDX,dword ptr [0x006723c8]      ; 004941b8 | g_DeltaTextureV
    MOVQ MM0,MM5                        ; 004941be
    JMP 0x00494165                      ; 004941c1
        ;   XREF to: 00494165 (UNCONDITIONAL_JUMP)  ; LAB_00494165
    POP EBP                             ; 004941d0
        ;   Label: LAB_004941d0
    EMMS                                ; 004941d1
    POP EDI                             ; 004941d3
    POP ESI                             ; 004941d4
    RET                                 ; 004941d5

