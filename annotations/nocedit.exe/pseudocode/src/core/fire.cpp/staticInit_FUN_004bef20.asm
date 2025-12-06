; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_staticInit_FUN_004bef20(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo
;   WatcomTypeInfo g_CSmokeParticleTypeInfo
;   WatcomTypeInfo g_CBulletHoleTypeInfo
;   WatcomTypeInfo g_CStakeTypeInfo
;   WatcomTypeInfo g_CSparkTypeInfo
;   WatcomTypeInfo g_CMuzzleFlashTypeInfo
;   WatcomTypeInfo g_CGlassParticleTypeInfo
;   WatcomTypeInfo g_CBulletTrailTypeInfo
;   WatcomTypeInfo g_CFireballTypeInfo
;   WatcomTypeInfo g_CRockTypeInfo
;   WatcomTypeInfo g_CLaserBeamTypeInfo
;   WatcomTypeInfo g_CExplosionTypeInfo
;   WatcomTypeInfo g_CTossTypeInfo
;   WatcomTypeInfo g_CCraterTypeInfo
;   WatcomTypeInfo g_CGunFlameTypeInfo
;   ... and 41 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_fire.cpp_CFireEffect_ctor_FUN_004c6c60
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;   crt_stdlib.c_atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x2d12db0                      ; 004bef20 | CFireEffect g_CFireEffectInstance
        ;   Label: core_fire.cpp_staticInit_FUN_004bef20
    CALL core_fire.cpp_CFireEffect_ctor_FUN_004c6c60 ; 004bef25 | CFireEffect * core_fire.cpp_CFireEffect_ctor_FUN_004c6c60(CFireEffect * this_ptr)
        ;   XREF to: 004c6c60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bef2a
    PUSH 0x2d12df4                      ; 004bef2d | CKeyFramedModelInstance g_FireEffectFlamingStakeModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef32 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bef37
    PUSH 0x2d12f70                      ; 004bef3a | CKeyFramedModelInstance g_FireEffectFireballModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef3f | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bef44
    PUSH 0x2d130ec                      ; 004bef47 | CKeyFramedModelInstance g_FireEffectFireballSmallModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef4c | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bef51
    PUSH 0x2d13268                      ; 004bef54 | CKeyFramedModelInstance g_FireEffectFireballGreenModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef59 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bef5e
    PUSH 0x2d133e4                      ; 004bef61 | CKeyFramedModelInstance g_FireEffectGunFlashModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef66 | CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bef6b
    PUSH 0x65b770                       ; 004bef6e | WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo
    PUSH 0x5                            ; 004bef73
    PUSH 0x2d13568                      ; 004bef75 | CKeyFramedModelInstance[5] g_CFireEffectDebrisModels
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bef7a | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bef7f
    PUSH 0x65ddb0                       ; 004bef82 | WatcomTypeInfo g_CSmokeParticleTypeInfo
    PUSH 0x800                          ; 004bef87
    PUSH 0x2d141ec                      ; 004bef8c | CSmokeParticle[2048] g_SmokeParticlePool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bef91 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bef96
    PUSH 0x65ddd0                       ; 004bef99 | WatcomTypeInfo g_CBulletHoleTypeInfo
    PUSH 0x100                          ; 004bef9e
    PUSH 0x2d2a1f4                      ; 004befa3 | CBulletHole[256] g_BulletHolePool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004befa8 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004befad
    PUSH 0x65ddf0                       ; 004befb0 | WatcomTypeInfo g_CStakeTypeInfo
    PUSH 0x100                          ; 004befb5
    PUSH 0x2d2ddfc                      ; 004befba | CStake[256] g_StakePool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004befbf | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004befc4
    PUSH 0x67a330                       ; 004befc7 | WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004befcc | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004befd1
    PUSH 0x65de10                       ; 004befd4 | WatcomTypeInfo g_CSparkTypeInfo
    PUSH 0x100                          ; 004befd9
    PUSH 0x2d53e00                      ; 004befde | CSpark[256] g_SparkPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004befe3 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004befe8
    PUSH 0x67a340                       ; 004befeb | WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004beff0 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004beff5
    PUSH 0x65de30                       ; 004beff8 | WatcomTypeInfo g_CMuzzleFlashTypeInfo
    PUSH 0x14                           ; 004beffd
    PUSH 0x2d58a04                      ; 004befff | CMuzzleFlash[20] g_MuzzleFlashPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf004 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf009
    PUSH 0x65de50                       ; 004bf00c | WatcomTypeInfo g_CGlassParticleTypeInfo
    PUSH 0x100                          ; 004bf011
    PUSH 0x2d59138                      ; 004bf016 | CGlassParticle[256] g_GlassParticlePool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf01b | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf020
    PUSH 0x67a350                       ; 004bf023 | WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf028 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf02d
    PUSH 0x65de70                       ; 004bf030 | WatcomTypeInfo g_CBulletTrailTypeInfo
    PUSH 0xa                            ; 004bf035
    PUSH 0x2d62d3c                      ; 004bf037 | CBulletTrail[10] g_BulletTrailPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf03c | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf041
    PUSH 0x65de90                       ; 004bf044 | WatcomTypeInfo g_CFireballTypeInfo
    PUSH 0x40                           ; 004bf049
    PUSH 0x2d62ea8                      ; 004bf04b | CFireball[64] g_FireballPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf050 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf055
    PUSH 0x67a360                       ; 004bf058 | WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf05d | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf062
    PUSH 0x65deb0                       ; 004bf065 | WatcomTypeInfo g_CRockTypeInfo
    PUSH 0x40                           ; 004bf06a
    PUSH 0x2d655ac                      ; 004bf06c | CRock[64] g_RockPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf071 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf076
    PUSH 0x67a370                       ; 004bf079 | WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf07e | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf083
    PUSH 0x65ded0                       ; 004bf086 | WatcomTypeInfo g_CLaserBeamTypeInfo
    PUSH 0x40                           ; 004bf08b
    PUSH 0x2d667b0                      ; 004bf08d | CLaserBeam[64] g_LaserBeamPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf092 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf097
    PUSH 0x65def0                       ; 004bf09a | WatcomTypeInfo g_CExplosionTypeInfo
    PUSH 0xa                            ; 004bf09f
    PUSH 0x2d677b4                      ; 004bf0a1 | CExplosion[10] g_ExplosionPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf0a6 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf0ab
    PUSH 0x65df10                       ; 004bf0ae | WatcomTypeInfo g_CTossTypeInfo
    PUSH 0x14                           ; 004bf0b3
    PUSH 0x2d678d0                      ; 004bf0b5 | CToss[20] g_TossPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf0ba | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf0bf
    PUSH 0x67a380                       ; 004bf0c2 | WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf0c7 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf0cc
    PUSH 0x65df30                       ; 004bf0cf | WatcomTypeInfo g_CCraterTypeInfo
    PUSH 0x14                           ; 004bf0d4
    PUSH 0x2d6c6a4                      ; 004bf0d6 | CCrater[20] g_CraterPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf0db | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf0e0
    PUSH 0x67a390                       ; 004bf0e3 | WatcomStaticDestructorNode g_CFireEffectCratersDestructorNodes
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf0e8 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf0ed
    PUSH 0x65df50                       ; 004bf0f0 | WatcomTypeInfo g_CGunFlameTypeInfo
    PUSH 0x1f4                          ; 004bf0f5
    PUSH 0x2d6cf68                      ; 004bf0fa | CGunFlame[500] g_GunFlamePool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf0ff | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf104
    PUSH 0x65df70                       ; 004bf107 | WatcomTypeInfo g_CLightningBoltTypeInfo
    PUSH 0xa                            ; 004bf10c
    PUSH 0x2d715bc                      ; 004bf10e | CLightningBolt[10] g_LightningBoltPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf113 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf118
    PUSH 0x65df90                       ; 004bf11b | WatcomTypeInfo g_CTrailTypeInfo
    PUSH 0x64                           ; 004bf120
    PUSH 0x2d71778                      ; 004bf122 | CTrail[100] g_TrailPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf127 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf12c
    PUSH 0x65dfb0                       ; 004bf12f | WatcomTypeInfo g_CShellTypeInfo
    PUSH 0x32                           ; 004bf134
    PUSH 0x2d7258c                      ; 004bf136 | CShell[50] g_ShellPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf13b | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf140
    PUSH 0x67a3a0                       ; 004bf143 | WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf148 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf14d
    PUSH 0x65dfd0                       ; 004bf150 | WatcomTypeInfo g_CPopcornTypeInfo
    PUSH 0x100                          ; 004bf155
    PUSH 0x2d736c0                      ; 004bf15a | CPopcorn[256] g_PopcornPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf15f | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf164
    PUSH 0x67a3b0                       ; 004bf167 | WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf16c | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf171
    PUSH 0x65dff0                       ; 004bf174 | WatcomTypeInfo g_CRainDropTypeInfo
    PUSH 0x100                          ; 004bf179
    PUSH 0x2d76ec4                      ; 004bf17e | CRainDrop[256] g_RainDropPool
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004bf183 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bf188
    PUSH 0x67a3c0                       ; 004bf18b | WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 004bf190 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bf195
    RET                                 ; 004bf198

