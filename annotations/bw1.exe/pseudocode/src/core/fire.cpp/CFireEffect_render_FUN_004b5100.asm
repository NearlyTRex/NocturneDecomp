; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_render_FUN_004b5100(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_00550260 at 00550452
;   core_set.cpp_FUN_00550580 at 00550931
;   core_set.cpp_FUN_00550da0 at 00550fc5
;   core_set.cpp_FUN_00551170 at 00551396
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c58aa0
;   undefined4 DAT_01c58acc
;   undefined4 DAT_01c6eaa0
;   undefined4 DAT_01c726a8
;   undefined4 g_SparkPool[0].field36_0x24
;   undefined4 g_SparkPool[0].field60_0x3c
;   undefined4 g_SparkPool[1].field36_0x24
;   undefined4 g_SparkPool[1].field60_0x3c
;   undefined4 CFirefly_ARRAY_01c9dab8[0].field36_0x24
;   undefined4 CFirefly_ARRAY_01c9dab8[0].field60_0x3c
;   undefined4 CFirefly_ARRAY_01c9dab8[1].field36_0x24
;   undefined4 CFirefly_ARRAY_01c9dab8[1].field60_0x3c
;   ... and 35 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_004ac770
;   core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0
;   core_fire.cpp_CBulletTrail_render_FUN_004afcf0
;   core_fire.cpp_CExplosion_render_FUN_004b1870
;   core_fire.cpp_CFireball_setupRenderState_FUN_004ae550
;   core_fire.cpp_CGunFlame_render_FUN_004b2ea0
;   core_fire.cpp_CLaserBeam_render_FUN_004b01a0
;   core_fire.cpp_CLightningBolt_render_FUN_004b3570
;   core_fire.cpp_CMuzzleFlash_render_FUN_004af430
;   core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0
;   core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004abdb0
;   core_fire.cpp_CSpark_setupRenderState_FUN_004ad010
;   core_fire.cpp_CStake_render_FUN_004ace60
;   core_fire.cpp_CToss_render_FUN_004b1f10
;   core_fire.cpp_CTrail_render_FUN_004b3d20
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5100
        ;   Label: core_fire.cpp_CFireEffect_render_FUN_004b5100
    PUSH ESI                            ; 004b5101
    PUSH EDI                            ; 004b5102
    PUSH EBP                            ; 004b5103
    MOV EBP,ESP                         ; 004b5104
    AND ESP,0xfffffff8                  ; 004b5106
    MOV EDX,dword ptr [0x01c726a8]      ; 004b5109 | DAT_01c726a8
    XOR ESI,ESI                         ; 004b510f
    TEST EDX,EDX                        ; 004b5111
    JLE 0x004b5135                      ; 004b5113
        ;   XREF to: 004b5135 (CONDITIONAL_JUMP)  ; LAB_004b5135
    XOR EBX,EBX                         ; 004b5115
    CMP dword ptr [EBX + 0x1c726b0],0x0 ; 004b5117
        ;   Label: LAB_004b5117
    JZ 0x004b5488                       ; 004b511e
        ;   XREF to: 004b5488 (CONDITIONAL_JUMP)  ; LAB_004b5488
    MOV ECX,dword ptr [0x01c726a8]      ; 004b5124 | DAT_01c726a8
        ;   Label: LAB_004b5124
    INC ESI                             ; 004b512a
    ADD EBX,0x260                       ; 004b512b
    CMP ESI,ECX                         ; 004b5131
    JL 0x004b5117                       ; 004b5133
        ;   XREF to: 004b5117 (CONDITIONAL_JUMP)  ; LAB_004b5117
    MOV EBX,0x1cac764                   ; 004b5135
        ;   Label: LAB_004b5135
    LEA ESI,[EBX + 0x1400]              ; 004b513a
    FLD float ptr [EBX + 0x24]          ; 004b5140 | g_RockPool[0].field36_0x24 | g_RockPool[1].field36_0x24
        ;   Label: LAB_004b5140
    FLDZ                                ; 004b5143
    FCOMPP                              ; 004b5145
    FNSTSW AX                           ; 004b5147
    SAHF                                ; 004b5149
    JNC 0x004b5156                      ; 004b514a
        ;   XREF to: 004b5156 (CONDITIONAL_JUMP)  ; LAB_004b5156
    PUSH EBX                            ; 004b514c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b514d | g_RockPool[0].field60_0x3c | g_RockPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b5150
    ADD ESP,0x4                         ; 004b5153
    ADD EBX,0x50                        ; 004b5156
        ;   Label: LAB_004b5156
    CMP EBX,ESI                         ; 004b5159
    JNZ 0x004b5140                      ; 004b515b
        ;   XREF to: 004b5140 (CONDITIONAL_JUMP)  ; LAB_004b5140
    MOV EBX,0x1cadb68                   ; 004b515d
    LEA ESI,[EBX + 0x1500]              ; 004b5162
    FLD float ptr [EBX + 0x24]          ; 004b5168 | CLeaf_ARRAY_01cadb68[0].field36_0x24 | CLeaf_ARRAY_01cadb68[1].field36_0x24
        ;   Label: LAB_004b5168
    FLDZ                                ; 004b516b
    FCOMPP                              ; 004b516d
    FNSTSW AX                           ; 004b516f
    SAHF                                ; 004b5171
    JNC 0x004b517e                      ; 004b5172
        ;   XREF to: 004b517e (CONDITIONAL_JUMP)  ; LAB_004b517e
    PUSH EBX                            ; 004b5174
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5175 | CLeaf_ARRAY_01cadb68[0].field60_0x3c | CLeaf_ARRAY_01cadb68[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b5178
    ADD ESP,0x4                         ; 004b517b
    ADD EBX,0x54                        ; 004b517e
        ;   Label: LAB_004b517e
    CMP EBX,ESI                         ; 004b5181
    JNZ 0x004b5168                      ; 004b5183
        ;   XREF to: 004b5168 (CONDITIONAL_JUMP)  ; LAB_004b5168
    MOV EBX,0x1c9dab8                   ; 004b5185
    LEA ESI,[EBX + 0x1700]              ; 004b518a
    FLD float ptr [EBX + 0x24]          ; 004b5190 | CFirefly_ARRAY_01c9dab8[0].field36_0x24 | CFirefly_ARRAY_01c9dab8[1].field36_0x24
        ;   Label: LAB_004b5190
    FLDZ                                ; 004b5193
    FCOMPP                              ; 004b5195
    FNSTSW AX                           ; 004b5197
    SAHF                                ; 004b5199
    JNC 0x004b51a6                      ; 004b519a
        ;   XREF to: 004b51a6 (CONDITIONAL_JUMP)  ; LAB_004b51a6
    PUSH EBX                            ; 004b519c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b519d | CFirefly_ARRAY_01c9dab8[0].field60_0x3c | CFirefly_ARRAY_01c9dab8[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b51a0
    ADD ESP,0x4                         ; 004b51a3
    ADD EBX,0x5c                        ; 004b51a6
        ;   Label: LAB_004b51a6
    CMP EBX,ESI                         ; 004b51a9
    JNZ 0x004b5190                      ; 004b51ab
        ;   XREF to: 004b5190 (CONDITIONAL_JUMP)  ; LAB_004b5190
    PUSH 0x1ca9e60                      ; 004b51ad
    MOV EBX,0x1ca9e60                   ; 004b51b2
    CALL core_fire.cpp_CFireball_setupRenderState_FUN_004ae550 ; 004b51b7
        ;   XREF to: 004ae550 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireball_setupRenderState_FUN_004ae550(CFireball * this_ptr)
    ADD ESP,0x4                         ; 004b51bc
    LEA ESI,[EBX + 0x2900]              ; 004b51bf
    FLD float ptr [EBX + 0x24]          ; 004b51c5 | g_FireballPool[0].field36_0x24 | g_FireballPool[1].field36_0x24
        ;   Label: LAB_004b51c5
    FLDZ                                ; 004b51c8
    FCOMPP                              ; 004b51ca
    FNSTSW AX                           ; 004b51cc
    SAHF                                ; 004b51ce
    JNC 0x004b51db                      ; 004b51cf
        ;   XREF to: 004b51db (CONDITIONAL_JUMP)  ; LAB_004b51db
    PUSH EBX                            ; 004b51d1
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b51d2 | g_FireballPool[0].field60_0x3c | g_FireballPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b51d5
    ADD ESP,0x4                         ; 004b51d8
    ADD EBX,0xa4                        ; 004b51db
        ;   Label: LAB_004b51db
    CMP EBX,ESI                         ; 004b51e1
    JNZ 0x004b51c5                      ; 004b51e3
        ;   XREF to: 004b51c5 (CONDITIONAL_JUMP)  ; LAB_004b51c5
    MOV EBX,0x1cbae48                   ; 004b51e5
    LEA ESI,[EBX + 0x12c0]              ; 004b51ea
    PUSH EBX                            ; 004b51f0
        ;   Label: LAB_004b51f0
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b51f1 | g_ShellPool[0].field60_0x3c | g_ShellPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b51f4
    ADD EBX,0x60                        ; 004b51f7
    ADD ESP,0x4                         ; 004b51fa
    CMP EBX,ESI                         ; 004b51fd
    JNZ 0x004b51f0                      ; 004b51ff
        ;   XREF to: 004b51f0 (CONDITIONAL_JUMP)  ; LAB_004b51f0
    MOV EAX,[0x00612560]                ; 004b5201 | DAT_00612560
    PUSH EAX                            ; 004b5206 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004b5207
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004b520c
    TEST EAX,EAX                        ; 004b520f
    JNZ 0x004b5481                      ; 004b5211
        ;   XREF to: 004b5481 (CONDITIONAL_JUMP)  ; LAB_004b5481
    PUSH EAX                            ; 004b5217
    PUSH EAX                            ; 004b5218
    PUSH EAX                            ; 004b5219
    PUSH EAX                            ; 004b521a
    PUSH EAX                            ; 004b521b
    MOV EDX,dword ptr [0x00622c18]      ; 004b521c | g_CDemonSetPtr
    PUSH EDX                            ; 004b5222 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30 ; 004b5223
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00551c30(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004b5228
    PUSH 0x1c6eaa8                      ; 004b522b
    XOR ESI,ESI                         ; 004b5230
    CALL core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0 ; 004b5232
        ;   XREF to: 004ac6f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0(CBulletHole * this_ptr)
    MOV ECX,dword ptr [0x01c6eaa0]      ; 004b5237 | DAT_01c6eaa0
    ADD ESP,0x4                         ; 004b523d
    TEST ECX,ECX                        ; 004b5240
    JLE 0x004b526d                      ; 004b5242
        ;   XREF to: 004b526d (CONDITIONAL_JUMP)  ; LAB_004b526d
    XOR EBX,EBX                         ; 004b5244
    CMP dword ptr [EBX + 0x1c6eab8],0x0 ; 004b5246
        ;   Label: LAB_004b5246
    JZ 0x004b525f                       ; 004b524d
        ;   XREF to: 004b525f (CONDITIONAL_JUMP)  ; LAB_004b525f
    MOV EAX,0x1c6eaa8                   ; 004b524f
    ADD EAX,EBX                         ; 004b5254
    PUSH EAX                            ; 004b5256
    CALL core_fire.cpp_CBulletHole_render_FUN_004ac770 ; 004b5257
        ;   XREF to: 004ac770 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_004ac770(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004b525c
    MOV EDI,dword ptr [0x01c6eaa0]      ; 004b525f | DAT_01c6eaa0
        ;   Label: LAB_004b525f
    INC ESI                             ; 004b5265
    ADD EBX,0x3c                        ; 004b5266
    CMP ESI,EDI                         ; 004b5269
    JL 0x004b5246                       ; 004b526b
        ;   XREF to: 004b5246 (CONDITIONAL_JUMP)  ; LAB_004b5246
    PUSH 0x1c58aa0                      ; 004b526d | DAT_01c58aa0
        ;   Label: LAB_004b526d
    MOV EBX,0x1c58aa0                   ; 004b5272
    CALL core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004abdb0 ; 004b5277
        ;   XREF to: 004abdb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_setupRenderState_FUN_004abdb0(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 004b527c
    LEA ESI,[EBX + 0x16000]             ; 004b527f
    MOV EAX,dword ptr [EBX]             ; 004b5285 | DAT_01c58aa0 | DAT_01c58acc
        ;   Label: LAB_004b5285
    TEST EAX,EAX                        ; 004b5287
    JZ 0x004b5294                       ; 004b5289
        ;   XREF to: 004b5294 (CONDITIONAL_JUMP)  ; LAB_004b5294
    PUSH EBX                            ; 004b528b | DAT_01c58aa0 | DAT_01c58acc
    CALL core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0 ; 004b528c
        ;   XREF to: 004ac0b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 004b5291
    ADD EBX,0x2c                        ; 004b5294
        ;   Label: LAB_004b5294
    CMP EBX,ESI                         ; 004b5297
    JNZ 0x004b5285                      ; 004b5299
        ;   XREF to: 004b5285 (CONDITIONAL_JUMP)  ; LAB_004b5285
    MOV EBX,0x1c9f1bc                   ; 004b529b
    LEA ESI,[EBX + 0x730]               ; 004b52a0
    MOV EAX,dword ptr [EBX]             ; 004b52a6 | DAT_01c9f1bc | DAT_01c9f218
        ;   Label: LAB_004b52a6
    TEST EAX,EAX                        ; 004b52a8
    JZ 0x004b52b5                       ; 004b52aa
        ;   XREF to: 004b52b5 (CONDITIONAL_JUMP)  ; LAB_004b52b5
    PUSH EBX                            ; 004b52ac | DAT_01c9f1bc | DAT_01c9f218
    CALL core_fire.cpp_CMuzzleFlash_render_FUN_004af430 ; 004b52ad
        ;   XREF to: 004af430 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_render_FUN_004af430(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 004b52b2
    ADD EBX,0x5c                        ; 004b52b5
        ;   Label: LAB_004b52b5
    CMP EBX,ESI                         ; 004b52b8
    JNZ 0x004b52a6                      ; 004b52ba
        ;   XREF to: 004b52a6 (CONDITIONAL_JUMP)  ; LAB_004b52a6
    MOV EDX,dword ptr [0x01caf068]      ; 004b52bc | DAT_01caf068
    XOR ESI,ESI                         ; 004b52c2
    TEST EDX,EDX                        ; 004b52c4
    JLE 0x004b52f0                      ; 004b52c6
        ;   XREF to: 004b52f0 (CONDITIONAL_JUMP)  ; LAB_004b52f0
    MOV EBX,0x1caf06c                   ; 004b52c8
    PUSH EBX                            ; 004b52cd
        ;   Label: LAB_004b52cd
    CALL core_fire.cpp_CLaserBeam_render_FUN_004b01a0 ; 004b52ce
        ;   XREF to: 004b01a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_render_FUN_004b01a0(CLaserBeam * this_ptr)
    INC ESI                             ; 004b52d3
    MOV ECX,dword ptr [0x01caf068]      ; 004b52d4 | DAT_01caf068
    ADD ESP,0x4                         ; 004b52da
    ADD EBX,0x40                        ; 004b52dd
    CMP ESI,ECX                         ; 004b52e0
    JL 0x004b52cd                       ; 004b52e2
        ;   XREF to: 004b52cd (CONDITIONAL_JUMP)  ; LAB_004b52cd
    LEA EAX,[EAX]                       ; 004b52e4
    LEA EDX,[EDX]                       ; 004b52ea
    PUSH 0x1c986b4                      ; 004b52f0
        ;   Label: LAB_004b52f0
    MOV EBX,0x1c986b4                   ; 004b52f5
    CALL core_fire.cpp_CSpark_setupRenderState_FUN_004ad010 ; 004b52fa
        ;   XREF to: 004ad010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSpark_setupRenderState_FUN_004ad010(CSpark * this_ptr)
    ADD ESP,0x4                         ; 004b52ff
    LEA ESI,[EBX + 0x5400]              ; 004b5302
    FLD float ptr [EBX + 0x24]          ; 004b5308 | g_SparkPool[0].field36_0x24 | g_SparkPool[1].field36_0x24
        ;   Label: LAB_004b5308
    FLDZ                                ; 004b530b
    FCOMPP                              ; 004b530d
    FNSTSW AX                           ; 004b530f
    SAHF                                ; 004b5311
    JNC 0x004b531e                      ; 004b5312
        ;   XREF to: 004b531e (CONDITIONAL_JUMP)  ; LAB_004b531e
    PUSH EBX                            ; 004b5314
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5315 | g_SparkPool[0].field60_0x3c | g_SparkPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b5318
    ADD ESP,0x4                         ; 004b531b
    ADD EBX,0x54                        ; 004b531e
        ;   Label: LAB_004b531e
    CMP EBX,ESI                         ; 004b5321
    JNZ 0x004b5308                      ; 004b5323
        ;   XREF to: 004b5308 (CONDITIONAL_JUMP)  ; LAB_004b5308
    PUSH 0x1c9dab8                      ; 004b5325
    MOV EBX,0x1c9dab8                   ; 004b532a
    CALL core_fire.cpp_FUN_004ad9c0     ; 004b532f
        ;   XREF to: 004ad9c0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004ad9c0()
    ADD ESP,0x4                         ; 004b5334
    LEA ESI,[EBX + 0x1700]              ; 004b5337
    FLD float ptr [EBX + 0x24]          ; 004b533d | CFirefly_ARRAY_01c9dab8[0].field36_0x24 | CFirefly_ARRAY_01c9dab8[1].field36_0x24
        ;   Label: LAB_004b533d
    FLDZ                                ; 004b5340
    FCOMPP                              ; 004b5342
    FNSTSW AX                           ; 004b5344
    SAHF                                ; 004b5346
    JNC 0x004b5353                      ; 004b5347
        ;   XREF to: 004b5353 (CONDITIONAL_JUMP)  ; LAB_004b5353
    PUSH EBX                            ; 004b5349
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b534a | CFirefly_ARRAY_01c9dab8[0].field60_0x3c | CFirefly_ARRAY_01c9dab8[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b534d
    ADD ESP,0x4                         ; 004b5350
    ADD EBX,0x5c                        ; 004b5353
        ;   Label: LAB_004b5353
    CMP EBX,ESI                         ; 004b5356
    JNZ 0x004b533d                      ; 004b5358
        ;   XREF to: 004b533d (CONDITIONAL_JUMP)  ; LAB_004b533d
    MOV EBX,0x1c9f8f0                   ; 004b535a
    LEA ESI,[EBX + 0xa400]              ; 004b535f
    FLD float ptr [EBX + 0x24]          ; 004b5365 | g_GlassParticlePool[0].field36_0x24 | g_GlassParticlePool[1].field36_0x24
        ;   Label: LAB_004b5365
    FLDZ                                ; 004b5368
    FCOMPP                              ; 004b536a
    FNSTSW AX                           ; 004b536c
    SAHF                                ; 004b536e
    JNC 0x004b537b                      ; 004b536f
        ;   XREF to: 004b537b (CONDITIONAL_JUMP)  ; LAB_004b537b
    PUSH EBX                            ; 004b5371
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5372 | g_GlassParticlePool[0].field60_0x3c | g_GlassParticlePool[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b5375
    ADD ESP,0x4                         ; 004b5378
    ADD EBX,0xa4                        ; 004b537b
        ;   Label: LAB_004b537b
    CMP EBX,ESI                         ; 004b5381
    JNZ 0x004b5365                      ; 004b5383
        ;   XREF to: 004b5365 (CONDITIONAL_JUMP)  ; LAB_004b5365
    MOV EBX,0x1ca9cf4                   ; 004b5385
    LEA ESI,[EBX + 0x168]               ; 004b538a
    MOV EAX,dword ptr [EBX + 0x20]      ; 004b5390 | DAT_01ca9d14 | DAT_01ca9d38
        ;   Label: LAB_004b5390
    TEST EAX,EAX                        ; 004b5393
    JZ 0x004b53a0                       ; 004b5395
        ;   XREF to: 004b53a0 (CONDITIONAL_JUMP)  ; LAB_004b53a0
    PUSH EBX                            ; 004b5397
    CALL core_fire.cpp_CBulletTrail_render_FUN_004afcf0 ; 004b5398
        ;   XREF to: 004afcf0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_render_FUN_004afcf0(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 004b539d
    ADD EBX,0x24                        ; 004b53a0
        ;   Label: LAB_004b53a0
    CMP EBX,ESI                         ; 004b53a3
    JNZ 0x004b5390                      ; 004b53a5
        ;   XREF to: 004b5390 (CONDITIONAL_JUMP)  ; LAB_004b5390
    MOV EBX,0x1cb0070                   ; 004b53a7
    LEA ESI,[EBX + 0x118]               ; 004b53ac
    PUSH EBX                            ; 004b53b2 | DAT_01cb008c
        ;   Label: LAB_004b53b2
    CALL core_fire.cpp_CExplosion_render_FUN_004b1870 ; 004b53b3
        ;   XREF to: 004b1870 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_render_FUN_004b1870(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 004b53b8
    ADD ESP,0x4                         ; 004b53bb
    CMP EBX,ESI                         ; 004b53be
    JNZ 0x004b53b2                      ; 004b53c0
        ;   XREF to: 004b53b2 (CONDITIONAL_JUMP)  ; LAB_004b53b2
    MOV EBX,0x1cb018c                   ; 004b53c2
    LEA ESI,[EBX + 0x4dd0]              ; 004b53c7
    PUSH EBX                            ; 004b53cd
        ;   Label: LAB_004b53cd
    CALL core_fire.cpp_CToss_render_FUN_004b1f10 ; 004b53ce
        ;   XREF to: 004b1f10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_render_FUN_004b1f10(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 004b53d3
    ADD ESP,0x4                         ; 004b53d9
    CMP EBX,ESI                         ; 004b53dc
    JNZ 0x004b53cd                      ; 004b53de
        ;   XREF to: 004b53cd (CONDITIONAL_JUMP)  ; LAB_004b53cd
    MOV EBX,0x1cb5824                   ; 004b53e0
    LEA ESI,[EBX + 0x4650]              ; 004b53e5
    PUSH EBX                            ; 004b53eb | DAT_01cb5824 | DAT_01cb5848
        ;   Label: LAB_004b53eb
    CALL core_fire.cpp_CGunFlame_render_FUN_004b2ea0 ; 004b53ec
        ;   XREF to: 004b2ea0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame * this_ptr)
    ADD EBX,0x24                        ; 004b53f1
    ADD ESP,0x4                         ; 004b53f4
    CMP EBX,ESI                         ; 004b53f7
    JNZ 0x004b53eb                      ; 004b53f9
        ;   XREF to: 004b53eb (CONDITIONAL_JUMP)  ; LAB_004b53eb
    MOV EBX,0x1cb9e78                   ; 004b53fb
    LEA ESI,[EBX + 0x1b8]               ; 004b5400
    PUSH EBX                            ; 004b5406
        ;   Label: LAB_004b5406
    CALL core_fire.cpp_CLightningBolt_render_FUN_004b3570 ; 004b5407
        ;   XREF to: 004b3570 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_render_FUN_004b3570(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 004b540c
    ADD ESP,0x4                         ; 004b540f
    CMP EBX,ESI                         ; 004b5412
    JNZ 0x004b5406                      ; 004b5414
        ;   XREF to: 004b5406 (CONDITIONAL_JUMP)  ; LAB_004b5406
    MOV EBX,0x1cba034                   ; 004b5416
    LEA ESI,[EBX + 0xe10]               ; 004b541b
    PUSH EBX                            ; 004b5421
        ;   Label: LAB_004b5421
    CALL core_fire.cpp_CTrail_render_FUN_004b3d20 ; 004b5422
        ;   XREF to: 004b3d20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_render_FUN_004b3d20(CTrail * this_ptr)
    ADD EBX,0x24                        ; 004b5427
    ADD ESP,0x4                         ; 004b542a
    CMP EBX,ESI                         ; 004b542d
    JNZ 0x004b5421                      ; 004b542f
        ;   XREF to: 004b5421 (CONDITIONAL_JUMP)  ; LAB_004b5421
    MOV EBX,0x1cbc10c                   ; 004b5431
    LEA ESI,[EBX + 0x4000]              ; 004b5436
    FLD float ptr [EBX + 0x24]          ; 004b543c | g_PopcornPool[0].field36_0x24 | g_PopcornPool[1].field36_0x24
        ;   Label: LAB_004b543c
    FLDZ                                ; 004b543f
    FCOMPP                              ; 004b5441
    FNSTSW AX                           ; 004b5443
    SAHF                                ; 004b5445
    JNC 0x004b5452                      ; 004b5446
        ;   XREF to: 004b5452 (CONDITIONAL_JUMP)  ; LAB_004b5452
    PUSH EBX                            ; 004b5448
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5449 | g_PopcornPool[0].field60_0x3c | g_PopcornPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b544c
    ADD ESP,0x4                         ; 004b544f
    ADD EBX,0x40                        ; 004b5452
        ;   Label: LAB_004b5452
    CMP EBX,ESI                         ; 004b5455
    JNZ 0x004b543c                      ; 004b5457
        ;   XREF to: 004b543c (CONDITIONAL_JUMP)  ; LAB_004b543c
    MOV EBX,0x1cc0110                   ; 004b5459
    LEA ESI,[EBX + 0x4000]              ; 004b545e
    FLD float ptr [EBX + 0x24]          ; 004b5464 | g_RainDropPool[0].field36_0x24 | g_RainDropPool[1].field36_0x24
        ;   Label: LAB_004b5464
    FLDZ                                ; 004b5467
    FCOMPP                              ; 004b5469
    FNSTSW AX                           ; 004b546b
    SAHF                                ; 004b546d
    JNC 0x004b547a                      ; 004b546e
        ;   XREF to: 004b547a (CONDITIONAL_JUMP)  ; LAB_004b547a
    PUSH EBX                            ; 004b5470
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5471 | g_RainDropPool[0].field60_0x3c | g_RainDropPool[1].field60_0x3c
    CALL dword ptr [EAX + 0x8]          ; 004b5474
    ADD ESP,0x4                         ; 004b5477
    ADD EBX,0x40                        ; 004b547a
        ;   Label: LAB_004b547a
    CMP EBX,ESI                         ; 004b547d
    JNZ 0x004b5464                      ; 004b547f
        ;   XREF to: 004b5464 (CONDITIONAL_JUMP)  ; LAB_004b5464
    MOV ESP,EBP                         ; 004b5481
        ;   Label: LAB_004b5481
    POP EBP                             ; 004b5483
    POP EDI                             ; 004b5484
    POP ESI                             ; 004b5485
    POP EBX                             ; 004b5486
    RET                                 ; 004b5487
    MOV EAX,0x1c726b0                   ; 004b5488
        ;   Label: LAB_004b5488
    ADD EAX,EBX                         ; 004b548d
    PUSH EAX                            ; 004b548f
    CALL core_fire.cpp_CStake_render_FUN_004ace60 ; 004b5490
        ;   XREF to: 004ace60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_004ace60(CStake * this_ptr)
    ADD ESP,0x4                         ; 004b5495
    JMP 0x004b5124                      ; 004b5498
        ;   XREF to: 004b5124 (UNCONDITIONAL_JUMP)  ; LAB_004b5124

