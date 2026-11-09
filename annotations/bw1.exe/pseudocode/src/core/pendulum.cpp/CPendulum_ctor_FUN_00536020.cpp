// Name: core_pendulum.cpp_CPendulum_ctor_FUN_00536020
// Address: 00536020
// Address Range: [[00536020, 0053612a]]
// Convention: __cdecl
// Signature: CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00536020(CPendulum *this_ptr)

#include "nocturne.h"

CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00536020(CPendulum *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  CKeyFramedModelInstance *pCVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CPendulumVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,"pend.kfm")
  ;
  pcVar3 = "true";
  pCVar5 = this_ptr_00 + 1;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar5->field_0x1 = cVar1;
    pCVar5 = (CKeyFramedModelInstance *)&pCVar5->field_0x2;
  } while (cVar1 != '\0');
  pcVar4 = "none";
  pcVar3 = &this_ptr_00[1].field_0x64;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[1].field_0xc8 = 1;
  *(uint *)&this_ptr_00[1].field_0xcc = 0;
  *(uint *)&this_ptr_00[1].field_0xd4 = 0x3f060a92;
  this_ptr_00[1].field_0xd8 = 0;
  this_ptr_00[1].field_0xfc = 0;
  this_ptr_00[1].field_0x11c = 0;
  *(uint *)&this_ptr_00[1].field_0xf8 = 0;
  *(uint *)&this_ptr_00[1].field_0x154 = 0;
  *(uint *)&this_ptr_00[1].field_0x158 = 0;
  *(uint *)&this_ptr_00[1].field_0x15c = 0;
  *(uint *)&this_ptr_00[1].field_0x160 = 0;
  *(uint *)&this_ptr_00[1].field_0x16c = 0;
  *(uint *)&this_ptr_00[1].field_0x168 = 0;
  return (CPendulum *)&this_ptr_00[-1].field_0x24;
}
