// Name: core_fire.cpp_CFireEffect_createBulletImpact_FUN_004a2090
// Address: 004a2090
// Address Range: [[004a2090, 004a21c7] [004a21d0, 004a23b4]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor,int decal_type)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004a2090(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor,int decal_type)

{
  int iVar1;
  int iVar2;
  CSmokeParticle *this_ptr_00;
  CBulletHole *this_ptr_01;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  float afStackY_1024 [998];
  char local_70 [52];
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  CBulletHole *local_14;
  
  bVar5 = 0;
  local_18 = 1;
  local_14 = g_CBulletHole_ARRAY_01c8aea8;
  if ((hit_actor == (CDemonActor *)0x0) ||
     (iVar2 = (*((hit_actor->vtable)._ub)->allowBulletHoles)(hit_actor), iVar2 != 0)) {
    if ((local_18 != 0) && ((decal_type == 0 && (iVar2 = 0, 0 < g_INT_01c8aea0)))) {
      do {
        local_3c = impact_pos->x - (local_14->position).x;
        local_38[0] = impact_pos->y - (local_14->position).y;
        local_38[1] = impact_pos->z - (local_14->position).z;
        local_38[2] = local_3c;
        local_38[(uint)bVar5 * -2 + 3] = local_38[(uint)bVar5 * -2];
        local_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             local_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (local_38 + 5 != local_38 + 2) {
          local_24 = local_38[2];
          local_20 = local_38[3];
          local_1c = local_28;
        }
        if (local_1c * local_1c + local_24 * local_24 + local_20 * local_20 <
            (float)0.057799999999999997) goto LAB_004a215d;
        iVar2 = iVar2 + 1;
        local_14 = local_14 + 1;
      } while (iVar2 < g_INT_01c8aea0);
    }
    if (local_18 != 0) {
      this_ptr_01 = core_fire_cpp_allocateBulletHole_FUN_004a1420();
      core_fire_cpp_CBulletHole_init_FUN_00497290
                (this_ptr_01,impact_pos,surface_normal,hit_actor,decal_type);
    }
  }
LAB_004a215d:
  iVar2 = core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_0044f4d0
                    (&g_CDemonCameraInstance,impact_pos,0.5);
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = g_INT_01c74e9c + 1;
      this_ptr_00 = g_CSmokeParticle_ARRAY_01c74ea0 + g_INT_01c74e9c;
      g_INT_01c74e9c = iVar1;
      if (0x7ff < iVar1) {
        g_INT_01c74e9c = 0;
      }
      iVar2 = iVar2 + 1;
      core_fire_cpp_CSmokeParticle_init_FUN_00496d60
                (this_ptr_00,impact_pos,0.3,(CVector3f *)0x0,0xffff);
    } while (iVar2 < 8);
    switch(ground_type) {
    case 2:
    case 5:
    case 8:
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (this_ptr,impact_pos,(CVector3f *)0x0,0x20000,0x10000,0,0xffff);
      } while (iVar2 < 8);
    }
  }
  pcVar3 = g_CHAR_ARRAY_005fdbf8;
  pcVar4 = local_70;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + ((uint)bVar5 * -2 + 1) * 4;
    pcVar4 = (char *)((int)pcVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  *(ushort *)pcVar4 = *(ushort *)pcVar3;
  switch(ground_type) {
  case 2:
  case 8:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_CONCRETE);
      _sprintf(local_70,"ric-%s!?.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
    break;
  case 3:
  case 4:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_DIRT);
      _sprintf(local_70,"ric-%s.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
    break;
  case 5:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_METAL);
      _sprintf(local_70,"ric-%s!?.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
    break;
  case 7:
    iVar2 = core_actor_cpp_randomChance_FUN_0040cf40(0.16666667);
    if (iVar2 != 0) {
      core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(GROUND_TYPE_WOOD);
      _sprintf(local_70,"ric-%s!?.wav");
      if (local_70[0] == '\0') {
        return;
      }
      goto LAB_004a2392;
    }
  }
  if (local_70[0] == '\0') {
    return;
  }
LAB_004a2392:
  core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70
            (g_CSound_PTR_006045f8,(CDemonActor *)0x0,local_70,impact_pos,0.17);
  return;
}
