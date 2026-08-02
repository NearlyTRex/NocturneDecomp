// Name: core_anvil.cpp_CAnvil_ctor_FUN_0040f560
// Address: 0040f560
// Address Range: [[0040f560, 0040f5ea]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_0040f560(CAnvil *this_ptr)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_0040f560(CAnvil *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "acmeanvilinc";
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CAnvilVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"question.kfm");
  this_ptr_00[1].part_visibility_flags[0x19] = 0x41c80000;
  this_ptr_00[1].part_visibility_flags[0x1a] = 0;
  pCVar4 = this_ptr_00 + 1;
  this_ptr_00[1].part_visibility_flags[0x1b] = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4->part_visibility_flags = cVar1;
    if (cVar1 == '\0') {
      return (CAnvil *)(this_ptr_00[-1].part_visibility_flags + 0xb);
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pCVar4->part_visibility_flags + 1) = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)((int)pCVar4->part_visibility_flags + 2);
  } while (cVar1 != '\0');
  return (CAnvil *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
