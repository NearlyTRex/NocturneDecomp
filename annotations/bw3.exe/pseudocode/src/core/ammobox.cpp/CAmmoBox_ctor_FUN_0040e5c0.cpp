// Name: core_ammobox.cpp_CAmmoBox_ctor_FUN_0040e5c0
// Address: 0040e5c0
// Address Range: [[0040e5c0, 0040e66f]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e5c0(CAmmoBox *this_ptr)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_ctor_FUN_0040e5c0(CAmmoBox *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CAmmoBoxVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5b613c);
  pcVar3 = (char *)0x5b6148;
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
  *(uint *)&this_ptr_00[1].field_0x4c = 0;
  *(uint *)&this_ptr_00[1].field_0x50 = 0;
  this_ptr_00[1].field_0x54 = 0;
  *(uint *)&this_ptr_00[1].field_0x74 = 0;
  return (CAmmoBox *)&this_ptr_00[-1].field_0x24;
}
