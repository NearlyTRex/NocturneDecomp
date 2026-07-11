// Name: FUN_004399a0
// Address: 004399a0
// Address Range: [[004399a0, 004399e4]]
// Convention: unknown
// Signature: undefined4 FUN_004399a0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004399a0(int param_1,uint param_2)

{
  if (-1 < *(int *)(param_1 + 0x30)) {
    FUN_004396d0(param_1 + 4,*(int *)(param_1 + 0x30),param_1 + 0x18,param_2);
    *(uint *)(param_1 + 0x30) = 0xffffffff;
  }
  FUN_00438d60(param_1 + 0x18,param_2);
  return 1;
}
