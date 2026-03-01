; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[57]:
;   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 at 00404048
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 at 00407652
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407720 at 0040775a
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404b24
;   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 at 00405e4c
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 at 00405dac
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 at 0040602c
;   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 at 0040598c
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 at 00407136
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 at 004072c8
;   ... and 47 more
;
; Referenced Globals:
;   int g_ScanlinePixelCount = 0x0
;   int g_StartTextureU = 0x0
;   int g_StartTextureV = 0x0
;   int g_StartDepthW = 0x0
;   int* g_CurrentScreenPtr = 00000000
;   int* g_CurrentZBufferPtr = 00000000
;   int g_DeltaTextureU = 0x0
;   int g_DeltaTextureV = 0x0
;   int g_DeltaDepthW = 0x0
;   _MMX_INTEGER g_TextureShift1
;   _MMX_INTEGER g_TextureShift2
;   _MMX_INTEGER g_TextureMask1
;   _MMX_INTEGER g_TextureMask2
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b50ec
        ;   Label: wincore_windll.cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec
    PUSH EDI                            ; 005b50ed
    PUSH EBP                            ; 005b50ee
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b50ef
    MOV ECX,dword ptr [EDI + 0x8]       ; 005b50f2
    CMP EAX,ECX                         ; 005b50f5
    JBE 0x005b50fc                      ; 005b50f7
        ;   XREF to: 005b50fc (CONDITIONAL_JUMP)  ; LAB_005b50fc
    XCHG EAX,ECX                        ; 005b50f9
    XCHG EDI,ESI                        ; 005b50fa
    SHR ECX,0x10                        ; 005b50fc
        ;   Label: LAB_005b50fc
    SHR EAX,0x10                        ; 005b50ff
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 005b5102 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 005b5109 | g_ScreenBufferArray
    SUB ECX,EAX                         ; 005b5110
    JLE 0x005b52d6                      ; 005b5112
        ;   XREF to: 005b52d6 (CONDITIONAL_JUMP)  ; LAB_005b52d6
    LEA EBX,[EBX + EAX*0x4]             ; 005b5118
    SHL ECX,0x2                         ; 005b511b
    LEA EBP,[EBP + EAX*0x4]             ; 005b511e
    MOV dword ptr [0x006821a4],ECX      ; 005b5122 | g_ScanlinePixelCount
    MOV dword ptr [0x00682208],EBX      ; 005b5128 | g_CurrentScreenPtr
    MOV dword ptr [0x0068220c],EBP      ; 005b512e | g_CurrentZBufferPtr
    CMP dword ptr [0x02d052a0],0x80     ; 005b5134 | g_RenderStateFlags
    JZ 0x005b52e1                       ; 005b513e
        ;   XREF to: 005b52e1 (CONDITIONAL_JUMP)  ; LAB_005b52e1
    CMP dword ptr [0x02d052a4],0x5      ; 005b5144 | g_RenderStateFlag2
    JNZ 0x005b51bd                      ; 005b514b
        ;   XREF to: 005b51bd (CONDITIONAL_JUMP)  ; LAB_005b51bd
    MOV EAX,dword ptr [ESI + 0x18]      ; 005b514d
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b5150
    CDQ                                 ; 005b5153
    SHLD EDX,EAX,0x18                   ; 005b5154
    SHL EAX,0x18                        ; 005b5158
    IDIV EBX                            ; 005b515b
    MOV [0x006821e0],EAX                ; 005b515d | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b5162
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b5165
    CDQ                                 ; 005b5168
    SHLD EDX,EAX,0x18                   ; 005b5169
    SHL EAX,0x18                        ; 005b516d
    IDIV EBX                            ; 005b5170
    SUB EAX,dword ptr [0x006821e0]      ; 005b5172 | g_StartTextureU
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b5178 | DAT_02d02584
    MOV dword ptr [0x00682610],EDX      ; 005b517e | g_DeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 005b5184
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b5187
    CDQ                                 ; 005b518a
    SHLD EDX,EAX,0x18                   ; 005b518b
    SHL EAX,0x18                        ; 005b518f
    IDIV EBX                            ; 005b5192
    MOV [0x006821e4],EAX                ; 005b5194 | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b5199
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b519c
    CDQ                                 ; 005b519f
    SHLD EDX,EAX,0x18                   ; 005b51a0
    SHL EAX,0x18                        ; 005b51a4
    IDIV EBX                            ; 005b51a7
    SUB EAX,dword ptr [0x006821e4]      ; 005b51a9 | g_StartTextureV
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b51af | DAT_02d02584
    MOV dword ptr [0x00682614],EDX      ; 005b51b5 | g_DeltaTextureV
    JMP 0x005b51f1                      ; 005b51bb
        ;   XREF to: 005b51f1 (UNCONDITIONAL_JUMP)  ; LAB_005b51f1
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b51bd
        ;   Label: LAB_005b51bd
    MOV EBX,dword ptr [ESI + 0x18]      ; 005b51c0
    SUB EAX,EBX                         ; 005b51c3
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b51c5 | DAT_02d02584
    MOV dword ptr [0x006821e0],EBX      ; 005b51cb | g_StartTextureU
    MOV dword ptr [0x00682610],EDX      ; 005b51d1 | g_DeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b51d7
    MOV EBX,dword ptr [ESI + 0x20]      ; 005b51da
    SUB EAX,EBX                         ; 005b51dd
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b51df | DAT_02d02584
    MOV dword ptr [0x006821e4],EBX      ; 005b51e5 | g_StartTextureV
    MOV dword ptr [0x00682614],EDX      ; 005b51eb | g_DeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b51f1
        ;   Label: LAB_005b51f1
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b51f4
    SUB EAX,EBX                         ; 005b51f7
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b51f9 | DAT_02d02584
    MOV dword ptr [0x006821ec],EBX      ; 005b51ff | g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b5205 | g_DeltaDepthW
    MOV EBP,dword ptr [0x006821e0]      ; 005b520b | g_StartTextureU
    MOV EDX,dword ptr [0x006821e4]      ; 005b5211 | g_StartTextureV
    MOV ESI,dword ptr [0x006821ec]      ; 005b5217 | g_StartDepthW
    MOV EDI,0x0                         ; 005b521d
    CMP dword ptr [0x02d03e84],0x0      ; 005b5222 | g_CurrentTextureOpacityData
    JNZ 0x005b52d6                      ; 005b5229
        ;   XREF to: 005b52d6 (CONDITIONAL_JUMP)  ; LAB_005b52d6
    TEST dword ptr [0x02d052a0],0x2     ; 005b522f | g_RenderStateFlags
    JNZ 0x005b52d6                      ; 005b5239
        ;   XREF to: 005b52d6 (CONDITIONAL_JUMP)  ; LAB_005b52d6
    TEST dword ptr [0x02d052a0],0x40    ; 005b523f | g_RenderStateFlags
        ;   Label: LAB_005b523f
    JZ 0x005b5257                       ; 005b5249
        ;   XREF to: 005b5257 (CONDITIONAL_JUMP)  ; LAB_005b5257
    LEA EAX,[EDI]                       ; 005b524b
    ADD EAX,dword ptr [0x0068220c]      ; 005b524d | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b5253
    JL 0x005b52b4                       ; 005b5255
        ;   XREF to: 005b52b4 (CONDITIONAL_JUMP)  ; LAB_005b52b4
    TEST dword ptr [0x02d052a0],0x1     ; 005b5257 | g_RenderStateFlags
        ;   Label: LAB_005b5257
    JZ 0x005b52da                       ; 005b5261
        ;   XREF to: 005b52da (CONDITIONAL_JUMP)  ; LAB_005b52da
    MOV CL,byte ptr [0x006826e0]        ; 005b5263 | g_TextureShift1
    MOV EAX,EBP                         ; 005b5269
    SHR EAX,CL                          ; 005b526b
    AND EAX,dword ptr [0x00682720]      ; 005b526d | g_TextureMask1
    MOV CL,byte ptr [0x00682700]        ; 005b5273 | g_TextureShift2
    MOV EBX,EDX                         ; 005b5279
    SHR EBX,CL                          ; 005b527b
    AND EBX,dword ptr [0x00682740]      ; 005b527d | g_TextureMask2
    ADD EAX,dword ptr [0x02d03e80]      ; 005b5283 | g_CurrentTextureData
    ADD EAX,EBX                         ; 005b5289
    MOVZX EAX,byte ptr [EAX]            ; 005b528b
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 005b528e | g_Hardware32BitPalette
    MOV EBX,dword ptr [0x00682208]      ; 005b5295 | g_CurrentScreenPtr
        ;   Label: LAB_005b5295
    ADD EBX,EDI                         ; 005b529b
    MOV dword ptr [EBX],EAX             ; 005b529d
    TEST dword ptr [0x02d052a0],0x80    ; 005b529f | g_RenderStateFlags
    JZ 0x005b52b4                       ; 005b52a9
        ;   XREF to: 005b52b4 (CONDITIONAL_JUMP)  ; LAB_005b52b4
    MOV EAX,[0x0068220c]                ; 005b52ab | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 005b52b0
    MOV dword ptr [EAX],ESI             ; 005b52b2
    ADD EDI,0x4                         ; 005b52b4
        ;   Label: LAB_005b52b4
    CMP EDI,dword ptr [0x006821a4]      ; 005b52b7 | g_ScanlinePixelCount
    JNC 0x005b52d6                      ; 005b52bd
        ;   XREF to: 005b52d6 (CONDITIONAL_JUMP)  ; LAB_005b52d6
    ADD EBP,dword ptr [0x00682610]      ; 005b52bf | g_DeltaTextureU
    ADD EDX,dword ptr [0x00682614]      ; 005b52c5 | g_DeltaTextureV
    ADD ESI,dword ptr [0x00682618]      ; 005b52cb | g_DeltaDepthW
    JMP 0x005b523f                      ; 005b52d1
        ;   XREF to: 005b523f (UNCONDITIONAL_JUMP)  ; LAB_005b523f
    POP EBP                             ; 005b52d6
        ;   Label: LAB_005b52d6
    POP EDI                             ; 005b52d7
    POP ESI                             ; 005b52d8
    RET                                 ; 005b52d9
    MOV EAX,[0x02d02570]                ; 005b52da | g_ActiveRenderColor
        ;   Label: LAB_005b52da
    JMP 0x005b5295                      ; 005b52df
        ;   XREF to: 005b5295 (UNCONDITIONAL_JUMP)  ; LAB_005b5295
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b52e1
        ;   Label: LAB_005b52e1
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b52e4
    SUB EAX,EBX                         ; 005b52e7
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b52e9 | DAT_02d02584
    MOV dword ptr [0x006821ec],EBX      ; 005b52ef | g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b52f5 | g_DeltaDepthW
    MOV EAX,[0x006821ec]                ; 005b52fb | g_StartDepthW
    MOV EBX,dword ptr [0x00682618]      ; 005b5300 | g_DeltaDepthW
    MOV ESI,dword ptr [0x0068220c]      ; 005b5306 | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x006821a4]      ; 005b530c | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 005b5312
        ;   Label: LAB_005b5312
    ADD EAX,EBX                         ; 005b5314
    ADD ESI,0x4                         ; 005b5316
    SUB ECX,0x4                         ; 005b5319
    JG 0x005b5312                       ; 005b531c
        ;   XREF to: 005b5312 (CONDITIONAL_JUMP)  ; LAB_005b5312
    POP EBP                             ; 005b531e
    POP EDI                             ; 005b531f
    POP ESI                             ; 005b5320
    RET                                 ; 005b5321

