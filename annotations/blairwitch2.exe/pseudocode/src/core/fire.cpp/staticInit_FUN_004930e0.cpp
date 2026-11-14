// Name: core_fire.cpp_staticInit_FUN_004930e0
// Address: 004930e0
// Address Range: [[004930e0, 004933b5]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_staticInit_FUN_004930e0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_staticInit_FUN_004930e0(void)

{
  core_fire_cpp_CFireEffect_ctor_FUN_0049c170((CFireEffect *)0x1c3deb4);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80((CKeyFramedModelInstance *)0x1c3def8);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80((CKeyFramedModelInstance *)0x1c3e074);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80((CKeyFramedModelInstance *)0x1c3e1f0);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80((CKeyFramedModelInstance *)0x1c3e36c);
  __arrinit((void *)0x1c3e4e8,4,&g_CKeyFramedModelInstanceTypeInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80((CKeyFramedModelInstance *)0x1c3ead8);
  __arrinit((void *)0x1c3ec5c,5,&g_CKeyFramedModelInstanceTypeInfo);
  __arrinit(&DAT_01c3f8e0,0x800,&g_CSmokeParticleTypeInfo);
  __arrinit(&DAT_01c558e8,0x100,&g_CBulletHoleTypeInfo);
  __arrinit(g_StakePool,0x100,&g_CStakeTypeInfo);
  _atexit(&g_CFireEffectStakesDestructorNode);
  __arrinit(g_SparkPool,0x100,&g_CSparkTypeInfo);
  _atexit(&g_CFireEffectSparksDestructorNode);
  __arrinit(CFirefly_ARRAY_01c848f8,0x40,&g_CFireflyTypeInfo);
  _atexit(&WatcomStaticDestructorNode_00614ca0);
  __arrinit(&DAT_01c85ffc,0x14,&g_CMuzzleFlashTypeInfo);
  __arrinit(&DAT_01c86730,0x14,&g_CMuzzleEffectTypeInfo);
  __arrinit(g_GlassParticlePool,0x100,&g_CGlassParticleTypeInfo);
  _atexit(&g_CFireEffectGlassParticlesDestructorNode);
  __arrinit((void *)0x1c91268,10,&g_CBulletTrailTypeInfo);
  __arrinit(g_FireballPool,0x40,&g_CFireballTypeInfo);
  _atexit(&g_CFireEffectFireballsDestructorNode);
  __arrinit(g_RockPool,0x40,&g_CRockTypeInfo);
  _atexit(&g_CFireEffectRocksDestructorNode);
  __arrinit(CLeaf_ARRAY_01c950dc,0x40,&g_CLeafTypeInfo);
  _atexit(&WatcomStaticDestructorNode_00614ce0);
  __arrinit((void *)0x1c965e0,0x40,&g_CLaserBeamTypeInfo);
  __arrinit((void *)0x1c975e4,10,&g_CExplosionTypeInfo);
  __arrinit(g_TossPool,0x14,&g_CTossTypeInfo);
  _atexit(&g_CFireEffectTossesDestructorNodes);
  __arrinit((void *)0x1c9c4d4,0x14,&g_CCraterTypeInfo);
  __arrinit(&DAT_01c9cd98,500,&g_CGunFlameTypeInfo);
  __arrinit((void *)0x1ca13ec,10,&g_CLightningBoltTypeInfo);
  __arrinit((void *)0x1ca15a8,100,&g_CTrailTypeInfo);
  __arrinit(g_ShellPool,0x32,&g_CShellTypeInfo);
  _atexit(&g_CFireEffectShellsDestructorNode);
  __arrinit(g_PopcornPool,0x100,&g_CPopcornTypeInfo);
  _atexit(&g_CFireEffectPopcornsDestructorNode);
  __arrinit(g_RainDropPool,0x100,&g_CRainDropTypeInfo);
  _atexit(&g_CFireEffectRainDropsDestructorNode);
  return;
}
