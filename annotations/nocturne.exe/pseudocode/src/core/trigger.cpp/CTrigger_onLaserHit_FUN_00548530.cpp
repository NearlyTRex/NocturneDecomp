// Name: core_trigger.cpp_CTrigger_onLaserHit_FUN_00548530
// Address: 00548530
// Address Range: [[00548530, 0054857c]]
// Convention: unknown
// Signature: void core_trigger_cpp_CTrigger_onLaserHit_FUN_00548530(int param_1,int param_2)

#include "nocturne.h"

void core_trigger_cpp_CTrigger_onLaserHit_FUN_00548530(int param_1,int param_2)

{
  FUN_0040ab10(param_1,param_2);
  if ((*(int *)(param_1 + 0x16c) == 5) && (*(int *)(param_1 + 0x2ec) == *(int *)(param_2 + 8))) {
    *(uint *)(param_1 + 0x2e8) = 1;
  }
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x48) = 0x3f800000;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return;
}
