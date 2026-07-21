// Name: FUN_005485a0
// Address: 005485a0
// Address Range: [[005485a0, 005485dd]]
// Convention: unknown
// Signature: undefined4 FUN_005485a0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005485a0(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x16c) == 7)) {
    if (*(char *)(param_1 + 0x2fc) == '\0') {
      return 1;
    }
    uVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(param_1 + 0x2fc,param_2,0);
    return uVar1;
  }
  return 0;
}
