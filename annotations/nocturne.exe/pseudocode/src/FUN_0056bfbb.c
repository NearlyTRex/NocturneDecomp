// Name: FUN_0056bfbb
// Address: 0056bfbb
// Address Range: [[0056bfbb, 0056bfd5]]
// Convention: unknown
// Signature: void FUN_0056bfbb(void)

#include "nocturne.h"

void FUN_0056bfbb(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_0056be50();
  return;
}
