// Name: core_fire.cpp_staticInit_FUN_004bef20
// Address: 004bef20
// Address Range: [[004bef20, 004bf198]]
// Convention: __cdecl
// Signature: void core_fire.cpp_staticInit_FUN_004bef20(void)
// Globals:
//   WatcomTypeInfo g_CKeyFramedModelInstanceTypeInfo
//   WatcomTypeInfo g_CSmokeParticleTypeInfo
//   WatcomTypeInfo g_CBulletHoleTypeInfo
//   WatcomTypeInfo g_CStakeTypeInfo
//   WatcomTypeInfo g_CSparkTypeInfo
//   WatcomTypeInfo g_CMuzzleFlashTypeInfo
//   WatcomTypeInfo g_CGlassParticleTypeInfo
//   WatcomTypeInfo g_CBulletTrailTypeInfo
//   WatcomTypeInfo g_CFireballTypeInfo
//   WatcomTypeInfo g_CRockTypeInfo
//   WatcomTypeInfo g_CLaserBeamTypeInfo
//   WatcomTypeInfo g_CExplosionTypeInfo
//   WatcomTypeInfo g_CTossTypeInfo
//   WatcomTypeInfo g_CCraterTypeInfo
//   WatcomTypeInfo g_CGunFlameTypeInfo
//   WatcomTypeInfo g_CLightningBoltTypeInfo
//   WatcomTypeInfo g_CTrailTypeInfo
//   WatcomTypeInfo g_CShellTypeInfo
//   WatcomTypeInfo g_CPopcornTypeInfo
//   WatcomTypeInfo g_CRainDropTypeInfo
//   WatcomStaticDestructorNode g_CFireEffectStakesDestructorNode
//   WatcomStaticDestructorNode g_CFireEffectSparksDestructorNode
//   WatcomStaticDestructorNode g_CFireEffectGlassParticlesDestructorNode
//   WatcomStaticDestructorNode g_CFireEffectFireballsDestructorNode
//   WatcomStaticDestructorNode g_CFireEffectRocksDestructorNode
//   WatcomStaticDestructorNode g_CFireEffectTossesDestructorNodes
//   WatcomStaticDestructorNode g_CFireEffectCratersDestructorNodes
//   WatcomStaticDestructorNode g_CFireEffectShellsDestructorNode
//   WatcomStaticDestructorNode g_CFireEffectPopcornsDestructorNode
//   WatcomStaticDestructorNode g_CFireEffectRainDropsDestructorNode
//   CFireEffect g_CFireEffectInstance
//   CKeyFramedModelInstance g_FireEffectFlamingStakeModel
//   CKeyFramedModelInstance g_FireEffectFireballModel
//   CKeyFramedModelInstance g_FireEffectFireballSmallModel
//   CKeyFramedModelInstance g_FireEffectFireballGreenModel
//   CKeyFramedModelInstance g_FireEffectGunFlashModel
//   CKeyFramedModelInstance[5] g_CFireEffectDebrisModels
//   CSmokeParticle[2048] g_SmokeParticlePool
//   CBulletHole[256] g_BulletHolePool
//   CStake[256] g_StakePool
//   CSpark[256] g_SparkPool
//   CMuzzleFlash[20] g_MuzzleFlashPool
//   CGlassParticle[256] g_GlassParticlePool
//   CBulletTrail[10] g_BulletTrailPool
//   CFireball[64] g_FireballPool
//   CRock[64] g_RockPool
//   CLaserBeam[64] g_LaserBeamPool
//   CExplosion[10] g_ExplosionPool
//   CToss[20] g_TossPool
//   CCrater[20] g_CraterPool
//   CGunFlame[500] g_GunFlamePool
//   CLightningBolt[10] g_LightningBoltPool
//   CTrail[100] g_TrailPool
//   CShell[50] g_ShellPool
//   CPopcorn[256] g_PopcornPool
//   CRainDrop[256] g_RainDropPool
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_fire.cpp_CFireEffect_ctor_FUN_004c6c60
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_fire_cpp_staticInit_FUN_004bef20(void)

{
  core_fire_cpp_CFireEffect_ctor_FUN_004c6c60(&g_CFireEffectInstance);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFlamingStakeModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFireballModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFireballSmallModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFireballGreenModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectGunFlashModel);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_CFireEffectDebrisModels,5,&g_CKeyFramedModelInstanceTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_SmokeParticlePool,0x800,&g_CSmokeParticleTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_BulletHolePool,0x100,&g_CBulletHoleTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_StakePool,0x100,&g_CStakeTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectStakesDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_SparkPool,0x100,&g_CSparkTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectSparksDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_MuzzleFlashPool,0x14,&g_CMuzzleFlashTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_GlassParticlePool,0x100,&g_CGlassParticleTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectGlassParticlesDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_BulletTrailPool,10,&g_CBulletTrailTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_FireballPool,0x40,&g_CFireballTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectFireballsDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_RockPool,0x40,&g_CRockTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectRocksDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_LaserBeamPool,0x40,&g_CLaserBeamTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ExplosionPool,10,&g_CExplosionTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_TossPool,0x14,&g_CTossTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectTossesDestructorNodes);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_CraterPool,0x14,&g_CCraterTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectCratersDestructorNodes);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_GunFlamePool,500,&g_CGunFlameTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_LightningBoltPool,10,&g_CLightningBoltTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_TrailPool,100,&g_CTrailTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_ShellPool,0x32,&g_CShellTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectShellsDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_PopcornPool,0x100,&g_CPopcornTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectPopcornsDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_RainDropPool,0x100,&g_CRainDropTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFireEffectRainDropsDestructorNode);
  return;
}


// Assembly code:
// 004bef20: PUSH 0x2d12db0
//   Label: core_fire.cpp_staticInit_FUN_004bef20
//   XREF to: 02d12db0 (DATA)
// 004bef25: CALL core_fire.cpp_CFireEffect_ctor_FUN_004c6c60
//   XREF to: 004c6c60 (UNCONDITIONAL_CALL)
// 004bef2a: ADD ESP,0x4
// 004bef2d: PUSH 0x2d12df4
//   XREF to: 02d12df4 (DATA)
// 004bef32: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004bef37: ADD ESP,0x4
// 004bef3a: PUSH 0x2d12f70
//   XREF to: 02d12f70 (DATA)
// 004bef3f: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004bef44: ADD ESP,0x4
// 004bef47: PUSH 0x2d130ec
//   XREF to: 02d130ec (DATA)
// 004bef4c: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004bef51: ADD ESP,0x4
// 004bef54: PUSH 0x2d13268
//   XREF to: 02d13268 (DATA)
// 004bef59: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004bef5e: ADD ESP,0x4
// 004bef61: PUSH 0x2d133e4
//   XREF to: 02d133e4 (DATA)
// 004bef66: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004bef6b: ADD ESP,0x4
// 004bef6e: PUSH 0x65b770
//   XREF to: 0065b770 (DATA)
// 004bef73: PUSH 0x5
// 004bef75: PUSH 0x2d13568
//   XREF to: 02d13568 (DATA)
// 004bef7a: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bef7f: ADD ESP,0xc
// 004bef82: PUSH 0x65ddb0
//   XREF to: 0065ddb0 (DATA)
// 004bef87: PUSH 0x800
// 004bef8c: PUSH 0x2d141ec
//   XREF to: 02d141ec (DATA)
// 004bef91: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bef96: ADD ESP,0xc
// 004bef99: PUSH 0x65ddd0
//   XREF to: 0065ddd0 (DATA)
// 004bef9e: PUSH 0x100
// 004befa3: PUSH 0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004befa8: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004befad: ADD ESP,0xc
// 004befb0: PUSH 0x65ddf0
//   XREF to: 0065ddf0 (DATA)
// 004befb5: PUSH 0x100
// 004befba: PUSH 0x2d2ddfc
//   XREF to: 02d2ddfc (DATA)
// 004befbf: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004befc4: ADD ESP,0xc
// 004befc7: PUSH 0x67a330
//   XREF to: 0067a330 (DATA)
// 004befcc: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004befd1: ADD ESP,0x4
// 004befd4: PUSH 0x65de10
//   XREF to: 0065de10 (DATA)
// 004befd9: PUSH 0x100
// 004befde: PUSH 0x2d53e00
//   XREF to: 02d53e00 (DATA)
// 004befe3: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004befe8: ADD ESP,0xc
// 004befeb: PUSH 0x67a340
//   XREF to: 0067a340 (DATA)
// 004beff0: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004beff5: ADD ESP,0x4
// 004beff8: PUSH 0x65de30
//   XREF to: 0065de30 (DATA)
// 004beffd: PUSH 0x14
// 004befff: PUSH 0x2d58a04
//   XREF to: 02d58a04 (DATA)
// 004bf004: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf009: ADD ESP,0xc
// 004bf00c: PUSH 0x65de50
//   XREF to: 0065de50 (DATA)
// 004bf011: PUSH 0x100
// 004bf016: PUSH 0x2d59138
//   XREF to: 02d59138 (DATA)
// 004bf01b: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf020: ADD ESP,0xc
// 004bf023: PUSH 0x67a350
//   XREF to: 0067a350 (DATA)
// 004bf028: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf02d: ADD ESP,0x4
// 004bf030: PUSH 0x65de70
//   XREF to: 0065de70 (DATA)
// 004bf035: PUSH 0xa
// 004bf037: PUSH 0x2d62d3c
//   XREF to: 02d62d3c (DATA)
// 004bf03c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf041: ADD ESP,0xc
// 004bf044: PUSH 0x65de90
//   XREF to: 0065de90 (DATA)
// 004bf049: PUSH 0x40
// 004bf04b: PUSH 0x2d62ea8
//   XREF to: 02d62ea8 (DATA)
// 004bf050: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf055: ADD ESP,0xc
// 004bf058: PUSH 0x67a360
//   XREF to: 0067a360 (DATA)
// 004bf05d: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf062: ADD ESP,0x4
// 004bf065: PUSH 0x65deb0
//   XREF to: 0065deb0 (DATA)
// 004bf06a: PUSH 0x40
// 004bf06c: PUSH 0x2d655ac
//   XREF to: 02d655ac (DATA)
// 004bf071: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf076: ADD ESP,0xc
// 004bf079: PUSH 0x67a370
//   XREF to: 0067a370 (DATA)
// 004bf07e: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf083: ADD ESP,0x4
// 004bf086: PUSH 0x65ded0
//   XREF to: 0065ded0 (DATA)
// 004bf08b: PUSH 0x40
// 004bf08d: PUSH 0x2d667b0
//   XREF to: 02d667b0 (DATA)
// 004bf092: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf097: ADD ESP,0xc
// 004bf09a: PUSH 0x65def0
//   XREF to: 0065def0 (DATA)
// 004bf09f: PUSH 0xa
// 004bf0a1: PUSH 0x2d677b4
//   XREF to: 02d677b4 (DATA)
// 004bf0a6: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf0ab: ADD ESP,0xc
// 004bf0ae: PUSH 0x65df10
//   XREF to: 0065df10 (DATA)
// 004bf0b3: PUSH 0x14
// 004bf0b5: PUSH 0x2d678d0
//   XREF to: 02d678d0 (DATA)
// 004bf0ba: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf0bf: ADD ESP,0xc
// 004bf0c2: PUSH 0x67a380
//   XREF to: 0067a380 (DATA)
// 004bf0c7: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf0cc: ADD ESP,0x4
// 004bf0cf: PUSH 0x65df30
//   XREF to: 0065df30 (DATA)
// 004bf0d4: PUSH 0x14
// 004bf0d6: PUSH 0x2d6c6a4
//   XREF to: 02d6c6a4 (DATA)
// 004bf0db: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf0e0: ADD ESP,0xc
// 004bf0e3: PUSH 0x67a390
//   XREF to: 0067a390 (DATA)
// 004bf0e8: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf0ed: ADD ESP,0x4
// 004bf0f0: PUSH 0x65df50
//   XREF to: 0065df50 (DATA)
// 004bf0f5: PUSH 0x1f4
// 004bf0fa: PUSH 0x2d6cf68
//   XREF to: 02d6cf68 (DATA)
// 004bf0ff: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf104: ADD ESP,0xc
// 004bf107: PUSH 0x65df70
//   XREF to: 0065df70 (DATA)
// 004bf10c: PUSH 0xa
// 004bf10e: PUSH 0x2d715bc
//   XREF to: 02d715bc (DATA)
// 004bf113: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf118: ADD ESP,0xc
// 004bf11b: PUSH 0x65df90
//   XREF to: 0065df90 (DATA)
// 004bf120: PUSH 0x64
// 004bf122: PUSH 0x2d71778
//   XREF to: 02d71778 (DATA)
// 004bf127: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf12c: ADD ESP,0xc
// 004bf12f: PUSH 0x65dfb0
//   XREF to: 0065dfb0 (DATA)
// 004bf134: PUSH 0x32
// 004bf136: PUSH 0x2d7258c
//   XREF to: 02d7258c (DATA)
// 004bf13b: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf140: ADD ESP,0xc
// 004bf143: PUSH 0x67a3a0
//   XREF to: 0067a3a0 (DATA)
// 004bf148: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf14d: ADD ESP,0x4
// 004bf150: PUSH 0x65dfd0
//   XREF to: 0065dfd0 (DATA)
// 004bf155: PUSH 0x100
// 004bf15a: PUSH 0x2d736c0
//   XREF to: 02d736c0 (DATA)
// 004bf15f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf164: ADD ESP,0xc
// 004bf167: PUSH 0x67a3b0
//   XREF to: 0067a3b0 (DATA)
// 004bf16c: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf171: ADD ESP,0x4
// 004bf174: PUSH 0x65dff0
//   XREF to: 0065dff0 (DATA)
// 004bf179: PUSH 0x100
// 004bf17e: PUSH 0x2d76ec4
//   XREF to: 02d76ec4 (DATA)
// 004bf183: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004bf188: ADD ESP,0xc
// 004bf18b: PUSH 0x67a3c0
//   XREF to: 0067a3c0 (DATA)
// 004bf190: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004bf195: ADD ESP,0x4
// 004bf198: RET
