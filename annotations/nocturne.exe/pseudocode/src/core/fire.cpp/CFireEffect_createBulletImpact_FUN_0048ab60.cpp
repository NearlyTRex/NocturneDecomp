// Name: core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60
// Address: 0048ab60
// Address Range: [[0048ab60, 0048acb1] [0048acc0, 0048ae81]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_0048ab60(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)

{
  int iVar1;
  int iVar2;
  CBulletHole *this_ptr_00;
  char *pcVar3;
  float *pfVar4;
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
  
  bVar6 = 0;
  if ((surface_normal->y < (float)0.20000000000000001) && (-0.20000000000000001 < (double)surface_normal->y))
  {
    pfVar4 = (float *)&DAT_01c20148;
    local_14 = 1;
    if ((hit_actor == (CDemonActor *)0x0) ||
       (iVar1 = (*((hit_actor->vtable)._ub)->allowBulletHoles)(hit_actor), iVar1 != 0)) {
      if ((local_14 != 0) && (iVar1 = 0, 0 < _DAT_01c20140)) {
        do {
          local_20 = impact_pos->x - *pfVar4;
          local_1c = impact_pos->y - pfVar4[1];
          local_18 = impact_pos->z - pfVar4[2];
          if (&local_2c != &local_20) {
            local_2c = local_20;
            fStack_28 = local_1c;
            fStack_24 = local_18;
          }
          if (fStack_24 * fStack_24 + local_2c * local_2c + fStack_28 * fStack_28 <
              (float)0.057799999999999997) goto LAB_0048ac45;
          iVar1 = iVar1 + 1;
          pfVar4 = pfVar4 + 0xf;
        } while (iVar1 < _DAT_01c20140);
      }
      if (local_14 != 0) {
        this_ptr_00 = core_fire_cpp_allocateBulletHole_FUN_0048a0e0();
        core_fire_cpp_CBulletHole_init_FUN_00482c80(this_ptr_00,impact_pos,surface_normal,hit_actor)
        ;
      }
    }
  }
LAB_0048ac45:
  iVar1 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00446590
                    ((CDemonCamera *)0x1fb8508,impact_pos,0.5);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar2 = _DAT_01c0a13c * 0x2c;
      _DAT_01c0a13c = _DAT_01c0a13c + 1;
      if (0x7ff < _DAT_01c0a13c) {
        _DAT_01c0a13c = 0;
      }
      iVar1 = iVar1 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_00482780
                ((CSmokeParticle *)(&DAT_01c0a140 + iVar2),impact_pos,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar1 < 8);
    switch(ground_type) {
    case 2:
    case 5:
    case 8:
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (this_ptr,impact_pos,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      } while (iVar1 < 8);
    }
  }
  puVar5 = &DAT_005b8bd8;
  pcVar3 = acStack_60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pcVar3 = *puVar5;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
  }
  *(ushort *)pcVar3 = *(ushort *)puVar5;
  switch(ground_type) {
  case 2:
  case 8:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.16666667);
    if (iVar1 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(GROUND_TYPE_CONCRETE);
      _sprintf(acStack_60,"ric-%s!?.wav",pcVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
    break;
  case 3:
  case 4:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.16666667);
    if (iVar1 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(GROUND_TYPE_DIRT);
      _sprintf(acStack_60,"ric-%s.wav",pcVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
    break;
  case 5:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.16666667);
    if (iVar1 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(GROUND_TYPE_METAL);
      _sprintf(acStack_60,"ric-%s!?.wav",pcVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
    break;
  case 7:
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0.16666667);
    if (iVar1 != 0) {
      pcVar3 = core_ground_cpp_getGroundTypeCode_FUN_004b11b0(GROUND_TYPE_WOOD);
      _sprintf(acStack_60,"ric-%s!?.wav",pcVar3);
      if (acStack_60[0] == '\0') {
        return;
      }
      goto LAB_0048ae60;
    }
  }
  if (acStack_60[0] == '\0') {
    return;
  }
LAB_0048ae60:
  core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
            (0x02DC9450,(CDemonActor *)0x0,acStack_60,impact_pos,0.17);
  return;
}
