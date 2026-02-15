; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_staticInit_FUN_004bef20(void)
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
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_stdlib.c__atexit_FUN_005ff060
;
; *****************************************************************************

section .text

    PUSH 0x2d12db0                      ; 004bef20 | g_CFireEffectInstance
        ;   Label: core_fire.cpp_staticInit_FUN_004bef20
    CALL core_fire.cpp_CFireEffect_ctor_FUN_004c6c60 ; 004bef25
        ;   XREF to: 004c6c60 (UNCONDITIONAL_CALL)  ; CFireEffect * core_fire.cpp_CFireEffect_ctor_FUN_004c6c60(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004bef2a
    PUSH 0x2d12df4                      ; 004bef2d | g_FireEffectFlamingStakeModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef32
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bef37
    PUSH 0x2d12f70                      ; 004bef3a | g_FireEffectFireballModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef3f
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bef44
    PUSH 0x2d130ec                      ; 004bef47 | g_FireEffectFireballSmallModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef4c
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bef51
    PUSH 0x2d13268                      ; 004bef54 | g_FireEffectFireballGreenModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef59
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bef5e
    PUSH 0x2d133e4                      ; 004bef61 | g_FireEffectGunFlashModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004bef66
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004bef6b
    PUSH 0x65b770                       ; 004bef6e | g_CKeyFramedModelInstanceTypeInfo
    PUSH 0x5                            ; 004bef73
    PUSH 0x2d13568                      ; 004bef75 | g_CFireEffectDebrisModels
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bef7a
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bef7f
    PUSH 0x65ddb0                       ; 004bef82 | g_CSmokeParticleTypeInfo
    PUSH 0x800                          ; 004bef87
    PUSH 0x2d141ec                      ; 004bef8c | g_SmokeParticlePool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bef91
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bef96
    PUSH 0x65ddd0                       ; 004bef99 | g_CBulletHoleTypeInfo
    PUSH 0x100                          ; 004bef9e
    PUSH 0x2d2a1f4                      ; 004befa3 | g_BulletHolePool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004befa8
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004befad
    PUSH 0x65ddf0                       ; 004befb0 | g_CStakeTypeInfo
    PUSH 0x100                          ; 004befb5
    PUSH 0x2d2ddfc                      ; 004befba | g_StakePool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004befbf
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004befc4
    PUSH 0x67a330                       ; 004befc7 | g_CFireEffectStakesDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004befcc
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004befd1
    PUSH 0x65de10                       ; 004befd4 | g_CSparkTypeInfo
    PUSH 0x100                          ; 004befd9
    PUSH 0x2d53e00                      ; 004befde | g_SparkPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004befe3
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004befe8
    PUSH 0x67a340                       ; 004befeb | g_CFireEffectSparksDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004beff0
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004beff5
    PUSH 0x65de30                       ; 004beff8 | g_CMuzzleFlashTypeInfo
    PUSH 0x14                           ; 004beffd
    PUSH 0x2d58a04                      ; 004befff | g_MuzzleFlashPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf004
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf009
    PUSH 0x65de50                       ; 004bf00c | g_CGlassParticleTypeInfo
    PUSH 0x100                          ; 004bf011
    PUSH 0x2d59138                      ; 004bf016 | g_GlassParticlePool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf01b
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf020
    PUSH 0x67a350                       ; 004bf023 | g_CFireEffectGlassParticlesDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf028
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf02d
    PUSH 0x65de70                       ; 004bf030 | g_CBulletTrailTypeInfo
    PUSH 0xa                            ; 004bf035
    PUSH 0x2d62d3c                      ; 004bf037 | g_BulletTrailPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf03c
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf041
    PUSH 0x65de90                       ; 004bf044 | g_CFireballTypeInfo
    PUSH 0x40                           ; 004bf049
    PUSH 0x2d62ea8                      ; 004bf04b | g_FireballPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf050
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf055
    PUSH 0x67a360                       ; 004bf058 | g_CFireEffectFireballsDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf05d
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf062
    PUSH 0x65deb0                       ; 004bf065 | g_CRockTypeInfo
    PUSH 0x40                           ; 004bf06a
    PUSH 0x2d655ac                      ; 004bf06c | g_RockPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf071
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf076
    PUSH 0x67a370                       ; 004bf079 | g_CFireEffectRocksDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf07e
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf083
    PUSH 0x65ded0                       ; 004bf086 | g_CLaserBeamTypeInfo
    PUSH 0x40                           ; 004bf08b
    PUSH 0x2d667b0                      ; 004bf08d | g_LaserBeamPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf092
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf097
    PUSH 0x65def0                       ; 004bf09a | g_CExplosionTypeInfo
    PUSH 0xa                            ; 004bf09f
    PUSH 0x2d677b4                      ; 004bf0a1 | g_ExplosionPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf0a6
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf0ab
    PUSH 0x65df10                       ; 004bf0ae | g_CTossTypeInfo
    PUSH 0x14                           ; 004bf0b3
    PUSH 0x2d678d0                      ; 004bf0b5 | g_TossPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf0ba
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf0bf
    PUSH 0x67a380                       ; 004bf0c2 | g_CFireEffectTossesDestructorNodes
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf0c7
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf0cc
    PUSH 0x65df30                       ; 004bf0cf | g_CCraterTypeInfo
    PUSH 0x14                           ; 004bf0d4
    PUSH 0x2d6c6a4                      ; 004bf0d6 | g_CraterPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf0db
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf0e0
    PUSH 0x67a390                       ; 004bf0e3 | g_CFireEffectCratersDestructorNodes
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf0e8
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf0ed
    PUSH 0x65df50                       ; 004bf0f0 | g_CGunFlameTypeInfo
    PUSH 0x1f4                          ; 004bf0f5
    PUSH 0x2d6cf68                      ; 004bf0fa | g_GunFlamePool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf0ff
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf104
    PUSH 0x65df70                       ; 004bf107 | g_CLightningBoltTypeInfo
    PUSH 0xa                            ; 004bf10c
    PUSH 0x2d715bc                      ; 004bf10e | g_LightningBoltPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf113
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf118
    PUSH 0x65df90                       ; 004bf11b | g_CTrailTypeInfo
    PUSH 0x64                           ; 004bf120
    PUSH 0x2d71778                      ; 004bf122 | g_TrailPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf127
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf12c
    PUSH 0x65dfb0                       ; 004bf12f | g_CShellTypeInfo
    PUSH 0x32                           ; 004bf134
    PUSH 0x2d7258c                      ; 004bf136 | g_ShellPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf13b
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf140
    PUSH 0x67a3a0                       ; 004bf143 | g_CFireEffectShellsDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf148
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf14d
    PUSH 0x65dfd0                       ; 004bf150 | g_CPopcornTypeInfo
    PUSH 0x100                          ; 004bf155
    PUSH 0x2d736c0                      ; 004bf15a | g_PopcornPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf15f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf164
    PUSH 0x67a3b0                       ; 004bf167 | g_CFireEffectPopcornsDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf16c
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf171
    PUSH 0x65dff0                       ; 004bf174 | g_CRainDropTypeInfo
    PUSH 0x100                          ; 004bf179
    PUSH 0x2d76ec4                      ; 004bf17e | g_RainDropPool
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004bf183
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004bf188
    PUSH 0x67a3c0                       ; 004bf18b | g_CFireEffectRainDropsDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 004bf190
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004bf195
    RET                                 ; 004bf198

