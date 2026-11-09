// Name: core_drip.cpp_CDrip_ctor_FUN_0046ea50
// Address: 0046ea50
// Address Range: [[0046ea50, 0046eb2e]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0046ea50(CDrip *this_ptr)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0046ea50(CDrip *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CDripVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5bc703);
  *(uint *)(this_ptr_00 + 1) = 2;
  *(uint *)&this_ptr_00[1].field_0x4 = 1;
  *(uint *)&this_ptr_00[1].field_0x38 = 0;
  *(uint *)&this_ptr_00[1].field_0x34 = *(uint *)&this_ptr_00[1].field_0x38;
  *(uint *)&this_ptr_00[1].field_0x30 = *(uint *)&this_ptr_00[1].field_0x34;
  *(uint *)&this_ptr_00[1].field_0xc = 0x40a00000;
  *(uint *)&this_ptr_00[1].field_0x10 = 0x41200000;
  *(uint *)&this_ptr_00[1].field_0x8 = 0;
  pcVar3 = (char *)0x5bc70e;
  *(uint *)&this_ptr_00[1].field_0x14 = 0;
  *(uint *)&this_ptr_00[1].field_0x3c = 0x41200000;
  pcVar4 = &this_ptr_00[1].field_0x40;
  *(uint *)&this_ptr_00[1].field_0x64 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[1].field_0x60 = 0;
  return (CDrip *)&this_ptr_00[-1].field_0x24;
}
