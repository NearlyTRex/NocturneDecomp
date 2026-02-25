; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_renderParticles_FUN_005ef190(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderScene_FUN_0056c1a0 at 0056c567
;
; Referenced Globals:
;   float FLOAT_00665700 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   SMRGLTextureBasic g_RainDropTexture
;   SMRGLTextureBasic g_RainSplashTexture
;   SMRGLTextureBasic g_SnowflakeTexture
;   undefined4 DAT_00780000
;   undefined4 DAT_00f80000
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;   CVector3f[200] g_WeatherParticlePositions
;   undefined4 DAT_03f95dfc
;   undefined4 DAT_03f95e00
;   undefined4 DAT_03f95e04
;   undefined4 DAT_03f95e08
;   ... and 4 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;   wincore_windll.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ef190
        ;   Label: core_weather.cpp_CWeather_renderParticles_FUN_005ef190
    PUSH EDI                            ; 005ef191
    PUSH EBP                            ; 005ef192
    SUB ESP,0xe4                        ; 005ef193
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ef199
    CMP dword ptr [EAX],0x0             ; 005ef1a0
    JNZ 0x005ef1af                      ; 005ef1a3
        ;   XREF to: 005ef1af (CONDITIONAL_JUMP)  ; LAB_005ef1af
    ADD ESP,0xe4                        ; 005ef1a5
    POP EBP                             ; 005ef1ab
    POP EDI                             ; 005ef1ac
    POP ESI                             ; 005ef1ad
    RET                                 ; 005ef1ae
    LEA EAX,[ESP + 0x40]                ; 005ef1af
        ;   Label: LAB_005ef1af
    PUSH EAX                            ; 005ef1b3
    MOV ECX,dword ptr [0x006703ec]      ; 005ef1b4 | g_CDemonRendererPtr2
    PUSH ECX                            ; 005ef1ba | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 005ef1bb
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 005ef1c0
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ef1c3
    CMP dword ptr [EAX],0x1             ; 005ef1ca
    JNZ 0x005ef1d5                      ; 005ef1cd
        ;   XREF to: 005ef1d5 (CONDITIONAL_JUMP)  ; LAB_005ef1d5
    XOR ESI,ESI                         ; 005ef1cf
    MOV dword ptr [ESP + 0x40],ESI      ; 005ef1d1
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ef1d5
        ;   Label: LAB_005ef1d5
    CMP dword ptr [EAX],0x1             ; 005ef1dc
    JNZ 0x005ef6bb                      ; 005ef1df
        ;   XREF to: 005ef6bb (CONDITIONAL_JUMP)  ; LAB_005ef6bb
    PUSH 0x684900                       ; 005ef1e5 | g_RainDropTexture
    MOV EAX,[0x006703ec]                ; 005ef1ea | g_CDemonRendererPtr2
    PUSH EAX                            ; 005ef1ef | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005ef1f0
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x006703ec]                ; 005ef1f5 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 005ef1fa | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x80000  ; 005ef1fc
    MOV EDX,dword ptr [EAX]             ; 005ef203 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0x80000  ; 005ef205
    MOV EDX,dword ptr [EAX]             ; 005ef20c | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x48],0x780000 ; 005ef20e | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005ef215 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x4c],0x80000  ; 005ef217
    MOV EDX,dword ptr [EAX]             ; 005ef21e | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],0x780000 ; 005ef220 | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005ef227 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005ef229 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 005ef230 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa8],0x80000  ; 005ef232
    MOV EAX,dword ptr [EAX]             ; 005ef23c | g_CDemonRendererInstance
    ADD ESP,0x8                         ; 005ef23e
    MOV dword ptr [EAX + 0xac],0xf80000 ; 005ef241 | DAT_00f80000
    PUSH 0x0                            ; 005ef24b
        ;   Label: LAB_005ef24b
    PUSH 0x0                            ; 005ef24d
    PUSH 0x0                            ; 005ef24f
    PUSH 0x0                            ; 005ef251
    PUSH 0x0                            ; 005ef253
    MOV EDX,dword ptr [0x006810c8]      ; 005ef255 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 005ef25b | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380 ; 005ef25c
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 005ef261
    MOV ECX,0x3dcccccd                  ; 005ef264
    MOV EAX,dword ptr [ESP + 0xf4]      ; 005ef269
    MOV dword ptr [ESP + 0xdc],ECX      ; 005ef270
    MOV ESI,dword ptr [EAX]             ; 005ef277
    MOV dword ptr [ESP + 0xe0],ECX      ; 005ef279
    CMP ESI,0x1                         ; 005ef280
    JZ 0x005ef6d4                       ; 005ef283
        ;   XREF to: 005ef6d4 (CONDITIONAL_JUMP)  ; LAB_005ef6d4
    PUSH EBX                            ; 005ef289
        ;   Label: LAB_005ef289
    MOV EAX,0x4                         ; 005ef28a
    MOV EBP,0x1                         ; 005ef28f
    MOV ECX,dword ptr [0x006703ec]      ; 005ef294 | g_CDemonRendererPtr2
    XOR EDX,EDX                         ; 005ef29a
    MOV dword ptr [ESP + 0x8],EAX       ; 005ef29c
    MOV dword ptr [ESP + 0x18],EDX      ; 005ef2a0
    MOV dword ptr [ESP + 0x14],EDX      ; 005ef2a4
    MOV dword ptr [ESP + 0x10],EDX      ; 005ef2a8
    MOV dword ptr [ESP + 0xc],EDX       ; 005ef2ac
    MOV dword ptr [ESP + 0x1c],EDX      ; 005ef2b0
    MOV dword ptr [ESP + 0x20],EBP      ; 005ef2b4
    PUSH EBP                            ; 005ef2b8
    MOV EAX,0x2                         ; 005ef2b9
    MOV EDX,0x3                         ; 005ef2be
    PUSH ECX                            ; 005ef2c3 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ef2c4
    MOV dword ptr [ESP + 0x30],EDX      ; 005ef2c8
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005ef2cc
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005ef2d1
    PUSH 0x8000                         ; 005ef2d4
    MOV EBX,dword ptr [0x006703ec]      ; 005ef2d9 | g_CDemonRendererPtr2
    PUSH EBX                            ; 005ef2df | g_CDemonRendererInstance
    MOV ESI,0x3f95df8                   ; 005ef2e0 | g_WeatherParticlePositions
    XOR EDI,EDI                         ; 005ef2e5
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 005ef2e7
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005ef2ec
    MOV EBP,dword ptr [0x006703ec]      ; 005ef2ef | g_CDemonRendererPtr2
        ;   Label: LAB_005ef2ef
    LEA EBX,[ESP + 0xa4]                ; 005ef2f5
    MOV EAX,ESI                         ; 005ef2fc
    MOV EBP,dword ptr [EBP]             ; 005ef2fe | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 005ef301 | g_WeatherParticlePositions | DAT_03f95e04
    FMUL float ptr [0x00665700]         ; 005ef303 | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef309
    FLD float ptr [EAX + 0x4]           ; 005ef30b | DAT_03f95dfc | DAT_03f95e08
    FMUL float ptr [0x00665700]         ; 005ef30e | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef314
    FLD float ptr [EAX + 0x8]           ; 005ef317 | DAT_03f95e00 | DAT_03f95e0c
    FMUL float ptr [0x00665700]         ; 005ef31a | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef320
    LEA EAX,[ESP + 0xa4]                ; 005ef323
    PUSH EAX                            ; 005ef32a
    PUSH EBP                            ; 005ef32b
    CALL wincore_windll.cpp_transformPoint_FUN_005b5a25 ; 005ef32c
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef331
    PUSH EBP                            ; 005ef334
    MOV EBP,dword ptr [0x006703ec]      ; 005ef335 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005ef33b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 ; 005ef33c
        ;   XREF to: 0048dc50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 005ef341
    TEST EAX,EAX                        ; 005ef344
    JZ 0x005ef5f4                       ; 005ef346
        ;   XREF to: 005ef5f4 (CONDITIONAL_JUMP)  ; LAB_005ef5f4
    PUSH ESI                            ; 005ef34c | g_WeatherParticlePositions
    MOV EAX,[0x006703ec]                ; 005ef34d | g_CDemonRendererPtr2
    PUSH EAX                            ; 005ef352 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005ef353
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005ef358
    PUSH 0x0                            ; 005ef35b
    LEA EAX,[ESP + 0x48]                ; 005ef35d
    PUSH EAX                            ; 005ef361
    MOV EDX,dword ptr [0x006703ec]      ; 005ef362 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005ef368 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005ef369
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 005ef36e
    LEA EBX,[ESP + 0x74]                ; 005ef371
    MOV EAX,ESI                         ; 005ef375
    FLD float ptr [EAX]                 ; 005ef377 | g_WeatherParticlePositions
    FMUL float ptr [0x00665700]         ; 005ef379 | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef37f
    FLD float ptr [EAX + 0x4]           ; 005ef381 | DAT_03f95dfc
    FMUL float ptr [0x00665700]         ; 005ef384 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef38a
    FLD float ptr [EAX + 0x8]           ; 005ef38d | DAT_03f95e00
    FMUL float ptr [0x00665700]         ; 005ef390 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef396
    PUSH 0x4                            ; 005ef399
    PUSH 0x0                            ; 005ef39b
    PUSH 0x0                            ; 005ef39d
    LEA EAX,[ESP + 0x80]                ; 005ef39f
    PUSH EAX                            ; 005ef3a6
    MOV ECX,dword ptr [0x006810c8]      ; 005ef3a7 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH ECX                            ; 005ef3ad | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110 ; 005ef3ae
        ;   XREF to: 0056e110 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 005ef3b3
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ef3b6
    CMP dword ptr [EAX],0x2             ; 005ef3bd
    JNZ 0x005ef455                      ; 005ef3c0
        ;   XREF to: 005ef455 (CONDITIONAL_JUMP)  ; LAB_005ef455
    MOV EAX,EDI                         ; 005ef3c6
    AND EAX,0x3                         ; 005ef3c8
    SHL EAX,0x16                        ; 005ef3cb
    MOV EBP,EDI                         ; 005ef3ce
    MOV dword ptr [ESP + 0xd4],EAX      ; 005ef3d0
    AND EBP,0xc                         ; 005ef3d7
    MOV EDX,dword ptr [ESP + 0xd4]      ; 005ef3da
    MOV EAX,[0x006703ec]                ; 005ef3e1 | g_CDemonRendererPtr2
    SAR EBP,0x2                         ; 005ef3e6
    ADD EDX,0x80000                     ; 005ef3e9
    MOV EBX,dword ptr [EAX]             ; 005ef3ef | g_CDemonRendererInstance
    SHL EBP,0x16                        ; 005ef3f1
    MOV dword ptr [EBX + 0x18],EDX      ; 005ef3f4
    LEA ECX,[EBP + 0x80000]             ; 005ef3f7
    MOV EBX,dword ptr [EAX]             ; 005ef3fd | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0xdc],ECX      ; 005ef3ff
    MOV dword ptr [EBX + 0x1c],ECX      ; 005ef406
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005ef409
    MOV EBX,dword ptr [EAX]             ; 005ef410 | g_CDemonRendererInstance
    ADD ECX,0x380000                    ; 005ef412
    MOV dword ptr [EBX + 0x48],ECX      ; 005ef418
    MOV EBX,dword ptr [EAX]             ; 005ef41b | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0xd8],ECX      ; 005ef41d
    MOV ECX,dword ptr [ESP + 0xdc]      ; 005ef424
    MOV dword ptr [EBX + 0x4c],ECX      ; 005ef42b
    MOV EBX,dword ptr [EAX]             ; 005ef42e | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0xd8]      ; 005ef430
    MOV dword ptr [EBX + 0x78],ECX      ; 005ef437
    MOV EBX,dword ptr [EAX]             ; 005ef43a | g_CDemonRendererInstance
    ADD EBP,0x380000                    ; 005ef43c
    MOV dword ptr [EBX + 0x7c],EBP      ; 005ef442
    MOV EBX,dword ptr [EAX]             ; 005ef445 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0xa8],EDX      ; 005ef447
    MOV EAX,dword ptr [EAX]             ; 005ef44d | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xac],EBP      ; 005ef44f
    FLD float ptr [ESP + 0xe4]          ; 005ef455
        ;   Label: LAB_005ef455
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005ef45c
    LEA EBX,[ESP + 0x68]                ; 005ef463
    MOV EDX,dword ptr [0x006703ec]      ; 005ef467 | g_CDemonRendererPtr2
    FCHS                                ; 005ef46d
    XOR EBP,EBP                         ; 005ef46f
    FSTP float ptr [ESP + 0xc0]         ; 005ef471
    MOV dword ptr [ESP + 0xbc],EAX      ; 005ef478
    LEA EAX,[ESP + 0xbc]                ; 005ef47f
    MOV dword ptr [ESP + 0xc4],EBP      ; 005ef486
    FLD float ptr [EAX]                 ; 005ef48d
    FMUL float ptr [0x00665700]         ; 005ef48f | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef495
    FLD float ptr [EAX + 0x4]           ; 005ef497
    FMUL float ptr [0x00665700]         ; 005ef49a | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef4a0
    FLD float ptr [EAX + 0x8]           ; 005ef4a3
    FMUL float ptr [0x00665700]         ; 005ef4a6 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef4ac
    LEA EAX,[ESP + 0x68]                ; 005ef4af
    PUSH EAX                            ; 005ef4b3
    MOV EAX,dword ptr [EDX]             ; 005ef4b4 | g_CDemonRendererInstance
    PUSH EAX                            ; 005ef4b6
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef4b7
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef4bc
    MOV AH,byte ptr [ESP + 0xbf]        ; 005ef4bf
    XOR AH,0x80                         ; 005ef4c6
    LEA EBX,[ESP + 0x8c]                ; 005ef4c9
    MOV byte ptr [ESP + 0xbf],AH        ; 005ef4d0
    LEA EAX,[ESP + 0xbc]                ; 005ef4d7
    MOV EDX,dword ptr [0x006703ec]      ; 005ef4de | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ef4e4
    FMUL float ptr [0x00665700]         ; 005ef4e6 | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef4ec
    FLD float ptr [EAX + 0x4]           ; 005ef4ee
    FMUL float ptr [0x00665700]         ; 005ef4f1 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef4f7
    FLD float ptr [EAX + 0x8]           ; 005ef4fa
    FMUL float ptr [0x00665700]         ; 005ef4fd | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef503
    LEA EAX,[ESP + 0x8c]                ; 005ef506
    PUSH EAX                            ; 005ef50d
    MOV EAX,dword ptr [EDX]             ; 005ef50e | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005ef510
    PUSH EAX                            ; 005ef513
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef514
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef519
    MOV DL,byte ptr [ESP + 0xc3]        ; 005ef51c
    LEA EBX,[ESP + 0x98]                ; 005ef523
    XOR DL,0x80                         ; 005ef52a
    LEA EAX,[ESP + 0xbc]                ; 005ef52d
    MOV byte ptr [ESP + 0xc3],DL        ; 005ef534
    MOV EDX,dword ptr [0x006703ec]      ; 005ef53b | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ef541
    FMUL float ptr [0x00665700]         ; 005ef543 | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef549
    FLD float ptr [EAX + 0x4]           ; 005ef54b
    FMUL float ptr [0x00665700]         ; 005ef54e | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef554
    FLD float ptr [EAX + 0x8]           ; 005ef557
    FMUL float ptr [0x00665700]         ; 005ef55a | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef560
    LEA EAX,[ESP + 0x98]                ; 005ef563
    PUSH EAX                            ; 005ef56a
    MOV EAX,dword ptr [EDX]             ; 005ef56b | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005ef56d
    PUSH EAX                            ; 005ef570
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef571
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef576
    MOV DH,byte ptr [ESP + 0xbf]        ; 005ef579
    LEA EBX,[ESP + 0x5c]                ; 005ef580
    XOR DH,0x80                         ; 005ef584
    LEA EAX,[ESP + 0xbc]                ; 005ef587
    MOV byte ptr [ESP + 0xbf],DH        ; 005ef58e
    MOV EDX,dword ptr [0x006703ec]      ; 005ef595 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ef59b
    FMUL float ptr [0x00665700]         ; 005ef59d | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef5a3
    FLD float ptr [EAX + 0x4]           ; 005ef5a5
    FMUL float ptr [0x00665700]         ; 005ef5a8 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef5ae
    FLD float ptr [EAX + 0x8]           ; 005ef5b1
    FMUL float ptr [0x00665700]         ; 005ef5b4 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef5ba
    LEA EAX,[ESP + 0x5c]                ; 005ef5bd
    PUSH EAX                            ; 005ef5c1
    MOV EAX,dword ptr [EDX]             ; 005ef5c2 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 005ef5c4
    PUSH EAX                            ; 005ef5c9
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef5ca
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef5cf
    LEA EAX,[ESP + 0x4]                 ; 005ef5d2
    PUSH EAX                            ; 005ef5d6
    MOV EAX,[0x006703ec]                ; 005ef5d7 | g_CDemonRendererPtr2
    PUSH EAX                            ; 005ef5dc | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 005ef5dd
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005ef5e2
    MOV EDX,dword ptr [0x006703ec]      ; 005ef5e5 | g_CDemonRendererPtr2
    PUSH EDX                            ; 005ef5eb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005ef5ec
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    INC EDI                             ; 005ef5f4
        ;   Label: LAB_005ef5f4
    ADD ESI,0xc                         ; 005ef5f5
    CMP EDI,0xc8                        ; 005ef5f8
    JL 0x005ef2ef                       ; 005ef5fe
        ;   XREF to: 005ef2ef (CONDITIONAL_JUMP)  ; LAB_005ef2ef
    MOV EAX,dword ptr [ESP + 0xf8]      ; 005ef604
    CMP dword ptr [EAX],0x1             ; 005ef60b
    JNZ 0x005ef69f                      ; 005ef60e
        ;   XREF to: 005ef69f (CONDITIONAL_JUMP)  ; LAB_005ef69f
    PUSH 0x684918                       ; 005ef614 | g_RainSplashTexture
    MOV EBX,dword ptr [0x006703ec]      ; 005ef619 | g_CDemonRendererPtr2
    PUSH EBX                            ; 005ef61f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005ef620
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EAX,[0x006703ec]                ; 005ef625 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 005ef62a | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x80000  ; 005ef62c
    MOV EDX,dword ptr [EAX]             ; 005ef633 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],0x80000  ; 005ef635
    MOV EDX,dword ptr [EAX]             ; 005ef63c | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x48],0x780000 ; 005ef63e | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005ef645 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x4c],0x80000  ; 005ef647
    MOV EDX,dword ptr [EAX]             ; 005ef64e | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],0x780000 ; 005ef650 | DAT_00780000
    MOV EDX,dword ptr [EAX]             ; 005ef657 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 005ef659 | DAT_00f80000
    MOV EDX,dword ptr [EAX]             ; 005ef660 | g_CDemonRendererInstance
    MOV EDI,0x3f95df8                   ; 005ef662 | g_WeatherParticlePositions
    XOR ESI,ESI                         ; 005ef667
    MOV dword ptr [EDX + 0xa8],0x80000  ; 005ef669
    XOR EBP,EBP                         ; 005ef673
    MOV EAX,dword ptr [EAX]             ; 005ef675 | g_CDemonRendererInstance
    ADD EDI,0x4                         ; 005ef677
    ADD ESP,0x8                         ; 005ef67a
    MOV dword ptr [EAX + 0xac],0xf80000 ; 005ef67d | DAT_00f80000
    CMP byte ptr [ESI + 0x3f96a78],0x0  ; 005ef687 | g_WeatherParticleHitGround | DAT_03f96a79
        ;   Label: LAB_005ef687
    JNZ 0x005ef6f1                      ; 005ef68e
        ;   XREF to: 005ef6f1 (CONDITIONAL_JUMP)  ; LAB_005ef6f1
    ADD EDI,0xc                         ; 005ef690
        ;   Label: LAB_005ef690
    INC ESI                             ; 005ef693
    ADD EBP,0x4                         ; 005ef694
    CMP ESI,0xc8                        ; 005ef697
    JL 0x005ef687                       ; 005ef69d
        ;   XREF to: 005ef687 (CONDITIONAL_JUMP)  ; LAB_005ef687
    PUSH 0x0                            ; 005ef69f
        ;   Label: LAB_005ef69f
    MOV ESI,dword ptr [0x006703ec]      ; 005ef6a1 | g_CDemonRendererPtr2
    PUSH ESI                            ; 005ef6a7 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 005ef6a8
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005ef6ad
    POP EBX                             ; 005ef6b0
    ADD ESP,0xe4                        ; 005ef6b1
    POP EBP                             ; 005ef6b7
    POP EDI                             ; 005ef6b8
    POP ESI                             ; 005ef6b9
    RET                                 ; 005ef6ba
    PUSH 0x684930                       ; 005ef6bb | g_SnowflakeTexture
        ;   Label: LAB_005ef6bb
    MOV EBP,dword ptr [0x006703ec]      ; 005ef6c0 | g_CDemonRendererPtr2
    PUSH EBP                            ; 005ef6c6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 005ef6c7
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005ef6cc
    JMP 0x005ef24b                      ; 005ef6cf
        ;   XREF to: 005ef24b (UNCONDITIONAL_JUMP)  ; LAB_005ef24b
    MOV EBP,0xbecccccd                  ; 005ef6d4
        ;   Label: LAB_005ef6d4
    MOV EDI,0x3d4ccccd                  ; 005ef6d9
    MOV dword ptr [ESP + 0xe0],EBP      ; 005ef6de
    MOV dword ptr [ESP + 0xdc],EDI      ; 005ef6e5
    JMP 0x005ef289                      ; 005ef6ec
        ;   XREF to: 005ef289 (UNCONDITIONAL_JUMP)  ; LAB_005ef289
    IMUL EAX,ESI,0xc                    ; 005ef6f1
        ;   Label: LAB_005ef6f1
    ADD EAX,0x3f95df8                   ; 005ef6f4 | g_WeatherParticlePositions
    MOV EAX,dword ptr [EAX]             ; 005ef6f9 | DAT_03f95e04
    MOV dword ptr [ESP + 0xc8],EAX      ; 005ef6fb
    MOV EAX,dword ptr [EDI]             ; 005ef702 | DAT_03f95e08
    MOV dword ptr [ESP + 0xcc],EAX      ; 005ef704
    MOV EAX,dword ptr [EDI + 0x4]       ; 005ef70b | DAT_03f95e0c
    MOV dword ptr [ESP + 0xd0],EAX      ; 005ef70e
    MOV EAX,dword ptr [EBP + 0x3f96758] ; 005ef715 | DAT_03f9675c
    MOV dword ptr [ESP + 0xcc],EAX      ; 005ef71b
    LEA EAX,[ESP + 0xc8]                ; 005ef722
    PUSH EAX                            ; 005ef729
    MOV EAX,[0x006703ec]                ; 005ef72a | g_CDemonRendererPtr2
    PUSH EAX                            ; 005ef72f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005ef730
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005ef735
    PUSH 0x0                            ; 005ef738
    LEA EAX,[ESP + 0x48]                ; 005ef73a
    PUSH EAX                            ; 005ef73e
    MOV EDX,dword ptr [0x006703ec]      ; 005ef73f | g_CDemonRendererPtr2
    PUSH EDX                            ; 005ef745 | g_CDemonRendererInstance
    XOR EBX,EBX                         ; 005ef746
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 005ef748
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV ECX,0x3e4ccccd                  ; 005ef74d
    LEA EAX,[ESP + 0x44]                ; 005ef752
    ADD ESP,0xc                         ; 005ef756
    MOV EDX,dword ptr [0x006703ec]      ; 005ef759 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x3c],EBX      ; 005ef75f
    MOV dword ptr [ESP + 0x40],EBX      ; 005ef763
    LEA EBX,[ESP + 0x80]                ; 005ef767
    MOV dword ptr [ESP + 0x38],ECX      ; 005ef76e
    FLD float ptr [EAX]                 ; 005ef772
    FMUL float ptr [0x00665700]         ; 005ef774 | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef77a
    FLD float ptr [EAX + 0x4]           ; 005ef77c
    FMUL float ptr [0x00665700]         ; 005ef77f | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef785
    FLD float ptr [EAX + 0x8]           ; 005ef788
    FMUL float ptr [0x00665700]         ; 005ef78b | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef791
    LEA EAX,[ESP + 0x80]                ; 005ef794
    PUSH EAX                            ; 005ef79b
    MOV EAX,dword ptr [EDX]             ; 005ef79c | g_CDemonRendererInstance
    PUSH EAX                            ; 005ef79e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef79f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef7a4
    MOV BH,byte ptr [ESP + 0x3b]        ; 005ef7a7
    XOR BH,0x80                         ; 005ef7ab
    LEA EAX,[ESP + 0x38]                ; 005ef7ae
    MOV byte ptr [ESP + 0x3b],BH        ; 005ef7b2
    LEA EBX,[ESP + 0x50]                ; 005ef7b6
    MOV EDX,dword ptr [0x006703ec]      ; 005ef7ba | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ef7c0
    FMUL float ptr [0x00665700]         ; 005ef7c2 | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef7c8
    FLD float ptr [EAX + 0x4]           ; 005ef7ca
    FMUL float ptr [0x00665700]         ; 005ef7cd | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef7d3
    FLD float ptr [EAX + 0x8]           ; 005ef7d6
    FMUL float ptr [0x00665700]         ; 005ef7d9 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef7df
    LEA EAX,[ESP + 0x50]                ; 005ef7e2
    PUSH EAX                            ; 005ef7e6
    MOV EAX,dword ptr [EDX]             ; 005ef7e7 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005ef7e9
    PUSH EAX                            ; 005ef7ec
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef7ed
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3ecccccd                  ; 005ef7f2
    LEA EBX,[ESP + 0x34]                ; 005ef7f7
    ADD ESP,0x8                         ; 005ef7fb
    LEA EAX,[ESP + 0x38]                ; 005ef7fe
    MOV dword ptr [ESP + 0x3c],EDX      ; 005ef802
    MOV EDX,dword ptr [0x006703ec]      ; 005ef806 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005ef80c
    FMUL float ptr [0x00665700]         ; 005ef80e | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef814
    FLD float ptr [EAX + 0x4]           ; 005ef816
    FMUL float ptr [0x00665700]         ; 005ef819 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef81f
    FLD float ptr [EAX + 0x8]           ; 005ef822
    FMUL float ptr [0x00665700]         ; 005ef825 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef82b
    LEA EAX,[ESP + 0x2c]                ; 005ef82e
    PUSH EAX                            ; 005ef832
    MOV EAX,dword ptr [EDX]             ; 005ef833 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005ef835
    PUSH EAX                            ; 005ef838
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef839
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef83e
    LEA EBX,[ESP + 0xb0]                ; 005ef841
    MOV CL,byte ptr [ESP + 0x3b]        ; 005ef848
    LEA EAX,[ESP + 0x38]                ; 005ef84c
    XOR CL,0x80                         ; 005ef850
    MOV EDX,dword ptr [0x006703ec]      ; 005ef853 | g_CDemonRendererPtr2
    MOV byte ptr [ESP + 0x3b],CL        ; 005ef859
    FLD float ptr [EAX]                 ; 005ef85d
    FMUL float ptr [0x00665700]         ; 005ef85f | FLOAT_00665700
    FISTP dword ptr [EBX]               ; 005ef865
    FLD float ptr [EAX + 0x4]           ; 005ef867
    FMUL float ptr [0x00665700]         ; 005ef86a | FLOAT_00665700
    FISTP dword ptr [EBX + 0x4]         ; 005ef870
    FLD float ptr [EAX + 0x8]           ; 005ef873
    FMUL float ptr [0x00665700]         ; 005ef876 | FLOAT_00665700
    FISTP dword ptr [EBX + 0x8]         ; 005ef87c
    LEA EAX,[ESP + 0xb0]                ; 005ef87f
    PUSH EAX                            ; 005ef886
    MOV EAX,dword ptr [EDX]             ; 005ef887 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 005ef889
    PUSH EAX                            ; 005ef88e
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005ef88f
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005ef894
    LEA EAX,[ESP + 0x4]                 ; 005ef897
    PUSH EAX                            ; 005ef89b
    MOV ECX,dword ptr [0x006703ec]      ; 005ef89c | g_CDemonRendererPtr2
    PUSH ECX                            ; 005ef8a2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0 ; 005ef8a3
        ;   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005ef8a8
    MOV EBX,dword ptr [0x006703ec]      ; 005ef8ab | g_CDemonRendererPtr2
    PUSH EBX                            ; 005ef8b1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 005ef8b2
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

