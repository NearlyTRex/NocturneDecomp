// Name: core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0
// Address: 004c76a0
// Address Range: [[004c76a0, 004c77f1] [004c7800, 004c79c1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004c76a0(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

{
  int iVar2;
  CSmokeParticle *this_ptr_00;
  CBulletHole *this_ptr_01;
  char *pcVar3;
  char *pcVar1;
  int iVar3;
  CBulletHole *pCVar4;
  uint *puVar5;
  byte bVar6;
  char acStack_60 [52];
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int iVar1;
  
  bVar6 = 0;
  if ((surface_normal->y < (float)0.20000000000000001) && (-0.20000000000000001 < (double)surface_normal->y))
  {
    pCVar4 = g_BulletHolePool;
    local_14 = 1;
    if ((hit_actor == (CDemonActor *)0x0) ||
       (iVar2 = (*((hit_actor->vtable)._ub)->allowBulletHoles)(hit_actor), iVar2 != 0)) {
      if ((local_14 != 0) && (iVar3 = 0, 0 < g_BulletHoleActiveCount)) {
        do {
          local_20 = impact_pos->x - (pCVar4->position).x;
          local_1c = impact_pos->y - (pCVar4->position).y;
          local_18 = impact_pos->z - (pCVar4->position).z;
          if (&local_2c != &local_20) {
            local_2c = local_20;
            fStack_28 = local_1c;
            fStack_24 = local_18;
          }
          if (fStack_24 * fStack_24 + local_2c * local_2c + fStack_28 * fStack_28 <
              (float)0.057799999999999997) goto LAB_004c7785;
          iVar3 = iVar3 + 1;
          pCVar4 = pCVar4 + 1;
        } while (iVar3 < g_BulletHoleActiveCount);
      }
      if (local_14 != 0) {
        this_ptr_01 = core_fire_cpp_allocateBulletHole_FUN_004c6c10();
        core_fire_cpp_CBulletHole_init_FUN_004bf7f0(this_ptr_01,impact_pos,surface_normal,hit_actor)
        ;
      }
    }
  }
LAB_004c7785:
  iVar3 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00452730
                    (&g_CDemonCameraInstance,impact_pos,0.5);
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      iVar1 = g_SmokeParticleAllocIndex + 1;
      this_ptr_00 = g_SmokeParticlePool + g_SmokeParticleAllocIndex;
      g_SmokeParticleAllocIndex = iVar1;
      if (0x7ff < iVar1) {
        g_SmokeParticleAllocIndex = 0;
      }
      iVar3 = iVar3 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_004bf2f0
                (this_ptr_00,impact_pos,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar3 < 8);
    switch(ground_type) {
    case 2:
    case 5:
    case 8:
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                  (this_ptr,impact_pos,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      } while (iVar3 < 8);
    }
  }
  puVar5 = &DAT_0067aeb8;
  pcVar1 = acStack_60;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    *(uint *)pcVar1 = *puVar5;
    puVar5 = puVar5;
    pcVar1 = pcVar1 + (uint)bVar6 * -8 + 4;
  }
  *(ushort *)pcVar1 = *(ushort *)puVar5;
  switch(ground_type) {
  case 2:
  case 8:
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar3 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(GROUND_TYPE_CONCRETE);
      _sprintf(acStack_60,"ric-%s!?.wav",pcVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 3:
  case 4:
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar3 != 0) {
      pcVar1 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(GROUND_TYPE_DIRT);
      _sprintf(acStack_60,"ric-%s.wav",pcVar1);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 5:
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar3 != 0) {
      pcVar1 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(GROUND_TYPE_METAL);
      _sprintf(acStack_60,"ric-%s!?.wav",pcVar1);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
    break;
  case 7:
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.16666667);
    if (iVar3 != 0) {
      pcVar1 = core_ground_cpp_getGroundTypeCode_FUN_004eece0(GROUND_TYPE_WOOD);
      _sprintf(acStack_60,"ric-%s!?.wav",pcVar1);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_004c79a0;
    }
  }
  if (acStack_60[0] == '\0') {
    return;
  }
LAB_004c79a0:
  core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
            (g_CSoundPtr,(CDemonActor *)0x0,acStack_60,impact_pos,0.17);
  return;
}
