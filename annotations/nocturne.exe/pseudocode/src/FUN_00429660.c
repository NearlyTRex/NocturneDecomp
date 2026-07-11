// Name: FUN_00429660
// Address: 00429660
// Address Range: [[00429660, 004296bd]]
// Convention: unknown
// Signature: void FUN_00429660(int param_1,float param_2)

#include "nocturne.h"

void FUN_00429660(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  if (-1 < *(int *)(param_1 + 0x25c0)) {
    iVar2 = *(int *)(param_1 + 0x25c0) * 0x54c;
    iVar1 = FUN_004e1890(param_1 + 0x150);
    *(float *)(param_1 + 0x25c4) =
         param_2 * *(float *)(iVar2 + 0x988 + iVar1) + *(float *)(param_1 + 0x25c4);
    if ((float)*(int *)(iVar2 + 0x9cc + iVar1) <= *(float *)(param_1 + 0x25c4)) {
      *(uint *)(param_1 + 0x25c0) = 0xffffffff;
      return;
    }
  }
  return;
}
