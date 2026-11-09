// Name: unkafter_zombie.cpp_FUN_005ccf20
// Address: 005ccf20
// Address Range: [[005ccf20, 005ccf42]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005ccf20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_zombie_cpp_FUN_005ccf20(void)

{
  uint *puVar1;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626628)();
  for (puVar1 = _DAT_02c9ffa0; puVar1 != (uint *)0x0; puVar1 = (uint *)*puVar1) {
    *(byte *)(puVar1[2] + 0x53) = 1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_0062662c)();
  return;
}
