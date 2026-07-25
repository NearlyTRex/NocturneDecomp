// Name: FUN_0056bfd6
// Address: 0056bfd6
// Address Range: [[0056bfd6, 0056bff6]]
// Convention: unknown
// Signature: void FUN_0056bfd6(void)

#include "nocturne.h"

void FUN_0056bfd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
