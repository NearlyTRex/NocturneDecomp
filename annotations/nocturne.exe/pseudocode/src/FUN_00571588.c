// Name: FUN_00571588
// Address: 00571588
// Address Range: [[00571588, 005715ab]]
// Convention: unknown
// Signature: undefined4 FUN_00571588(int param_1)

#include "nocturne.h"

uint FUN_00571588(int param_1)

{
  int iVar1;
  
  if ((param_1 != 7) && (param_1 != 4)) {
    iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
    return *(uint *)(iVar1 + 0x5c + param_1 * 8);
  }
  return *(uint *)(param_1 * 8 + 0x5c20dc);
}
