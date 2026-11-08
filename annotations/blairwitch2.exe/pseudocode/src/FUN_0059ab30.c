// Name: FUN_0059ab30
// Address: 0059ab30
// Address Range: [[0059ab30, 0059ab4e]]
// Convention: unknown
// Signature: void FUN_0059ab30(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059ab30(uint *param_1)

{
  _DAT_026677b4 = _DAT_026677b4 + 1;
  *param_1 = &PTR_FUN_005fe4f4;
  *(uint **)(&DAT_026677b4 + _DAT_026677b4 * 4) = param_1;
  return;
}
