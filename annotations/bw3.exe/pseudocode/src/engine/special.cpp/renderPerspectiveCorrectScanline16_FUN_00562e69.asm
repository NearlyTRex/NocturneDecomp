; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[47]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404a2e
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0 at 00406361
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 00404778
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406e0f
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406ccf
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 00405554
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 00405674
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406af0 at 00406b77
;   engine_3d.c_renderPolygonDepthWritePass_FUN_004057b0 at 0040581a
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00406610 at 0040669f
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

    PUSH ESI                            ; 00562e69
        ;   Label: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
    PUSH EDI                            ; 00562e6a
    PUSH EBP                            ; 00562e6b
    MOV EAX,dword ptr [ESI + 0x8]       ; 00562e6c
    MOV ECX,dword ptr [EDI + 0x8]       ; 00562e6f
    CMP EAX,ECX                         ; 00562e72
    JBE 0x00562e79                      ; 00562e74
        ;   XREF to: 00562e79 (CONDITIONAL_JUMP)  ; LAB_00562e79
    XCHG EAX,ECX                        ; 00562e76
    XCHG EDI,ESI                        ; 00562e77
    SHR ECX,0x10                        ; 00562e79
        ;   Label: LAB_00562e79
    SHR EAX,0x10                        ; 00562e7c
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 00562e7f | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x1c5faec] ; 00562e86 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 00562e8d
    JLE 0x00563057                      ; 00562e8f
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    LEA EBX,[EBX + EAX*0x2]             ; 00562e95
    SHL ECX,0x2                         ; 00562e98
    LEA EBP,[EBP + EAX*0x4]             ; 00562e9b
    MOV dword ptr [0x006048a4],ECX      ; 00562e9f | g_ScanlinePixelCount
    MOV dword ptr [0x00604908],EBX      ; 00562ea5 | g_CurrentScreenPtr
    MOV dword ptr [0x0060490c],EBP      ; 00562eab | g_CurrentZBufferPtr
    CMP dword ptr [0x01c6e2b4],0x80     ; 00562eb1 | g_RenderStateFlags
    JZ 0x00563062                       ; 00562ebb
        ;   XREF to: 00563062 (CONDITIONAL_JUMP)  ; LAB_00563062
    CMP dword ptr [0x01c6e2b8],0x5      ; 00562ec1 | g_VertexPreprocessMode
    JNZ 0x00562f3a                      ; 00562ec8
        ;   XREF to: 00562f3a (CONDITIONAL_JUMP)  ; LAB_00562f3a
    MOV EAX,dword ptr [ESI + 0x18]      ; 00562eca
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562ecd
    CDQ                                 ; 00562ed0
    SHLD EDX,EAX,0x18                   ; 00562ed1
    SHL EAX,0x18                        ; 00562ed5
    IDIV EBX                            ; 00562ed8
    MOV [0x006048e0],EAX                ; 00562eda | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 00562edf
    MOV EBX,dword ptr [EDI + 0x28]      ; 00562ee2
    CDQ                                 ; 00562ee5
    SHLD EDX,EAX,0x18                   ; 00562ee6
    SHL EAX,0x18                        ; 00562eea
    IDIV EBX                            ; 00562eed
    SUB EAX,dword ptr [0x006048e0]      ; 00562eef | g_StartTextureU
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562ef5
    MOV dword ptr [0x00604d10],EDX      ; 00562efb | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 00562f01
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562f04
    CDQ                                 ; 00562f07
    SHLD EDX,EAX,0x18                   ; 00562f08
    SHL EAX,0x18                        ; 00562f0c
    IDIV EBX                            ; 00562f0f
    MOV [0x006048e4],EAX                ; 00562f11 | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 00562f16
    MOV EBX,dword ptr [EDI + 0x28]      ; 00562f19
    CDQ                                 ; 00562f1c
    SHLD EDX,EAX,0x18                   ; 00562f1d
    SHL EAX,0x18                        ; 00562f21
    IDIV EBX                            ; 00562f24
    SUB EAX,dword ptr [0x006048e4]      ; 00562f26 | g_StartTextureV
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f2c
    MOV dword ptr [0x00604d14],EDX      ; 00562f32 | g_HardwareDeltaTextureV
    JMP 0x00562f6e                      ; 00562f38
        ;   XREF to: 00562f6e (UNCONDITIONAL_JUMP)  ; LAB_00562f6e
    MOV EAX,dword ptr [EDI + 0x18]      ; 00562f3a
        ;   Label: LAB_00562f3a
    MOV EBX,dword ptr [ESI + 0x18]      ; 00562f3d
    SUB EAX,EBX                         ; 00562f40
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f42
    MOV dword ptr [0x006048e0],EBX      ; 00562f48 | g_StartTextureU
    MOV dword ptr [0x00604d10],EDX      ; 00562f4e | g_HardwareDeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 00562f54
    MOV EBX,dword ptr [ESI + 0x20]      ; 00562f57
    SUB EAX,EBX                         ; 00562f5a
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f5c
    MOV dword ptr [0x006048e4],EBX      ; 00562f62 | g_StartTextureV
    MOV dword ptr [0x00604d14],EDX      ; 00562f68 | g_HardwareDeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 00562f6e
        ;   Label: LAB_00562f6e
    MOV EBX,dword ptr [ESI + 0x28]      ; 00562f71
    SUB EAX,EBX                         ; 00562f74
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 00562f76
    MOV dword ptr [0x006048ec],EBX      ; 00562f7c | g_StartDepthW
    MOV dword ptr [0x00604d18],EDX      ; 00562f82 | g_HardwareDeltaDepthZ
    MOV EBP,dword ptr [0x006048e0]      ; 00562f88 | g_StartTextureU
    MOV EDX,dword ptr [0x006048e4]      ; 00562f8e | g_StartTextureV
    MOV ESI,dword ptr [0x006048ec]      ; 00562f94 | g_StartDepthW
    MOV EDI,0x0                         ; 00562f9a
    CMP dword ptr [0x01c6ced4],0x0      ; 00562f9f | g_CurrentTextureOpacityData
    JNZ 0x00563057                      ; 00562fa6
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    TEST dword ptr [0x01c6e2b4],0x2     ; 00562fac | g_RenderStateFlags
    JNZ 0x00563057                      ; 00562fb6
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    TEST dword ptr [0x01c6e2b4],0x40    ; 00562fbc | g_RenderStateFlags
        ;   Label: LAB_00562fbc
    JZ 0x00562fd4                       ; 00562fc6
        ;   XREF to: 00562fd4 (CONDITIONAL_JUMP)  ; LAB_00562fd4
    LEA EAX,[EDI]                       ; 00562fc8
    ADD EAX,dword ptr [0x0060490c]      ; 00562fca | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 00562fd0
    JL 0x00563035                       ; 00562fd2
        ;   XREF to: 00563035 (CONDITIONAL_JUMP)  ; LAB_00563035
    TEST dword ptr [0x01c6e2b4],0x1     ; 00562fd4 | g_RenderStateFlags
        ;   Label: LAB_00562fd4
    JZ 0x0056305b                       ; 00562fde
        ;   XREF to: 0056305b (CONDITIONAL_JUMP)  ; LAB_0056305b
    MOV CL,byte ptr [0x00604df8]        ; 00562fe0 | g_TextureShift1
    MOV EAX,EBP                         ; 00562fe6
    SHR EAX,CL                          ; 00562fe8
    AND EAX,dword ptr [0x00604e38]      ; 00562fea | g_TextureMask1
    MOV CL,byte ptr [0x00604e18]        ; 00562ff0 | g_TextureShift2
    MOV EBX,EDX                         ; 00562ff6
    SHR EBX,CL                          ; 00562ff8
    AND EBX,dword ptr [0x00604e58]      ; 00562ffa | g_TextureMask2
    ADD EAX,dword ptr [0x01c6ced0]      ; 00563000 | g_CurrentTextureData
    ADD EAX,EBX                         ; 00563006
    MOVZX EAX,byte ptr [EAX]            ; 00563008
    MOV AX,word ptr [EAX*0x2 + 0x1c6ad74] ; 0056300b
    MOV EBX,EDI                         ; 00563013
        ;   Label: LAB_00563013
    SHR EBX,0x1                         ; 00563015
    ADD EBX,dword ptr [0x00604908]      ; 00563017 | g_CurrentScreenPtr
    MOV word ptr [EBX],AX               ; 0056301d
    TEST dword ptr [0x01c6e2b4],0x80    ; 00563020 | g_RenderStateFlags
    JZ 0x00563035                       ; 0056302a
        ;   XREF to: 00563035 (CONDITIONAL_JUMP)  ; LAB_00563035
    MOV EAX,[0x0060490c]                ; 0056302c | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 00563031
    MOV dword ptr [EAX],ESI             ; 00563033
    ADD EDI,0x4                         ; 00563035
        ;   Label: LAB_00563035
    CMP EDI,dword ptr [0x006048a4]      ; 00563038 | g_ScanlinePixelCount
    JNC 0x00563057                      ; 0056303e
        ;   XREF to: 00563057 (CONDITIONAL_JUMP)  ; LAB_00563057
    ADD EBP,dword ptr [0x00604d10]      ; 00563040 | g_HardwareDeltaTextureU
    ADD EDX,dword ptr [0x00604d14]      ; 00563046 | g_HardwareDeltaTextureV
    ADD ESI,dword ptr [0x00604d18]      ; 0056304c | g_HardwareDeltaDepthZ
    JMP 0x00562fbc                      ; 00563052
        ;   XREF to: 00562fbc (UNCONDITIONAL_JUMP)  ; LAB_00562fbc
    POP EBP                             ; 00563057
        ;   Label: LAB_00563057
    POP EDI                             ; 00563058
    POP ESI                             ; 00563059
    RET                                 ; 0056305a
    MOV EAX,[0x01c6b5c0]                ; 0056305b | g_INT_01c6b5c0
        ;   Label: LAB_0056305b
    JMP 0x00563013                      ; 00563060
        ;   XREF to: 00563013 (UNCONDITIONAL_JUMP)  ; LAB_00563013
    MOV EAX,dword ptr [EDI + 0x28]      ; 00563062
        ;   Label: LAB_00563062
    MOV EBX,dword ptr [ESI + 0x28]      ; 00563065
    SUB EAX,EBX                         ; 00563068
    IMUL dword ptr [ECX + 0x1c6b5d4]    ; 0056306a
    MOV dword ptr [0x006048ec],EBX      ; 00563070 | g_StartDepthW
    MOV dword ptr [0x00604d18],EDX      ; 00563076 | g_HardwareDeltaDepthZ
    MOV EAX,[0x006048ec]                ; 0056307c | g_StartDepthW
    MOV EBX,dword ptr [0x00604d18]      ; 00563081 | g_HardwareDeltaDepthZ
    MOV ESI,dword ptr [0x0060490c]      ; 00563087 | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x006048a4]      ; 0056308d | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 00563093
        ;   Label: LAB_00563093
    ADD EAX,EBX                         ; 00563095
    ADD ESI,0x4                         ; 00563097
    SUB ECX,0x4                         ; 0056309a
    JG 0x00563093                       ; 0056309d
        ;   XREF to: 00563093 (CONDITIONAL_JUMP)  ; LAB_00563093
    POP EBP                             ; 0056309f
    POP EDI                             ; 005630a0
    POP ESI                             ; 005630a1
    RET                                 ; 005630a2

