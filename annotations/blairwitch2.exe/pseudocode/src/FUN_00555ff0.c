// Name: FUN_00555ff0
// Address: 00555ff0
// Address Range: [[00555ff0, 0055604a]]
// Convention: unknown
// Signature: void FUN_00555ff0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_00555ff0(uint param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_2 * 0x18 + 0x264a5f4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  *(uint *)(param_2 * 0x18 + 0x264a5fc) = 0;
  *(uint *)(param_2 * 0x18 + 0x264a600) = 0;
  *(uint *)(param_2 * 0x18 + 0x264a604) = 0;
  *(uint *)(param_2 * 0x18 + 0x264a608) = 0;
  return;
}
