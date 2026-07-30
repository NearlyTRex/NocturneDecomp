// Name: core_turret.cpp_CTurret_stopUsing_FUN_0054a900
// Address: 0054a900
// Address Range: [[0054a900, 0054a91b]]
// Convention: unknown
// Signature: void core_turret_cpp_CTurret_stopUsing_FUN_0054a900(int param_1,int param_2)

#include "nocturne.h"

void core_turret_cpp_CTurret_stopUsing_FUN_0054a900(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x854)) {
    return;
  }
  *(uint *)(param_1 + 0x854) = 0;
  return;
}
