// Name: FUN_005ca480
// Address: 005ca480
// Address Range: [[005ca480, 005ca4a5]]
// Convention: unknown
// Signature: void FUN_005ca480(void)

#include "nocturne.h"

void FUN_005ca480(void)

{
  (*(code *)PTR_FUN_006269d4)();
  (*(code *)PTR_FUN_006269d8)();
  if (DAT_006267b4 != (code *)0x0) {
    (*DAT_006267b4)();
  }
  FUN_005c53a0();
  return;
}
