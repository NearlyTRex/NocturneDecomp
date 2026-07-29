// Name: core_turret.cpp_CTurret_ctor_FUN_005494a0
// Address: 005494a0
// Address Range: [[005494a0, 005495e7]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005494a0(CTurret *this_ptr)

#include "nocturne.h"

CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005494a0(CTurret *this_ptr)

{
  char cVar1;
  CWeapon *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  CVector3f *pCVar3;
  char *pcVar4;
  char *pcVar5;
  CVector3f local_24;
  CVector3f local_18;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar2[1].base.actor_name + 0xc));
  this_ptr_00[-3].part_visibility_flags[0x11] = (int)&g_CTurretVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)(this_ptr_00[-3].part_visibility_flags + 0x12),
             "gturret_head.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
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
  pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     ((CDemonActor *)(this_ptr_00[-4].part_visibility_flags + 0x1d),&local_24,
                      &local_18);
  if ((CVector3f *)(this_ptr_00[1].model_name + 0xd4) != pCVar3) {
    ((CVector3f *)(this_ptr_00[1].model_name + 0xd4))->x = pCVar3->x;
    *(float *)(this_ptr_00[1].model_name + 0xd8) = pCVar3->y;
    *(float *)(this_ptr_00[1].model_name + 0xdc) = pCVar3->z;
  }
  this_ptr_00[1].model_name[0xe4] = '\0';
  this_ptr_00[1].model_name[0xe5] = '\0';
  this_ptr_00[1].model_name[0xe6] = '\0';
  this_ptr_00[1].model_name[0xe7] = '\0';
  this_ptr_00[1].model_name[0xf4] = '\0';
  this_ptr_00[1].model_name[0xf5] = '\0';
  this_ptr_00[1].model_name[0xf6] = '\0';
  this_ptr_00[1].model_name[0xf7] = '\0';
  this_ptr_00[1].model_name[0xe0] = '\0';
  this_ptr_00[1].model_name[0xe1] = '\0';
  this_ptr_00[1].model_name[0xe2] = '\0';
  this_ptr_00[1].model_name[0xe3] = '\0';
  return (CTurret *)(this_ptr_00[-4].part_visibility_flags + 0x1d);
}
