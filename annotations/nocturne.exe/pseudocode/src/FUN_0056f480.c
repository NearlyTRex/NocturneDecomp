// Name: FUN_0056f480
// Address: 0056f480
// Address Range: [[0056f480, 0056f4ed]]
// Convention: unknown
// Signature: undefined1 * FUN_0056f480(uint *param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

byte * FUN_0056f480(uint *param_1,byte *param_2,int param_3)

{
  byte *puVar1;
  uint local_18;
  uint local_14;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  puVar1 = param_2;
  if ((param_3 == 10) && ((local_14 & 0x80000000) != 0)) {
    *param_2 = 0x2d;
    local_14 = ~local_14;
    puVar1 = param_2 + 1;
    local_18 = ~local_18 + 1;
    if (local_18 == 0) {
      local_14 = local_14 + 1;
    }
  }
  FUN_0056f3e0(&local_18,puVar1,param_3);
  return param_2;
}
