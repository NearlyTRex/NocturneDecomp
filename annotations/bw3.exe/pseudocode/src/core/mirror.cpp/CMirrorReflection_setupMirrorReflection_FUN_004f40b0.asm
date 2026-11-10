; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0(CMirrorReflection *this_ptr,CVector3f *camera_position,CVector3f *camera_rotation,float projection_scale)
;
; Parameters:
; CMirrorReflection * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   camera_position
; CVector3f *      Stack[0xc]:4   camera_rotation
; float            Stack[0x10]:4   projection_scale
; Local Variables:
; undefined8       Stack[-0x5b0]:8  local_5b0
; undefined8       Stack[-0x5a8]:8  local_5a8
; undefined8       Stack[-0x5a0]:8  local_5a0
; undefined4       Stack[-0x598]:4  local_598
; undefined4       Stack[-0x594]:4  local_594
; undefined4       Stack[-0x590]:4  local_590
; undefined        Stack[-0x58c]:1  local_58c
; undefined        Stack[-0x55c]:1  local_55c
; undefined        Stack[-0x52c]:1  local_52c
; undefined4       Stack[-0x520]:4  local_520
; undefined4       Stack[-0x510]:4  local_510
; undefined4       Stack[-0x500]:4  local_500
; undefined        Stack[-0x4fc]:1  local_4fc
; undefined4       Stack[-0x4d4]:4  local_4d4
; undefined        Stack[-0x4cc]:1  local_4cc
; undefined        Stack[-0x49c]:1  local_49c
; undefined        Stack[-0x46c]:1  local_46c
; undefined        Stack[-0x43c]:1  local_43c
; undefined4       Stack[-0x40c]:4  local_40c
; undefined4       Stack[-0x408]:4  local_408
; undefined4       Stack[-0x404]:4  local_404
; undefined4       Stack[-0x400]:4  local_400
; undefined4       Stack[-0x3fc]:4  local_3fc
; undefined4       Stack[-0x3f8]:4  local_3f8
; undefined4       Stack[-0x3f4]:4  local_3f4
; undefined4       Stack[-0x3f0]:4  local_3f0
; undefined4       Stack[-0x3ec]:4  local_3ec
; undefined4       Stack[-0x3e8]:4  local_3e8
; undefined4       Stack[-0x3e4]:4  local_3e4
; undefined4       Stack[-0x3e0]:4  local_3e0
; undefined        Stack[-0x3dc]:1  local_3dc
; undefined        Stack[-0x3ac]:1  local_3ac
; undefined        Stack[-0x37c]:1  local_37c
; undefined        Stack[-0x34c]:1  local_34c
; undefined        Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x2ec]:1  local_2ec
; undefined        Stack[-0x2bc]:1  local_2bc
; undefined4       Stack[-0x28c]:4  local_28c
; undefined4       Stack[-0x288]:4  local_288
; undefined4       Stack[-0x284]:4  local_284
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
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1ec]:4  local_1ec
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
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined        Stack[-0x174]:1  local_174
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined        Stack[-0x108]:1  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0 at 0053aec9
;
; Referenced Globals:
;   undefined4 DAT_005c836d
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   undefined4 DAT_01c6e318
;   undefined4 DAT_01c6e31c
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070
;   core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80
;   core_xform.cpp_FUN_00583260
;   core_xform.cpp_inverse_FUN_00584560
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;   core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f40b0
        ;   Label: core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0
    PUSH ESI                            ; 004f40b1
    PUSH EDI                            ; 004f40b2
    PUSH EBP                            ; 004f40b3
    MOV EBP,ESP                         ; 004f40b4
    SUB ESP,0x59c                       ; 004f40b6
    AND ESP,0xfffffff8                  ; 004f40bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f40bf
    LEA EAX,[EBX + 0x18]                ; 004f40c2
    PUSH EAX                            ; 004f40c5
    LEA EAX,[EBX + 0xc]                 ; 004f40c6
    PUSH EAX                            ; 004f40c9
    PUSH EBX                            ; 004f40ca
    LEA EAX,[ESP + 0x330]               ; 004f40cb
    PUSH EAX                            ; 004f40d2
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80 ; 004f40d3
        ;   XREF to: 004f3b80 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 004f40d8
    MOV EAX,dword ptr [ESP + 0x324]     ; 004f40db
    FLD float ptr [ESP + 0x324]         ; 004f40e2
    MOV dword ptr [ESP + 0x20],EAX      ; 004f40e9
    MOV EAX,dword ptr [ESP + 0x328]     ; 004f40ed
    FSTP double ptr [ESP]               ; 004f40f4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f40f7
    MOV EAX,dword ptr [ESP + 0x32c]     ; 004f40fb
    FLD double ptr [ESP]                ; 004f4102
    MOV dword ptr [ESP + 0x18],EAX      ; 004f4105
    FABS                                ; 004f4109
    FLD float ptr [ESP + 0x328]         ; 004f410b
    FABS                                ; 004f4112
    FXCH                                ; 004f4114
    FSTP double ptr [ESP + 0x10]        ; 004f4116
    FCOMP double ptr [ESP + 0x10]       ; 004f411a
    FNSTSW AX                           ; 004f411e
    SAHF                                ; 004f4120
    JNC 0x004f5044                      ; 004f4121
        ;   XREF to: 004f5044 (CONDITIONAL_JUMP)  ; LAB_004f5044
    FLD float ptr [ESP + 0x32c]         ; 004f4127
    FABS                                ; 004f412e
    FCOMP double ptr [ESP + 0x10]       ; 004f4130
    FNSTSW AX                           ; 004f4134
    SAHF                                ; 004f4136
    JNC 0x004f5044                      ; 004f4137
        ;   XREF to: 004f5044 (CONDITIONAL_JUMP)  ; LAB_004f5044
    MOV ESI,0x3f800000                  ; 004f413d
    XOR ECX,ECX                         ; 004f4142
    MOV dword ptr [ESP + 0x404],ESI     ; 004f4144
    MOV dword ptr [ESP + 0x408],ECX     ; 004f414b
    MOV dword ptr [ESP + 0x400],ECX     ; 004f4152
    FLD float ptr [ESP + 0x404]         ; 004f4159
        ;   Label: LAB_004f4159
    FMUL float ptr [ESP + 0x18]         ; 004f4160
    FLD float ptr [ESP + 0x408]         ; 004f4164
    FMUL float ptr [ESP + 0x20]         ; 004f416b
    FLD float ptr [ESP + 0x400]         ; 004f416f
    FMUL float ptr [ESP + 0x1c]         ; 004f4176
    FLD float ptr [ESP + 0x408]         ; 004f417a
    FMUL float ptr [ESP + 0x1c]         ; 004f4181
    FLD float ptr [ESP + 0x400]         ; 004f4185
    FMUL float ptr [ESP + 0x18]         ; 004f418c
    FLD float ptr [ESP + 0x404]         ; 004f4190
    FMUL float ptr [ESP + 0x20]         ; 004f4197
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f419b
    LEA EDI,[ESP + 0x3b8]               ; 004f419f
    LEA ESI,[ESP + 0x3c4]               ; 004f41a6
    MOV dword ptr [ESP + 0x46c],EAX     ; 004f41ad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f41b4
    LEA EDX,[ESP + 0x3dc]               ; 004f41b8
    MOV dword ptr [ESP + 0x470],EAX     ; 004f41bf
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f41c6
    FXCH ST2                            ; 004f41ca
    FSUBP ST5,ST0                       ; 004f41cc
    FSUBP ST3,ST0                       ; 004f41ce
    FSUBP                               ; 004f41d0
    MOV dword ptr [ESP + 0x474],EAX     ; 004f41d2
    FXCH ST2                            ; 004f41d9
    FSTP float ptr [ESP + 0x3c4]        ; 004f41db
    FSTP float ptr [ESP + 0x3c8]        ; 004f41e2
    FSTP float ptr [ESP + 0x3cc]        ; 004f41e9
    LEA EAX,[ESP + 0x3b8]               ; 004f41f0
    MOVSD ES:EDI,ESI                    ; 004f41f7
    MOVSD ES:EDI,ESI                    ; 004f41f8
    MOVSD ES:EDI,ESI                    ; 004f41f9
    CMP EDX,EAX                         ; 004f41fa
    JZ 0x004f4228                       ; 004f41fc
        ;   XREF to: 004f4228 (CONDITIONAL_JUMP)  ; LAB_004f4228
    MOV EAX,dword ptr [ESP + 0x3b8]     ; 004f41fe
    MOV dword ptr [ESP + 0x3dc],EAX     ; 004f4205
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 004f420c
    MOV dword ptr [ESP + 0x3e0],EAX     ; 004f4213
    MOV EAX,dword ptr [ESP + 0x3c0]     ; 004f421a
    MOV dword ptr [ESP + 0x3e4],EAX     ; 004f4221
    FLD float ptr [ESP + 0x3e0]         ; 004f4228
        ;   Label: LAB_004f4228
    FMUL ST0                            ; 004f422f
    FLD float ptr [ESP + 0x3dc]         ; 004f4231
    FMUL ST0                            ; 004f4238
    FADDP                               ; 004f423a
    FLD float ptr [ESP + 0x3e4]         ; 004f423c
    FMUL ST0                            ; 004f4243
    FADDP                               ; 004f4245
    FSQRT                               ; 004f4247
    FLDZ                                ; 004f4249
    FXCH                                ; 004f424b
    FSTP float ptr [ESP + 0x594]        ; 004f424d
    FCOMP float ptr [ESP + 0x594]       ; 004f4254
    FNSTSW AX                           ; 004f425b
    SAHF                                ; 004f425d
    JNC 0x004f50ae                      ; 004f425e
        ;   XREF to: 004f50ae (CONDITIONAL_JUMP)  ; LAB_004f50ae
    FLD1                                ; 004f4264
    FLD float ptr [ESP + 0x3dc]         ; 004f4266
    FXCH                                ; 004f426d
    FDIV float ptr [ESP + 0x594]        ; 004f426f
    FXCH                                ; 004f4276
    FMUL ST1                            ; 004f4278
    FLD float ptr [ESP + 0x3e0]         ; 004f427a
    FMUL ST2                            ; 004f4281
    FLD float ptr [ESP + 0x3e4]         ; 004f4283
    FMULP ST3                           ; 004f428a
    FXCH                                ; 004f428c
    FSTP float ptr [ESP + 0x3dc]        ; 004f428e
    FSTP float ptr [ESP + 0x3e0]        ; 004f4295
    FSTP float ptr [ESP + 0x3e4]        ; 004f429c
    FLD float ptr [ESP + 0x470]         ; 004f42a3
        ;   Label: LAB_004f42a3
    FMUL float ptr [ESP + 0x3e4]        ; 004f42aa
    FLD float ptr [ESP + 0x474]         ; 004f42b1
    FMUL float ptr [ESP + 0x3dc]        ; 004f42b8
    FLD float ptr [ESP + 0x46c]         ; 004f42bf
    FMUL float ptr [ESP + 0x3e0]        ; 004f42c6
    FLD float ptr [ESP + 0x474]         ; 004f42cd
    FMUL float ptr [ESP + 0x3e0]        ; 004f42d4
    FLD float ptr [ESP + 0x46c]         ; 004f42db
    FMUL float ptr [ESP + 0x3e4]        ; 004f42e2
    FLD float ptr [ESP + 0x470]         ; 004f42e9
    FMUL float ptr [ESP + 0x3dc]        ; 004f42f0
    LEA EDI,[ESP + 0x3ac]               ; 004f42f7
    LEA ESI,[ESP + 0x478]               ; 004f42fe
    LEA EAX,[ESP + 0x3ac]               ; 004f4305
    LEA EDX,[ESP + 0x400]               ; 004f430c
    FXCH ST2                            ; 004f4313
    FSUBP ST5,ST0                       ; 004f4315
    FSUBP ST3,ST0                       ; 004f4317
    FSUBP                               ; 004f4319
    FXCH                                ; 004f431b
    FSTP float ptr [ESP + 0x47c]        ; 004f431d
    FSTP float ptr [ESP + 0x480]        ; 004f4324
    FSTP float ptr [ESP + 0x478]        ; 004f432b
    MOVSD ES:EDI,ESI                    ; 004f4332
    MOVSD ES:EDI,ESI                    ; 004f4333
    MOVSD ES:EDI,ESI                    ; 004f4334
    CMP EDX,EAX                         ; 004f4335
    JZ 0x004f4363                       ; 004f4337
        ;   XREF to: 004f4363 (CONDITIONAL_JUMP)  ; LAB_004f4363
    MOV EAX,dword ptr [ESP + 0x3ac]     ; 004f4339
    MOV dword ptr [ESP + 0x400],EAX     ; 004f4340
    MOV EAX,dword ptr [ESP + 0x3b0]     ; 004f4347
    MOV dword ptr [ESP + 0x404],EAX     ; 004f434e
    MOV EAX,dword ptr [ESP + 0x3b4]     ; 004f4355
    MOV dword ptr [ESP + 0x408],EAX     ; 004f435c
    FLD float ptr [ESP + 0x404]         ; 004f4363
        ;   Label: LAB_004f4363
    FMUL ST0                            ; 004f436a
    FLD float ptr [ESP + 0x400]         ; 004f436c
    FMUL ST0                            ; 004f4373
    FADDP                               ; 004f4375
    FLD float ptr [ESP + 0x408]         ; 004f4377
    FMUL ST0                            ; 004f437e
    FADDP                               ; 004f4380
    FSQRT                               ; 004f4382
    FLDZ                                ; 004f4384
    FXCH                                ; 004f4386
    FSTP float ptr [ESP + 0x598]        ; 004f4388
    FCOMP float ptr [ESP + 0x598]       ; 004f438f
    FNSTSW AX                           ; 004f4396
    SAHF                                ; 004f4398
    JNC 0x004f50ca                      ; 004f4399
        ;   XREF to: 004f50ca (CONDITIONAL_JUMP)  ; LAB_004f50ca
    FLD1                                ; 004f439f
    FLD float ptr [ESP + 0x400]         ; 004f43a1
    FXCH                                ; 004f43a8
    FDIV float ptr [ESP + 0x598]        ; 004f43aa
    FXCH                                ; 004f43b1
    FMUL ST1                            ; 004f43b3
    FLD float ptr [ESP + 0x404]         ; 004f43b5
    FMUL ST2                            ; 004f43bc
    FLD float ptr [ESP + 0x408]         ; 004f43be
    FMULP ST3                           ; 004f43c5
    FXCH                                ; 004f43c7
    FSTP float ptr [ESP + 0x400]        ; 004f43c9
    FSTP float ptr [ESP + 0x404]        ; 004f43d0
    FSTP float ptr [ESP + 0x408]        ; 004f43d7
    LEA EAX,[ESP + 0x84]                ; 004f43de
        ;   Label: LAB_004f43de
    PUSH EAX                            ; 004f43e5
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0 ; 004f43e6
        ;   XREF to: 005835d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0()
    FLD float ptr [EBX]                 ; 004f43eb
    ADD ESP,0x4                         ; 004f43ed
    FCHS                                ; 004f43f0
    FSTP float ptr [ESP + 0x90]         ; 004f43f2
    MOV EAX,dword ptr [ESP + 0x3dc]     ; 004f43f9
    FLD float ptr [EBX + 0x4]           ; 004f4400
    FCHS                                ; 004f4403
    FSTP float ptr [ESP + 0xa0]         ; 004f4405
    FLD float ptr [EBX + 0x8]           ; 004f440c
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004f440f
    MOV EAX,dword ptr [ESP + 0x3e0]     ; 004f4416
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004f441d
    MOV EAX,dword ptr [ESP + 0x3e4]     ; 004f4424
    MOV dword ptr [ESP + 0x1ac],EAX     ; 004f442b
    MOV EAX,dword ptr [ESP + 0x400]     ; 004f4432
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004f4439
    MOV EAX,dword ptr [ESP + 0x404]     ; 004f4440
    MOV dword ptr [ESP + 0x1b8],EAX     ; 004f4447
    MOV EAX,dword ptr [ESP + 0x408]     ; 004f444e
    MOV dword ptr [ESP + 0x1bc],EAX     ; 004f4455
    MOV EAX,dword ptr [ESP + 0x46c]     ; 004f445c
    XOR EDX,EDX                         ; 004f4463
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004f4465
    MOV EAX,dword ptr [ESP + 0x470]     ; 004f446c
    FCHS                                ; 004f4473
    MOV dword ptr [ESP + 0x1c8],EAX     ; 004f4475
    MOV EAX,dword ptr [ESP + 0x474]     ; 004f447c
    FSTP float ptr [ESP + 0xb0]         ; 004f4483
    MOV dword ptr [ESP + 0x1cc],EAX     ; 004f448a
    LEA EAX,[ESP + 0xb4]                ; 004f4491
    MOV dword ptr [ESP + 0x1b0],EDX     ; 004f4498
    PUSH EAX                            ; 004f449f
    MOV dword ptr [ESP + 0x1c4],EDX     ; 004f44a0
    MOV dword ptr [ESP + 0x1d4],EDX     ; 004f44a7
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0 ; 004f44ae
        ;   XREF to: 005835d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0()
    ADD ESP,0x4                         ; 004f44b3
    LEA EAX,[ESP + 0x84]                ; 004f44b6
    MOV EDI,0xbf800000                  ; 004f44bd
    PUSH EAX                            ; 004f44c2
    LEA ESI,[ESP + 0x1d8]               ; 004f44c3
    MOV dword ptr [ESP + 0xe0],EDI      ; 004f44ca
    CALL core_xform.cpp_inverse_FUN_00584560 ; 004f44d1
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_00584560()
    MOV ECX,0xc                         ; 004f44d6
    LEA EDI,[ESP + 0x58]                ; 004f44db
    ADD ESP,0x4                         ; 004f44df
    LEA EAX,[ESP + 0x54]                ; 004f44e2
    LEA ESI,[ESP + 0x1d4]               ; 004f44e6
    PUSH EAX                            ; 004f44ed
    LEA EAX,[ESP + 0x1a8]               ; 004f44ee
    MOVSD.REP ES:EDI,ESI                ; 004f44f5
    PUSH EAX                            ; 004f44f7
    LEA ESI,[ESP + 0x26c]               ; 004f44f8
    CALL core_xform.cpp_inverse_FUN_00584560 ; 004f44ff
        ;   XREF to: 00584560 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_00584560()
    ADD ESP,0x4                         ; 004f4504
    LEA EAX,[ESP + 0xe8]                ; 004f4507
    LEA EDI,[ESP + 0xe8]                ; 004f450e
    PUSH EAX                            ; 004f4515
    LEA EAX,[ESP + 0xbc]                ; 004f4516
    MOV ECX,0xc                         ; 004f451d
    PUSH EAX                            ; 004f4522
    LEA EAX,[ESP + 0x1b0]               ; 004f4523
    LEA ESI,[ESP + 0x270]               ; 004f452a
    PUSH EAX                            ; 004f4531
    LEA EAX,[ESP + 0x94]                ; 004f4532
    MOVSD.REP ES:EDI,ESI                ; 004f4539
    PUSH EAX                            ; 004f453b
    LEA ESI,[ESP + 0x158]               ; 004f453c
    LEA EDI,[ESP + 0x38]                ; 004f4543
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004f4547
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 004f454c
    LEA ESI,[ESP + 0x158]               ; 004f4551
    ADD ESP,0x8                         ; 004f4558
    LEA EAX,[ESP + 0x30]                ; 004f455b
    MOVSD.REP ES:EDI,ESI                ; 004f455f
    PUSH EAX                            ; 004f4561
    LEA ESI,[ESP + 0x124]               ; 004f4562
    LEA EDI,[ESP + 0x214]               ; 004f4569
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004f4570
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 004f4575
    LEA ESI,[ESP + 0x124]               ; 004f457a
    ADD ESP,0x8                         ; 004f4581
    LEA EAX,[ESP + 0x20c]               ; 004f4584
    MOVSD.REP ES:EDI,ESI                ; 004f458b
    PUSH EAX                            ; 004f458d
    LEA ESI,[ESP + 0x240]               ; 004f458e
    LEA EDI,[ESP + 0x300]               ; 004f4595
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004f459c
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 004f45a1
    LEA ESI,[ESP + 0x240]               ; 004f45a6
    ADD ESP,0x8                         ; 004f45ad
    LEA EAX,[ESP + 0x2f8]               ; 004f45b0
    MOVSD.REP ES:EDI,ESI                ; 004f45b7
    PUSH EAX                            ; 004f45b9
    LEA ESI,[ESP + 0x2cc]               ; 004f45ba
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004f45c1
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 004f45c6
    LEA ESI,[ESP + 0x2cc]               ; 004f45cb
    ADD ESP,0x8                         ; 004f45d2
    LEA EAX,[EBX + 0x30]                ; 004f45d5
    LEA EDI,[EBX + 0x30]                ; 004f45d8
    PUSH EAX                            ; 004f45db
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f45dc
    MOVSD.REP ES:EDI,ESI                ; 004f45df
    PUSH EAX                            ; 004f45e1
    LEA ESI,[ESP + 0x45c]               ; 004f45e2
    LEA EDI,[ESP + 0x450]               ; 004f45e9
    CALL core_xform.cpp_FUN_00583260    ; 004f45f0
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x45c]               ; 004f45f5
    LEA EAX,[ESP + 0x450]               ; 004f45fc
    ADD ESP,0x8                         ; 004f4603
    LEA EDX,[EBX + 0x60]                ; 004f4606
    MOVSD ES:EDI,ESI                    ; 004f4609
    MOVSD ES:EDI,ESI                    ; 004f460a
    MOVSD ES:EDI,ESI                    ; 004f460b
    CMP EDX,EAX                         ; 004f460c
    JZ 0x004f462d                       ; 004f460e
        ;   XREF to: 004f462d (CONDITIONAL_JUMP)  ; LAB_004f462d
    MOV EAX,dword ptr [ESP + 0x448]     ; 004f4610
    MOV dword ptr [EDX],EAX             ; 004f4617
    MOV EAX,dword ptr [ESP + 0x44c]     ; 004f4619
    MOV dword ptr [EDX + 0x4],EAX       ; 004f4620
    MOV EAX,dword ptr [ESP + 0x450]     ; 004f4623
    MOV dword ptr [EDX + 0x8],EAX       ; 004f462a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004f462d
        ;   Label: LAB_004f462d
    PUSH EDX                            ; 004f4630
    LEA EAX,[EBX + 0x70]                ; 004f4631
    PUSH EAX                            ; 004f4634
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004f4635
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004f463a
    MOV EAX,dword ptr [EBX + 0x74]      ; 004f463d
    MOV dword ptr [ESP + 0x56c],EAX     ; 004f4640
    MOV EAX,dword ptr [EBX + 0x80]      ; 004f4647
    MOV dword ptr [ESP + 0x570],EAX     ; 004f464d
    MOV EAX,dword ptr [EBX + 0x8c]      ; 004f4654
    MOV dword ptr [ESP + 0x590],EAX     ; 004f465a
    MOV EAX,dword ptr [ESP + 0x56c]     ; 004f4661
    MOV dword ptr [ESP + 0x3e8],EAX     ; 004f4668
    MOV EAX,dword ptr [ESP + 0x570]     ; 004f466f
    MOV dword ptr [ESP + 0x3ec],EAX     ; 004f4676
    MOV EAX,dword ptr [ESP + 0x590]     ; 004f467d
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004f4684
    MOV EAX,dword ptr [EBX + 0x70]      ; 004f468b
    MOV dword ptr [ESP + 0x574],EAX     ; 004f468e
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004f4695
    MOV dword ptr [ESP + 0x578],EAX     ; 004f4698
    MOV EAX,dword ptr [EBX + 0x88]      ; 004f469f
    MOV dword ptr [ESP + 0x57c],EAX     ; 004f46a5
    MOV EAX,dword ptr [ESP + 0x574]     ; 004f46ac
    MOV dword ptr [ESP + 0x4b4],EAX     ; 004f46b3
    MOV EAX,dword ptr [ESP + 0x578]     ; 004f46ba
    MOV dword ptr [ESP + 0x4b8],EAX     ; 004f46c1
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004f46c8
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004f46cf
    MOV EAX,dword ptr [EBX + 0x78]      ; 004f46d6
    MOV dword ptr [ESP + 0x580],EAX     ; 004f46d9
    MOV EAX,dword ptr [EBX + 0x84]      ; 004f46e0
    LEA EDI,[ESP + 0x388]               ; 004f46e6
    MOV dword ptr [ESP + 0x584],EAX     ; 004f46ed
    MOV EAX,dword ptr [EBX + 0x90]      ; 004f46f4
    LEA ESI,[ESP + 0x424]               ; 004f46fa
    MOV dword ptr [ESP + 0x588],EAX     ; 004f4701
    MOV EAX,dword ptr [ESP + 0x580]     ; 004f4708
    LEA EDX,[ESP + 0x3e8]               ; 004f470f
    MOV dword ptr [ESP + 0x4cc],EAX     ; 004f4716
    MOV EAX,dword ptr [ESP + 0x584]     ; 004f471d
    FLD float ptr [ESP + 0x56c]         ; 004f4724
    MOV dword ptr [ESP + 0x4d0],EAX     ; 004f472b
    MOV EAX,dword ptr [ESP + 0x588]     ; 004f4732
    FLD float ptr [ESP + 0x570]         ; 004f4739
    MOV dword ptr [ESP + 0x4d4],EAX     ; 004f4740
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f4747
    FLD float ptr [ESP + 0x590]         ; 004f474a
    FXCH ST2                            ; 004f4751
    FADD float ptr [EAX]                ; 004f4753
    FXCH                                ; 004f4755
    FADD float ptr [EAX + 0x4]          ; 004f4757
    FXCH ST2                            ; 004f475a
    FADD float ptr [EAX + 0x8]          ; 004f475c
    FXCH                                ; 004f475f
    FSTP float ptr [ESP + 0x424]        ; 004f4761
    FXCH                                ; 004f4768
    FSTP float ptr [ESP + 0x428]        ; 004f476a
    FSTP float ptr [ESP + 0x42c]        ; 004f4771
    LEA EAX,[ESP + 0x388]               ; 004f4778
    MOVSD ES:EDI,ESI                    ; 004f477f
    MOVSD ES:EDI,ESI                    ; 004f4780
    MOVSD ES:EDI,ESI                    ; 004f4781
    CMP EDX,EAX                         ; 004f4782
    JZ 0x004f47b0                       ; 004f4784
        ;   XREF to: 004f47b0 (CONDITIONAL_JUMP)  ; LAB_004f47b0
    MOV EAX,dword ptr [ESP + 0x388]     ; 004f4786
    MOV dword ptr [ESP + 0x3e8],EAX     ; 004f478d
    MOV EAX,dword ptr [ESP + 0x38c]     ; 004f4794
    MOV dword ptr [ESP + 0x3ec],EAX     ; 004f479b
    MOV EAX,dword ptr [ESP + 0x390]     ; 004f47a2
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004f47a9
    FLD float ptr [ESP + 0x4b4]         ; 004f47b0
        ;   Label: LAB_004f47b0
    FLD float ptr [ESP + 0x4b8]         ; 004f47b7
    FLD float ptr [ESP + 0x4bc]         ; 004f47be
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f47c5
    LEA EDI,[ESP + 0x508]               ; 004f47c8
    LEA ESI,[ESP + 0x49c]               ; 004f47cf
    LEA EDX,[ESP + 0x4b4]               ; 004f47d6
    FXCH ST2                            ; 004f47dd
    FADD float ptr [EAX]                ; 004f47df
    FXCH                                ; 004f47e1
    FADD float ptr [EAX + 0x4]          ; 004f47e3
    FXCH ST2                            ; 004f47e6
    FADD float ptr [EAX + 0x8]          ; 004f47e8
    FXCH ST2                            ; 004f47eb
    FSTP float ptr [ESP + 0x4a0]        ; 004f47ed
    FXCH                                ; 004f47f4
    FSTP float ptr [ESP + 0x4a4]        ; 004f47f6
    FSTP float ptr [ESP + 0x49c]        ; 004f47fd
    LEA EAX,[ESP + 0x508]               ; 004f4804
    MOVSD ES:EDI,ESI                    ; 004f480b
    MOVSD ES:EDI,ESI                    ; 004f480c
    MOVSD ES:EDI,ESI                    ; 004f480d
    CMP EDX,EAX                         ; 004f480e
    JZ 0x004f483c                       ; 004f4810
        ;   XREF to: 004f483c (CONDITIONAL_JUMP)  ; LAB_004f483c
    MOV EAX,dword ptr [ESP + 0x508]     ; 004f4812
    MOV dword ptr [ESP + 0x4b4],EAX     ; 004f4819
    MOV EAX,dword ptr [ESP + 0x50c]     ; 004f4820
    MOV dword ptr [ESP + 0x4b8],EAX     ; 004f4827
    MOV EAX,dword ptr [ESP + 0x510]     ; 004f482e
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004f4835
    FLD float ptr [ESP + 0x4cc]         ; 004f483c
        ;   Label: LAB_004f483c
    FLD float ptr [ESP + 0x4d0]         ; 004f4843
    FLD float ptr [ESP + 0x4d4]         ; 004f484a
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f4851
    LEA EDI,[ESP + 0x3d0]               ; 004f4854
    LEA ESI,[ESP + 0x370]               ; 004f485b
    LEA EDX,[ESP + 0x4cc]               ; 004f4862
    FXCH ST2                            ; 004f4869
    FADD float ptr [EAX]                ; 004f486b
    FXCH                                ; 004f486d
    FADD float ptr [EAX + 0x4]          ; 004f486f
    FXCH ST2                            ; 004f4872
    FADD float ptr [EAX + 0x8]          ; 004f4874
    FXCH ST2                            ; 004f4877
    FSTP float ptr [ESP + 0x374]        ; 004f4879
    FXCH                                ; 004f4880
    FSTP float ptr [ESP + 0x378]        ; 004f4882
    FSTP float ptr [ESP + 0x370]        ; 004f4889
    LEA EAX,[ESP + 0x3d0]               ; 004f4890
    MOVSD ES:EDI,ESI                    ; 004f4897
    MOVSD ES:EDI,ESI                    ; 004f4898
    MOVSD ES:EDI,ESI                    ; 004f4899
    CMP EDX,EAX                         ; 004f489a
    JZ 0x004f48c8                       ; 004f489c
        ;   XREF to: 004f48c8 (CONDITIONAL_JUMP)  ; LAB_004f48c8
    MOV EAX,dword ptr [ESP + 0x3d0]     ; 004f489e
    MOV dword ptr [ESP + 0x4cc],EAX     ; 004f48a5
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 004f48ac
    MOV dword ptr [ESP + 0x4d0],EAX     ; 004f48b3
    MOV EAX,dword ptr [ESP + 0x3d8]     ; 004f48ba
    MOV dword ptr [ESP + 0x4d4],EAX     ; 004f48c1
    LEA EAX,[EBX + 0x30]                ; 004f48c8
        ;   Label: LAB_004f48c8
    PUSH EAX                            ; 004f48cb
    LEA EAX,[ESP + 0x3ec]               ; 004f48cc
    PUSH EAX                            ; 004f48d3
    LEA ESI,[ESP + 0x4ec]               ; 004f48d4
    LEA EDI,[ESP + 0x420]               ; 004f48db
    CALL core_xform.cpp_FUN_00583260    ; 004f48e2
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x4ec]               ; 004f48e7
    LEA EDX,[ESP + 0x420]               ; 004f48ee
    ADD ESP,0x8                         ; 004f48f5
    LEA EAX,[ESP + 0x3e8]               ; 004f48f8
    MOVSD ES:EDI,ESI                    ; 004f48ff
    MOVSD ES:EDI,ESI                    ; 004f4900
    MOVSD ES:EDI,ESI                    ; 004f4901
    CMP EAX,EDX                         ; 004f4902
    JZ 0x004f4930                       ; 004f4904
        ;   XREF to: 004f4930 (CONDITIONAL_JUMP)  ; LAB_004f4930
    MOV EAX,dword ptr [ESP + 0x418]     ; 004f4906
    MOV dword ptr [ESP + 0x3e8],EAX     ; 004f490d
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004f4914
    MOV dword ptr [ESP + 0x3ec],EAX     ; 004f491b
    MOV EAX,dword ptr [ESP + 0x420]     ; 004f4922
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004f4929
    LEA EAX,[EBX + 0x30]                ; 004f4930
        ;   Label: LAB_004f4930
    PUSH EAX                            ; 004f4933
    LEA EAX,[ESP + 0x4b8]               ; 004f4934
    PUSH EAX                            ; 004f493b
    LEA ESI,[ESP + 0x498]               ; 004f493c
    LEA EDI,[ESP + 0x360]               ; 004f4943
    CALL core_xform.cpp_FUN_00583260    ; 004f494a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x498]               ; 004f494f
    LEA EDX,[ESP + 0x360]               ; 004f4956
    ADD ESP,0x8                         ; 004f495d
    LEA EAX,[ESP + 0x4b4]               ; 004f4960
    MOVSD ES:EDI,ESI                    ; 004f4967
    MOVSD ES:EDI,ESI                    ; 004f4968
    MOVSD ES:EDI,ESI                    ; 004f4969
    CMP EAX,EDX                         ; 004f496a
    JZ 0x004f4998                       ; 004f496c
        ;   XREF to: 004f4998 (CONDITIONAL_JUMP)  ; LAB_004f4998
    MOV EAX,dword ptr [ESP + 0x358]     ; 004f496e
    MOV dword ptr [ESP + 0x4b4],EAX     ; 004f4975
    MOV EAX,dword ptr [ESP + 0x35c]     ; 004f497c
    MOV dword ptr [ESP + 0x4b8],EAX     ; 004f4983
    MOV EAX,dword ptr [ESP + 0x360]     ; 004f498a
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004f4991
    LEA EAX,[EBX + 0x30]                ; 004f4998
        ;   Label: LAB_004f4998
    PUSH EAX                            ; 004f499b
    LEA EAX,[ESP + 0x4d0]               ; 004f499c
    PUSH EAX                            ; 004f49a3
    LEA ESI,[ESP + 0x4b0]               ; 004f49a4
    LEA EDI,[ESP + 0x48c]               ; 004f49ab
    CALL core_xform.cpp_FUN_00583260    ; 004f49b2
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x4b0]               ; 004f49b7
    LEA EDX,[ESP + 0x48c]               ; 004f49be
    ADD ESP,0x8                         ; 004f49c5
    LEA EAX,[ESP + 0x4cc]               ; 004f49c8
    MOVSD ES:EDI,ESI                    ; 004f49cf
    MOVSD ES:EDI,ESI                    ; 004f49d0
    MOVSD ES:EDI,ESI                    ; 004f49d1
    CMP EAX,EDX                         ; 004f49d2
    JZ 0x004f4a00                       ; 004f49d4
        ;   XREF to: 004f4a00 (CONDITIONAL_JUMP)  ; LAB_004f4a00
    MOV EAX,dword ptr [ESP + 0x484]     ; 004f49d6
    MOV dword ptr [ESP + 0x4cc],EAX     ; 004f49dd
    MOV EAX,dword ptr [ESP + 0x488]     ; 004f49e4
    MOV dword ptr [ESP + 0x4d0],EAX     ; 004f49eb
    MOV EAX,dword ptr [ESP + 0x48c]     ; 004f49f2
    MOV dword ptr [ESP + 0x4d4],EAX     ; 004f49f9
    FLD float ptr [ESP + 0x3e8]         ; 004f4a00
        ;   Label: LAB_004f4a00
    FLD float ptr [ESP + 0x3ec]         ; 004f4a07
    FLD float ptr [ESP + 0x3f0]         ; 004f4a0e
    LEA EDI,[ESP + 0x430]               ; 004f4a15
    LEA EAX,[EBX + 0x60]                ; 004f4a1c
    LEA ESI,[ESP + 0x3a0]               ; 004f4a1f
    LEA EDX,[ESP + 0x3e8]               ; 004f4a26
    FXCH ST2                            ; 004f4a2d
    FSUB float ptr [EAX]                ; 004f4a2f
    FXCH                                ; 004f4a31
    FSUB float ptr [EAX + 0x4]          ; 004f4a33
    FXCH ST2                            ; 004f4a36
    FSUB float ptr [EAX + 0x8]          ; 004f4a38
    FXCH                                ; 004f4a3b
    FSTP float ptr [ESP + 0x3a0]        ; 004f4a3d
    FXCH                                ; 004f4a44
    FSTP float ptr [ESP + 0x3a4]        ; 004f4a46
    FSTP float ptr [ESP + 0x3a8]        ; 004f4a4d
    LEA EAX,[ESP + 0x430]               ; 004f4a54
    MOVSD ES:EDI,ESI                    ; 004f4a5b
    MOVSD ES:EDI,ESI                    ; 004f4a5c
    MOVSD ES:EDI,ESI                    ; 004f4a5d
    CMP EDX,EAX                         ; 004f4a5e
    JZ 0x004f4a8c                       ; 004f4a60
        ;   XREF to: 004f4a8c (CONDITIONAL_JUMP)  ; LAB_004f4a8c
    MOV EAX,dword ptr [ESP + 0x430]     ; 004f4a62
    MOV dword ptr [ESP + 0x3e8],EAX     ; 004f4a69
    MOV EAX,dword ptr [ESP + 0x434]     ; 004f4a70
    MOV dword ptr [ESP + 0x3ec],EAX     ; 004f4a77
    MOV EAX,dword ptr [ESP + 0x438]     ; 004f4a7e
    MOV dword ptr [ESP + 0x3f0],EAX     ; 004f4a85
    FLD float ptr [ESP + 0x4b4]         ; 004f4a8c
        ;   Label: LAB_004f4a8c
    FLD float ptr [ESP + 0x4b8]         ; 004f4a93
    FLD float ptr [ESP + 0x4bc]         ; 004f4a9a
    LEA EDI,[ESP + 0x550]               ; 004f4aa1
    LEA EAX,[EBX + 0x60]                ; 004f4aa8
    LEA ESI,[ESP + 0x460]               ; 004f4aab
    LEA EDX,[ESP + 0x4b4]               ; 004f4ab2
    FXCH ST2                            ; 004f4ab9
    FSUB float ptr [EAX]                ; 004f4abb
    FXCH                                ; 004f4abd
    FSUB float ptr [EAX + 0x4]          ; 004f4abf
    FXCH ST2                            ; 004f4ac2
    FSUB float ptr [EAX + 0x8]          ; 004f4ac4
    FXCH                                ; 004f4ac7
    FSTP float ptr [ESP + 0x460]        ; 004f4ac9
    FXCH                                ; 004f4ad0
    FSTP float ptr [ESP + 0x464]        ; 004f4ad2
    FSTP float ptr [ESP + 0x468]        ; 004f4ad9
    LEA EAX,[ESP + 0x550]               ; 004f4ae0
    MOVSD ES:EDI,ESI                    ; 004f4ae7
    MOVSD ES:EDI,ESI                    ; 004f4ae8
    MOVSD ES:EDI,ESI                    ; 004f4ae9
    CMP EDX,EAX                         ; 004f4aea
    JZ 0x004f4b18                       ; 004f4aec
        ;   XREF to: 004f4b18 (CONDITIONAL_JUMP)  ; LAB_004f4b18
    MOV EAX,dword ptr [ESP + 0x550]     ; 004f4aee
    MOV dword ptr [ESP + 0x4b4],EAX     ; 004f4af5
    MOV EAX,dword ptr [ESP + 0x554]     ; 004f4afc
    MOV dword ptr [ESP + 0x4b8],EAX     ; 004f4b03
    MOV EAX,dword ptr [ESP + 0x558]     ; 004f4b0a
    MOV dword ptr [ESP + 0x4bc],EAX     ; 004f4b11
    FLD float ptr [ESP + 0x4cc]         ; 004f4b18
        ;   Label: LAB_004f4b18
    FLD float ptr [ESP + 0x4d0]         ; 004f4b1f
    FLD float ptr [ESP + 0x4d4]         ; 004f4b26
    LEA EDI,[ESP + 0x394]               ; 004f4b2d
    LEA EAX,[EBX + 0x60]                ; 004f4b34
    LEA ESI,[ESP + 0x334]               ; 004f4b37
    LEA EDX,[ESP + 0x4cc]               ; 004f4b3e
    FXCH ST2                            ; 004f4b45
    FSUB float ptr [EAX]                ; 004f4b47
    FXCH                                ; 004f4b49
    FSUB float ptr [EAX + 0x4]          ; 004f4b4b
    FXCH ST2                            ; 004f4b4e
    FSUB float ptr [EAX + 0x8]          ; 004f4b50
    FXCH                                ; 004f4b53
    FSTP float ptr [ESP + 0x334]        ; 004f4b55
    FXCH                                ; 004f4b5c
    FSTP float ptr [ESP + 0x338]        ; 004f4b5e
    FSTP float ptr [ESP + 0x33c]        ; 004f4b65
    LEA EAX,[ESP + 0x394]               ; 004f4b6c
    MOVSD ES:EDI,ESI                    ; 004f4b73
    MOVSD ES:EDI,ESI                    ; 004f4b74
    MOVSD ES:EDI,ESI                    ; 004f4b75
    CMP EDX,EAX                         ; 004f4b76
    JZ 0x004f4ba4                       ; 004f4b78
        ;   XREF to: 004f4ba4 (CONDITIONAL_JUMP)  ; LAB_004f4ba4
    MOV EAX,dword ptr [ESP + 0x394]     ; 004f4b7a
    MOV dword ptr [ESP + 0x4cc],EAX     ; 004f4b81
    MOV EAX,dword ptr [ESP + 0x398]     ; 004f4b88
    MOV dword ptr [ESP + 0x4d0],EAX     ; 004f4b8f
    MOV EAX,dword ptr [ESP + 0x39c]     ; 004f4b96
    MOV dword ptr [ESP + 0x4d4],EAX     ; 004f4b9d
    MOV EAX,dword ptr [ESP + 0x4b4]     ; 004f4ba4
        ;   Label: LAB_004f4ba4
    MOV dword ptr [EBX + 0x70],EAX      ; 004f4bab
    MOV EAX,dword ptr [ESP + 0x4b8]     ; 004f4bae
    MOV dword ptr [EBX + 0x7c],EAX      ; 004f4bb5
    MOV EAX,dword ptr [ESP + 0x4bc]     ; 004f4bb8
    MOV dword ptr [EBX + 0x88],EAX      ; 004f4bbf
    MOV EAX,dword ptr [ESP + 0x3e8]     ; 004f4bc5
    MOV dword ptr [EBX + 0x74],EAX      ; 004f4bcc
    MOV EAX,dword ptr [ESP + 0x3ec]     ; 004f4bcf
    MOV dword ptr [EBX + 0x80],EAX      ; 004f4bd6
    MOV EAX,dword ptr [ESP + 0x3f0]     ; 004f4bdc
    MOV dword ptr [EBX + 0x8c],EAX      ; 004f4be3
    MOV EAX,dword ptr [ESP + 0x4cc]     ; 004f4be9
    MOV dword ptr [EBX + 0x78],EAX      ; 004f4bf0
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 004f4bf3
    MOV dword ptr [EBX + 0x84],EAX      ; 004f4bfa
    MOV EAX,dword ptr [ESP + 0x4d4]     ; 004f4c00
    MOV dword ptr [EBX + 0x90],EAX      ; 004f4c07
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f4c0d
    PUSH EBX                            ; 004f4c10
    MOV dword ptr [EBX + 0x6c],EAX      ; 004f4c11
    CALL core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070 ; 004f4c14
        ;   XREF to: 004f4070 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f4070(CMirrorReflection * this_ptr)
    ADD ESP,0x4                         ; 004f4c19
    LEA EAX,[ESP + 0x84]                ; 004f4c1c
    PUSH EAX                            ; 004f4c23
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0 ; 004f4c24
        ;   XREF to: 005835d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0()
    FLD float ptr [EBX + 0x60]          ; 004f4c29
    LEA EAX,[ESP + 0x1a8]               ; 004f4c2c
    ADD ESP,0x4                         ; 004f4c33
    FCHS                                ; 004f4c36
    FSTP float ptr [ESP + 0x90]         ; 004f4c38
    PUSH EAX                            ; 004f4c3f
    FLD float ptr [EBX + 0x64]          ; 004f4c40
    FCHS                                ; 004f4c43
    FSTP float ptr [ESP + 0xa4]         ; 004f4c45
    FLD float ptr [EBX + 0x68]          ; 004f4c4c
    FCHS                                ; 004f4c4f
    FSTP float ptr [ESP + 0xb4]         ; 004f4c51
    CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0 ; 004f4c58
        ;   XREF to: 005835d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setIdentityMatrix3x4_FUN_005835d0()
    FILD dword ptr [0x01c6e2fc]         ; 004f4c5d | DAT_01c6e2fc
    FMUL double ptr [0x005c836d]        ; 004f4c63 | DAT_005c836d
    FILD dword ptr [0x01c6e300]         ; 004f4c69 | DAT_01c6e300
    FMUL double ptr [0x005c836d]        ; 004f4c6f | DAT_005c836d
    FILD dword ptr [0x01c6e304]         ; 004f4c75 | DAT_01c6e304
    FMUL double ptr [0x005c836d]        ; 004f4c7b | DAT_005c836d
    FILD dword ptr [0x01c6e308]         ; 004f4c81 | DAT_01c6e308
    FMUL double ptr [0x005c836d]        ; 004f4c87 | DAT_005c836d
    FILD dword ptr [0x01c6e30c]         ; 004f4c8d | DAT_01c6e30c
    FMUL double ptr [0x005c836d]        ; 004f4c93 | DAT_005c836d
    FILD dword ptr [0x01c6e310]         ; 004f4c99 | DAT_01c6e310
    FMUL double ptr [0x005c836d]        ; 004f4c9f | DAT_005c836d
    FILD dword ptr [0x01c6e314]         ; 004f4ca5 | DAT_01c6e314
    ADD ESP,0x4                         ; 004f4cab
    FMUL double ptr [0x005c836d]        ; 004f4cae | DAT_005c836d
    FXCH ST6                            ; 004f4cb4
    FSTP float ptr [ESP + 0x1a4]        ; 004f4cb6
    FILD dword ptr [0x01c6e318]         ; 004f4cbd | DAT_01c6e318
    FMUL double ptr [0x005c836d]        ; 004f4cc3 | DAT_005c836d
    FXCH ST5                            ; 004f4cc9
    FSTP float ptr [ESP + 0x1b4]        ; 004f4ccb
    FILD dword ptr [0x01c6e31c]         ; 004f4cd2 | DAT_01c6e31c
    FMUL double ptr [0x005c836d]        ; 004f4cd8 | DAT_005c836d
    LEA ESI,[ESP + 0x294]               ; 004f4cde
    LEA EAX,[ESP + 0x1a4]               ; 004f4ce5
    LEA EDI,[ESP + 0x174]               ; 004f4cec
    PUSH EAX                            ; 004f4cf3
    FXCH ST4                            ; 004f4cf4
    FSTP float ptr [ESP + 0x1c8]        ; 004f4cf6
    FXCH ST2                            ; 004f4cfd
    FSTP float ptr [ESP + 0x1ac]        ; 004f4cff
    FSTP float ptr [ESP + 0x1bc]        ; 004f4d06
    FSTP float ptr [ESP + 0x1cc]        ; 004f4d0d
    FXCH ST2                            ; 004f4d14
    FSTP float ptr [ESP + 0x1b0]        ; 004f4d16
    LEA EAX,[ESP + 0x88]                ; 004f4d1d
    FSTP float ptr [ESP + 0x1c0]        ; 004f4d24
    PUSH EAX                            ; 004f4d2b
    FSTP float ptr [ESP + 0x1d4]        ; 004f4d2c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 004f4d33
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 004f4d38
    ADD ESP,0x8                         ; 004f4d3d
    LEA EAX,[ESP + 0x174]               ; 004f4d40
    LEA ESI,[ESP + 0x294]               ; 004f4d47
    PUSH EAX                            ; 004f4d4e
    MOVSD.REP ES:EDI,ESI                ; 004f4d4f
    PUSH EBX                            ; 004f4d51
    LEA ESI,[ESP + 0x444]               ; 004f4d52
    LEA EDI,[ESP + 0x354]               ; 004f4d59
    CALL core_xform.cpp_FUN_00583260    ; 004f4d60
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x444]               ; 004f4d65
    LEA EDX,[ESP + 0x354]               ; 004f4d6c
    ADD ESP,0x8                         ; 004f4d73
    LEA EAX,[ESP + 0x4d8]               ; 004f4d76
    MOVSD ES:EDI,ESI                    ; 004f4d7d
    MOVSD ES:EDI,ESI                    ; 004f4d7e
    MOVSD ES:EDI,ESI                    ; 004f4d7f
    CMP EAX,EDX                         ; 004f4d80
    JZ 0x004f4dae                       ; 004f4d82
        ;   XREF to: 004f4dae (CONDITIONAL_JUMP)  ; LAB_004f4dae
    MOV EAX,dword ptr [ESP + 0x34c]     ; 004f4d84
    MOV dword ptr [ESP + 0x4d8],EAX     ; 004f4d8b
    MOV EAX,dword ptr [ESP + 0x350]     ; 004f4d92
    MOV dword ptr [ESP + 0x4dc],EAX     ; 004f4d99
    MOV EAX,dword ptr [ESP + 0x354]     ; 004f4da0
    MOV dword ptr [ESP + 0x4e0],EAX     ; 004f4da7
    LEA EAX,[ESP + 0x174]               ; 004f4dae
        ;   Label: LAB_004f4dae
    PUSH EAX                            ; 004f4db5
    LEA EAX,[EBX + 0xc]                 ; 004f4db6
    PUSH EAX                            ; 004f4db9
    LEA ESI,[ESP + 0x4c8]               ; 004f4dba
    LEA EDI,[ESP + 0x504]               ; 004f4dc1
    CALL core_xform.cpp_FUN_00583260    ; 004f4dc8
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x4c8]               ; 004f4dcd
    LEA EAX,[ESP + 0x504]               ; 004f4dd4
    ADD ESP,0x8                         ; 004f4ddb
    LEA EDX,[ESP + 0x55c]               ; 004f4dde
    MOVSD ES:EDI,ESI                    ; 004f4de5
    MOVSD ES:EDI,ESI                    ; 004f4de6
    MOVSD ES:EDI,ESI                    ; 004f4de7
    CMP EDX,EAX                         ; 004f4de8
    JZ 0x004f4e16                       ; 004f4dea
        ;   XREF to: 004f4e16 (CONDITIONAL_JUMP)  ; LAB_004f4e16
    MOV EAX,dword ptr [ESP + 0x4fc]     ; 004f4dec
    MOV dword ptr [ESP + 0x55c],EAX     ; 004f4df3
    MOV EAX,dword ptr [ESP + 0x500]     ; 004f4dfa
    MOV dword ptr [ESP + 0x560],EAX     ; 004f4e01
    MOV EAX,dword ptr [ESP + 0x504]     ; 004f4e08
    MOV dword ptr [ESP + 0x564],EAX     ; 004f4e0f
    LEA EAX,[ESP + 0x174]               ; 004f4e16
        ;   Label: LAB_004f4e16
    PUSH EAX                            ; 004f4e1d
    LEA EAX,[EBX + 0x18]                ; 004f4e1e
    PUSH EAX                            ; 004f4e21
    LEA ESI,[ESP + 0x51c]               ; 004f4e22
    LEA EDI,[ESP + 0x348]               ; 004f4e29
    CALL core_xform.cpp_FUN_00583260    ; 004f4e30
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x51c]               ; 004f4e35
    LEA EDX,[ESP + 0x348]               ; 004f4e3c
    ADD ESP,0x8                         ; 004f4e43
    LEA EAX,[ESP + 0x538]               ; 004f4e46
    MOVSD ES:EDI,ESI                    ; 004f4e4d
    MOVSD ES:EDI,ESI                    ; 004f4e4e
    MOVSD ES:EDI,ESI                    ; 004f4e4f
    CMP EAX,EDX                         ; 004f4e50
    JZ 0x004f4e7e                       ; 004f4e52
        ;   XREF to: 004f4e7e (CONDITIONAL_JUMP)  ; LAB_004f4e7e
    MOV EAX,dword ptr [ESP + 0x340]     ; 004f4e54
    MOV dword ptr [ESP + 0x538],EAX     ; 004f4e5b
    MOV EAX,dword ptr [ESP + 0x344]     ; 004f4e62
    MOV dword ptr [ESP + 0x53c],EAX     ; 004f4e69
    MOV EAX,dword ptr [ESP + 0x348]     ; 004f4e70
    MOV dword ptr [ESP + 0x540],EAX     ; 004f4e77
    LEA EAX,[ESP + 0x174]               ; 004f4e7e
        ;   Label: LAB_004f4e7e
    PUSH EAX                            ; 004f4e85
    LEA EAX,[EBX + 0x24]                ; 004f4e86
    PUSH EAX                            ; 004f4e89
    LEA ESI,[ESP + 0x4f8]               ; 004f4e8a
    LEA EDI,[ESP + 0x36c]               ; 004f4e91
    CALL core_xform.cpp_FUN_00583260    ; 004f4e98
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x4f8]               ; 004f4e9d
    LEA EAX,[ESP + 0x36c]               ; 004f4ea4
    ADD ESP,0x8                         ; 004f4eab
    LEA EDX,[ESP + 0x37c]               ; 004f4eae
    MOVSD ES:EDI,ESI                    ; 004f4eb5
    MOVSD ES:EDI,ESI                    ; 004f4eb6
    MOVSD ES:EDI,ESI                    ; 004f4eb7
    CMP EDX,EAX                         ; 004f4eb8
    JZ 0x004f4ee6                       ; 004f4eba
        ;   XREF to: 004f4ee6 (CONDITIONAL_JUMP)  ; LAB_004f4ee6
    MOV EAX,dword ptr [ESP + 0x364]     ; 004f4ebc
    MOV dword ptr [ESP + 0x37c],EAX     ; 004f4ec3
    MOV EAX,dword ptr [ESP + 0x368]     ; 004f4eca
    MOV dword ptr [ESP + 0x380],EAX     ; 004f4ed1
    MOV EAX,dword ptr [ESP + 0x36c]     ; 004f4ed8
    MOV dword ptr [ESP + 0x384],EAX     ; 004f4edf
    LEA EAX,[ESP + 0x174]               ; 004f4ee6
        ;   Label: LAB_004f4ee6
    PUSH EAX                            ; 004f4eed
    LEA EAX,[EBX + 0x30]                ; 004f4eee
    PUSH EAX                            ; 004f4ef1
    MOV ECX,dword ptr [EBP + 0x18]      ; 004f4ef2
    PUSH ECX                            ; 004f4ef5
    LEA ESI,[ESP + 0x400]               ; 004f4ef6
    LEA EDI,[ESP + 0x550]               ; 004f4efd
    CALL core_xform.cpp_FUN_00583260    ; 004f4f04
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x400]               ; 004f4f09
    ADD ESP,0x8                         ; 004f4f10
    LEA EAX,[ESP + 0x548]               ; 004f4f13
    MOVSD ES:EDI,ESI                    ; 004f4f1a
    MOVSD ES:EDI,ESI                    ; 004f4f1b
    MOVSD ES:EDI,ESI                    ; 004f4f1c
    PUSH EAX                            ; 004f4f1d
    LEA ESI,[ESP + 0x528]               ; 004f4f1e
    LEA EDI,[ESP + 0x414]               ; 004f4f25
    CALL core_xform.cpp_FUN_00583260    ; 004f4f2c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[ESP + 0x528]               ; 004f4f31
    LEA EAX,[ESP + 0x414]               ; 004f4f38
    ADD ESP,0x8                         ; 004f4f3f
    LEA EDX,[ESP + 0x52c]               ; 004f4f42
    MOVSD ES:EDI,ESI                    ; 004f4f49
    MOVSD ES:EDI,ESI                    ; 004f4f4a
    MOVSD ES:EDI,ESI                    ; 004f4f4b
    CMP EDX,EAX                         ; 004f4f4c
    JZ 0x004f4f7a                       ; 004f4f4e
        ;   XREF to: 004f4f7a (CONDITIONAL_JUMP)  ; LAB_004f4f7a
    MOV EAX,dword ptr [ESP + 0x40c]     ; 004f4f50
    MOV dword ptr [ESP + 0x52c],EAX     ; 004f4f57
    MOV EAX,dword ptr [ESP + 0x410]     ; 004f4f5e
    MOV dword ptr [ESP + 0x530],EAX     ; 004f4f65
    MOV EAX,dword ptr [ESP + 0x414]     ; 004f4f6c
    MOV dword ptr [ESP + 0x534],EAX     ; 004f4f73
    LEA EAX,[ESP + 0x538]               ; 004f4f7a
        ;   Label: LAB_004f4f7a
    PUSH EAX                            ; 004f4f81
    LEA EAX,[ESP + 0x560]               ; 004f4f82
    PUSH EAX                            ; 004f4f89
    LEA EAX,[ESP + 0x4e0]               ; 004f4f8a
    PUSH EAX                            ; 004f4f91
    LEA EAX,[EBX + 0x98]                ; 004f4f92
    PUSH EAX                            ; 004f4f98
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80 ; 004f4f99
        ;   XREF to: 004f3b80 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 004f4f9e
    LEA EAX,[ESP + 0x55c]               ; 004f4fa1
    PUSH EAX                            ; 004f4fa8
    LEA EAX,[ESP + 0x4dc]               ; 004f4fa9
    PUSH EAX                            ; 004f4fb0
    LEA EAX,[ESP + 0x534]               ; 004f4fb1
    PUSH EAX                            ; 004f4fb8
    LEA EAX,[EBX + 0xa8]                ; 004f4fb9
    PUSH EAX                            ; 004f4fbf
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80 ; 004f4fc0
        ;   XREF to: 004f3b80 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 004f4fc5
    LEA EAX,[ESP + 0x538]               ; 004f4fc8
    PUSH EAX                            ; 004f4fcf
    LEA EAX,[ESP + 0x560]               ; 004f4fd0
    PUSH EAX                            ; 004f4fd7
    LEA EAX,[ESP + 0x534]               ; 004f4fd8
    PUSH EAX                            ; 004f4fdf
    LEA EAX,[EBX + 0xb8]                ; 004f4fe0
    PUSH EAX                            ; 004f4fe6
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80 ; 004f4fe7
        ;   XREF to: 004f3b80 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 004f4fec
    LEA EAX,[ESP + 0x37c]               ; 004f4fef
    PUSH EAX                            ; 004f4ff6
    LEA EAX,[ESP + 0x53c]               ; 004f4ff7
    PUSH EAX                            ; 004f4ffe
    LEA EAX,[ESP + 0x534]               ; 004f4fff
    PUSH EAX                            ; 004f5006
    LEA EAX,[EBX + 0xc8]                ; 004f5007
    PUSH EAX                            ; 004f500d
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80 ; 004f500e
        ;   XREF to: 004f3b80 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 004f5013
    LEA EAX,[ESP + 0x4d8]               ; 004f5016
    PUSH EAX                            ; 004f501d
    LEA EAX,[ESP + 0x380]               ; 004f501e
    PUSH EAX                            ; 004f5025
    LEA EAX,[ESP + 0x534]               ; 004f5026
    PUSH EAX                            ; 004f502d
    ADD EBX,0xd8                        ; 004f502e
    PUSH EBX                            ; 004f5034
    CALL core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80 ; 004f5035
        ;   XREF to: 004f3b80 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_computePlaneFromTriangle_FUN_004f3b80(SClipPlane * out_plane, CVector3f * vertex_a, CVector3f * vertex_b, CVector3f * vertex_c)
    ADD ESP,0x10                        ; 004f503a
    MOV ESP,EBP                         ; 004f503d
    POP EBP                             ; 004f503f
    POP EDI                             ; 004f5040
    POP ESI                             ; 004f5041
    POP EBX                             ; 004f5042
    RET                                 ; 004f5043
    FLD float ptr [ESP + 0x20]          ; 004f5044
        ;   Label: LAB_004f5044
    FABS                                ; 004f5048
    FLD float ptr [ESP + 0x1c]          ; 004f504a
    FABS                                ; 004f504e
    FSTP double ptr [ESP + 0x8]         ; 004f5050
    FCOMP double ptr [ESP + 0x8]        ; 004f5054
    FNSTSW AX                           ; 004f5058
    SAHF                                ; 004f505a
    JNC 0x004f508d                      ; 004f505b
        ;   XREF to: 004f508d (CONDITIONAL_JUMP)  ; LAB_004f508d
    FLD float ptr [ESP + 0x18]          ; 004f505d
    FABS                                ; 004f5061
    FCOMP double ptr [ESP + 0x8]        ; 004f5063
    FNSTSW AX                           ; 004f5067
    SAHF                                ; 004f5069
    JNC 0x004f508d                      ; 004f506a
        ;   XREF to: 004f508d (CONDITIONAL_JUMP)  ; LAB_004f508d
    XOR EDI,EDI                         ; 004f506c
    MOV EDX,0x3f800000                  ; 004f506e
    MOV dword ptr [ESP + 0x404],EDI     ; 004f5073
    MOV dword ptr [ESP + 0x408],EDX     ; 004f507a
    MOV dword ptr [ESP + 0x400],EDI     ; 004f5081
    JMP 0x004f4159                      ; 004f5088
        ;   XREF to: 004f4159 (UNCONDITIONAL_JUMP)  ; LAB_004f4159
    MOV ECX,0x3f800000                  ; 004f508d
        ;   Label: LAB_004f508d
    XOR EDX,EDX                         ; 004f5092
    MOV dword ptr [ESP + 0x404],ECX     ; 004f5094
    MOV dword ptr [ESP + 0x408],EDX     ; 004f509b
    MOV dword ptr [ESP + 0x400],EDX     ; 004f50a2
    JMP 0x004f4159                      ; 004f50a9
        ;   XREF to: 004f4159 (UNCONDITIONAL_JUMP)  ; LAB_004f4159
    XOR EAX,EAX                         ; 004f50ae
        ;   Label: LAB_004f50ae
    MOV dword ptr [ESP + 0x3e0],EAX     ; 004f50b0
    MOV dword ptr [ESP + 0x3dc],EAX     ; 004f50b7
    MOV dword ptr [ESP + 0x3e4],EAX     ; 004f50be
    JMP 0x004f42a3                      ; 004f50c5
        ;   XREF to: 004f42a3 (UNCONDITIONAL_JUMP)  ; LAB_004f42a3
    XOR ESI,ESI                         ; 004f50ca
        ;   Label: LAB_004f50ca
    MOV dword ptr [ESP + 0x404],ESI     ; 004f50cc
    MOV dword ptr [ESP + 0x400],ESI     ; 004f50d3
    MOV dword ptr [ESP + 0x408],ESI     ; 004f50da
    JMP 0x004f43de                      ; 004f50e1
        ;   XREF to: 004f43de (UNCONDITIONAL_JUMP)  ; LAB_004f43de

