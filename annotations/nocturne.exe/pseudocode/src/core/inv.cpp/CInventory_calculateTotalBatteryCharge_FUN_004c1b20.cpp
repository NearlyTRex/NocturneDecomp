// Name: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20
// Address: 004c1b20
// Address Range: [[004c1b20, 004c1b8c]]
// Convention: __cdecl
// Signature: float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20(int param_1,float param_2)

#include "nocturne.h"

float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004c1b20(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_20;
  
  local_20 = 1.0 / param_2;
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(iVar3 + 0xc),CDemonActorType_00764674.name_hash);
      if (iVar1 != 0) {
        local_20 = 1.0 / *(float *)(iVar1 + 0x2d0) + local_20;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 1.0 / local_20;
}
