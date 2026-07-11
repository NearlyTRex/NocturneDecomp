// Name: FUN_0056fd00
// Address: 0056fd00
// Address Range: [[0056fd00, 0056fd25]]
// Convention: unknown
// Signature: void FUN_0056fd00(void)

#include "nocturne.h"

void FUN_0056fd00(void)

{
  (*(code *)PTR_FUN_005c2054)();
  (*(code *)PTR_FUN_005c2058)();
  if (DAT_005c1d94 != (code *)0x0) {
    (*DAT_005c1d94)();
  }
  FUN_005674b0();
  return;
}
