// Name: core_game.cpp_CGame_processFudge_FUN_0049b260
// Address: 0049b260
// Address Range: [[0049b260, 0049b391]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_processFudge_FUN_0049b260(int param_1)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_processFudge_FUN_0049b260(int param_1)

{
  int iVar1;
  uint uStack_18;
  
  iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x9bc) != 0)) {
    uStack_18 = *(float *)(param_1 + 0x9c0);
    iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x38);
    if (iVar1 != 0) {
      uStack_18 = uStack_18 * (float)0.10000000000000001;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4b);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0x9bc) = **(float **)(param_1 + 0x9bc) - uStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4d);
    if (iVar1 != 0) {
      **(float **)(param_1 + 0x9bc) = **(float **)(param_1 + 0x9bc) + uStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x48);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 8) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 8) - uStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x50);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 8) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 8) + uStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x1e);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 4) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 4) - uStack_18;
    }
    iVar1 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x10);
    if (iVar1 != 0) {
      *(float *)(*(int *)(param_1 + 0x9bc) + 4) =
           *(float *)(*(int *)(param_1 + 0x9bc) + 4) + uStack_18;
      return;
    }
  }
  return;
}
