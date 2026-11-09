// Name: unkafter_asgaya.cpp_FUN_005ae464
// Address: 005ae464
// Address Range: [[005ae464, 005ae485]]
// Convention: unknown
// Signature: void unkafter_asgaya_cpp_FUN_005ae464(void)

#include "nocturne.h"

void unkafter_asgaya_cpp_FUN_005ae464(void)

{
  int iVar1;
  uint *in_FS_OFFSET;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
  if (*(uint **)(iVar1 + 0x54) != (uint *)0x0) {
    *in_FS_OFFSET = **(uint **)(iVar1 + 0x54);
  }
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
  *(uint *)(iVar1 + 0x54) = 0;
  return;
}
