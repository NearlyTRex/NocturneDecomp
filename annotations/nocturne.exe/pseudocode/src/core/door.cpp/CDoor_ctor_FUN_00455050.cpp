// Name: core_door.cpp_CDoor_ctor_FUN_00455050
// Address: 00455050
// Address Range: [[00455050, 004551ee]]
// Convention: __cdecl
// Signature: CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_00455050(CDoor *this_ptr)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_00455050(CDoor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  core_event_cpp_CRuleList_FUN_00481620((CRuleList *)(this_ptr_00[2].part_visibility_flags + 10));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CDoorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr_00,"churchd01.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  this_ptr_00[1].part_visibility_flags[2] = 1;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[4] = 0;
  if ((int *)(this_ptr_00[5].model_name + 0x58) != this_ptr_00[-1].part_visibility_flags + 0x13) {
    *(int *)(this_ptr_00[5].model_name + 0x58) = this_ptr_00[-1].part_visibility_flags[0x13];
    *(int *)(this_ptr_00[5].model_name + 0x5c) = this_ptr_00[-1].part_visibility_flags[0x14];
    *(int *)(this_ptr_00[5].model_name + 0x60) = this_ptr_00[-1].part_visibility_flags[0x15];
  }
  pcVar3 = "defaultDoorOpen";
  piVar5 = this_ptr_00[1].part_visibility_flags + 5;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  pcVar4 = "defaultDoorClose";
  pcVar3 = this_ptr_00[1].model_name;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "door-locked.wav";
  this_ptr_00[4].model_name[0xa4] = '\0';
  piVar5 = this_ptr_00[5].part_visibility_flags + 0x1a;
  *(byte *)(this_ptr_00[5].part_visibility_flags + 1) = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[5].model_name[0x54] = '\0';
  this_ptr_00[5].model_name[0x55] = '\0';
  this_ptr_00[5].model_name[0x56] = '\0';
  this_ptr_00[5].model_name[0x57] = '\0';
  this_ptr_00[5].model_name[0x70] = '\0';
  this_ptr_00[5].model_name[0x71] = '\0';
  this_ptr_00[5].model_name[0x72] = '\0';
  this_ptr_00[5].model_name[0x73] = '\0';
  this_ptr_00[5].model_name[0x74] = '\0';
  this_ptr_00[5].model_name[0x75] = '\0';
  this_ptr_00[5].model_name[0x76] = -0x80;
  this_ptr_00[5].model_name[0x77] = '?';
  this_ptr_00[5].model_name[0x78] = '\0';
  this_ptr_00[5].model_name[0x79] = '\0';
  this_ptr_00[5].model_name[0x7a] = -0x80;
  this_ptr_00[5].model_name[0x7b] = '?';
  this_ptr_00[5].model_name[0x7c] = '\0';
  this_ptr_00[5].model_name[0x7d] = '\0';
  this_ptr_00[5].model_name[0x7e] = -0x80;
  this_ptr_00[5].model_name[0x7f] = '?';
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].model_name[100] = '\0';
  this_ptr_00[1].model_name[200] = '\0';
  this_ptr_00[5].model_name[0x8c] = '\0';
  this_ptr_00[5].model_name[0x8d] = '\0';
  this_ptr_00[5].model_name[0x8e] = '\0';
  this_ptr_00[5].model_name[0x8f] = '\0';
  this_ptr_00[5].model_name[0x90] = '\0';
  this_ptr_00[5].model_name[0x91] = '\0';
  this_ptr_00[5].model_name[0x92] = '\0';
  this_ptr_00[5].model_name[0x93] = '\0';
  this_ptr_00[5].model_name[0x94] = '\x01';
  this_ptr_00[5].model_name[0x95] = '\0';
  this_ptr_00[5].model_name[0x96] = '\0';
  this_ptr_00[5].model_name[0x97] = '\0';
  this_ptr_00[5].model_name[0x98] = '\0';
  this_ptr_00[5].model_name[0x99] = '\0';
  this_ptr_00[5].model_name[0x9a] = '\0';
  this_ptr_00[5].model_name[0x9b] = '\0';
  this_ptr_00[5].model_name[0x9c] = '\x03';
  this_ptr_00[5].model_name[0x9d] = '\0';
  this_ptr_00[5].model_name[0x9e] = '\0';
  this_ptr_00[5].model_name[0x9f] = '\0';
  this_ptr_00[5].model_name[0xa0] = '\x01';
  this_ptr_00[5].model_name[0xa1] = '\0';
  this_ptr_00[5].model_name[0xa2] = '\0';
  this_ptr_00[5].model_name[0xa3] = '\0';
  return (CDoor *)(this_ptr_00[-1].part_visibility_flags + 0xb);
}
