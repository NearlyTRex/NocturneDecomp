// Name: core_turret.cpp_CTurret_ctor_FUN_005e20f0
// Address: 005e20f0
// Address Range: [[005e20f0, 005e2237]]
// Convention: __cdecl
// Signature: CTurret * core_turret.cpp_CTurret_ctor_FUN_005e20f0(CTurret * this_ptr)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005e20f0(CTurret *this_ptr)

{
  char cVar1;
  CWeapon *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  CVector3f *pCVar3;
  char *pcVar4;
  char *pcVar5;
  CVector3f local_24;
  CVector3f local_18;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2[1].base.actor_name + 0xc));
  this_ptr_00[-3].part_visibility_flags[0x11] = (int)&g_CTurretVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(this_ptr_00[-3].part_visibility_flags + 0x12),
             "gturret_head.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"gturret_tripod.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 1) = 0;
  this_ptr_00[1].part_visibility_flags[0x1a] = 0x40400000;
  this_ptr_00[1].part_visibility_flags[0x1b] = 0x40c00000;
  this_ptr_00[1].part_visibility_flags[0x1c] = 0x40400000;
  this_ptr_00[1].part_visibility_flags[0x1d] = 0x3e4ccccd;
  this_ptr_00[1].model_name[0] = '\0';
  this_ptr_00[1].model_name[1] = '\0';
  this_ptr_00[1].model_name[2] = -0x10;
  this_ptr_00[1].model_name[3] = 'A';
  pcVar4 = "CCharacter";
  this_ptr_00[1].model_name[4] = '\0';
  this_ptr_00[1].model_name[5] = '\0';
  this_ptr_00[1].model_name[6] = '\0';
  this_ptr_00[1].model_name[7] = '\0';
  this_ptr_00[-2].part_visibility_flags[0x1d] = 0;
  pcVar5 = this_ptr_00[1].model_name + 0xc;
  this_ptr_00[1].model_name[8] = '\0';
  this_ptr_00[1].model_name[9] = '\0';
  this_ptr_00[1].model_name[10] = '\0';
  this_ptr_00[1].model_name[0xb] = '\0';
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 1.0;
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)(this_ptr_00[-4].part_visibility_flags + 0x1b),&local_24,
                      &local_18);
  if ((CVector3f *)(this_ptr_00[1].animation_state + 0x70) != pCVar3) {
    ((CVector3f *)(this_ptr_00[1].animation_state + 0x70))->x = pCVar3->x;
    *(float *)(this_ptr_00[1].animation_state + 0x74) = pCVar3->y;
    *(float *)(this_ptr_00[1].animation_state + 0x78) = pCVar3->z;
  }
  this_ptr_00[1].animation_state[0x80] = '\0';
  this_ptr_00[1].animation_state[0x81] = '\0';
  this_ptr_00[1].animation_state[0x82] = '\0';
  this_ptr_00[1].animation_state[0x83] = '\0';
  this_ptr_00[1].animation_state[0x90] = '\0';
  this_ptr_00[1].animation_state[0x91] = '\0';
  this_ptr_00[1].animation_state[0x92] = '\0';
  this_ptr_00[1].animation_state[0x93] = '\0';
  this_ptr_00[1].animation_state[0x7c] = '\0';
  this_ptr_00[1].animation_state[0x7d] = '\0';
  this_ptr_00[1].animation_state[0x7e] = '\0';
  this_ptr_00[1].animation_state[0x7f] = '\0';
  return (CTurret *)(this_ptr_00[-4].part_visibility_flags + 0x1b);
}
