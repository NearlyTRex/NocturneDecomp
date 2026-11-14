; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_render_FUN_0049b1d0(CLaserBeam *this_ptr)
;
; Parameters:
; CLaserBeam *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x3b0]:8  local_3b0
; undefined8       Stack[-0x3a8]:8  local_3a8
; undefined8       Stack[-0x3a0]:8  local_3a0
; undefined4       Stack[-0x398]:4  local_398
; undefined4       Stack[-0x394]:4  local_394
; undefined4       Stack[-0x390]:4  local_390
; undefined4       Stack[-0x38c]:4  local_38c
; undefined4       Stack[-0x388]:4  local_388
; undefined4       Stack[-0x384]:4  local_384
; undefined4       Stack[-0x380]:4  local_380
; undefined4       Stack[-0x37c]:4  local_37c
; undefined        Stack[-0x378]:1  local_378
; undefined4       Stack[-0x374]:4  local_374
; undefined4       Stack[-0x370]:4  local_370
; undefined4       Stack[-0x36c]:4  local_36c
; undefined4       Stack[-0x368]:4  local_368
; undefined4       Stack[-0x364]:4  local_364
; undefined4       Stack[-0x360]:4  local_360
; undefined4       Stack[-0x35c]:4  local_35c
; undefined4       Stack[-0x358]:4  local_358
; undefined4       Stack[-0x354]:4  local_354
; undefined4       Stack[-0x350]:4  local_350
; undefined4       Stack[-0x34c]:4  local_34c
; undefined4       Stack[-0x348]:4  local_348
; undefined4       Stack[-0x344]:4  local_344
; undefined4       Stack[-0x340]:4  local_340
; undefined4       Stack[-0x33c]:4  local_33c
; undefined4       Stack[-0x338]:4  local_338
; undefined4       Stack[-0x334]:4  local_334
; undefined        Stack[-0x330]:1  local_330
; undefined4       Stack[-0x32c]:4  local_32c
; undefined4       Stack[-0x328]:4  local_328
; undefined4       Stack[-0x324]:4  local_324
; undefined4       Stack[-0x320]:4  local_320
; undefined4       Stack[-0x31c]:4  local_31c
; undefined4       Stack[-0x318]:4  local_318
; undefined4       Stack[-0x314]:4  local_314
; undefined4       Stack[-0x310]:4  local_310
; undefined4       Stack[-0x30c]:4  local_30c
; undefined4       Stack[-0x308]:4  local_308
; undefined4       Stack[-0x304]:4  local_304
; undefined4       Stack[-0x300]:4  local_300
; undefined4       Stack[-0x2fc]:4  local_2fc
; undefined4       Stack[-0x2f8]:4  local_2f8
; undefined4       Stack[-0x2f4]:4  local_2f4
; undefined4       Stack[-0x2f0]:4  local_2f0
; undefined4       Stack[-0x2ec]:4  local_2ec
; undefined        Stack[-0x2e8]:1  local_2e8
; undefined4       Stack[-0x2e4]:4  local_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2dc]:4  local_2dc
; undefined4       Stack[-0x2d8]:4  local_2d8
; undefined4       Stack[-0x2d4]:4  local_2d4
; undefined4       Stack[-0x2d0]:4  local_2d0
; undefined4       Stack[-0x2cc]:4  local_2cc
; undefined4       Stack[-0x2c8]:4  local_2c8
; undefined4       Stack[-0x2c4]:4  local_2c4
; undefined        Stack[-0x2c0]:1  local_2c0
; undefined4       Stack[-0x2b8]:4  local_2b8
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined4       Stack[-0x2a0]:4  local_2a0
; undefined4       Stack[-0x298]:4  local_298
; undefined4       Stack[-0x294]:4  local_294
; undefined4       Stack[-0x290]:4  local_290
; undefined        Stack[-0x28c]:1  local_28c
; undefined4       Stack[-0x280]:4  local_280
; undefined4       Stack[-0x27c]:4  local_27c
; undefined4       Stack[-0x278]:4  local_278
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined4       Stack[-0x26c]:4  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x264]:4  local_264
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  local_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  local_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  local_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x244]:4  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined        Stack[-0x208]:1  local_208
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined        Stack[-0x1f0]:1  local_1f0
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined        Stack[-0x190]:1  local_190
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
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
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
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
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004a1ad0 at 004a1c9e
;
; Referenced Globals:
;   undefined4 DAT_005c0600
;   undefined4 DAT_005c0608
;   undefined4 DAT_005c0610
;   undefined4 DAT_005c0618
;   undefined4 DAT_005c0620
;   undefined4 DAT_005c0624
;   undefined4 DAT_005c0628
;   undefined4 DAT_005c0630
;   undefined4 DAT_005c0638
;   undefined4 DAT_005c0640
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fcab4
;   undefined4 DAT_005fcacc
;   undefined4 DAT_005fcae4
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b870
;   core_fire.cpp_computeScreenSpaceSize_FUN_0049b0e0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b1d0
        ;   Label: core_fire.cpp_CLaserBeam_render_FUN_0049b1d0
    PUSH ESI                            ; 0049b1d1
    PUSH EDI                            ; 0049b1d2
    PUSH EBP                            ; 0049b1d3
    MOV EBP,ESP                         ; 0049b1d4
    SUB ESP,0x3a0                       ; 0049b1d6
    AND ESP,0xfffffff8                  ; 0049b1dc
    PUSH 0x5fcab4                       ; 0049b1df | DAT_005fcab4
    MOV EDX,dword ptr [0x005f2afc]      ; 0049b1e4 | DAT_005f2afc
    PUSH EDX                            ; 0049b1ea | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049b1eb
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049b1f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b1f3
    LEA EDI,[ESP + 0x214]               ; 0049b1f6
    LEA ESI,[ESP + 0x1b4]               ; 0049b1fd
    FLD float ptr [EAX + 0xc]           ; 0049b204
    FLD float ptr [EAX + 0x10]          ; 0049b207
    FLD float ptr [EAX + 0x14]          ; 0049b20a
    FXCH ST2                            ; 0049b20d
    FSUB float ptr [EAX]                ; 0049b20f
    FXCH                                ; 0049b211
    FSUB float ptr [EAX + 0x4]          ; 0049b213
    FXCH ST2                            ; 0049b216
    FSUB float ptr [EAX + 0x8]          ; 0049b218
    FXCH                                ; 0049b21b
    FSTP float ptr [ESP + 0x1b4]        ; 0049b21d
    FXCH                                ; 0049b224
    FSTP float ptr [ESP + 0x1b8]        ; 0049b226
    FSTP float ptr [ESP + 0x1bc]        ; 0049b22d
    LEA EAX,[ESP + 0x214]               ; 0049b234
    MOVSD ES:EDI,ESI                    ; 0049b23b
    MOVSD ES:EDI,ESI                    ; 0049b23c
    MOVSD ES:EDI,ESI                    ; 0049b23d
    PUSH EAX                            ; 0049b23e
    LEA ESI,[ESP + 0x26c]               ; 0049b23f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0049b246
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    ADD ESP,0x4                         ; 0049b24b
    FLD float ptr [ESP + 0x218]         ; 0049b24e
    FMUL ST0                            ; 0049b255
    FLD float ptr [ESP + 0x214]         ; 0049b257
    FMUL ST0                            ; 0049b25e
    FADDP                               ; 0049b260
    FLD float ptr [ESP + 0x21c]         ; 0049b262
    FMUL ST0                            ; 0049b269
    FADDP                               ; 0049b26b
    FSQRT                               ; 0049b26d
    LEA EDI,[ESP + 0x2c8]               ; 0049b26f
    LEA EAX,[ESP + 0x2c8]               ; 0049b276
    LEA ESI,[ESP + 0x268]               ; 0049b27d
    PUSH EAX                            ; 0049b284
    LEA EAX,[ESP + 0xf4]                ; 0049b285
    MOVSD ES:EDI,ESI                    ; 0049b28c
    MOVSD ES:EDI,ESI                    ; 0049b28d
    MOVSD ES:EDI,ESI                    ; 0049b28e
    PUSH EAX                            ; 0049b28f
    FSTP float ptr [ESP + 0x30]         ; 0049b290
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0049b294
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0049b299
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b29c
    LEA ESI,[ESP + 0x280]               ; 0049b29f
    LEA EDI,[ESP + 0x250]               ; 0049b2a6
    MOV EAX,dword ptr [EAX + 0x18]      ; 0049b2ad
    MOV EBX,dword ptr [0x005f2afc]      ; 0049b2b0 | DAT_005f2afc
    MOV dword ptr [ESP + 0x30],EAX      ; 0049b2b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b2ba
    XOR ECX,ECX                         ; 0049b2bd
    PUSH EBX                            ; 0049b2bf | DAT_01bdd7e4
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0049b2c0
    MOV dword ptr [ESP + 0x24],ECX      ; 0049b2c3
    MOV dword ptr [ESP + 0x20],EAX      ; 0049b2c7
    CALL engine_drender.cpp_FUN_0046d1c0 ; 0049b2cb
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d1c0()
    LEA ESI,[ESP + 0x284]               ; 0049b2d0
    ADD ESP,0x4                         ; 0049b2d7
    LEA EDX,[ESP + 0x1d8]               ; 0049b2da
    MOVSD ES:EDI,ESI                    ; 0049b2e1
    MOVSD ES:EDI,ESI                    ; 0049b2e2
    MOVSD ES:EDI,ESI                    ; 0049b2e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b2e4
    FLD float ptr [ESP + 0x250]         ; 0049b2e7
    FLD float ptr [ESP + 0x254]         ; 0049b2ee
    FLD float ptr [ESP + 0x258]         ; 0049b2f5
    LEA EDI,[ESP + 0x160]               ; 0049b2fc
    LEA ESI,[ESP + 0x1cc]               ; 0049b303
    FXCH ST2                            ; 0049b30a
    FSUB float ptr [EAX]                ; 0049b30c
    FXCH                                ; 0049b30e
    FSUB float ptr [EAX + 0x4]          ; 0049b310
    FXCH ST2                            ; 0049b313
    FSUB float ptr [EAX + 0x8]          ; 0049b315
    FXCH                                ; 0049b318
    FSTP float ptr [ESP + 0x1cc]        ; 0049b31a
    FXCH                                ; 0049b321
    FSTP float ptr [ESP + 0x1d0]        ; 0049b323
    FSTP float ptr [ESP + 0x1d4]        ; 0049b32a
    LEA EAX,[ESP + 0x160]               ; 0049b331
    MOVSD ES:EDI,ESI                    ; 0049b338
    MOVSD ES:EDI,ESI                    ; 0049b339
    MOVSD ES:EDI,ESI                    ; 0049b33a
    CMP EDX,EAX                         ; 0049b33b
    JNZ 0x0049bd70                      ; 0049b33d
        ;   XREF to: 0049bd70 (CONDITIONAL_JUMP)  ; LAB_0049bd70
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b343
        ;   Label: LAB_0049b343
    LEA EDI,[ESP + 0x244]               ; 0049b346
    LEA ESI,[ESP + 0x16c]               ; 0049b34d
    LEA EDX,[ESP + 0x244]               ; 0049b354
    FLD float ptr [EAX + 0xc]           ; 0049b35b
    FLD float ptr [EAX + 0x10]          ; 0049b35e
    FLD float ptr [EAX + 0x14]          ; 0049b361
    FXCH ST2                            ; 0049b364
    FSUB float ptr [EAX]                ; 0049b366
    FXCH                                ; 0049b368
    FSUB float ptr [EAX + 0x4]          ; 0049b36a
    FXCH ST2                            ; 0049b36d
    FSUB float ptr [EAX + 0x8]          ; 0049b36f
    FXCH                                ; 0049b372
    FSTP float ptr [ESP + 0x16c]        ; 0049b374
    FXCH                                ; 0049b37b
    FSTP float ptr [ESP + 0x170]        ; 0049b37d
    FSTP float ptr [ESP + 0x174]        ; 0049b384
    LEA EAX,[ESP + 0x1e4]               ; 0049b38b
    MOVSD ES:EDI,ESI                    ; 0049b392
    MOVSD ES:EDI,ESI                    ; 0049b393
    MOVSD ES:EDI,ESI                    ; 0049b394
    CMP EAX,EDX                         ; 0049b395
    JZ 0x0049b3c3                       ; 0049b397
        ;   XREF to: 0049b3c3 (CONDITIONAL_JUMP)  ; LAB_0049b3c3
    MOV EAX,dword ptr [ESP + 0x244]     ; 0049b399
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0049b3a0
    MOV EAX,dword ptr [ESP + 0x248]     ; 0049b3a7
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0049b3ae
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0049b3b5
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0049b3bc
    FLD float ptr [ESP + 0x1dc]         ; 0049b3c3
        ;   Label: LAB_0049b3c3
    FMUL float ptr [ESP + 0x1e8]        ; 0049b3ca
    FLD float ptr [ESP + 0x1d8]         ; 0049b3d1
    FMUL float ptr [ESP + 0x1e4]        ; 0049b3d8
    FADDP                               ; 0049b3df
    FLD float ptr [ESP + 0x1e0]         ; 0049b3e1
    FMUL float ptr [ESP + 0x1ec]        ; 0049b3e8
    MOV ESI,0x43e00000                  ; 0049b3ef
    FADDP                               ; 0049b3f4
    MOV dword ptr [ESP + 0x34],ESI      ; 0049b3f6
    FST float ptr [ESP + 0x18]          ; 0049b3fa
    FLDZ                                ; 0049b3fe
    FCOMPP                              ; 0049b400
    FNSTSW AX                           ; 0049b402
    SAHF                                ; 0049b404
    JNC 0x0049b4b0                      ; 0049b405
        ;   XREF to: 0049b4b0 (CONDITIONAL_JUMP)  ; LAB_0049b4b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b40b
    FLDZ                                ; 0049b40e
    FLD float ptr [EAX + 0x3c]          ; 0049b410
    FSTP double ptr [ESP + 0x8]         ; 0049b413
    FCOMP double ptr [ESP + 0x8]        ; 0049b417
    FNSTSW AX                           ; 0049b41b
    SAHF                                ; 0049b41d
    JNC 0x0049bd9f                      ; 0049b41e
        ;   XREF to: 0049bd9f (CONDITIONAL_JUMP)  ; LAB_0049bd9f
    FLD double ptr [ESP + 0x8]          ; 0049b424
    FCOS                                ; 0049b428
    FLD float ptr [ESP + 0x1dc]         ; 0049b42a
    FMUL ST0                            ; 0049b431
    FLD float ptr [ESP + 0x1d8]         ; 0049b433
    FMUL ST0                            ; 0049b43a
    FADDP                               ; 0049b43c
    FLD float ptr [ESP + 0x1e0]         ; 0049b43e
    FMUL ST0                            ; 0049b445
    FADDP                               ; 0049b447
    FSQRT                               ; 0049b449
    FLD float ptr [ESP + 0x1e8]         ; 0049b44b
    FMUL ST0                            ; 0049b452
    FLD float ptr [ESP + 0x1e4]         ; 0049b454
    FMUL ST0                            ; 0049b45b
    FADDP                               ; 0049b45d
    FLD float ptr [ESP + 0x1ec]         ; 0049b45f
    FMUL ST0                            ; 0049b466
    FADDP                               ; 0049b468
    FSQRT                               ; 0049b46a
    FMULP                               ; 0049b46c
    FDIVR float ptr [ESP + 0x18]        ; 0049b46e
    FXCH                                ; 0049b472
    FSTP float ptr [ESP + 0x2c]         ; 0049b474
    FST float ptr [ESP + 0x364]         ; 0049b478
    FCOMP float ptr [ESP + 0x2c]        ; 0049b47f
    FNSTSW AX                           ; 0049b483
    SAHF                                ; 0049b485
    JBE 0x0049b49f                      ; 0049b486
        ;   XREF to: 0049b49f (CONDITIONAL_JUMP)  ; LAB_0049b49f
    FLD float ptr [ESP + 0x2c]          ; 0049b488
    FLD float ptr [ESP + 0x364]         ; 0049b48c
    FSUB ST0,ST1                        ; 0049b493
    FLD1                                ; 0049b495
    FSUBRP ST2,ST0                      ; 0049b497
    FDIVRP                              ; 0049b499
    FSTP float ptr [ESP + 0x20]         ; 0049b49b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b49f
        ;   Label: LAB_0049b49f
    FLD float ptr [EAX + 0x3c]          ; 0049b4a2
    FPTAN                               ; 0049b4a5
    FSTP ST0                            ; 0049b4a7
    FSTP float ptr [ESP + 0x368]        ; 0049b4a9
    PUSH 0x0                            ; 0049b4b0
        ;   Label: LAB_0049b4b0
    MOV EAX,[0x005f2afc]                ; 0049b4b2 | DAT_005f2afc
    PUSH EAX                            ; 0049b4b7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0049b4b8
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0049b4bd
    FLDZ                                ; 0049b4c0
    FLD float ptr [ESP + 0x20]          ; 0049b4c2
    FSTP double ptr [ESP]               ; 0049b4c6
    FCOMP double ptr [ESP]              ; 0049b4c9
    FNSTSW AX                           ; 0049b4cc
    SAHF                                ; 0049b4ce
    JNC 0x0049ba33                      ; 0049b4cf
        ;   XREF to: 0049ba33 (CONDITIONAL_JUMP)  ; LAB_0049ba33
    MOV EAX,[0x005fe9dc]                ; 0049b4d5 | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 0049b4da | g_CGameInstance.halo_mode
    JZ 0x0049ba33                       ; 0049b4de
        ;   XREF to: 0049ba33 (CONDITIONAL_JUMP)  ; LAB_0049ba33
    FLD double ptr [ESP]                ; 0049b4e4
    FMUL double ptr [0x005c0608]        ; 0049b4e7 | DAT_005c0608
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b4ed
    FLD float ptr [ESP + 0x20]          ; 0049b4f0
    FMUL float ptr [EAX + 0x18]         ; 0049b4f4
    FLD float ptr [ESP + 0x30]          ; 0049b4f7
    FLD ST0                             ; 0049b4fb
    FLD1                                ; 0049b4fd
    FSUBRP ST4,ST0                      ; 0049b4ff
    FMUL ST3                            ; 0049b501
    FLD float ptr [ESP + 0x1c]          ; 0049b503
    FMUL ST4                            ; 0049b507
    PUSH 0x1                            ; 0049b509
    MOV ECX,dword ptr [0x005f2afc]      ; 0049b50b | DAT_005f2afc
    XOR EBX,EBX                         ; 0049b511
    PUSH ECX                            ; 0049b513 | DAT_01bdd7e4
    FXCH ST3                            ; 0049b514
    FSTP float ptr [ESP + 0x28]         ; 0049b516
    FSTP ST1                            ; 0049b51a
    FXCH ST2                            ; 0049b51c
    FSTP ST1                            ; 0049b51e
    FXCH                                ; 0049b520
    FSTP float ptr [ESP + 0x38]         ; 0049b522
    FSTP float ptr [ESP + 0x24]         ; 0049b526
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049b52a
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049b52f
    MOV dword ptr [ESP + 0x390],EBX     ; 0049b532
    MOV EAX,dword ptr [ESP + 0x390]     ; 0049b539
        ;   Label: LAB_0049b539
    MOV dword ptr [ESP + 0x398],EAX     ; 0049b540
    FILD dword ptr [ESP + 0x398]        ; 0049b547
    FMUL float ptr [0x005c0610]         ; 0049b54e | DAT_005c0610
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b554
    FMUL float ptr [ESP + 0x28]         ; 0049b557
    FLD float ptr [EAX + 0x3c]          ; 0049b55b
    FLDZ                                ; 0049b55e
    FXCH ST2                            ; 0049b560
    FSTP float ptr [ESP + 0x24]         ; 0049b562
    FXCH                                ; 0049b566
    FCOMPP                              ; 0049b568
    FNSTSW AX                           ; 0049b56a
    SAHF                                ; 0049b56c
    JNC 0x0049bef5                      ; 0049b56d
        ;   XREF to: 0049bef5 (CONDITIONAL_JUMP)  ; LAB_0049bef5
    FLD float ptr [ESP + 0x368]         ; 0049b573
    FMUL float ptr [ESP + 0x24]         ; 0049b57a
        ;   Label: LAB_0049b57a
    FSTP float ptr [ESP + 0x388]        ; 0049b57e
    FLD float ptr [ESP + 0x24]          ; 0049b585
    FLD float ptr [ESP + 0xf8]          ; 0049b589
    FMUL ST1                            ; 0049b590
    FLD float ptr [ESP + 0x104]         ; 0049b592
    FMUL ST2                            ; 0049b599
    FLD float ptr [ESP + 0x110]         ; 0049b59b
    FMULP ST3                           ; 0049b5a2
    LEA EDI,[ESP + 0x22c]               ; 0049b5a4
    LEA ESI,[ESP + 0x1f0]               ; 0049b5ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b5b2
    FXCH                                ; 0049b5b5
    FSTP float ptr [ESP + 0x1f0]        ; 0049b5b7
    FSTP float ptr [ESP + 0x1f4]        ; 0049b5be
    FSTP float ptr [ESP + 0x1f8]        ; 0049b5c5
    MOVSD ES:EDI,ESI                    ; 0049b5cc
    MOVSD ES:EDI,ESI                    ; 0049b5cd
    MOVSD ES:EDI,ESI                    ; 0049b5ce
    LEA EDX,[ESP + 0x238]               ; 0049b5cf
    FLD float ptr [EAX + 0x4]           ; 0049b5d6
    FLD float ptr [EAX + 0x8]           ; 0049b5d9
    FLD float ptr [EAX]                 ; 0049b5dc
    LEA EDI,[ESP + 0x25c]               ; 0049b5de
    LEA ESI,[ESP + 0x19c]               ; 0049b5e5
    LEA EAX,[ESP + 0x25c]               ; 0049b5ec
    FADD float ptr [ESP + 0x22c]        ; 0049b5f3
    FXCH ST2                            ; 0049b5fa
    FADD float ptr [ESP + 0x230]        ; 0049b5fc
    FXCH                                ; 0049b603
    FADD float ptr [ESP + 0x234]        ; 0049b605
    FXCH ST2                            ; 0049b60c
    FSTP float ptr [ESP + 0x19c]        ; 0049b60e
    FSTP float ptr [ESP + 0x1a0]        ; 0049b615
    FSTP float ptr [ESP + 0x1a4]        ; 0049b61c
    MOVSD ES:EDI,ESI                    ; 0049b623
    MOVSD ES:EDI,ESI                    ; 0049b624
    MOVSD ES:EDI,ESI                    ; 0049b625
    CMP EDX,EAX                         ; 0049b626
    JZ 0x0049b654                       ; 0049b628
        ;   XREF to: 0049b654 (CONDITIONAL_JUMP)  ; LAB_0049b654
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0049b62a
    MOV dword ptr [ESP + 0x238],EAX     ; 0049b631
    MOV EAX,dword ptr [ESP + 0x260]     ; 0049b638
    MOV dword ptr [ESP + 0x23c],EAX     ; 0049b63f
    MOV EAX,dword ptr [ESP + 0x264]     ; 0049b646
    MOV dword ptr [ESP + 0x240],EAX     ; 0049b64d
    LEA EAX,[ESP + 0x238]               ; 0049b654
        ;   Label: LAB_0049b654
    PUSH EAX                            ; 0049b65b
    MOV ESI,dword ptr [0x005f2afc]      ; 0049b65c | DAT_005f2afc
    PUSH ESI                            ; 0049b662 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049b663
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049b668
    MOV EDI,dword ptr [0x005f2afc]      ; 0049b66b | DAT_005f2afc
    PUSH EDI                            ; 0049b671 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x128]               ; 0049b672
    LEA EBX,[ESP + 0x278]               ; 0049b679
    CALL engine_drender.cpp_FUN_0046d250 ; 0049b680
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d250()
    LEA EDI,[ESP + 0x1c4]               ; 0049b685
    ADD ESP,0x4                         ; 0049b68c
    LEA ESI,[ESP + 0x124]               ; 0049b68f
    MOV EAX,dword ptr [ESP + 0x390]     ; 0049b696
    PUSH 0x0                            ; 0049b69d
    MOVSD ES:EDI,ESI                    ; 0049b69f
    MOVSD ES:EDI,ESI                    ; 0049b6a0
    MOVSD ES:EDI,ESI                    ; 0049b6a1
    MOV dword ptr [ESP + 0x39c],EAX     ; 0049b6a2
    LEA EAX,[ESP + 0x1c4]               ; 0049b6a9
    FILD dword ptr [ESP + 0x39c]        ; 0049b6b0
    PUSH EAX                            ; 0049b6b7
    MOV EAX,[0x005f2afc]                ; 0049b6b8 | DAT_005f2afc
    FADD float ptr [ESP + 0x1d0]        ; 0049b6bd
    PUSH EAX                            ; 0049b6c4 | DAT_01bdd7e4
    FSTP float ptr [ESP + 0x1d4]        ; 0049b6c5
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049b6cc
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049b6d1
    XOR EDX,EDX                         ; 0049b6d4
    MOV EAX,dword ptr [ESP + 0x388]     ; 0049b6d6
    MOV dword ptr [ESP + 0x2f4],EDX     ; 0049b6dd
    MOV dword ptr [ESP + 0x2ec],EAX     ; 0049b6e4
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0049b6eb
    LEA EAX,[ESP + 0x2ec]               ; 0049b6f2
    MOV EDX,dword ptr [0x005f2afc]      ; 0049b6f9 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049b6ff
    FMUL float ptr [0x005df8e4]         ; 0049b701 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049b707
    FLD float ptr [EAX + 0x4]           ; 0049b709
    FMUL float ptr [0x005df8e4]         ; 0049b70c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b712
    FLD float ptr [EAX + 0x8]           ; 0049b715
    FMUL float ptr [0x005df8e4]         ; 0049b718 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b71e
    LEA EAX,[ESP + 0x274]               ; 0049b721
    PUSH EAX                            ; 0049b728
    MOV EAX,dword ptr [EDX]             ; 0049b729 | DAT_01bdd7e4
    PUSH EAX                            ; 0049b72b
    CALL engine_special.cpp_FUN_005632a3 ; 0049b72c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b731
    MOV AH,byte ptr [ESP + 0x2ef]       ; 0049b734
    XOR AH,0x80                         ; 0049b73b
    LEA EBX,[ESP + 0x2e0]               ; 0049b73e
    MOV byte ptr [ESP + 0x2ef],AH       ; 0049b745
    LEA EAX,[ESP + 0x2ec]               ; 0049b74c
    MOV EDX,dword ptr [0x005f2afc]      ; 0049b753 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049b759
    FMUL float ptr [0x005df8e4]         ; 0049b75b | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049b761
    FLD float ptr [EAX + 0x4]           ; 0049b763
    FMUL float ptr [0x005df8e4]         ; 0049b766 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b76c
    FLD float ptr [EAX + 0x8]           ; 0049b76f
    FMUL float ptr [0x005df8e4]         ; 0049b772 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b778
    LEA EAX,[ESP + 0x2e0]               ; 0049b77b
    PUSH EAX                            ; 0049b782
    MOV EAX,dword ptr [EDX]             ; 0049b783 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049b785
    PUSH EAX                            ; 0049b788
    CALL engine_special.cpp_FUN_005632a3 ; 0049b789
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b78e
    MOV DL,byte ptr [ESP + 0x2f3]       ; 0049b791
    LEA EBX,[ESP + 0x310]               ; 0049b798
    XOR DL,0x80                         ; 0049b79f
    LEA EAX,[ESP + 0x2ec]               ; 0049b7a2
    MOV byte ptr [ESP + 0x2f3],DL       ; 0049b7a9
    MOV EDX,dword ptr [0x005f2afc]      ; 0049b7b0 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049b7b6
    FMUL float ptr [0x005df8e4]         ; 0049b7b8 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049b7be
    FLD float ptr [EAX + 0x4]           ; 0049b7c0
    FMUL float ptr [0x005df8e4]         ; 0049b7c3 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b7c9
    FLD float ptr [EAX + 0x8]           ; 0049b7cc
    FMUL float ptr [0x005df8e4]         ; 0049b7cf | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b7d5
    LEA EAX,[ESP + 0x310]               ; 0049b7d8
    PUSH EAX                            ; 0049b7df
    MOV EAX,dword ptr [EDX]             ; 0049b7e0 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049b7e2
    PUSH EAX                            ; 0049b7e5
    CALL engine_special.cpp_FUN_005632a3 ; 0049b7e6
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b7eb
    MOV DH,byte ptr [ESP + 0x2ef]       ; 0049b7ee
    LEA EBX,[ESP + 0x2bc]               ; 0049b7f5
    XOR DH,0x80                         ; 0049b7fc
    LEA EAX,[ESP + 0x2ec]               ; 0049b7ff
    MOV byte ptr [ESP + 0x2ef],DH       ; 0049b806
    MOV EDX,dword ptr [0x005f2afc]      ; 0049b80d | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049b813
    FMUL float ptr [0x005df8e4]         ; 0049b815 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049b81b
    FLD float ptr [EAX + 0x4]           ; 0049b81d
    FMUL float ptr [0x005df8e4]         ; 0049b820 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b826
    FLD float ptr [EAX + 0x8]           ; 0049b829
    FMUL float ptr [0x005df8e4]         ; 0049b82c | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b832
    LEA EAX,[ESP + 0x2bc]               ; 0049b835
    PUSH EAX                            ; 0049b83c
    MOV EAX,dword ptr [EDX]             ; 0049b83d | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0049b83f
    PUSH EAX                            ; 0049b844
    CALL engine_special.cpp_FUN_005632a3 ; 0049b845
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049b84a
    PUSH 0x5fcafc                       ; 0049b84d | DAT_005fcafc
    MOV ECX,dword ptr [0x005f2afc]      ; 0049b852 | DAT_005f2afc
    PUSH ECX                            ; 0049b858 | DAT_01bdd7e4
    MOV EBX,0x4                         ; 0049b859
    XOR ESI,ESI                         ; 0049b85e
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049b860
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049b865
    MOV EDX,dword ptr [0x005f2afc]      ; 0049b868 | DAT_005f2afc
    FLD float ptr [ESP + 0x20]          ; 0049b86e
    MOV dword ptr [ESP + 0xcc],EBX      ; 0049b872
    MOV dword ptr [ESP + 0xdc],ESI      ; 0049b879
    MOV dword ptr [ESP + 0xd8],ESI      ; 0049b880
    MOV dword ptr [ESP + 0xd4],ESI      ; 0049b887
    MOV dword ptr [ESP + 0xd0],ESI      ; 0049b88e
    MOV dword ptr [ESP + 0xe0],ESI      ; 0049b895
    FMUL double ptr [0x005c0618]        ; 0049b89c | DAT_005c0618
    MOV EBX,dword ptr [EDX]             ; 0049b8a2 | DAT_01bdd7e4
    CALL crt_math.c_round_FUN_005a3120  ; 0049b8a4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x33c]       ; 0049b8a9
    MOV EAX,dword ptr [ESP + 0x33c]     ; 0049b8b0
    MOV dword ptr [EBX + 0x2c],EAX      ; 0049b8b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b8ba
    MOV EBX,dword ptr [EDX]             ; 0049b8bd
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0049b8bf
    MOV dword ptr [EBX + 0x20],EAX      ; 0049b8c2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b8c5
    MOV EBX,dword ptr [EDX]             ; 0049b8c8
    MOV EAX,dword ptr [EAX + 0x30]      ; 0049b8ca
    MOV dword ptr [EBX + 0x24],EAX      ; 0049b8cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049b8d0
    MOV EBX,dword ptr [EDX]             ; 0049b8d3
    MOV EAX,dword ptr [EAX + 0x34]      ; 0049b8d5
    MOV dword ptr [EBX + 0x28],EAX      ; 0049b8d8
    MOV dword ptr [ESP + 0xe4],0x1      ; 0049b8db
    MOV EBX,dword ptr [EDX]             ; 0049b8e6
    MOV EAX,dword ptr [ESP + 0x33c]     ; 0049b8e8
    MOV dword ptr [EBX + 0x5c],EAX      ; 0049b8ef
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b8f2
    MOV EAX,dword ptr [EDX]             ; 0049b8f5
    MOV EBX,dword ptr [EBX + 0x2c]      ; 0049b8f7
    MOV dword ptr [EAX + 0x50],EBX      ; 0049b8fa
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b8fd
    MOV EAX,dword ptr [EDX]             ; 0049b900
    MOV EBX,dword ptr [EBX + 0x30]      ; 0049b902
    MOV dword ptr [EAX + 0x54],EBX      ; 0049b905
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b908
    MOV EAX,dword ptr [EDX]             ; 0049b90b
    MOV EBX,dword ptr [EBX + 0x34]      ; 0049b90d
    MOV ESI,0x2                         ; 0049b910
    MOV dword ptr [EAX + 0x58],EBX      ; 0049b915
    MOV dword ptr [ESP + 0xe8],ESI      ; 0049b918
    MOV EBX,dword ptr [EDX]             ; 0049b91f
    MOV EAX,dword ptr [ESP + 0x33c]     ; 0049b921
    MOV dword ptr [EBX + 0x8c],EAX      ; 0049b928
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b92e
    MOV EAX,dword ptr [EDX]             ; 0049b931
    MOV EBX,dword ptr [EBX + 0x2c]      ; 0049b933
    MOV dword ptr [EAX + 0x80],EBX      ; 0049b936
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b93c
    MOV EAX,dword ptr [EDX]             ; 0049b93f
    MOV EBX,dword ptr [EBX + 0x30]      ; 0049b941
    MOV dword ptr [EAX + 0x84],EBX      ; 0049b944
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b94a
    MOV EAX,dword ptr [EDX]             ; 0049b94d
    MOV EBX,dword ptr [EBX + 0x34]      ; 0049b94f
    MOV EDI,0x3                         ; 0049b952
    MOV dword ptr [EAX + 0x88],EBX      ; 0049b957
    MOV dword ptr [ESP + 0xec],EDI      ; 0049b95d
    MOV EBX,dword ptr [EDX]             ; 0049b964
    MOV EAX,dword ptr [ESP + 0x33c]     ; 0049b966
    MOV dword ptr [EBX + 0xbc],EAX      ; 0049b96d
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b973
    MOV EAX,dword ptr [EDX]             ; 0049b976
    MOV EBX,dword ptr [EBX + 0x2c]      ; 0049b978
    MOV dword ptr [EAX + 0xb0],EBX      ; 0049b97b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b981
    MOV EAX,dword ptr [EDX]             ; 0049b984
    MOV EBX,dword ptr [EBX + 0x30]      ; 0049b986
    MOV dword ptr [EAX + 0xb4],EBX      ; 0049b989
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049b98f
    MOV EAX,dword ptr [EDX]             ; 0049b992
    MOV EBX,dword ptr [EBX + 0x34]      ; 0049b994
    MOV dword ptr [EAX + 0xb8],EBX      ; 0049b997
    MOV EAX,dword ptr [EDX]             ; 0049b99d
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0049b99f
    MOV EAX,dword ptr [EDX]             ; 0049b9a6
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0049b9a8
    MOV EAX,dword ptr [EDX]             ; 0049b9af
    MOV dword ptr [EAX + 0x48],0x80000  ; 0049b9b1
    MOV EAX,dword ptr [EDX]             ; 0049b9b8
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0049b9ba
    MOV EAX,dword ptr [EDX]             ; 0049b9c1
    MOV dword ptr [EAX + 0x78],0x80000  ; 0049b9c3
    MOV EAX,dword ptr [EDX]             ; 0049b9ca
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0049b9cc
    MOV EAX,dword ptr [EDX]             ; 0049b9d3
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0049b9d5
    MOV EAX,dword ptr [EDX]             ; 0049b9df
    MOV dword ptr [EAX + 0xac],0x80000  ; 0049b9e1
    LEA EAX,[ESP + 0xc8]                ; 0049b9eb
    PUSH EAX                            ; 0049b9f2
    PUSH EDX                            ; 0049b9f3
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0049b9f4
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0049b9f9
    MOV EAX,[0x005f2afc]                ; 0049b9fc | DAT_005f2afc
    PUSH EAX                            ; 0049ba01 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0049ba02
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049ba07
    MOV EDX,dword ptr [ESP + 0x390]     ; 0049ba0a
    INC EDX                             ; 0049ba11
    MOV dword ptr [ESP + 0x390],EDX     ; 0049ba12
    CMP EDX,0x19                        ; 0049ba19
    JL 0x0049b539                       ; 0049ba1c
        ;   XREF to: 0049b539 (CONDITIONAL_JUMP)  ; LAB_0049b539
    PUSH 0x0                            ; 0049ba22
    MOV EBX,dword ptr [0x005f2afc]      ; 0049ba24 | DAT_005f2afc
    PUSH EBX                            ; 0049ba2a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049ba2b
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049ba30
    FLD float ptr [ESP + 0x30]          ; 0049ba33
        ;   Label: LAB_0049ba33
    FLDZ                                ; 0049ba37
    FCOMPP                              ; 0049ba39
    FNSTSW AX                           ; 0049ba3b
    SAHF                                ; 0049ba3d
    JNC 0x0049bd33                      ; 0049ba3e
        ;   XREF to: 0049bd33 (CONDITIONAL_JUMP)  ; LAB_0049bd33
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ba44
    TEST dword ptr [EAX + 0x38],0x7fffffff ; 0049ba47
    JZ 0x0049bd33                       ; 0049ba4e
        ;   XREF to: 0049bd33 (CONDITIONAL_JUMP)  ; LAB_0049bd33
    PUSH 0x5fcacc                       ; 0049ba54 | DAT_005fcacc
    MOV EDI,dword ptr [0x005f2afc]      ; 0049ba59 | DAT_005f2afc
    PUSH EDI                            ; 0049ba5f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049ba60
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0049ba65
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ba68
    PUSH EAX                            ; 0049ba6b
    MOV EDX,dword ptr [0x005f2afc]      ; 0049ba6c | DAT_005f2afc
    PUSH EDX                            ; 0049ba72 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049ba73
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049ba78
    PUSH 0x0                            ; 0049ba7b
    LEA EAX,[ESP + 0x2cc]               ; 0049ba7d
    PUSH EAX                            ; 0049ba84
    MOV ECX,dword ptr [0x005f2afc]      ; 0049ba85 | DAT_005f2afc
    PUSH ECX                            ; 0049ba8b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049ba8c
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049ba91
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049ba94
    MOV ESI,0x8                         ; 0049ba97
    XOR EBX,EBX                         ; 0049ba9c
    MOV EAX,dword ptr [EAX + 0x38]      ; 0049ba9e
    FLDZ                                ; 0049baa1
    MOV dword ptr [ESP + 0x360],EAX     ; 0049baa3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049baaa
    MOV dword ptr [ESP + 0x370],EBX     ; 0049baad
    MOV dword ptr [ESP + 0x38c],ESI     ; 0049bab4
    FLD float ptr [EAX + 0x3c]          ; 0049babb
    FSTP double ptr [ESP + 0x10]        ; 0049babe
    FCOMP double ptr [ESP + 0x10]       ; 0049bac2
    FNSTSW AX                           ; 0049bac6
    SAHF                                ; 0049bac8
    JNC 0x0049baf6                      ; 0049bac9
        ;   XREF to: 0049baf6 (CONDITIONAL_JUMP)  ; LAB_0049baf6
    FLD double ptr [ESP + 0x10]         ; 0049bacb
    FPTAN                               ; 0049bacf
    FSTP ST0                            ; 0049bad1
    FMUL float ptr [ESP + 0x28]         ; 0049bad3
    MOV EDI,0x1                         ; 0049bad7
    MOV EAX,0x10                        ; 0049badc
    MOV dword ptr [ESP + 0x370],EDI     ; 0049bae1
    MOV dword ptr [ESP + 0x38c],EAX     ; 0049bae8
    FSTP float ptr [ESP + 0x360]        ; 0049baef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049baf6
        ;   Label: LAB_0049baf6
    PUSH dword ptr [EAX + 0x38]         ; 0049baf9
    PUSH 0x0                            ; 0049bafc
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_0049b0e0 ; 0049bafe
        ;   XREF to: 0049b0e0 (UNCONDITIONAL_CALL)  ; float core_fire.cpp_computeScreenSpaceSize_FUN_0049b0e0(float depth, float min_size)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 0049bb03
    FLD float ptr [ESP + 0x3a4]         ; 0049bb0a
    ADD ESP,0x8                         ; 0049bb11
    PUSH dword ptr [ESP + 0x360]        ; 0049bb14
    PUSH dword ptr [ESP + 0x2c]         ; 0049bb1b
    FSTP float ptr [ESP + 0x37c]        ; 0049bb1f
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_0049b0e0 ; 0049bb26
        ;   XREF to: 0049b0e0 (UNCONDITIONAL_CALL)  ; float core_fire.cpp_computeScreenSpaceSize_FUN_0049b0e0(float depth, float min_size)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 0049bb2b
    FLD float ptr [ESP + 0x3a4]         ; 0049bb32
    ADD ESP,0x8                         ; 0049bb39
    XOR EDX,EDX                         ; 0049bb3c
    FSTP float ptr [ESP + 0x378]        ; 0049bb3e
    MOV ECX,dword ptr [ESP + 0x38c]     ; 0049bb45
    MOV dword ptr [ESP + 0x394],EDX     ; 0049bb4c
    TEST ECX,ECX                        ; 0049bb53
    JL 0x0049bd25                       ; 0049bb55
        ;   XREF to: 0049bd25 (CONDITIONAL_JUMP)  ; LAB_0049bd25
    FLD float ptr [ESP + 0x28]          ; 0049bb5b
    FMUL float ptr [0x005c0620]         ; 0049bb5f | DAT_005c0620
    FDIV float ptr [0x005c0624]         ; 0049bb65 | DAT_005c0624
    MOV dword ptr [ESP + 0x380],0x100   ; 0049bb6b
    FSTP float ptr [ESP + 0x36c]        ; 0049bb76
    MOV EAX,dword ptr [ESP + 0x394]     ; 0049bb7d
        ;   Label: LAB_0049bb7d
    MOV dword ptr [ESP + 0x398],EAX     ; 0049bb84
    MOV EAX,dword ptr [ESP + 0x38c]     ; 0049bb8b
    MOV dword ptr [ESP + 0x39c],EAX     ; 0049bb92
    FILD dword ptr [ESP + 0x398]        ; 0049bb99
    FILD dword ptr [ESP + 0x39c]        ; 0049bba0
    FDIVP                               ; 0049bba7
    FMUL double ptr [0x005c0608]        ; 0049bba9 | DAT_005c0608
    FMUL double ptr [0x005c0628]        ; 0049bbaf | DAT_005c0628
    FLD ST0                             ; 0049bbb5
    FSIN                                ; 0049bbb7
    FXCH                                ; 0049bbb9
    FCOS                                ; 0049bbbb
    MOV EDX,dword ptr [0x005f2afc]      ; 0049bbbd | DAT_005f2afc
    MOV ESI,dword ptr [EDX]             ; 0049bbc3 | DAT_01bdd7e4
    MOV ECX,0xc                         ; 0049bbc5
    LEA EDI,[ESI + 0x90]                ; 0049bbca
    MOVSD.REP ES:EDI,ESI                ; 0049bbd0
    MOV ESI,dword ptr [EDX]             ; 0049bbd2 | DAT_01bdd7e4
    MOV ECX,0xc                         ; 0049bbd4
    LEA EDI,[ESI + 0x60]                ; 0049bbd9
    LEA ESI,[ESI + 0x30]                ; 0049bbdc
    FXCH                                ; 0049bbdf
    FST float ptr [ESP + 0x348]         ; 0049bbe1
    FLD float ptr [ESP + 0x374]         ; 0049bbe8
    FXCH                                ; 0049bbef
    FMUL ST1                            ; 0049bbf1
    MOVSD.REP ES:EDI,ESI                ; 0049bbf3
    FXCH ST2                            ; 0049bbf5
    FST float ptr [ESP + 0x340]         ; 0049bbf7
    FMULP                               ; 0049bbfe
    XOR ECX,ECX                         ; 0049bc00
    LEA EBX,[ESP + 0x130]               ; 0049bc02
    MOV dword ptr [ESP + 0x18c],ECX     ; 0049bc09
    LEA EAX,[ESP + 0x184]               ; 0049bc10
    FXCH                                ; 0049bc17
    FSTP float ptr [ESP + 0x188]        ; 0049bc19
    FSTP float ptr [ESP + 0x184]        ; 0049bc20
    FLD float ptr [EAX]                 ; 0049bc27
    FMUL float ptr [0x005df8e4]         ; 0049bc29 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049bc2f
    FLD float ptr [EAX + 0x4]           ; 0049bc31
    FMUL float ptr [0x005df8e4]         ; 0049bc34 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bc3a
    FLD float ptr [EAX + 0x8]           ; 0049bc3d
    FMUL float ptr [0x005df8e4]         ; 0049bc40 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bc46
    LEA EAX,[ESP + 0x130]               ; 0049bc49
    PUSH EAX                            ; 0049bc50
    MOV EAX,dword ptr [EDX]             ; 0049bc51 | DAT_01bdd7e4
    PUSH EAX                            ; 0049bc53
    CALL engine_special.cpp_FUN_005632a3 ; 0049bc54
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049bc59
    FLD float ptr [ESP + 0x378]         ; 0049bc5c
    FLD float ptr [ESP + 0x340]         ; 0049bc63
    FMUL ST1                            ; 0049bc6a
    FLD float ptr [ESP + 0x348]         ; 0049bc6c
    FMULP ST2                           ; 0049bc73
    LEA EBX,[ESP + 0x178]               ; 0049bc75
    LEA EAX,[ESP + 0x184]               ; 0049bc7c
    MOV EDX,dword ptr [0x005f2afc]      ; 0049bc83 | DAT_005f2afc
    FLD float ptr [ESP + 0x28]          ; 0049bc89
    FADD double ptr [0x005c0640]        ; 0049bc8d | DAT_005c0640
    FXCH                                ; 0049bc93
    FSTP float ptr [ESP + 0x184]        ; 0049bc95
    FXCH                                ; 0049bc9c
    FSTP float ptr [ESP + 0x188]        ; 0049bc9e
    FSTP float ptr [ESP + 0x18c]        ; 0049bca5
    FLD float ptr [EAX]                 ; 0049bcac
    FMUL float ptr [0x005df8e4]         ; 0049bcae | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049bcb4
    FLD float ptr [EAX + 0x4]           ; 0049bcb6
    FMUL float ptr [0x005df8e4]         ; 0049bcb9 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bcbf
    FLD float ptr [EAX + 0x8]           ; 0049bcc2
    FMUL float ptr [0x005df8e4]         ; 0049bcc5 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bccb
    LEA EAX,[ESP + 0x178]               ; 0049bcce
    PUSH EAX                            ; 0049bcd5
    MOV EAX,dword ptr [EDX]             ; 0049bcd6 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049bcd8
    PUSH EAX                            ; 0049bcdb
    CALL engine_special.cpp_FUN_005632a3 ; 0049bcdc
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049bce1
    MOV EBX,dword ptr [ESP + 0x394]     ; 0049bce4
    TEST EBX,EBX                        ; 0049bceb
    JNZ 0x0049bf04                      ; 0049bced
        ;   XREF to: 0049bf04 (CONDITIONAL_JUMP)  ; LAB_0049bf04
    MOV EBX,dword ptr [ESP + 0x380]     ; 0049bcf3
        ;   Label: LAB_0049bcf3
    MOV ESI,dword ptr [ESP + 0x394]     ; 0049bcfa
    MOV EDI,dword ptr [ESP + 0x38c]     ; 0049bd01
    ADD EBX,0x100                       ; 0049bd08
    INC ESI                             ; 0049bd0e
    MOV dword ptr [ESP + 0x380],EBX     ; 0049bd0f
    MOV dword ptr [ESP + 0x394],ESI     ; 0049bd16
    CMP ESI,EDI                         ; 0049bd1d
    JLE 0x0049bb7d                      ; 0049bd1f
        ;   XREF to: 0049bb7d (CONDITIONAL_JUMP)  ; LAB_0049bb7d
    MOV EAX,[0x005f2afc]                ; 0049bd25 | DAT_005f2afc
        ;   Label: LAB_0049bd25
    PUSH EAX                            ; 0049bd2a | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0049bd2b
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049bd30
    FLD float ptr [ESP + 0x1c]          ; 0049bd33
        ;   Label: LAB_0049bd33
    FLDZ                                ; 0049bd37
    FCOMPP                              ; 0049bd39
    FNSTSW AX                           ; 0049bd3b
    SAHF                                ; 0049bd3d
    JC 0x0049c193                       ; 0049bd3e
        ;   XREF to: 0049c193 (CONDITIONAL_JUMP)  ; LAB_0049c193
    PUSH 0x0                            ; 0049bd44
        ;   Label: LAB_0049bd44
    MOV ESI,dword ptr [0x005f2afc]      ; 0049bd46 | DAT_005f2afc
    PUSH ESI                            ; 0049bd4c | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049bd4d
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049bd52
    PUSH 0xffff                         ; 0049bd55
    MOV EDI,dword ptr [0x005f2afc]      ; 0049bd5a | DAT_005f2afc
    PUSH EDI                            ; 0049bd60 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0049bd61
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049bd66
    MOV ESP,EBP                         ; 0049bd69
    POP EBP                             ; 0049bd6b
    POP EDI                             ; 0049bd6c
    POP ESI                             ; 0049bd6d
    POP EBX                             ; 0049bd6e
    RET                                 ; 0049bd6f
    MOV EAX,dword ptr [ESP + 0x160]     ; 0049bd70
        ;   Label: LAB_0049bd70
    MOV dword ptr [ESP + 0x1d8],EAX     ; 0049bd77
    MOV EAX,dword ptr [ESP + 0x164]     ; 0049bd7e
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0049bd85
    MOV EAX,dword ptr [ESP + 0x168]     ; 0049bd8c
    MOV dword ptr [ESP + 0x1e0],EAX     ; 0049bd93
    JMP 0x0049b343                      ; 0049bd9a
        ;   XREF to: 0049b343 (UNCONDITIONAL_JUMP)  ; LAB_0049b343
    MOV EDI,dword ptr [0x005f2afc]      ; 0049bd9f | DAT_005f2afc
        ;   Label: LAB_0049bd9f
    PUSH EDI                            ; 0049bda5 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x1ac]               ; 0049bda6
    CALL engine_drender.cpp_FUN_0046d1c0 ; 0049bdad
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d1c0()
    LEA EDI,[ESP + 0x14c]               ; 0049bdb2
    LEA ESI,[ESP + 0x1ac]               ; 0049bdb9
    ADD ESP,0x4                         ; 0049bdc0
    MOVSD ES:EDI,ESI                    ; 0049bdc3
    MOVSD ES:EDI,ESI                    ; 0049bdc4
    MOVSD ES:EDI,ESI                    ; 0049bdc5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049bdc6
    FLD float ptr [ESP + 0x148]         ; 0049bdc9
    FSUB float ptr [EAX]                ; 0049bdd0
    FLD float ptr [ESP + 0x14c]         ; 0049bdd2
    FXCH                                ; 0049bdd9
    FSTP float ptr [ESP + 0x148]        ; 0049bddb
    FSUB float ptr [EAX + 0x4]          ; 0049bde2
    FLD float ptr [ESP + 0x150]         ; 0049bde5
    FXCH                                ; 0049bdec
    FSTP float ptr [ESP + 0x14c]        ; 0049bdee
    FSUB float ptr [EAX + 0x8]          ; 0049bdf5
    LEA EAX,[ESP + 0x148]               ; 0049bdf8
    LEA ESI,[ESP + 0x304]               ; 0049bdff
    PUSH EAX                            ; 0049be06
    LEA EAX,[ESP + 0xf4]                ; 0049be07
    LEA EDI,[ESP + 0x200]               ; 0049be0e
    PUSH EAX                            ; 0049be15
    FSTP float ptr [ESP + 0x158]        ; 0049be16
    CALL core_dirmat.cpp_FUN_0045b870   ; 0049be1d
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x30c]               ; 0049be22
    LEA EAX,[ESP + 0x204]               ; 0049be29
    ADD ESP,0x8                         ; 0049be30
    LEA EDX,[ESP + 0x148]               ; 0049be33
    MOVSD ES:EDI,ESI                    ; 0049be3a
    MOVSD ES:EDI,ESI                    ; 0049be3b
    MOVSD ES:EDI,ESI                    ; 0049be3c
    CMP EDX,EAX                         ; 0049be3d
    JZ 0x0049be6b                       ; 0049be3f
        ;   XREF to: 0049be6b (CONDITIONAL_JUMP)  ; LAB_0049be6b
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0049be41
    MOV dword ptr [ESP + 0x148],EAX     ; 0049be48
    MOV EAX,dword ptr [ESP + 0x200]     ; 0049be4f
    MOV dword ptr [ESP + 0x14c],EAX     ; 0049be56
    MOV EAX,dword ptr [ESP + 0x204]     ; 0049be5d
    MOV dword ptr [ESP + 0x150],EAX     ; 0049be64
    FLD float ptr [ESP + 0x150]         ; 0049be6b
        ;   Label: LAB_0049be6b
    FMUL double ptr [0x005c0600]        ; 0049be72 | DAT_005c0600
    FDIV float ptr [ESP + 0x34]         ; 0049be78
    FLD float ptr [ESP + 0x14c]         ; 0049be7c
    FMUL ST0                            ; 0049be83
    FLD float ptr [ESP + 0x148]         ; 0049be85
    FMUL ST0                            ; 0049be8c
    FXCH ST2                            ; 0049be8e
    FMUL double ptr [0x005c0608]        ; 0049be90 | DAT_005c0608
    FXCH                                ; 0049be96
    FSTP float ptr [ESP + 0x350]        ; 0049be98
    FXCH                                ; 0049be9f
    FADD float ptr [ESP + 0x350]        ; 0049bea1
    FXCH                                ; 0049bea8
    FST float ptr [ESP + 0x354]         ; 0049beaa
    FMUL float ptr [ESP + 0x354]        ; 0049beb1
    FXCH                                ; 0049beb8
    FST float ptr [ESP + 0x358]         ; 0049beba
    FXCH                                ; 0049bec1
    FSTP float ptr [ESP + 0x35c]        ; 0049bec3
    FCOMP float ptr [ESP + 0x35c]       ; 0049beca
    FNSTSW AX                           ; 0049bed1
    SAHF                                ; 0049bed3
    JNC 0x0049b4b0                      ; 0049bed4
        ;   XREF to: 0049b4b0 (CONDITIONAL_JUMP)  ; LAB_0049b4b0
    FLD float ptr [ESP + 0x358]         ; 0049beda
    FDIV float ptr [ESP + 0x35c]        ; 0049bee1
    FLD1                                ; 0049bee8
    FSUBRP                              ; 0049beea
    FSTP float ptr [ESP + 0x20]         ; 0049beec
    JMP 0x0049b4b0                      ; 0049bef0
        ;   XREF to: 0049b4b0 (UNCONDITIONAL_JUMP)  ; LAB_0049b4b0
    FLD float ptr [ESP + 0x34]          ; 0049bef5
        ;   Label: LAB_0049bef5
    FDIVR double ptr [0x005c0600]       ; 0049bef9 | DAT_005c0600
    JMP 0x0049b57a                      ; 0049beff
        ;   XREF to: 0049b57a (UNCONDITIONAL_JUMP)  ; LAB_0049b57a
    FLD float ptr [ESP + 0x36c]         ; 0049bf04
        ;   Label: LAB_0049bf04
    MOV ESI,0x4                         ; 0049bf0b
    MOV EAX,0x3                         ; 0049bf10
    CALL crt_math.c_round_FUN_005a3120  ; 0049bf15
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    XOR EDI,EDI                         ; 0049bf1a
    MOV dword ptr [ESP + 0x84],ESI      ; 0049bf1c
    MOV dword ptr [ESP + 0x94],EDI      ; 0049bf23
    MOV dword ptr [ESP + 0x90],EDI      ; 0049bf2a
    MOV dword ptr [ESP + 0x8c],EDI      ; 0049bf31
    MOV dword ptr [ESP + 0x88],EDI      ; 0049bf38
    MOV dword ptr [ESP + 0x98],EDI      ; 0049bf3f
    MOV dword ptr [ESP + 0xbc],EAX      ; 0049bf46
    MOV ESI,0x1                         ; 0049bf4d
    MOV EDI,0x2                         ; 0049bf52
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049bf57
    MOV dword ptr [ESP + 0xa4],ESI      ; 0049bf5a
    MOV dword ptr [ESP + 0xb0],EDI      ; 0049bf61
    FISTP dword ptr [ESP + 0x37c]       ; 0049bf68
    FLD float ptr [EAX + 0x3c]          ; 0049bf6f
    FLDZ                                ; 0049bf72
    FCOMPP                              ; 0049bf74
    FNSTSW AX                           ; 0049bf76
    SAHF                                ; 0049bf78
    JNC 0x0049c0d3                      ; 0049bf79
        ;   XREF to: 0049c0d3 (CONDITIONAL_JUMP)  ; LAB_0049c0d3
    MOV EDX,0x800000                    ; 0049bf7f | DAT_00800000
    MOV dword ptr [ESP + 0xa0],EDX      ; 0049bf84 | DAT_00800000
    MOV dword ptr [ESP + 0xa8],EDX      ; 0049bf8b | DAT_00800000
    MOV dword ptr [ESP + 0xac],EDX      ; 0049bf92 | DAT_00800000
    MOV dword ptr [ESP + 0xb4],EDX      ; 0049bf99 | DAT_00800000
    MOV dword ptr [ESP + 0xb8],EDX      ; 0049bfa0 | DAT_00800000
    MOV dword ptr [ESP + 0xc0],EDX      ; 0049bfa7 | DAT_00800000
    MOV dword ptr [ESP + 0xc4],EDX      ; 0049bfae | DAT_00800000
    MOV dword ptr [ESP + 0x9c],EDX      ; 0049bfb5 | DAT_00800000
    MOV EAX,[0x005f2afc]                ; 0049bfbc | DAT_005f2afc
        ;   Label: LAB_0049bfbc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049bfc1
    MOV EDX,dword ptr [EAX]             ; 0049bfc4 | DAT_01bdd7e4
    MOV EBX,dword ptr [EBX + 0x2c]      ; 0049bfc6
    MOV dword ptr [EDX + 0x20],EBX      ; 0049bfc9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049bfcc
    MOV EBX,dword ptr [EAX]             ; 0049bfcf | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049bfd1
    MOV dword ptr [EBX + 0x24],EDX      ; 0049bfd4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049bfd7
    MOV EDX,dword ptr [EAX]             ; 0049bfda | DAT_01bdd7e4
    MOV EBX,dword ptr [EBX + 0x34]      ; 0049bfdc
    MOV dword ptr [EDX + 0x28],EBX      ; 0049bfdf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049bfe2
    MOV EBX,dword ptr [EAX]             ; 0049bfe5 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049bfe7
    MOV dword ptr [EBX + 0x50],EDX      ; 0049bfea
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049bfed
    MOV EDX,dword ptr [EAX]             ; 0049bff0 | DAT_01bdd7e4
    MOV EBX,dword ptr [EBX + 0x30]      ; 0049bff2
    MOV dword ptr [EDX + 0x54],EBX      ; 0049bff5
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049bff8
    MOV EBX,dword ptr [EAX]             ; 0049bffb | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x34]      ; 0049bffd
    MOV dword ptr [EBX + 0x58],EDX      ; 0049c000
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c003
    MOV EBX,dword ptr [EAX]             ; 0049c006 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049c008
    MOV dword ptr [EBX + 0x80],EDX      ; 0049c00b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c011
    MOV EBX,dword ptr [EAX]             ; 0049c014 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049c016
    MOV dword ptr [EBX + 0x84],EDX      ; 0049c019
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049c01f
    MOV EDX,dword ptr [EAX]             ; 0049c022 | DAT_01bdd7e4
    MOV EBX,dword ptr [EBX + 0x34]      ; 0049c024
    MOV dword ptr [EDX + 0x88],EBX      ; 0049c027
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c02d
    MOV EBX,dword ptr [EAX]             ; 0049c030 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049c032
    MOV dword ptr [EBX + 0xb0],EDX      ; 0049c035
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c03b
    MOV EBX,dword ptr [EAX]             ; 0049c03e | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049c040
    MOV dword ptr [EBX + 0xb4],EDX      ; 0049c043
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c049
    PUSH 0x1                            ; 0049c04c
    MOV EBX,dword ptr [EAX]             ; 0049c04e | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x34]      ; 0049c050
    PUSH EAX                            ; 0049c053 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb8],EDX      ; 0049c054
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049c05a
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049c05f
    FLD float ptr [ESP + 0x30]          ; 0049c062
    FMUL double ptr [0x005c0630]        ; 0049c066 | DAT_005c0630
    MOV EBX,dword ptr [ESP + 0x370]     ; 0049c06c
    CALL crt_math.c_round_FUN_005a3120  ; 0049c073
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x384]       ; 0049c078
    TEST EBX,EBX                        ; 0049c07f
    JZ 0x0049c161                       ; 0049c081
        ;   XREF to: 0049c161 (CONDITIONAL_JUMP)  ; LAB_0049c161
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c087 | DAT_005f2afc
    MOV EBX,dword ptr [EDX]             ; 0049c08d | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x384]     ; 0049c08f
    MOV dword ptr [EBX + 0x2c],EAX      ; 0049c096
    MOV EAX,dword ptr [EDX]             ; 0049c099 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x5c],0x0      ; 0049c09b
    MOV EAX,dword ptr [EDX]             ; 0049c0a2 | DAT_01bdd7e4
    MOV dword ptr [EAX + 0x8c],0x0      ; 0049c0a4
    MOV EBX,dword ptr [EDX]             ; 0049c0ae | DAT_01bdd7e4
    MOV EAX,dword ptr [ESP + 0x384]     ; 0049c0b0
    MOV dword ptr [EBX + 0xbc],EAX      ; 0049c0b7
    LEA EAX,[ESP + 0x80]                ; 0049c0bd
    PUSH EAX                            ; 0049c0c4
    PUSH EDX                            ; 0049c0c5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0 ; 0049c0c6
        ;   XREF to: 0046c5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0049c0cb
    JMP 0x0049bcf3                      ; 0049c0ce
        ;   XREF to: 0049bcf3 (UNCONDITIONAL_JUMP)  ; LAB_0049bcf3
    XOR EDX,EDX                         ; 0049c0d3
        ;   Label: LAB_0049c0d3
    MOV dword ptr [ESP + 0x9c],EDX      ; 0049c0d5
    MOV EDX,EBX                         ; 0049c0dc
    SHL EDX,0x8                         ; 0049c0de
    MOV ECX,dword ptr [ESP + 0x38c]     ; 0049c0e1
    MOV EAX,EDX                         ; 0049c0e8
    SAR EDX,0x1f                        ; 0049c0ea
    IDIV ECX                            ; 0049c0ed
    MOV EBX,dword ptr [0x01c743f8]      ; 0049c0ef | DAT_01c743f8
    ADD EAX,EBX                         ; 0049c0f5
    SHL EAX,0x10                        ; 0049c0f7
    MOV dword ptr [ESP + 0xa0],EAX      ; 0049c0fa
    MOV EAX,dword ptr [ESP + 0x37c]     ; 0049c101
    MOV dword ptr [ESP + 0xa8],EAX      ; 0049c108
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0049c10f
    MOV dword ptr [ESP + 0xac],EAX      ; 0049c116
    MOV EAX,dword ptr [ESP + 0x37c]     ; 0049c11d
    MOV dword ptr [ESP + 0xb4],EAX      ; 0049c124
    MOV EAX,dword ptr [ESP + 0x380]     ; 0049c12b
    MOV EDX,EAX                         ; 0049c132
    SAR EDX,0x1f                        ; 0049c134
    IDIV ECX                            ; 0049c137
    ADD EAX,EBX                         ; 0049c139
    SHL EAX,0x10                        ; 0049c13b
    MOV dword ptr [ESP + 0xb8],EAX      ; 0049c13e
    XOR EAX,EAX                         ; 0049c145
    MOV dword ptr [ESP + 0xc0],EAX      ; 0049c147
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0049c14e
    MOV dword ptr [ESP + 0xc4],EAX      ; 0049c155
    JMP 0x0049bfbc                      ; 0049c15c
        ;   XREF to: 0049bfbc (UNCONDITIONAL_JUMP)  ; LAB_0049bfbc
    MOV ESI,dword ptr [ESP + 0x384]     ; 0049c161
        ;   Label: LAB_0049c161
    PUSH ESI                            ; 0049c168
    MOV EDI,dword ptr [0x005f2afc]      ; 0049c169 | DAT_005f2afc
    PUSH EDI                            ; 0049c16f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0049c170
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049c175
    LEA EAX,[ESP + 0x80]                ; 0049c178
    PUSH EAX                            ; 0049c17f
    MOV EAX,[0x005f2afc]                ; 0049c180 | DAT_005f2afc
    PUSH EAX                            ; 0049c185 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800 ; 0049c186
        ;   XREF to: 0046c800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0049c18b
    JMP 0x0049bcf3                      ; 0049c18e
        ;   XREF to: 0049bcf3 (UNCONDITIONAL_JUMP)  ; LAB_0049bcf3
    FLD1                                ; 0049c193
        ;   Label: LAB_0049c193
    FLD float ptr [ESP + 0x214]         ; 0049c195
    FXCH                                ; 0049c19c
    FDIV float ptr [ESP + 0x28]         ; 0049c19e
    FXCH                                ; 0049c1a2
    FMUL ST1                            ; 0049c1a4
    FLD float ptr [ESP + 0x218]         ; 0049c1a6
    FMUL ST2                            ; 0049c1ad
    FLD float ptr [ESP + 0x21c]         ; 0049c1af
    FMULP ST3                           ; 0049c1b6
    LEA EDI,[ESP + 0x298]               ; 0049c1b8
    LEA ESI,[ESP + 0x190]               ; 0049c1bf
    FXCH                                ; 0049c1c6
    FSTP float ptr [ESP + 0x190]        ; 0049c1c8
    FSTP float ptr [ESP + 0x194]        ; 0049c1cf
    FSTP float ptr [ESP + 0x198]        ; 0049c1d6
    MOVSD ES:EDI,ESI                    ; 0049c1dd
    MOVSD ES:EDI,ESI                    ; 0049c1de
    MOVSD ES:EDI,ESI                    ; 0049c1df
    FLD float ptr [0x005c0638]          ; 0049c1e0 | DAT_005c0638
    FLD float ptr [ESP + 0x298]         ; 0049c1e6
    FMUL ST1                            ; 0049c1ed
    FLD float ptr [ESP + 0x29c]         ; 0049c1ef
    FMUL ST2                            ; 0049c1f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049c1f8
    FLD float ptr [ESP + 0x2a0]         ; 0049c1fb
    FMULP ST3                           ; 0049c202
    ADD EAX,0x20                        ; 0049c204
    LEA EDI,[ESP + 0x13c]               ; 0049c207
    LEA ESI,[ESP + 0x154]               ; 0049c20e
    FXCH                                ; 0049c215
    FSTP float ptr [ESP + 0x154]        ; 0049c217
    FSTP float ptr [ESP + 0x158]        ; 0049c21e
    FSTP float ptr [ESP + 0x15c]        ; 0049c225
    MOVSD ES:EDI,ESI                    ; 0049c22c
    MOVSD ES:EDI,ESI                    ; 0049c22d
    MOVSD ES:EDI,ESI                    ; 0049c22e
    FLD float ptr [EAX + -0x14]         ; 0049c22f
    FLD float ptr [EAX + -0x10]         ; 0049c232
    FLD float ptr [EAX + -0xc]          ; 0049c235
    LEA EDI,[ESP + 0x2a4]               ; 0049c238
    LEA ESI,[ESP + 0x2b0]               ; 0049c23f
    FXCH ST2                            ; 0049c246
    FSUB float ptr [ESP + 0x13c]        ; 0049c248
    FXCH                                ; 0049c24f
    FSUB float ptr [ESP + 0x140]        ; 0049c251
    FXCH ST2                            ; 0049c258
    FSUB float ptr [ESP + 0x144]        ; 0049c25a
    FXCH                                ; 0049c261
    FSTP float ptr [ESP + 0x2b0]        ; 0049c263
    FXCH                                ; 0049c26a
    FSTP float ptr [ESP + 0x2b4]        ; 0049c26c
    FSTP float ptr [ESP + 0x2b8]        ; 0049c273
    MOVSD ES:EDI,ESI                    ; 0049c27a
    MOVSD ES:EDI,ESI                    ; 0049c27b
    MOVSD ES:EDI,ESI                    ; 0049c27c
    PUSH EAX                            ; 0049c27d
    LEA ESI,[ESP + 0x224]               ; 0049c27e
    LEA EDI,[ESP + 0x290]               ; 0049c285
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0049c28c
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x224]               ; 0049c291
    LEA EDX,[ESP + 0x290]               ; 0049c298
    ADD ESP,0x4                         ; 0049c29f
    LEA EAX,[ESP + 0x2c8]               ; 0049c2a2
    MOVSD ES:EDI,ESI                    ; 0049c2a9
    MOVSD ES:EDI,ESI                    ; 0049c2aa
    MOVSD ES:EDI,ESI                    ; 0049c2ab
    CMP EAX,EDX                         ; 0049c2ac
    JZ 0x0049c2da                       ; 0049c2ae
        ;   XREF to: 0049c2da (CONDITIONAL_JUMP)  ; LAB_0049c2da
    MOV EAX,dword ptr [ESP + 0x28c]     ; 0049c2b0
    MOV dword ptr [ESP + 0x2c8],EAX     ; 0049c2b7
    MOV EAX,dword ptr [ESP + 0x290]     ; 0049c2be
    MOV dword ptr [ESP + 0x2cc],EAX     ; 0049c2c5
    MOV EAX,dword ptr [ESP + 0x294]     ; 0049c2cc
    MOV dword ptr [ESP + 0x2d0],EAX     ; 0049c2d3
    LEA EAX,[ESP + 0x2a4]               ; 0049c2da
        ;   Label: LAB_0049c2da
    PUSH EAX                            ; 0049c2e1
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c2e2 | DAT_005f2afc
    PUSH EDX                            ; 0049c2e8 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0049c2e9
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0049c2ee
    PUSH 0x0                            ; 0049c2f1
    LEA EAX,[ESP + 0x2cc]               ; 0049c2f3
    PUSH EAX                            ; 0049c2fa
    MOV ECX,dword ptr [0x005f2afc]      ; 0049c2fb | DAT_005f2afc
    PUSH ECX                            ; 0049c301 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049c302
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049c307
    PUSH 0x5fcae4                       ; 0049c30a | DAT_005fcae4
    MOV EBX,dword ptr [0x005f2afc]      ; 0049c30f | DAT_005f2afc
    PUSH EBX                            ; 0049c315 | DAT_01bdd7e4
    MOV ESI,0x3ecccccd                  ; 0049c316
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0049c31b
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBX,[ESP + 0x120]               ; 0049c320
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c327 | DAT_005f2afc
    ADD ESP,0x8                         ; 0049c32d
    XOR EAX,EAX                         ; 0049c330
    MOV dword ptr [ESP + 0x208],ESI     ; 0049c332
    MOV dword ptr [ESP + 0x210],EAX     ; 0049c339
    LEA EAX,[ESP + 0x208]               ; 0049c340
    MOV dword ptr [ESP + 0x20c],ESI     ; 0049c347
    FLD float ptr [EAX]                 ; 0049c34e
    FMUL float ptr [0x005df8e4]         ; 0049c350 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049c356
    FLD float ptr [EAX + 0x4]           ; 0049c358
    FMUL float ptr [0x005df8e4]         ; 0049c35b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049c361
    FLD float ptr [EAX + 0x8]           ; 0049c364
    FMUL float ptr [0x005df8e4]         ; 0049c367 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049c36d
    LEA EAX,[ESP + 0x118]               ; 0049c370
    PUSH EAX                            ; 0049c377
    MOV EAX,dword ptr [EDX]             ; 0049c378 | DAT_01bdd7e4
    PUSH EAX                            ; 0049c37a
    CALL engine_special.cpp_FUN_005632a3 ; 0049c37b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049c380
    MOV BL,byte ptr [ESP + 0x20b]       ; 0049c383
    XOR BL,0x80                         ; 0049c38a
    LEA EAX,[ESP + 0x208]               ; 0049c38d
    MOV byte ptr [ESP + 0x20b],BL       ; 0049c394
    LEA EBX,[ESP + 0x2d4]               ; 0049c39b
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c3a2 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049c3a8
    FMUL float ptr [0x005df8e4]         ; 0049c3aa | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049c3b0
    FLD float ptr [EAX + 0x4]           ; 0049c3b2
    FMUL float ptr [0x005df8e4]         ; 0049c3b5 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049c3bb
    FLD float ptr [EAX + 0x8]           ; 0049c3be
    FMUL float ptr [0x005df8e4]         ; 0049c3c1 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049c3c7
    LEA EAX,[ESP + 0x2d4]               ; 0049c3ca
    PUSH EAX                            ; 0049c3d1
    MOV EAX,dword ptr [EDX]             ; 0049c3d2 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0049c3d4
    PUSH EAX                            ; 0049c3d7
    CALL engine_special.cpp_FUN_005632a3 ; 0049c3d8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049c3dd
    MOV BH,byte ptr [ESP + 0x20f]       ; 0049c3e0
    XOR BH,0x80                         ; 0049c3e7
    LEA EAX,[ESP + 0x208]               ; 0049c3ea
    MOV byte ptr [ESP + 0x20f],BH       ; 0049c3f1
    LEA EBX,[ESP + 0x2f8]               ; 0049c3f8
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c3ff | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0049c405
    FMUL float ptr [0x005df8e4]         ; 0049c407 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049c40d
    FLD float ptr [EAX + 0x4]           ; 0049c40f
    FMUL float ptr [0x005df8e4]         ; 0049c412 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049c418
    FLD float ptr [EAX + 0x8]           ; 0049c41b
    FMUL float ptr [0x005df8e4]         ; 0049c41e | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049c424
    LEA EAX,[ESP + 0x2f8]               ; 0049c427
    PUSH EAX                            ; 0049c42e
    MOV EAX,dword ptr [EDX]             ; 0049c42f | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0049c431
    PUSH EAX                            ; 0049c434
    CALL engine_special.cpp_FUN_005632a3 ; 0049c435
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049c43a
    LEA EBX,[ESP + 0x31c]               ; 0049c43d
    MOV CL,byte ptr [ESP + 0x20b]       ; 0049c444
    LEA EAX,[ESP + 0x208]               ; 0049c44b
    XOR CL,0x80                         ; 0049c452
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c455 | DAT_005f2afc
    MOV byte ptr [ESP + 0x20b],CL       ; 0049c45b
    FLD float ptr [EAX]                 ; 0049c462
    FMUL float ptr [0x005df8e4]         ; 0049c464 | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 0049c46a
    FLD float ptr [EAX + 0x4]           ; 0049c46c
    FMUL float ptr [0x005df8e4]         ; 0049c46f | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 0049c475
    FLD float ptr [EAX + 0x8]           ; 0049c478
    FMUL float ptr [0x005df8e4]         ; 0049c47b | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 0049c481
    LEA EAX,[ESP + 0x31c]               ; 0049c484
    PUSH EAX                            ; 0049c48b
    MOV EAX,dword ptr [EDX]             ; 0049c48c | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0049c48e
    PUSH EAX                            ; 0049c493
    CALL engine_special.cpp_FUN_005632a3 ; 0049c494
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049c499
    MOV EDX,0x4                         ; 0049c49c
    MOV EBX,0x3                         ; 0049c4a1
    MOV EAX,0x1000000                   ; 0049c4a6
    XOR ECX,ECX                         ; 0049c4ab
    XOR ESI,ESI                         ; 0049c4ad
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049c4af
    MOV dword ptr [ESP + 0x4c],ECX      ; 0049c4b3
    MOV dword ptr [ESP + 0x48],ECX      ; 0049c4b7
    MOV dword ptr [ESP + 0x44],ECX      ; 0049c4bb
    MOV dword ptr [ESP + 0x40],ECX      ; 0049c4bf
    MOV dword ptr [ESP + 0x50],ECX      ; 0049c4c3
    MOV dword ptr [ESP + 0x74],EBX      ; 0049c4c7
    MOV dword ptr [ESP + 0x54],ESI      ; 0049c4cb
    MOV dword ptr [ESP + 0x58],ESI      ; 0049c4cf
    MOV dword ptr [ESP + 0x60],EAX      ; 0049c4d3
    MOV dword ptr [ESP + 0x6c],EAX      ; 0049c4d7
    MOV dword ptr [ESP + 0x70],EAX      ; 0049c4db
    MOV dword ptr [ESP + 0x7c],EAX      ; 0049c4df
    MOV EDX,0x1                         ; 0049c4e3
    MOV ECX,0x2                         ; 0049c4e8
    MOV EAX,[0x005f2afc]                ; 0049c4ed | DAT_005f2afc
    MOV dword ptr [ESP + 0x5c],EDX      ; 0049c4f2
    XOR EDX,EDX                         ; 0049c4f6
    MOV dword ptr [ESP + 0x68],ECX      ; 0049c4f8
    MOV dword ptr [ESP + 0x64],EDX      ; 0049c4fc
    MOV dword ptr [ESP + 0x78],EDX      ; 0049c500
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c504
    MOV EBX,dword ptr [EAX]             ; 0049c507 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049c509
    MOV dword ptr [EBX + 0x20],EDX      ; 0049c50c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c50f
    MOV EBX,dword ptr [EAX]             ; 0049c512 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049c514
    MOV dword ptr [EBX + 0x24],EDX      ; 0049c517
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c51a
    MOV EBX,dword ptr [EAX]             ; 0049c51d | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x34]      ; 0049c51f
    MOV dword ptr [EBX + 0x28],EDX      ; 0049c522
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c525
    MOV EBX,dword ptr [EAX]             ; 0049c528 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049c52a
    MOV dword ptr [EBX + 0x50],EDX      ; 0049c52d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c530
    MOV EBX,dword ptr [EAX]             ; 0049c533 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049c535
    MOV dword ptr [EBX + 0x54],EDX      ; 0049c538
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c53b
    MOV EBX,dword ptr [EAX]             ; 0049c53e | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x34]      ; 0049c540
    MOV dword ptr [EBX + 0x58],EDX      ; 0049c543
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c546
    MOV EBX,dword ptr [EAX]             ; 0049c549 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049c54b
    MOV dword ptr [EBX + 0x80],EDX      ; 0049c54e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c554
    MOV EBX,dword ptr [EAX]             ; 0049c557 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049c559
    MOV dword ptr [EBX + 0x84],EDX      ; 0049c55c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c562
    MOV EBX,dword ptr [EAX]             ; 0049c565 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x34]      ; 0049c567
    MOV dword ptr [EBX + 0x88],EDX      ; 0049c56a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c570
    MOV EBX,dword ptr [EAX]             ; 0049c573 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049c575
    MOV dword ptr [EBX + 0xb0],EDX      ; 0049c578
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c57e
    MOV EBX,dword ptr [EAX]             ; 0049c581 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049c583
    MOV dword ptr [EBX + 0xb4],EDX      ; 0049c586
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049c58c
    PUSH 0x1                            ; 0049c58f
    MOV EBX,dword ptr [EAX]             ; 0049c591 | DAT_01bdd7e4
    MOV EDX,dword ptr [EDX + 0x34]      ; 0049c593
    PUSH EAX                            ; 0049c596 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0xb8],EDX      ; 0049c597
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0049c59d
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049c5a2
    PUSH 0x471fff00                     ; 0049c5a5
    PUSH 0x47000000                     ; 0049c5aa
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0049c5af
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 0049c5b4
    FLD float ptr [ESP + 0x3a4]         ; 0049c5bb
    ADD ESP,0x8                         ; 0049c5c2
    FMUL float ptr [ESP + 0x1c]         ; 0049c5c5
    CALL crt_math.c_round_FUN_005a3120  ; 0049c5c9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x398]       ; 0049c5ce
    MOV EAX,dword ptr [ESP + 0x398]     ; 0049c5d5
    PUSH EAX                            ; 0049c5dc
    MOV EDX,dword ptr [0x005f2afc]      ; 0049c5dd | DAT_005f2afc
    PUSH EDX                            ; 0049c5e3 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0049c5e4
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049c5e9
    LEA EAX,[ESP + 0x38]                ; 0049c5ec
    PUSH EAX                            ; 0049c5f0
    MOV ECX,dword ptr [0x005f2afc]      ; 0049c5f1 | DAT_005f2afc
    PUSH ECX                            ; 0049c5f7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800 ; 0049c5f8
        ;   XREF to: 0046c800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046c800(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0049c5fd
    MOV EBX,dword ptr [0x005f2afc]      ; 0049c600 | DAT_005f2afc
    PUSH EBX                            ; 0049c606 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0049c607
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0049c60c
    JMP 0x0049bd44                      ; 0049c60f
        ;   XREF to: 0049bd44 (UNCONDITIONAL_JUMP)  ; LAB_0049bd44

