// Name: FUN_004b5270
// Address: 004b5270
// Address Range: [[004b5270, 004b52e9]]
// Convention: unknown
// Signature: undefined4 FUN_004b5270(int param_1)

#include "nocturne.h"

uint FUN_004b5270(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1fa04) == 0) {
    return 0;
  }
  iVar1 = core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
                    (param_1 + 0x1f5a0,*(uint *)(*(int *)(param_1 + 0x1fa04) + 0x988),1);
  if (iVar1 != 0) {
    core_door_cpp_CDoor_onOpened_FUN_00455270(*(uint *)(param_1 + 0x1fa04));
    *(uint *)(param_1 + 0x1fa04) = 0;
    return 1;
  }
  core_door_cpp_CDoor_onLocked_FUN_00456650(*(uint *)(param_1 + 0x1fa04));
  *(uint *)(param_1 + 0x1fa04) = 0;
  return 0;
}
