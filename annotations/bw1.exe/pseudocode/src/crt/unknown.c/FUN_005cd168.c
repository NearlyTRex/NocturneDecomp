// Name: crt_unknown.c_FUN_005cd168
// Address: 005cd168
// Address Range: [[005cd168, 005cd18b]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cd168(int param_1)

#include "nocturne.h"

uint FUN_005cd168(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    return *(uint *)(iVar1 + 0x5c + param_1 * 8);
  }
  return *(uint *)(param_1 * 8 + 0x626ae8);
}
