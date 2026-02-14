; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass *this_ptr,SQuadVertices *quad_vertices,CVector4i *quad_uv_u,CVector4i *quad_uv_v,int subdivision_level)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; SQuadVertices *  Stack[0x8]:4   quad_vertices
; CVector4i *      Stack[0xc]:4   quad_uv_u
; CVector4i *      Stack[0x10]:4   quad_uv_v
; int              Stack[0x14]:4   subdivision_level
; Local Variables:
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
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
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
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
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
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
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
;
; XREF[1]:
;   core_glass.cpp_CGlass_shatter_FUN_004eaef0 at 004eb192
;
; Referenced Globals:
;   float FLOAT_0062e0d9 = 2
;   float FLOAT_0062e0dd = 0.5
;   float FLOAT_0062e0e1 = 4
;   float FLOAT_0062e0e5 = 0.25
;   WatcomTypeInfo g_CVectorTypeInfo
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea1c0
        ;   Label: core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0
    PUSH ESI                            ; 004ea1c1
    PUSH EDI                            ; 004ea1c2
    PUSH EBP                            ; 004ea1c3
    SUB ESP,0x1d4                       ; 004ea1c4
    MOV EBP,dword ptr [ESP + 0x1e8]     ; 004ea1ca
    MOV EBX,dword ptr [ESP + 0x1ec]     ; 004ea1d1
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 004ea1d8
    MOV EDI,dword ptr [ESP + 0x1f4]     ; 004ea1df
    PUSH 0x6598c0                       ; 004ea1e6 | g_CVectorTypeInfo
    PUSH 0x4                            ; 004ea1eb
    LEA EAX,[ESP + 0x8]                 ; 004ea1ed
    PUSH EAX                            ; 004ea1f1
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004ea1f2
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ea1f7
    MOV EDX,0x1                         ; 004ea1fa
    MOV ECX,dword ptr [ESP + 0x1f8]     ; 004ea1ff
    MOV dword ptr [ESP + 0x1d0],EDX     ; 004ea206
    CMP ECX,0x3                         ; 004ea20d
    JG 0x004ea375                       ; 004ea210
        ;   XREF to: 004ea375 (CONDITIONAL_JUMP)  ; LAB_004ea375
    CMP dword ptr [ESP + 0x1f8],0x2     ; 004ea216
        ;   Label: LAB_004ea216
    JLE 0x004ea383                      ; 004ea21e
        ;   XREF to: 004ea383 (CONDITIONAL_JUMP)  ; LAB_004ea383
    PUSH 0x3f000000                     ; 004ea224
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004ea229
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004ea22e
    TEST EAX,EAX                        ; 004ea231
    JZ 0x004ea383                       ; 004ea233
        ;   XREF to: 004ea383 (CONDITIONAL_JUMP)  ; LAB_004ea383
    MOV EAX,ESP                         ; 004ea239
        ;   Label: LAB_004ea239
    CMP EAX,EBX                         ; 004ea23b
    JZ 0x004ea252                       ; 004ea23d
        ;   XREF to: 004ea252 (CONDITIONAL_JUMP)  ; LAB_004ea252
    MOV EAX,dword ptr [EBX]             ; 004ea23f
    MOV dword ptr [ESP],EAX             ; 004ea241
    MOV EAX,dword ptr [EBX + 0x4]       ; 004ea244
    MOV dword ptr [ESP + 0x4],EAX       ; 004ea247
    MOV EAX,dword ptr [EBX + 0x8]       ; 004ea24b
    MOV dword ptr [ESP + 0x8],EAX       ; 004ea24e
    LEA EAX,[ESP + 0xc]                 ; 004ea252
        ;   Label: LAB_004ea252
    LEA EDX,[EBX + 0xc]                 ; 004ea256
    CMP EAX,EDX                         ; 004ea259
    JZ 0x004ea271                       ; 004ea25b
        ;   XREF to: 004ea271 (CONDITIONAL_JUMP)  ; LAB_004ea271
    MOV EAX,dword ptr [EDX]             ; 004ea25d
    MOV dword ptr [ESP + 0xc],EAX       ; 004ea25f
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ea263
    MOV dword ptr [ESP + 0x10],EAX      ; 004ea266
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ea26a
    MOV dword ptr [ESP + 0x14],EAX      ; 004ea26d
    LEA EAX,[ESP + 0x18]                ; 004ea271
        ;   Label: LAB_004ea271
    LEA EDX,[EBX + 0x18]                ; 004ea275
    CMP EAX,EDX                         ; 004ea278
    JZ 0x004ea290                       ; 004ea27a
        ;   XREF to: 004ea290 (CONDITIONAL_JUMP)  ; LAB_004ea290
    MOV EAX,dword ptr [EDX]             ; 004ea27c
    MOV dword ptr [ESP + 0x18],EAX      ; 004ea27e
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ea282
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea285
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ea289
    MOV dword ptr [ESP + 0x20],EAX      ; 004ea28c
    MOV EAX,dword ptr [ESI]             ; 004ea290
        ;   Label: LAB_004ea290
    MOV dword ptr [ESP + 0x30],EAX      ; 004ea292
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ea296
    MOV dword ptr [ESP + 0x34],EAX      ; 004ea299
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ea29d
    MOV dword ptr [ESP + 0x38],EAX      ; 004ea2a0
    MOV EAX,dword ptr [EDI]             ; 004ea2a4
    MOV dword ptr [ESP + 0x40],EAX      ; 004ea2a6
    MOV EAX,dword ptr [EDI + 0x4]       ; 004ea2aa
    MOV dword ptr [ESP + 0x44],EAX      ; 004ea2ad
    MOV EAX,dword ptr [EDI + 0x8]       ; 004ea2b1
    MOV dword ptr [ESP + 0x48],EAX      ; 004ea2b4
    MOV EAX,dword ptr [EBP + 0x17c]     ; 004ea2b8
    PUSH EAX                            ; 004ea2be
    LEA EAX,[EBP + 0x164]               ; 004ea2bf
    PUSH EAX                            ; 004ea2c5
    LEA EAX,[ESP + 0x48]                ; 004ea2c6
    PUSH EAX                            ; 004ea2ca
    LEA EAX,[ESP + 0x3c]                ; 004ea2cb
    PUSH EAX                            ; 004ea2cf
    LEA EAX,[ESP + 0x10]                ; 004ea2d0
    PUSH EAX                            ; 004ea2d4
    MOV EDX,dword ptr [0x0067a3d0]      ; 004ea2d5 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 004ea2db | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00 ; 004ea2dc
        ;   XREF to: 004c7d00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, ...)
    LEA EAX,[ESP + 0x24]                ; 004ea2e1
    LEA EDX,[EBX + 0x18]                ; 004ea2e5
    ADD ESP,0x18                        ; 004ea2e8
    CMP EAX,EDX                         ; 004ea2eb
    JZ 0x004ea303                       ; 004ea2ed
        ;   XREF to: 004ea303 (CONDITIONAL_JUMP)  ; LAB_004ea303
    MOV EAX,dword ptr [EDX]             ; 004ea2ef
    MOV dword ptr [ESP + 0xc],EAX       ; 004ea2f1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ea2f5
    MOV dword ptr [ESP + 0x10],EAX      ; 004ea2f8
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ea2fc
    MOV dword ptr [ESP + 0x14],EAX      ; 004ea2ff
    LEA EAX,[ESP + 0x18]                ; 004ea303
        ;   Label: LAB_004ea303
    ADD EBX,0x24                        ; 004ea307
    CMP EAX,EBX                         ; 004ea30a
    JZ 0x004ea322                       ; 004ea30c
        ;   XREF to: 004ea322 (CONDITIONAL_JUMP)  ; LAB_004ea322
    MOV EAX,dword ptr [EBX]             ; 004ea30e
    MOV dword ptr [ESP + 0x18],EAX      ; 004ea310
    MOV EAX,dword ptr [EBX + 0x4]       ; 004ea314
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea317
    MOV EAX,dword ptr [EBX + 0x8]       ; 004ea31b
    MOV dword ptr [ESP + 0x20],EAX      ; 004ea31e
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ea322
        ;   Label: LAB_004ea322
    MOV dword ptr [ESP + 0x34],EAX      ; 004ea325
    MOV EAX,dword ptr [ESI + 0xc]       ; 004ea329
    MOV dword ptr [ESP + 0x38],EAX      ; 004ea32c
    MOV EAX,dword ptr [EDI + 0x8]       ; 004ea330
    MOV dword ptr [ESP + 0x44],EAX      ; 004ea333
    MOV EAX,dword ptr [EDI + 0xc]       ; 004ea337
    MOV dword ptr [ESP + 0x48],EAX      ; 004ea33a
    MOV ECX,dword ptr [EBP + 0x17c]     ; 004ea33e
    PUSH ECX                            ; 004ea344
    ADD EBP,0x164                       ; 004ea345
    PUSH EBP                            ; 004ea34b
    LEA EAX,[ESP + 0x48]                ; 004ea34c
    PUSH EAX                            ; 004ea350
    LEA EAX,[ESP + 0x3c]                ; 004ea351
    PUSH EAX                            ; 004ea355
    LEA EAX,[ESP + 0x10]                ; 004ea356
    PUSH EAX                            ; 004ea35a
    MOV EBX,dword ptr [0x0067a3d0]      ; 004ea35b | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EBX                            ; 004ea361 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00 ; 004ea362
        ;   XREF to: 004c7d00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGlassParticle_FUN_004c7d00(CFireEffect * this_ptr, STriangleVertices * triangle_vertices, CVector3f * uv_u_per_vertex, CVector3f * uv_v_per_vertex, ...)
    ADD ESP,0x18                        ; 004ea367
    ADD ESP,0x1d4                       ; 004ea36a
    POP EBP                             ; 004ea370
    POP EDI                             ; 004ea371
    POP ESI                             ; 004ea372
    POP EBX                             ; 004ea373
    RET                                 ; 004ea374
    XOR EAX,EAX                         ; 004ea375
        ;   Label: LAB_004ea375
    MOV dword ptr [ESP + 0x1d0],EAX     ; 004ea377
    JMP 0x004ea216                      ; 004ea37e
        ;   XREF to: 004ea216 (UNCONDITIONAL_JUMP)  ; LAB_004ea216
    CMP dword ptr [ESP + 0x1d0],0x0     ; 004ea383
        ;   Label: LAB_004ea383
    JZ 0x004ea239                       ; 004ea38b
        ;   XREF to: 004ea239 (CONDITIONAL_JUMP)  ; LAB_004ea239
    MOV EAX,ESP                         ; 004ea391
    CMP EAX,EBX                         ; 004ea393
    JNZ 0x004eaecb                      ; 004ea395
        ;   XREF to: 004eaecb (CONDITIONAL_JUMP)  ; LAB_004eaecb
    LEA EAX,[EBX + 0xc]                 ; 004ea39b
        ;   Label: LAB_004ea39b
    FLD float ptr [EBX]                 ; 004ea39e
    FADD float ptr [EAX]                ; 004ea3a0
    FST float ptr [ESP + 0x164]         ; 004ea3a2
    FDIV float ptr [0x0062e0d9]         ; 004ea3a9 | FLOAT_0062e0d9
    FLD float ptr [EBX + 0x4]           ; 004ea3af
    FADD float ptr [EAX + 0x4]          ; 004ea3b2
    FST float ptr [ESP + 0x168]         ; 004ea3b5
    FLD float ptr [EBX + 0x8]           ; 004ea3bc
    FADD float ptr [EAX + 0x8]          ; 004ea3bf
    FXCH                                ; 004ea3c2
    FLD float ptr [0x0062e0dd]          ; 004ea3c4 | FLOAT_0062e0dd
    FXCH                                ; 004ea3ca
    FMUL ST1                            ; 004ea3cc
    FXCH ST2                            ; 004ea3ce
    FST float ptr [ESP + 0x16c]         ; 004ea3d0
    FMULP                               ; 004ea3d7
    LEA EDX,[ESP + 0xc]                 ; 004ea3d9
    FXCH                                ; 004ea3dd
    FSTP float ptr [ESP + 0x78]         ; 004ea3df
    LEA EAX,[ESP + 0x74]                ; 004ea3e3
    FSTP float ptr [ESP + 0x7c]         ; 004ea3e7
    FSTP float ptr [ESP + 0x74]         ; 004ea3eb
    CMP EDX,EAX                         ; 004ea3ef
    JZ 0x004ea40b                       ; 004ea3f1
        ;   XREF to: 004ea40b (CONDITIONAL_JUMP)  ; LAB_004ea40b
    MOV EAX,dword ptr [ESP + 0x74]      ; 004ea3f3
    MOV dword ptr [ESP + 0xc],EAX       ; 004ea3f7
    MOV EAX,dword ptr [ESP + 0x78]      ; 004ea3fb
    MOV dword ptr [ESP + 0x10],EAX      ; 004ea3ff
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004ea403
    MOV dword ptr [ESP + 0x14],EAX      ; 004ea407
    LEA EAX,[EBX + 0xc]                 ; 004ea40b
        ;   Label: LAB_004ea40b
    FLD float ptr [EBX]                 ; 004ea40e
    FADD float ptr [EAX]                ; 004ea410
    LEA ECX,[EBX + 0x18]                ; 004ea412
    FSTP float ptr [ESP + 0xbc]         ; 004ea415
    FLD float ptr [EBX + 0x4]           ; 004ea41c
    FADD float ptr [EAX + 0x4]          ; 004ea41f
    LEA EDX,[EBX + 0x24]                ; 004ea422
    FSTP float ptr [ESP + 0xc0]         ; 004ea425
    FLD float ptr [EBX + 0x8]           ; 004ea42c
    FADD float ptr [EAX + 0x8]          ; 004ea42f
    FLD float ptr [ESP + 0xbc]          ; 004ea432
    FXCH                                ; 004ea439
    FSTP float ptr [ESP + 0xc4]         ; 004ea43b
    FADD float ptr [ECX]                ; 004ea442
    FLD float ptr [ESP + 0xc0]          ; 004ea444
    FXCH                                ; 004ea44b
    FSTP float ptr [ESP + 0xd4]         ; 004ea44d
    FADD float ptr [ECX + 0x4]          ; 004ea454
    FLD float ptr [ESP + 0xc4]          ; 004ea457
    FXCH                                ; 004ea45e
    FSTP float ptr [ESP + 0xd8]         ; 004ea460
    FADD float ptr [ECX + 0x8]          ; 004ea467
    FLD float ptr [ESP + 0xd4]          ; 004ea46a
    FXCH                                ; 004ea471
    FSTP float ptr [ESP + 0xdc]         ; 004ea473
    FADD float ptr [EDX]                ; 004ea47a
    FST float ptr [ESP + 0xf8]          ; 004ea47c
    FDIV float ptr [0x0062e0e1]         ; 004ea483 | FLOAT_0062e0e1
    FLD float ptr [ESP + 0xd8]          ; 004ea489
    FADD float ptr [EDX + 0x4]          ; 004ea490
    FLD float ptr [ESP + 0xdc]          ; 004ea493
    FXCH                                ; 004ea49a
    FST float ptr [ESP + 0xfc]          ; 004ea49c
    FXCH                                ; 004ea4a3
    FADD float ptr [EDX + 0x8]          ; 004ea4a5
    FXCH                                ; 004ea4a8
    FLD float ptr [0x0062e0e5]          ; 004ea4aa | FLOAT_0062e0e5
    FXCH                                ; 004ea4b0
    FMUL ST1                            ; 004ea4b2
    FXCH ST2                            ; 004ea4b4
    FST float ptr [ESP + 0x100]         ; 004ea4b6
    FMULP                               ; 004ea4bd
    LEA EAX,[ESP + 0x14c]               ; 004ea4bf
    LEA EDX,[ESP + 0x18]                ; 004ea4c6
    FXCH                                ; 004ea4ca
    FSTP float ptr [ESP + 0x150]        ; 004ea4cc
    FSTP float ptr [ESP + 0x154]        ; 004ea4d3
    FSTP float ptr [ESP + 0x14c]        ; 004ea4da
    CMP EDX,EAX                         ; 004ea4e1
    JZ 0x004ea506                       ; 004ea4e3
        ;   XREF to: 004ea506 (CONDITIONAL_JUMP)  ; LAB_004ea506
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004ea4e5
    MOV dword ptr [ESP + 0x18],EAX      ; 004ea4ec
    MOV EAX,dword ptr [ESP + 0x150]     ; 004ea4f0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea4f7
    MOV EAX,dword ptr [ESP + 0x154]     ; 004ea4fb
    MOV dword ptr [ESP + 0x20],EAX      ; 004ea502
    LEA EAX,[EBX + 0x24]                ; 004ea506
        ;   Label: LAB_004ea506
    FLD float ptr [EBX]                 ; 004ea509
    FADD float ptr [EAX]                ; 004ea50b
    FST float ptr [ESP + 0x194]         ; 004ea50d
    FDIV float ptr [0x0062e0d9]         ; 004ea514 | FLOAT_0062e0d9
    FLD float ptr [EBX + 0x4]           ; 004ea51a
    FADD float ptr [EAX + 0x4]          ; 004ea51d
    FST float ptr [ESP + 0x198]         ; 004ea520
    FLD float ptr [EBX + 0x8]           ; 004ea527
    FADD float ptr [EAX + 0x8]          ; 004ea52a
    FXCH                                ; 004ea52d
    FLD float ptr [0x0062e0dd]          ; 004ea52f | FLOAT_0062e0dd
    FXCH                                ; 004ea535
    FMUL ST1                            ; 004ea537
    FXCH ST2                            ; 004ea539
    FST float ptr [ESP + 0x19c]         ; 004ea53b
    FMULP                               ; 004ea542
    LEA EDX,[ESP + 0x24]                ; 004ea544
    FXCH                                ; 004ea548
    FSTP float ptr [ESP + 0x18c]        ; 004ea54a
    LEA EAX,[ESP + 0x188]               ; 004ea551
    FSTP float ptr [ESP + 0x190]        ; 004ea558
    FSTP float ptr [ESP + 0x188]        ; 004ea55f
    CMP EDX,EAX                         ; 004ea566
    JZ 0x004ea58b                       ; 004ea568
        ;   XREF to: 004ea58b (CONDITIONAL_JUMP)  ; LAB_004ea58b
    MOV EAX,dword ptr [ESP + 0x188]     ; 004ea56a
    MOV dword ptr [ESP + 0x24],EAX      ; 004ea571
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004ea575
    MOV dword ptr [ESP + 0x28],EAX      ; 004ea57c
    MOV EAX,dword ptr [ESP + 0x190]     ; 004ea580
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ea587
    MOV EAX,dword ptr [ESI]             ; 004ea58b
        ;   Label: LAB_004ea58b
    MOV dword ptr [ESP + 0x30],EAX      ; 004ea58d
    MOV EDX,EAX                         ; 004ea591
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ea593
    ADD EDX,EAX                         ; 004ea596
    MOV EAX,EDX                         ; 004ea598
    SAR EDX,0x1f                        ; 004ea59a
    SUB EAX,EDX                         ; 004ea59d
    SAR EAX,0x1                         ; 004ea59f
    MOV dword ptr [ESP + 0x34],EAX      ; 004ea5a1
    MOV EAX,dword ptr [ESI]             ; 004ea5a5
    MOV EDX,dword ptr [ESI + 0x4]       ; 004ea5a7
    MOV ECX,dword ptr [ESI + 0x8]       ; 004ea5aa
    ADD EAX,EDX                         ; 004ea5ad
    MOV EDX,dword ptr [ESI + 0xc]       ; 004ea5af
    ADD EAX,ECX                         ; 004ea5b2
    ADD EDX,EAX                         ; 004ea5b4
    MOV EAX,EDX                         ; 004ea5b6
    SAR EDX,0x1f                        ; 004ea5b8
    SHL EDX,0x2                         ; 004ea5bb
    SBB EAX,EDX                         ; 004ea5be
    SAR EAX,0x2                         ; 004ea5c0
    MOV dword ptr [ESP + 0x38],EAX      ; 004ea5c3
    MOV EDX,dword ptr [ESI]             ; 004ea5c7
    MOV EAX,dword ptr [ESI + 0xc]       ; 004ea5c9
    ADD EDX,EAX                         ; 004ea5cc
    MOV EAX,EDX                         ; 004ea5ce
    SAR EDX,0x1f                        ; 004ea5d0
    SUB EAX,EDX                         ; 004ea5d3
    SAR EAX,0x1                         ; 004ea5d5
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ea5d7
    MOV EAX,dword ptr [EDI]             ; 004ea5db
    MOV dword ptr [ESP + 0x40],EAX      ; 004ea5dd
    MOV ECX,dword ptr [EDI + 0x4]       ; 004ea5e1
    LEA EDX,[EAX + ECX*0x1]             ; 004ea5e4
    MOV EAX,EDX                         ; 004ea5e7
    SAR EDX,0x1f                        ; 004ea5e9
    SUB EAX,EDX                         ; 004ea5ec
    SAR EAX,0x1                         ; 004ea5ee
    MOV dword ptr [ESP + 0x44],EAX      ; 004ea5f0
    MOV EAX,dword ptr [EDI]             ; 004ea5f4
    MOV EDX,dword ptr [EDI + 0x4]       ; 004ea5f6
    MOV ECX,dword ptr [EDI + 0x8]       ; 004ea5f9
    ADD EAX,EDX                         ; 004ea5fc
    MOV EDX,dword ptr [EDI + 0xc]       ; 004ea5fe
    ADD EAX,ECX                         ; 004ea601
    ADD EDX,EAX                         ; 004ea603
    MOV EAX,EDX                         ; 004ea605
    SAR EDX,0x1f                        ; 004ea607
    SHL EDX,0x2                         ; 004ea60a
    SBB EAX,EDX                         ; 004ea60d
    SAR EAX,0x2                         ; 004ea60f
    MOV dword ptr [ESP + 0x48],EAX      ; 004ea612
    MOV EDX,dword ptr [EDI]             ; 004ea616
    MOV EAX,dword ptr [EDI + 0xc]       ; 004ea618
    ADD EDX,EAX                         ; 004ea61b
    MOV EAX,EDX                         ; 004ea61d
    SAR EDX,0x1f                        ; 004ea61f
    SUB EAX,EDX                         ; 004ea622
    SAR EAX,0x1                         ; 004ea624
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ea626
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 004ea62a
    INC EAX                             ; 004ea631
    PUSH EAX                            ; 004ea632
    LEA EAX,[ESP + 0x44]                ; 004ea633
    PUSH EAX                            ; 004ea637
    LEA EAX,[ESP + 0x38]                ; 004ea638
    PUSH EAX                            ; 004ea63c
    LEA EAX,[ESP + 0xc]                 ; 004ea63d
    PUSH EAX                            ; 004ea641
    PUSH EBP                            ; 004ea642
    CALL core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 ; 004ea643
        ;   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, ...)
    LEA EAX,[EBX + 0xc]                 ; 004ea648
    FLD float ptr [EBX]                 ; 004ea64b
    FADD float ptr [EAX]                ; 004ea64d
    ADD ESP,0x14                        ; 004ea64f
    FST float ptr [ESP + 0x1a0]         ; 004ea652
    FDIV float ptr [0x0062e0d9]         ; 004ea659 | FLOAT_0062e0d9
    FLD float ptr [EBX + 0x4]           ; 004ea65f
    FADD float ptr [EAX + 0x4]          ; 004ea662
    FST float ptr [ESP + 0x1a4]         ; 004ea665
    FLD float ptr [EBX + 0x8]           ; 004ea66c
    FADD float ptr [EAX + 0x8]          ; 004ea66f
    FXCH                                ; 004ea672
    FLD float ptr [0x0062e0dd]          ; 004ea674 | FLOAT_0062e0dd
    FXCH                                ; 004ea67a
    FMUL ST1                            ; 004ea67c
    FXCH ST2                            ; 004ea67e
    FST float ptr [ESP + 0x1a8]         ; 004ea680
    FMULP                               ; 004ea687
    MOV EDX,ESP                         ; 004ea689
    FXCH                                ; 004ea68b
    FSTP float ptr [ESP + 0x9c]         ; 004ea68d
    LEA EAX,[ESP + 0x98]                ; 004ea694
    FSTP float ptr [ESP + 0xa0]         ; 004ea69b
    FSTP float ptr [ESP + 0x98]         ; 004ea6a2
    CMP EDX,EAX                         ; 004ea6a9
    JZ 0x004ea6cd                       ; 004ea6ab
        ;   XREF to: 004ea6cd (CONDITIONAL_JUMP)  ; LAB_004ea6cd
    MOV EAX,dword ptr [ESP + 0x98]      ; 004ea6ad
    MOV dword ptr [ESP],EAX             ; 004ea6b4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004ea6b7
    MOV dword ptr [ESP + 0x4],EAX       ; 004ea6be
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004ea6c2
    MOV dword ptr [ESP + 0x8],EAX       ; 004ea6c9
    LEA EAX,[ESP + 0xc]                 ; 004ea6cd
        ;   Label: LAB_004ea6cd
    LEA EDX,[EBX + 0xc]                 ; 004ea6d1
    CMP EAX,EDX                         ; 004ea6d4
    JZ 0x004ea6ec                       ; 004ea6d6
        ;   XREF to: 004ea6ec (CONDITIONAL_JUMP)  ; LAB_004ea6ec
    MOV EAX,dword ptr [EDX]             ; 004ea6d8
    MOV dword ptr [ESP + 0xc],EAX       ; 004ea6da
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ea6de
    MOV dword ptr [ESP + 0x10],EAX      ; 004ea6e1
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ea6e5
    MOV dword ptr [ESP + 0x14],EAX      ; 004ea6e8
    LEA EAX,[EBX + 0xc]                 ; 004ea6ec
        ;   Label: LAB_004ea6ec
    LEA EDX,[EBX + 0x18]                ; 004ea6ef
    FLD float ptr [EAX]                 ; 004ea6f2
    FADD float ptr [EDX]                ; 004ea6f4
    FST float ptr [ESP + 0x1c4]         ; 004ea6f6
    FDIV float ptr [0x0062e0d9]         ; 004ea6fd | FLOAT_0062e0d9
    FLD float ptr [EAX + 0x4]           ; 004ea703
    FADD float ptr [EDX + 0x4]          ; 004ea706
    FST float ptr [ESP + 0x1c8]         ; 004ea709
    FLD float ptr [EAX + 0x8]           ; 004ea710
    FADD float ptr [EDX + 0x8]          ; 004ea713
    FXCH                                ; 004ea716
    FLD float ptr [0x0062e0dd]          ; 004ea718 | FLOAT_0062e0dd
    FXCH                                ; 004ea71e
    FMUL ST1                            ; 004ea720
    FXCH ST2                            ; 004ea722
    FST float ptr [ESP + 0x1cc]         ; 004ea724
    FMULP                               ; 004ea72b
    LEA EAX,[ESP + 0xe0]                ; 004ea72d
    FXCH                                ; 004ea734
    FSTP float ptr [ESP + 0xe4]         ; 004ea736
    LEA EDX,[ESP + 0x18]                ; 004ea73d
    FSTP float ptr [ESP + 0xe8]         ; 004ea741
    FSTP float ptr [ESP + 0xe0]         ; 004ea748
    CMP EDX,EAX                         ; 004ea74f
    JZ 0x004ea774                       ; 004ea751
        ;   XREF to: 004ea774 (CONDITIONAL_JUMP)  ; LAB_004ea774
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004ea753
    MOV dword ptr [ESP + 0x18],EAX      ; 004ea75a
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004ea75e
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ea765
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004ea769
    MOV dword ptr [ESP + 0x20],EAX      ; 004ea770
    LEA EDX,[EBX + 0xc]                 ; 004ea774
        ;   Label: LAB_004ea774
    FLD float ptr [EBX]                 ; 004ea777
    FADD float ptr [EDX]                ; 004ea779
    LEA ECX,[EBX + 0x18]                ; 004ea77b
    FSTP float ptr [ESP + 0x11c]        ; 004ea77e
    FLD float ptr [EBX + 0x4]           ; 004ea785
    FADD float ptr [EDX + 0x4]          ; 004ea788
    LEA EAX,[EBX + 0x24]                ; 004ea78b
    FSTP float ptr [ESP + 0x120]        ; 004ea78e
    FLD float ptr [EBX + 0x8]           ; 004ea795
    FADD float ptr [EDX + 0x8]          ; 004ea798
    FLD float ptr [ESP + 0x11c]         ; 004ea79b
    FXCH                                ; 004ea7a2
    FSTP float ptr [ESP + 0x124]        ; 004ea7a4
    FADD float ptr [ECX]                ; 004ea7ab
    FLD float ptr [ESP + 0x120]         ; 004ea7ad
    FXCH                                ; 004ea7b4
    FSTP float ptr [ESP + 0x104]        ; 004ea7b6
    FADD float ptr [ECX + 0x4]          ; 004ea7bd
    FLD float ptr [ESP + 0x124]         ; 004ea7c0
    FXCH                                ; 004ea7c7
    FSTP float ptr [ESP + 0x108]        ; 004ea7c9
    FADD float ptr [ECX + 0x8]          ; 004ea7d0
    FLD float ptr [ESP + 0x104]         ; 004ea7d3
    FXCH                                ; 004ea7da
    FSTP float ptr [ESP + 0x10c]        ; 004ea7dc
    FADD float ptr [EAX]                ; 004ea7e3
    FST float ptr [ESP + 0x1b8]         ; 004ea7e5
    FDIV float ptr [0x0062e0e1]         ; 004ea7ec | FLOAT_0062e0e1
    FLD float ptr [ESP + 0x108]         ; 004ea7f2
    FADD float ptr [EAX + 0x4]          ; 004ea7f9
    FLD float ptr [ESP + 0x10c]         ; 004ea7fc
    FXCH                                ; 004ea803
    FST float ptr [ESP + 0x1bc]         ; 004ea805
    FXCH                                ; 004ea80c
    FADD float ptr [EAX + 0x8]          ; 004ea80e
    FXCH                                ; 004ea811
    FLD float ptr [0x0062e0e5]          ; 004ea813 | FLOAT_0062e0e5
    FXCH                                ; 004ea819
    FMUL ST1                            ; 004ea81b
    FXCH ST2                            ; 004ea81d
    FST float ptr [ESP + 0x1c0]         ; 004ea81f
    FMULP                               ; 004ea826
    LEA EDX,[ESP + 0x68]                ; 004ea828
    LEA EAX,[ESP + 0x24]                ; 004ea82c
    FXCH                                ; 004ea830
    FSTP float ptr [ESP + 0x6c]         ; 004ea832
    FSTP float ptr [ESP + 0x70]         ; 004ea836
    FSTP float ptr [ESP + 0x68]         ; 004ea83a
    CMP EAX,EDX                         ; 004ea83e
    JZ 0x004ea85a                       ; 004ea840
        ;   XREF to: 004ea85a (CONDITIONAL_JUMP)  ; LAB_004ea85a
    MOV EAX,dword ptr [ESP + 0x68]      ; 004ea842
    MOV dword ptr [ESP + 0x24],EAX      ; 004ea846
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004ea84a
    MOV dword ptr [ESP + 0x28],EAX      ; 004ea84e
    MOV EAX,dword ptr [ESP + 0x70]      ; 004ea852
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ea856
    MOV EDX,dword ptr [ESI]             ; 004ea85a
        ;   Label: LAB_004ea85a
    MOV ECX,dword ptr [ESI + 0x4]       ; 004ea85c
    ADD EDX,ECX                         ; 004ea85f
    MOV EAX,EDX                         ; 004ea861
    SAR EDX,0x1f                        ; 004ea863
    SUB EAX,EDX                         ; 004ea866
    SAR EAX,0x1                         ; 004ea868
    MOV dword ptr [ESP + 0x30],EAX      ; 004ea86a
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ea86e
    MOV dword ptr [ESP + 0x34],EAX      ; 004ea871
    MOV EDX,EAX                         ; 004ea875
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ea877
    ADD EDX,EAX                         ; 004ea87a
    MOV EAX,EDX                         ; 004ea87c
    SAR EDX,0x1f                        ; 004ea87e
    SUB EAX,EDX                         ; 004ea881
    SAR EAX,0x1                         ; 004ea883
    MOV dword ptr [ESP + 0x38],EAX      ; 004ea885
    MOV EAX,dword ptr [ESI]             ; 004ea889
    ADD EAX,dword ptr [ESI + 0x4]       ; 004ea88b
    MOV EDX,dword ptr [ESI + 0x8]       ; 004ea88e
    MOV ECX,dword ptr [ESI + 0xc]       ; 004ea891
    ADD EDX,EAX                         ; 004ea894
    ADD EDX,ECX                         ; 004ea896
    MOV EAX,EDX                         ; 004ea898
    SAR EDX,0x1f                        ; 004ea89a
    SHL EDX,0x2                         ; 004ea89d
    SBB EAX,EDX                         ; 004ea8a0
    SAR EAX,0x2                         ; 004ea8a2
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ea8a5
    MOV EDX,dword ptr [EDI]             ; 004ea8a9
    MOV EAX,dword ptr [EDI + 0x4]       ; 004ea8ab
    ADD EDX,EAX                         ; 004ea8ae
    MOV EAX,EDX                         ; 004ea8b0
    SAR EDX,0x1f                        ; 004ea8b2
    SUB EAX,EDX                         ; 004ea8b5
    SAR EAX,0x1                         ; 004ea8b7
    MOV dword ptr [ESP + 0x40],EAX      ; 004ea8b9
    MOV EAX,dword ptr [EDI + 0x4]       ; 004ea8bd
    MOV dword ptr [ESP + 0x44],EAX      ; 004ea8c0
    MOV ECX,dword ptr [EDI + 0x8]       ; 004ea8c4
    LEA EDX,[EAX + ECX*0x1]             ; 004ea8c7
    MOV EAX,EDX                         ; 004ea8ca
    SAR EDX,0x1f                        ; 004ea8cc
    SUB EAX,EDX                         ; 004ea8cf
    SAR EAX,0x1                         ; 004ea8d1
    MOV dword ptr [ESP + 0x48],EAX      ; 004ea8d3
    MOV EAX,dword ptr [EDI]             ; 004ea8d7
    MOV EDX,dword ptr [EDI + 0x4]       ; 004ea8d9
    MOV ECX,dword ptr [EDI + 0x8]       ; 004ea8dc
    ADD EAX,EDX                         ; 004ea8df
    MOV EDX,dword ptr [EDI + 0xc]       ; 004ea8e1
    ADD EAX,ECX                         ; 004ea8e4
    ADD EDX,EAX                         ; 004ea8e6
    MOV EAX,EDX                         ; 004ea8e8
    SAR EDX,0x1f                        ; 004ea8ea
    SHL EDX,0x2                         ; 004ea8ed
    SBB EAX,EDX                         ; 004ea8f0
    SAR EAX,0x2                         ; 004ea8f2
    MOV dword ptr [ESP + 0x4c],EAX      ; 004ea8f5
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 004ea8f9
    INC EAX                             ; 004ea900
    PUSH EAX                            ; 004ea901
    LEA EAX,[ESP + 0x44]                ; 004ea902
    PUSH EAX                            ; 004ea906
    LEA EAX,[ESP + 0x38]                ; 004ea907
    PUSH EAX                            ; 004ea90b
    LEA EAX,[ESP + 0xc]                 ; 004ea90c
    PUSH EAX                            ; 004ea910
    PUSH EBP                            ; 004ea911
    CALL core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 ; 004ea912
        ;   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, ...)
    LEA ECX,[EBX + 0xc]                 ; 004ea917
    FLD float ptr [EBX]                 ; 004ea91a
    ADD ESP,0x14                        ; 004ea91c
    FADD float ptr [ECX]                ; 004ea91f
    LEA EDX,[EBX + 0x18]                ; 004ea921
    FSTP float ptr [ESP + 0x5c]         ; 004ea924
    FLD float ptr [EBX + 0x4]           ; 004ea928
    FADD float ptr [ECX + 0x4]          ; 004ea92b
    LEA EAX,[EBX + 0x24]                ; 004ea92e
    FSTP float ptr [ESP + 0x60]         ; 004ea931
    FLD float ptr [EBX + 0x8]           ; 004ea935
    FADD float ptr [ECX + 0x8]          ; 004ea938
    FLD float ptr [ESP + 0x5c]          ; 004ea93b
    FXCH                                ; 004ea93f
    FSTP float ptr [ESP + 0x64]         ; 004ea941
    FADD float ptr [EDX]                ; 004ea945
    FLD float ptr [ESP + 0x60]          ; 004ea947
    FXCH                                ; 004ea94b
    FSTP float ptr [ESP + 0x140]        ; 004ea94d
    FADD float ptr [EDX + 0x4]          ; 004ea954
    FLD float ptr [ESP + 0x64]          ; 004ea957
    FXCH                                ; 004ea95b
    FSTP float ptr [ESP + 0x144]        ; 004ea95d
    FADD float ptr [EDX + 0x8]          ; 004ea964
    FLD float ptr [ESP + 0x140]         ; 004ea967
    FXCH                                ; 004ea96e
    FSTP float ptr [ESP + 0x148]        ; 004ea970
    FADD float ptr [EAX]                ; 004ea977
    FST float ptr [ESP + 0x1ac]         ; 004ea979
    FDIV float ptr [0x0062e0e1]         ; 004ea980 | FLOAT_0062e0e1
    FLD float ptr [ESP + 0x144]         ; 004ea986
    FADD float ptr [EAX + 0x4]          ; 004ea98d
    FLD float ptr [ESP + 0x148]         ; 004ea990
    FXCH                                ; 004ea997
    FST float ptr [ESP + 0x1b0]         ; 004ea999
    FXCH                                ; 004ea9a0
    FADD float ptr [EAX + 0x8]          ; 004ea9a2
    FXCH                                ; 004ea9a5
    FLD float ptr [0x0062e0e5]          ; 004ea9a7 | FLOAT_0062e0e5
    FXCH                                ; 004ea9ad
    FMUL ST1                            ; 004ea9af
    FXCH ST2                            ; 004ea9b1
    FST float ptr [ESP + 0x1b4]         ; 004ea9b3
    FMULP                               ; 004ea9ba
    LEA EDX,[ESP + 0xec]                ; 004ea9bc
    MOV EAX,ESP                         ; 004ea9c3
    FXCH                                ; 004ea9c5
    FSTP float ptr [ESP + 0xf0]         ; 004ea9c7
    FSTP float ptr [ESP + 0xf4]         ; 004ea9ce
    FSTP float ptr [ESP + 0xec]         ; 004ea9d5
    CMP EAX,EDX                         ; 004ea9dc
    JZ 0x004eaa00                       ; 004ea9de
        ;   XREF to: 004eaa00 (CONDITIONAL_JUMP)  ; LAB_004eaa00
    MOV EAX,dword ptr [ESP + 0xec]      ; 004ea9e0
    MOV dword ptr [ESP],EAX             ; 004ea9e7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004ea9ea
    MOV dword ptr [ESP + 0x4],EAX       ; 004ea9f1
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004ea9f5
    MOV dword ptr [ESP + 0x8],EAX       ; 004ea9fc
    LEA EDX,[EBX + 0xc]                 ; 004eaa00
        ;   Label: LAB_004eaa00
    LEA EAX,[EBX + 0x18]                ; 004eaa03
    FLD float ptr [EDX]                 ; 004eaa06
    FADD float ptr [EAX]                ; 004eaa08
    FST float ptr [ESP + 0x80]          ; 004eaa0a
    FDIV float ptr [0x0062e0d9]         ; 004eaa11 | FLOAT_0062e0d9
    FLD float ptr [EDX + 0x4]           ; 004eaa17
    FADD float ptr [EAX + 0x4]          ; 004eaa1a
    FST float ptr [ESP + 0x84]          ; 004eaa1d
    FLD float ptr [EDX + 0x8]           ; 004eaa24
    FADD float ptr [EAX + 0x8]          ; 004eaa27
    FXCH                                ; 004eaa2a
    FLD float ptr [0x0062e0dd]          ; 004eaa2c | FLOAT_0062e0dd
    FXCH                                ; 004eaa32
    FMUL ST1                            ; 004eaa34
    FXCH ST2                            ; 004eaa36
    FST float ptr [ESP + 0x88]          ; 004eaa38
    FMULP                               ; 004eaa3f
    LEA EDX,[ESP + 0xc]                 ; 004eaa41
    FXCH                                ; 004eaa45
    FSTP float ptr [ESP + 0x174]        ; 004eaa47
    LEA EAX,[ESP + 0x170]               ; 004eaa4e
    FSTP float ptr [ESP + 0x178]        ; 004eaa55
    FSTP float ptr [ESP + 0x170]        ; 004eaa5c
    CMP EDX,EAX                         ; 004eaa63
    JZ 0x004eaa88                       ; 004eaa65
        ;   XREF to: 004eaa88 (CONDITIONAL_JUMP)  ; LAB_004eaa88
    MOV EAX,dword ptr [ESP + 0x170]     ; 004eaa67
    MOV dword ptr [ESP + 0xc],EAX       ; 004eaa6e
    MOV EAX,dword ptr [ESP + 0x174]     ; 004eaa72
    MOV dword ptr [ESP + 0x10],EAX      ; 004eaa79
    MOV EAX,dword ptr [ESP + 0x178]     ; 004eaa7d
    MOV dword ptr [ESP + 0x14],EAX      ; 004eaa84
    LEA EAX,[ESP + 0x18]                ; 004eaa88
        ;   Label: LAB_004eaa88
    LEA EDX,[EBX + 0x18]                ; 004eaa8c
    CMP EAX,EDX                         ; 004eaa8f
    JZ 0x004eaaa7                       ; 004eaa91
        ;   XREF to: 004eaaa7 (CONDITIONAL_JUMP)  ; LAB_004eaaa7
    MOV EAX,dword ptr [EDX]             ; 004eaa93
    MOV dword ptr [ESP + 0x18],EAX      ; 004eaa95
    MOV EAX,dword ptr [EDX + 0x4]       ; 004eaa99
    MOV dword ptr [ESP + 0x1c],EAX      ; 004eaa9c
    MOV EAX,dword ptr [EDX + 0x8]       ; 004eaaa0
    MOV dword ptr [ESP + 0x20],EAX      ; 004eaaa3
    LEA EDX,[EBX + 0x18]                ; 004eaaa7
        ;   Label: LAB_004eaaa7
    LEA EAX,[EBX + 0x24]                ; 004eaaaa
    FLD float ptr [EDX]                 ; 004eaaad
    FADD float ptr [EAX]                ; 004eaaaf
    FST float ptr [ESP + 0x8c]          ; 004eaab1
    FDIV float ptr [0x0062e0d9]         ; 004eaab8 | FLOAT_0062e0d9
    FLD float ptr [EDX + 0x4]           ; 004eaabe
    FADD float ptr [EAX + 0x4]          ; 004eaac1
    FST float ptr [ESP + 0x90]          ; 004eaac4
    FLD float ptr [EDX + 0x8]           ; 004eaacb
    FADD float ptr [EAX + 0x8]          ; 004eaace
    FXCH                                ; 004eaad1
    FLD float ptr [0x0062e0dd]          ; 004eaad3 | FLOAT_0062e0dd
    FXCH                                ; 004eaad9
    FMUL ST1                            ; 004eaadb
    FXCH ST2                            ; 004eaadd
    FST float ptr [ESP + 0x94]          ; 004eaadf
    FMULP                               ; 004eaae6
    LEA EDX,[ESP + 0x50]                ; 004eaae8
    FXCH                                ; 004eaaec
    FSTP float ptr [ESP + 0x54]         ; 004eaaee
    LEA EAX,[ESP + 0x24]                ; 004eaaf2
    FSTP float ptr [ESP + 0x58]         ; 004eaaf6
    FSTP float ptr [ESP + 0x50]         ; 004eaafa
    CMP EAX,EDX                         ; 004eaafe
    JZ 0x004eab1a                       ; 004eab00
        ;   XREF to: 004eab1a (CONDITIONAL_JUMP)  ; LAB_004eab1a
    MOV EAX,dword ptr [ESP + 0x50]      ; 004eab02
    MOV dword ptr [ESP + 0x24],EAX      ; 004eab06
    MOV EAX,dword ptr [ESP + 0x54]      ; 004eab0a
    MOV dword ptr [ESP + 0x28],EAX      ; 004eab0e
    MOV EAX,dword ptr [ESP + 0x58]      ; 004eab12
    MOV dword ptr [ESP + 0x2c],EAX      ; 004eab16
    MOV EAX,dword ptr [ESI]             ; 004eab1a
        ;   Label: LAB_004eab1a
    ADD EAX,dword ptr [ESI + 0x4]       ; 004eab1c
    MOV EDX,dword ptr [ESI + 0x8]       ; 004eab1f
    MOV ECX,dword ptr [ESI + 0xc]       ; 004eab22
    ADD EDX,EAX                         ; 004eab25
    ADD EDX,ECX                         ; 004eab27
    MOV EAX,EDX                         ; 004eab29
    SAR EDX,0x1f                        ; 004eab2b
    SHL EDX,0x2                         ; 004eab2e
    SBB EAX,EDX                         ; 004eab31
    SAR EAX,0x2                         ; 004eab33
    MOV dword ptr [ESP + 0x30],EAX      ; 004eab36
    MOV EDX,dword ptr [ESI + 0x4]       ; 004eab3a
    MOV EAX,dword ptr [ESI + 0x8]       ; 004eab3d
    ADD EDX,EAX                         ; 004eab40
    MOV EAX,EDX                         ; 004eab42
    SAR EDX,0x1f                        ; 004eab44
    SUB EAX,EDX                         ; 004eab47
    SAR EAX,0x1                         ; 004eab49
    MOV dword ptr [ESP + 0x34],EAX      ; 004eab4b
    MOV EAX,dword ptr [ESI + 0x8]       ; 004eab4f
    MOV dword ptr [ESP + 0x38],EAX      ; 004eab52
    MOV ECX,dword ptr [ESI + 0xc]       ; 004eab56
    LEA EDX,[EAX + ECX*0x1]             ; 004eab59
    MOV EAX,EDX                         ; 004eab5c
    SAR EDX,0x1f                        ; 004eab5e
    SUB EAX,EDX                         ; 004eab61
    SAR EAX,0x1                         ; 004eab63
    MOV dword ptr [ESP + 0x3c],EAX      ; 004eab65
    MOV EAX,dword ptr [EDI]             ; 004eab69
    MOV EDX,dword ptr [EDI + 0x4]       ; 004eab6b
    MOV ECX,dword ptr [EDI + 0x8]       ; 004eab6e
    ADD EAX,EDX                         ; 004eab71
    MOV EDX,dword ptr [EDI + 0xc]       ; 004eab73
    ADD EAX,ECX                         ; 004eab76
    ADD EDX,EAX                         ; 004eab78
    MOV EAX,EDX                         ; 004eab7a
    SAR EDX,0x1f                        ; 004eab7c
    SHL EDX,0x2                         ; 004eab7f
    SBB EAX,EDX                         ; 004eab82
    SAR EAX,0x2                         ; 004eab84
    MOV dword ptr [ESP + 0x40],EAX      ; 004eab87
    MOV EDX,dword ptr [EDI + 0x4]       ; 004eab8b
    MOV EAX,dword ptr [EDI + 0x8]       ; 004eab8e
    ADD EDX,EAX                         ; 004eab91
    MOV EAX,EDX                         ; 004eab93
    SAR EDX,0x1f                        ; 004eab95
    SUB EAX,EDX                         ; 004eab98
    SAR EAX,0x1                         ; 004eab9a
    MOV dword ptr [ESP + 0x44],EAX      ; 004eab9c
    MOV EAX,dword ptr [EDI + 0x8]       ; 004eaba0
    MOV dword ptr [ESP + 0x48],EAX      ; 004eaba3
    MOV ECX,dword ptr [EDI + 0xc]       ; 004eaba7
    LEA EDX,[EAX + ECX*0x1]             ; 004eabaa
    MOV EAX,EDX                         ; 004eabad
    SAR EDX,0x1f                        ; 004eabaf
    SUB EAX,EDX                         ; 004eabb2
    SAR EAX,0x1                         ; 004eabb4
    MOV dword ptr [ESP + 0x4c],EAX      ; 004eabb6
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 004eabba
    INC EAX                             ; 004eabc1
    PUSH EAX                            ; 004eabc2
    LEA EAX,[ESP + 0x44]                ; 004eabc3
    PUSH EAX                            ; 004eabc7
    LEA EAX,[ESP + 0x38]                ; 004eabc8
    PUSH EAX                            ; 004eabcc
    LEA EAX,[ESP + 0xc]                 ; 004eabcd
    PUSH EAX                            ; 004eabd1
    PUSH EBP                            ; 004eabd2
    CALL core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 ; 004eabd3
        ;   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, ...)
    LEA EAX,[EBX + 0x24]                ; 004eabd8
    FLD float ptr [EBX]                 ; 004eabdb
    FADD float ptr [EAX]                ; 004eabdd
    ADD ESP,0x14                        ; 004eabdf
    FST float ptr [ESP + 0xc8]          ; 004eabe2
    FDIV float ptr [0x0062e0d9]         ; 004eabe9 | FLOAT_0062e0d9
    FLD float ptr [EBX + 0x4]           ; 004eabef
    FADD float ptr [EAX + 0x4]          ; 004eabf2
    FST float ptr [ESP + 0xcc]          ; 004eabf5
    FLD float ptr [EBX + 0x8]           ; 004eabfc
    FADD float ptr [EAX + 0x8]          ; 004eabff
    FXCH                                ; 004eac02
    FLD float ptr [0x0062e0dd]          ; 004eac04 | FLOAT_0062e0dd
    FXCH                                ; 004eac0a
    FMUL ST1                            ; 004eac0c
    FXCH ST2                            ; 004eac0e
    FST float ptr [ESP + 0xd0]          ; 004eac10
    FMULP                               ; 004eac17
    MOV EDX,ESP                         ; 004eac19
    FXCH                                ; 004eac1b
    FSTP float ptr [ESP + 0xb4]         ; 004eac1d
    LEA EAX,[ESP + 0xb0]                ; 004eac24
    FSTP float ptr [ESP + 0xb8]         ; 004eac2b
    FSTP float ptr [ESP + 0xb0]         ; 004eac32
    CMP EDX,EAX                         ; 004eac39
    JZ 0x004eac5d                       ; 004eac3b
        ;   XREF to: 004eac5d (CONDITIONAL_JUMP)  ; LAB_004eac5d
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004eac3d
    MOV dword ptr [ESP],EAX             ; 004eac44
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004eac47
    MOV dword ptr [ESP + 0x4],EAX       ; 004eac4e
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004eac52
    MOV dword ptr [ESP + 0x8],EAX       ; 004eac59
    LEA EAX,[EBX + 0xc]                 ; 004eac5d
        ;   Label: LAB_004eac5d
    FLD float ptr [EBX]                 ; 004eac60
    FADD float ptr [EAX]                ; 004eac62
    LEA EDX,[EBX + 0x18]                ; 004eac64
    FSTP float ptr [ESP + 0x17c]        ; 004eac67
    FLD float ptr [EBX + 0x4]           ; 004eac6e
    FADD float ptr [EAX + 0x4]          ; 004eac71
    LEA ECX,[EBX + 0x24]                ; 004eac74
    FSTP float ptr [ESP + 0x180]        ; 004eac77
    FLD float ptr [EBX + 0x8]           ; 004eac7e
    FADD float ptr [EAX + 0x8]          ; 004eac81
    FLD float ptr [ESP + 0x17c]         ; 004eac84
    FXCH                                ; 004eac8b
    FSTP float ptr [ESP + 0x184]        ; 004eac8d
    FADD float ptr [EDX]                ; 004eac94
    FLD float ptr [ESP + 0x180]         ; 004eac96
    FXCH                                ; 004eac9d
    FSTP float ptr [ESP + 0x110]        ; 004eac9f
    FADD float ptr [EDX + 0x4]          ; 004eaca6
    FLD float ptr [ESP + 0x184]         ; 004eaca9
    FXCH                                ; 004eacb0
    FSTP float ptr [ESP + 0x114]        ; 004eacb2
    FADD float ptr [EDX + 0x8]          ; 004eacb9
    FLD float ptr [ESP + 0x110]         ; 004eacbc
    FXCH                                ; 004eacc3
    FSTP float ptr [ESP + 0x118]        ; 004eacc5
    FADD float ptr [ECX]                ; 004eaccc
    FST float ptr [ESP + 0x128]         ; 004eacce
    FDIV float ptr [0x0062e0e1]         ; 004eacd5 | FLOAT_0062e0e1
    FLD float ptr [ESP + 0x114]         ; 004eacdb
    FADD float ptr [ECX + 0x4]          ; 004eace2
    FLD float ptr [ESP + 0x118]         ; 004eace5
    FXCH                                ; 004eacec
    FST float ptr [ESP + 0x12c]         ; 004eacee
    FXCH                                ; 004eacf5
    FADD float ptr [ECX + 0x8]          ; 004eacf7
    FXCH                                ; 004eacfa
    FLD float ptr [0x0062e0e5]          ; 004eacfc | FLOAT_0062e0e5
    FXCH                                ; 004ead02
    FMUL ST1                            ; 004ead04
    FXCH ST2                            ; 004ead06
    FST float ptr [ESP + 0x130]         ; 004ead08
    FMULP                               ; 004ead0f
    LEA EAX,[ESP + 0x158]               ; 004ead11
    LEA EDX,[ESP + 0xc]                 ; 004ead18
    FXCH                                ; 004ead1c
    FSTP float ptr [ESP + 0x15c]        ; 004ead1e
    FSTP float ptr [ESP + 0x160]        ; 004ead25
    FSTP float ptr [ESP + 0x158]        ; 004ead2c
    CMP EDX,EAX                         ; 004ead33
    JZ 0x004ead58                       ; 004ead35
        ;   XREF to: 004ead58 (CONDITIONAL_JUMP)  ; LAB_004ead58
    MOV EAX,dword ptr [ESP + 0x158]     ; 004ead37
    MOV dword ptr [ESP + 0xc],EAX       ; 004ead3e
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004ead42
    MOV dword ptr [ESP + 0x10],EAX      ; 004ead49
    MOV EAX,dword ptr [ESP + 0x160]     ; 004ead4d
    MOV dword ptr [ESP + 0x14],EAX      ; 004ead54
    LEA EDX,[EBX + 0x18]                ; 004ead58
        ;   Label: LAB_004ead58
    LEA EAX,[EBX + 0x24]                ; 004ead5b
    FLD float ptr [EDX]                 ; 004ead5e
    FADD float ptr [EAX]                ; 004ead60
    FST float ptr [ESP + 0x134]         ; 004ead62
    FDIV float ptr [0x0062e0d9]         ; 004ead69 | FLOAT_0062e0d9
    FLD float ptr [EDX + 0x4]           ; 004ead6f
    FADD float ptr [EAX + 0x4]          ; 004ead72
    FST float ptr [ESP + 0x138]         ; 004ead75
    FLD float ptr [EDX + 0x8]           ; 004ead7c
    FADD float ptr [EAX + 0x8]          ; 004ead7f
    FXCH                                ; 004ead82
    FLD float ptr [0x0062e0dd]          ; 004ead84 | FLOAT_0062e0dd
    FXCH                                ; 004ead8a
    FMUL ST1                            ; 004ead8c
    FXCH ST2                            ; 004ead8e
    FST float ptr [ESP + 0x13c]         ; 004ead90
    FMULP                               ; 004ead97
    LEA EDX,[ESP + 0x18]                ; 004ead99
    FXCH                                ; 004ead9d
    FSTP float ptr [ESP + 0xa8]         ; 004ead9f
    LEA EAX,[ESP + 0xa4]                ; 004eada6
    FSTP float ptr [ESP + 0xac]         ; 004eadad
    FSTP float ptr [ESP + 0xa4]         ; 004eadb4
    CMP EDX,EAX                         ; 004eadbb
    JZ 0x004eade0                       ; 004eadbd
        ;   XREF to: 004eade0 (CONDITIONAL_JUMP)  ; LAB_004eade0
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004eadbf
    MOV dword ptr [ESP + 0x18],EAX      ; 004eadc6
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004eadca
    MOV dword ptr [ESP + 0x1c],EAX      ; 004eadd1
    MOV EAX,dword ptr [ESP + 0xac]      ; 004eadd5
    MOV dword ptr [ESP + 0x20],EAX      ; 004eaddc
    LEA EAX,[ESP + 0x24]                ; 004eade0
        ;   Label: LAB_004eade0
    ADD EBX,0x24                        ; 004eade4
    CMP EAX,EBX                         ; 004eade7
    JZ 0x004eadff                       ; 004eade9
        ;   XREF to: 004eadff (CONDITIONAL_JUMP)  ; LAB_004eadff
    MOV EAX,dword ptr [EBX]             ; 004eadeb
    MOV dword ptr [ESP + 0x24],EAX      ; 004eaded
    MOV EAX,dword ptr [EBX + 0x4]       ; 004eadf1
    MOV dword ptr [ESP + 0x28],EAX      ; 004eadf4
    MOV EAX,dword ptr [EBX + 0x8]       ; 004eadf8
    MOV dword ptr [ESP + 0x2c],EAX      ; 004eadfb
    MOV EDX,dword ptr [ESI]             ; 004eadff
        ;   Label: LAB_004eadff
    MOV EBX,dword ptr [ESI + 0xc]       ; 004eae01
    ADD EDX,EBX                         ; 004eae04
    MOV EAX,EDX                         ; 004eae06
    SAR EDX,0x1f                        ; 004eae08
    SUB EAX,EDX                         ; 004eae0b
    SAR EAX,0x1                         ; 004eae0d
    MOV dword ptr [ESP + 0x30],EAX      ; 004eae0f
    MOV EAX,dword ptr [ESI]             ; 004eae13
    ADD EAX,dword ptr [ESI + 0x4]       ; 004eae15
    MOV EDX,dword ptr [ESI + 0x8]       ; 004eae18
    MOV ECX,dword ptr [ESI + 0xc]       ; 004eae1b
    ADD EDX,EAX                         ; 004eae1e
    ADD EDX,ECX                         ; 004eae20
    MOV EAX,EDX                         ; 004eae22
    SAR EDX,0x1f                        ; 004eae24
    SHL EDX,0x2                         ; 004eae27
    SBB EAX,EDX                         ; 004eae2a
    SAR EAX,0x2                         ; 004eae2c
    MOV dword ptr [ESP + 0x34],EAX      ; 004eae2f
    MOV EDX,dword ptr [ESI + 0x8]       ; 004eae33
    MOV EBX,dword ptr [ESI + 0xc]       ; 004eae36
    ADD EDX,EBX                         ; 004eae39
    MOV EAX,EDX                         ; 004eae3b
    SAR EDX,0x1f                        ; 004eae3d
    SUB EAX,EDX                         ; 004eae40
    SAR EAX,0x1                         ; 004eae42
    MOV dword ptr [ESP + 0x38],EAX      ; 004eae44
    MOV EAX,dword ptr [ESI + 0xc]       ; 004eae48
    MOV dword ptr [ESP + 0x3c],EAX      ; 004eae4b
    MOV EDX,dword ptr [EDI]             ; 004eae4f
    MOV ESI,dword ptr [EDI + 0xc]       ; 004eae51
    ADD EDX,ESI                         ; 004eae54
    MOV EAX,EDX                         ; 004eae56
    SAR EDX,0x1f                        ; 004eae58
    SUB EAX,EDX                         ; 004eae5b
    SAR EAX,0x1                         ; 004eae5d
    MOV dword ptr [ESP + 0x40],EAX      ; 004eae5f
    MOV EAX,dword ptr [EDI]             ; 004eae63
    ADD EAX,dword ptr [EDI + 0x4]       ; 004eae65
    MOV EDX,dword ptr [EDI + 0x8]       ; 004eae68
    MOV ECX,dword ptr [EDI + 0xc]       ; 004eae6b
    ADD EDX,EAX                         ; 004eae6e
    ADD EDX,ECX                         ; 004eae70
    MOV EAX,EDX                         ; 004eae72
    SAR EDX,0x1f                        ; 004eae74
    SHL EDX,0x2                         ; 004eae77
    SBB EAX,EDX                         ; 004eae7a
    SAR EAX,0x2                         ; 004eae7c
    MOV dword ptr [ESP + 0x44],EAX      ; 004eae7f
    MOV EDX,dword ptr [EDI + 0x8]       ; 004eae83
    MOV EBX,dword ptr [EDI + 0xc]       ; 004eae86
    ADD EDX,EBX                         ; 004eae89
    MOV EAX,EDX                         ; 004eae8b
    SAR EDX,0x1f                        ; 004eae8d
    SUB EAX,EDX                         ; 004eae90
    SAR EAX,0x1                         ; 004eae92
    MOV dword ptr [ESP + 0x48],EAX      ; 004eae94
    MOV EAX,dword ptr [EDI + 0xc]       ; 004eae98
    MOV dword ptr [ESP + 0x4c],EAX      ; 004eae9b
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 004eae9f
    INC EAX                             ; 004eaea6
    PUSH EAX                            ; 004eaea7
    LEA EAX,[ESP + 0x44]                ; 004eaea8
    PUSH EAX                            ; 004eaeac
    LEA EAX,[ESP + 0x38]                ; 004eaead
    PUSH EAX                            ; 004eaeb1
    LEA EAX,[ESP + 0xc]                 ; 004eaeb2
    PUSH EAX                            ; 004eaeb6
    PUSH EBP                            ; 004eaeb7
    CALL core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 ; 004eaeb8
        ;   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, ...)
    ADD ESP,0x14                        ; 004eaebd
    ADD ESP,0x1d4                       ; 004eaec0
    POP EBP                             ; 004eaec6
    POP EDI                             ; 004eaec7
    POP ESI                             ; 004eaec8
    POP EBX                             ; 004eaec9
    RET                                 ; 004eaeca
    MOV EAX,dword ptr [EBX]             ; 004eaecb
        ;   Label: LAB_004eaecb
    MOV dword ptr [ESP],EAX             ; 004eaecd
    MOV EAX,dword ptr [EBX + 0x4]       ; 004eaed0
    MOV dword ptr [ESP + 0x4],EAX       ; 004eaed3
    MOV EAX,dword ptr [EBX + 0x8]       ; 004eaed7
    MOV dword ptr [ESP + 0x8],EAX       ; 004eaeda
    JMP 0x004ea39b                      ; 004eaede
        ;   XREF to: 004ea39b (UNCONDITIONAL_JUMP)  ; LAB_004ea39b

