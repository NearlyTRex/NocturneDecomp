// Name: core_hostage.cpp_FUN_004d2da0
// Address: 004d2da0
// Address Range: [[004d2da0, 004d2dee]]
// Convention: unknown
// Signature: void core_hostage_cpp_FUN_004d2da0(CNPC *param_1,int param_2)

#include "nocturne.h"

void core_hostage_cpp_FUN_004d2da0(CNPC *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))(param_1);
  if (0 < iVar1) {
    iVar1 = _stricmp((char *)param_1,"?ScatDazzle" + 1);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        *(uint *)&param_1->field_0x2568 = 1;
      }
      core_npc_cpp_FUN_005108d0(param_1,param_2);
      return;
    }
  }
  return;
}
