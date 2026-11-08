// Name: FUN_0056f730
// Address: 0056f730
// Address Range: [[0056f730, 0056f742]]
// Convention: unknown
// Signature: void FUN_0056f730(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

#include "nocturne.h"

void FUN_0056f730(uint *param_1,uint param_2,ushort param_3)

{
  *param_1 = param_2;
  *(ushort *)(param_1 + 1) = param_3;
  return;
}
