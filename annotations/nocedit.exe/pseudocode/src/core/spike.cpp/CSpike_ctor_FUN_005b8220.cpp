// Name: core_spike.cpp_CSpike_ctor_FUN_005b8220
// Address: 005b8220
// Address Range: [[005b8220, 005b8359]]
// Convention: __cdecl
// Signature: CSpike * core_spike.cpp_CSpike_ctor_FUN_005b8220(CSpike * this_ptr)

#include "nocturne.h"

CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_005b8220(CSpike *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pcVar3 = "none";
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CSpikeVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
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
  pcVar3 = this_ptr_00[1].animation_state + 8;
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
  pcVar3 = this_ptr_00[1].animation_state + 0x6c;
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
  this_ptr_00[2].animation_state[0x28] = '\0';
  this_ptr_00[2].animation_state[0x29] = '\0';
  this_ptr_00[2].animation_state[0x2a] = -0x80;
  this_ptr_00[2].animation_state[0x2b] = '?';
  this_ptr_00[2].animation_state[0x2c] = -0x33;
  this_ptr_00[2].animation_state[0x2d] = -0x34;
  this_ptr_00[2].animation_state[0x2e] = -0x34;
  this_ptr_00[2].animation_state[0x2f] = '=';
  this_ptr_00[2].animation_state[0x30] = '\0';
  this_ptr_00[2].animation_state[0x31] = '\0';
  this_ptr_00[2].animation_state[0x32] = '\0';
  this_ptr_00[2].animation_state[0x33] = '\0';
  return (CSpike *)(this_ptr_00[-1].part_visibility_flags + 9);
}
