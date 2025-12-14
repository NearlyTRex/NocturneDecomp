; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_render_FUN_004c7180(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a375
;   core_set.cpp_CDemonSet_FUN_0056be80 at 0056c072
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c511
;   core_set.cpp_CDemonSet_FUN_0056c990 at 0056cb86
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   CSmokeParticle[2048] g_SmokeParticlePool
;   undefined4 DAT_02d14218
;   int g_BulletHoleActiveCount
;   CBulletHole[256] g_BulletHolePool
;   undefined4 DAT_02d2a204
;   undefined4 DAT_02d2a230
;   undefined4 DAT_02d2a240
;   int g_StakeActiveCount
;   CStake[256] g_StakePool
;   undefined4 DAT_02d2e05c
;   CSpark[256] g_SparkPool
;   undefined4 DAT_02d53e18
;   ... and 71 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
;   core_fire.cpp_CBulletHole_render_FUN_004bfac0
;   core_fire.cpp_CBulletTrail_render_FUN_004c21f0
;   core_fire.cpp_CExplosion_render_FUN_004c3b10
;   core_fire.cpp_CFireball_initRender_FUN_004c0d80
;   core_fire.cpp_CGunFlame_render_FUN_004c50b0
;   core_fire.cpp_CLaserBeam_render_FUN_004c25c0
;   core_fire.cpp_CLightningBolt_render_FUN_004c5720
;   core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
;   core_fire.cpp_CSmokeParticle_initRender_FUN_004bf1f0
;   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
;   core_fire.cpp_CSpark_initRender_FUN_004c0300
;   core_fire.cpp_CStake_render_FUN_004c0140
;   core_fire.cpp_CToss_render_FUN_004c4160
;   core_fire.cpp_CTrail_render_FUN_004c5e90
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7180
        ;   Label: core_fire.cpp_CFireEffect_render_FUN_004c7180
    PUSH ESI                            ; 004c7181
    PUSH EDI                            ; 004c7182
    PUSH EBP                            ; 004c7183
    MOV EBP,ESP                         ; 004c7184
    AND ESP,0xfffffff8                  ; 004c7186
    MOV EDX,dword ptr [0x02d2ddf4]      ; 004c7189 | g_StakeActiveCount
    XOR ESI,ESI                         ; 004c718f
    TEST EDX,EDX                        ; 004c7191
    JLE 0x004c71b5                      ; 004c7193
        ;   XREF to: 004c71b5 (CONDITIONAL_JUMP)  ; LAB_004c71b5
    XOR EBX,EBX                         ; 004c7195
    CMP dword ptr [EBX + 0x2d2ddfc],0x0 ; 004c7197 | g_StakePool | DAT_02d2e05c
        ;   Label: LAB_004c7197
    JZ 0x004c7483                       ; 004c719e
        ;   XREF to: 004c7483 (CONDITIONAL_JUMP)  ; LAB_004c7483
    MOV ECX,dword ptr [0x02d2ddf4]      ; 004c71a4 | g_StakeActiveCount
        ;   Label: LAB_004c71a4
    INC ESI                             ; 004c71aa
    ADD EBX,0x260                       ; 004c71ab
    CMP ESI,ECX                         ; 004c71b1
    JL 0x004c7197                       ; 004c71b3
        ;   XREF to: 004c7197 (CONDITIONAL_JUMP)  ; LAB_004c7197
    MOV EBX,0x2d655ac                   ; 004c71b5 | g_RockPool
        ;   Label: LAB_004c71b5
    LEA ESI,[EBX + 0x1200]              ; 004c71ba | g_CFireEffectRocksEnd
    FLD float ptr [EBX + 0x18]          ; 004c71c0 | DAT_02d655c4 | DAT_02d6560c
        ;   Label: LAB_004c71c0
    FLDZ                                ; 004c71c3
    FCOMPP                              ; 004c71c5
    FNSTSW AX                           ; 004c71c7
    SAHF                                ; 004c71c9
    JNC 0x004c71d6                      ; 004c71ca
        ;   XREF to: 004c71d6 (CONDITIONAL_JUMP)  ; LAB_004c71d6
    PUSH EBX                            ; 004c71cc | g_RockPool | DAT_02d655f4
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c71cd | DAT_02d655e0 | DAT_02d65628
    CALL dword ptr [EAX + 0x8]          ; 004c71d0
    ADD ESP,0x4                         ; 004c71d3
    ADD EBX,0x48                        ; 004c71d6
        ;   Label: LAB_004c71d6
    CMP EBX,ESI                         ; 004c71d9
    JNZ 0x004c71c0                      ; 004c71db
        ;   XREF to: 004c71c0 (CONDITIONAL_JUMP)  ; LAB_004c71c0
    PUSH 0x2d62ea8                      ; 004c71dd | g_FireballPool
    MOV EBX,0x2d62ea8                   ; 004c71e2 | g_FireballPool
    CALL core_fire.cpp_CFireball_initRender_FUN_004c0d80 ; 004c71e7
        ;   XREF to: 004c0d80 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireball_initRender_FUN_004c0d80(CFireball * this_ptr)
    ADD ESP,0x4                         ; 004c71ec
    LEA ESI,[EBX + 0x2700]              ; 004c71ef | g_CFireEffectFireballsEnd
    FLD float ptr [EBX + 0x18]          ; 004c71f5 | DAT_02d62ec0 | DAT_02d62f5c
        ;   Label: LAB_004c71f5
    FLDZ                                ; 004c71f8
    FCOMPP                              ; 004c71fa
    FNSTSW AX                           ; 004c71fc
    SAHF                                ; 004c71fe
    JNC 0x004c720b                      ; 004c71ff
        ;   XREF to: 004c720b (CONDITIONAL_JUMP)  ; LAB_004c720b
    PUSH EBX                            ; 004c7201 | g_FireballPool | DAT_02d62f44
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7202 | DAT_02d62edc | DAT_02d62f78
    CALL dword ptr [EAX + 0x8]          ; 004c7205
    ADD ESP,0x4                         ; 004c7208
    ADD EBX,0x9c                        ; 004c720b
        ;   Label: LAB_004c720b
    CMP EBX,ESI                         ; 004c7211
    JNZ 0x004c71f5                      ; 004c7213
        ;   XREF to: 004c71f5 (CONDITIONAL_JUMP)  ; LAB_004c71f5
    MOV EBX,0x2d7258c                   ; 004c7215 | g_ShellPool
    LEA ESI,[EBX + 0x1130]              ; 004c721a | g_CFireEffectShellsEnd
    PUSH EBX                            ; 004c7220 | g_ShellPool | DAT_02d725e4
        ;   Label: LAB_004c7220
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7221 | DAT_02d725c0 | DAT_02d72618
    CALL dword ptr [EAX + 0x8]          ; 004c7224
    ADD EBX,0x58                        ; 004c7227 | DAT_02d725e4
    ADD ESP,0x4                         ; 004c722a
    CMP EBX,ESI                         ; 004c722d
    JNZ 0x004c7220                      ; 004c722f
        ;   XREF to: 004c7220 (CONDITIONAL_JUMP)  ; LAB_004c7220
    MOV EAX,[0x006703ec]                ; 004c7231 | g_CDemonRendererInstance | g_CDemonRendererPtr
    PUSH EAX                            ; 004c7236 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004c7237
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c723c
    TEST EAX,EAX                        ; 004c723f
    JNZ 0x004c747c                      ; 004c7241
        ;   XREF to: 004c747c (CONDITIONAL_JUMP)  ; LAB_004c747c
    PUSH EAX                            ; 004c7247
    PUSH EAX                            ; 004c7248
    PUSH EAX                            ; 004c7249
    PUSH EAX                            ; 004c724a
    PUSH EAX                            ; 004c724b
    MOV EDX,dword ptr [0x006810c8]      ; 004c724c | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004c7252 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_FUN_0056d380 ; 004c7253
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
    ADD ESP,0x18                        ; 004c7258
    PUSH 0x2d2a1f4                      ; 004c725b | g_BulletHolePool
    XOR ESI,ESI                         ; 004c7260
    CALL core_fire.cpp_CBulletHole_initRender_FUN_004bfa40 ; 004c7262
        ;   XREF to: 004bfa40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_initRender_FUN_004bfa40(CBulletHole * this_ptr)
    MOV ECX,dword ptr [0x02d2a1ec]      ; 004c7267 | g_BulletHoleActiveCount
    ADD ESP,0x4                         ; 004c726d
    TEST ECX,ECX                        ; 004c7270
    JLE 0x004c729d                      ; 004c7272
        ;   XREF to: 004c729d (CONDITIONAL_JUMP)  ; LAB_004c729d
    XOR EBX,EBX                         ; 004c7274
    CMP dword ptr [EBX + 0x2d2a204],0x0 ; 004c7276 | DAT_02d2a204 | DAT_02d2a240
        ;   Label: LAB_004c7276
    JZ 0x004c728f                       ; 004c727d
        ;   XREF to: 004c728f (CONDITIONAL_JUMP)  ; LAB_004c728f
    MOV EAX,0x2d2a1f4                   ; 004c727f | g_BulletHolePool
    ADD EAX,EBX                         ; 004c7284 | g_BulletHolePool | DAT_02d2a230
    PUSH EAX                            ; 004c7286 | g_BulletHolePool | DAT_02d2a230
    CALL core_fire.cpp_CBulletHole_render_FUN_004bfac0 ; 004c7287
        ;   XREF to: 004bfac0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_004bfac0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004c728c
    MOV EDI,dword ptr [0x02d2a1ec]      ; 004c728f | g_BulletHoleActiveCount
        ;   Label: LAB_004c728f
    INC ESI                             ; 004c7295
    ADD EBX,0x3c                        ; 004c7296
    CMP ESI,EDI                         ; 004c7299
    JL 0x004c7276                       ; 004c729b
        ;   XREF to: 004c7276 (CONDITIONAL_JUMP)  ; LAB_004c7276
    PUSH 0x2d141ec                      ; 004c729d | g_SmokeParticlePool
        ;   Label: LAB_004c729d
    MOV EBX,0x2d141ec                   ; 004c72a2 | g_SmokeParticlePool
    CALL core_fire.cpp_CSmokeParticle_initRender_FUN_004bf1f0 ; 004c72a7
        ;   XREF to: 004bf1f0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CSmokeParticle_initRender_FUN_004bf1f0(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 004c72ac
    LEA ESI,[EBX + 0x16000]             ; 004c72af | g_BulletHoleActiveCount
    MOV EAX,dword ptr [EBX]             ; 004c72b5 | g_SmokeParticlePool | DAT_02d14218
        ;   Label: LAB_004c72b5
    TEST EAX,EAX                        ; 004c72b7
    JZ 0x004c72c4                       ; 004c72b9
        ;   XREF to: 004c72c4 (CONDITIONAL_JUMP)  ; LAB_004c72c4
    PUSH EBX                            ; 004c72bb | g_SmokeParticlePool | DAT_02d14218
    CALL core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 ; 004c72bc
        ;   XREF to: 004bf4c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle * this_ptr)
    ADD ESP,0x4                         ; 004c72c1
    ADD EBX,0x2c                        ; 004c72c4 | DAT_02d14218
        ;   Label: LAB_004c72c4
    CMP EBX,ESI                         ; 004c72c7
    JNZ 0x004c72b5                      ; 004c72c9
        ;   XREF to: 004c72b5 (CONDITIONAL_JUMP)  ; LAB_004c72b5
    MOV EBX,0x2d58a04                   ; 004c72cb | g_MuzzleFlashPool
    LEA ESI,[EBX + 0x730]               ; 004c72d0 | g_GlassParticleNextIndex
    MOV EAX,dword ptr [EBX]             ; 004c72d6 | g_MuzzleFlashPool | DAT_02d58a60
        ;   Label: LAB_004c72d6
    TEST EAX,EAX                        ; 004c72d8
    JZ 0x004c72e5                       ; 004c72da
        ;   XREF to: 004c72e5 (CONDITIONAL_JUMP)  ; LAB_004c72e5
    PUSH EBX                            ; 004c72dc | g_MuzzleFlashPool | DAT_02d58a60
    CALL core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30 ; 004c72dd
        ;   XREF to: 004c1a30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash * this_ptr)
    ADD ESP,0x4                         ; 004c72e2
    ADD EBX,0x5c                        ; 004c72e5 | DAT_02d58a60
        ;   Label: LAB_004c72e5
    CMP EBX,ESI                         ; 004c72e8
    JNZ 0x004c72d6                      ; 004c72ea
        ;   XREF to: 004c72d6 (CONDITIONAL_JUMP)  ; LAB_004c72d6
    MOV EDX,dword ptr [0x02d667ac]      ; 004c72ec | g_CFireEffectRocksEnd
    XOR EBX,ESI                         ; 004c72f2
    TEST EDX,EDX                        ; 004c72f4
    JLE 0x004c7320                      ; 004c72f6
        ;   XREF to: 004c7320 (CONDITIONAL_JUMP)  ; LAB_004c7320
    MOV ESI,0x2d667b0                   ; 004c72f8 | g_LaserBeamPool
    PUSH ESI                            ; 004c72fd | g_LaserBeamPool | DAT_02d667f0
        ;   Label: LAB_004c72fd
    CALL core_fire.cpp_CLaserBeam_render_FUN_004c25c0 ; 004c72fe
        ;   XREF to: 004c25c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLaserBeam_render_FUN_004c25c0(CLaserBeam * this_ptr)
    INC EBX                             ; 004c7303
    MOV ECX,dword ptr [0x02d667ac]      ; 004c7304 | g_CFireEffectRocksEnd
    ADD ESP,0x4                         ; 004c730a
    ADD ESI,0x40                        ; 004c730d
    CMP EBX,ECX                         ; 004c7310
    JL 0x004c72fd                       ; 004c7312
        ;   XREF to: 004c72fd (CONDITIONAL_JUMP)  ; LAB_004c72fd
    LEA EAX,[EAX]                       ; 004c7314
    LEA EDX,[EDX]                       ; 004c731a
    PUSH 0x2d53e00                      ; 004c7320 | g_SparkPool
        ;   Label: LAB_004c7320
    MOV EBX,0x2d53e00                   ; 004c7325 | g_SparkPool
    CALL core_fire.cpp_CSpark_initRender_FUN_004c0300 ; 004c732a
        ;   XREF to: 004c0300 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CSpark_initRender_FUN_004c0300(CSpark * this_ptr)
    ADD ESP,0x4                         ; 004c732f
    LEA ESI,[EBX + 0x4c00]              ; 004c7332 | g_SparkActiveCount
    FLD float ptr [EBX + 0x18]          ; 004c7338 | DAT_02d53e18 | DAT_02d53e64
        ;   Label: LAB_004c7338
    FLDZ                                ; 004c733b
    FCOMPP                              ; 004c733d
    FNSTSW AX                           ; 004c733f
    SAHF                                ; 004c7341
    JNC 0x004c734e                      ; 004c7342
        ;   XREF to: 004c734e (CONDITIONAL_JUMP)  ; LAB_004c734e
    PUSH EBX                            ; 004c7344 | g_SparkPool | DAT_02d53e4c
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7345 | DAT_02d53e34 | DAT_02d53e80
    CALL dword ptr [EAX + 0x8]          ; 004c7348
    ADD ESP,0x4                         ; 004c734b
    ADD EBX,0x4c                        ; 004c734e
        ;   Label: LAB_004c734e
    CMP EBX,ESI                         ; 004c7351
    JNZ 0x004c7338                      ; 004c7353
        ;   XREF to: 004c7338 (CONDITIONAL_JUMP)  ; LAB_004c7338
    MOV EBX,0x2d59138                   ; 004c7355 | g_GlassParticlePool
    LEA ESI,[EBX + 0x9c00]              ; 004c735a | g_CFireEffectGlassParticlesEnd
    FLD float ptr [EBX + 0x18]          ; 004c7360 | DAT_02d59150 | DAT_02d591ec
        ;   Label: LAB_004c7360
    FLDZ                                ; 004c7363
    FCOMPP                              ; 004c7365
    FNSTSW AX                           ; 004c7367
    SAHF                                ; 004c7369
    JNC 0x004c7376                      ; 004c736a
        ;   XREF to: 004c7376 (CONDITIONAL_JUMP)  ; LAB_004c7376
    PUSH EBX                            ; 004c736c | g_GlassParticlePool | DAT_02d591d4
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c736d | DAT_02d5916c | DAT_02d59208
    CALL dword ptr [EAX + 0x8]          ; 004c7370
    ADD ESP,0x4                         ; 004c7373
    ADD EBX,0x9c                        ; 004c7376
        ;   Label: LAB_004c7376
    CMP EBX,ESI                         ; 004c737c
    JNZ 0x004c7360                      ; 004c737e
        ;   XREF to: 004c7360 (CONDITIONAL_JUMP)  ; LAB_004c7360
    MOV EBX,0x2d62d3c                   ; 004c7380 | g_BulletTrailPool
    LEA ESI,[EBX + 0x168]               ; 004c7385 | g_BulletTrailActiveListHead
    MOV EAX,dword ptr [EBX + 0x20]      ; 004c738b | DAT_02d62d5c | DAT_02d62d80
        ;   Label: LAB_004c738b
    TEST EAX,EAX                        ; 004c738e
    JZ 0x004c739b                       ; 004c7390
        ;   XREF to: 004c739b (CONDITIONAL_JUMP)  ; LAB_004c739b
    PUSH EBX                            ; 004c7392 | g_BulletTrailPool | DAT_02d62d60
    CALL core_fire.cpp_CBulletTrail_render_FUN_004c21f0 ; 004c7393
        ;   XREF to: 004c21f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletTrail_render_FUN_004c21f0(CBulletTrail * this_ptr)
    ADD ESP,0x4                         ; 004c7398
    ADD EBX,0x24                        ; 004c739b | DAT_02d62d60
        ;   Label: LAB_004c739b
    CMP EBX,ESI                         ; 004c739e
    JNZ 0x004c738b                      ; 004c73a0
        ;   XREF to: 004c738b (CONDITIONAL_JUMP)  ; LAB_004c738b
    MOV EBX,0x2d677b4                   ; 004c73a2 | g_ExplosionPool
    LEA ESI,[EBX + 0x118]               ; 004c73a7 | g_ExplosionActiveListHead
    PUSH EBX                            ; 004c73ad | g_ExplosionPool | DAT_02d677d0
        ;   Label: LAB_004c73ad
    CALL core_fire.cpp_CExplosion_render_FUN_004c3b10 ; 004c73ae
        ;   XREF to: 004c3b10 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CExplosion_render_FUN_004c3b10(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 004c73b3 | DAT_02d677d0
    ADD ESP,0x4                         ; 004c73b6
    CMP EBX,ESI                         ; 004c73b9
    JNZ 0x004c73ad                      ; 004c73bb
        ;   XREF to: 004c73ad (CONDITIONAL_JUMP)  ; LAB_004c73ad
    MOV EBX,0x2d678d0                   ; 004c73bd | g_TossPool
    LEA ESI,[EBX + 0x4dd0]              ; 004c73c2 | g_TossActiveListHead
    PUSH EBX                            ; 004c73c8 | g_TossPool | DAT_02d67cb4
        ;   Label: LAB_004c73c8
    CALL core_fire.cpp_CToss_render_FUN_004c4160 ; 004c73c9
        ;   XREF to: 004c4160 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_render_FUN_004c4160(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 004c73ce | DAT_02d67cb4
    ADD ESP,0x4                         ; 004c73d4
    CMP EBX,ESI                         ; 004c73d7
    JNZ 0x004c73c8                      ; 004c73d9
        ;   XREF to: 004c73c8 (CONDITIONAL_JUMP)  ; LAB_004c73c8
    MOV EBX,0x2d6cf68                   ; 004c73db | g_GunFlamePool
    LEA ESI,[EBX + 0x4650]              ; 004c73e0 | g_GunFlameActiveListHead
    PUSH EBX                            ; 004c73e6 | g_GunFlamePool | DAT_02d6cf8c
        ;   Label: LAB_004c73e6
    CALL core_fire.cpp_CGunFlame_render_FUN_004c50b0 ; 004c73e7
        ;   XREF to: 004c50b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_render_FUN_004c50b0(CGunFlame * this_ptr)
    ADD EBX,0x24                        ; 004c73ec | DAT_02d6cf8c
    ADD ESP,0x4                         ; 004c73ef
    CMP EBX,ESI                         ; 004c73f2
    JNZ 0x004c73e6                      ; 004c73f4
        ;   XREF to: 004c73e6 (CONDITIONAL_JUMP)  ; LAB_004c73e6
    MOV EBX,0x2d715bc                   ; 004c73f6 | g_LightningBoltPool
    LEA ESI,[EBX + 0x1b8]               ; 004c73fb | g_LightningBoltActiveListHead
    PUSH EBX                            ; 004c7401 | g_LightningBoltPool | DAT_02d715e8
        ;   Label: LAB_004c7401
    CALL core_fire.cpp_CLightningBolt_render_FUN_004c5720 ; 004c7402
        ;   XREF to: 004c5720 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_render_FUN_004c5720(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 004c7407 | DAT_02d715e8
    ADD ESP,0x4                         ; 004c740a
    CMP EBX,ESI                         ; 004c740d
    JNZ 0x004c7401                      ; 004c740f
        ;   XREF to: 004c7401 (CONDITIONAL_JUMP)  ; LAB_004c7401
    MOV EBX,0x2d71778                   ; 004c7411 | g_TrailPool
    LEA ESI,[EBX + 0xe10]               ; 004c7416 | g_TrailActiveListHead
    PUSH EBX                            ; 004c741c | g_TrailPool | DAT_02d7179c
        ;   Label: LAB_004c741c
    CALL core_fire.cpp_CTrail_render_FUN_004c5e90 ; 004c741d
        ;   XREF to: 004c5e90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_render_FUN_004c5e90(CTrail * this_ptr)
    ADD EBX,0x24                        ; 004c7422 | DAT_02d7179c
    ADD ESP,0x4                         ; 004c7425
    CMP EBX,ESI                         ; 004c7428
    JNZ 0x004c741c                      ; 004c742a
        ;   XREF to: 004c741c (CONDITIONAL_JUMP)  ; LAB_004c741c
    MOV EBX,0x2d736c0                   ; 004c742c | g_PopcornPool
    LEA ESI,[EBX + 0x3800]              ; 004c7431 | g_CFireEffectPopcornsEnd
    FLD float ptr [EBX + 0x18]          ; 004c7437 | DAT_02d736d8 | DAT_02d73710
        ;   Label: LAB_004c7437
    FLDZ                                ; 004c743a
    FCOMPP                              ; 004c743c
    FNSTSW AX                           ; 004c743e
    SAHF                                ; 004c7440
    JNC 0x004c744d                      ; 004c7441
        ;   XREF to: 004c744d (CONDITIONAL_JUMP)  ; LAB_004c744d
    PUSH EBX                            ; 004c7443 | g_PopcornPool | DAT_02d736f8
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c7444 | DAT_02d736f4 | DAT_02d7372c
    CALL dword ptr [EAX + 0x8]          ; 004c7447
    ADD ESP,0x4                         ; 004c744a
    ADD EBX,0x38                        ; 004c744d
        ;   Label: LAB_004c744d
    CMP EBX,ESI                         ; 004c7450
    JNZ 0x004c7437                      ; 004c7452
        ;   XREF to: 004c7437 (CONDITIONAL_JUMP)  ; LAB_004c7437
    MOV EBX,0x2d76ec4                   ; 004c7454 | g_RainDropPool
    LEA ESI,[EBX + 0x3800]              ; 004c7459 | g_CFlameClassInfo
    FLD float ptr [EBX + 0x18]          ; 004c745f | DAT_02d76edc | DAT_02d76f14
        ;   Label: LAB_004c745f
    FLDZ                                ; 004c7462
    FCOMPP                              ; 004c7464
    FNSTSW AX                           ; 004c7466
    SAHF                                ; 004c7468
    JNC 0x004c7475                      ; 004c7469
        ;   XREF to: 004c7475 (CONDITIONAL_JUMP)  ; LAB_004c7475
    PUSH EBX                            ; 004c746b | g_RainDropPool | DAT_02d76efc
    MOV EAX,dword ptr [EBX + 0x34]      ; 004c746c | DAT_02d76ef8 | DAT_02d76f30
    CALL dword ptr [EAX + 0x8]          ; 004c746f
    ADD ESP,0x4                         ; 004c7472
    ADD EBX,0x38                        ; 004c7475
        ;   Label: LAB_004c7475
    CMP EBX,ESI                         ; 004c7478
    JNZ 0x004c745f                      ; 004c747a
        ;   XREF to: 004c745f (CONDITIONAL_JUMP)  ; LAB_004c745f
    MOV ESP,EBP                         ; 004c747c
        ;   Label: LAB_004c747c
    POP EBP                             ; 004c747e
    POP EDI                             ; 004c747f
    POP ESI                             ; 004c7480
    POP EBX                             ; 004c7481
    RET                                 ; 004c7482
    MOV EAX,0x2d2ddfc                   ; 004c7483 | g_StakePool
        ;   Label: LAB_004c7483
    ADD EAX,EBX                         ; 004c7488 | DAT_02d2e05c
    PUSH EAX                            ; 004c748a | DAT_02d2e05c
    CALL core_fire.cpp_CStake_render_FUN_004c0140 ; 004c748b
        ;   XREF to: 004c0140 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_004c0140(CStake * this_ptr)
    ADD ESP,0x4                         ; 004c7490
    JMP 0x004c71a4                      ; 004c7493
        ;   XREF to: 004c71a4 (UNCONDITIONAL_JUMP)  ; LAB_004c71a4

