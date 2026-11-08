// Name: FUN_00419eb0
// Address: 00419eb0
// Address Range: [[00419eb0, 00419f25]]
// Convention: unknown
// Signature: void FUN_00419eb0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00419eb0(int param_1,int param_2)

{
  float fVar1;
  
  FUN_00551050(*(uint *)(param_1 + 0x10b08));
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0x3f800000;
    FUN_0041a0c0(param_1);
    FUN_00488890(param_1,param_2);
    return;
  }
  FUN_00503620(param_1 + 0x2b4,3,1);
  FUN_00488890(param_1,param_2);
  return;
}
