// Name: core_anvil.cpp_CAnvil_ctor_FUN_0040ea30
// Address: 0040ea30
// Address Range: [[0040ea30, 0040eaba]]
// Convention: __cdecl
// Signature: CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_0040ea30(CAnvil *this_ptr)

#include "nocturne.h"

CAnvil * __cdecl core_anvil_cpp_CAnvil_ctor_FUN_0040ea30(CAnvil *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "acmeanvilinc";
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CAnvilVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"question.kfm");
  *(uint *)&this_ptr_00[1].field_0x64 = 0x41c80000;
  *(uint *)&this_ptr_00[1].field_0x68 = 0;
  pCVar4 = this_ptr_00 + 1;
  *(uint *)&this_ptr_00[1].field_0x6c = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar4 = cVar1;
    if (cVar1 == '\0') {
      return (CAnvil *)&this_ptr_00[-2].field_0x44;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->field_0x1 = cVar1;
    pCVar4 = (CKeyFramedModelInstance *)&pCVar4->field_0x2;
  } while (cVar1 != '\0');
  return (CAnvil *)&this_ptr_00[-2].field_0x44;
}
