; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_init_FUN_004c6c80(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_fire.cpp_CFireEffect_ctor_FUN_004c6c60 at 004c6c66
;   core_fire.cpp_CFireEffect_load_FUN_004c9300 at 004c9321
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e1a75
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db5ae
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e329
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 005392bc
;
; Referenced Globals:
;   int g_SmokeParticleAllocIndex
;   CSmokeParticle[2048] g_SmokeParticlePool
;   undefined4 DAT_02d14218
;   int g_BulletHoleActiveCount
;   int g_BulletHoleAllocIndex
;   int g_StakeActiveCount
;   int g_StakeAllocIndex
;   CStake* g_StakeActiveListHead
;   CSpark[256] g_SparkPool
;   undefined4 DAT_02d53e18
;   undefined4 DAT_02d53e64
;   int g_SparkActiveCount
;   CMuzzleFlash[20] g_MuzzleFlashPool
;   undefined4 DAT_02d58a60
;   int g_GlassParticleNextIndex
;   ... and 49 more
;
; Called Functions:
;   core_fire.cpp_CCrater_ctor_FUN_004c41e0
;   core_fire.cpp_CExplosion_ctor_FUN_004c38c0
;   core_fire.cpp_CGunFlame_ctor_FUN_004c4da0
;   core_fire.cpp_CLightningBolt_ctor_FUN_004c5630
;   core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0
;   core_fire.cpp_CToss_init_FUN_004c3ed0
;   core_fire.cpp_CTrail_ctor_FUN_004c5de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6c80
        ;   Label: core_fire.cpp_CFireEffect_init_FUN_004c6c80
    PUSH ESI                            ; 004c6c81
    PUSH EBP                            ; 004c6c82
    MOV EBX,0x2d141ec                   ; 004c6c83 | CSmokeParticle[2048] g_SmokeParticlePool
    XOR EDX,EDX                         ; 004c6c88
    LEA ESI,[EBX + 0x16000]             ; 004c6c8a | int g_BulletHoleActiveCount
    MOV dword ptr [0x02d141e8],EDX      ; 004c6c90 | int g_SmokeParticleAllocIndex
    PUSH EBX                            ; 004c6c96 | CSmokeParticle[2048] g_SmokeParticlePool
        ;   Label: LAB_004c6c96
    CALL core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0 ; 004c6c97 | void core_fire.cpp_CSmokeParticle_ctor_FUN_004bf2e0(CSmokeParticle * this_ptr)
        ;   XREF to: 004bf2e0 (UNCONDITIONAL_CALL)
    ADD EBX,0x2c                        ; 004c6c9c | DAT_02d14218
    ADD ESP,0x4                         ; 004c6c9f
    CMP EBX,ESI                         ; 004c6ca2
    JNZ 0x004c6c96                      ; 004c6ca4 | LAB_004c6c96
        ;   XREF to: 004c6c96 (CONDITIONAL_JUMP)
    MOV EAX,0x2d53e00                   ; 004c6ca6 | CSpark[256] g_SparkPool
    XOR ECX,ECX                         ; 004c6cab
    XOR EBX,ESI                         ; 004c6cad
    MOV dword ptr [0x02d2a1f0],ECX      ; 004c6caf | int g_BulletHoleAllocIndex
    MOV dword ptr [0x02d2a1ec],EBX      ; 004c6cb5 | int g_BulletHoleActiveCount
    MOV dword ptr [0x02d53dfc],ECX      ; 004c6cbb | CStake * g_StakeActiveListHead
    LEA EBX,[EAX + 0x4c00]              ; 004c6cc1 | int g_SparkActiveCount
    ADD EAX,0x4c                        ; 004c6cc7
        ;   Label: LAB_004c6cc7
    MOV dword ptr [EAX + -0x34],0x0     ; 004c6cca | DAT_02d53e18
    CMP EAX,EBX                         ; 004c6cd1
    JNZ 0x004c6cc7                      ; 004c6cd3 | LAB_004c6cc7
        ;   XREF to: 004c6cc7 (CONDITIONAL_JUMP)
    MOV EAX,0x2d58a04                   ; 004c6cd5 | CMuzzleFlash[20] g_MuzzleFlashPool
    LEA EBX,[EAX + 0x730]               ; 004c6cda | int g_GlassParticleNextIndex
    MOV dword ptr [EAX],0x0             ; 004c6ce0 | CMuzzleFlash[20] g_MuzzleFlashPool
        ;   Label: LAB_004c6ce0
    ADD EAX,0x5c                        ; 004c6ce6
    CMP EAX,EBX                         ; 004c6ce9
    JNZ 0x004c6ce0                      ; 004c6ceb | LAB_004c6ce0
        ;   XREF to: 004c6ce0 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004c6ced
    XOR EDI,EDI                         ; 004c6cee
    XOR EAX,EBX                         ; 004c6cf0
    MOV dword ptr [0x02d2ddf4],EDI      ; 004c6cf2 | int g_StakeActiveCount
    MOV [0x02d59134],EAX                ; 004c6cf8 | int g_GlassParticleNextIndex
    MOV EAX,0x2d59138                   ; 004c6cfd | CGlassParticle[256] g_GlassParticlePool
    MOV dword ptr [0x02d2ddf8],EDI      ; 004c6d02 | int g_StakeAllocIndex
    LEA EBX,[EAX + 0x9c00]              ; 004c6d08 | CGlassParticle * g_CFireEffectGlassParticlesEnd
    ADD EAX,0x9c                        ; 004c6d0e
        ;   Label: LAB_004c6d0e
    MOV dword ptr [EAX + 0xffffff7c],0x0 ; 004c6d13 | DAT_02d59150
    CMP EAX,EBX                         ; 004c6d1d
    JNZ 0x004c6d0e                      ; 004c6d1f | LAB_004c6d0e
        ;   XREF to: 004c6d0e (CONDITIONAL_JUMP)
    MOV EAX,0x2d62d3c                   ; 004c6d21 | CBulletTrail[10] g_BulletTrailPool
    LEA EBX,[EAX + 0x168]               ; 004c6d26 | CBulletTrail * g_BulletTrailActiveListHead
    ADD EAX,0x24                        ; 004c6d2c
        ;   Label: LAB_004c6d2c
    MOV dword ptr [EAX + -0x4],0x0      ; 004c6d2f | DAT_02d62d5c
    CMP EAX,EBX                         ; 004c6d36
    JNZ 0x004c6d2c                      ; 004c6d38 | LAB_004c6d2c
        ;   XREF to: 004c6d2c (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004c6d3a
    MOV EAX,0x2d62ea8                   ; 004c6d3c | CFireball[64] g_FireballPool
    MOV dword ptr [0x02d62ea4],EDX      ; 004c6d41 | CBulletTrail * g_BulletTrailActiveListHead
    LEA EBX,[EAX + 0x2700]              ; 004c6d47 | CFireball * g_CFireEffectFireballsEnd
    ADD EAX,0x9c                        ; 004c6d4d
        ;   Label: LAB_004c6d4d
    MOV dword ptr [EAX + 0xffffff7c],0x0 ; 004c6d52 | DAT_02d62ec0
    CMP EAX,EBX                         ; 004c6d5c
    JNZ 0x004c6d4d                      ; 004c6d5e | LAB_004c6d4d
        ;   XREF to: 004c6d4d (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004c6d60
    MOV EAX,0x2d655ac                   ; 004c6d62 | CRock[64] g_RockPool
    MOV dword ptr [0x02d655a8],ECX      ; 004c6d67 | CFireball * g_CFireEffectFireballsEnd
    LEA EBX,[EAX + 0x1200]              ; 004c6d6d | CRock * g_CFireEffectRocksEnd
    ADD EAX,0x48                        ; 004c6d73 | DAT_02d6563c
        ;   Label: LAB_004c6d73
    MOV dword ptr [EAX + -0x30],0x0     ; 004c6d76 | DAT_02d655c4
    CMP EAX,EBX                         ; 004c6d7d
    JNZ 0x004c6d73                      ; 004c6d7f | LAB_004c6d73
        ;   XREF to: 004c6d73 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004c6d81
    MOV dword ptr [0x02d677b0],EBX      ; 004c6d83 | CLaserBeam * g_LaserBeamActiveListHead
    MOV EBX,0x2d677b4                   ; 004c6d89 | CExplosion[10] g_ExplosionPool
    LEA ESI,[EBX + 0x118]               ; 004c6d8e | CExplosion * g_ExplosionActiveListHead
    PUSH EBX                            ; 004c6d94 | CExplosion[10] g_ExplosionPool
        ;   Label: LAB_004c6d94
    CALL core_fire.cpp_CExplosion_ctor_FUN_004c38c0 ; 004c6d95 | CExplosion * core_fire.cpp_CExplosion_ctor_FUN_004c38c0(CExplosion * this_ptr)
        ;   XREF to: 004c38c0 (UNCONDITIONAL_CALL)
    ADD EBX,0x1c                        ; 004c6d9a | DAT_02d677d0
    ADD ESP,0x4                         ; 004c6d9d
    CMP EBX,ESI                         ; 004c6da0
    JNZ 0x004c6d94                      ; 004c6da2 | LAB_004c6d94
        ;   XREF to: 004c6d94 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 004c6da4
    MOV EBX,0x2d678d0                   ; 004c6da6 | CToss[20] g_TossPool
    MOV dword ptr [0x02d678cc],ESI      ; 004c6dab | CExplosion * g_ExplosionActiveListHead
    LEA ESI,[EBX + 0x4dd0]              ; 004c6db1 | CToss * g_TossActiveListHead
    PUSH EBX                            ; 004c6db7 | CToss[20] g_TossPool
        ;   Label: LAB_004c6db7
    CALL core_fire.cpp_CToss_init_FUN_004c3ed0 ; 004c6db8 | void core_fire.cpp_CToss_init_FUN_004c3ed0(CToss * this_ptr)
        ;   XREF to: 004c3ed0 (UNCONDITIONAL_CALL)
    ADD EBX,0x3e4                       ; 004c6dbd | DAT_02d67cb4
    ADD ESP,0x4                         ; 004c6dc3
    CMP EBX,ESI                         ; 004c6dc6
    JNZ 0x004c6db7                      ; 004c6dc8 | LAB_004c6db7
        ;   XREF to: 004c6db7 (CONDITIONAL_JUMP)
    MOV EBX,0x2d6c6a4                   ; 004c6dca | CCrater[20] g_CraterPool
    XOR EDI,EDI                         ; 004c6dcf
    LEA ESI,[EBX + 0x8c0]               ; 004c6dd1 | CCrater * g_CraterActiveListHead
    MOV dword ptr [0x02d6c6a0],EDI      ; 004c6dd7 | CToss * g_TossActiveListHead
    POP EDI                             ; 004c6ddd
    PUSH EBX                            ; 004c6dde | CCrater[20] g_CraterPool
        ;   Label: LAB_004c6dde
    CALL core_fire.cpp_CCrater_ctor_FUN_004c41e0 ; 004c6ddf | void core_fire.cpp_CCrater_ctor_FUN_004c41e0(CCrater * this_ptr)
        ;   XREF to: 004c41e0 (UNCONDITIONAL_CALL)
    ADD EBX,0x70                        ; 004c6de4 | DAT_02d6c714
    ADD ESP,0x4                         ; 004c6de7
    CMP EBX,ESI                         ; 004c6dea
    JNZ 0x004c6dde                      ; 004c6dec | LAB_004c6dde
        ;   XREF to: 004c6dde (CONDITIONAL_JUMP)
    MOV EBX,0x2d6cf68                   ; 004c6dee | CGunFlame[500] g_GunFlamePool
    XOR EBP,EBP                         ; 004c6df3
    LEA ESI,[EBX + 0x4650]              ; 004c6df5 | CGunFlame * g_GunFlameActiveListHead
    MOV dword ptr [0x02d6cf64],EBP      ; 004c6dfb | CCrater * g_CraterActiveListHead
    PUSH EBX                            ; 004c6e01 | CGunFlame[500] g_GunFlamePool
        ;   Label: LAB_004c6e01
    CALL core_fire.cpp_CGunFlame_ctor_FUN_004c4da0 ; 004c6e02 | void core_fire.cpp_CGunFlame_ctor_FUN_004c4da0(CGunFlame * this_ptr)
        ;   XREF to: 004c4da0 (UNCONDITIONAL_CALL)
    ADD EBX,0x24                        ; 004c6e07 | DAT_02d6cf8c
    ADD ESP,0x4                         ; 004c6e0a
    CMP EBX,ESI                         ; 004c6e0d
    JNZ 0x004c6e01                      ; 004c6e0f | LAB_004c6e01
        ;   XREF to: 004c6e01 (CONDITIONAL_JUMP)
    MOV EBX,0x2d715bc                   ; 004c6e11 | CLightningBolt[10] g_LightningBoltPool
    XOR EAX,EAX                         ; 004c6e16
    LEA ESI,[EBX + 0x1b8]               ; 004c6e18 | CLightningBolt * g_LightningBoltActiveListHead
    MOV [0x02d715b8],EAX                ; 004c6e1e | CGunFlame * g_GunFlameActiveListHead
    PUSH EBX                            ; 004c6e23 | CLightningBolt[10] g_LightningBoltPool
        ;   Label: LAB_004c6e23
    CALL core_fire.cpp_CLightningBolt_ctor_FUN_004c5630 ; 004c6e24 | void core_fire.cpp_CLightningBolt_ctor_FUN_004c5630(CLightningBolt * this_ptr)
        ;   XREF to: 004c5630 (UNCONDITIONAL_CALL)
    ADD EBX,0x2c                        ; 004c6e29 | DAT_02d715e8
    ADD ESP,0x4                         ; 004c6e2c
    CMP EBX,ESI                         ; 004c6e2f
    JNZ 0x004c6e23                      ; 004c6e31 | LAB_004c6e23
        ;   XREF to: 004c6e23 (CONDITIONAL_JUMP)
    MOV EBX,0x2d71778                   ; 004c6e33 | CTrail[100] g_TrailPool
    XOR EDX,EDX                         ; 004c6e38
    LEA ESI,[EBX + 0xe10]               ; 004c6e3a | CTrail * g_TrailActiveListHead
    MOV dword ptr [0x02d71774],EDX      ; 004c6e40 | CLightningBolt * g_LightningBoltActiveListHead
    PUSH EBX                            ; 004c6e46 | CTrail[100] g_TrailPool
        ;   Label: LAB_004c6e46
    CALL core_fire.cpp_CTrail_ctor_FUN_004c5de0 ; 004c6e47 | void core_fire.cpp_CTrail_ctor_FUN_004c5de0(CTrail * this_ptr)
        ;   XREF to: 004c5de0 (UNCONDITIONAL_CALL)
    ADD EBX,0x24                        ; 004c6e4c | DAT_02d7179c
    ADD ESP,0x4                         ; 004c6e4f
    CMP EBX,ESI                         ; 004c6e52
    JNZ 0x004c6e46                      ; 004c6e54 | LAB_004c6e46
        ;   XREF to: 004c6e46 (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 004c6e56
    MOV EAX,0x2d7258c                   ; 004c6e58 | CShell[50] g_ShellPool
    MOV dword ptr [0x02d72588],ECX      ; 004c6e5d | CTrail * g_TrailActiveListHead
    LEA EBX,[EAX + 0x1130]              ; 004c6e63 | CShell * g_CFireEffectShellsEnd
    ADD EAX,0x58                        ; 004c6e69
        ;   Label: LAB_004c6e69
    MOV dword ptr [EAX + -0x40],0x0     ; 004c6e6c | DAT_02d725a4
    CMP EAX,EBX                         ; 004c6e73
    JNZ 0x004c6e69                      ; 004c6e75 | LAB_004c6e69
        ;   XREF to: 004c6e69 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004c6e77
    MOV EAX,0x2d736c0                   ; 004c6e79 | CPopcorn[256] g_PopcornPool
    MOV dword ptr [0x02d736bc],EBX      ; 004c6e7e | CShell * g_CFireEffectShellsEnd
    LEA EBX,[EAX + 0x3800]              ; 004c6e84 | CPopcorn * g_CFireEffectPopcornsEnd
    ADD EAX,0x38                        ; 004c6e8a
        ;   Label: LAB_004c6e8a
    MOV dword ptr [EAX + -0x20],0x0     ; 004c6e8d | DAT_02d736d8
    CMP EAX,EBX                         ; 004c6e94
    JNZ 0x004c6e8a                      ; 004c6e96 | LAB_004c6e8a
        ;   XREF to: 004c6e8a (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 004c6e98
    MOV EAX,0x2d76ec4                   ; 004c6e9a | CRainDrop[256] g_RainDropPool
    MOV dword ptr [0x02d76ec0],ESI      ; 004c6e9f | CPopcorn * g_CFireEffectPopcornsEnd
    LEA EBX,[EAX + 0x3800]              ; 004c6ea5 | CDemonActorType g_CFlameClassInfo
    ADD EAX,0x38                        ; 004c6eab | DAT_02d76f34
        ;   Label: LAB_004c6eab
    MOV dword ptr [EAX + -0x20],0x0     ; 004c6eae | DAT_02d76edc
    CMP EAX,EBX                         ; 004c6eb5
    JNZ 0x004c6eab                      ; 004c6eb7 | LAB_004c6eab
        ;   XREF to: 004c6eab (CONDITIONAL_JUMP)
    POP EBP                             ; 004c6eb9
    POP ESI                             ; 004c6eba
    POP EBX                             ; 004c6ebb
    RET                                 ; 004c6ebc

