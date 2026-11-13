// Name: core_fire.cpp_staticInit_FUN_004aba90
// Address: 004aba90
// Address Range: [[004aba90, 004abd51]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_staticInit_FUN_004aba90(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_staticInit_FUN_004aba90(void)

{
  core_fire_cpp_CFireEffect_ctor_FUN_004b4b10((CFireEffect *)0x1c57074);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860((CKeyFramedModelInstance *)0x1c570b8);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860((CKeyFramedModelInstance *)0x1c57234);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860((CKeyFramedModelInstance *)0x1c573b0);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860((CKeyFramedModelInstance *)0x1c5752c);
  __arrinit((void *)0x1c576a8,4,&g_CKeyFramedModelInstanceTypeInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860((CKeyFramedModelInstance *)0x1c57c98);
  __arrinit((void *)0x1c57e1c,5,&g_CKeyFramedModelInstanceTypeInfo);
  __arrinit(&DAT_01c58aa0,0x800,&g_CSmokeParticleTypeInfo);
  __arrinit(&DAT_01c6eaa8,0x100,&g_CBulletHoleTypeInfo);
  __arrinit(g_StakePool,0x100,&g_CStakeTypeInfo);
  _atexit(&g_CFireEffectStakesDestructorNode);
  __arrinit(g_SparkPool,0x100,&g_CSparkTypeInfo);
  _atexit(&g_CFireEffectSparksDestructorNode);
  __arrinit(CFirefly_ARRAY_01c9dab8,0x40,&g_CFireflyTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061bf80);
  __arrinit(&DAT_01c9f1bc,0x14,&g_CMuzzleFlashTypeInfo);
  __arrinit(g_GlassParticlePool,0x100,&g_CGlassParticleTypeInfo);
  _atexit(&g_CFireEffectGlassParticlesDestructorNode);
  __arrinit((void *)0x1ca9cf4,10,&g_CBulletTrailTypeInfo);
  __arrinit(g_FireballPool,0x40,&g_CFireballTypeInfo);
  _atexit(&g_CFireEffectFireballsDestructorNode);
  __arrinit(g_RockPool,0x40,&g_CRockTypeInfo);
  _atexit(&g_CFireEffectRocksDestructorNode);
  __arrinit(CLeaf_ARRAY_01cadb68,0x40,&g_CLeafTypeInfo);
  _atexit(&WatcomStaticDestructorNode_0061bfc0);
  __arrinit((void *)0x1caf06c,0x40,&g_CLaserBeamTypeInfo);
  __arrinit((void *)0x1cb0070,10,&g_CExplosionTypeInfo);
  __arrinit(g_TossPool,0x14,&g_CTossTypeInfo);
  _atexit(&g_CFireEffectTossesDestructorNodes);
  __arrinit((void *)0x1cb4f60,0x14,&g_CCraterTypeInfo);
  __arrinit(&DAT_01cb5824,500,&g_CGunFlameTypeInfo);
  __arrinit((void *)0x1cb9e78,10,&g_CLightningBoltTypeInfo);
  __arrinit((void *)0x1cba034,100,&g_CTrailTypeInfo);
  __arrinit(g_ShellPool,0x32,&g_CShellTypeInfo);
  _atexit(&g_CFireEffectShellsDestructorNode);
  __arrinit(g_PopcornPool,0x100,&g_CPopcornTypeInfo);
  _atexit(&g_CFireEffectPopcornsDestructorNode);
  __arrinit(g_RainDropPool,0x100,&g_CRainDropTypeInfo);
  _atexit(&g_CFireEffectRainDropsDestructorNode);
  return;
}
