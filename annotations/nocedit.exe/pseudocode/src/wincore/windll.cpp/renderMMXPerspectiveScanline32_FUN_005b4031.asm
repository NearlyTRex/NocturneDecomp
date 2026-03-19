; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[77]:
;   engine_3d.c_flushPremiumRenderBuffer_FUN_004070c0 at 00407263
;   engine_3d.c_renderOverlayTextureEnable_FUN_00404020 at 004040cc
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessingWithUV_FUN_00407720 at 00407817
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 at 004076cb
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404c47
;   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 at 00405e9f
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 at 00405dff
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 at 0040607f
;   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 at 004059df
;   engine_3d.c_renderPolygonEngineAPIPremiumDirect_FUN_00407470 at 004075e8
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
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b4031
        ;   Label: wincore_windll.cpp_renderMMXPerspectiveScanline32_FUN_005b4031
    PUSH EDI                            ; 005b4032
    PUSH EBP                            ; 005b4033
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b4034
    MOV ECX,dword ptr [EDI + 0x8]       ; 005b4037
    CMP EAX,ECX                         ; 005b403a
    JBE 0x005b4041                      ; 005b403c
        ;   XREF to: 005b4041 (CONDITIONAL_JUMP)  ; LAB_005b4041
    XCHG EAX,ECX                        ; 005b403e
    XCHG EDI,ESI                        ; 005b403f
    SHR ECX,0x10                        ; 005b4041
        ;   Label: LAB_005b4041
    SHR EAX,0x10                        ; 005b4044
    MOV EBP,dword ptr [EBX*0x4 + 0x2cf7d5c] ; 005b4047 | g_ZBufferScanlineArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf6a9c] ; 005b404e | g_ScreenBufferArray
    SUB ECX,EAX                         ; 005b4055
    JLE 0x005b44e0                      ; 005b4057
        ;   XREF to: 005b44e0 (CONDITIONAL_JUMP)  ; LAB_005b44e0
    LEA EBX,[EBX + EAX*0x4]             ; 005b405d
    SHL ECX,0x2                         ; 005b4060
    LEA EBP,[EBP + EAX*0x4]             ; 005b4063
    MOV dword ptr [0x006821a4],ECX      ; 005b4067 | g_ScanlinePixelCount
    MOV dword ptr [0x00682208],EBX      ; 005b406d | g_CurrentScreenPtr
    MOV dword ptr [0x0068220c],EBP      ; 005b4073 | g_CurrentZBufferPtr
    CMP dword ptr [0x02d052a0],0x80     ; 005b4079 | g_RenderStateFlags
    JZ 0x005b47e0                       ; 005b4083
        ;   XREF to: 005b47e0 (CONDITIONAL_JUMP)  ; LAB_005b47e0
    CMP dword ptr [0x02d052a4],0x5      ; 005b4089 | g_RenderStateFlag2
    JNZ 0x005b4102                      ; 005b4090
        ;   XREF to: 005b4102 (CONDITIONAL_JUMP)  ; LAB_005b4102
    MOV EAX,dword ptr [ESI + 0x18]      ; 005b4092
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b4095
    CDQ                                 ; 005b4098
    SHLD EDX,EAX,0x18                   ; 005b4099
    SHL EAX,0x18                        ; 005b409d
    IDIV EBX                            ; 005b40a0
    MOV [0x006821e0],EAX                ; 005b40a2 | g_StartTextureU
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b40a7
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b40aa
    CDQ                                 ; 005b40ad
    SHLD EDX,EAX,0x18                   ; 005b40ae
    SHL EAX,0x18                        ; 005b40b2
    IDIV EBX                            ; 005b40b5
    SUB EAX,dword ptr [0x006821e0]      ; 005b40b7 | g_StartTextureU
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b40bd | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00682610],EDX      ; 005b40c3 | g_DeltaTextureU
    MOV EAX,dword ptr [ESI + 0x20]      ; 005b40c9
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b40cc
    CDQ                                 ; 005b40cf
    SHLD EDX,EAX,0x18                   ; 005b40d0
    SHL EAX,0x18                        ; 005b40d4
    IDIV EBX                            ; 005b40d7
    MOV [0x006821e4],EAX                ; 005b40d9 | g_StartTextureV
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b40de
    MOV EBX,dword ptr [EDI + 0x28]      ; 005b40e1
    CDQ                                 ; 005b40e4
    SHLD EDX,EAX,0x18                   ; 005b40e5
    SHL EAX,0x18                        ; 005b40e9
    IDIV EBX                            ; 005b40ec
    SUB EAX,dword ptr [0x006821e4]      ; 005b40ee | g_StartTextureV
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b40f4 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x00682614],EDX      ; 005b40fa | g_DeltaTextureV
    JMP 0x005b4136                      ; 005b4100
        ;   XREF to: 005b4136 (UNCONDITIONAL_JUMP)  ; LAB_005b4136
    MOV EAX,dword ptr [EDI + 0x18]      ; 005b4102
        ;   Label: LAB_005b4102
    MOV EBX,dword ptr [ESI + 0x18]      ; 005b4105
    SUB EAX,EBX                         ; 005b4108
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b410a | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821e0],EBX      ; 005b4110 | g_StartTextureU
    MOV dword ptr [0x00682610],EDX      ; 005b4116 | g_DeltaTextureU
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b411c
    MOV EBX,dword ptr [ESI + 0x20]      ; 005b411f
    SUB EAX,EBX                         ; 005b4122
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b4124 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821e4],EBX      ; 005b412a | g_StartTextureV
    MOV dword ptr [0x00682614],EDX      ; 005b4130 | g_DeltaTextureV
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b4136
        ;   Label: LAB_005b4136
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b4139
    SUB EAX,EBX                         ; 005b413c
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b413e | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821ec],EBX      ; 005b4144 | g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b414a | g_DeltaDepthW
    MOV EAX,dword ptr [EDI + 0x30]      ; 005b4150
    MOV EBX,dword ptr [ESI + 0x30]      ; 005b4153
    SUB EAX,EBX                         ; 005b4156
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b4158 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006826d0],EBX      ; 005b415e | g_VertexAlphaStart
    MOV dword ptr [0x006826d8],EDX      ; 005b4164 | g_VertexAlphaDelta
    MOV EBP,dword ptr [0x006826d0]      ; 005b416a | g_VertexAlphaStart
    PXOR MM7,MM7                        ; 005b4170
    TEST dword ptr [0x02d052a0],0x200   ; 005b4173 | g_RenderStateFlags
    JNZ 0x005b41c0                      ; 005b417d
        ;   XREF to: 005b41c0 (CONDITIONAL_JUMP)  ; LAB_005b41c0
    TEST dword ptr [0x02d052a0],0x4     ; 005b417f | g_RenderStateFlags
    JNZ 0x005b4280                      ; 005b4189
        ;   XREF to: 005b4280 (CONDITIONAL_JUMP)  ; LAB_005b4280
    TEST dword ptr [0x02d052a0],0x10    ; 005b418f | g_RenderStateFlags
    JNZ 0x005b4310                      ; 005b4199
        ;   XREF to: 005b4310 (CONDITIONAL_JUMP)  ; LAB_005b4310
    MOVQ MM5,qword ptr [0x006837f8]     ; 005b419f | g_AlphaTable[255].red
    PSLLW MM5,0x7                       ; 005b41a6
    PXOR MM6,MM6                        ; 005b41aa
    JMP 0x005b4340                      ; 005b41ad
        ;   XREF to: 005b4340 (UNCONDITIONAL_JUMP)  ; LAB_005b4340
    MOV EAX,dword ptr [EDI + 0x10]      ; 005b41c0
        ;   Label: LAB_005b41c0
    MOV EBX,dword ptr [ESI + 0x10]      ; 005b41c3
    SHR EAX,0x1                         ; 005b41c6
    SHR EBX,0x1                         ; 005b41c8
    SUB EAX,EBX                         ; 005b41ca
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b41cc | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b41d2
    AND EDX,0xffff                      ; 005b41d8
    MOV dword ptr [0x00682690],EBX      ; 005b41de | g_VertexRedStart
    MOV dword ptr [0x006826b0],EDX      ; 005b41e4 | g_VertexRedDelta
    MOV EAX,dword ptr [EDI + 0x38]      ; 005b41ea
    MOV EBX,dword ptr [ESI + 0x38]      ; 005b41ed
    SHR EAX,0x1                         ; 005b41f0
    SHR EBX,0x1                         ; 005b41f2
    SUB EAX,EBX                         ; 005b41f4
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b41f6 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b41fc
    AND EDX,0xffff                      ; 005b4202
    MOV dword ptr [0x00682698],EBX      ; 005b4208 | g_VertexGreenStart
    MOV dword ptr [0x006826b8],EDX      ; 005b420e | g_VertexGreenDelta
    MOV EAX,dword ptr [EDI + 0x40]      ; 005b4214
    MOV EBX,dword ptr [ESI + 0x40]      ; 005b4217
    SHR EAX,0x1                         ; 005b421a
    SHR EBX,0x1                         ; 005b421c
    SUB EAX,EBX                         ; 005b421e
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b4220 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b4226
    AND EDX,0xffff                      ; 005b422c
    MOV dword ptr [0x006826a0],EBX      ; 005b4232 | g_VertexBlueStart
    MOV dword ptr [0x006826c0],EDX      ; 005b4238 | g_VertexBlueDelta
    MOVQ MM5,qword ptr [0x00682690]     ; 005b423e | g_VertexRedStart
    MOVQ MM6,qword ptr [0x006826b0]     ; 005b4245 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005b424c
    PSLLQ MM6,0x10                      ; 005b4250
    POR MM5,qword ptr [0x00682698]      ; 005b4254 | g_VertexGreenStart
    POR MM6,qword ptr [0x006826b8]      ; 005b425b | g_VertexGreenDelta
    PSLLQ MM5,0x10                      ; 005b4262
    PSLLQ MM6,0x10                      ; 005b4266
    POR MM5,qword ptr [0x006826a0]      ; 005b426a | g_VertexBlueStart
    POR MM6,qword ptr [0x006826c0]      ; 005b4271 | g_VertexBlueDelta
    JMP 0x005b4340                      ; 005b4278
        ;   XREF to: 005b4340 (UNCONDITIONAL_JUMP)  ; LAB_005b4340
    MOV EAX,dword ptr [EDI + 0x10]      ; 005b4280
        ;   Label: LAB_005b4280
    MOV EBX,dword ptr [ESI + 0x10]      ; 005b4283
    SUB EAX,0x100                       ; 005b4286
    SUB EBX,0x100                       ; 005b428b
    CMP EAX,0xfff                       ; 005b4291
    JBE 0x005b429d                      ; 005b4296
        ;   XREF to: 005b429d (CONDITIONAL_JUMP)  ; LAB_005b429d
    MOV EAX,0xfff                       ; 005b4298
    CMP EBX,0xfff                       ; 005b429d
        ;   Label: LAB_005b429d
    JBE 0x005b42aa                      ; 005b42a3
        ;   XREF to: 005b42aa (CONDITIONAL_JUMP)  ; LAB_005b42aa
    MOV EBX,0xfff                       ; 005b42a5
    SHL EAX,0x3                         ; 005b42aa
        ;   Label: LAB_005b42aa
    SHL EBX,0x3                         ; 005b42ad
    SUB EAX,EBX                         ; 005b42b0
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b42b2 | g_ReciprocalLookupTable[1]
    AND EBX,0xffff                      ; 005b42b8
    AND EDX,0xffff                      ; 005b42be
    MOV dword ptr [0x00682690],EBX      ; 005b42c4 | g_VertexRedStart
    MOV dword ptr [0x006826b0],EDX      ; 005b42ca | g_VertexRedDelta
    MOVQ MM5,qword ptr [0x00682690]     ; 005b42d0 | g_VertexRedStart
    MOVQ MM6,qword ptr [0x006826b0]     ; 005b42d7 | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005b42de
    PSLLQ MM6,0x10                      ; 005b42e2
    POR MM5,qword ptr [0x00682690]      ; 005b42e6 | g_VertexRedStart
    POR MM6,qword ptr [0x006826b0]      ; 005b42ed | g_VertexRedDelta
    PSLLQ MM5,0x10                      ; 005b42f4
    PSLLQ MM6,0x10                      ; 005b42f8
    POR MM5,qword ptr [0x00682690]      ; 005b42fc | g_VertexRedStart
    POR MM6,qword ptr [0x006826b0]      ; 005b4303 | g_VertexRedDelta
    JMP 0x005b4340                      ; 005b430a
        ;   XREF to: 005b4340 (UNCONDITIONAL_JUMP)  ; LAB_005b4340
    MOV EAX,[0x02d02574]                ; 005b4310 | g_CurrentLightingValue
        ;   Label: LAB_005b4310
    SUB EAX,0x100                       ; 005b4315
    SHR EAX,0x4                         ; 005b431a
    CMP EAX,0xff                        ; 005b431d
    JC 0x005b4329                       ; 005b4322
        ;   XREF to: 005b4329 (CONDITIONAL_JUMP)  ; LAB_005b4329
    MOV EAX,0xff                        ; 005b4324
    MOVQ MM5,qword ptr [EAX*0x8 + 0x683000] ; 005b4329 | g_AlphaTable[255].red
        ;   Label: LAB_005b4329
    PSLLW MM5,0x7                       ; 005b4331
    PXOR MM6,MM6                        ; 005b4335
    JMP 0x005b4340                      ; 005b4338
        ;   XREF to: 005b4340 (UNCONDITIONAL_JUMP)  ; LAB_005b4340
    MOV ECX,dword ptr [0x006821e0]      ; 005b4340 | g_StartTextureU
        ;   Label: LAB_005b4340
    MOV EDX,dword ptr [0x006821e4]      ; 005b4346 | g_StartTextureV
    MOV ESI,dword ptr [0x006821ec]      ; 005b434c | g_StartDepthW
    MOV EDI,0x0                         ; 005b4352
    CMP dword ptr [0x02d03e84],0x0      ; 005b4357 | g_CurrentTextureOpacityData
    JNZ 0x005b4370                      ; 005b435e
        ;   XREF to: 005b4370 (CONDITIONAL_JUMP)  ; LAB_005b4370
    TEST dword ptr [0x02d052a0],0x2     ; 005b4360 | g_RenderStateFlags
    JZ 0x005b4676                       ; 005b436a
        ;   XREF to: 005b4676 (CONDITIONAL_JUMP)  ; LAB_005b4676
    TEST dword ptr [0x02d052a0],0x100   ; 005b4370 | g_RenderStateFlags
        ;   Label: LAB_005b4370
    JNZ 0x005b438f                      ; 005b437a
        ;   XREF to: 005b438f (CONDITIONAL_JUMP)  ; LAB_005b438f
    MOV EBP,dword ptr [0x006793b4]      ; 005b437c | g_CurrentAlphaValue
    SHL EBP,0x8                         ; 005b4382
    MOV dword ptr [0x006826d8],0x0      ; 005b4385 | g_VertexAlphaDelta
    CMP dword ptr [0x02d03e84],0x0      ; 005b438f | g_CurrentTextureOpacityData
        ;   Label: LAB_005b438f
    JNZ 0x005b44f0                      ; 005b4396
        ;   XREF to: 005b44f0 (CONDITIONAL_JUMP)  ; LAB_005b44f0
    TEST dword ptr [0x02d052a0],0x40    ; 005b439c | g_RenderStateFlags
        ;   Label: LAB_005b439c
    JZ 0x005b43b8                       ; 005b43a6
        ;   XREF to: 005b43b8 (CONDITIONAL_JUMP)  ; LAB_005b43b8
    LEA EAX,[EDI]                       ; 005b43a8
    ADD EAX,dword ptr [0x0068220c]      ; 005b43aa | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b43b0
    JL 0x005b44a2                       ; 005b43b2
        ;   XREF to: 005b44a2 (CONDITIONAL_JUMP)  ; LAB_005b44a2
    MOVD MM0,ECX                        ; 005b43b8
        ;   Label: LAB_005b43b8
    MOVD MM2,EDX                        ; 005b43bb
    PSRLQ MM0,qword ptr [0x006826e0]    ; 005b43be | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 005b43c5 | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 005b43cc | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 005b43d3 | g_TextureMask2
    PADDD MM0,MM2                       ; 005b43da
    MOVD EBX,MM0                        ; 005b43dd
    ADD EBX,dword ptr [0x02d03e80]      ; 005b43e0 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 005b43e6
    MOV EAX,dword ptr [EAX*0x4 + 0x2d01924] ; 005b43e9 | g_Hardware32BitPalette
    CMP EAX,0x0                         ; 005b43f0
    JZ 0x005b44a2                       ; 005b43f3
        ;   XREF to: 005b44a2 (CONDITIONAL_JUMP)  ; LAB_005b44a2
    MOVD MM0,EAX                        ; 005b43f9
    PUNPCKLBW MM0,MM7                   ; 005b43fc
    PXOR MM4,MM4                        ; 005b43ff
    TEST dword ptr [0x02d052a0],0x20    ; 005b4402 | g_RenderStateFlags
    JZ 0x005b441c                       ; 005b440c
        ;   XREF to: 005b441c (CONDITIONAL_JUMP)  ; LAB_005b441c
    MOV EBX,EDI                         ; 005b440e
    ADD EBX,dword ptr [0x00682208]      ; 005b4410 | g_CurrentScreenPtr
    MOVD MM4,dword ptr [EBX]            ; 005b4416
    PUNPCKLBW MM4,MM7                   ; 005b4419
    PSLLW MM0,0x4                       ; 005b441c
        ;   Label: LAB_005b441c
    MOVQ MM7,MM5                        ; 005b4420
    MOV EAX,EBP                         ; 005b4423
    PSRLW MM7,0x3                       ; 005b4425
    SAR EAX,0x8                         ; 005b4429
    PMULHW MM0,MM7                      ; 005b442c
    MOVQ MM2,qword ptr [EAX*0x8 + 0x683000] ; 005b442f | g_AlphaTable[255].red
    PXOR MM7,MM7                        ; 005b4437
    MOVQ MM3,MM2                        ; 005b443a
    PACKUSWB MM0,MM7                    ; 005b443d
    PXOR MM3,qword ptr [0x006837f8]     ; 005b4440 | g_AlphaTable[255].red
    PUNPCKLBW MM0,MM7                   ; 005b4447
    CMP dword ptr [0x02d05298],0x0      ; 005b444a | g_BlendMode
    JNZ 0x005b4470                      ; 005b4451
        ;   XREF to: 005b4470 (CONDITIONAL_JUMP)  ; LAB_005b4470
    PMULLW MM4,MM3                      ; 005b4453
    PMULLW MM0,MM2                      ; 005b4456
    PADDUSW MM0,MM4                     ; 005b4459
    PSRLW MM0,0x8                       ; 005b445c
    PACKUSWB MM0,MM7                    ; 005b4460
    JMP 0x005b4481                      ; 005b4463
        ;   XREF to: 005b4481 (UNCONDITIONAL_JUMP)  ; LAB_005b4481
    PSLLW MM4,0x8                       ; 005b4470
        ;   Label: LAB_005b4470
    PMULLW MM0,MM2                      ; 005b4474
    PADDUSW MM0,MM4                     ; 005b4477
    PSRLW MM0,0x8                       ; 005b447a
    PACKUSWB MM0,MM7                    ; 005b447e
    MOV EBX,EDI                         ; 005b4481
        ;   Label: LAB_005b4481
    ADD EBX,dword ptr [0x00682208]      ; 005b4483 | g_CurrentScreenPtr
    MOVD dword ptr [EBX],MM0            ; 005b4489
    TEST dword ptr [0x02d052a0],0x80    ; 005b448c | g_RenderStateFlags
    JZ 0x005b44a2                       ; 005b4496
        ;   XREF to: 005b44a2 (CONDITIONAL_JUMP)  ; LAB_005b44a2
    MOV EAX,EDI                         ; 005b4498
    ADD EAX,dword ptr [0x0068220c]      ; 005b449a | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 005b44a0
    ADD EDI,0x4                         ; 005b44a2
        ;   Label: LAB_005b44a2
    CMP EDI,dword ptr [0x006821a4]      ; 005b44a5 | g_ScanlinePixelCount
    JNC 0x005b44e0                      ; 005b44ab
        ;   XREF to: 005b44e0 (CONDITIONAL_JUMP)  ; LAB_005b44e0
    ADD ECX,dword ptr [0x00682610]      ; 005b44ad | g_DeltaTextureU
    PADDW MM5,MM6                       ; 005b44b3
    ADD EDX,dword ptr [0x00682614]      ; 005b44b6 | g_DeltaTextureV
    MOVQ MM0,MM5                        ; 005b44bc
    ADD ESI,dword ptr [0x00682618]      ; 005b44bf | g_DeltaDepthW
    PCMPGTW MM5,qword ptr [0x0068261c]  ; 005b44c5 | g_SelectedClearColor
    ADD EBP,dword ptr [0x006826d8]      ; 005b44cc | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 005b44d2
    JMP 0x005b439c                      ; 005b44d5
        ;   XREF to: 005b439c (UNCONDITIONAL_JUMP)  ; LAB_005b439c
    POP EBP                             ; 005b44e0
        ;   Label: LAB_005b44e0
    EMMS                                ; 005b44e1
    POP EDI                             ; 005b44e3
    POP ESI                             ; 005b44e4
    RET                                 ; 005b44e5
    TEST dword ptr [0x02d052a0],0x40    ; 005b44f0 | g_RenderStateFlags
        ;   Label: LAB_005b44f0
    JZ 0x005b450c                       ; 005b44fa
        ;   XREF to: 005b450c (CONDITIONAL_JUMP)  ; LAB_005b450c
    LEA EAX,[EDI]                       ; 005b44fc
    ADD EAX,dword ptr [0x0068220c]      ; 005b44fe | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b4504
    JL 0x005b4632                       ; 005b4506
        ;   XREF to: 005b4632 (CONDITIONAL_JUMP)  ; LAB_005b4632
    MOVD MM0,ECX                        ; 005b450c
        ;   Label: LAB_005b450c
    MOVD MM2,EDX                        ; 005b450f
    PSRLQ MM0,qword ptr [0x006826e0]    ; 005b4512 | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 005b4519 | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 005b4520 | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 005b4527 | g_TextureMask2
    PADDD MM0,MM2                       ; 005b452e
    MOVD EBX,MM0                        ; 005b4531
    ADD EBX,dword ptr [0x02d03e80]      ; 005b4534 | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 005b453a
    MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924] ; 005b453d | g_Hardware32BitPalette
    PUNPCKLBW MM0,MM7                   ; 005b4545
    SUB EBX,dword ptr [0x02d03e80]      ; 005b4548 | g_CurrentTextureData
    ADD EBX,dword ptr [0x02d03e84]      ; 005b454e | g_CurrentTextureOpacityData
    MOVZX EAX,byte ptr [EBX]            ; 005b4554
    TEST EAX,0xffffffff                 ; 005b4557
    JZ 0x005b4632                       ; 005b455c
        ;   XREF to: 005b4632 (CONDITIONAL_JUMP)  ; LAB_005b4632
    CMP EBP,0xff00                      ; 005b4562
    JLE 0x005b4571                      ; 005b4568
        ;   XREF to: 005b4571 (CONDITIONAL_JUMP)  ; LAB_005b4571
    CMP EAX,0xff                        ; 005b456a
    JGE 0x005b45d0                      ; 005b456f
        ;   XREF to: 005b45d0 (CONDITIONAL_JUMP)  ; LAB_005b45d0
    MOV EBX,EDI                         ; 005b4571
        ;   Label: LAB_005b4571
    ADD EBX,dword ptr [0x00682208]      ; 005b4573 | g_CurrentScreenPtr
    MOVD MM4,dword ptr [EBX]            ; 005b4579
    PUNPCKLBW MM4,MM7                   ; 005b457c
    PSLLW MM0,0x4                       ; 005b457f
    MOVQ MM7,MM5                        ; 005b4583
    IMUL EAX,EBP                        ; 005b4586
    PSRLW MM7,0x3                       ; 005b4589
    SHR EAX,0x10                        ; 005b458d
    PMULHW MM0,MM7                      ; 005b4590
    MOVQ MM2,qword ptr [EAX*0x8 + 0x683000] ; 005b4593 | g_AlphaTable
    PXOR MM7,MM7                        ; 005b459b
    MOVQ MM3,MM2                        ; 005b459e
    PACKUSWB MM0,MM7                    ; 005b45a1
    PXOR MM3,qword ptr [0x006837f8]     ; 005b45a4 | g_AlphaTable[255].red
    PUNPCKLBW MM0,MM7                   ; 005b45ab
    CMP dword ptr [0x02d05298],0x0      ; 005b45ae | g_BlendMode
    JNZ 0x005b4600                      ; 005b45b5
        ;   XREF to: 005b4600 (CONDITIONAL_JUMP)  ; LAB_005b4600
    PMULLW MM4,MM3                      ; 005b45b7
    PMULLW MM0,MM2                      ; 005b45ba
    PADDUSW MM0,MM4                     ; 005b45bd
    PSRLW MM0,0x8                       ; 005b45c0
    PACKUSWB MM0,MM7                    ; 005b45c4
    JMP 0x005b4611                      ; 005b45c7
        ;   XREF to: 005b4611 (UNCONDITIONAL_JUMP)  ; LAB_005b4611
    CMP EBP,0xff                        ; 005b45d0
        ;   Label: LAB_005b45d0
    JL 0x005b4571                       ; 005b45d6
        ;   XREF to: 005b4571 (CONDITIONAL_JUMP)  ; LAB_005b4571
    CMP dword ptr [0x02d05298],0x0      ; 005b45d8 | g_BlendMode
    JNZ 0x005b4571                      ; 005b45df
        ;   XREF to: 005b4571 (CONDITIONAL_JUMP)  ; LAB_005b4571
    MOVQ MM3,MM5                        ; 005b45e1
    PSRLW MM3,0x3                       ; 005b45e4
    PSLLW MM0,0x4                       ; 005b45e8
    PMULHW MM0,MM3                      ; 005b45ec
    PACKUSWB MM0,MM7                    ; 005b45ef
    JMP 0x005b4611                      ; 005b45f2
        ;   XREF to: 005b4611 (UNCONDITIONAL_JUMP)  ; LAB_005b4611
    PSLLW MM4,0x8                       ; 005b4600
        ;   Label: LAB_005b4600
    PMULLW MM0,MM2                      ; 005b4604
    PADDUSW MM0,MM4                     ; 005b4607
    PSRLW MM0,0x8                       ; 005b460a
    PACKUSWB MM0,MM7                    ; 005b460e
    MOV EBX,EDI                         ; 005b4611
        ;   Label: LAB_005b4611
    ADD EBX,dword ptr [0x00682208]      ; 005b4613 | g_CurrentScreenPtr
    MOVD dword ptr [EBX],MM0            ; 005b4619
    TEST dword ptr [0x02d052a0],0x80    ; 005b461c | g_RenderStateFlags
    JZ 0x005b4632                       ; 005b4626
        ;   XREF to: 005b4632 (CONDITIONAL_JUMP)  ; LAB_005b4632
    MOV EAX,EDI                         ; 005b4628
    ADD EAX,dword ptr [0x0068220c]      ; 005b462a | g_CurrentZBufferPtr
    MOV dword ptr [EAX],ESI             ; 005b4630
    ADD EDI,0x4                         ; 005b4632
        ;   Label: LAB_005b4632
    CMP EDI,dword ptr [0x006821a4]      ; 005b4635 | g_ScanlinePixelCount
    JNC 0x005b4670                      ; 005b463b
        ;   XREF to: 005b4670 (CONDITIONAL_JUMP)  ; LAB_005b4670
    ADD ECX,dword ptr [0x00682610]      ; 005b463d | g_DeltaTextureU
    PADDW MM5,MM6                       ; 005b4643
    ADD EDX,dword ptr [0x00682614]      ; 005b4646 | g_DeltaTextureV
    MOVQ MM0,MM5                        ; 005b464c
    ADD ESI,dword ptr [0x00682618]      ; 005b464f | g_DeltaDepthW
    PCMPGTW MM5,qword ptr [0x0068261c]  ; 005b4655 | g_SelectedClearColor
    ADD EBP,dword ptr [0x006826d8]      ; 005b465c | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 005b4662
    JMP 0x005b44f0                      ; 005b4665
        ;   XREF to: 005b44f0 (UNCONDITIONAL_JUMP)  ; LAB_005b44f0
    POP EBP                             ; 005b4670
        ;   Label: LAB_005b4670
    EMMS                                ; 005b4671
    POP EDI                             ; 005b4673
    POP ESI                             ; 005b4674
    RET                                 ; 005b4675
    MOVQ MM1,qword ptr [0x02d052a8]     ; 005b4676 | g_SolidColorMode
        ;   Label: LAB_005b4676
    PUNPCKLBW MM1,MM7                   ; 005b467d
    TEST dword ptr [0x02d052a0],0x8     ; 005b4680 | g_RenderStateFlags
    JNZ 0x005b469b                      ; 005b468a
        ;   XREF to: 005b469b (CONDITIONAL_JUMP)  ; LAB_005b469b
    MOV EBP,0x0                         ; 005b468c
    MOV dword ptr [0x006826d8],0x0      ; 005b4691 | g_VertexAlphaDelta
    TEST dword ptr [0x02d052a0],0x40    ; 005b469b | g_RenderStateFlags
        ;   Label: LAB_005b469b
    JZ 0x005b46b7                       ; 005b46a5
        ;   XREF to: 005b46b7 (CONDITIONAL_JUMP)  ; LAB_005b46b7
    LEA EAX,[EDI]                       ; 005b46a7
    ADD EAX,dword ptr [0x0068220c]      ; 005b46a9 | g_CurrentZBufferPtr
    CMP ESI,dword ptr [EAX]             ; 005b46af
    JL 0x005b476d                       ; 005b46b1
        ;   XREF to: 005b476d (CONDITIONAL_JUMP)  ; LAB_005b476d
    TEST dword ptr [0x02d052a0],0x1     ; 005b46b7 | g_RenderStateFlags
        ;   Label: LAB_005b46b7
    JZ 0x005b47b6                       ; 005b46c1
        ;   XREF to: 005b47b6 (CONDITIONAL_JUMP)  ; LAB_005b47b6
    MOVD MM0,ECX                        ; 005b46c7
    MOVD MM2,EDX                        ; 005b46ca
    PSRLQ MM0,qword ptr [0x006826e0]    ; 005b46cd | g_TextureShift1
    PSRLQ MM2,qword ptr [0x00682700]    ; 005b46d4 | g_TextureShift2
    PAND MM0,qword ptr [0x00682720]     ; 005b46db | g_TextureMask1
    PAND MM2,qword ptr [0x00682740]     ; 005b46e2 | g_TextureMask2
    PADDD MM0,MM2                       ; 005b46e9
    MOVD EBX,MM0                        ; 005b46ec
    ADD EBX,dword ptr [0x02d03e80]      ; 005b46ef | g_CurrentTextureData
    MOVZX EAX,byte ptr [EBX]            ; 005b46f5
    MOVD MM0,dword ptr [EAX*0x4 + 0x2d01924] ; 005b46f8 | g_Hardware32BitPalette
    MOVQ MM3,MM5                        ; 005b4700
        ;   Label: LAB_005b4700
    PUNPCKLBW MM0,MM7                   ; 005b4703
    PSRLW MM3,0x3                       ; 005b4706
    PSLLW MM0,0x4                       ; 005b470a
    PMULHW MM0,MM3                      ; 005b470e
    PACKUSWB MM0,MM7                    ; 005b4711
    TEST dword ptr [0x02d052a0],0x8     ; 005b4714 | g_RenderStateFlags
    JZ 0x005b474d                       ; 005b471e
        ;   XREF to: 005b474d (CONDITIONAL_JUMP)  ; LAB_005b474d
    MOV EAX,EBP                         ; 005b4720
    SAR EAX,0x8                         ; 005b4722
    MOVQ MM3,qword ptr [EAX*0x8 + 0x683000] ; 005b4725 | g_AlphaTable
    MOVQ MM4,MM1                        ; 005b472d
    MOVQ MM2,MM3                        ; 005b4730
    PMULLW MM4,MM3                      ; 005b4733
    PXOR MM2,qword ptr [0x006837f8]     ; 005b4736 | g_AlphaTable[255].red
    PUNPCKLBW MM0,MM7                   ; 005b473d
    PMULLW MM0,MM2                      ; 005b4740
    PADDW MM0,MM4                       ; 005b4743
    PSRLW MM0,0x8                       ; 005b4746
    PACKUSWB MM0,MM7                    ; 005b474a
    MOV EBX,dword ptr [0x00682208]      ; 005b474d | g_CurrentScreenPtr
        ;   Label: LAB_005b474d
    ADD EBX,EDI                         ; 005b4753
    MOVD dword ptr [EBX],MM0            ; 005b4755
    TEST dword ptr [0x02d052a0],0x80    ; 005b4758 | g_RenderStateFlags
    JZ 0x005b476d                       ; 005b4762
        ;   XREF to: 005b476d (CONDITIONAL_JUMP)  ; LAB_005b476d
    MOV EAX,[0x0068220c]                ; 005b4764 | g_CurrentZBufferPtr
    ADD EAX,EDI                         ; 005b4769
    MOV dword ptr [EAX],ESI             ; 005b476b
    ADD EDI,0x4                         ; 005b476d
        ;   Label: LAB_005b476d
    CMP EDI,dword ptr [0x006821a4]      ; 005b4770 | g_ScanlinePixelCount
    JNC 0x005b44e0                      ; 005b4776
        ;   XREF to: 005b44e0 (CONDITIONAL_JUMP)  ; LAB_005b44e0
    ADD ECX,dword ptr [0x00682610]      ; 005b477c | g_DeltaTextureU
    PADDW MM5,MM6                       ; 005b4782
    ADD EDX,dword ptr [0x00682614]      ; 005b4785 | g_DeltaTextureV
    MOVQ MM0,MM5                        ; 005b478b
    ADD ESI,dword ptr [0x00682618]      ; 005b478e | g_DeltaDepthW
    PCMPGTW MM5,qword ptr [0x0068261c]  ; 005b4794 | g_SelectedClearColor
    ADD EBP,dword ptr [0x006826d8]      ; 005b479b | g_VertexAlphaDelta
    PAND MM5,MM0                        ; 005b47a1
    JMP 0x005b469b                      ; 005b47a4
        ;   XREF to: 005b469b (UNCONDITIONAL_JUMP)  ; LAB_005b469b
    TEST dword ptr [0x02d052a0],0x200   ; 005b47b6 | g_RenderStateFlags
        ;   Label: LAB_005b47b6
    JNZ 0x005b47d0                      ; 005b47c0
        ;   XREF to: 005b47d0 (CONDITIONAL_JUMP)  ; LAB_005b47d0
    MOVD MM0,dword ptr [0x02d02570]     ; 005b47c2 | g_ActiveRenderColor
    JMP 0x005b4700                      ; 005b47c9
        ;   XREF to: 005b4700 (UNCONDITIONAL_JUMP)  ; LAB_005b4700
    MOVD MM0,dword ptr [0x006827f0]     ; 005b47d0 | g_SpecialColor
        ;   Label: LAB_005b47d0
    JMP 0x005b4700                      ; 005b47d7
        ;   XREF to: 005b4700 (UNCONDITIONAL_JUMP)  ; LAB_005b4700
    MOV EAX,dword ptr [EDI + 0x28]      ; 005b47e0
        ;   Label: LAB_005b47e0
    MOV EBX,dword ptr [ESI + 0x28]      ; 005b47e3
    SUB EAX,EBX                         ; 005b47e6
    IMUL dword ptr [ECX + 0x2d02584]    ; 005b47e8 | g_ReciprocalLookupTable[1]
    MOV dword ptr [0x006821ec],EBX      ; 005b47ee | g_StartDepthW
    MOV dword ptr [0x00682618],EDX      ; 005b47f4 | g_DeltaDepthW
    MOV EAX,[0x006821ec]                ; 005b47fa | g_StartDepthW
    MOV EBX,dword ptr [0x00682618]      ; 005b47ff | g_DeltaDepthW
    MOV ESI,dword ptr [0x0068220c]      ; 005b4805 | g_CurrentZBufferPtr
    MOV ECX,dword ptr [0x006821a4]      ; 005b480b | g_ScanlinePixelCount
    MOV dword ptr [ESI],EAX             ; 005b4811
        ;   Label: LAB_005b4811
    ADD EAX,EBX                         ; 005b4813
    ADD ESI,0x4                         ; 005b4815
    SUB ECX,0x4                         ; 005b4818
    JG 0x005b4811                       ; 005b481b
        ;   XREF to: 005b4811 (CONDITIONAL_JUMP)  ; LAB_005b4811
    POP EBP                             ; 005b481d
    EMMS                                ; 005b481e
    POP EDI                             ; 005b4820
    POP ESI                             ; 005b4821
    RET                                 ; 005b4822

