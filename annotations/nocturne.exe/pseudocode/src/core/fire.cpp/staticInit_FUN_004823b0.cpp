// Name: core_fire.cpp_staticInit_FUN_004823b0
// Address: 004823b0
// Address Range: [[004823b0, 00482628]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_staticInit_FUN_004823b0(void)

#include "nocturne.h"

void __cdecl core_fire_cpp_staticInit_FUN_004823b0(void)

{
  core_fire_cpp_CFireEffect_ctor_FUN_0048a130(&g_CFireEffect_01c08d04);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&g_CKeyFramedModelInstance_01c08d48);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&g_CKeyFramedModelInstance_01c08ec4);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&g_CKeyFramedModelInstance_01c09040);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&g_CKeyFramedModelInstance_01c091bc);
  core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&g_CKeyFramedModelInstance_01c09338);
  __arrinit
            (g_CKeyFramedModelInstance_ARRAY_01c094bc,5,&g_CKeyFramedModelInstanceTypeInfo_0059b030)
  ;
  __arrinit
            (g_CSmokeParticle_ARRAY_01c0a140,0x800,&g_CSmokeParticleTypeInfo_0059d300);
  __arrinit
            (g_CBulletHole_ARRAY_01c20148,0x100,&g_CBulletHoleTypeInfo_0059d320);
  __arrinit(g_StakePool,0x100,&g_CStakeTypeInfo_0059d340);
  _atexit(&g_CFireEffectStakesDestructorNode);
  __arrinit(g_SparkPool,0x100,&g_CSparkTypeInfo_0059d360);
  _atexit(&g_CFireEffectSparksDestructorNode);
  __arrinit
            (g_CMuzzleFlash_ARRAY_01c4e958,0x14,&g_CMuzzleFlashTypeInfo_0059d380);
  __arrinit(g_GlassParticlePool,0x100,&g_CGlassParticleTypeInfo_0059d3a0);
  _atexit(&g_CFireEffectGlassParticlesDestructorNode);
  __arrinit
            (g_CBulletTrail_ARRAY_01c58c90,10,&g_CBulletTrailTypeInfo_0059d3c0);
  __arrinit(g_FireballPool,0x40,&g_CFireballTypeInfo_0059d3e0);
  _atexit(&g_CFireEffectFireballsDestructorNode);
  __arrinit(g_RockPool,0x40,&g_CRockTypeInfo_0059d400);
  _atexit(&g_CFireEffectRocksDestructorNode);
  __arrinit
            (g_CLaserBeam_ARRAY_01c5c704,0x40,&g_CLaserBeamTypeInfo_0059d420);
  __arrinit(g_CExplosion_ARRAY_01c5d708,10,&g_CExplosionTypeInfo_0059d440)
  ;
  __arrinit(g_TossPool,0x14,&g_CTossTypeInfo_0059d460);
  _atexit(&g_CFireEffectTossesDestructorNode);
  __arrinit(g_CraterPool,0x14,&g_CCraterTypeInfo_0059d480);
  _atexit(&g_CFireEffectCratersDestructorNode);
  __arrinit(g_CGunFlame_ARRAY_01c62ebc,500,&g_CGunFlameTypeInfo_0059d4a0);
  __arrinit
            (g_CLightningBolt_ARRAY_01c67510,10,&g_CLightningBoltTypeInfo_0059d4c0);
  __arrinit(g_CTrail_ARRAY_01c676cc,100,&g_CTrailTypeInfo_0059d4e0);
  __arrinit(g_ShellPool,0x32,&g_CShellTypeInfo_0059d500);
  _atexit(&g_CFireEffectShellsDestructorNode);
  __arrinit(g_PopcornPool,0x100,&g_CPopcornTypeInfo_0059d520);
  _atexit(&g_CFireEffectPopcornsDestructorNode);
  __arrinit(g_RainDropPool,0x100,&g_CRainDropTypeInfo_0059d540);
  _atexit(&g_CFireEffectRainDropsDestructorNode);
  return;
}
