; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[47]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a2e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280 at 00406341
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 00404778
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406def
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406caf
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405554
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405674
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0 at 00406b57
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 0040581a
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004065f0 at 0040667f
;   ... and 37 more
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
;   qword g_TextureShift1 = 0x10
;   qword g_TextureShift2 = 0x8
;   qword g_TextureMask1 = 0xff
;   qword g_TextureMask2 = 0xff00
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057fd39
        ;   Label: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39
    PUSH EDI                            ; 0057fd3a
    PUSH EBP                            ; 0057fd3b
    MOV EAX,dword ptr [ESI + 0x8]       ; 0057fd3c
    MOV ECX,dword ptr [EDI + 0x8]       ; 0057fd3f
    CMP EAX,ECX                         ; 0057fd42
    JBE 0x0057fd49                      ; 0057fd44
        ;   XREF to: 0057fd49 (CONDITIONAL_JUMP)  ; LAB_0057fd49
    XCHG EAX,ECX                        ; 0057fd46
    XCHG EDI,ESI                        ; 0057fd47
    SHR ECX,0x10                        ; 0057fd49
        ;   Label: LAB_0057fd49
    SHR EAX,0x10                        ; 0057fd4c
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0057fd4f | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057fd56 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 0057fd5d
    JLE 0x0057ff27                      ; 0057fd5f
        ;   XREF to: 0057ff27 (CONDITIONAL_JUMP)  ; LAB_0057ff27
    LEA EBX,[EBX + EAX*0x2]             ; 0057fd65
    SHL ECX,0x2                         ; 0057fd68
    LEA EBP,[EBP + EAX*0x4]             ; 0057fd6b
    MOV dword ptr [0x00623964],ECX      ; 0057fd6f | g_ScanlinePixelCount
    MOV dword ptr [0x006239c8],EBX      ; 0057fd75 | g_CurrentScreenPtr
    MOV dword ptr [0x006239cc],EBP      ; 0057fd7b | g_CurrentZBufferPtr
    CMP dword ptr [0x01c51d14],0x80     ; 0057fd81 | g_RenderStateFlags
    JZ 0x0057ff32                       ; 0057fd8b
        ;   XREF to: 0057ff32 (CONDITIONAL_JUMP)  ; LAB_0057ff32
    CMP dword ptr [0x01c51d18],0x5      ; 0057fd91 | g_VertexPreprocessMode
    JNZ 0x0057fe0a                      ; 0057fd98
        ;   XREF to: 0057fe0a (CONDITIONAL_JUMP)  ; LAB_0057fe0a
    MOV EAX,dword ptr [ESI + 0x18]      ; 0057fd9a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fd9d
    CDQ                                 ; 0057fda0
    SHLD EDX,EAX,0x18                   ; 0057fda1
    SHL EAX,0x18                        ; 0057fda5
    IDIV EBX                            ; 0057fda8
    MOV [0x006239a0],EAX                ; 0057fdaa | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057fdaf
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057fdb2
    CDQ                                 ; 0057fdb5
    SHLD EDX,EAX,0x18                   ; 0057fdb6
    SHL EAX,0x18                        ; 0057fdba
    IDIV EBX                            ; 0057fdbd
    SUB EAX,dword ptr [0x006239a0]      ; 0057fdbf | g_StartTextureU
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fdc5
    MOV dword ptr [0x00623dd0],EDX      ; 0057fdcb | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 0057fdd1
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fdd4
    CDQ                                 ; 0057fdd7
    SHLD EDX,EAX,0x18                   ; 0057fdd8
    SHL EAX,0x18                        ; 0057fddc
    IDIV EBX                            ; 0057fddf
    MOV [0x006239a4],EAX                ; 0057fde1 | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057fde6
    MOV EBX,dword ptr [EDI + 0x28]      ; 0057fde9
    CDQ                                 ; 0057fdec
    SHLD EDX,EAX,0x18                   ; 0057fded
    SHL EAX,0x18                        ; 0057fdf1
    IDIV EBX                            ; 0057fdf4
    SUB EAX,dword ptr [0x006239a4]      ; 0057fdf6 | g_StartTextureV
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fdfc
    MOV dword ptr [0x00623dd4],EDX      ; 0057fe02 | g_HardwareDeltaTextureV
    JMP 0x0057fe3e                      ; 0057fe08
        ;   XREF to: 0057fe3e (UNCONDITIONAL_JUMP)  ; LAB_0057fe3e
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057fe0a
        ;   Label: LAB_0057fe0a
    MOV EBX,dword ptr [ESI + 0x18]      ; 0057fe0d
    SUB EAX,EBX                         ; 0057fe10
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fe12
    MOV dword ptr [0x006239a0],EBX      ; 0057fe18 | g_StartTextureU
    MOV dword ptr [0x00623dd0],EDX      ; 0057fe1e | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057fe24
    MOV EBX,dword ptr [ESI + 0x20]      ; 0057fe27
    SUB EAX,EBX                         ; 0057fe2a
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fe2c
    MOV dword ptr [0x006239a4],EBX      ; 0057fe32 | g_StartTextureV
    MOV dword ptr [0x00623dd4],EDX      ; 0057fe38 | g_HardwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057fe3e
        ;   Label: LAB_0057fe3e
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057fe41
    SUB EAX,EBX                         ; 0057fe44
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057fe46
    MOV dword ptr [0x006239ac],EBX      ; 0057fe4c | g_StartDepthW
    MOV dword ptr [0x00623dd8],EDX      ; 0057fe52 | g_HardwareDeltaDepthZ
    MOV EBP,dword ptr [0x006239a0]      ; 0057fe58 | g_StartTextureU
    MOV EDX,dword ptr [0x006239a4]      ; 0057fe5e | g_StartTextureV
    MOV ESI,dword ptr [0x006239ac]      ; 0057fe64 | g_StartDepthW
    MOV EDI,0x0                         ; 0057fe6a
    CMP dword ptr [0x01c50934],0x0      ; 0057fe6f | g_CurrentTextureOpacityData
    JNZ 0x0057ff27                      ; 0057fe76
        ;   XREF to: 0057ff27 (CONDITIONAL_JUMP)  ; LAB_0057ff27
    TEST dword ptr [0x01c51d14],0x2     ; 0057fe7c | g_RenderStateFlags
    JNZ 0x0057ff27                      ; 0057fe86
        ;   XREF to: 0057ff27 (CONDITIONAL_JUMP)  ; LAB_0057ff27
    TEST dword ptr [0x01c51d14],0x40    ; 0057fe8c | g_RenderStateFlags
        ;   Label: LAB_0057fe8c
    JZ 0x0057fea4                       ; 0057fe96
        ;   XREF to: 0057fea4 (CONDITIONAL_JUMP)  ; LAB_0057fea4
    LEA EAX,[EDI]                       ; 0057fe98
    ADD EAX,dword ptr [0x006239cc]      ; 0057fe9a | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 0057fea0
    JL 0x0057ff05                       ; 0057fea2
        ;   XREF to: 0057ff05 (CONDITIONAL_JUMP)  ; LAB_0057ff05
    TEST dword ptr [0x01c51d14],0x1     ; 0057fea4 | g_RenderStateFlags
        ;   Label: LAB_0057fea4
    JZ 0x0057ff2b                       ; 0057feae
        ;   XREF to: 0057ff2b (CONDITIONAL_JUMP)  ; LAB_0057ff2b
    MOV CL,byte ptr [0x00623eb8]        ; 0057feb0 | g_TextureShift1
    MOV EAX,EBP                         ; 0057feb6
    SHR EAX,CL                          ; 0057feb8
    AND EAX,dword ptr [0x00623ef8]      ; 0057feba | g_TextureMask1
    MOV CL,byte ptr [0x00623ed8]        ; 0057fec0 | g_TextureShift2
    MOV EBX,EDX                         ; 0057fec6
    SHR EBX,CL                          ; 0057fec8
    AND EBX,dword ptr [0x00623f18]      ; 0057feca | g_TextureMask2
    ADD EAX,dword ptr [0x01c50930]      ; 0057fed0 | g_CurrentTextureData
    ADD EAX,EBX                         ; 0057fed6
    MOVZX EAX,byte ptr [EAX]            ; 0057fed8
    MOV AX,word ptr [EAX*0x2 + 0x1c4e7d4] ; 0057fedb
    MOV EBX,EDI                         ; 0057fee3
        ;   Label: LAB_0057fee3
    SHR EBX,0x1                         ; 0057fee5
    ADD EBX,dword ptr [0x006239c8]      ; 0057fee7 | g_CurrentScreenPtr
    MOV word ptr [EBX],AX               ; 0057feed
    TEST dword ptr [0x01c51d14],0x80    ; 0057fef0 | g_RenderStateFlags
    JZ 0x0057ff05                       ; 0057fefa
        ;   XREF to: 0057ff05 (CONDITIONAL_JUMP)  ; LAB_0057ff05
    MOV EAX,[0x006239cc]                ; 0057fefc | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 0057ff01
    MOV dword ptr [EAX],ESI             ; 0057ff03
    ADD EDI,0x4                         ; 0057ff05
        ;   Label: LAB_0057ff05
    CMP EDI,dword ptr [0x00623964]      ; 0057ff08 | g_ScanlinePixelCount
    JNC 0x0057ff27                      ; 0057ff0e
        ;   XREF to: 0057ff27 (CONDITIONAL_JUMP)  ; LAB_0057ff27
    ADD EBP,dword ptr [0x00623dd0]      ; 0057ff10 | g_HardwareDeltaTextureU
    ADD EDX,dword ptr [0x00623dd4]      ; 0057ff16 | g_HardwareDeltaTextureV
    ADD ESI,dword ptr [0x00623dd8]      ; 0057ff1c | g_HardwareDeltaDepthZ
    JMP 0x0057fe8c                      ; 0057ff22
        ;   XREF to: 0057fe8c (UNCONDITIONAL_JUMP)  ; LAB_0057fe8c
    POP EBP                             ; 0057ff27
        ;   Label: LAB_0057ff27
    POP EDI                             ; 0057ff28
    POP ESI                             ; 0057ff29
    RET                                 ; 0057ff2a
    MOV EAX,[0x01c4f020]                ; 0057ff2b | g_INT_01c4f020
        ;   Label: LAB_0057ff2b
    JMP 0x0057fee3                      ; 0057ff30
        ;   XREF to: 0057fee3 (UNCONDITIONAL_JUMP)  ; LAB_0057fee3
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057ff32
        ;   Label: LAB_0057ff32
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057ff35
    SUB EAX,EBX                         ; 0057ff38
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057ff3a
    MOV dword ptr [0x006239ac],EBX      ; 0057ff40 | g_StartDepthW
    MOV dword ptr [0x00623dd8],EDX      ; 0057ff46 | g_HardwareDeltaDepthZ
    MOV EAX,[0x006239ac]                ; 0057ff4c | g_StartDepthW
    MOV EBX,dword ptr [0x00623dd8]      ; 0057ff51 | g_HardwareDeltaDepthZ
    MOV ESI,dword ptr [0x006239cc]      ; 0057ff57 | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x00623964]      ; 0057ff5d | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 0057ff63
        ;   Label: LAB_0057ff63
    ADD EAX,EBX                         ; 0057ff65
    ADD ESI,0x4                         ; 0057ff67
    SUB ECX,0x4                         ; 0057ff6a
    JG 0x0057ff63                       ; 0057ff6d
        ;   XREF to: 0057ff63 (CONDITIONAL_JUMP)  ; LAB_0057ff63
    POP EBP                             ; 0057ff6f
    POP EDI                             ; 0057ff70
    POP ESI                             ; 0057ff71
    RET                                 ; 0057ff72

