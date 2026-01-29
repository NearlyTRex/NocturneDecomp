// Name: core_fire.cpp_staticInit_FUN_004bef20
// Address: 004bef20
// Address Range: [[004bef20, 004bf198]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_staticInit_FUN_004bef20(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_staticInit_FUN_004bef20(void)

{
  core_fire_cpp_CFireEffect_ctor_FUN_004c6c60(&g_CFireEffectInstance);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFlamingStakeModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFireballModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFireballSmallModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectFireballGreenModel);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&g_FireEffectGunFlashModel);
  __arrinit
            (g_CFireEffectDebrisModels,5,&g_CKeyFramedModelInstanceTypeInfo);
  __arrinit(g_SmokeParticlePool,0x800,&g_CSmokeParticleTypeInfo);
  __arrinit(g_BulletHolePool,0x100,&g_CBulletHoleTypeInfo);
  __arrinit(g_StakePool,0x100,&g_CStakeTypeInfo);
  _atexit(&g_CFireEffectStakesDestructorNode);
  __arrinit(g_SparkPool,0x100,&g_CSparkTypeInfo);
  _atexit(&g_CFireEffectSparksDestructorNode);
  __arrinit(g_MuzzleFlashPool,0x14,&g_CMuzzleFlashTypeInfo);
  __arrinit(g_GlassParticlePool,0x100,&g_CGlassParticleTypeInfo);
  _atexit(&g_CFireEffectGlassParticlesDestructorNode);
  __arrinit(g_BulletTrailPool,10,&g_CBulletTrailTypeInfo);
  __arrinit(g_FireballPool,0x40,&g_CFireballTypeInfo);
  _atexit(&g_CFireEffectFireballsDestructorNode);
  __arrinit(g_RockPool,0x40,&g_CRockTypeInfo);
  _atexit(&g_CFireEffectRocksDestructorNode);
  __arrinit(g_LaserBeamPool,0x40,&g_CLaserBeamTypeInfo);
  __arrinit(g_ExplosionPool,10,&g_CExplosionTypeInfo);
  __arrinit(g_TossPool,0x14,&g_CTossTypeInfo);
  _atexit(&g_CFireEffectTossesDestructorNodes);
  __arrinit(g_CraterPool,0x14,&g_CCraterTypeInfo);
  _atexit(&g_CFireEffectCratersDestructorNodes);
  __arrinit(g_GunFlamePool,500,&g_CGunFlameTypeInfo);
  __arrinit(g_LightningBoltPool,10,&g_CLightningBoltTypeInfo);
  __arrinit(g_TrailPool,100,&g_CTrailTypeInfo);
  __arrinit(g_ShellPool,0x32,&g_CShellTypeInfo);
  _atexit(&g_CFireEffectShellsDestructorNode);
  __arrinit(g_PopcornPool,0x100,&g_CPopcornTypeInfo);
  _atexit(&g_CFireEffectPopcornsDestructorNode);
  __arrinit(g_RainDropPool,0x100,&g_CRainDropTypeInfo);
  _atexit(&g_CFireEffectRainDropsDestructorNode);
  return;
}
