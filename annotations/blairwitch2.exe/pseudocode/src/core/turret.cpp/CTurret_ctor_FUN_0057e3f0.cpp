// Name: core_turret.cpp_CTurret_ctor_FUN_0057e3f0
// Address: 0057e3f0
// Address Range: [[0057e3f0, 0057e549]]
// Convention: __cdecl
// Signature: CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_0057e3f0(CTurret *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_0057e3f0(CTurret *this_ptr)

{
  char cVar1;
  CWeapon *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint auStackY_1018 [1016];
  uint uStack_30;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar5 = 0;
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar2[1].base.actor_name + 0xc));
  this_ptr_00[-3].part_visibility_flags[0x11] = (int)&g_CTurretVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(this_ptr_00[-3].part_visibility_flags + 0x12),
             "gturret_head.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
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
  pcVar3 = "CCharacter";
  this_ptr_00[1].model_name[4] = '\0';
  this_ptr_00[1].model_name[5] = '\0';
  this_ptr_00[1].model_name[6] = '\0';
  this_ptr_00[1].model_name[7] = '\0';
  this_ptr_00[-2].part_visibility_flags[0x1d] = 0;
  pcVar4 = this_ptr_00[1].model_name + 0xc;
  this_ptr_00[1].model_name[8] = '\0';
  this_ptr_00[1].model_name[9] = '\0';
  this_ptr_00[1].model_name[10] = '\0';
  this_ptr_00[1].model_name[0xb] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  uStack_18 = 0;
  uStack_10 = 0x3f800000;
  uStack_14 = 0;
  core_actor_cpp_FUN_00408d70((CTurret *)(this_ptr_00[-5].model_name + 0x14),&stack0xffffffe8);
  uStack_24 = uStack_30;
  (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (this_ptr_00[1].model_name + 0xd4 != (char *)&stack0xffffffdc) {
    *(uint *)(this_ptr_00[1].model_name + 0xd4) = uStack_24;
    *(uint *)(this_ptr_00[1].model_name + 0xd8) = uStack_20;
    *(uint *)(this_ptr_00[1].model_name + 0xdc) = uStack_1c;
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
  return (CTurret *)(this_ptr_00[-5].model_name + 0x14);
}
