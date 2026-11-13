// Name: core_fire.cpp_staticInit_FUN_00496930
// Address: 00496930
// Address Range: [[00496930, 00496c05]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_staticInit_FUN_00496930(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_staticInit_FUN_00496930(void)

{
  core_fire_cpp_CFireEffect_ctor_FUN_004a1460((CFireEffect *)0x1c73654);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500((CKeyFramedModelInstance *)0x1c73698);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500((CKeyFramedModelInstance *)0x1c73814);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500((CKeyFramedModelInstance *)0x1c73990);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500((CKeyFramedModelInstance *)0x1c73b0c);
  __arrinit((void *)0x1c73c88,4,&g_CKeyFramedModelInstanceTypeInfo);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500((CKeyFramedModelInstance *)0x1c74278);
  __arrinit((void *)0x1c743fc,5,&g_CKeyFramedModelInstanceTypeInfo);
  __arrinit(&DAT_01c74ea0,0x800,&g_CSmokeParticleTypeInfo);
  __arrinit(&DAT_01c8aea8,0x100,&g_CBulletHoleTypeInfo);
  __arrinit(g_StakePool,0x100,&g_CStakeTypeInfo);
  _atexit(&g_CFireEffectStakesDestructorNode);
  __arrinit(g_SparkPool,0x100,&g_CSparkTypeInfo);
  _atexit(&g_CFireEffectSparksDestructorNode);
  __arrinit(CFirefly_ARRAY_01cba2b8,0x40,&g_CFireflyTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005fc510);
  __arrinit(&DAT_01cbb9bc,0x14,&g_CMuzzleFlashTypeInfo);
  __arrinit(CGlassParticle_ARRAY_01cbc0f0,1000,&g_CGlassParticleTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005fc520);
  __arrinit((void *)0x1cefd14,10,&g_CBulletTrailTypeInfo);
  __arrinit(g_FireballPool,0x40,&g_CFireballTypeInfo);
  _atexit(&g_CFireEffectFireballsDestructorNode);
  __arrinit(g_RockPool,0x40,&g_CRockTypeInfo);
  _atexit(&g_CFireEffectRocksDestructorNode);
  __arrinit(CLeaf_ARRAY_01cf3b88,0x40,&g_CLeafTypeInfo);
  _atexit(&WatcomStaticDestructorNode_005fc550);
  __arrinit((void *)0x1cf508c,0x40,&g_CLaserBeamTypeInfo);
  __arrinit((void *)0x1cf6090,10,&g_CExplosionTypeInfo);
  __arrinit(g_TossPool,0x14,&g_CTossTypeInfo);
  _atexit(&g_CFireEffectTossesDestructorNodes);
  __arrinit((void *)0x1cfaff8,0x14,&g_CCraterTypeInfo);
  __arrinit((void *)0x1cfb8bc,500,&g_CGunFlameTypeInfo);
  __arrinit((void *)0x1d00eb0,0x40,&g_CLightningBoltTypeInfo);
  __arrinit((void *)0x1d01ab4,100,&g_CTrailTypeInfo);
  __arrinit(g_ShellPool,0x32,&g_CShellTypeInfo);
  _atexit(&g_CFireEffectShellsDestructorNode);
  __arrinit(g_PopcornPool,0x100,&g_CPopcornTypeInfo);
  _atexit(&g_CFireEffectPopcornsDestructorNode);
  __arrinit(g_RainDropPool,0x100,&g_CRainDropTypeInfo);
  _atexit(&g_CFireEffectRainDropsDestructorNode);
  __arrinit((void *)0x1d0bb94,10,&g_CRingTypeInfo);
  return;
}
