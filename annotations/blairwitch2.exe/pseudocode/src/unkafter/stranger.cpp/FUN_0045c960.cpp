// Name: unkafter_stranger.cpp_FUN_0045c960
// Address: 0045c960
// Address Range: [[0045c960, 0045c9ca]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045c960(int param_1)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_0045c960(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10a74) != 0) && (*(int *)(param_1 + 0x256a4) == 0)) {
    iVar1 = unkafter_stranger_cpp_FUN_0045d1f0(param_1);
    if ((iVar1 == 0) &&
       ((*(int *)(param_1 + 0x25640) == 0 && (*(float *)(param_1 + 0x259b0) <= 0.0)))) {
      iVar1 = core_hero_cpp_FUN_004d0780(param_1,0);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x10a74) = 0;
        return;
      }
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x164))(param_1);
      return;
    }
  }
  return;
}
