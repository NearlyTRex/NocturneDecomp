; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_render_FUN_004b01a0(CLaserBeam *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b52ce
;
; Referenced Globals:
;   undefined4 DAT_005df2cc
;   undefined4 DAT_005df2d4
;   undefined4 DAT_005df2dc
;   undefined4 DAT_005df2e4
;   undefined4 DAT_005df2ec
;   undefined4 DAT_005df2f0
;   undefined4 DAT_005df2f4
;   undefined4 DAT_005df2fc
;   undefined4 DAT_005df304
;   undefined4 DAT_005df30c
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c4c4
;   undefined4 DAT_0061c4dc
;   undefined4 DAT_0061c4f4
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f700
;   core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b01a0
        ;   Label: core_fire.cpp_CLaserBeam_render_FUN_004b01a0
    PUSH ESI                            ; 004b01a1
    PUSH EDI                            ; 004b01a2
    PUSH EBP                            ; 004b01a3
    MOV EBP,ESP                         ; 004b01a4
    SUB ESP,0x3a0                       ; 004b01a6
    AND ESP,0xfffffff8                  ; 004b01ac
    PUSH 0x61c4c4                       ; 004b01af | DAT_0061c4c4
    MOV EDX,dword ptr [0x00612560]      ; 004b01b4 | DAT_00612560
    PUSH EDX                            ; 004b01ba | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b01bb
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b01c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b01c3
    LEA EDI,[ESP + 0x214]               ; 004b01c6
    LEA ESI,[ESP + 0x1b4]               ; 004b01cd
    FLD float ptr [EAX + 0xc]           ; 004b01d4
    FLD float ptr [EAX + 0x10]          ; 004b01d7
    FLD float ptr [EAX + 0x14]          ; 004b01da
    FXCH ST2                            ; 004b01dd
    FSUB float ptr [EAX]                ; 004b01df
    FXCH                                ; 004b01e1
    FSUB float ptr [EAX + 0x4]          ; 004b01e3
    FXCH ST2                            ; 004b01e6
    FSUB float ptr [EAX + 0x8]          ; 004b01e8
    FXCH                                ; 004b01eb
    FSTP float ptr [ESP + 0x1b4]        ; 004b01ed
    FXCH                                ; 004b01f4
    FSTP float ptr [ESP + 0x1b8]        ; 004b01f6
    FSTP float ptr [ESP + 0x1bc]        ; 004b01fd
    LEA EAX,[ESP + 0x214]               ; 004b0204
    MOVSD ES:EDI,ESI                    ; 004b020b
    MOVSD ES:EDI,ESI                    ; 004b020c
    MOVSD ES:EDI,ESI                    ; 004b020d
    PUSH EAX                            ; 004b020e
    LEA ESI,[ESP + 0x26c]               ; 004b020f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004b0216
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 004b021b
    FLD float ptr [ESP + 0x218]         ; 004b021e
    FMUL ST0                            ; 004b0225
    FLD float ptr [ESP + 0x214]         ; 004b0227
    FMUL ST0                            ; 004b022e
    FADDP                               ; 004b0230
    FLD float ptr [ESP + 0x21c]         ; 004b0232
    FMUL ST0                            ; 004b0239
    FADDP                               ; 004b023b
    FSQRT                               ; 004b023d
    LEA EDI,[ESP + 0x2c8]               ; 004b023f
    LEA EAX,[ESP + 0x2c8]               ; 004b0246
    LEA ESI,[ESP + 0x268]               ; 004b024d
    PUSH EAX                            ; 004b0254
    LEA EAX,[ESP + 0xf4]                ; 004b0255
    MOVSD ES:EDI,ESI                    ; 004b025c
    MOVSD ES:EDI,ESI                    ; 004b025d
    MOVSD ES:EDI,ESI                    ; 004b025e
    PUSH EAX                            ; 004b025f
    FSTP float ptr [ESP + 0x30]         ; 004b0260
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004b0264
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004b0269
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b026c
    LEA ESI,[ESP + 0x280]               ; 004b026f
    LEA EDI,[ESP + 0x250]               ; 004b0276
    MOV EAX,dword ptr [EAX + 0x18]      ; 004b027d
    MOV EBX,dword ptr [0x00612560]      ; 004b0280 | DAT_00612560
    MOV dword ptr [ESP + 0x30],EAX      ; 004b0286
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b028a
    XOR ECX,ECX                         ; 004b028d
    PUSH EBX                            ; 004b028f | DAT_01bc120c
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004b0290
    MOV dword ptr [ESP + 0x24],ECX      ; 004b0293
    MOV dword ptr [ESP + 0x20],EAX      ; 004b0297
    CALL engine_matrix.c_FUN_00483ae0   ; 004b029b
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA ESI,[ESP + 0x284]               ; 004b02a0
    ADD ESP,0x4                         ; 004b02a7
    LEA EDX,[ESP + 0x1d8]               ; 004b02aa
    MOVSD ES:EDI,ESI                    ; 004b02b1
    MOVSD ES:EDI,ESI                    ; 004b02b2
    MOVSD ES:EDI,ESI                    ; 004b02b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b02b4
    FLD float ptr [ESP + 0x250]         ; 004b02b7
    FLD float ptr [ESP + 0x254]         ; 004b02be
    FLD float ptr [ESP + 0x258]         ; 004b02c5
    LEA EDI,[ESP + 0x160]               ; 004b02cc
    LEA ESI,[ESP + 0x1cc]               ; 004b02d3
    FXCH ST2                            ; 004b02da
    FSUB float ptr [EAX]                ; 004b02dc
    FXCH                                ; 004b02de
    FSUB float ptr [EAX + 0x4]          ; 004b02e0
    FXCH ST2                            ; 004b02e3
    FSUB float ptr [EAX + 0x8]          ; 004b02e5
    FXCH                                ; 004b02e8
    FSTP float ptr [ESP + 0x1cc]        ; 004b02ea
    FXCH                                ; 004b02f1
    FSTP float ptr [ESP + 0x1d0]        ; 004b02f3
    FSTP float ptr [ESP + 0x1d4]        ; 004b02fa
    LEA EAX,[ESP + 0x160]               ; 004b0301
    MOVSD ES:EDI,ESI                    ; 004b0308
    MOVSD ES:EDI,ESI                    ; 004b0309
    MOVSD ES:EDI,ESI                    ; 004b030a
    CMP EDX,EAX                         ; 004b030b
    JNZ 0x004b0d2a                      ; 004b030d
        ;   XREF to: 004b0d2a (CONDITIONAL_JUMP)  ; LAB_004b0d2a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0313
        ;   Label: LAB_004b0313
    LEA EDI,[ESP + 0x244]               ; 004b0316
    LEA ESI,[ESP + 0x16c]               ; 004b031d
    LEA EDX,[ESP + 0x244]               ; 004b0324
    FLD float ptr [EAX + 0xc]           ; 004b032b
    FLD float ptr [EAX + 0x10]          ; 004b032e
    FLD float ptr [EAX + 0x14]          ; 004b0331
    FXCH ST2                            ; 004b0334
    FSUB float ptr [EAX]                ; 004b0336
    FXCH                                ; 004b0338
    FSUB float ptr [EAX + 0x4]          ; 004b033a
    FXCH ST2                            ; 004b033d
    FSUB float ptr [EAX + 0x8]          ; 004b033f
    FXCH                                ; 004b0342
    FSTP float ptr [ESP + 0x16c]        ; 004b0344
    FXCH                                ; 004b034b
    FSTP float ptr [ESP + 0x170]        ; 004b034d
    FSTP float ptr [ESP + 0x174]        ; 004b0354
    LEA EAX,[ESP + 0x1e4]               ; 004b035b
    MOVSD ES:EDI,ESI                    ; 004b0362
    MOVSD ES:EDI,ESI                    ; 004b0363
    MOVSD ES:EDI,ESI                    ; 004b0364
    CMP EAX,EDX                         ; 004b0365
    JZ 0x004b0393                       ; 004b0367
        ;   XREF to: 004b0393 (CONDITIONAL_JUMP)  ; LAB_004b0393
    MOV EAX,dword ptr [ESP + 0x244]     ; 004b0369
    MOV dword ptr [ESP + 0x1e4],EAX     ; 004b0370
    MOV EAX,dword ptr [ESP + 0x248]     ; 004b0377
    MOV dword ptr [ESP + 0x1e8],EAX     ; 004b037e
    MOV EAX,dword ptr [ESP + 0x24c]     ; 004b0385
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004b038c
    FLD float ptr [ESP + 0x1dc]         ; 004b0393
        ;   Label: LAB_004b0393
    FMUL float ptr [ESP + 0x1e8]        ; 004b039a
    FLD float ptr [ESP + 0x1d8]         ; 004b03a1
    FMUL float ptr [ESP + 0x1e4]        ; 004b03a8
    FADDP                               ; 004b03af
    FLD float ptr [ESP + 0x1e0]         ; 004b03b1
    FMUL float ptr [ESP + 0x1ec]        ; 004b03b8
    MOV ESI,0x43e00000                  ; 004b03bf
    FADDP                               ; 004b03c4
    MOV dword ptr [ESP + 0x34],ESI      ; 004b03c6
    FST float ptr [ESP + 0x18]          ; 004b03ca
    FLDZ                                ; 004b03ce
    FCOMPP                              ; 004b03d0
    FNSTSW AX                           ; 004b03d2
    SAHF                                ; 004b03d4
    JNC 0x004b0480                      ; 004b03d5
        ;   XREF to: 004b0480 (CONDITIONAL_JUMP)  ; LAB_004b0480
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b03db
    FLDZ                                ; 004b03de
    FLD float ptr [EAX + 0x3c]          ; 004b03e0
    FSTP double ptr [ESP + 0x8]         ; 004b03e3
    FCOMP double ptr [ESP + 0x8]        ; 004b03e7
    FNSTSW AX                           ; 004b03eb
    SAHF                                ; 004b03ed
    JNC 0x004b0d59                      ; 004b03ee
        ;   XREF to: 004b0d59 (CONDITIONAL_JUMP)  ; LAB_004b0d59
    FLD double ptr [ESP + 0x8]          ; 004b03f4
    FCOS                                ; 004b03f8
    FLD float ptr [ESP + 0x1dc]         ; 004b03fa
    FMUL ST0                            ; 004b0401
    FLD float ptr [ESP + 0x1d8]         ; 004b0403
    FMUL ST0                            ; 004b040a
    FADDP                               ; 004b040c
    FLD float ptr [ESP + 0x1e0]         ; 004b040e
    FMUL ST0                            ; 004b0415
    FADDP                               ; 004b0417
    FSQRT                               ; 004b0419
    FLD float ptr [ESP + 0x1e8]         ; 004b041b
    FMUL ST0                            ; 004b0422
    FLD float ptr [ESP + 0x1e4]         ; 004b0424
    FMUL ST0                            ; 004b042b
    FADDP                               ; 004b042d
    FLD float ptr [ESP + 0x1ec]         ; 004b042f
    FMUL ST0                            ; 004b0436
    FADDP                               ; 004b0438
    FSQRT                               ; 004b043a
    FMULP                               ; 004b043c
    FDIVR float ptr [ESP + 0x18]        ; 004b043e
    FXCH                                ; 004b0442
    FSTP float ptr [ESP + 0x2c]         ; 004b0444
    FST float ptr [ESP + 0x364]         ; 004b0448
    FCOMP float ptr [ESP + 0x2c]        ; 004b044f
    FNSTSW AX                           ; 004b0453
    SAHF                                ; 004b0455
    JBE 0x004b046f                      ; 004b0456
        ;   XREF to: 004b046f (CONDITIONAL_JUMP)  ; LAB_004b046f
    FLD float ptr [ESP + 0x2c]          ; 004b0458
    FLD float ptr [ESP + 0x364]         ; 004b045c
    FSUB ST0,ST1                        ; 004b0463
    FLD1                                ; 004b0465
    FSUBRP ST2,ST0                      ; 004b0467
    FDIVRP                              ; 004b0469
    FSTP float ptr [ESP + 0x20]         ; 004b046b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b046f
        ;   Label: LAB_004b046f
    FLD float ptr [EAX + 0x3c]          ; 004b0472
    FPTAN                               ; 004b0475
    FSTP ST0                            ; 004b0477
    FSTP float ptr [ESP + 0x368]        ; 004b0479
    PUSH 0x0                            ; 004b0480
        ;   Label: LAB_004b0480
    MOV EAX,[0x00612560]                ; 004b0482 | DAT_00612560
    PUSH EAX                            ; 004b0487 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 004b0488
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004b048d
    FLDZ                                ; 004b0490
    FLD float ptr [ESP + 0x20]          ; 004b0492
    FSTP double ptr [ESP]               ; 004b0496
    FCOMP double ptr [ESP]              ; 004b0499
    FNSTSW AX                           ; 004b049c
    SAHF                                ; 004b049e
    JNC 0x004b0a03                      ; 004b049f
        ;   XREF to: 004b0a03 (CONDITIONAL_JUMP)  ; LAB_004b0a03
    MOV EAX,[0x0061d95c]                ; 004b04a5 | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 004b04aa | g_CGameInstance.halo_mode
    JZ 0x004b0a03                       ; 004b04ae
        ;   XREF to: 004b0a03 (CONDITIONAL_JUMP)  ; LAB_004b0a03
    FLD double ptr [ESP]                ; 004b04b4
    FMUL double ptr [0x005df2d4]        ; 004b04b7 | DAT_005df2d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b04bd
    FLD float ptr [ESP + 0x20]          ; 004b04c0
    FMUL float ptr [EAX + 0x18]         ; 004b04c4
    FLD float ptr [ESP + 0x30]          ; 004b04c7
    FLD ST0                             ; 004b04cb
    FLD1                                ; 004b04cd
    FSUBRP ST4,ST0                      ; 004b04cf
    FMUL ST3                            ; 004b04d1
    FLD float ptr [ESP + 0x1c]          ; 004b04d3
    FMUL ST4                            ; 004b04d7
    PUSH 0x1                            ; 004b04d9
    MOV ECX,dword ptr [0x00612560]      ; 004b04db | DAT_00612560
    XOR EBX,EBX                         ; 004b04e1
    PUSH ECX                            ; 004b04e3 | DAT_01bc120c
    FXCH ST3                            ; 004b04e4
    FSTP float ptr [ESP + 0x28]         ; 004b04e6
    FSTP ST1                            ; 004b04ea
    FXCH ST2                            ; 004b04ec
    FSTP ST1                            ; 004b04ee
    FXCH                                ; 004b04f0
    FSTP float ptr [ESP + 0x38]         ; 004b04f2
    FSTP float ptr [ESP + 0x24]         ; 004b04f6
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b04fa
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b04ff
    MOV dword ptr [ESP + 0x390],EBX     ; 004b0502
    MOV EAX,dword ptr [ESP + 0x390]     ; 004b0509
        ;   Label: LAB_004b0509
    MOV dword ptr [ESP + 0x398],EAX     ; 004b0510
    FILD dword ptr [ESP + 0x398]        ; 004b0517
    FMUL float ptr [0x005df2dc]         ; 004b051e | DAT_005df2dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0524
    FMUL float ptr [ESP + 0x28]         ; 004b0527
    FLD float ptr [EAX + 0x3c]          ; 004b052b
    FLDZ                                ; 004b052e
    FXCH ST2                            ; 004b0530
    FSTP float ptr [ESP + 0x24]         ; 004b0532
    FXCH                                ; 004b0536
    FCOMPP                              ; 004b0538
    FNSTSW AX                           ; 004b053a
    SAHF                                ; 004b053c
    JNC 0x004b0eaf                      ; 004b053d
        ;   XREF to: 004b0eaf (CONDITIONAL_JUMP)  ; LAB_004b0eaf
    FLD float ptr [ESP + 0x368]         ; 004b0543
    FMUL float ptr [ESP + 0x24]         ; 004b054a
        ;   Label: LAB_004b054a
    FSTP float ptr [ESP + 0x388]        ; 004b054e
    FLD float ptr [ESP + 0x24]          ; 004b0555
    FLD float ptr [ESP + 0xf8]          ; 004b0559
    FMUL ST1                            ; 004b0560
    FLD float ptr [ESP + 0x104]         ; 004b0562
    FMUL ST2                            ; 004b0569
    FLD float ptr [ESP + 0x110]         ; 004b056b
    FMULP ST3                           ; 004b0572
    LEA EDI,[ESP + 0x22c]               ; 004b0574
    LEA ESI,[ESP + 0x1f0]               ; 004b057b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0582
    FXCH                                ; 004b0585
    FSTP float ptr [ESP + 0x1f0]        ; 004b0587
    FSTP float ptr [ESP + 0x1f4]        ; 004b058e
    FSTP float ptr [ESP + 0x1f8]        ; 004b0595
    MOVSD ES:EDI,ESI                    ; 004b059c
    MOVSD ES:EDI,ESI                    ; 004b059d
    MOVSD ES:EDI,ESI                    ; 004b059e
    LEA EDX,[ESP + 0x238]               ; 004b059f
    FLD float ptr [EAX + 0x4]           ; 004b05a6
    FLD float ptr [EAX + 0x8]           ; 004b05a9
    FLD float ptr [EAX]                 ; 004b05ac
    LEA EDI,[ESP + 0x25c]               ; 004b05ae
    LEA ESI,[ESP + 0x19c]               ; 004b05b5
    LEA EAX,[ESP + 0x25c]               ; 004b05bc
    FADD float ptr [ESP + 0x22c]        ; 004b05c3
    FXCH ST2                            ; 004b05ca
    FADD float ptr [ESP + 0x230]        ; 004b05cc
    FXCH                                ; 004b05d3
    FADD float ptr [ESP + 0x234]        ; 004b05d5
    FXCH ST2                            ; 004b05dc
    FSTP float ptr [ESP + 0x19c]        ; 004b05de
    FSTP float ptr [ESP + 0x1a0]        ; 004b05e5
    FSTP float ptr [ESP + 0x1a4]        ; 004b05ec
    MOVSD ES:EDI,ESI                    ; 004b05f3
    MOVSD ES:EDI,ESI                    ; 004b05f4
    MOVSD ES:EDI,ESI                    ; 004b05f5
    CMP EDX,EAX                         ; 004b05f6
    JZ 0x004b0624                       ; 004b05f8
        ;   XREF to: 004b0624 (CONDITIONAL_JUMP)  ; LAB_004b0624
    MOV EAX,dword ptr [ESP + 0x25c]     ; 004b05fa
    MOV dword ptr [ESP + 0x238],EAX     ; 004b0601
    MOV EAX,dword ptr [ESP + 0x260]     ; 004b0608
    MOV dword ptr [ESP + 0x23c],EAX     ; 004b060f
    MOV EAX,dword ptr [ESP + 0x264]     ; 004b0616
    MOV dword ptr [ESP + 0x240],EAX     ; 004b061d
    LEA EAX,[ESP + 0x238]               ; 004b0624
        ;   Label: LAB_004b0624
    PUSH EAX                            ; 004b062b
    MOV ESI,dword ptr [0x00612560]      ; 004b062c | DAT_00612560
    PUSH ESI                            ; 004b0632 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b0633
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b0638
    MOV EDI,dword ptr [0x00612560]      ; 004b063b | DAT_00612560
    PUSH EDI                            ; 004b0641 | DAT_01bc120c
    LEA ESI,[ESP + 0x128]               ; 004b0642
    LEA EBX,[ESP + 0x278]               ; 004b0649
    CALL engine_matrix.c_FUN_00483b70   ; 004b0650
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    LEA EDI,[ESP + 0x1c4]               ; 004b0655
    ADD ESP,0x4                         ; 004b065c
    LEA ESI,[ESP + 0x124]               ; 004b065f
    MOV EAX,dword ptr [ESP + 0x390]     ; 004b0666
    PUSH 0x0                            ; 004b066d
    MOVSD ES:EDI,ESI                    ; 004b066f
    MOVSD ES:EDI,ESI                    ; 004b0670
    MOVSD ES:EDI,ESI                    ; 004b0671
    MOV dword ptr [ESP + 0x39c],EAX     ; 004b0672
    LEA EAX,[ESP + 0x1c4]               ; 004b0679
    FILD dword ptr [ESP + 0x39c]        ; 004b0680
    PUSH EAX                            ; 004b0687
    MOV EAX,[0x00612560]                ; 004b0688 | DAT_00612560
    FADD float ptr [ESP + 0x1d0]        ; 004b068d
    PUSH EAX                            ; 004b0694 | DAT_01bc120c
    FSTP float ptr [ESP + 0x1d4]        ; 004b0695
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b069c
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b06a1
    XOR EDX,EDX                         ; 004b06a4
    MOV EAX,dword ptr [ESP + 0x388]     ; 004b06a6
    MOV dword ptr [ESP + 0x2f4],EDX     ; 004b06ad
    MOV dword ptr [ESP + 0x2ec],EAX     ; 004b06b4
    MOV dword ptr [ESP + 0x2f0],EAX     ; 004b06bb
    LEA EAX,[ESP + 0x2ec]               ; 004b06c2
    MOV EDX,dword ptr [0x00612560]      ; 004b06c9 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b06cf
    FMUL float ptr [0x005fff94]         ; 004b06d1 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b06d7
    FLD float ptr [EAX + 0x4]           ; 004b06d9
    FMUL float ptr [0x005fff94]         ; 004b06dc | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b06e2
    FLD float ptr [EAX + 0x8]           ; 004b06e5
    FMUL float ptr [0x005fff94]         ; 004b06e8 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b06ee
    LEA EAX,[ESP + 0x274]               ; 004b06f1
    PUSH EAX                            ; 004b06f8
    MOV EAX,dword ptr [EDX]             ; 004b06f9 | DAT_01bc120c
    PUSH EAX                            ; 004b06fb
    CALL engine_special.cpp_FUN_00580173 ; 004b06fc
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b0701
    MOV AH,byte ptr [ESP + 0x2ef]       ; 004b0704
    XOR AH,0x80                         ; 004b070b
    LEA EBX,[ESP + 0x2e0]               ; 004b070e
    MOV byte ptr [ESP + 0x2ef],AH       ; 004b0715
    LEA EAX,[ESP + 0x2ec]               ; 004b071c
    MOV EDX,dword ptr [0x00612560]      ; 004b0723 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b0729
    FMUL float ptr [0x005fff94]         ; 004b072b | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b0731
    FLD float ptr [EAX + 0x4]           ; 004b0733
    FMUL float ptr [0x005fff94]         ; 004b0736 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b073c
    FLD float ptr [EAX + 0x8]           ; 004b073f
    FMUL float ptr [0x005fff94]         ; 004b0742 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b0748
    LEA EAX,[ESP + 0x2e0]               ; 004b074b
    PUSH EAX                            ; 004b0752
    MOV EAX,dword ptr [EDX]             ; 004b0753 | DAT_01bc120c
    ADD EAX,0x30                        ; 004b0755
    PUSH EAX                            ; 004b0758
    CALL engine_special.cpp_FUN_00580173 ; 004b0759
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b075e
    MOV DL,byte ptr [ESP + 0x2f3]       ; 004b0761
    LEA EBX,[ESP + 0x310]               ; 004b0768
    XOR DL,0x80                         ; 004b076f
    LEA EAX,[ESP + 0x2ec]               ; 004b0772
    MOV byte ptr [ESP + 0x2f3],DL       ; 004b0779
    MOV EDX,dword ptr [0x00612560]      ; 004b0780 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b0786
    FMUL float ptr [0x005fff94]         ; 004b0788 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b078e
    FLD float ptr [EAX + 0x4]           ; 004b0790
    FMUL float ptr [0x005fff94]         ; 004b0793 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b0799
    FLD float ptr [EAX + 0x8]           ; 004b079c
    FMUL float ptr [0x005fff94]         ; 004b079f | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b07a5
    LEA EAX,[ESP + 0x310]               ; 004b07a8
    PUSH EAX                            ; 004b07af
    MOV EAX,dword ptr [EDX]             ; 004b07b0 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b07b2
    PUSH EAX                            ; 004b07b5
    CALL engine_special.cpp_FUN_00580173 ; 004b07b6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b07bb
    MOV DH,byte ptr [ESP + 0x2ef]       ; 004b07be
    LEA EBX,[ESP + 0x2bc]               ; 004b07c5
    XOR DH,0x80                         ; 004b07cc
    LEA EAX,[ESP + 0x2ec]               ; 004b07cf
    MOV byte ptr [ESP + 0x2ef],DH       ; 004b07d6
    MOV EDX,dword ptr [0x00612560]      ; 004b07dd | DAT_00612560
    FLD float ptr [EAX]                 ; 004b07e3
    FMUL float ptr [0x005fff94]         ; 004b07e5 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b07eb
    FLD float ptr [EAX + 0x4]           ; 004b07ed
    FMUL float ptr [0x005fff94]         ; 004b07f0 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b07f6
    FLD float ptr [EAX + 0x8]           ; 004b07f9
    FMUL float ptr [0x005fff94]         ; 004b07fc | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b0802
    LEA EAX,[ESP + 0x2bc]               ; 004b0805
    PUSH EAX                            ; 004b080c
    MOV EAX,dword ptr [EDX]             ; 004b080d | DAT_01bc120c
    ADD EAX,0x90                        ; 004b080f
    PUSH EAX                            ; 004b0814
    CALL engine_special.cpp_FUN_00580173 ; 004b0815
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b081a
    PUSH 0x61c50c                       ; 004b081d | DAT_0061c50c
    MOV ECX,dword ptr [0x00612560]      ; 004b0822 | DAT_00612560
    PUSH ECX                            ; 004b0828 | DAT_01bc120c
    MOV EBX,0x4                         ; 004b0829
    XOR ESI,ESI                         ; 004b082e
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b0830
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b0835
    MOV EDX,dword ptr [0x00612560]      ; 004b0838 | DAT_00612560
    FLD float ptr [ESP + 0x20]          ; 004b083e
    MOV dword ptr [ESP + 0xcc],EBX      ; 004b0842
    MOV dword ptr [ESP + 0xdc],ESI      ; 004b0849
    MOV dword ptr [ESP + 0xd8],ESI      ; 004b0850
    MOV dword ptr [ESP + 0xd4],ESI      ; 004b0857
    MOV dword ptr [ESP + 0xd0],ESI      ; 004b085e
    MOV dword ptr [ESP + 0xe0],ESI      ; 004b0865
    FMUL double ptr [0x005df2e4]        ; 004b086c | DAT_005df2e4
    MOV EBX,dword ptr [EDX]             ; 004b0872 | DAT_01bc120c
    CALL crt_math.c_round_FUN_005c03a0  ; 004b0874
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x33c]       ; 004b0879
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004b0880
    MOV dword ptr [EBX + 0x2c],EAX      ; 004b0887
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b088a
    MOV EBX,dword ptr [EDX]             ; 004b088d
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004b088f
    MOV dword ptr [EBX + 0x20],EAX      ; 004b0892
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0895
    MOV EBX,dword ptr [EDX]             ; 004b0898
    MOV EAX,dword ptr [EAX + 0x30]      ; 004b089a
    MOV dword ptr [EBX + 0x24],EAX      ; 004b089d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b08a0
    MOV EBX,dword ptr [EDX]             ; 004b08a3
    MOV EAX,dword ptr [EAX + 0x34]      ; 004b08a5
    MOV dword ptr [EBX + 0x28],EAX      ; 004b08a8
    MOV dword ptr [ESP + 0xe4],0x1      ; 004b08ab
    MOV EBX,dword ptr [EDX]             ; 004b08b6
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004b08b8
    MOV dword ptr [EBX + 0x5c],EAX      ; 004b08bf
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b08c2
    MOV EAX,dword ptr [EDX]             ; 004b08c5
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004b08c7
    MOV dword ptr [EAX + 0x50],EBX      ; 004b08ca
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b08cd
    MOV EAX,dword ptr [EDX]             ; 004b08d0
    MOV EBX,dword ptr [EBX + 0x30]      ; 004b08d2
    MOV dword ptr [EAX + 0x54],EBX      ; 004b08d5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b08d8
    MOV EAX,dword ptr [EDX]             ; 004b08db
    MOV EBX,dword ptr [EBX + 0x34]      ; 004b08dd
    MOV ESI,0x2                         ; 004b08e0
    MOV dword ptr [EAX + 0x58],EBX      ; 004b08e5
    MOV dword ptr [ESP + 0xe8],ESI      ; 004b08e8
    MOV EBX,dword ptr [EDX]             ; 004b08ef
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004b08f1
    MOV dword ptr [EBX + 0x8c],EAX      ; 004b08f8
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b08fe
    MOV EAX,dword ptr [EDX]             ; 004b0901
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004b0903
    MOV dword ptr [EAX + 0x80],EBX      ; 004b0906
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b090c
    MOV EAX,dword ptr [EDX]             ; 004b090f
    MOV EBX,dword ptr [EBX + 0x30]      ; 004b0911
    MOV dword ptr [EAX + 0x84],EBX      ; 004b0914
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b091a
    MOV EAX,dword ptr [EDX]             ; 004b091d
    MOV EBX,dword ptr [EBX + 0x34]      ; 004b091f
    MOV EDI,0x3                         ; 004b0922
    MOV dword ptr [EAX + 0x88],EBX      ; 004b0927
    MOV dword ptr [ESP + 0xec],EDI      ; 004b092d
    MOV EBX,dword ptr [EDX]             ; 004b0934
    MOV EAX,dword ptr [ESP + 0x33c]     ; 004b0936
    MOV dword ptr [EBX + 0xbc],EAX      ; 004b093d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b0943
    MOV EAX,dword ptr [EDX]             ; 004b0946
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004b0948
    MOV dword ptr [EAX + 0xb0],EBX      ; 004b094b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b0951
    MOV EAX,dword ptr [EDX]             ; 004b0954
    MOV EBX,dword ptr [EBX + 0x30]      ; 004b0956
    MOV dword ptr [EAX + 0xb4],EBX      ; 004b0959
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b095f
    MOV EAX,dword ptr [EDX]             ; 004b0962
    MOV EBX,dword ptr [EBX + 0x34]      ; 004b0964
    MOV dword ptr [EAX + 0xb8],EBX      ; 004b0967
    MOV EAX,dword ptr [EDX]             ; 004b096d
    MOV dword ptr [EAX + 0x18],0xf80000 ; 004b096f
    MOV EAX,dword ptr [EDX]             ; 004b0976
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 004b0978
    MOV EAX,dword ptr [EDX]             ; 004b097f
    MOV dword ptr [EAX + 0x48],0x80000  ; 004b0981
    MOV EAX,dword ptr [EDX]             ; 004b0988
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 004b098a
    MOV EAX,dword ptr [EDX]             ; 004b0991
    MOV dword ptr [EAX + 0x78],0x80000  ; 004b0993
    MOV EAX,dword ptr [EDX]             ; 004b099a
    MOV dword ptr [EAX + 0x7c],0x80000  ; 004b099c
    MOV EAX,dword ptr [EDX]             ; 004b09a3
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 004b09a5
    MOV EAX,dword ptr [EDX]             ; 004b09af
    MOV dword ptr [EAX + 0xac],0x80000  ; 004b09b1
    LEA EAX,[ESP + 0xc8]                ; 004b09bb
    PUSH EAX                            ; 004b09c2
    PUSH EDX                            ; 004b09c3
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004b09c4
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b09c9
    MOV EAX,[0x00612560]                ; 004b09cc | DAT_00612560
    PUSH EAX                            ; 004b09d1 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b09d2
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b09d7
    MOV EDX,dword ptr [ESP + 0x390]     ; 004b09da
    INC EDX                             ; 004b09e1
    MOV dword ptr [ESP + 0x390],EDX     ; 004b09e2
    CMP EDX,0x19                        ; 004b09e9
    JL 0x004b0509                       ; 004b09ec
        ;   XREF to: 004b0509 (CONDITIONAL_JUMP)  ; LAB_004b0509
    PUSH 0x0                            ; 004b09f2
    MOV EBX,dword ptr [0x00612560]      ; 004b09f4 | DAT_00612560
    PUSH EBX                            ; 004b09fa | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b09fb
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b0a00
    FLD float ptr [ESP + 0x30]          ; 004b0a03
        ;   Label: LAB_004b0a03
    FLDZ                                ; 004b0a07
    FCOMPP                              ; 004b0a09
    FNSTSW AX                           ; 004b0a0b
    SAHF                                ; 004b0a0d
    JNC 0x004b0ced                      ; 004b0a0e
        ;   XREF to: 004b0ced (CONDITIONAL_JUMP)  ; LAB_004b0ced
    PUSH 0x61c4dc                       ; 004b0a14 | DAT_0061c4dc
    MOV ESI,dword ptr [0x00612560]      ; 004b0a19 | DAT_00612560
    PUSH ESI                            ; 004b0a1f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b0a20
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b0a25
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b0a28
    PUSH EDI                            ; 004b0a2b
    MOV EAX,[0x00612560]                ; 004b0a2c | DAT_00612560
    PUSH EAX                            ; 004b0a31 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b0a32
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b0a37
    PUSH 0x0                            ; 004b0a3a
    LEA EAX,[ESP + 0x2cc]               ; 004b0a3c
    PUSH EAX                            ; 004b0a43
    MOV EDX,dword ptr [0x00612560]      ; 004b0a44 | DAT_00612560
    PUSH EDX                            ; 004b0a4a | DAT_01bc120c
    MOV EBX,0x8                         ; 004b0a4b
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b0a50
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    FLDZ                                ; 004b0a55
    FLD float ptr [EDI + 0x3c]          ; 004b0a57
    ADD ESP,0xc                         ; 004b0a5a
    MOV EAX,dword ptr [EDI + 0x38]      ; 004b0a5d
    XOR ECX,ECX                         ; 004b0a60
    FSTP double ptr [ESP + 0x10]        ; 004b0a62
    MOV dword ptr [ESP + 0x360],EAX     ; 004b0a66
    MOV dword ptr [ESP + 0x370],ECX     ; 004b0a6d
    MOV dword ptr [ESP + 0x38c],EBX     ; 004b0a74
    FCOMP double ptr [ESP + 0x10]       ; 004b0a7b
    FNSTSW AX                           ; 004b0a7f
    SAHF                                ; 004b0a81
    JNC 0x004b0aaf                      ; 004b0a82
        ;   XREF to: 004b0aaf (CONDITIONAL_JUMP)  ; LAB_004b0aaf
    FLD double ptr [ESP + 0x10]         ; 004b0a84
    FPTAN                               ; 004b0a88
    FSTP ST0                            ; 004b0a8a
    FMUL float ptr [ESP + 0x28]         ; 004b0a8c
    MOV ESI,0x1                         ; 004b0a90
    MOV EDI,0x10                        ; 004b0a95
    MOV dword ptr [ESP + 0x370],ESI     ; 004b0a9a
    MOV dword ptr [ESP + 0x38c],EDI     ; 004b0aa1
    FSTP float ptr [ESP + 0x360]        ; 004b0aa8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0aaf
        ;   Label: LAB_004b0aaf
    PUSH dword ptr [EAX + 0x38]         ; 004b0ab2
    PUSH 0x0                            ; 004b0ab5
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0 ; 004b0ab7
        ;   XREF to: 004b00b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0()
    MOV dword ptr [ESP + 0x3a4],EAX     ; 004b0abc
    FLD float ptr [ESP + 0x3a4]         ; 004b0ac3
    ADD ESP,0x8                         ; 004b0aca
    PUSH dword ptr [ESP + 0x360]        ; 004b0acd
    PUSH dword ptr [ESP + 0x2c]         ; 004b0ad4
    FSTP float ptr [ESP + 0x37c]        ; 004b0ad8
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0 ; 004b0adf
        ;   XREF to: 004b00b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_computeScreenSpaceSize_FUN_004b00b0()
    MOV dword ptr [ESP + 0x3a4],EAX     ; 004b0ae4
    FLD float ptr [ESP + 0x3a4]         ; 004b0aeb
    ADD ESP,0x8                         ; 004b0af2
    XOR EAX,EAX                         ; 004b0af5
    FSTP float ptr [ESP + 0x378]        ; 004b0af7
    MOV EDX,dword ptr [ESP + 0x38c]     ; 004b0afe
    MOV dword ptr [ESP + 0x394],EAX     ; 004b0b05
    TEST EDX,EDX                        ; 004b0b0c
    JL 0x004b0cde                       ; 004b0b0e
        ;   XREF to: 004b0cde (CONDITIONAL_JUMP)  ; LAB_004b0cde
    FLD float ptr [ESP + 0x28]          ; 004b0b14
    FMUL float ptr [0x005df2ec]         ; 004b0b18 | DAT_005df2ec
    FDIV float ptr [0x005df2f0]         ; 004b0b1e | DAT_005df2f0
    MOV dword ptr [ESP + 0x380],0x100   ; 004b0b24
    FSTP float ptr [ESP + 0x36c]        ; 004b0b2f
    MOV EAX,dword ptr [ESP + 0x394]     ; 004b0b36
        ;   Label: LAB_004b0b36
    MOV dword ptr [ESP + 0x398],EAX     ; 004b0b3d
    MOV EAX,dword ptr [ESP + 0x38c]     ; 004b0b44
    MOV dword ptr [ESP + 0x39c],EAX     ; 004b0b4b
    FILD dword ptr [ESP + 0x398]        ; 004b0b52
    FILD dword ptr [ESP + 0x39c]        ; 004b0b59
    FDIVP                               ; 004b0b60
    FMUL double ptr [0x005df2d4]        ; 004b0b62 | DAT_005df2d4
    FMUL double ptr [0x005df2f4]        ; 004b0b68 | DAT_005df2f4
    FLD ST0                             ; 004b0b6e
    FSIN                                ; 004b0b70
    FXCH                                ; 004b0b72
    FCOS                                ; 004b0b74
    MOV EDX,dword ptr [0x00612560]      ; 004b0b76 | DAT_00612560
    MOV ESI,dword ptr [EDX]             ; 004b0b7c | DAT_01bc120c
    MOV ECX,0xc                         ; 004b0b7e
    LEA EDI,[ESI + 0x90]                ; 004b0b83
    MOVSD.REP ES:EDI,ESI                ; 004b0b89
    MOV ESI,dword ptr [EDX]             ; 004b0b8b | DAT_01bc120c
    MOV ECX,0xc                         ; 004b0b8d
    LEA EDI,[ESI + 0x60]                ; 004b0b92
    LEA ESI,[ESI + 0x30]                ; 004b0b95
    FXCH                                ; 004b0b98
    FST float ptr [ESP + 0x348]         ; 004b0b9a
    FLD float ptr [ESP + 0x374]         ; 004b0ba1
    FXCH                                ; 004b0ba8
    FMUL ST1                            ; 004b0baa
    MOVSD.REP ES:EDI,ESI                ; 004b0bac
    FXCH ST2                            ; 004b0bae
    FST float ptr [ESP + 0x340]         ; 004b0bb0
    FMULP                               ; 004b0bb7
    XOR ECX,ECX                         ; 004b0bb9
    LEA EBX,[ESP + 0x130]               ; 004b0bbb
    MOV dword ptr [ESP + 0x18c],ECX     ; 004b0bc2
    LEA EAX,[ESP + 0x184]               ; 004b0bc9
    FXCH                                ; 004b0bd0
    FSTP float ptr [ESP + 0x188]        ; 004b0bd2
    FSTP float ptr [ESP + 0x184]        ; 004b0bd9
    FLD float ptr [EAX]                 ; 004b0be0
    FMUL float ptr [0x005fff94]         ; 004b0be2 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b0be8
    FLD float ptr [EAX + 0x4]           ; 004b0bea
    FMUL float ptr [0x005fff94]         ; 004b0bed | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b0bf3
    FLD float ptr [EAX + 0x8]           ; 004b0bf6
    FMUL float ptr [0x005fff94]         ; 004b0bf9 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b0bff
    LEA EAX,[ESP + 0x130]               ; 004b0c02
    PUSH EAX                            ; 004b0c09
    MOV EAX,dword ptr [EDX]             ; 004b0c0a | DAT_01bc120c
    PUSH EAX                            ; 004b0c0c
    CALL engine_special.cpp_FUN_00580173 ; 004b0c0d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b0c12
    FLD float ptr [ESP + 0x378]         ; 004b0c15
    FLD float ptr [ESP + 0x340]         ; 004b0c1c
    FMUL ST1                            ; 004b0c23
    FLD float ptr [ESP + 0x348]         ; 004b0c25
    FMULP ST2                           ; 004b0c2c
    LEA EBX,[ESP + 0x178]               ; 004b0c2e
    LEA EAX,[ESP + 0x184]               ; 004b0c35
    MOV EDX,dword ptr [0x00612560]      ; 004b0c3c | DAT_00612560
    FLD float ptr [ESP + 0x28]          ; 004b0c42
    FADD double ptr [0x005df30c]        ; 004b0c46 | DAT_005df30c
    FXCH                                ; 004b0c4c
    FSTP float ptr [ESP + 0x184]        ; 004b0c4e
    FXCH                                ; 004b0c55
    FSTP float ptr [ESP + 0x188]        ; 004b0c57
    FSTP float ptr [ESP + 0x18c]        ; 004b0c5e
    FLD float ptr [EAX]                 ; 004b0c65
    FMUL float ptr [0x005fff94]         ; 004b0c67 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b0c6d
    FLD float ptr [EAX + 0x4]           ; 004b0c6f
    FMUL float ptr [0x005fff94]         ; 004b0c72 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b0c78
    FLD float ptr [EAX + 0x8]           ; 004b0c7b
    FMUL float ptr [0x005fff94]         ; 004b0c7e | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b0c84
    LEA EAX,[ESP + 0x178]               ; 004b0c87
    PUSH EAX                            ; 004b0c8e
    MOV EAX,dword ptr [EDX]             ; 004b0c8f | DAT_01bc120c
    ADD EAX,0x30                        ; 004b0c91
    PUSH EAX                            ; 004b0c94
    CALL engine_special.cpp_FUN_00580173 ; 004b0c95
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b0c9a
    MOV EBX,dword ptr [ESP + 0x394]     ; 004b0c9d
    TEST EBX,EBX                        ; 004b0ca4
    JNZ 0x004b0ebe                      ; 004b0ca6
        ;   XREF to: 004b0ebe (CONDITIONAL_JUMP)  ; LAB_004b0ebe
    MOV ECX,dword ptr [ESP + 0x380]     ; 004b0cac
        ;   Label: LAB_004b0cac
    MOV EBX,dword ptr [ESP + 0x394]     ; 004b0cb3
    MOV ESI,dword ptr [ESP + 0x38c]     ; 004b0cba
    ADD ECX,0x100                       ; 004b0cc1
    INC EBX                             ; 004b0cc7
    MOV dword ptr [ESP + 0x380],ECX     ; 004b0cc8
    MOV dword ptr [ESP + 0x394],EBX     ; 004b0ccf
    CMP EBX,ESI                         ; 004b0cd6
    JLE 0x004b0b36                      ; 004b0cd8
        ;   XREF to: 004b0b36 (CONDITIONAL_JUMP)  ; LAB_004b0b36
    MOV EDI,dword ptr [0x00612560]      ; 004b0cde | DAT_00612560
        ;   Label: LAB_004b0cde
    PUSH EDI                            ; 004b0ce4 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b0ce5
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b0cea
    FLD float ptr [ESP + 0x1c]          ; 004b0ced
        ;   Label: LAB_004b0ced
    FLDZ                                ; 004b0cf1
    FCOMPP                              ; 004b0cf3
    FNSTSW AX                           ; 004b0cf5
    SAHF                                ; 004b0cf7
    JC 0x004b114d                       ; 004b0cf8
        ;   XREF to: 004b114d (CONDITIONAL_JUMP)  ; LAB_004b114d
    PUSH 0x0                            ; 004b0cfe
        ;   Label: LAB_004b0cfe
    MOV ESI,dword ptr [0x00612560]      ; 004b0d00 | DAT_00612560
    PUSH ESI                            ; 004b0d06 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b0d07
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b0d0c
    PUSH 0xffff                         ; 004b0d0f
    MOV EDI,dword ptr [0x00612560]      ; 004b0d14 | DAT_00612560
    PUSH EDI                            ; 004b0d1a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004b0d1b
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004b0d20
    MOV ESP,EBP                         ; 004b0d23
    POP EBP                             ; 004b0d25
    POP EDI                             ; 004b0d26
    POP ESI                             ; 004b0d27
    POP EBX                             ; 004b0d28
    RET                                 ; 004b0d29
    MOV EAX,dword ptr [ESP + 0x160]     ; 004b0d2a
        ;   Label: LAB_004b0d2a
    MOV dword ptr [ESP + 0x1d8],EAX     ; 004b0d31
    MOV EAX,dword ptr [ESP + 0x164]     ; 004b0d38
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004b0d3f
    MOV EAX,dword ptr [ESP + 0x168]     ; 004b0d46
    MOV dword ptr [ESP + 0x1e0],EAX     ; 004b0d4d
    JMP 0x004b0313                      ; 004b0d54
        ;   XREF to: 004b0313 (UNCONDITIONAL_JUMP)  ; LAB_004b0313
    MOV EDI,dword ptr [0x00612560]      ; 004b0d59 | DAT_00612560
        ;   Label: LAB_004b0d59
    PUSH EDI                            ; 004b0d5f | DAT_01bc120c
    LEA ESI,[ESP + 0x1ac]               ; 004b0d60
    CALL engine_matrix.c_FUN_00483ae0   ; 004b0d67
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA EDI,[ESP + 0x14c]               ; 004b0d6c
    LEA ESI,[ESP + 0x1ac]               ; 004b0d73
    ADD ESP,0x4                         ; 004b0d7a
    MOVSD ES:EDI,ESI                    ; 004b0d7d
    MOVSD ES:EDI,ESI                    ; 004b0d7e
    MOVSD ES:EDI,ESI                    ; 004b0d7f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0d80
    FLD float ptr [ESP + 0x148]         ; 004b0d83
    FSUB float ptr [EAX]                ; 004b0d8a
    FLD float ptr [ESP + 0x14c]         ; 004b0d8c
    FXCH                                ; 004b0d93
    FSTP float ptr [ESP + 0x148]        ; 004b0d95
    FSUB float ptr [EAX + 0x4]          ; 004b0d9c
    FLD float ptr [ESP + 0x150]         ; 004b0d9f
    FXCH                                ; 004b0da6
    FSTP float ptr [ESP + 0x14c]        ; 004b0da8
    FSUB float ptr [EAX + 0x8]          ; 004b0daf
    LEA EAX,[ESP + 0x148]               ; 004b0db2
    LEA ESI,[ESP + 0x304]               ; 004b0db9
    PUSH EAX                            ; 004b0dc0
    LEA EAX,[ESP + 0xf4]                ; 004b0dc1
    LEA EDI,[ESP + 0x200]               ; 004b0dc8
    PUSH EAX                            ; 004b0dcf
    FSTP float ptr [ESP + 0x158]        ; 004b0dd0
    CALL core_dirmat.cpp_FUN_0045f700   ; 004b0dd7
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x30c]               ; 004b0ddc
    LEA EAX,[ESP + 0x204]               ; 004b0de3
    ADD ESP,0x8                         ; 004b0dea
    LEA EDX,[ESP + 0x148]               ; 004b0ded
    MOVSD ES:EDI,ESI                    ; 004b0df4
    MOVSD ES:EDI,ESI                    ; 004b0df5
    MOVSD ES:EDI,ESI                    ; 004b0df6
    CMP EDX,EAX                         ; 004b0df7
    JZ 0x004b0e25                       ; 004b0df9
        ;   XREF to: 004b0e25 (CONDITIONAL_JUMP)  ; LAB_004b0e25
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 004b0dfb
    MOV dword ptr [ESP + 0x148],EAX     ; 004b0e02
    MOV EAX,dword ptr [ESP + 0x200]     ; 004b0e09
    MOV dword ptr [ESP + 0x14c],EAX     ; 004b0e10
    MOV EAX,dword ptr [ESP + 0x204]     ; 004b0e17
    MOV dword ptr [ESP + 0x150],EAX     ; 004b0e1e
    FLD float ptr [ESP + 0x150]         ; 004b0e25
        ;   Label: LAB_004b0e25
    FMUL double ptr [0x005df2cc]        ; 004b0e2c | DAT_005df2cc
    FDIV float ptr [ESP + 0x34]         ; 004b0e32
    FLD float ptr [ESP + 0x14c]         ; 004b0e36
    FMUL ST0                            ; 004b0e3d
    FLD float ptr [ESP + 0x148]         ; 004b0e3f
    FMUL ST0                            ; 004b0e46
    FXCH ST2                            ; 004b0e48
    FMUL double ptr [0x005df2d4]        ; 004b0e4a | DAT_005df2d4
    FXCH                                ; 004b0e50
    FSTP float ptr [ESP + 0x350]        ; 004b0e52
    FXCH                                ; 004b0e59
    FADD float ptr [ESP + 0x350]        ; 004b0e5b
    FXCH                                ; 004b0e62
    FST float ptr [ESP + 0x354]         ; 004b0e64
    FMUL float ptr [ESP + 0x354]        ; 004b0e6b
    FXCH                                ; 004b0e72
    FST float ptr [ESP + 0x358]         ; 004b0e74
    FXCH                                ; 004b0e7b
    FSTP float ptr [ESP + 0x35c]        ; 004b0e7d
    FCOMP float ptr [ESP + 0x35c]       ; 004b0e84
    FNSTSW AX                           ; 004b0e8b
    SAHF                                ; 004b0e8d
    JNC 0x004b0480                      ; 004b0e8e
        ;   XREF to: 004b0480 (CONDITIONAL_JUMP)  ; LAB_004b0480
    FLD float ptr [ESP + 0x358]         ; 004b0e94
    FDIV float ptr [ESP + 0x35c]        ; 004b0e9b
    FLD1                                ; 004b0ea2
    FSUBRP                              ; 004b0ea4
    FSTP float ptr [ESP + 0x20]         ; 004b0ea6
    JMP 0x004b0480                      ; 004b0eaa
        ;   XREF to: 004b0480 (UNCONDITIONAL_JUMP)  ; LAB_004b0480
    FLD float ptr [ESP + 0x34]          ; 004b0eaf
        ;   Label: LAB_004b0eaf
    FDIVR double ptr [0x005df2cc]       ; 004b0eb3 | DAT_005df2cc
    JMP 0x004b054a                      ; 004b0eb9
        ;   XREF to: 004b054a (UNCONDITIONAL_JUMP)  ; LAB_004b054a
    FLD float ptr [ESP + 0x36c]         ; 004b0ebe
        ;   Label: LAB_004b0ebe
    MOV ESI,0x4                         ; 004b0ec5
    MOV EAX,0x3                         ; 004b0eca
    CALL crt_math.c_round_FUN_005c03a0  ; 004b0ecf
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    XOR EDI,EDI                         ; 004b0ed4
    MOV dword ptr [ESP + 0x84],ESI      ; 004b0ed6
    MOV dword ptr [ESP + 0x94],EDI      ; 004b0edd
    MOV dword ptr [ESP + 0x90],EDI      ; 004b0ee4
    MOV dword ptr [ESP + 0x8c],EDI      ; 004b0eeb
    MOV dword ptr [ESP + 0x88],EDI      ; 004b0ef2
    MOV dword ptr [ESP + 0x98],EDI      ; 004b0ef9
    MOV dword ptr [ESP + 0xbc],EAX      ; 004b0f00
    MOV ESI,0x1                         ; 004b0f07
    MOV EDI,0x2                         ; 004b0f0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0f11
    MOV dword ptr [ESP + 0xa4],ESI      ; 004b0f14
    MOV dword ptr [ESP + 0xb0],EDI      ; 004b0f1b
    FISTP dword ptr [ESP + 0x37c]       ; 004b0f22
    FLD float ptr [EAX + 0x3c]          ; 004b0f29
    FLDZ                                ; 004b0f2c
    FCOMPP                              ; 004b0f2e
    FNSTSW AX                           ; 004b0f30
    SAHF                                ; 004b0f32
    JNC 0x004b108d                      ; 004b0f33
        ;   XREF to: 004b108d (CONDITIONAL_JUMP)  ; LAB_004b108d
    MOV EDX,0x800000                    ; 004b0f39 | DAT_00800000
    MOV dword ptr [ESP + 0xa0],EDX      ; 004b0f3e | DAT_00800000
    MOV dword ptr [ESP + 0xa8],EDX      ; 004b0f45 | DAT_00800000
    MOV dword ptr [ESP + 0xac],EDX      ; 004b0f4c | DAT_00800000
    MOV dword ptr [ESP + 0xb4],EDX      ; 004b0f53 | DAT_00800000
    MOV dword ptr [ESP + 0xb8],EDX      ; 004b0f5a | DAT_00800000
    MOV dword ptr [ESP + 0xc0],EDX      ; 004b0f61 | DAT_00800000
    MOV dword ptr [ESP + 0xc4],EDX      ; 004b0f68 | DAT_00800000
    MOV dword ptr [ESP + 0x9c],EDX      ; 004b0f6f | DAT_00800000
    MOV EAX,[0x00612560]                ; 004b0f76 | DAT_00612560
        ;   Label: LAB_004b0f76
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b0f7b
    MOV EDX,dword ptr [EAX]             ; 004b0f7e | DAT_01bc120c
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004b0f80
    MOV dword ptr [EDX + 0x20],EBX      ; 004b0f83
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0f86
    MOV EBX,dword ptr [EAX]             ; 004b0f89 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x30]      ; 004b0f8b
    MOV dword ptr [EBX + 0x24],EDX      ; 004b0f8e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b0f91
    MOV EDX,dword ptr [EAX]             ; 004b0f94 | DAT_01bc120c
    MOV EBX,dword ptr [EBX + 0x34]      ; 004b0f96
    MOV dword ptr [EDX + 0x28],EBX      ; 004b0f99
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0f9c
    MOV EBX,dword ptr [EAX]             ; 004b0f9f | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004b0fa1
    MOV dword ptr [EBX + 0x50],EDX      ; 004b0fa4
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b0fa7
    MOV EDX,dword ptr [EAX]             ; 004b0faa | DAT_01bc120c
    MOV EBX,dword ptr [EBX + 0x30]      ; 004b0fac
    MOV dword ptr [EDX + 0x54],EBX      ; 004b0faf
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0fb2
    MOV EBX,dword ptr [EAX]             ; 004b0fb5 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x34]      ; 004b0fb7
    MOV dword ptr [EBX + 0x58],EDX      ; 004b0fba
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0fbd
    MOV EBX,dword ptr [EAX]             ; 004b0fc0 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004b0fc2
    MOV dword ptr [EBX + 0x80],EDX      ; 004b0fc5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0fcb
    MOV EBX,dword ptr [EAX]             ; 004b0fce | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x30]      ; 004b0fd0
    MOV dword ptr [EBX + 0x84],EDX      ; 004b0fd3
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b0fd9
    MOV EDX,dword ptr [EAX]             ; 004b0fdc | DAT_01bc120c
    MOV EBX,dword ptr [EBX + 0x34]      ; 004b0fde
    MOV dword ptr [EDX + 0x88],EBX      ; 004b0fe1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0fe7
    MOV EBX,dword ptr [EAX]             ; 004b0fea | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004b0fec
    MOV dword ptr [EBX + 0xb0],EDX      ; 004b0fef
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0ff5
    MOV EBX,dword ptr [EAX]             ; 004b0ff8 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x30]      ; 004b0ffa
    MOV dword ptr [EBX + 0xb4],EDX      ; 004b0ffd
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b1003
    PUSH 0x1                            ; 004b1006
    MOV EBX,dword ptr [EAX]             ; 004b1008 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x34]      ; 004b100a
    PUSH EAX                            ; 004b100d | DAT_01bc120c
    MOV dword ptr [EBX + 0xb8],EDX      ; 004b100e
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b1014
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b1019
    FLD float ptr [ESP + 0x30]          ; 004b101c
    FMUL double ptr [0x005df2fc]        ; 004b1020 | DAT_005df2fc
    MOV EBX,dword ptr [ESP + 0x370]     ; 004b1026
    CALL crt_math.c_round_FUN_005c03a0  ; 004b102d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x384]       ; 004b1032
    TEST EBX,EBX                        ; 004b1039
    JZ 0x004b111b                       ; 004b103b
        ;   XREF to: 004b111b (CONDITIONAL_JUMP)  ; LAB_004b111b
    MOV EDX,dword ptr [0x00612560]      ; 004b1041 | DAT_00612560
    MOV EBX,dword ptr [EDX]             ; 004b1047 | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0x384]     ; 004b1049
    MOV dword ptr [EBX + 0x2c],EAX      ; 004b1050
    MOV EAX,dword ptr [EDX]             ; 004b1053 | DAT_01bc120c
    MOV dword ptr [EAX + 0x5c],0x0      ; 004b1055
    MOV EAX,dword ptr [EDX]             ; 004b105c | DAT_01bc120c
    MOV dword ptr [EAX + 0x8c],0x0      ; 004b105e
    MOV EBX,dword ptr [EDX]             ; 004b1068 | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0x384]     ; 004b106a
    MOV dword ptr [EBX + 0xbc],EAX      ; 004b1071
    LEA EAX,[ESP + 0x80]                ; 004b1077
    PUSH EAX                            ; 004b107e
    PUSH EDX                            ; 004b107f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00 ; 004b1080
        ;   XREF to: 00482f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004b1085
    JMP 0x004b0cac                      ; 004b1088
        ;   XREF to: 004b0cac (UNCONDITIONAL_JUMP)  ; LAB_004b0cac
    XOR EDX,EDX                         ; 004b108d
        ;   Label: LAB_004b108d
    MOV dword ptr [ESP + 0x9c],EDX      ; 004b108f
    MOV EDX,EBX                         ; 004b1096
    SHL EDX,0x8                         ; 004b1098
    MOV ECX,dword ptr [ESP + 0x38c]     ; 004b109b
    MOV EAX,EDX                         ; 004b10a2
    SAR EDX,0x1f                        ; 004b10a4
    IDIV ECX                            ; 004b10a7
    MOV EBX,dword ptr [0x01c57e18]      ; 004b10a9 | DAT_01c57e18
    ADD EAX,EBX                         ; 004b10af
    SHL EAX,0x10                        ; 004b10b1
    MOV dword ptr [ESP + 0xa0],EAX      ; 004b10b4
    MOV EAX,dword ptr [ESP + 0x37c]     ; 004b10bb
    MOV dword ptr [ESP + 0xa8],EAX      ; 004b10c2
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004b10c9
    MOV dword ptr [ESP + 0xac],EAX      ; 004b10d0
    MOV EAX,dword ptr [ESP + 0x37c]     ; 004b10d7
    MOV dword ptr [ESP + 0xb4],EAX      ; 004b10de
    MOV EAX,dword ptr [ESP + 0x380]     ; 004b10e5
    MOV EDX,EAX                         ; 004b10ec
    SAR EDX,0x1f                        ; 004b10ee
    IDIV ECX                            ; 004b10f1
    ADD EAX,EBX                         ; 004b10f3
    SHL EAX,0x10                        ; 004b10f5
    MOV dword ptr [ESP + 0xb8],EAX      ; 004b10f8
    XOR EAX,EAX                         ; 004b10ff
    MOV dword ptr [ESP + 0xc0],EAX      ; 004b1101
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004b1108
    MOV dword ptr [ESP + 0xc4],EAX      ; 004b110f
    JMP 0x004b0f76                      ; 004b1116
        ;   XREF to: 004b0f76 (UNCONDITIONAL_JUMP)  ; LAB_004b0f76
    MOV ESI,dword ptr [ESP + 0x384]     ; 004b111b
        ;   Label: LAB_004b111b
    PUSH ESI                            ; 004b1122
    MOV EDI,dword ptr [0x00612560]      ; 004b1123 | DAT_00612560
    PUSH EDI                            ; 004b1129 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004b112a
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004b112f
    LEA EAX,[ESP + 0x80]                ; 004b1132
    PUSH EAX                            ; 004b1139
    MOV EAX,[0x00612560]                ; 004b113a | DAT_00612560
    PUSH EAX                            ; 004b113f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 ; 004b1140
        ;   XREF to: 00483120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004b1145
    JMP 0x004b0cac                      ; 004b1148
        ;   XREF to: 004b0cac (UNCONDITIONAL_JUMP)  ; LAB_004b0cac
    FLD1                                ; 004b114d
        ;   Label: LAB_004b114d
    FLD float ptr [ESP + 0x214]         ; 004b114f
    FXCH                                ; 004b1156
    FDIV float ptr [ESP + 0x28]         ; 004b1158
    FXCH                                ; 004b115c
    FMUL ST1                            ; 004b115e
    FLD float ptr [ESP + 0x218]         ; 004b1160
    FMUL ST2                            ; 004b1167
    FLD float ptr [ESP + 0x21c]         ; 004b1169
    FMULP ST3                           ; 004b1170
    LEA EDI,[ESP + 0x298]               ; 004b1172
    LEA ESI,[ESP + 0x190]               ; 004b1179
    FXCH                                ; 004b1180
    FSTP float ptr [ESP + 0x190]        ; 004b1182
    FSTP float ptr [ESP + 0x194]        ; 004b1189
    FSTP float ptr [ESP + 0x198]        ; 004b1190
    MOVSD ES:EDI,ESI                    ; 004b1197
    MOVSD ES:EDI,ESI                    ; 004b1198
    MOVSD ES:EDI,ESI                    ; 004b1199
    FLD float ptr [0x005df304]          ; 004b119a | DAT_005df304
    FLD float ptr [ESP + 0x298]         ; 004b11a0
    FMUL ST1                            ; 004b11a7
    FLD float ptr [ESP + 0x29c]         ; 004b11a9
    FMUL ST2                            ; 004b11b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b11b2
    FLD float ptr [ESP + 0x2a0]         ; 004b11b5
    FMULP ST3                           ; 004b11bc
    ADD EAX,0x20                        ; 004b11be
    LEA EDI,[ESP + 0x13c]               ; 004b11c1
    LEA ESI,[ESP + 0x154]               ; 004b11c8
    FXCH                                ; 004b11cf
    FSTP float ptr [ESP + 0x154]        ; 004b11d1
    FSTP float ptr [ESP + 0x158]        ; 004b11d8
    FSTP float ptr [ESP + 0x15c]        ; 004b11df
    MOVSD ES:EDI,ESI                    ; 004b11e6
    MOVSD ES:EDI,ESI                    ; 004b11e7
    MOVSD ES:EDI,ESI                    ; 004b11e8
    FLD float ptr [EAX + -0x14]         ; 004b11e9
    FLD float ptr [EAX + -0x10]         ; 004b11ec
    FLD float ptr [EAX + -0xc]          ; 004b11ef
    LEA EDI,[ESP + 0x2a4]               ; 004b11f2
    LEA ESI,[ESP + 0x2b0]               ; 004b11f9
    FXCH ST2                            ; 004b1200
    FSUB float ptr [ESP + 0x13c]        ; 004b1202
    FXCH                                ; 004b1209
    FSUB float ptr [ESP + 0x140]        ; 004b120b
    FXCH ST2                            ; 004b1212
    FSUB float ptr [ESP + 0x144]        ; 004b1214
    FXCH                                ; 004b121b
    FSTP float ptr [ESP + 0x2b0]        ; 004b121d
    FXCH                                ; 004b1224
    FSTP float ptr [ESP + 0x2b4]        ; 004b1226
    FSTP float ptr [ESP + 0x2b8]        ; 004b122d
    MOVSD ES:EDI,ESI                    ; 004b1234
    MOVSD ES:EDI,ESI                    ; 004b1235
    MOVSD ES:EDI,ESI                    ; 004b1236
    PUSH EAX                            ; 004b1237
    LEA ESI,[ESP + 0x224]               ; 004b1238
    LEA EDI,[ESP + 0x290]               ; 004b123f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004b1246
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x224]               ; 004b124b
    LEA EDX,[ESP + 0x290]               ; 004b1252
    ADD ESP,0x4                         ; 004b1259
    LEA EAX,[ESP + 0x2c8]               ; 004b125c
    MOVSD ES:EDI,ESI                    ; 004b1263
    MOVSD ES:EDI,ESI                    ; 004b1264
    MOVSD ES:EDI,ESI                    ; 004b1265
    CMP EAX,EDX                         ; 004b1266
    JZ 0x004b1294                       ; 004b1268
        ;   XREF to: 004b1294 (CONDITIONAL_JUMP)  ; LAB_004b1294
    MOV EAX,dword ptr [ESP + 0x28c]     ; 004b126a
    MOV dword ptr [ESP + 0x2c8],EAX     ; 004b1271
    MOV EAX,dword ptr [ESP + 0x290]     ; 004b1278
    MOV dword ptr [ESP + 0x2cc],EAX     ; 004b127f
    MOV EAX,dword ptr [ESP + 0x294]     ; 004b1286
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004b128d
    LEA EAX,[ESP + 0x2a4]               ; 004b1294
        ;   Label: LAB_004b1294
    PUSH EAX                            ; 004b129b
    MOV EDX,dword ptr [0x00612560]      ; 004b129c | DAT_00612560
    PUSH EDX                            ; 004b12a2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b12a3
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b12a8
    PUSH 0x0                            ; 004b12ab
    LEA EAX,[ESP + 0x2cc]               ; 004b12ad
    PUSH EAX                            ; 004b12b4
    MOV ECX,dword ptr [0x00612560]      ; 004b12b5 | DAT_00612560
    PUSH ECX                            ; 004b12bb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b12bc
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b12c1
    PUSH 0x61c4f4                       ; 004b12c4 | DAT_0061c4f4
    MOV EBX,dword ptr [0x00612560]      ; 004b12c9 | DAT_00612560
    PUSH EBX                            ; 004b12cf | DAT_01bc120c
    MOV ESI,0x3e4ccccd                  ; 004b12d0
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b12d5
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBX,[ESP + 0x120]               ; 004b12da
    MOV EDX,dword ptr [0x00612560]      ; 004b12e1 | DAT_00612560
    ADD ESP,0x8                         ; 004b12e7
    XOR EAX,EAX                         ; 004b12ea
    MOV dword ptr [ESP + 0x208],ESI     ; 004b12ec
    MOV dword ptr [ESP + 0x210],EAX     ; 004b12f3
    LEA EAX,[ESP + 0x208]               ; 004b12fa
    MOV dword ptr [ESP + 0x20c],ESI     ; 004b1301
    FLD float ptr [EAX]                 ; 004b1308
    FMUL float ptr [0x005fff94]         ; 004b130a | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b1310
    FLD float ptr [EAX + 0x4]           ; 004b1312
    FMUL float ptr [0x005fff94]         ; 004b1315 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b131b
    FLD float ptr [EAX + 0x8]           ; 004b131e
    FMUL float ptr [0x005fff94]         ; 004b1321 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b1327
    LEA EAX,[ESP + 0x118]               ; 004b132a
    PUSH EAX                            ; 004b1331
    MOV EAX,dword ptr [EDX]             ; 004b1332 | DAT_01bc120c
    PUSH EAX                            ; 004b1334
    CALL engine_special.cpp_FUN_00580173 ; 004b1335
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b133a
    MOV BL,byte ptr [ESP + 0x20b]       ; 004b133d
    XOR BL,0x80                         ; 004b1344
    LEA EAX,[ESP + 0x208]               ; 004b1347
    MOV byte ptr [ESP + 0x20b],BL       ; 004b134e
    LEA EBX,[ESP + 0x2d4]               ; 004b1355
    MOV EDX,dword ptr [0x00612560]      ; 004b135c | DAT_00612560
    FLD float ptr [EAX]                 ; 004b1362
    FMUL float ptr [0x005fff94]         ; 004b1364 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b136a
    FLD float ptr [EAX + 0x4]           ; 004b136c
    FMUL float ptr [0x005fff94]         ; 004b136f | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b1375
    FLD float ptr [EAX + 0x8]           ; 004b1378
    FMUL float ptr [0x005fff94]         ; 004b137b | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b1381
    LEA EAX,[ESP + 0x2d4]               ; 004b1384
    PUSH EAX                            ; 004b138b
    MOV EAX,dword ptr [EDX]             ; 004b138c | DAT_01bc120c
    ADD EAX,0x30                        ; 004b138e
    PUSH EAX                            ; 004b1391
    CALL engine_special.cpp_FUN_00580173 ; 004b1392
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b1397
    MOV BH,byte ptr [ESP + 0x20f]       ; 004b139a
    XOR BH,0x80                         ; 004b13a1
    LEA EAX,[ESP + 0x208]               ; 004b13a4
    MOV byte ptr [ESP + 0x20f],BH       ; 004b13ab
    LEA EBX,[ESP + 0x2f8]               ; 004b13b2
    MOV EDX,dword ptr [0x00612560]      ; 004b13b9 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b13bf
    FMUL float ptr [0x005fff94]         ; 004b13c1 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b13c7
    FLD float ptr [EAX + 0x4]           ; 004b13c9
    FMUL float ptr [0x005fff94]         ; 004b13cc | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b13d2
    FLD float ptr [EAX + 0x8]           ; 004b13d5
    FMUL float ptr [0x005fff94]         ; 004b13d8 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b13de
    LEA EAX,[ESP + 0x2f8]               ; 004b13e1
    PUSH EAX                            ; 004b13e8
    MOV EAX,dword ptr [EDX]             ; 004b13e9 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b13eb
    PUSH EAX                            ; 004b13ee
    CALL engine_special.cpp_FUN_00580173 ; 004b13ef
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b13f4
    LEA EBX,[ESP + 0x31c]               ; 004b13f7
    MOV CL,byte ptr [ESP + 0x20b]       ; 004b13fe
    LEA EAX,[ESP + 0x208]               ; 004b1405
    XOR CL,0x80                         ; 004b140c
    MOV EDX,dword ptr [0x00612560]      ; 004b140f | DAT_00612560
    MOV byte ptr [ESP + 0x20b],CL       ; 004b1415
    FLD float ptr [EAX]                 ; 004b141c
    FMUL float ptr [0x005fff94]         ; 004b141e | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b1424
    FLD float ptr [EAX + 0x4]           ; 004b1426
    FMUL float ptr [0x005fff94]         ; 004b1429 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b142f
    FLD float ptr [EAX + 0x8]           ; 004b1432
    FMUL float ptr [0x005fff94]         ; 004b1435 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b143b
    LEA EAX,[ESP + 0x31c]               ; 004b143e
    PUSH EAX                            ; 004b1445
    MOV EAX,dword ptr [EDX]             ; 004b1446 | DAT_01bc120c
    ADD EAX,0x90                        ; 004b1448
    PUSH EAX                            ; 004b144d
    CALL engine_special.cpp_FUN_00580173 ; 004b144e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b1453
    MOV EDX,0x4                         ; 004b1456
    MOV EBX,0x3                         ; 004b145b
    MOV ESI,0x80000                     ; 004b1460
    MOV EAX,0xf80000                    ; 004b1465
    XOR ECX,ECX                         ; 004b146a
    MOV dword ptr [ESP + 0x3c],EDX      ; 004b146c
    MOV dword ptr [ESP + 0x4c],ECX      ; 004b1470
    MOV dword ptr [ESP + 0x48],ECX      ; 004b1474
    MOV dword ptr [ESP + 0x44],ECX      ; 004b1478
    MOV dword ptr [ESP + 0x40],ECX      ; 004b147c
    MOV dword ptr [ESP + 0x50],ECX      ; 004b1480
    MOV dword ptr [ESP + 0x74],EBX      ; 004b1484
    MOV dword ptr [ESP + 0x54],ESI      ; 004b1488
    MOV dword ptr [ESP + 0x58],ESI      ; 004b148c
    MOV dword ptr [ESP + 0x60],EAX      ; 004b1490
    MOV dword ptr [ESP + 0x64],ESI      ; 004b1494
    MOV dword ptr [ESP + 0x6c],EAX      ; 004b1498
    MOV dword ptr [ESP + 0x70],EAX      ; 004b149c
    MOV dword ptr [ESP + 0x78],ESI      ; 004b14a0
    MOV dword ptr [ESP + 0x7c],EAX      ; 004b14a4
    MOV EDX,0x1                         ; 004b14a8
    MOV ECX,0x2                         ; 004b14ad
    MOV EAX,[0x00612560]                ; 004b14b2 | DAT_00612560
    MOV dword ptr [ESP + 0x5c],EDX      ; 004b14b7
    MOV dword ptr [ESP + 0x68],ECX      ; 004b14bb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b14bf
    MOV EBX,dword ptr [EAX]             ; 004b14c2 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004b14c4
    MOV dword ptr [EBX + 0x20],EDX      ; 004b14c7
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b14ca
    MOV EBX,dword ptr [EAX]             ; 004b14cd | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x30]      ; 004b14cf
    MOV dword ptr [EBX + 0x24],EDX      ; 004b14d2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b14d5
    MOV EBX,dword ptr [EAX]             ; 004b14d8 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x34]      ; 004b14da
    MOV dword ptr [EBX + 0x28],EDX      ; 004b14dd
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b14e0
    MOV EBX,dword ptr [EAX]             ; 004b14e3 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004b14e5
    MOV dword ptr [EBX + 0x50],EDX      ; 004b14e8
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b14eb
    MOV EBX,dword ptr [EAX]             ; 004b14ee | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x30]      ; 004b14f0
    MOV dword ptr [EBX + 0x54],EDX      ; 004b14f3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b14f6
    MOV EBX,dword ptr [EAX]             ; 004b14f9 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x34]      ; 004b14fb
    MOV dword ptr [EBX + 0x58],EDX      ; 004b14fe
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b1501
    MOV EBX,dword ptr [EAX]             ; 004b1504 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004b1506
    MOV dword ptr [EBX + 0x80],EDX      ; 004b1509
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b150f
    MOV EBX,dword ptr [EAX]             ; 004b1512 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x30]      ; 004b1514
    MOV dword ptr [EBX + 0x84],EDX      ; 004b1517
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b151d
    MOV EBX,dword ptr [EAX]             ; 004b1520 | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x34]      ; 004b1522
    MOV dword ptr [EBX + 0x88],EDX      ; 004b1525
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b152b
    MOV EBX,dword ptr [EAX]             ; 004b152e | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004b1530
    MOV dword ptr [EBX + 0xb0],EDX      ; 004b1533
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b1539
    MOV EBX,dword ptr [EAX]             ; 004b153c | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x30]      ; 004b153e
    MOV dword ptr [EBX + 0xb4],EDX      ; 004b1541
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b1547
    PUSH 0x1                            ; 004b154a
    MOV EBX,dword ptr [EAX]             ; 004b154c | DAT_01bc120c
    MOV EDX,dword ptr [EDX + 0x34]      ; 004b154e
    PUSH EAX                            ; 004b1551 | DAT_01bc120c
    MOV dword ptr [EBX + 0xb8],EDX      ; 004b1552
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b1558
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b155d
    PUSH 0x471fff00                     ; 004b1560
    PUSH 0x47000000                     ; 004b1565
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004b156a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 004b156f
    FLD float ptr [ESP + 0x3a4]         ; 004b1576
    ADD ESP,0x8                         ; 004b157d
    FMUL float ptr [ESP + 0x1c]         ; 004b1580
    CALL crt_math.c_round_FUN_005c03a0  ; 004b1584
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x398]       ; 004b1589
    MOV EAX,dword ptr [ESP + 0x398]     ; 004b1590
    PUSH EAX                            ; 004b1597
    MOV EDX,dword ptr [0x00612560]      ; 004b1598 | DAT_00612560
    PUSH EDX                            ; 004b159e | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004b159f
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004b15a4
    LEA EAX,[ESP + 0x38]                ; 004b15a7
    PUSH EAX                            ; 004b15ab
    MOV ECX,dword ptr [0x00612560]      ; 004b15ac | DAT_00612560
    PUSH ECX                            ; 004b15b2 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120 ; 004b15b3
        ;   XREF to: 00483120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00483120(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004b15b8
    MOV EBX,dword ptr [0x00612560]      ; 004b15bb | DAT_00612560
    PUSH EBX                            ; 004b15c1 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b15c2
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b15c7
    JMP 0x004b0cfe                      ; 004b15ca
        ;   XREF to: 004b0cfe (UNCONDITIONAL_JUMP)  ; LAB_004b0cfe

