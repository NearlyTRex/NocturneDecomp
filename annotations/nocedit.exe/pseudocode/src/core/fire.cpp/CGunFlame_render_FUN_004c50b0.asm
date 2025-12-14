; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CGunFlame_render_FUN_004c50b0(CGunFlame * this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xd8]:8  local_d8
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined1       Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined1       Stack[-0x90]:1  local_90
; undefined1       Stack[-0x84]:1  local_84
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004c7180 at 004c73e7
;
; Referenced Globals:
;   double DOUBLE_00629f63 = 4
;   double DOUBLE_00629f6b = 0.400000000000000
;   double DOUBLE_00629f73 = 2.5
;   double DOUBLE_00629f7b = 2
;   float FLOAT_00629f83 = 128
;   double DOUBLE_00629f8b = 0.00390625
;   double DOUBLE_00629f93 = 128
;   float FLOAT_00629f9b = 32768
;   float FLOAT_00629f9f = 2
;   float FLOAT_00629fa3 = 255
;   float FLOAT_00629fa7 = 200
;   float FLOAT_00629fab = 256
;   float FLOAT_00629faf = 150
;   float FLOAT_00629fb3 = 50
;   float FLOAT_0065dca8 = 256
;   ... and 5 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c50b0
        ;   Label: core_fire.cpp_CGunFlame_render_FUN_004c50b0
    PUSH ESI                            ; 004c50b1
    PUSH EDI                            ; 004c50b2
    PUSH EBP                            ; 004c50b3
    MOV EBP,ESP                         ; 004c50b4
    SUB ESP,0xc4                        ; 004c50b6
    AND ESP,0xfffffff8                  ; 004c50bc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c50bf
    FLD float ptr [ESI]                 ; 004c50c2
    FLDZ                                ; 004c50c4
    FCOMPP                              ; 004c50c6
    FNSTSW AX                           ; 004c50c8
    SAHF                                ; 004c50ca
    JC 0x004c50d4                       ; 004c50cb
        ;   XREF to: 004c50d4 (CONDITIONAL_JUMP)  ; LAB_004c50d4
    MOV ESP,EBP                         ; 004c50cd
    POP EBP                             ; 004c50cf
    POP EDI                             ; 004c50d0
    POP ESI                             ; 004c50d1
    POP EBX                             ; 004c50d2
    RET                                 ; 004c50d3
    FLD float ptr [ESI + 0x1c]          ; 004c50d4
        ;   Label: LAB_004c50d4
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c50d7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xb0]        ; 004c50dc
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004c50e3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c50ea
    SUB EAX,EDX                         ; 004c50f1
    SHL EAX,0x3                         ; 004c50f3
    ADD EAX,0x2d13cd4                   ; 004c50f6 | g_GunFlameTextures
    PUSH EAX                            ; 004c50fb
    MOV EDX,dword ptr [0x006703ec]      ; 004c50fc | g_CDemonRendererPtr
    PUSH EDX                            ; 004c5102 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c5103
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004c5108
    LEA EBX,[ESI + 0x4]                 ; 004c510b
    PUSH EBX                            ; 004c510e
    MOV ECX,dword ptr [0x006703ec]      ; 004c510f | g_CDemonRendererPtr
    PUSH ECX                            ; 004c5115 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c5116
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c511b
    LEA EAX,[ESP + 0x54]                ; 004c511e
    PUSH EAX                            ; 004c5122
    MOV EDI,dword ptr [0x006703ec]      ; 004c5123 | g_CDemonRendererPtr
    PUSH EDI                            ; 004c5129 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 004c512a
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
    ADD ESP,0x8                         ; 004c512f
    PUSH 0x0                            ; 004c5132
    LEA EAX,[ESP + 0x58]                ; 004c5134
    PUSH EAX                            ; 004c5138
    MOV EAX,[0x006703ec]                ; 004c5139 | g_CDemonRendererPtr
    PUSH EAX                            ; 004c513e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c513f
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    FLD float ptr [0x0065dcc4]          ; 004c5144 | FLOAT_0065dcc4
    FLD ST0                             ; 004c514a
    FSUB float ptr [ESI]                ; 004c514c
    FDIVRP                              ; 004c514e
    ADD ESP,0xc                         ; 004c5150
    FST float ptr [ESP + 0x10]          ; 004c5153
    FST double ptr [ESP]                ; 004c5157
    FMUL double ptr [0x00629f63]        ; 004c515a | DOUBLE_00629f63
    FLD double ptr [0x00629f6b]         ; 004c5160 | DOUBLE_00629f6b
    FXCH                                ; 004c5166
    FADD ST0,ST1                        ; 004c5168
    FSTP float ptr [ESP + 0xc]          ; 004c516a
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c516e
    FLD double ptr [ESP]                ; 004c5172
    MOV dword ptr [ESP + 0x8],EAX       ; 004c5175
    FCOMPP                              ; 004c5179
    FNSTSW AX                           ; 004c517b
    SAHF                                ; 004c517d
    JNC 0x004c522c                      ; 004c517e
        ;   XREF to: 004c522c (CONDITIONAL_JUMP)  ; LAB_004c522c
    LEA EAX,[ESP + 0x48]                ; 004c5184
    PUSH EAX                            ; 004c5188
    MOV EDX,dword ptr [0x006703ec]      ; 004c5189 | g_CDemonRendererPtr
    PUSH EDX                            ; 004c518f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 004c5190
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)  ; float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
    FLD float ptr [EAX]                 ; 004c5195
    FSUB float ptr [EBX]                ; 004c5197
    ADD ESP,0x8                         ; 004c5199
    FSTP float ptr [ESP + 0x3c]         ; 004c519c
    FLD float ptr [EAX + 0x4]           ; 004c51a0
    FSUB float ptr [EBX + 0x4]          ; 004c51a3
    FST float ptr [ESP + 0x40]          ; 004c51a6
    FMUL float ptr [ESP + 0x40]         ; 004c51aa
    FLD float ptr [ESP + 0x3c]          ; 004c51ae
    FMUL ST0                            ; 004c51b2
    FLD float ptr [EAX + 0x8]           ; 004c51b4
    FSUB float ptr [EBX + 0x8]          ; 004c51b7
    FXCH                                ; 004c51ba
    FADDP ST2,ST0                       ; 004c51bc
    FST float ptr [ESP + 0x44]          ; 004c51be
    FMUL float ptr [ESP + 0x44]         ; 004c51c2
    FADDP                               ; 004c51c6
    FSQRT                               ; 004c51c8
    LEA EDX,[ESI + 0x10]                ; 004c51ca
    FLD float ptr [ESP + 0x40]          ; 004c51cd
    FMUL float ptr [EDX + 0x4]          ; 004c51d1
    FLD float ptr [ESP + 0x3c]          ; 004c51d4
    FMUL float ptr [EDX]                ; 004c51d8
    FADDP                               ; 004c51da
    FLD float ptr [ESP + 0x44]          ; 004c51dc
    FMUL float ptr [EDX + 0x8]          ; 004c51e0
    FADDP                               ; 004c51e3
    FABS                                ; 004c51e5
    FLD float ptr [EDX + 0x4]           ; 004c51e7
    FMUL ST0                            ; 004c51ea
    FLD float ptr [EDX]                 ; 004c51ec
    FMUL ST0                            ; 004c51ee
    FADDP                               ; 004c51f0
    FLD float ptr [EDX + 0x8]           ; 004c51f2
    FMUL ST0                            ; 004c51f5
    FADDP                               ; 004c51f7
    FSQRT                               ; 004c51f9
    FMULP ST2                           ; 004c51fb
    FXCH                                ; 004c51fd
    FDIVR ST0,ST1                       ; 004c51ff
    FLD double ptr [ESP]                ; 004c5201
    FMUL double ptr [0x00629f73]        ; 004c5204 | DOUBLE_00629f73
    FLD1                                ; 004c520a
    FLD1                                ; 004c520c
    FSUBRP ST3,ST0                      ; 004c520e
    FSUBRP                              ; 004c5210
    FXCH                                ; 004c5212
    FST ST2                             ; 004c5214
    FMULP                               ; 004c5216
    FSTP ST1                            ; 004c5218
    FMUL double ptr [0x00629f7b]        ; 004c521a | DOUBLE_00629f7b
    FLD1                                ; 004c5220
    FADDP                               ; 004c5222
    FMUL float ptr [ESP + 0xc]          ; 004c5224
    FSTP float ptr [ESP + 0x8]          ; 004c5228
    FLD float ptr [0x00629f83]          ; 004c522c | FLOAT_00629f83
        ;   Label: LAB_004c522c
    FLD float ptr [ESP + 0xc]           ; 004c5232
    FMUL ST1                            ; 004c5236
    FLD float ptr [ESP + 0x8]           ; 004c5238
    FCHS                                ; 004c523c
    FMULP ST2                           ; 004c523e
    FMUL double ptr [0x00629f8b]        ; 004c5240 | DOUBLE_00629f8b
    FXCH                                ; 004c5246
    FMUL double ptr [0x00629f8b]        ; 004c5248 | DOUBLE_00629f8b
    LEA EBX,[ESP + 0x90]                ; 004c524e
    MOV EDX,dword ptr [0x006703ec]      ; 004c5255 | g_CDemonRendererPtr
    XOR ECX,ECX                         ; 004c525b
    FSTP float ptr [ESP + 0xb0]         ; 004c525d
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004c5264
    MOV dword ptr [ESP + 0x68],ECX      ; 004c526b
    MOV dword ptr [ESP + 0x60],EAX      ; 004c526f
    LEA EAX,[ESP + 0x60]                ; 004c5273
    FSTP float ptr [ESP + 0x64]         ; 004c5277
    FLD float ptr [EAX]                 ; 004c527b
    FMUL float ptr [0x0065dca8]         ; 004c527d | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5283
    FLD float ptr [EAX + 0x4]           ; 004c5285
    FMUL float ptr [0x0065dca8]         ; 004c5288 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c528e
    FLD float ptr [EAX + 0x8]           ; 004c5291
    FMUL float ptr [0x0065dca8]         ; 004c5294 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c529a
    LEA EAX,[ESP + 0x90]                ; 004c529d
    PUSH EAX                            ; 004c52a4
    MOV EAX,dword ptr [EDX]             ; 004c52a5 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c52a7
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c52a8
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c52ad
    FLD float ptr [ESP + 0x8]           ; 004c52b0
    FMUL double ptr [0x00629f93]        ; 004c52b4 | DOUBLE_00629f93
    FMUL double ptr [0x00629f8b]        ; 004c52ba | DOUBLE_00629f8b
    LEA EBX,[ESP + 0x84]                ; 004c52c0
    LEA EAX,[ESP + 0x60]                ; 004c52c7
    MOV EDX,dword ptr [0x006703ec]      ; 004c52cb | g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x60]         ; 004c52d1
    FLD float ptr [EAX]                 ; 004c52d5
    FMUL float ptr [0x0065dca8]         ; 004c52d7 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c52dd
    FLD float ptr [EAX + 0x4]           ; 004c52df
    FMUL float ptr [0x0065dca8]         ; 004c52e2 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c52e8
    FLD float ptr [EAX + 0x8]           ; 004c52eb
    FMUL float ptr [0x0065dca8]         ; 004c52ee | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c52f4
    LEA EAX,[ESP + 0x84]                ; 004c52f7
    PUSH EAX                            ; 004c52fe
    MOV EAX,dword ptr [EDX]             ; 004c52ff | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c5301
    PUSH EAX                            ; 004c5304
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c5305
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c530a
    FLD float ptr [ESP + 0xc]           ; 004c530d
    FCHS                                ; 004c5311
    FMUL double ptr [0x00629f93]        ; 004c5313 | DOUBLE_00629f93
    FMUL double ptr [0x00629f8b]        ; 004c5319 | DOUBLE_00629f8b
    LEA EBX,[ESP + 0x78]                ; 004c531f
    LEA EAX,[ESP + 0x60]                ; 004c5323
    MOV EDX,dword ptr [0x006703ec]      ; 004c5327 | g_CDemonRendererPtr
    FSTP float ptr [ESP + 0x64]         ; 004c532d
    FLD float ptr [EAX]                 ; 004c5331
    FMUL float ptr [0x0065dca8]         ; 004c5333 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5339
    FLD float ptr [EAX + 0x4]           ; 004c533b
    FMUL float ptr [0x0065dca8]         ; 004c533e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5344
    FLD float ptr [EAX + 0x8]           ; 004c5347
    FMUL float ptr [0x0065dca8]         ; 004c534a | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c5350
    LEA EAX,[ESP + 0x78]                ; 004c5353
    PUSH EAX                            ; 004c5357
    MOV EAX,dword ptr [EDX]             ; 004c5358 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c535a
    PUSH EAX                            ; 004c535d
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c535e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c5363
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004c5366
    LEA EBX,[ESP + 0x6c]                ; 004c536d
    MOV dword ptr [ESP + 0x60],EAX      ; 004c5371
    LEA EAX,[ESP + 0x60]                ; 004c5375
    MOV EDX,dword ptr [0x006703ec]      ; 004c5379 | g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 004c537f
    FMUL float ptr [0x0065dca8]         ; 004c5381 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c5387
    FLD float ptr [EAX + 0x4]           ; 004c5389
    FMUL float ptr [0x0065dca8]         ; 004c538c | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c5392
    FLD float ptr [EAX + 0x8]           ; 004c5395
    FMUL float ptr [0x0065dca8]         ; 004c5398 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c539e
    LEA EAX,[ESP + 0x6c]                ; 004c53a1
    PUSH EAX                            ; 004c53a5
    MOV EAX,dword ptr [EDX]             ; 004c53a6 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c53a8
    PUSH EAX                            ; 004c53ad
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004c53ae
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c53b3
    FLD1                                ; 004c53b6
    FLD float ptr [ESP + 0x10]          ; 004c53b8
    FLD float ptr [0x00629f9f]          ; 004c53bc | FLOAT_00629f9f
    FSUB ST0,ST1                        ; 004c53c2
    FXCH ST2                            ; 004c53c4
    FSUB ST0,ST1                        ; 004c53c6
    FXCH ST2                            ; 004c53c8
    FMULP                               ; 004c53ca
    FXCH                                ; 004c53cc
    FMUL float ptr [0x00629f9b]         ; 004c53ce | FLOAT_00629f9b
    FLD ST1                             ; 004c53d4
    FMUL float ptr [0x00629fa7]         ; 004c53d6 | FLOAT_00629fa7
    FLD ST2                             ; 004c53dc
    FMUL float ptr [0x00629faf]         ; 004c53de | FLOAT_00629faf
    MOV EDX,dword ptr [0x006703ec]      ; 004c53e4 | g_CDemonRendererPtr
    FLD ST3                             ; 004c53ea
    FMUL float ptr [0x00629fb3]         ; 004c53ec | FLOAT_00629fb3
    MOV EAX,dword ptr [EDX]             ; 004c53f2 | g_CDemonRendererInstance
    FLD1                                ; 004c53f4
    MOV dword ptr [EAX + 0x18],0x20000  ; 004c53f6
    FSUBRP ST5,ST0                      ; 004c53fd
    MOV EAX,dword ptr [EDX]             ; 004c53ff | g_CDemonRendererInstance
    FXCH ST4                            ; 004c5401
    FMUL float ptr [0x00629fa3]         ; 004c5403 | FLOAT_00629fa3
    MOV dword ptr [EAX + 0x1c],0x20000  ; 004c5409
    FXCH ST2                            ; 004c5410
    FADD ST0,ST2                        ; 004c5412
    MOV EAX,dword ptr [EDX]             ; 004c5414 | g_CDemonRendererInstance
    FLD float ptr [0x00629fab]          ; 004c5416 | FLOAT_00629fab
    FXCH                                ; 004c541c
    FMUL ST1                            ; 004c541e
    MOV dword ptr [EAX + 0x48],0xfe0000 ; 004c5420 | DAT_00fe0000
    FXCH ST2                            ; 004c5427
    FADD ST0,ST3                        ; 004c5429
    MOV EAX,dword ptr [EDX]             ; 004c542b | g_CDemonRendererInstance
    FMUL ST1                            ; 004c542d
    MOV dword ptr [EAX + 0x4c],0x20000  ; 004c542f
    FXCH ST5                            ; 004c5436
    FADDP ST3,ST0                       ; 004c5438
    MOV EAX,dword ptr [EDX]             ; 004c543a | g_CDemonRendererInstance
    FMULP ST2                           ; 004c543c
    MOV dword ptr [EAX + 0x78],0xfe0000 ; 004c543e | DAT_00fe0000
    MOV EAX,dword ptr [EDX]             ; 004c5445 | g_CDemonRendererInstance
    FXCH ST2                            ; 004c5447
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c5449
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV dword ptr [EAX + 0x7c],0xfe0000 ; 004c544e | DAT_00fe0000
    FXCH ST2                            ; 004c5455
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c5457
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [EDX]             ; 004c545c | g_CDemonRendererInstance
    FXCH ST3                            ; 004c545e
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c5460
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV dword ptr [EAX + 0xa8],0x20000  ; 004c5465
    FXCH                                ; 004c546f
    CALL crt_math.c_round_FUN_005fe6b0  ; 004c5471
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EAX,dword ptr [EDX]             ; 004c5476 | g_CDemonRendererInstance
    FXCH ST3                            ; 004c5478
    FISTP dword ptr [ESP + 0xb8]        ; 004c547a
    MOV dword ptr [EAX + 0xac],0xfe0000 ; 004c5481 | DAT_00fe0000
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004c548b
    MOV EBX,dword ptr [EDX]             ; 004c5492 | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0xb4]        ; 004c5494
    MOV dword ptr [EBX + 0x20],EAX      ; 004c549b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004c549e
    MOV EBX,dword ptr [EDX]             ; 004c54a5 | g_CDemonRendererInstance
    FXCH                                ; 004c54a7
    FISTP dword ptr [ESP + 0xc0]        ; 004c54a9
    MOV dword ptr [EBX + 0x24],EAX      ; 004c54b0
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c54b3
    MOV EBX,dword ptr [EDX]             ; 004c54ba | g_CDemonRendererInstance
    FISTP dword ptr [ESP + 0xbc]        ; 004c54bc
    MOV dword ptr [EBX + 0x28],EAX      ; 004c54c3
    MOV EBX,dword ptr [EDX]             ; 004c54c6 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c54c8
    MOV dword ptr [EBX + 0x2c],EAX      ; 004c54cf
    MOV EBX,dword ptr [EDX]             ; 004c54d2 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004c54d4
    MOV dword ptr [EBX + 0x50],EAX      ; 004c54db
    MOV EBX,dword ptr [EDX]             ; 004c54de | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004c54e0
    MOV dword ptr [EBX + 0x54],EAX      ; 004c54e7
    MOV EBX,dword ptr [EDX]             ; 004c54ea | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c54ec
    MOV dword ptr [EBX + 0x58],EAX      ; 004c54f3
    MOV EBX,dword ptr [EDX]             ; 004c54f6 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c54f8
    MOV dword ptr [EBX + 0x5c],EAX      ; 004c54ff
    MOV EBX,dword ptr [EDX]             ; 004c5502 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004c5504
    MOV dword ptr [EBX + 0x80],EAX      ; 004c550b
    MOV EBX,dword ptr [EDX]             ; 004c5511 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004c5513
    MOV dword ptr [EBX + 0x84],EAX      ; 004c551a
    MOV EBX,dword ptr [EDX]             ; 004c5520 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c5522
    MOV dword ptr [EBX + 0x88],EAX      ; 004c5529
    MOV EBX,dword ptr [EDX]             ; 004c552f | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c5531
    MOV dword ptr [EBX + 0x8c],EAX      ; 004c5538
    MOV EBX,dword ptr [EDX]             ; 004c553e | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004c5540
    MOV dword ptr [EBX + 0xb0],EAX      ; 004c5547
    MOV EBX,dword ptr [EDX]             ; 004c554d | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004c554f
    MOV dword ptr [EBX + 0xb4],EAX      ; 004c5556
    MOV EBX,dword ptr [EDX]             ; 004c555c | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c555e
    MOV dword ptr [EBX + 0xb8],EAX      ; 004c5565
    MOV EDI,0x2                         ; 004c556b
    MOV EBX,dword ptr [EDX]             ; 004c5570 | g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004c5572
    XOR ESI,ESI                         ; 004c5579
    MOV dword ptr [EBX + 0xbc],EAX      ; 004c557b
    MOV EBX,0x4                         ; 004c5581
    MOV dword ptr [ESP + 0x28],ESI      ; 004c5586
    MOV dword ptr [ESP + 0x24],ESI      ; 004c558a
    MOV dword ptr [ESP + 0x20],ESI      ; 004c558e
    MOV dword ptr [ESP + 0x1c],ESI      ; 004c5592
    MOV dword ptr [ESP + 0x2c],ESI      ; 004c5596
    MOV ESI,0x1                         ; 004c559a
    MOV EAX,0x3                         ; 004c559f
    PUSH ESI                            ; 004c55a4
    MOV dword ptr [ESP + 0x38],EDI      ; 004c55a5
    MOV dword ptr [ESP + 0x1c],EBX      ; 004c55a9
    PUSH EDX                            ; 004c55ad | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x40],EAX      ; 004c55ae
    MOV dword ptr [ESP + 0x38],ESI      ; 004c55b2
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c55b6
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c55bb
    LEA EAX,[ESP + 0x14]                ; 004c55be
    PUSH EAX                            ; 004c55c2
    MOV EDX,dword ptr [0x006703ec]      ; 004c55c3 | g_CDemonRendererPtr
    PUSH EDX                            ; 004c55c9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0 ; 004c55ca
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD ESP,0x8                         ; 004c55cf
    XOR EBX,EBX                         ; 004c55d2
    PUSH EBX                            ; 004c55d4
    MOV ECX,dword ptr [0x006703ec]      ; 004c55d5 | g_CDemonRendererPtr
    PUSH ECX                            ; 004c55db | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c55dc
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c55e1
    MOV EBX,dword ptr [0x006703ec]      ; 004c55e4 | g_CDemonRendererPtr
    PUSH EBX                            ; 004c55ea | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004c55eb
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

