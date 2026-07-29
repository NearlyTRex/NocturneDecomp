// Name: core_spike.cpp_CSpike_ctor_FUN_00533020
// Address: 00533020
// Address Range: [[00533020, 00533159]]
// Convention: __cdecl
// Signature: CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_00533020(CSpike *this_ptr)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_00533020(CSpike *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "none";
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CSpikeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"bgate.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  piVar5 = this_ptr_00[1].part_visibility_flags + 7;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = this_ptr_00[1].model_name + 8;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = this_ptr_00[1].model_name + 0x6c;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = this_ptr_00[1].model_name + 0xd0;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[2].part_visibility_flags[0xc] = 0x3f800000;
  this_ptr_00[2].part_visibility_flags[0xd] = 0x3f800000;
  *(byte *)(this_ptr_00[2].part_visibility_flags + 0xf) = 0;
  this_ptr_00[2].model_name[0x28] = '\0';
  this_ptr_00[2].model_name[0x8c] = '\0';
  this_ptr_00[2].model_name[0x8d] = '\0';
  this_ptr_00[2].model_name[0x8e] = -0x80;
  this_ptr_00[2].model_name[0x8f] = '?';
  this_ptr_00[2].model_name[0x90] = -0x33;
  this_ptr_00[2].model_name[0x91] = -0x34;
  this_ptr_00[2].model_name[0x92] = -0x34;
  this_ptr_00[2].model_name[0x93] = '=';
  this_ptr_00[2].model_name[0x94] = '\0';
  this_ptr_00[2].model_name[0x95] = '\0';
  this_ptr_00[2].model_name[0x96] = '\0';
  this_ptr_00[2].model_name[0x97] = '\0';
  return (CSpike *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
