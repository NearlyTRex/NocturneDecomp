; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLaserBeam_render_FUN_00497800(CLaserBeam *this_ptr)
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
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049c965
;
; Referenced Globals:
;   undefined4 DAT_005d548a
;   undefined4 DAT_005d5492
;   undefined4 DAT_005d549a
;   undefined4 DAT_005d54a2
;   undefined4 DAT_005d54aa
;   undefined4 DAT_005d54ae
;   undefined4 DAT_005d54b2
;   undefined4 DAT_005d54ba
;   undefined4 DAT_005d54c2
;   undefined4 DAT_005d54ca
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_006151e4
;   undefined4 DAT_006151fc
;   undefined4 DAT_00615214
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_004495a0
;   core_fire.cpp_computeScreenSpaceSize_FUN_00497710
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497800
        ;   Label: core_fire.cpp_CLaserBeam_render_FUN_00497800
    PUSH ESI                            ; 00497801
    PUSH EDI                            ; 00497802
    PUSH EBP                            ; 00497803
    MOV EBP,ESP                         ; 00497804
    SUB ESP,0x3a0                       ; 00497806
    AND ESP,0xfffffff8                  ; 0049780c
    PUSH 0x6151e4                       ; 0049780f | DAT_006151e4
    MOV EDX,dword ptr [0x0060b280]      ; 00497814 | DAT_0060b280
    PUSH EDX                            ; 0049781a
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0049781b
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00497820
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497823
    LEA EDI,[ESP + 0x214]               ; 00497826
    LEA ESI,[ESP + 0x1b4]               ; 0049782d
    FLD float ptr [EAX + 0xc]           ; 00497834
    FLD float ptr [EAX + 0x10]          ; 00497837
    FLD float ptr [EAX + 0x14]          ; 0049783a
    FXCH ST2                            ; 0049783d
    FSUB float ptr [EAX]                ; 0049783f
    FXCH                                ; 00497841
    FSUB float ptr [EAX + 0x4]          ; 00497843
    FXCH ST2                            ; 00497846
    FSUB float ptr [EAX + 0x8]          ; 00497848
    FXCH                                ; 0049784b
    FSTP float ptr [ESP + 0x1b4]        ; 0049784d
    FXCH                                ; 00497854
    FSTP float ptr [ESP + 0x1b8]        ; 00497856
    FSTP float ptr [ESP + 0x1bc]        ; 0049785d
    LEA EAX,[ESP + 0x214]               ; 00497864
    MOVSD ES:EDI,ESI                    ; 0049786b
    MOVSD ES:EDI,ESI                    ; 0049786c
    MOVSD ES:EDI,ESI                    ; 0049786d
    PUSH EAX                            ; 0049786e
    LEA ESI,[ESP + 0x26c]               ; 0049786f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00497876
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 0049787b
    FLD float ptr [ESP + 0x218]         ; 0049787e
    FMUL ST0                            ; 00497885
    FLD float ptr [ESP + 0x214]         ; 00497887
    FMUL ST0                            ; 0049788e
    FADDP                               ; 00497890
    FLD float ptr [ESP + 0x21c]         ; 00497892
    FMUL ST0                            ; 00497899
    FADDP                               ; 0049789b
    FSQRT                               ; 0049789d
    LEA EDI,[ESP + 0x2c8]               ; 0049789f
    LEA EAX,[ESP + 0x2c8]               ; 004978a6
    LEA ESI,[ESP + 0x268]               ; 004978ad
    PUSH EAX                            ; 004978b4
    LEA EAX,[ESP + 0xf4]                ; 004978b5
    MOVSD ES:EDI,ESI                    ; 004978bc
    MOVSD ES:EDI,ESI                    ; 004978bd
    MOVSD ES:EDI,ESI                    ; 004978be
    PUSH EAX                            ; 004978bf
    FSTP float ptr [ESP + 0x30]         ; 004978c0
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004978c4
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004978c9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004978cc
    LEA ESI,[ESP + 0x280]               ; 004978cf
    LEA EDI,[ESP + 0x250]               ; 004978d6
    MOV EAX,dword ptr [EAX + 0x18]      ; 004978dd
    MOV EBX,dword ptr [0x0060b280]      ; 004978e0 | DAT_0060b280
    MOV dword ptr [ESP + 0x30],EAX      ; 004978e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004978ea
    XOR ECX,ECX                         ; 004978ed
    PUSH EBX                            ; 004978ef
    MOV EAX,dword ptr [EAX + 0x1c]      ; 004978f0
    MOV dword ptr [ESP + 0x24],ECX      ; 004978f3
    MOV dword ptr [ESP + 0x20],EAX      ; 004978f7
    CALL engine_drender.cpp_FUN_0046b5e0 ; 004978fb
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5e0()
    LEA ESI,[ESP + 0x284]               ; 00497900
    ADD ESP,0x4                         ; 00497907
    LEA EDX,[ESP + 0x1d8]               ; 0049790a
    MOVSD ES:EDI,ESI                    ; 00497911
    MOVSD ES:EDI,ESI                    ; 00497912
    MOVSD ES:EDI,ESI                    ; 00497913
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497914
    FLD float ptr [ESP + 0x250]         ; 00497917
    FLD float ptr [ESP + 0x254]         ; 0049791e
    FLD float ptr [ESP + 0x258]         ; 00497925
    LEA EDI,[ESP + 0x160]               ; 0049792c
    LEA ESI,[ESP + 0x1cc]               ; 00497933
    FXCH ST2                            ; 0049793a
    FSUB float ptr [EAX]                ; 0049793c
    FXCH                                ; 0049793e
    FSUB float ptr [EAX + 0x4]          ; 00497940
    FXCH ST2                            ; 00497943
    FSUB float ptr [EAX + 0x8]          ; 00497945
    FXCH                                ; 00497948
    FSTP float ptr [ESP + 0x1cc]        ; 0049794a
    FXCH                                ; 00497951
    FSTP float ptr [ESP + 0x1d0]        ; 00497953
    FSTP float ptr [ESP + 0x1d4]        ; 0049795a
    LEA EAX,[ESP + 0x160]               ; 00497961
    MOVSD ES:EDI,ESI                    ; 00497968
    MOVSD ES:EDI,ESI                    ; 00497969
    MOVSD ES:EDI,ESI                    ; 0049796a
    CMP EDX,EAX                         ; 0049796b
    JNZ 0x0049838a                      ; 0049796d
        ;   XREF to: 0049838a (CONDITIONAL_JUMP)  ; LAB_0049838a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497973
        ;   Label: LAB_00497973
    LEA EDI,[ESP + 0x244]               ; 00497976
    LEA ESI,[ESP + 0x16c]               ; 0049797d
    LEA EDX,[ESP + 0x244]               ; 00497984
    FLD float ptr [EAX + 0xc]           ; 0049798b
    FLD float ptr [EAX + 0x10]          ; 0049798e
    FLD float ptr [EAX + 0x14]          ; 00497991
    FXCH ST2                            ; 00497994
    FSUB float ptr [EAX]                ; 00497996
    FXCH                                ; 00497998
    FSUB float ptr [EAX + 0x4]          ; 0049799a
    FXCH ST2                            ; 0049799d
    FSUB float ptr [EAX + 0x8]          ; 0049799f
    FXCH                                ; 004979a2
    FSTP float ptr [ESP + 0x16c]        ; 004979a4
    FXCH                                ; 004979ab
    FSTP float ptr [ESP + 0x170]        ; 004979ad
    FSTP float ptr [ESP + 0x174]        ; 004979b4
    LEA EAX,[ESP + 0x1e4]               ; 004979bb
    MOVSD ES:EDI,ESI                    ; 004979c2
    MOVSD ES:EDI,ESI                    ; 004979c3
    MOVSD ES:EDI,ESI                    ; 004979c4
    CMP EAX,EDX                         ; 004979c5
    JZ 0x004979f3                       ; 004979c7
        ;   XREF to: 004979f3 (CONDITIONAL_JUMP)  ; LAB_004979f3
    MOV EAX,dword ptr [ESP + 0x244]     ; 004979c9
    MOV dword ptr [ESP + 0x1e4],EAX     ; 004979d0
    MOV EAX,dword ptr [ESP + 0x248]     ; 004979d7
    MOV dword ptr [ESP + 0x1e8],EAX     ; 004979de
    MOV EAX,dword ptr [ESP + 0x24c]     ; 004979e5
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004979ec
    FLD float ptr [ESP + 0x1dc]         ; 004979f3
        ;   Label: LAB_004979f3
    FMUL float ptr [ESP + 0x1e8]        ; 004979fa
    FLD float ptr [ESP + 0x1d8]         ; 00497a01
    FMUL float ptr [ESP + 0x1e4]        ; 00497a08
    FADDP                               ; 00497a0f
    FLD float ptr [ESP + 0x1e0]         ; 00497a11
    FMUL float ptr [ESP + 0x1ec]        ; 00497a18
    MOV ESI,0x43e00000                  ; 00497a1f
    FADDP                               ; 00497a24
    MOV dword ptr [ESP + 0x34],ESI      ; 00497a26
    FST float ptr [ESP + 0x18]          ; 00497a2a
    FLDZ                                ; 00497a2e
    FCOMPP                              ; 00497a30
    FNSTSW AX                           ; 00497a32
    SAHF                                ; 00497a34
    JNC 0x00497ae0                      ; 00497a35
        ;   XREF to: 00497ae0 (CONDITIONAL_JUMP)  ; LAB_00497ae0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497a3b
    FLDZ                                ; 00497a3e
    FLD float ptr [EAX + 0x3c]          ; 00497a40
    FSTP double ptr [ESP + 0x8]         ; 00497a43
    FCOMP double ptr [ESP + 0x8]        ; 00497a47
    FNSTSW AX                           ; 00497a4b
    SAHF                                ; 00497a4d
    JNC 0x004983b9                      ; 00497a4e
        ;   XREF to: 004983b9 (CONDITIONAL_JUMP)  ; LAB_004983b9
    FLD double ptr [ESP + 0x8]          ; 00497a54
    FCOS                                ; 00497a58
    FLD float ptr [ESP + 0x1dc]         ; 00497a5a
    FMUL ST0                            ; 00497a61
    FLD float ptr [ESP + 0x1d8]         ; 00497a63
    FMUL ST0                            ; 00497a6a
    FADDP                               ; 00497a6c
    FLD float ptr [ESP + 0x1e0]         ; 00497a6e
    FMUL ST0                            ; 00497a75
    FADDP                               ; 00497a77
    FSQRT                               ; 00497a79
    FLD float ptr [ESP + 0x1e8]         ; 00497a7b
    FMUL ST0                            ; 00497a82
    FLD float ptr [ESP + 0x1e4]         ; 00497a84
    FMUL ST0                            ; 00497a8b
    FADDP                               ; 00497a8d
    FLD float ptr [ESP + 0x1ec]         ; 00497a8f
    FMUL ST0                            ; 00497a96
    FADDP                               ; 00497a98
    FSQRT                               ; 00497a9a
    FMULP                               ; 00497a9c
    FDIVR float ptr [ESP + 0x18]        ; 00497a9e
    FXCH                                ; 00497aa2
    FSTP float ptr [ESP + 0x2c]         ; 00497aa4
    FST float ptr [ESP + 0x364]         ; 00497aa8
    FCOMP float ptr [ESP + 0x2c]        ; 00497aaf
    FNSTSW AX                           ; 00497ab3
    SAHF                                ; 00497ab5
    JBE 0x00497acf                      ; 00497ab6
        ;   XREF to: 00497acf (CONDITIONAL_JUMP)  ; LAB_00497acf
    FLD float ptr [ESP + 0x2c]          ; 00497ab8
    FLD float ptr [ESP + 0x364]         ; 00497abc
    FSUB ST0,ST1                        ; 00497ac3
    FLD1                                ; 00497ac5
    FSUBRP ST2,ST0                      ; 00497ac7
    FDIVRP                              ; 00497ac9
    FSTP float ptr [ESP + 0x20]         ; 00497acb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497acf
        ;   Label: LAB_00497acf
    FLD float ptr [EAX + 0x3c]          ; 00497ad2
    FPTAN                               ; 00497ad5
    FSTP ST0                            ; 00497ad7
    FSTP float ptr [ESP + 0x368]        ; 00497ad9
    PUSH 0x0                            ; 00497ae0
        ;   Label: LAB_00497ae0
    MOV EAX,[0x0060b280]                ; 00497ae2 | DAT_0060b280
    PUSH EAX                            ; 00497ae7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00497ae8
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00497aed
    FLDZ                                ; 00497af0
    FLD float ptr [ESP + 0x20]          ; 00497af2
    FSTP double ptr [ESP]               ; 00497af6
    FCOMP double ptr [ESP]              ; 00497af9
    FNSTSW AX                           ; 00497afc
    SAHF                                ; 00497afe
    JNC 0x00498063                      ; 00497aff
        ;   XREF to: 00498063 (CONDITIONAL_JUMP)  ; LAB_00498063
    MOV EAX,[0x00616494]                ; 00497b05 | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 00497b0a | g_CGameInstance.halo_mode
    JZ 0x00498063                       ; 00497b0e
        ;   XREF to: 00498063 (CONDITIONAL_JUMP)  ; LAB_00498063
    FLD double ptr [ESP]                ; 00497b14
    FMUL double ptr [0x005d5492]        ; 00497b17 | DAT_005d5492
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497b1d
    FLD float ptr [ESP + 0x20]          ; 00497b20
    FMUL float ptr [EAX + 0x18]         ; 00497b24
    FLD float ptr [ESP + 0x30]          ; 00497b27
    FLD ST0                             ; 00497b2b
    FLD1                                ; 00497b2d
    FSUBRP ST4,ST0                      ; 00497b2f
    FMUL ST3                            ; 00497b31
    FLD float ptr [ESP + 0x1c]          ; 00497b33
    FMUL ST4                            ; 00497b37
    PUSH 0x1                            ; 00497b39
    MOV ECX,dword ptr [0x0060b280]      ; 00497b3b | DAT_0060b280
    XOR EBX,EBX                         ; 00497b41
    PUSH ECX                            ; 00497b43
    FXCH ST3                            ; 00497b44
    FSTP float ptr [ESP + 0x28]         ; 00497b46
    FSTP ST1                            ; 00497b4a
    FXCH ST2                            ; 00497b4c
    FSTP ST1                            ; 00497b4e
    FXCH                                ; 00497b50
    FSTP float ptr [ESP + 0x38]         ; 00497b52
    FSTP float ptr [ESP + 0x24]         ; 00497b56
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00497b5a
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00497b5f
    MOV dword ptr [ESP + 0x390],EBX     ; 00497b62
    MOV EAX,dword ptr [ESP + 0x390]     ; 00497b69
        ;   Label: LAB_00497b69
    MOV dword ptr [ESP + 0x398],EAX     ; 00497b70
    FILD dword ptr [ESP + 0x398]        ; 00497b77
    FMUL float ptr [0x005d549a]         ; 00497b7e | DAT_005d549a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497b84
    FMUL float ptr [ESP + 0x28]         ; 00497b87
    FLD float ptr [EAX + 0x3c]          ; 00497b8b
    FLDZ                                ; 00497b8e
    FXCH ST2                            ; 00497b90
    FSTP float ptr [ESP + 0x24]         ; 00497b92
    FXCH                                ; 00497b96
    FCOMPP                              ; 00497b98
    FNSTSW AX                           ; 00497b9a
    SAHF                                ; 00497b9c
    JNC 0x0049850f                      ; 00497b9d
        ;   XREF to: 0049850f (CONDITIONAL_JUMP)  ; LAB_0049850f
    FLD float ptr [ESP + 0x368]         ; 00497ba3
    FMUL float ptr [ESP + 0x24]         ; 00497baa
        ;   Label: LAB_00497baa
    FSTP float ptr [ESP + 0x388]        ; 00497bae
    FLD float ptr [ESP + 0x24]          ; 00497bb5
    FLD float ptr [ESP + 0xf8]          ; 00497bb9
    FMUL ST1                            ; 00497bc0
    FLD float ptr [ESP + 0x104]         ; 00497bc2
    FMUL ST2                            ; 00497bc9
    FLD float ptr [ESP + 0x110]         ; 00497bcb
    FMULP ST3                           ; 00497bd2
    LEA EDI,[ESP + 0x22c]               ; 00497bd4
    LEA ESI,[ESP + 0x1f0]               ; 00497bdb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497be2
    FXCH                                ; 00497be5
    FSTP float ptr [ESP + 0x1f0]        ; 00497be7
    FSTP float ptr [ESP + 0x1f4]        ; 00497bee
    FSTP float ptr [ESP + 0x1f8]        ; 00497bf5
    MOVSD ES:EDI,ESI                    ; 00497bfc
    MOVSD ES:EDI,ESI                    ; 00497bfd
    MOVSD ES:EDI,ESI                    ; 00497bfe
    LEA EDX,[ESP + 0x238]               ; 00497bff
    FLD float ptr [EAX + 0x4]           ; 00497c06
    FLD float ptr [EAX + 0x8]           ; 00497c09
    FLD float ptr [EAX]                 ; 00497c0c
    LEA EDI,[ESP + 0x25c]               ; 00497c0e
    LEA ESI,[ESP + 0x19c]               ; 00497c15
    LEA EAX,[ESP + 0x25c]               ; 00497c1c
    FADD float ptr [ESP + 0x22c]        ; 00497c23
    FXCH ST2                            ; 00497c2a
    FADD float ptr [ESP + 0x230]        ; 00497c2c
    FXCH                                ; 00497c33
    FADD float ptr [ESP + 0x234]        ; 00497c35
    FXCH ST2                            ; 00497c3c
    FSTP float ptr [ESP + 0x19c]        ; 00497c3e
    FSTP float ptr [ESP + 0x1a0]        ; 00497c45
    FSTP float ptr [ESP + 0x1a4]        ; 00497c4c
    MOVSD ES:EDI,ESI                    ; 00497c53
    MOVSD ES:EDI,ESI                    ; 00497c54
    MOVSD ES:EDI,ESI                    ; 00497c55
    CMP EDX,EAX                         ; 00497c56
    JZ 0x00497c84                       ; 00497c58
        ;   XREF to: 00497c84 (CONDITIONAL_JUMP)  ; LAB_00497c84
    MOV EAX,dword ptr [ESP + 0x25c]     ; 00497c5a
    MOV dword ptr [ESP + 0x238],EAX     ; 00497c61
    MOV EAX,dword ptr [ESP + 0x260]     ; 00497c68
    MOV dword ptr [ESP + 0x23c],EAX     ; 00497c6f
    MOV EAX,dword ptr [ESP + 0x264]     ; 00497c76
    MOV dword ptr [ESP + 0x240],EAX     ; 00497c7d
    LEA EAX,[ESP + 0x238]               ; 00497c84
        ;   Label: LAB_00497c84
    PUSH EAX                            ; 00497c8b
    MOV ESI,dword ptr [0x0060b280]      ; 00497c8c | DAT_0060b280
    PUSH ESI                            ; 00497c92 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00497c93
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00497c98
    MOV EDI,dword ptr [0x0060b280]      ; 00497c9b | DAT_0060b280
    PUSH EDI                            ; 00497ca1
    LEA ESI,[ESP + 0x128]               ; 00497ca2
    LEA EBX,[ESP + 0x278]               ; 00497ca9
    CALL engine_drender.cpp_FUN_0046b670 ; 00497cb0
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b670()
    LEA EDI,[ESP + 0x1c4]               ; 00497cb5
    ADD ESP,0x4                         ; 00497cbc
    LEA ESI,[ESP + 0x124]               ; 00497cbf
    MOV EAX,dword ptr [ESP + 0x390]     ; 00497cc6
    PUSH 0x0                            ; 00497ccd
    MOVSD ES:EDI,ESI                    ; 00497ccf
    MOVSD ES:EDI,ESI                    ; 00497cd0
    MOVSD ES:EDI,ESI                    ; 00497cd1
    MOV dword ptr [ESP + 0x39c],EAX     ; 00497cd2
    LEA EAX,[ESP + 0x1c4]               ; 00497cd9
    FILD dword ptr [ESP + 0x39c]        ; 00497ce0
    PUSH EAX                            ; 00497ce7
    MOV EAX,[0x0060b280]                ; 00497ce8 | DAT_0060b280
    FADD float ptr [ESP + 0x1d0]        ; 00497ced
    PUSH EAX                            ; 00497cf4
    FSTP float ptr [ESP + 0x1d4]        ; 00497cf5
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 00497cfc
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00497d01
    XOR EDX,EDX                         ; 00497d04
    MOV EAX,dword ptr [ESP + 0x388]     ; 00497d06
    MOV dword ptr [ESP + 0x2f4],EDX     ; 00497d0d
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00497d14
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00497d1b
    LEA EAX,[ESP + 0x2ec]               ; 00497d22
    MOV EDX,dword ptr [0x0060b280]      ; 00497d29 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00497d2f
    FMUL float ptr [0x005f64e4]         ; 00497d31 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00497d37
    FLD float ptr [EAX + 0x4]           ; 00497d39
    FMUL float ptr [0x005f64e4]         ; 00497d3c | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00497d42
    FLD float ptr [EAX + 0x8]           ; 00497d45
    FMUL float ptr [0x005f64e4]         ; 00497d48 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00497d4e
    LEA EAX,[ESP + 0x274]               ; 00497d51
    PUSH EAX                            ; 00497d58
    MOV EAX,dword ptr [EDX]             ; 00497d59 | DAT_01ba5c50
    PUSH EAX                            ; 00497d5b
    CALL engine_special.cpp_FUN_0055d723 ; 00497d5c
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497d61
    MOV AH,byte ptr [ESP + 0x2ef]       ; 00497d64
    XOR AH,0x80                         ; 00497d6b
    LEA EBX,[ESP + 0x2e0]               ; 00497d6e
    MOV byte ptr [ESP + 0x2ef],AH       ; 00497d75
    LEA EAX,[ESP + 0x2ec]               ; 00497d7c
    MOV EDX,dword ptr [0x0060b280]      ; 00497d83 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00497d89
    FMUL float ptr [0x005f64e4]         ; 00497d8b | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00497d91
    FLD float ptr [EAX + 0x4]           ; 00497d93
    FMUL float ptr [0x005f64e4]         ; 00497d96 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00497d9c
    FLD float ptr [EAX + 0x8]           ; 00497d9f
    FMUL float ptr [0x005f64e4]         ; 00497da2 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00497da8
    LEA EAX,[ESP + 0x2e0]               ; 00497dab
    PUSH EAX                            ; 00497db2
    MOV EAX,dword ptr [EDX]             ; 00497db3 | DAT_01ba5c50
    ADD EAX,0x30                        ; 00497db5
    PUSH EAX                            ; 00497db8
    CALL engine_special.cpp_FUN_0055d723 ; 00497db9
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497dbe
    MOV DL,byte ptr [ESP + 0x2f3]       ; 00497dc1
    LEA EBX,[ESP + 0x310]               ; 00497dc8
    XOR DL,0x80                         ; 00497dcf
    LEA EAX,[ESP + 0x2ec]               ; 00497dd2
    MOV byte ptr [ESP + 0x2f3],DL       ; 00497dd9
    MOV EDX,dword ptr [0x0060b280]      ; 00497de0 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00497de6
    FMUL float ptr [0x005f64e4]         ; 00497de8 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00497dee
    FLD float ptr [EAX + 0x4]           ; 00497df0
    FMUL float ptr [0x005f64e4]         ; 00497df3 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00497df9
    FLD float ptr [EAX + 0x8]           ; 00497dfc
    FMUL float ptr [0x005f64e4]         ; 00497dff | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00497e05
    LEA EAX,[ESP + 0x310]               ; 00497e08
    PUSH EAX                            ; 00497e0f
    MOV EAX,dword ptr [EDX]             ; 00497e10 | DAT_01ba5c50
    ADD EAX,0x60                        ; 00497e12
    PUSH EAX                            ; 00497e15
    CALL engine_special.cpp_FUN_0055d723 ; 00497e16
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497e1b
    MOV DH,byte ptr [ESP + 0x2ef]       ; 00497e1e
    LEA EBX,[ESP + 0x2bc]               ; 00497e25
    XOR DH,0x80                         ; 00497e2c
    LEA EAX,[ESP + 0x2ec]               ; 00497e2f
    MOV byte ptr [ESP + 0x2ef],DH       ; 00497e36
    MOV EDX,dword ptr [0x0060b280]      ; 00497e3d | DAT_0060b280
    FLD float ptr [EAX]                 ; 00497e43
    FMUL float ptr [0x005f64e4]         ; 00497e45 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00497e4b
    FLD float ptr [EAX + 0x4]           ; 00497e4d
    FMUL float ptr [0x005f64e4]         ; 00497e50 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00497e56
    FLD float ptr [EAX + 0x8]           ; 00497e59
    FMUL float ptr [0x005f64e4]         ; 00497e5c | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00497e62
    LEA EAX,[ESP + 0x2bc]               ; 00497e65
    PUSH EAX                            ; 00497e6c
    MOV EAX,dword ptr [EDX]             ; 00497e6d | DAT_01ba5c50
    ADD EAX,0x90                        ; 00497e6f
    PUSH EAX                            ; 00497e74
    CALL engine_special.cpp_FUN_0055d723 ; 00497e75
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00497e7a
    PUSH 0x61522c                       ; 00497e7d | DAT_0061522c
    MOV ECX,dword ptr [0x0060b280]      ; 00497e82 | DAT_0060b280
    PUSH ECX                            ; 00497e88 | DAT_01ba5c50
    MOV EBX,0x4                         ; 00497e89
    XOR ESI,ESI                         ; 00497e8e
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00497e90
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00497e95
    MOV EDX,dword ptr [0x0060b280]      ; 00497e98 | DAT_0060b280
    FLD float ptr [ESP + 0x20]          ; 00497e9e
    MOV dword ptr [ESP + 0xcc],EBX      ; 00497ea2
    MOV dword ptr [ESP + 0xdc],ESI      ; 00497ea9
    MOV dword ptr [ESP + 0xd8],ESI      ; 00497eb0
    MOV dword ptr [ESP + 0xd4],ESI      ; 00497eb7
    MOV dword ptr [ESP + 0xd0],ESI      ; 00497ebe
    MOV dword ptr [ESP + 0xe0],ESI      ; 00497ec5
    FMUL double ptr [0x005d54a2]        ; 00497ecc | DAT_005d54a2
    MOV EBX,dword ptr [EDX]             ; 00497ed2 | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 00497ed4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x33c]       ; 00497ed9
    MOV EAX,dword ptr [ESP + 0x33c]     ; 00497ee0
    MOV dword ptr [EBX + 0x2c],EAX      ; 00497ee7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497eea
    MOV EBX,dword ptr [EDX]             ; 00497eed
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00497eef
    MOV dword ptr [EBX + 0x20],EAX      ; 00497ef2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497ef5
    MOV EBX,dword ptr [EDX]             ; 00497ef8
    MOV EAX,dword ptr [EAX + 0x30]      ; 00497efa
    MOV dword ptr [EBX + 0x24],EAX      ; 00497efd
    MOV EAX,dword ptr [EBP + 0x14]      ; 00497f00
    MOV EBX,dword ptr [EDX]             ; 00497f03
    MOV EAX,dword ptr [EAX + 0x34]      ; 00497f05
    MOV dword ptr [EBX + 0x28],EAX      ; 00497f08
    MOV dword ptr [ESP + 0xe4],0x1      ; 00497f0b
    MOV EBX,dword ptr [EDX]             ; 00497f16
    MOV EAX,dword ptr [ESP + 0x33c]     ; 00497f18
    MOV dword ptr [EBX + 0x5c],EAX      ; 00497f1f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497f22
    MOV EAX,dword ptr [EDX]             ; 00497f25
    MOV EBX,dword ptr [EBX + 0x2c]      ; 00497f27
    MOV dword ptr [EAX + 0x50],EBX      ; 00497f2a
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497f2d
    MOV EAX,dword ptr [EDX]             ; 00497f30
    MOV EBX,dword ptr [EBX + 0x30]      ; 00497f32
    MOV dword ptr [EAX + 0x54],EBX      ; 00497f35
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497f38
    MOV EAX,dword ptr [EDX]             ; 00497f3b
    MOV EBX,dword ptr [EBX + 0x34]      ; 00497f3d
    MOV ESI,0x2                         ; 00497f40
    MOV dword ptr [EAX + 0x58],EBX      ; 00497f45
    MOV dword ptr [ESP + 0xe8],ESI      ; 00497f48
    MOV EBX,dword ptr [EDX]             ; 00497f4f
    MOV EAX,dword ptr [ESP + 0x33c]     ; 00497f51
    MOV dword ptr [EBX + 0x8c],EAX      ; 00497f58
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497f5e
    MOV EAX,dword ptr [EDX]             ; 00497f61
    MOV EBX,dword ptr [EBX + 0x2c]      ; 00497f63
    MOV dword ptr [EAX + 0x80],EBX      ; 00497f66
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497f6c
    MOV EAX,dword ptr [EDX]             ; 00497f6f
    MOV EBX,dword ptr [EBX + 0x30]      ; 00497f71
    MOV dword ptr [EAX + 0x84],EBX      ; 00497f74
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497f7a
    MOV EAX,dword ptr [EDX]             ; 00497f7d
    MOV EBX,dword ptr [EBX + 0x34]      ; 00497f7f
    MOV EDI,0x3                         ; 00497f82
    MOV dword ptr [EAX + 0x88],EBX      ; 00497f87
    MOV dword ptr [ESP + 0xec],EDI      ; 00497f8d
    MOV EBX,dword ptr [EDX]             ; 00497f94
    MOV EAX,dword ptr [ESP + 0x33c]     ; 00497f96
    MOV dword ptr [EBX + 0xbc],EAX      ; 00497f9d
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497fa3
    MOV EAX,dword ptr [EDX]             ; 00497fa6
    MOV EBX,dword ptr [EBX + 0x2c]      ; 00497fa8
    MOV dword ptr [EAX + 0xb0],EBX      ; 00497fab
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497fb1
    MOV EAX,dword ptr [EDX]             ; 00497fb4
    MOV EBX,dword ptr [EBX + 0x30]      ; 00497fb6
    MOV dword ptr [EAX + 0xb4],EBX      ; 00497fb9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00497fbf
    MOV EAX,dword ptr [EDX]             ; 00497fc2
    MOV EBX,dword ptr [EBX + 0x34]      ; 00497fc4
    MOV dword ptr [EAX + 0xb8],EBX      ; 00497fc7
    MOV EAX,dword ptr [EDX]             ; 00497fcd
    MOV dword ptr [EAX + 0x18],0xf80000 ; 00497fcf
    MOV EAX,dword ptr [EDX]             ; 00497fd6
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 00497fd8
    MOV EAX,dword ptr [EDX]             ; 00497fdf
    MOV dword ptr [EAX + 0x48],0x80000  ; 00497fe1
    MOV EAX,dword ptr [EDX]             ; 00497fe8
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 00497fea
    MOV EAX,dword ptr [EDX]             ; 00497ff1
    MOV dword ptr [EAX + 0x78],0x80000  ; 00497ff3
    MOV EAX,dword ptr [EDX]             ; 00497ffa
    MOV dword ptr [EAX + 0x7c],0x80000  ; 00497ffc
    MOV EAX,dword ptr [EDX]             ; 00498003
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 00498005
    MOV EAX,dword ptr [EDX]             ; 0049800f
    MOV dword ptr [EAX + 0xac],0x80000  ; 00498011
    LEA EAX,[ESP + 0xc8]                ; 0049801b
    PUSH EAX                            ; 00498022
    PUSH EDX                            ; 00498023
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 00498024
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00498029
    MOV EAX,[0x0060b280]                ; 0049802c | DAT_0060b280
    PUSH EAX                            ; 00498031 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00498032
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00498037
    MOV EDX,dword ptr [ESP + 0x390]     ; 0049803a
    INC EDX                             ; 00498041
    MOV dword ptr [ESP + 0x390],EDX     ; 00498042
    CMP EDX,0x19                        ; 00498049
    JL 0x00497b69                       ; 0049804c
        ;   XREF to: 00497b69 (CONDITIONAL_JUMP)  ; LAB_00497b69
    PUSH 0x0                            ; 00498052
    MOV EBX,dword ptr [0x0060b280]      ; 00498054 | DAT_0060b280
    PUSH EBX                            ; 0049805a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0049805b
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498060
    FLD float ptr [ESP + 0x30]          ; 00498063
        ;   Label: LAB_00498063
    FLDZ                                ; 00498067
    FCOMPP                              ; 00498069
    FNSTSW AX                           ; 0049806b
    SAHF                                ; 0049806d
    JNC 0x0049834d                      ; 0049806e
        ;   XREF to: 0049834d (CONDITIONAL_JUMP)  ; LAB_0049834d
    PUSH 0x6151fc                       ; 00498074 | DAT_006151fc
    MOV ESI,dword ptr [0x0060b280]      ; 00498079 | DAT_0060b280
    PUSH ESI                            ; 0049807f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00498080
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00498085
    MOV EDI,dword ptr [EBP + 0x14]      ; 00498088
    PUSH EDI                            ; 0049808b
    MOV EAX,[0x0060b280]                ; 0049808c | DAT_0060b280
    PUSH EAX                            ; 00498091 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00498092
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00498097
    PUSH 0x0                            ; 0049809a
    LEA EAX,[ESP + 0x2cc]               ; 0049809c
    PUSH EAX                            ; 004980a3
    MOV EDX,dword ptr [0x0060b280]      ; 004980a4 | DAT_0060b280
    PUSH EDX                            ; 004980aa | DAT_01ba5c50
    MOV EBX,0x8                         ; 004980ab
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 004980b0
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    FLDZ                                ; 004980b5
    FLD float ptr [EDI + 0x3c]          ; 004980b7
    ADD ESP,0xc                         ; 004980ba
    MOV EAX,dword ptr [EDI + 0x38]      ; 004980bd
    XOR ECX,ECX                         ; 004980c0
    FSTP double ptr [ESP + 0x10]        ; 004980c2
    MOV dword ptr [ESP + 0x360],EAX     ; 004980c6
    MOV dword ptr [ESP + 0x370],ECX     ; 004980cd
    MOV dword ptr [ESP + 0x38c],EBX     ; 004980d4
    FCOMP double ptr [ESP + 0x10]       ; 004980db
    FNSTSW AX                           ; 004980df
    SAHF                                ; 004980e1
    JNC 0x0049810f                      ; 004980e2
        ;   XREF to: 0049810f (CONDITIONAL_JUMP)  ; LAB_0049810f
    FLD double ptr [ESP + 0x10]         ; 004980e4
    FPTAN                               ; 004980e8
    FSTP ST0                            ; 004980ea
    FMUL float ptr [ESP + 0x28]         ; 004980ec
    MOV ESI,0x1                         ; 004980f0
    MOV EDI,0x10                        ; 004980f5
    MOV dword ptr [ESP + 0x370],ESI     ; 004980fa
    MOV dword ptr [ESP + 0x38c],EDI     ; 00498101
    FSTP float ptr [ESP + 0x360]        ; 00498108
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049810f
        ;   Label: LAB_0049810f
    PUSH dword ptr [EAX + 0x38]         ; 00498112
    PUSH 0x0                            ; 00498115
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_00497710 ; 00498117
        ;   XREF to: 00497710 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_computeScreenSpaceSize_FUN_00497710()
    MOV dword ptr [ESP + 0x3a4],EAX     ; 0049811c
    FLD float ptr [ESP + 0x3a4]         ; 00498123
    ADD ESP,0x8                         ; 0049812a
    PUSH dword ptr [ESP + 0x360]        ; 0049812d
    PUSH dword ptr [ESP + 0x2c]         ; 00498134
    FSTP float ptr [ESP + 0x37c]        ; 00498138
    CALL core_fire.cpp_computeScreenSpaceSize_FUN_00497710 ; 0049813f
        ;   XREF to: 00497710 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_computeScreenSpaceSize_FUN_00497710()
    MOV dword ptr [ESP + 0x3a4],EAX     ; 00498144
    FLD float ptr [ESP + 0x3a4]         ; 0049814b
    ADD ESP,0x8                         ; 00498152
    XOR EAX,EAX                         ; 00498155
    FSTP float ptr [ESP + 0x378]        ; 00498157
    MOV EDX,dword ptr [ESP + 0x38c]     ; 0049815e
    MOV dword ptr [ESP + 0x394],EAX     ; 00498165
    TEST EDX,EDX                        ; 0049816c
    JL 0x0049833e                       ; 0049816e
        ;   XREF to: 0049833e (CONDITIONAL_JUMP)  ; LAB_0049833e
    FLD float ptr [ESP + 0x28]          ; 00498174
    FMUL float ptr [0x005d54aa]         ; 00498178 | DAT_005d54aa
    FDIV float ptr [0x005d54ae]         ; 0049817e | DAT_005d54ae
    MOV dword ptr [ESP + 0x380],0x100   ; 00498184
    FSTP float ptr [ESP + 0x36c]        ; 0049818f
    MOV EAX,dword ptr [ESP + 0x394]     ; 00498196
        ;   Label: LAB_00498196
    MOV dword ptr [ESP + 0x398],EAX     ; 0049819d
    MOV EAX,dword ptr [ESP + 0x38c]     ; 004981a4
    MOV dword ptr [ESP + 0x39c],EAX     ; 004981ab
    FILD dword ptr [ESP + 0x398]        ; 004981b2
    FILD dword ptr [ESP + 0x39c]        ; 004981b9
    FDIVP                               ; 004981c0
    FMUL double ptr [0x005d5492]        ; 004981c2 | DAT_005d5492
    FMUL double ptr [0x005d54b2]        ; 004981c8 | DAT_005d54b2
    FLD ST0                             ; 004981ce
    FSIN                                ; 004981d0
    FXCH                                ; 004981d2
    FCOS                                ; 004981d4
    MOV EDX,dword ptr [0x0060b280]      ; 004981d6 | DAT_0060b280
    MOV ESI,dword ptr [EDX]             ; 004981dc | DAT_01ba5c50
    MOV ECX,0xc                         ; 004981de
    LEA EDI,[ESI + 0x90]                ; 004981e3
    MOVSD.REP ES:EDI,ESI                ; 004981e9
    MOV ESI,dword ptr [EDX]             ; 004981eb | DAT_01ba5c50
    MOV ECX,0xc                         ; 004981ed
    LEA EDI,[ESI + 0x60]                ; 004981f2
    LEA ESI,[ESI + 0x30]                ; 004981f5
    FXCH                                ; 004981f8
    FST float ptr [ESP + 0x348]         ; 004981fa
    FLD float ptr [ESP + 0x374]         ; 00498201
    FXCH                                ; 00498208
    FMUL ST1                            ; 0049820a
    MOVSD.REP ES:EDI,ESI                ; 0049820c
    FXCH ST2                            ; 0049820e
    FST float ptr [ESP + 0x340]         ; 00498210
    FMULP                               ; 00498217
    XOR ECX,ECX                         ; 00498219
    LEA EBX,[ESP + 0x130]               ; 0049821b
    MOV dword ptr [ESP + 0x18c],ECX     ; 00498222
    LEA EAX,[ESP + 0x184]               ; 00498229
    FXCH                                ; 00498230
    FSTP float ptr [ESP + 0x188]        ; 00498232
    FSTP float ptr [ESP + 0x184]        ; 00498239
    FLD float ptr [EAX]                 ; 00498240
    FMUL float ptr [0x005f64e4]         ; 00498242 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00498248
    FLD float ptr [EAX + 0x4]           ; 0049824a
    FMUL float ptr [0x005f64e4]         ; 0049824d | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00498253
    FLD float ptr [EAX + 0x8]           ; 00498256
    FMUL float ptr [0x005f64e4]         ; 00498259 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049825f
    LEA EAX,[ESP + 0x130]               ; 00498262
    PUSH EAX                            ; 00498269
    MOV EAX,dword ptr [EDX]             ; 0049826a | DAT_01ba5c50
    PUSH EAX                            ; 0049826c
    CALL engine_special.cpp_FUN_0055d723 ; 0049826d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498272
    FLD float ptr [ESP + 0x378]         ; 00498275
    FLD float ptr [ESP + 0x340]         ; 0049827c
    FMUL ST1                            ; 00498283
    FLD float ptr [ESP + 0x348]         ; 00498285
    FMULP ST2                           ; 0049828c
    LEA EBX,[ESP + 0x178]               ; 0049828e
    LEA EAX,[ESP + 0x184]               ; 00498295
    MOV EDX,dword ptr [0x0060b280]      ; 0049829c | DAT_0060b280
    FLD float ptr [ESP + 0x28]          ; 004982a2
    FADD double ptr [0x005d54ca]        ; 004982a6 | DAT_005d54ca
    FXCH                                ; 004982ac
    FSTP float ptr [ESP + 0x184]        ; 004982ae
    FXCH                                ; 004982b5
    FSTP float ptr [ESP + 0x188]        ; 004982b7
    FSTP float ptr [ESP + 0x18c]        ; 004982be
    FLD float ptr [EAX]                 ; 004982c5
    FMUL float ptr [0x005f64e4]         ; 004982c7 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004982cd
    FLD float ptr [EAX + 0x4]           ; 004982cf
    FMUL float ptr [0x005f64e4]         ; 004982d2 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004982d8
    FLD float ptr [EAX + 0x8]           ; 004982db
    FMUL float ptr [0x005f64e4]         ; 004982de | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004982e4
    LEA EAX,[ESP + 0x178]               ; 004982e7
    PUSH EAX                            ; 004982ee
    MOV EAX,dword ptr [EDX]             ; 004982ef | DAT_01ba5c50
    ADD EAX,0x30                        ; 004982f1
    PUSH EAX                            ; 004982f4
    CALL engine_special.cpp_FUN_0055d723 ; 004982f5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004982fa
    MOV EBX,dword ptr [ESP + 0x394]     ; 004982fd
    TEST EBX,EBX                        ; 00498304
    JNZ 0x0049851e                      ; 00498306
        ;   XREF to: 0049851e (CONDITIONAL_JUMP)  ; LAB_0049851e
    MOV ECX,dword ptr [ESP + 0x380]     ; 0049830c
        ;   Label: LAB_0049830c
    MOV EBX,dword ptr [ESP + 0x394]     ; 00498313
    MOV ESI,dword ptr [ESP + 0x38c]     ; 0049831a
    ADD ECX,0x100                       ; 00498321
    INC EBX                             ; 00498327
    MOV dword ptr [ESP + 0x380],ECX     ; 00498328
    MOV dword ptr [ESP + 0x394],EBX     ; 0049832f
    CMP EBX,ESI                         ; 00498336
    JLE 0x00498196                      ; 00498338
        ;   XREF to: 00498196 (CONDITIONAL_JUMP)  ; LAB_00498196
    MOV EDI,dword ptr [0x0060b280]      ; 0049833e | DAT_0060b280
        ;   Label: LAB_0049833e
    PUSH EDI                            ; 00498344 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00498345
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0049834a
    FLD float ptr [ESP + 0x1c]          ; 0049834d
        ;   Label: LAB_0049834d
    FLDZ                                ; 00498351
    FCOMPP                              ; 00498353
    FNSTSW AX                           ; 00498355
    SAHF                                ; 00498357
    JC 0x004987ad                       ; 00498358
        ;   XREF to: 004987ad (CONDITIONAL_JUMP)  ; LAB_004987ad
    PUSH 0x0                            ; 0049835e
        ;   Label: LAB_0049835e
    MOV ESI,dword ptr [0x0060b280]      ; 00498360 | DAT_0060b280
    PUSH ESI                            ; 00498366 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00498367
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0049836c
    PUSH 0xffff                         ; 0049836f
    MOV EDI,dword ptr [0x0060b280]      ; 00498374 | DAT_0060b280
    PUSH EDI                            ; 0049837a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0049837b
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00498380
    MOV ESP,EBP                         ; 00498383
    POP EBP                             ; 00498385
    POP EDI                             ; 00498386
    POP ESI                             ; 00498387
    POP EBX                             ; 00498388
    RET                                 ; 00498389
    MOV EAX,dword ptr [ESP + 0x160]     ; 0049838a
        ;   Label: LAB_0049838a
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00498391
    MOV EAX,dword ptr [ESP + 0x164]     ; 00498398
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0049839f
    MOV EAX,dword ptr [ESP + 0x168]     ; 004983a6
    MOV dword ptr [ESP + 0x1e0],EAX     ; 004983ad
    JMP 0x00497973                      ; 004983b4
        ;   XREF to: 00497973 (UNCONDITIONAL_JUMP)  ; LAB_00497973
    MOV EDI,dword ptr [0x0060b280]      ; 004983b9 | DAT_0060b280
        ;   Label: LAB_004983b9
    PUSH EDI                            ; 004983bf | DAT_01ba5c50
    LEA ESI,[ESP + 0x1ac]               ; 004983c0
    CALL engine_drender.cpp_FUN_0046b5e0 ; 004983c7
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5e0()
    LEA EDI,[ESP + 0x14c]               ; 004983cc
    LEA ESI,[ESP + 0x1ac]               ; 004983d3
    ADD ESP,0x4                         ; 004983da
    MOVSD ES:EDI,ESI                    ; 004983dd
    MOVSD ES:EDI,ESI                    ; 004983de
    MOVSD ES:EDI,ESI                    ; 004983df
    MOV EAX,dword ptr [EBP + 0x14]      ; 004983e0
    FLD float ptr [ESP + 0x148]         ; 004983e3
    FSUB float ptr [EAX]                ; 004983ea
    FLD float ptr [ESP + 0x14c]         ; 004983ec
    FXCH                                ; 004983f3
    FSTP float ptr [ESP + 0x148]        ; 004983f5
    FSUB float ptr [EAX + 0x4]          ; 004983fc
    FLD float ptr [ESP + 0x150]         ; 004983ff
    FXCH                                ; 00498406
    FSTP float ptr [ESP + 0x14c]        ; 00498408
    FSUB float ptr [EAX + 0x8]          ; 0049840f
    LEA EAX,[ESP + 0x148]               ; 00498412
    LEA ESI,[ESP + 0x304]               ; 00498419
    PUSH EAX                            ; 00498420
    LEA EAX,[ESP + 0xf4]                ; 00498421
    LEA EDI,[ESP + 0x200]               ; 00498428
    PUSH EAX                            ; 0049842f
    FSTP float ptr [ESP + 0x158]        ; 00498430
    CALL core_dirmat.cpp_FUN_004495a0   ; 00498437
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x30c]               ; 0049843c
    LEA EAX,[ESP + 0x204]               ; 00498443
    ADD ESP,0x8                         ; 0049844a
    LEA EDX,[ESP + 0x148]               ; 0049844d
    MOVSD ES:EDI,ESI                    ; 00498454
    MOVSD ES:EDI,ESI                    ; 00498455
    MOVSD ES:EDI,ESI                    ; 00498456
    CMP EDX,EAX                         ; 00498457
    JZ 0x00498485                       ; 00498459
        ;   XREF to: 00498485 (CONDITIONAL_JUMP)  ; LAB_00498485
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 0049845b
    MOV dword ptr [ESP + 0x148],EAX     ; 00498462
    MOV EAX,dword ptr [ESP + 0x200]     ; 00498469
    MOV dword ptr [ESP + 0x14c],EAX     ; 00498470
    MOV EAX,dword ptr [ESP + 0x204]     ; 00498477
    MOV dword ptr [ESP + 0x150],EAX     ; 0049847e
    FLD float ptr [ESP + 0x150]         ; 00498485
        ;   Label: LAB_00498485
    FMUL double ptr [0x005d548a]        ; 0049848c | DAT_005d548a
    FDIV float ptr [ESP + 0x34]         ; 00498492
    FLD float ptr [ESP + 0x14c]         ; 00498496
    FMUL ST0                            ; 0049849d
    FLD float ptr [ESP + 0x148]         ; 0049849f
    FMUL ST0                            ; 004984a6
    FXCH ST2                            ; 004984a8
    FMUL double ptr [0x005d5492]        ; 004984aa | DAT_005d5492
    FXCH                                ; 004984b0
    FSTP float ptr [ESP + 0x350]        ; 004984b2
    FXCH                                ; 004984b9
    FADD float ptr [ESP + 0x350]        ; 004984bb
    FXCH                                ; 004984c2
    FST float ptr [ESP + 0x354]         ; 004984c4
    FMUL float ptr [ESP + 0x354]        ; 004984cb
    FXCH                                ; 004984d2
    FST float ptr [ESP + 0x358]         ; 004984d4
    FXCH                                ; 004984db
    FSTP float ptr [ESP + 0x35c]        ; 004984dd
    FCOMP float ptr [ESP + 0x35c]       ; 004984e4
    FNSTSW AX                           ; 004984eb
    SAHF                                ; 004984ed
    JNC 0x00497ae0                      ; 004984ee
        ;   XREF to: 00497ae0 (CONDITIONAL_JUMP)  ; LAB_00497ae0
    FLD float ptr [ESP + 0x358]         ; 004984f4
    FDIV float ptr [ESP + 0x35c]        ; 004984fb
    FLD1                                ; 00498502
    FSUBRP                              ; 00498504
    FSTP float ptr [ESP + 0x20]         ; 00498506
    JMP 0x00497ae0                      ; 0049850a
        ;   XREF to: 00497ae0 (UNCONDITIONAL_JUMP)  ; LAB_00497ae0
    FLD float ptr [ESP + 0x34]          ; 0049850f
        ;   Label: LAB_0049850f
    FDIVR double ptr [0x005d548a]       ; 00498513 | DAT_005d548a
    JMP 0x00497baa                      ; 00498519
        ;   XREF to: 00497baa (UNCONDITIONAL_JUMP)  ; LAB_00497baa
    FLD float ptr [ESP + 0x36c]         ; 0049851e
        ;   Label: LAB_0049851e
    MOV ESI,0x4                         ; 00498525
    MOV EAX,0x3                         ; 0049852a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049852f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    XOR EDI,EDI                         ; 00498534
    MOV dword ptr [ESP + 0x84],ESI      ; 00498536
    MOV dword ptr [ESP + 0x94],EDI      ; 0049853d
    MOV dword ptr [ESP + 0x90],EDI      ; 00498544
    MOV dword ptr [ESP + 0x8c],EDI      ; 0049854b
    MOV dword ptr [ESP + 0x88],EDI      ; 00498552
    MOV dword ptr [ESP + 0x98],EDI      ; 00498559
    MOV dword ptr [ESP + 0xbc],EAX      ; 00498560
    MOV ESI,0x1                         ; 00498567
    MOV EDI,0x2                         ; 0049856c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498571
    MOV dword ptr [ESP + 0xa4],ESI      ; 00498574
    MOV dword ptr [ESP + 0xb0],EDI      ; 0049857b
    FISTP dword ptr [ESP + 0x37c]       ; 00498582
    FLD float ptr [EAX + 0x3c]          ; 00498589
    FLDZ                                ; 0049858c
    FCOMPP                              ; 0049858e
    FNSTSW AX                           ; 00498590
    SAHF                                ; 00498592
    JNC 0x004986ed                      ; 00498593
        ;   XREF to: 004986ed (CONDITIONAL_JUMP)  ; LAB_004986ed
    MOV EDX,0x800000                    ; 00498599 | DAT_00800000
    MOV dword ptr [ESP + 0xa0],EDX      ; 0049859e | DAT_00800000
    MOV dword ptr [ESP + 0xa8],EDX      ; 004985a5 | DAT_00800000
    MOV dword ptr [ESP + 0xac],EDX      ; 004985ac | DAT_00800000
    MOV dword ptr [ESP + 0xb4],EDX      ; 004985b3 | DAT_00800000
    MOV dword ptr [ESP + 0xb8],EDX      ; 004985ba | DAT_00800000
    MOV dword ptr [ESP + 0xc0],EDX      ; 004985c1 | DAT_00800000
    MOV dword ptr [ESP + 0xc4],EDX      ; 004985c8 | DAT_00800000
    MOV dword ptr [ESP + 0x9c],EDX      ; 004985cf | DAT_00800000
    MOV EAX,[0x0060b280]                ; 004985d6 | DAT_0060b280
        ;   Label: LAB_004985d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004985db
    MOV EDX,dword ptr [EAX]             ; 004985de | DAT_01ba5c50
    MOV EBX,dword ptr [EBX + 0x2c]      ; 004985e0
    MOV dword ptr [EDX + 0x20],EBX      ; 004985e3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004985e6
    MOV EBX,dword ptr [EAX]             ; 004985e9 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x30]      ; 004985eb
    MOV dword ptr [EBX + 0x24],EDX      ; 004985ee
    MOV EBX,dword ptr [EBP + 0x14]      ; 004985f1
    MOV EDX,dword ptr [EAX]             ; 004985f4 | DAT_01ba5c50
    MOV EBX,dword ptr [EBX + 0x34]      ; 004985f6
    MOV dword ptr [EDX + 0x28],EBX      ; 004985f9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004985fc
    MOV EBX,dword ptr [EAX]             ; 004985ff | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00498601
    MOV dword ptr [EBX + 0x50],EDX      ; 00498604
    MOV EBX,dword ptr [EBP + 0x14]      ; 00498607
    MOV EDX,dword ptr [EAX]             ; 0049860a | DAT_01ba5c50
    MOV EBX,dword ptr [EBX + 0x30]      ; 0049860c
    MOV dword ptr [EDX + 0x54],EBX      ; 0049860f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498612
    MOV EBX,dword ptr [EAX]             ; 00498615 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x34]      ; 00498617
    MOV dword ptr [EBX + 0x58],EDX      ; 0049861a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049861d
    MOV EBX,dword ptr [EAX]             ; 00498620 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00498622
    MOV dword ptr [EBX + 0x80],EDX      ; 00498625
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049862b
    MOV EBX,dword ptr [EAX]             ; 0049862e | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x30]      ; 00498630
    MOV dword ptr [EBX + 0x84],EDX      ; 00498633
    MOV EBX,dword ptr [EBP + 0x14]      ; 00498639
    MOV EDX,dword ptr [EAX]             ; 0049863c | DAT_01ba5c50
    MOV EBX,dword ptr [EBX + 0x34]      ; 0049863e
    MOV dword ptr [EDX + 0x88],EBX      ; 00498641
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498647
    MOV EBX,dword ptr [EAX]             ; 0049864a | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0049864c
    MOV dword ptr [EBX + 0xb0],EDX      ; 0049864f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498655
    MOV EBX,dword ptr [EAX]             ; 00498658 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x30]      ; 0049865a
    MOV dword ptr [EBX + 0xb4],EDX      ; 0049865d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498663
    PUSH 0x1                            ; 00498666
    MOV EBX,dword ptr [EAX]             ; 00498668 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x34]      ; 0049866a
    PUSH EAX                            ; 0049866d | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb8],EDX      ; 0049866e
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00498674
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498679
    FLD float ptr [ESP + 0x30]          ; 0049867c
    FMUL double ptr [0x005d54ba]        ; 00498680 | DAT_005d54ba
    MOV EBX,dword ptr [ESP + 0x370]     ; 00498686
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049868d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x384]       ; 00498692
    TEST EBX,EBX                        ; 00498699
    JZ 0x0049877b                       ; 0049869b
        ;   XREF to: 0049877b (CONDITIONAL_JUMP)  ; LAB_0049877b
    MOV EDX,dword ptr [0x0060b280]      ; 004986a1 | DAT_0060b280
    MOV EBX,dword ptr [EDX]             ; 004986a7 | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0x384]     ; 004986a9
    MOV dword ptr [EBX + 0x2c],EAX      ; 004986b0
    MOV EAX,dword ptr [EDX]             ; 004986b3 | DAT_01ba5c50
    MOV dword ptr [EAX + 0x5c],0x0      ; 004986b5
    MOV EAX,dword ptr [EDX]             ; 004986bc | DAT_01ba5c50
    MOV dword ptr [EAX + 0x8c],0x0      ; 004986be
    MOV EBX,dword ptr [EDX]             ; 004986c8 | DAT_01ba5c50
    MOV EAX,dword ptr [ESP + 0x384]     ; 004986ca
    MOV dword ptr [EBX + 0xbc],EAX      ; 004986d1
    LEA EAX,[ESP + 0x80]                ; 004986d7
    PUSH EAX                            ; 004986de
    PUSH EDX                            ; 004986df | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00 ; 004986e0
        ;   XREF to: 0046aa00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004986e5
    JMP 0x0049830c                      ; 004986e8
        ;   XREF to: 0049830c (UNCONDITIONAL_JUMP)  ; LAB_0049830c
    XOR EDX,EDX                         ; 004986ed
        ;   Label: LAB_004986ed
    MOV dword ptr [ESP + 0x9c],EDX      ; 004986ef
    MOV EDX,EBX                         ; 004986f6
    SHL EDX,0x8                         ; 004986f8
    MOV ECX,dword ptr [ESP + 0x38c]     ; 004986fb
    MOV EAX,EDX                         ; 00498702
    SAR EDX,0x1f                        ; 00498704
    IDIV ECX                            ; 00498707
    MOV EBX,dword ptr [0x01c3ec58]      ; 00498709 | DAT_01c3ec58
    ADD EAX,EBX                         ; 0049870f
    SHL EAX,0x10                        ; 00498711
    MOV dword ptr [ESP + 0xa0],EAX      ; 00498714
    MOV EAX,dword ptr [ESP + 0x37c]     ; 0049871b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00498722
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00498729
    MOV dword ptr [ESP + 0xac],EAX      ; 00498730
    MOV EAX,dword ptr [ESP + 0x37c]     ; 00498737
    MOV dword ptr [ESP + 0xb4],EAX      ; 0049873e
    MOV EAX,dword ptr [ESP + 0x380]     ; 00498745
    MOV EDX,EAX                         ; 0049874c
    SAR EDX,0x1f                        ; 0049874e
    IDIV ECX                            ; 00498751
    ADD EAX,EBX                         ; 00498753
    SHL EAX,0x10                        ; 00498755
    MOV dword ptr [ESP + 0xb8],EAX      ; 00498758
    XOR EAX,EAX                         ; 0049875f
    MOV dword ptr [ESP + 0xc0],EAX      ; 00498761
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00498768
    MOV dword ptr [ESP + 0xc4],EAX      ; 0049876f
    JMP 0x004985d6                      ; 00498776
        ;   XREF to: 004985d6 (UNCONDITIONAL_JUMP)  ; LAB_004985d6
    MOV ESI,dword ptr [ESP + 0x384]     ; 0049877b
        ;   Label: LAB_0049877b
    PUSH ESI                            ; 00498782
    MOV EDI,dword ptr [0x0060b280]      ; 00498783 | DAT_0060b280
    PUSH EDI                            ; 00498789 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0049878a
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0049878f
    LEA EAX,[ESP + 0x80]                ; 00498792
    PUSH EAX                            ; 00498799
    MOV EAX,[0x0060b280]                ; 0049879a | DAT_0060b280
    PUSH EAX                            ; 0049879f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20 ; 004987a0
        ;   XREF to: 0046ac20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004987a5
    JMP 0x0049830c                      ; 004987a8
        ;   XREF to: 0049830c (UNCONDITIONAL_JUMP)  ; LAB_0049830c
    FLD1                                ; 004987ad
        ;   Label: LAB_004987ad
    FLD float ptr [ESP + 0x214]         ; 004987af
    FXCH                                ; 004987b6
    FDIV float ptr [ESP + 0x28]         ; 004987b8
    FXCH                                ; 004987bc
    FMUL ST1                            ; 004987be
    FLD float ptr [ESP + 0x218]         ; 004987c0
    FMUL ST2                            ; 004987c7
    FLD float ptr [ESP + 0x21c]         ; 004987c9
    FMULP ST3                           ; 004987d0
    LEA EDI,[ESP + 0x298]               ; 004987d2
    LEA ESI,[ESP + 0x190]               ; 004987d9
    FXCH                                ; 004987e0
    FSTP float ptr [ESP + 0x190]        ; 004987e2
    FSTP float ptr [ESP + 0x194]        ; 004987e9
    FSTP float ptr [ESP + 0x198]        ; 004987f0
    MOVSD ES:EDI,ESI                    ; 004987f7
    MOVSD ES:EDI,ESI                    ; 004987f8
    MOVSD ES:EDI,ESI                    ; 004987f9
    FLD float ptr [0x005d54c2]          ; 004987fa | DAT_005d54c2
    FLD float ptr [ESP + 0x298]         ; 00498800
    FMUL ST1                            ; 00498807
    FLD float ptr [ESP + 0x29c]         ; 00498809
    FMUL ST2                            ; 00498810
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498812
    FLD float ptr [ESP + 0x2a0]         ; 00498815
    FMULP ST3                           ; 0049881c
    ADD EAX,0x20                        ; 0049881e
    LEA EDI,[ESP + 0x13c]               ; 00498821
    LEA ESI,[ESP + 0x154]               ; 00498828
    FXCH                                ; 0049882f
    FSTP float ptr [ESP + 0x154]        ; 00498831
    FSTP float ptr [ESP + 0x158]        ; 00498838
    FSTP float ptr [ESP + 0x15c]        ; 0049883f
    MOVSD ES:EDI,ESI                    ; 00498846
    MOVSD ES:EDI,ESI                    ; 00498847
    MOVSD ES:EDI,ESI                    ; 00498848
    FLD float ptr [EAX + -0x14]         ; 00498849
    FLD float ptr [EAX + -0x10]         ; 0049884c
    FLD float ptr [EAX + -0xc]          ; 0049884f
    LEA EDI,[ESP + 0x2a4]               ; 00498852
    LEA ESI,[ESP + 0x2b0]               ; 00498859
    FXCH ST2                            ; 00498860
    FSUB float ptr [ESP + 0x13c]        ; 00498862
    FXCH                                ; 00498869
    FSUB float ptr [ESP + 0x140]        ; 0049886b
    FXCH ST2                            ; 00498872
    FSUB float ptr [ESP + 0x144]        ; 00498874
    FXCH                                ; 0049887b
    FSTP float ptr [ESP + 0x2b0]        ; 0049887d
    FXCH                                ; 00498884
    FSTP float ptr [ESP + 0x2b4]        ; 00498886
    FSTP float ptr [ESP + 0x2b8]        ; 0049888d
    MOVSD ES:EDI,ESI                    ; 00498894
    MOVSD ES:EDI,ESI                    ; 00498895
    MOVSD ES:EDI,ESI                    ; 00498896
    PUSH EAX                            ; 00498897
    LEA ESI,[ESP + 0x224]               ; 00498898
    LEA EDI,[ESP + 0x290]               ; 0049889f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004988a6
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x224]               ; 004988ab
    LEA EDX,[ESP + 0x290]               ; 004988b2
    ADD ESP,0x4                         ; 004988b9
    LEA EAX,[ESP + 0x2c8]               ; 004988bc
    MOVSD ES:EDI,ESI                    ; 004988c3
    MOVSD ES:EDI,ESI                    ; 004988c4
    MOVSD ES:EDI,ESI                    ; 004988c5
    CMP EAX,EDX                         ; 004988c6
    JZ 0x004988f4                       ; 004988c8
        ;   XREF to: 004988f4 (CONDITIONAL_JUMP)  ; LAB_004988f4
    MOV EAX,dword ptr [ESP + 0x28c]     ; 004988ca
    MOV dword ptr [ESP + 0x2c8],EAX     ; 004988d1
    MOV EAX,dword ptr [ESP + 0x290]     ; 004988d8
    MOV dword ptr [ESP + 0x2cc],EAX     ; 004988df
    MOV EAX,dword ptr [ESP + 0x294]     ; 004988e6
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004988ed
    LEA EAX,[ESP + 0x2a4]               ; 004988f4
        ;   Label: LAB_004988f4
    PUSH EAX                            ; 004988fb
    MOV EDX,dword ptr [0x0060b280]      ; 004988fc | DAT_0060b280
    PUSH EDX                            ; 00498902 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00498903
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00498908
    PUSH 0x0                            ; 0049890b
    LEA EAX,[ESP + 0x2cc]               ; 0049890d
    PUSH EAX                            ; 00498914
    MOV ECX,dword ptr [0x0060b280]      ; 00498915 | DAT_0060b280
    PUSH ECX                            ; 0049891b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0049891c
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00498921
    PUSH 0x615214                       ; 00498924 | DAT_00615214
    MOV EBX,dword ptr [0x0060b280]      ; 00498929 | DAT_0060b280
    PUSH EBX                            ; 0049892f | DAT_01ba5c50
    MOV ESI,0x3e4ccccd                  ; 00498930
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00498935
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBX,[ESP + 0x120]               ; 0049893a
    MOV EDX,dword ptr [0x0060b280]      ; 00498941 | DAT_0060b280
    ADD ESP,0x8                         ; 00498947
    XOR EAX,EAX                         ; 0049894a
    MOV dword ptr [ESP + 0x208],ESI     ; 0049894c
    MOV dword ptr [ESP + 0x210],EAX     ; 00498953
    LEA EAX,[ESP + 0x208]               ; 0049895a
    MOV dword ptr [ESP + 0x20c],ESI     ; 00498961
    FLD float ptr [EAX]                 ; 00498968
    FMUL float ptr [0x005f64e4]         ; 0049896a | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00498970
    FLD float ptr [EAX + 0x4]           ; 00498972
    FMUL float ptr [0x005f64e4]         ; 00498975 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049897b
    FLD float ptr [EAX + 0x8]           ; 0049897e
    FMUL float ptr [0x005f64e4]         ; 00498981 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00498987
    LEA EAX,[ESP + 0x118]               ; 0049898a
    PUSH EAX                            ; 00498991
    MOV EAX,dword ptr [EDX]             ; 00498992 | DAT_01ba5c50
    PUSH EAX                            ; 00498994
    CALL engine_special.cpp_FUN_0055d723 ; 00498995
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0049899a
    MOV BL,byte ptr [ESP + 0x20b]       ; 0049899d
    XOR BL,0x80                         ; 004989a4
    LEA EAX,[ESP + 0x208]               ; 004989a7
    MOV byte ptr [ESP + 0x20b],BL       ; 004989ae
    LEA EBX,[ESP + 0x2d4]               ; 004989b5
    MOV EDX,dword ptr [0x0060b280]      ; 004989bc | DAT_0060b280
    FLD float ptr [EAX]                 ; 004989c2
    FMUL float ptr [0x005f64e4]         ; 004989c4 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 004989ca
    FLD float ptr [EAX + 0x4]           ; 004989cc
    FMUL float ptr [0x005f64e4]         ; 004989cf | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 004989d5
    FLD float ptr [EAX + 0x8]           ; 004989d8
    FMUL float ptr [0x005f64e4]         ; 004989db | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 004989e1
    LEA EAX,[ESP + 0x2d4]               ; 004989e4
    PUSH EAX                            ; 004989eb
    MOV EAX,dword ptr [EDX]             ; 004989ec | DAT_01ba5c50
    ADD EAX,0x30                        ; 004989ee
    PUSH EAX                            ; 004989f1
    CALL engine_special.cpp_FUN_0055d723 ; 004989f2
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004989f7
    MOV BH,byte ptr [ESP + 0x20f]       ; 004989fa
    XOR BH,0x80                         ; 00498a01
    LEA EAX,[ESP + 0x208]               ; 00498a04
    MOV byte ptr [ESP + 0x20f],BH       ; 00498a0b
    LEA EBX,[ESP + 0x2f8]               ; 00498a12
    MOV EDX,dword ptr [0x0060b280]      ; 00498a19 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00498a1f
    FMUL float ptr [0x005f64e4]         ; 00498a21 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00498a27
    FLD float ptr [EAX + 0x4]           ; 00498a29
    FMUL float ptr [0x005f64e4]         ; 00498a2c | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00498a32
    FLD float ptr [EAX + 0x8]           ; 00498a35
    FMUL float ptr [0x005f64e4]         ; 00498a38 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00498a3e
    LEA EAX,[ESP + 0x2f8]               ; 00498a41
    PUSH EAX                            ; 00498a48
    MOV EAX,dword ptr [EDX]             ; 00498a49 | DAT_01ba5c50
    ADD EAX,0x60                        ; 00498a4b
    PUSH EAX                            ; 00498a4e
    CALL engine_special.cpp_FUN_0055d723 ; 00498a4f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498a54
    LEA EBX,[ESP + 0x31c]               ; 00498a57
    MOV CL,byte ptr [ESP + 0x20b]       ; 00498a5e
    LEA EAX,[ESP + 0x208]               ; 00498a65
    XOR CL,0x80                         ; 00498a6c
    MOV EDX,dword ptr [0x0060b280]      ; 00498a6f | DAT_0060b280
    MOV byte ptr [ESP + 0x20b],CL       ; 00498a75
    FLD float ptr [EAX]                 ; 00498a7c
    FMUL float ptr [0x005f64e4]         ; 00498a7e | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 00498a84
    FLD float ptr [EAX + 0x4]           ; 00498a86
    FMUL float ptr [0x005f64e4]         ; 00498a89 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 00498a8f
    FLD float ptr [EAX + 0x8]           ; 00498a92
    FMUL float ptr [0x005f64e4]         ; 00498a95 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 00498a9b
    LEA EAX,[ESP + 0x31c]               ; 00498a9e
    PUSH EAX                            ; 00498aa5
    MOV EAX,dword ptr [EDX]             ; 00498aa6 | DAT_01ba5c50
    ADD EAX,0x90                        ; 00498aa8
    PUSH EAX                            ; 00498aad
    CALL engine_special.cpp_FUN_0055d723 ; 00498aae
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00498ab3
    MOV EDX,0x4                         ; 00498ab6
    MOV EBX,0x3                         ; 00498abb
    MOV ESI,0x80000                     ; 00498ac0
    MOV EAX,0xf80000                    ; 00498ac5
    XOR ECX,ECX                         ; 00498aca
    MOV dword ptr [ESP + 0x3c],EDX      ; 00498acc
    MOV dword ptr [ESP + 0x4c],ECX      ; 00498ad0
    MOV dword ptr [ESP + 0x48],ECX      ; 00498ad4
    MOV dword ptr [ESP + 0x44],ECX      ; 00498ad8
    MOV dword ptr [ESP + 0x40],ECX      ; 00498adc
    MOV dword ptr [ESP + 0x50],ECX      ; 00498ae0
    MOV dword ptr [ESP + 0x74],EBX      ; 00498ae4
    MOV dword ptr [ESP + 0x54],ESI      ; 00498ae8
    MOV dword ptr [ESP + 0x58],ESI      ; 00498aec
    MOV dword ptr [ESP + 0x60],EAX      ; 00498af0
    MOV dword ptr [ESP + 0x64],ESI      ; 00498af4
    MOV dword ptr [ESP + 0x6c],EAX      ; 00498af8
    MOV dword ptr [ESP + 0x70],EAX      ; 00498afc
    MOV dword ptr [ESP + 0x78],ESI      ; 00498b00
    MOV dword ptr [ESP + 0x7c],EAX      ; 00498b04
    MOV EDX,0x1                         ; 00498b08
    MOV ECX,0x2                         ; 00498b0d
    MOV EAX,[0x0060b280]                ; 00498b12 | DAT_0060b280
    MOV dword ptr [ESP + 0x5c],EDX      ; 00498b17
    MOV dword ptr [ESP + 0x68],ECX      ; 00498b1b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b1f
    MOV EBX,dword ptr [EAX]             ; 00498b22 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00498b24
    MOV dword ptr [EBX + 0x20],EDX      ; 00498b27
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b2a
    MOV EBX,dword ptr [EAX]             ; 00498b2d | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x30]      ; 00498b2f
    MOV dword ptr [EBX + 0x24],EDX      ; 00498b32
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b35
    MOV EBX,dword ptr [EAX]             ; 00498b38 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x34]      ; 00498b3a
    MOV dword ptr [EBX + 0x28],EDX      ; 00498b3d
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b40
    MOV EBX,dword ptr [EAX]             ; 00498b43 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00498b45
    MOV dword ptr [EBX + 0x50],EDX      ; 00498b48
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b4b
    MOV EBX,dword ptr [EAX]             ; 00498b4e | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x30]      ; 00498b50
    MOV dword ptr [EBX + 0x54],EDX      ; 00498b53
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b56
    MOV EBX,dword ptr [EAX]             ; 00498b59 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x34]      ; 00498b5b
    MOV dword ptr [EBX + 0x58],EDX      ; 00498b5e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b61
    MOV EBX,dword ptr [EAX]             ; 00498b64 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00498b66
    MOV dword ptr [EBX + 0x80],EDX      ; 00498b69
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b6f
    MOV EBX,dword ptr [EAX]             ; 00498b72 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x30]      ; 00498b74
    MOV dword ptr [EBX + 0x84],EDX      ; 00498b77
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b7d
    MOV EBX,dword ptr [EAX]             ; 00498b80 | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x34]      ; 00498b82
    MOV dword ptr [EBX + 0x88],EDX      ; 00498b85
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b8b
    MOV EBX,dword ptr [EAX]             ; 00498b8e | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00498b90
    MOV dword ptr [EBX + 0xb0],EDX      ; 00498b93
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498b99
    MOV EBX,dword ptr [EAX]             ; 00498b9c | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x30]      ; 00498b9e
    MOV dword ptr [EBX + 0xb4],EDX      ; 00498ba1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498ba7
    PUSH 0x1                            ; 00498baa
    MOV EBX,dword ptr [EAX]             ; 00498bac | DAT_01ba5c50
    MOV EDX,dword ptr [EDX + 0x34]      ; 00498bae
    PUSH EAX                            ; 00498bb1 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb8],EDX      ; 00498bb2
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 00498bb8
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00498bbd
    PUSH 0x471fff00                     ; 00498bc0
    PUSH 0x47000000                     ; 00498bc5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00498bca
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3a4],EAX     ; 00498bcf
    FLD float ptr [ESP + 0x3a4]         ; 00498bd6
    ADD ESP,0x8                         ; 00498bdd
    FMUL float ptr [ESP + 0x1c]         ; 00498be0
    CALL crt_math.c_round_FUN_005b7ff0  ; 00498be4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x398]       ; 00498be9
    MOV EAX,dword ptr [ESP + 0x398]     ; 00498bf0
    PUSH EAX                            ; 00498bf7
    MOV EDX,dword ptr [0x0060b280]      ; 00498bf8 | DAT_0060b280
    PUSH EDX                            ; 00498bfe | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00498bff
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00498c04
    LEA EAX,[ESP + 0x38]                ; 00498c07
    PUSH EAX                            ; 00498c0b
    MOV ECX,dword ptr [0x0060b280]      ; 00498c0c | DAT_0060b280
    PUSH ECX                            ; 00498c12 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20 ; 00498c13
        ;   XREF to: 0046ac20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_0046ac20(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00498c18
    MOV EBX,dword ptr [0x0060b280]      ; 00498c1b | DAT_0060b280
    PUSH EBX                            ; 00498c21 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 00498c22
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00498c27
    JMP 0x0049835e                      ; 00498c2a
        ;   XREF to: 0049835e (UNCONDITIONAL_JUMP)  ; LAB_0049835e

