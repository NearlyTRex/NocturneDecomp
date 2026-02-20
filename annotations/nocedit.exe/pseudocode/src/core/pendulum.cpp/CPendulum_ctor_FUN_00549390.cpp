// Name: core_pendulum.cpp_CPendulum_ctor_FUN_00549390
// Address: 00549390
// Address Range: [[00549390, 0054949a]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00549390(CPendulum *this_ptr)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00549390(CPendulum *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  CKeyFramedModelInstance *pCVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CPendulumVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"pend.kfm")
  ;
  pcVar3 = "true";
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
  pcVar3 = "none";
  piVar5 = this_ptr_00[1].part_visibility_flags + 0x19;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].model_name[0x50] = '\x01';
  this_ptr_00[1].model_name[0x51] = '\0';
  this_ptr_00[1].model_name[0x52] = '\0';
  this_ptr_00[1].model_name[0x53] = '\0';
  this_ptr_00[1].model_name[0x54] = '\0';
  this_ptr_00[1].model_name[0x55] = '\0';
  this_ptr_00[1].model_name[0x56] = '\0';
  this_ptr_00[1].model_name[0x57] = '\0';
  this_ptr_00[1].model_name[0x5c] = -0x6e;
  this_ptr_00[1].model_name[0x5d] = '\n';
  this_ptr_00[1].model_name[0x5e] = '\x06';
  this_ptr_00[1].model_name[0x5f] = '?';
  this_ptr_00[1].model_name[0x60] = '\0';
  this_ptr_00[1].model_name[0x84] = '\0';
  this_ptr_00[1].model_name[0xa4] = '\0';
  this_ptr_00[1].model_name[0x80] = '\0';
  this_ptr_00[1].model_name[0x81] = '\0';
  this_ptr_00[1].model_name[0x82] = '\0';
  this_ptr_00[1].model_name[0x83] = '\0';
  this_ptr_00[1].model_name[0xdc] = '\0';
  this_ptr_00[1].model_name[0xdd] = '\0';
  this_ptr_00[1].model_name[0xde] = '\0';
  this_ptr_00[1].model_name[0xdf] = '\0';
  this_ptr_00[1].model_name[0xe0] = '\0';
  this_ptr_00[1].model_name[0xe1] = '\0';
  this_ptr_00[1].model_name[0xe2] = '\0';
  this_ptr_00[1].model_name[0xe3] = '\0';
  this_ptr_00[1].model_name[0xe4] = '\0';
  this_ptr_00[1].model_name[0xe5] = '\0';
  this_ptr_00[1].model_name[0xe6] = '\0';
  this_ptr_00[1].model_name[0xe7] = '\0';
  this_ptr_00[1].model_name[0xe8] = '\0';
  this_ptr_00[1].model_name[0xe9] = '\0';
  this_ptr_00[1].model_name[0xea] = '\0';
  this_ptr_00[1].model_name[0xeb] = '\0';
  this_ptr_00[1].model_name[0xf4] = '\0';
  this_ptr_00[1].model_name[0xf5] = '\0';
  this_ptr_00[1].model_name[0xf6] = '\0';
  this_ptr_00[1].model_name[0xf7] = '\0';
  this_ptr_00[1].model_name[0xf0] = '\0';
  this_ptr_00[1].model_name[0xf1] = '\0';
  this_ptr_00[1].model_name[0xf2] = '\0';
  this_ptr_00[1].model_name[0xf3] = '\0';
  return (CPendulum *)(this_ptr_00[-1].part_visibility_flags + 9);
}
