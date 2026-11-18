// Name: core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50
// Address: 0049cd50
// Address Range: [[0049cd50, 0049ceba] [0049cec0, 0049d08d]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_0049cd50(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_0049cd50(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

{
  int iVar1;
  int iVar2;
  CSmokeParticle *this_ptr_00;
  CBulletHole *this_ptr_01;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  float afStackY_1024 [996];
  char acStack_70 [52];
  float local_3c;
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int local_18;
  CBulletHole *local_14;
  
  bVar5 = 0;
  if ((surface_normal->y < (float)0.20000000000000001) &&
     (-0.20000000000000001 < (double)surface_normal->y)) {
    local_18 = 1;
    local_14 = g_BulletHolePool;
    if ((hit_actor == (CDemonActor *)0x0) ||
       (iVar2 = (*((hit_actor->vtable)._ub)->allowBulletHoles)(hit_actor), iVar2 != 0)) {
      if ((local_18 != 0) && (iVar2 = 0, 0 < g_BulletHoleActiveCount)) {
        do {
          local_3c = impact_pos->x - (local_14->position).x;
          afStack_38[0] = impact_pos->y - (local_14->position).y;
          afStack_38[1] = impact_pos->z - (local_14->position).z;
          afStack_38[2] = local_3c;
          afStack_38[(uint)bVar5 * -2 + 3] = afStack_38[(uint)bVar5 * -2];
          afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
               afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          if (afStack_38 + 5 != afStack_38 + 2) {
            fStack_24 = afStack_38[2];
            fStack_20 = afStack_38[3];
            fStack_1c = fStack_28;
          }
          if (fStack_1c * fStack_1c + fStack_24 * fStack_24 + fStack_20 * fStack_20 <
              (float)0.057799999999999997) goto LAB_0049ce50;
          iVar2 = iVar2 + 1;
          local_14 = local_14 + 1;
        } while (iVar2 < g_BulletHoleActiveCount);
      }
      if (local_18 != 0) {
        this_ptr_01 = core_fire_cpp_allocateBulletHole_FUN_0049c120();
        core_fire_cpp_CBulletHole_init_FUN_00493a40(this_ptr_01,impact_pos,surface_normal,hit_actor)
        ;
      }
    }
  }
LAB_0049ce50:
  iVar2 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00441cd0
                    (&g_CDemonCameraInstance,impact_pos,0.5);
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = g_SmokeParticleAllocIndex + 1;
      this_ptr_00 = g_SmokeParticlePool + g_SmokeParticleAllocIndex;
      g_SmokeParticleAllocIndex = iVar1;
      if (0x7ff < iVar1) {
        g_SmokeParticleAllocIndex = 0;
      }
      iVar2 = iVar2 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_00493510
                (this_ptr_00,impact_pos,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar2 < 8);
    switch(ground_type) {
    case 2:
    case 5:
    case 8:
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                  (this_ptr,impact_pos,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      } while (iVar2 < 8);
    }
  }
  pcVar3 = g_DefaultRicochetSound;
  pcVar4 = acStack_70;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + ((uint)bVar5 * -2 + 1) * 4;
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  *(ushort *)pcVar4 = *(ushort *)pcVar3;
  switch(ground_type) {
  case 2:
  case 8:
    iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004ca7c0(GROUND_TYPE_CONCRETE);
      _sprintf(acStack_70,"ric-%s!?.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
    break;
  case 3:
  case 4:
    iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004ca7c0(GROUND_TYPE_DIRT);
      _sprintf(acStack_70,"ric-%s.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
    break;
  case 5:
    iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004ca7c0(GROUND_TYPE_METAL);
      _sprintf(acStack_70,"ric-%s!?.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
    break;
  case 7:
    iVar2 = core_actor_cpp_randomChance_FUN_0040d060(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004ca7c0(GROUND_TYPE_WOOD);
      _sprintf(acStack_70,"ric-%s!?.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_0049d06b;
    }
  }
  if (acStack_70[0] == '\0') {
    return;
  }
LAB_0049d06b:
  core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0055aef0
            (g_CSound_PTR_0061c068,(CDemonActor *)0x0,acStack_70,impact_pos,0.17);
  return;
}
