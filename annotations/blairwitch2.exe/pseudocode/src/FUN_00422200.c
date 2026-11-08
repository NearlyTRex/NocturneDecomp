// Name: FUN_00422200
// Address: 00422200
// Address Range: [[00422200, 00422218]]
// Convention: unknown
// Signature: void FUN_00422200(undefined4 *param_1)

#include "nocturne.h"

void FUN_00422200(uint *param_1)

{
  param_1[0xe] = 0x41e00000;
  *param_1 = 0x43800000;
  param_1[0xf] = &PTR_FUN_005f4024;
  return;
}
