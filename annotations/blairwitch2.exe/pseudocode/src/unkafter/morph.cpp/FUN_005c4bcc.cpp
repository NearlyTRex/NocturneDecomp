// Name: unkafter_morph.cpp_FUN_005c4bcc
// Address: 005c4bcc
// Address Range: [[005c4bcc, 005c4c1f]]
// Convention: unknown
// Signature: void unkafter_morph_cpp_FUN_005c4bcc(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_morph_cpp_FUN_005c4bcc(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d0)();
  puVar1 = (uint *)&DAT_026810b0;
  puVar2 = _DAT_026810b0;
  do {
    if (puVar2 == (uint *)0x0) {
LAB_005c4c16:
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d4)();
      return;
    }
    if (param_1 == puVar2[1]) {
      if (puVar2[3] != 0) {
        FUN_005b86a0(puVar2[2]);
      }
      *puVar1 = *puVar2;
      FUN_005b86a0(puVar2);
      goto LAB_005c4c16;
    }
    puVar1 = puVar2;
    puVar2 = (uint *)*puVar2;
  } while( true );
}
