// Name: core_fire.cpp_staticInit_FUN_00496930
// Address: 00496930
// Address Range: [[00496930, 00496c05]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_staticInit_FUN_00496930(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_staticInit_FUN_00496930(void)

{
  core_fire_cpp_CFireEffect_ctor_FUN_004a1460(&g_CFireEffect_01c73654);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&g_FireEffectFlamingStakeModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&g_FireEffectFireballModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&g_FireEffectFireballSmallModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&g_FireEffectFireballGreenModel);
  __arrinit
            (&g_CKeyFramedModelInstance_01c73c88,4,&g_CKeyFramedModelInstanceTypeInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500(&g_FireEffectGunFlashModel);
  __arrinit
            (g_CFireEffectDebrisModels,5,&g_CKeyFramedModelInstanceTypeInfo);
  __arrinit(g_SmokeParticlePool,0x800,&g_CSmokeParticleTypeInfo);
  __arrinit(g_CBulletHole_ARRAY_01c8aea8,0x100,&g_CBulletHoleTypeInfo);
  __arrinit(g_StakePool,0x100,&g_CStakeTypeInfo);
  _atexit(&g_CFireEffectStakesDestructorNode);
  __arrinit(g_SparkPool,0x100,&g_CSparkTypeInfo);
  _atexit(&g_CFireEffectSparksDestructorNode);
  __arrinit(CFirefly_ARRAY_01cba2b8,0x40,&g_CFireflyTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005fc510);
  __arrinit(g_MuzzleFlashPool,0x14,&g_CMuzzleFlashTypeInfo);
  __arrinit(CGlassParticle_ARRAY_01cbc0f0,1000,&g_CGlassParticleTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005fc520);
  __arrinit(g_BulletTrailPool,10,&g_CBulletTrailTypeInfo);
  __arrinit(g_FireballPool,0x40,&g_CFireballTypeInfo);
  _atexit(&g_CFireEffectFireballsDestructorNode);
  __arrinit(g_RockPool,0x40,&g_CRockTypeInfo);
  _atexit(&g_CFireEffectRocksDestructorNode);
  __arrinit(CLeaf_ARRAY_01cf3b88,0x40,&g_CLeafTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005fc550);
  __arrinit(g_LaserBeamPool,0x40,&g_CLaserBeamTypeInfo);
  __arrinit(g_CExplosion_ARRAY_01cf6090,10,&g_CExplosionTypeInfo);
  __arrinit(g_TossPool,0x14,&g_CTossTypeInfo);
  _atexit(&g_CFireEffectTossesDestructorNodes);
  __arrinit(g_CCrater_ARRAY_01cfaff8,0x14,&g_CCraterTypeInfo);
  __arrinit(g_CGunFlame_ARRAY_01cfb8bc,500,&g_CGunFlameTypeInfo);
  __arrinit
            (g_CLightningBolt_ARRAY_01d00eb0,0x40,&g_CLightningBoltTypeInfo);
  __arrinit(g_CTrail_ARRAY_01d01ab4,100,&g_CTrailTypeInfo);
  __arrinit(g_ShellPool,0x32,&g_CShellTypeInfo);
  _atexit(&g_CFireEffectShellsDestructorNode);
  __arrinit(g_PopcornPool,0x100,&g_CPopcornTypeInfo);
  _atexit(&g_CFireEffectPopcornsDestructorNode);
  __arrinit(g_RainDropPool,0x100,&g_CRainDropTypeInfo);
  _atexit(&g_CFireEffectRainDropsDestructorNode);
  __arrinit(&g_CLightningBolt_01d0bb94,10,&g_CRingTypeInfo);
  return;
}
