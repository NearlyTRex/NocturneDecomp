// Name: core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
// Address: 0040eb70
// Address Range: [[0040eb70, 0040ebf0]]
// Convention: __cdecl
// Signature: CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(CAmmo *this_ptr)

#include "nocturne.h"

CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(CAmmo *this_ptr)

{
  char cVar1;
  int iVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  iVar2 = core_actor_cpp_FUN_00409d30(this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(iVar2 + 0x150));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_ammo_cpp_FUN_0040ec00_00599454;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"bullet.kfm");
  pcVar3 = "CGun";
  pCVar4 = this_ptr_00 + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].part_visibility_flags[0x10] = 0x14;
  this_ptr_00[1].part_visibility_flags[0x11] = 0;
  return (CAmmo *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
