// Name: core_fire.cpp_staticInit_FUN_004bef20
// Address: 004bef20
// Address Range: [[004bef20, 004bf198]]
// Convention: __cdecl
// Signature: void core_fire.cpp_staticInit_FUN_004bef20(void)

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
