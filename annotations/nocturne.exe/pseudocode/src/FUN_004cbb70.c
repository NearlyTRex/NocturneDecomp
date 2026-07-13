// Name: FUN_004cbb70
// Address: 004cbb70
// Address Range: [[004cbb70, 004cbbbe]]
// Convention: unknown
// Signature: undefined4 FUN_004cbb70(int param_1)

#include "nocturne.h"

uint FUN_004cbb70(int param_1)

{
  FUN_00409f20(param_1);
  *(uint *)(0x01C775EC + 500) = 1;
  FUN_004544d0(param_1 + 0x150,0,0xffffffff);
  *(uint *)(0x01C775EC + 500) = 0;
  FUN_00409f60(param_1);
  return 1;
}
