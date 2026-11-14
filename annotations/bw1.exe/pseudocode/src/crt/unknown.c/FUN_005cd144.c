// Name: crt_unknown.c_FUN_005cd144
// Address: 005cd144
// Address Range: [[005cd144, 005cd167]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cd144(int param_1)

#include "nocturne.h"

uint FUN_005cd144(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
    return *(uint *)(iVar1 + 0x58 + param_1 * 8);
  }
  return *(uint *)(&DAT_00626ae4 + param_1 * 8);
}
