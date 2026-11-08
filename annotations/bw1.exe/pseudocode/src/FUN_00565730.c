// Name: FUN_00565730
// Address: 00565730
// Address Range: [[00565730, 00565752]]
// Convention: unknown
// Signature: void FUN_00565730(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00565730(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x35ac) = param_2;
  FUN_00566fd0(param_1);
  FUN_00567180(param_1);
  return;
}
