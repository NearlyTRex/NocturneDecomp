// Name: core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
// Address: 004b56a0
// Address Range: [[004b56a0, 004b580a] [004b5810, 004b59dd]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

{
  int iVar1;
  int iVar2;
  CBulletHole *this_ptr_00;
  uint *puVar3;
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
  float *local_14;
  
  bVar5 = 0;
  if ((surface_normal->y < (float)_DAT_005df5ec) && (_DAT_005df5f4 < (double)surface_normal->y)) {
    local_18 = 1;
    local_14 = (float *)&DAT_01c6eaa8;
    if ((hit_actor == (CDemonActor *)0x0) ||
       (iVar1 = (*((hit_actor->vtable)._ub)->allowBulletHoles)(hit_actor), iVar1 != 0)) {
      if ((local_18 != 0) && (iVar1 = 0, 0 < _DAT_01c6eaa0)) {
        do {
          local_3c = impact_pos->x - *local_14;
          afStack_38[0] = impact_pos->y - local_14[1];
          afStack_38[1] = impact_pos->z - local_14[2];
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
              (float)_DAT_005df5fc) goto LAB_004b57a0;
          iVar1 = iVar1 + 1;
          local_14 = local_14 + 0xf;
        } while (iVar1 < _DAT_01c6eaa0);
      }
      if (local_18 != 0) {
        this_ptr_00 = core_fire_cpp_allocateBulletHole_FUN_004b4ac0();
        core_fire_cpp_CBulletHole_init_FUN_004ac3e0(this_ptr_00,impact_pos,surface_normal,hit_actor)
        ;
      }
    }
  }
LAB_004b57a0:
  iVar1 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00453390
                    (&g_CDemonCameraInstance,impact_pos,0.5);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = _DAT_01c58a9c * 0x2c;
      _DAT_01c58a9c = _DAT_01c58a9c + 1;
      if (0x7ff < _DAT_01c58a9c) {
        _DAT_01c58a9c = 0;
      }
      iVar1 = iVar1 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_004abeb0
                ((CSmokeParticle *)(&DAT_01c58aa0 + iVar2),impact_pos,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar1 < 8);
    switch(ground_type) {
    case 2:
    case 5:
    case 8:
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                  (this_ptr,impact_pos,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      } while (iVar1 < 8);
    }
  }
  puVar3 = &DAT_0061cb70;
  pcVar4 = acStack_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  *(ushort *)pcVar4 = *(ushort *)puVar3;
  switch(ground_type) {
  case 2:
  case 8:
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar1 != 0) {
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
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar1 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004e7010(GROUND_TYPE_DIRT);
      _sprintf(acStack_70,"ric-%s.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 5:
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar1 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004e7010(GROUND_TYPE_METAL);
      _sprintf(acStack_70,"ric-%s!?.wav");
      if (acStack_70[0] == '\0') {
        return;
      }
      goto LAB_004b59bb;
    }
    break;
  case 7:
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(0.16666667);
    if (iVar1 != 0) {
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
            (0x02C82A60,(CDemonActor *)0x0,acStack_70,impact_pos,0.17);
  return;
}
