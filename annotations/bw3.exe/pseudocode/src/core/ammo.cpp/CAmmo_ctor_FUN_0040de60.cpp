// Name: core_ammo.cpp_CAmmo_ctor_FUN_0040de60
// Address: 0040de60
// Address Range: [[0040de60, 0040deea]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040de60(CAmmo *this_ptr)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040de60(CAmmo *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  *(byte ***)&this_ptr_00[-1].field_0x178 = &g_CAmmoVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            (this_ptr_00,"bullet.kfm");
  pcVar3 = &DAT_005b60c2;
  pCVar4 = this_ptr_00 + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->field_0x1 = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)&pCVar4->field_0x2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[1].field_0x40 = 0x14;
  *(uint *)&this_ptr_00[1].field_0x44 = 0;
  *(uint *)&this_ptr_00[1].field_0x48 = 0;
  return (CAmmo *)&this_ptr_00[-1].field_0x24;
}
