// Name: FUN_00493110
// Address: 00493110
// Address Range: [[00493110, 00493131]]
// Convention: unknown
// Signature: undefined4 FUN_00493110(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00493110(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x100)) {
    return *(uint *)(param_2 * 4 + param_1 + 0x2d68);
  }
  return 0;
}
