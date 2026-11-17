// Name: core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
// Address: 004b56a0
// Address Range: [[004b56a0, 004b580a] [004b5810, 004b59dd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

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
    local_14 = g_CBulletHole_ARRAY_01c6eaa8;
    if ((hit_actor == (CDemonActor *)0x0) ||
       (iVar2 = (*((hit_actor->vtable)._ub)->allowBulletHoles)(hit_actor), iVar2 != 0)) {
      if ((local_18 != 0) && (iVar2 = 0, 0 < g_INT_01c6eaa0)) {
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
              (float)0.057799999999999997) goto LAB_004b57a0;
          iVar2 = iVar2 + 1;
          local_14 = local_14 + 1;
        } while (iVar2 < g_INT_01c6eaa0);
      }
      if (local_18 != 0) {
        this_ptr_01 = core_fire_cpp_allocateBulletHole_FUN_004b4ac0();
        core_fire_cpp_CBulletHole_init_FUN_004ac3e0(this_ptr_01,impact_pos,surface_normal,hit_actor)
        ;
      }
    }
  }
LAB_004b57a0:
  iVar2 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00453390
                    (&g_CDemonCameraInstance,impact_pos,0.5);
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = g_INT_01c58a9c + 1;
      this_ptr_00 = g_CSmokeParticle_ARRAY_01c58aa0 + g_INT_01c58a9c;
      g_INT_01c58a9c = iVar1;
      if (0x7ff < iVar1) {
        g_INT_01c58a9c = 0;
      }
      iVar2 = iVar2 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_004abeb0
                (this_ptr_00,impact_pos,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar2 < 8);
    switch(ground_type) {
    case 2:
    case 5:
    case 8:
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (this_ptr,impact_pos,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      } while (iVar2 < 8);
    }
  }
  pcVar3 = g_CHAR_ARRAY_0061cb70;
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
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004e7010(GROUND_TYPE_CONCRETE);
      _sprintf(acStack_70,"ric-%s!?.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 3:
  case 4:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004e7010(GROUND_TYPE_DIRT);
      _sprintf(acStack_70,"ric-%s.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 5:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004e7010(GROUND_TYPE_METAL);
      _sprintf(acStack_70,"ric-%s!?.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 7:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004e7010(GROUND_TYPE_WOOD);
      _sprintf(acStack_70,"ric-%s!?.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
  }
  if (acStack_70[0] == '\0') {
    return;
  }
LAB_004b59bb:
  core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940
            (g_CSound_PTR_006236b8,(CDemonActor *)0x0,acStack_70,impact_pos,0.17);
  return;
}
