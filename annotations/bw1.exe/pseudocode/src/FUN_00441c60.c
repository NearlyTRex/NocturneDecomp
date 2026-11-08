// Name: FUN_00441c60
// Address: 00441c60
// Address Range: [[00441c60, 00441c94]]
// Convention: unknown
// Signature: undefined4 * FUN_00441c60(undefined4 *param_1)

#include "nocturne.h"

uint * FUN_00441c60(uint *param_1)

{
  *param_1 = 0;
  FUN_005bfb70(param_1 + 1,0,400);
  FUN_005bfb70(param_1 + 0x65,0,0x28);
  return param_1;
}
