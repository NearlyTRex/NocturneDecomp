// Name: crt_unknown.c_FUN_005c4c20
// Address: 005c4c20
// Address Range: [[005c4c20, 005c4c42]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c4c20(void)

#include "nocturne.h"

void FUN_005c4c20(void)

{
  uint *puVar1;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d0)();
  for (puVar1 = (uint *)g_PTR_026810b0; puVar1 != (uint *)0x0;
      puVar1 = (uint *)*puVar1) {
    *(byte *)(puVar1[2] + 0x53) = 1;
  }
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d4)();
  return;
}
