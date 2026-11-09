// Name: core_spike.cpp_CSpike_ctor_FUN_00566860
// Address: 00566860
// Address Range: [[00566860, 00566999]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_00566860(CSpike *this_ptr)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_00566860(CSpike *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = (char *)0x5d5b13;
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CSpikeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5d5b09);
  *(uint *)(this_ptr_00 + 1) = 0;
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  pcVar4 = &this_ptr_00[1].field_0x1c;
  *(uint *)&this_ptr_00[1].field_0x8 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d5b18;
  pcVar4 = &this_ptr_00[1].field_0x80;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d5b1d;
  pcVar4 = &this_ptr_00[1].field_0xe4;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d5b22;
  pcVar4 = &this_ptr_00[1].field_0x148;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[2].field_0x30 = 0x3f800000;
  *(uint *)&this_ptr_00[2].field_0x34 = 0x3f800000;
  this_ptr_00[2].field_0x3c = 0;
  this_ptr_00[2].field_0xa0 = 0;
  *(uint *)&this_ptr_00[2].field_0x104 = 0x3f800000;
  *(uint *)&this_ptr_00[2].field_0x108 = 0x3dcccccd;
  *(uint *)&this_ptr_00[2].field_0x10c = 0;
  return (CSpike *)&this_ptr_00[-1].field_0x24;
}
