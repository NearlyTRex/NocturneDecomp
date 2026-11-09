// Name: core_actor.cpp_FUN_00408a40
// Address: 00408a40
// Address Range: [[00408a40, 00408afb]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_FUN_00408a40(CDemonActor *param_1,undefined4 param_2,undefined4 *param_3)

#include "nocturne.h"

uint core_actor_cpp_FUN_00408a40(CDemonActor *param_1,uint param_2,uint *param_3)

{
  CDemonSet *pCVar1;
  uint uVar2;
  uint uVar3;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  core_setcolid_cpp_FUN_0053ec80(g_CDemonSetPtr);
  uVar2 = core_setcolid_cpp_FUN_0053bc80(g_CDemonSetPtr,&param_1->field_0x20,param_2);
  uVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&g_CDemonSetPtr->field_0x14d144,g_CPlatformClassInfo.name_hash);
  *(uint *)&param_1->field_0xdc = uVar3;
  pCVar1 = g_CDemonSetPtr;
  if (param_3 != (uint *)0x0) {
    if (param_3 != (uint *)&g_CDemonSetPtr->field_0x14d128) {
      *param_3 = *(uint *)&g_CDemonSetPtr->field_0x14d128;
      param_3[1] = *(uint *)&pCVar1->field_0x14d12c;
      param_3[2] = *(uint *)&pCVar1->field_0x14d130;
    }
  }
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(g_CDemonSetPtr);
  return uVar2;
}
