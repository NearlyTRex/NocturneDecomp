// Name: FUN_0051f650
// Address: 0051f650
// Address Range: [[0051f650, 0051f67a]]
// Convention: unknown
// Signature: void FUN_0051f650(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f650(void)

{
  byte *puVar1;
  
  puVar1 = (byte *)0x268cef4;
  do {
    core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(puVar1);
    puVar1 = puVar1 + 0x2ac0;
  } while (puVar1 != &DAT_02737ef4);
  _DAT_0268cef0 = 0;
  return;
}
