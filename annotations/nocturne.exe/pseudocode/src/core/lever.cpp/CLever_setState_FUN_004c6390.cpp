// Name: core_lever.cpp_CLever_setState_FUN_004c6390
// Address: 004c6390
// Address Range: [[004c6390, 004c64f8]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_setState_FUN_004c6390(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_setState_FUN_004c6390(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(float *)(param_1 + 0x2d4) != param_2) {
    if (*(int *)(0x01CC9450 + 4) == 0) {
      if ((param_2 <= 0.0) && (0.0 < *(float *)(param_1 + 0x2d4))) {
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x33c);
      }
      if ((1.0 <= param_2) && (*(float *)(param_1 + 0x2d4) < 1.0)) {
        core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1 + 0x2d8);
      }
    }
    if (((0.0 < param_2) && (*(float *)(param_1 + 0x2d4) <= 0.0)) ||
       (((int)param_2 < 0x3f800000 && (1.0 <= *(float *)(param_1 + 0x2d4))))) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x3a0);
    }
    *(float *)(param_1 + 0x2d4) = param_2;
    if (*(int *)(param_1 + 0x408) != 0) {
      core_lever_cpp_CLever_setState_FUN_004c6390(*(int *)(param_1 + 0x408),param_2);
    }
    iVar2 = 0;
    for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x14cd6c); iVar3 = iVar3 + 1) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(iVar2 + 0x14cd70 + 0x01E57284),
                         g_CLeverActorType_01cc3628.name_hash);
      if ((iVar1 != 0) && (param_1 == *(int *)(iVar1 + 0x408))) {
        core_lever_cpp_CLever_setState_FUN_004c6390(iVar1,param_2);
      }
      iVar2 = iVar2 + 4;
    }
  }
  return;
}
