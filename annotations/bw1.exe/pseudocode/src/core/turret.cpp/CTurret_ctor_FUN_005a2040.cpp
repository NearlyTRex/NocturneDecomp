// Name: core_turret.cpp_CTurret_ctor_FUN_005a2040
// Address: 005a2040
// Address Range: [[005a2040, 005a2199]]
// Convention: unknown
// Signature: CTurret * core_turret_cpp_CTurret_ctor_FUN_005a2040(CTurret *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTurret * core_turret_cpp_CTurret_ctor_FUN_005a2040(CTurret *this_ptr)

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
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0((CWeapon *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)&pCVar2[1].field_0xc);
  *(byte **)&this_ptr_00[-3].field_0x44 = &g_CTurretVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            ((CKeyFramedModelInstance *)&this_ptr_00[-3].field_0x48,"gturret_head.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (this_ptr_00,"gturret_tripod.kfm");
  *(uint *)(this_ptr_00 + 1) = 0;
  this_ptr_00[1].field_0x4 = 0;
  *(uint *)&this_ptr_00[1].field_0x68 = 0x40400000;
  *(uint *)&this_ptr_00[1].field_0x6c = 0x40c00000;
  *(uint *)&this_ptr_00[1].field_0x70 = 0x40400000;
  *(uint *)&this_ptr_00[1].field_0x74 = 0x3e4ccccd;
  *(uint *)&this_ptr_00[1].field_0x78 = 0x41f00000;
  pcVar3 = "CCharacter";
  *(uint *)&this_ptr_00[1].field_0x7c = 0;
  *(uint *)&this_ptr_00[-2].field_0x74 = 0;
  pcVar4 = &this_ptr_00[1].field_0x84;
  *(uint *)&this_ptr_00[1].field_0x80 = 0;
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
  core_actor_cpp_FUN_00408b40(&this_ptr_00[-4].field_0x6c,&stack0xffffffe8);
  uStack_24 = uStack_30;
  (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe] =
       *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((uint *)&this_ptr_00[1].field_0x14c != &stack0xffffffdc) {
    *(uint *)&this_ptr_00[1].field_0x14c = uStack_24;
    *(uint *)&this_ptr_00[1].field_0x150 = uStack_20;
    *(uint *)&this_ptr_00[1].field_0x154 = uStack_1c;
  }
  *(uint *)&this_ptr_00[1].field_0x15c = 0;
  *(uint *)&this_ptr_00[1].field_0x16c = 0;
  *(uint *)&this_ptr_00[1].field_0x158 = 0;
  return (CTurret *)&this_ptr_00[-4].field_0x6c;
}
