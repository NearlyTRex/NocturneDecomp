// Name: FUN_0056efa0
// Address: 0056efa0
// Address Range: [[0056efa0, 0056efdd]]
// Convention: unknown
// Signature: void FUN_0056efa0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0056efa0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x25640) = param_2;
  if ((param_2 == 0) && (*(int *)(0x01CB6900 + 0x264) != 0)) {
    *(uint *)(0x01CB6900 + 0x264) = 0;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"?flashlit.wav" + 1);
    return;
  }
  return;
}
