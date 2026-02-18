; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_init_FUN_004c6c80(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_fire.cpp_CFireEffect_ctor_FUN_004c6c60 at 004c6c66
;   core_fire.cpp_CFireEffect_load_FUN_004c9300 at 004c9321
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1a75
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db5ae
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e329
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 005392bc
;
; Referenced Globals:
;   int g_SmokeParticleAllocIndex
;   CSmokeParticle[2048] g_SmokeParticlePool
;   undefined4 DAT_02d14218
;   int g_BulletHoleActiveCount
;   int g_BulletHoleAllocIndex
;   int g_StakeActiveCount
;   int g_StakeAllocIndex
;   int g_SparkAllocIndex
;   CSpark[256] g_SparkPool
;   undefined4 DAT_02d53e18
;   undefined4 DAT_02d53e64
;   int g_MuzzleFlashAllocIndex
;   CMuzzleFlash[20] g_MuzzleFlashPool
;   undefined4 DAT_02d58a60
;   int g_GlassParticleAllocIndex
;   ... and 49 more
;
; Called Functions:
;   core_fire.cpp_CCrater_reset_FUN_004c41e0
;   core_fire.cpp_CExplosion_ctor_FUN_004c38c0
;   core_fire.cpp_CGunFlame_reset_FUN_004c4da0
;   core_fire.cpp_CLightningBolt_reset_FUN_004c5630
;   core_fire.cpp_CSmokeParticle_reset_FUN_004bf2e0
;   core_fire.cpp_CToss_reset_FUN_004c3ed0
;   core_fire.cpp_CTrail_reset_FUN_004c5de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6c80
        ;   Label: core_fire.cpp_CFireEffect_init_FUN_004c6c80
    PUSH ESI                            ; 004c6c81
    PUSH EBP                            ; 004c6c82
    MOV EBX,0x2d141ec                   ; 004c6c83 | g_SmokeParticlePool
    XOR EDX,EDX                         ; 004c6c88
    LEA ESI,[EBX + 0x16000]             ; 004c6c8a | g_BulletHoleActiveCount
    MOV dword ptr [0x02d141e8],EDX      ; 004c6c90 | g_SmokeParticleAllocIndex
    PUSH EBX                            ; 004c6c96 | g_SmokeParticlePool | DAT_02d14218
        ;   Label: LAB_004c6c96
    CALL core_fire.cpp_CSmokeParticle_reset_FUN_004bf2e0 ; 004c6c97
        ;   XREF to: 004bf2e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_reset_FUN_004bf2e0(CSmokeParticle * this_ptr)
    ADD EBX,0x2c                        ; 004c6c9c | DAT_02d14218
    ADD ESP,0x4                         ; 004c6c9f
    CMP EBX,ESI                         ; 004c6ca2
    JNZ 0x004c6c96                      ; 004c6ca4
        ;   XREF to: 004c6c96 (CONDITIONAL_JUMP)  ; LAB_004c6c96
    MOV EAX,0x2d53e00                   ; 004c6ca6 | g_SparkPool
    XOR ECX,ECX                         ; 004c6cab
    XOR EBX,ESI                         ; 004c6cad
    MOV dword ptr [0x02d2a1f0],ECX      ; 004c6caf | g_BulletHoleAllocIndex
    MOV dword ptr [0x02d2a1ec],EBX      ; 004c6cb5 | g_BulletHoleActiveCount
    MOV dword ptr [0x02d53dfc],ECX      ; 004c6cbb | g_SparkAllocIndex
    LEA EBX,[EAX + 0x4c00]              ; 004c6cc1 | g_MuzzleFlashAllocIndex
    ADD EAX,0x4c                        ; 004c6cc7
        ;   Label: LAB_004c6cc7
    MOV dword ptr [EAX + -0x34],0x0     ; 004c6cca | DAT_02d53e18 | DAT_02d53e64
    CMP EAX,EBX                         ; 004c6cd1
    JNZ 0x004c6cc7                      ; 004c6cd3
        ;   XREF to: 004c6cc7 (CONDITIONAL_JUMP)  ; LAB_004c6cc7
    MOV EAX,0x2d58a04                   ; 004c6cd5 | g_MuzzleFlashPool
    LEA EBX,[EAX + 0x730]               ; 004c6cda | g_GlassParticleAllocIndex
    MOV dword ptr [EAX],0x0             ; 004c6ce0 | g_MuzzleFlashPool | DAT_02d58a60
        ;   Label: LAB_004c6ce0
    ADD EAX,0x5c                        ; 004c6ce6
    CMP EAX,EBX                         ; 004c6ce9
    JNZ 0x004c6ce0                      ; 004c6ceb
        ;   XREF to: 004c6ce0 (CONDITIONAL_JUMP)  ; LAB_004c6ce0
    PUSH EDI                            ; 004c6ced
    XOR EDI,EDI                         ; 004c6cee
    XOR EAX,EBX                         ; 004c6cf0
    MOV dword ptr [0x02d2ddf4],EDI      ; 004c6cf2 | g_StakeActiveCount
    MOV [0x02d59134],EAX                ; 004c6cf8 | g_GlassParticleAllocIndex
    MOV EAX,0x2d59138                   ; 004c6cfd | g_GlassParticlePool
    MOV dword ptr [0x02d2ddf8],EDI      ; 004c6d02 | g_StakeAllocIndex
    LEA EBX,[EAX + 0x9c00]              ; 004c6d08 | g_BulletTrailAllocIndex
    ADD EAX,0x9c                        ; 004c6d0e
        ;   Label: LAB_004c6d0e
    MOV dword ptr [EAX + 0xffffff7c],0x0 ; 004c6d13 | DAT_02d59150 | DAT_02d591ec
    CMP EAX,EBX                         ; 004c6d1d
    JNZ 0x004c6d0e                      ; 004c6d1f
        ;   XREF to: 004c6d0e (CONDITIONAL_JUMP)  ; LAB_004c6d0e
    MOV EAX,0x2d62d3c                   ; 004c6d21 | g_BulletTrailPool
    LEA EBX,[EAX + 0x168]               ; 004c6d26 | g_FireballAllocIndex
    ADD EAX,0x24                        ; 004c6d2c
        ;   Label: LAB_004c6d2c
    MOV dword ptr [EAX + -0x4],0x0      ; 004c6d2f | DAT_02d62d5c | DAT_02d62d80
    CMP EAX,EBX                         ; 004c6d36
    JNZ 0x004c6d2c                      ; 004c6d38
        ;   XREF to: 004c6d2c (CONDITIONAL_JUMP)  ; LAB_004c6d2c
    XOR EDX,EDX                         ; 004c6d3a
    MOV EAX,0x2d62ea8                   ; 004c6d3c | g_FireballPool
    MOV dword ptr [0x02d62ea4],EDX      ; 004c6d41 | g_FireballAllocIndex
    LEA EBX,[EAX + 0x2700]              ; 004c6d47 | g_RockAllocIndex
    ADD EAX,0x9c                        ; 004c6d4d
        ;   Label: LAB_004c6d4d
    MOV dword ptr [EAX + 0xffffff7c],0x0 ; 004c6d52 | DAT_02d62ec0 | DAT_02d62f5c
    CMP EAX,EBX                         ; 004c6d5c
    JNZ 0x004c6d4d                      ; 004c6d5e
        ;   XREF to: 004c6d4d (CONDITIONAL_JUMP)  ; LAB_004c6d4d
    XOR ECX,ECX                         ; 004c6d60
    MOV EAX,0x2d655ac                   ; 004c6d62 | g_RockPool
    MOV dword ptr [0x02d655a8],ECX      ; 004c6d67 | g_RockAllocIndex
    LEA EBX,[EAX + 0x1200]              ; 004c6d6d | g_LaserBeamActiveCount
    ADD EAX,0x48                        ; 004c6d73 | DAT_02d6563c
        ;   Label: LAB_004c6d73
    MOV dword ptr [EAX + -0x30],0x0     ; 004c6d76 | DAT_02d655c4 | DAT_02d6560c
    CMP EAX,EBX                         ; 004c6d7d
    JNZ 0x004c6d73                      ; 004c6d7f
        ;   XREF to: 004c6d73 (CONDITIONAL_JUMP)  ; LAB_004c6d73
    XOR EBX,EBX                         ; 004c6d81
    MOV dword ptr [0x02d677b0],EBX      ; 004c6d83 | g_ExplosionPoolIndex
    MOV EBX,0x2d677b4                   ; 004c6d89 | g_ExplosionPool
    LEA ESI,[EBX + 0x118]               ; 004c6d8e | g_TossAllocIndex
    PUSH EBX                            ; 004c6d94 | g_ExplosionPool | DAT_02d677d0
        ;   Label: LAB_004c6d94
    CALL core_fire.cpp_CExplosion_ctor_FUN_004c38c0 ; 004c6d95
        ;   XREF to: 004c38c0 (UNCONDITIONAL_CALL)  ; CExplosion * core_fire.cpp_CExplosion_ctor_FUN_004c38c0(CExplosion * this_ptr)
    ADD EBX,0x1c                        ; 004c6d9a | DAT_02d677d0
    ADD ESP,0x4                         ; 004c6d9d
    CMP EBX,ESI                         ; 004c6da0
    JNZ 0x004c6d94                      ; 004c6da2
        ;   XREF to: 004c6d94 (CONDITIONAL_JUMP)  ; LAB_004c6d94
    XOR ESI,ESI                         ; 004c6da4
    MOV EBX,0x2d678d0                   ; 004c6da6 | g_TossPool
    MOV dword ptr [0x02d678cc],ESI      ; 004c6dab | g_TossAllocIndex
    LEA ESI,[EBX + 0x4dd0]              ; 004c6db1 | g_CraterAllocIndex
    PUSH EBX                            ; 004c6db7 | g_TossPool | DAT_02d67cb4
        ;   Label: LAB_004c6db7
    CALL core_fire.cpp_CToss_reset_FUN_004c3ed0 ; 004c6db8
        ;   XREF to: 004c3ed0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CToss_reset_FUN_004c3ed0(CToss * this_ptr)
    ADD EBX,0x3e4                       ; 004c6dbd | DAT_02d67cb4
    ADD ESP,0x4                         ; 004c6dc3
    CMP EBX,ESI                         ; 004c6dc6
    JNZ 0x004c6db7                      ; 004c6dc8
        ;   XREF to: 004c6db7 (CONDITIONAL_JUMP)  ; LAB_004c6db7
    MOV EBX,0x2d6c6a4                   ; 004c6dca | g_CraterPool
    XOR EDI,EDI                         ; 004c6dcf
    LEA ESI,[EBX + 0x8c0]               ; 004c6dd1 | g_GunFlameAllocIndex
    MOV dword ptr [0x02d6c6a0],EDI      ; 004c6dd7 | g_CraterAllocIndex
    POP EDI                             ; 004c6ddd
    PUSH EBX                            ; 004c6dde | g_CraterPool | DAT_02d6c714
        ;   Label: LAB_004c6dde
    CALL core_fire.cpp_CCrater_reset_FUN_004c41e0 ; 004c6ddf
        ;   XREF to: 004c41e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_reset_FUN_004c41e0(CCrater * this_ptr)
    ADD EBX,0x70                        ; 004c6de4 | DAT_02d6c714
    ADD ESP,0x4                         ; 004c6de7
    CMP EBX,ESI                         ; 004c6dea
    JNZ 0x004c6dde                      ; 004c6dec
        ;   XREF to: 004c6dde (CONDITIONAL_JUMP)  ; LAB_004c6dde
    MOV EBX,0x2d6cf68                   ; 004c6dee | g_GunFlamePool
    XOR EBP,EBP                         ; 004c6df3
    LEA ESI,[EBX + 0x4650]              ; 004c6df5 | g_LightningBoltAllocIndex
    MOV dword ptr [0x02d6cf64],EBP      ; 004c6dfb | g_GunFlameAllocIndex
    PUSH EBX                            ; 004c6e01 | g_GunFlamePool | DAT_02d6cf8c
        ;   Label: LAB_004c6e01
    CALL core_fire.cpp_CGunFlame_reset_FUN_004c4da0 ; 004c6e02
        ;   XREF to: 004c4da0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CGunFlame_reset_FUN_004c4da0(CGunFlame * this_ptr)
    ADD EBX,0x24                        ; 004c6e07 | DAT_02d6cf8c
    ADD ESP,0x4                         ; 004c6e0a
    CMP EBX,ESI                         ; 004c6e0d
    JNZ 0x004c6e01                      ; 004c6e0f
        ;   XREF to: 004c6e01 (CONDITIONAL_JUMP)  ; LAB_004c6e01
    MOV EBX,0x2d715bc                   ; 004c6e11 | g_LightningBoltPool
    XOR EAX,EAX                         ; 004c6e16
    LEA ESI,[EBX + 0x1b8]               ; 004c6e18 | g_TrailAllocIndex
    MOV [0x02d715b8],EAX                ; 004c6e1e | g_LightningBoltAllocIndex
    PUSH EBX                            ; 004c6e23 | g_LightningBoltPool | DAT_02d715e8
        ;   Label: LAB_004c6e23
    CALL core_fire.cpp_CLightningBolt_reset_FUN_004c5630 ; 004c6e24
        ;   XREF to: 004c5630 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_reset_FUN_004c5630(CLightningBolt * this_ptr)
    ADD EBX,0x2c                        ; 004c6e29 | DAT_02d715e8
    ADD ESP,0x4                         ; 004c6e2c
    CMP EBX,ESI                         ; 004c6e2f
    JNZ 0x004c6e23                      ; 004c6e31
        ;   XREF to: 004c6e23 (CONDITIONAL_JUMP)  ; LAB_004c6e23
    MOV EBX,0x2d71778                   ; 004c6e33 | g_TrailPool
    XOR EDX,EDX                         ; 004c6e38
    LEA ESI,[EBX + 0xe10]               ; 004c6e3a | g_ShellAllocIndex
    MOV dword ptr [0x02d71774],EDX      ; 004c6e40 | g_TrailAllocIndex
    PUSH EBX                            ; 004c6e46 | g_TrailPool | DAT_02d7179c
        ;   Label: LAB_004c6e46
    CALL core_fire.cpp_CTrail_reset_FUN_004c5de0 ; 004c6e47
        ;   XREF to: 004c5de0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CTrail_reset_FUN_004c5de0(CTrail * this_ptr)
    ADD EBX,0x24                        ; 004c6e4c | DAT_02d7179c
    ADD ESP,0x4                         ; 004c6e4f
    CMP EBX,ESI                         ; 004c6e52
    JNZ 0x004c6e46                      ; 004c6e54
        ;   XREF to: 004c6e46 (CONDITIONAL_JUMP)  ; LAB_004c6e46
    XOR ECX,ECX                         ; 004c6e56
    MOV EAX,0x2d7258c                   ; 004c6e58 | g_ShellPool
    MOV dword ptr [0x02d72588],ECX      ; 004c6e5d | g_ShellAllocIndex
    LEA EBX,[EAX + 0x1130]              ; 004c6e63 | g_PopcornAllocIndex
    ADD EAX,0x58                        ; 004c6e69
        ;   Label: LAB_004c6e69
    MOV dword ptr [EAX + -0x40],0x0     ; 004c6e6c | DAT_02d725a4 | DAT_02d725fc
    CMP EAX,EBX                         ; 004c6e73
    JNZ 0x004c6e69                      ; 004c6e75
        ;   XREF to: 004c6e69 (CONDITIONAL_JUMP)  ; LAB_004c6e69
    XOR EBX,EBX                         ; 004c6e77
    MOV EAX,0x2d736c0                   ; 004c6e79 | g_PopcornPool
    MOV dword ptr [0x02d736bc],EBX      ; 004c6e7e | g_PopcornAllocIndex
    LEA EBX,[EAX + 0x3800]              ; 004c6e84 | g_RainDropAllocIndex
    ADD EAX,0x38                        ; 004c6e8a
        ;   Label: LAB_004c6e8a
    MOV dword ptr [EAX + -0x20],0x0     ; 004c6e8d | DAT_02d736d8 | DAT_02d73710
    CMP EAX,EBX                         ; 004c6e94
    JNZ 0x004c6e8a                      ; 004c6e96
        ;   XREF to: 004c6e8a (CONDITIONAL_JUMP)  ; LAB_004c6e8a
    XOR ESI,ESI                         ; 004c6e98
    MOV EAX,0x2d76ec4                   ; 004c6e9a | g_RainDropPool
    MOV dword ptr [0x02d76ec0],ESI      ; 004c6e9f | g_RainDropAllocIndex
    LEA EBX,[EAX + 0x3800]              ; 004c6ea5 | g_CFlameClassInfo
    ADD EAX,0x38                        ; 004c6eab | DAT_02d76f34
        ;   Label: LAB_004c6eab
    MOV dword ptr [EAX + -0x20],0x0     ; 004c6eae | DAT_02d76edc | DAT_02d76f14
    CMP EAX,EBX                         ; 004c6eb5
    JNZ 0x004c6eab                      ; 004c6eb7
        ;   XREF to: 004c6eab (CONDITIONAL_JUMP)  ; LAB_004c6eab
    POP EBP                             ; 004c6eb9
    POP ESI                             ; 004c6eba
    POP EBX                             ; 004c6ebb
    RET                                 ; 004c6ebc

