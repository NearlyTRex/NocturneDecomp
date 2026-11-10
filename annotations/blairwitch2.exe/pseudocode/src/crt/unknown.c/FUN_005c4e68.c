// Name: crt_unknown.c_FUN_005c4e68
// Address: 005c4e68
// Address Range: [[005c4e68, 005c4e8b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c4e68(int param_1)

#include "nocturne.h"

uint FUN_005c4e68(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
    return *(uint *)(iVar1 + 0x5c + param_1 * 8);
  }
  return *(uint *)(param_1 * 8 + 0x61f768);
}
