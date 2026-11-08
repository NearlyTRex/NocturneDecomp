// Name: FUN_00428220
// Address: 00428220
// Address Range: [[00428220, 00428238]]
// Convention: unknown
// Signature: void FUN_00428220(undefined4 *param_1)

#include "nocturne.h"

void FUN_00428220(uint *param_1)

{
  param_1[0xe] = 0x41e00000;
  *param_1 = 0x43800000;
  param_1[0xf] = &PTR_FUN_005fd414;
  return;
}
