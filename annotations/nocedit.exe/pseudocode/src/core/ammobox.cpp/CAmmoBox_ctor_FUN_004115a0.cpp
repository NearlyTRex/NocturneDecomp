// Name: core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
// Address: 004115a0
// Address Range: [[004115a0, 0041164f]]
// Convention: __cdecl
// Signature: CAmmoBox * core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox * this_ptr)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CAmmoBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"ammobag.kfm");
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
  this_ptr_00[1].part_visibility_flags[0x12] = 0;
  this_ptr_00[1].part_visibility_flags[0x13] = 0;
  this_ptr_00[1].part_visibility_flags[0x14] = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 0x15) = 0;
  this_ptr_00[1].part_visibility_flags[0x1d] = 0;
  return (CAmmoBox *)(this_ptr_00[-1].part_visibility_flags + 9);
}
