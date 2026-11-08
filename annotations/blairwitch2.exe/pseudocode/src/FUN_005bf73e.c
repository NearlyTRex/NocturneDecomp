// Name: FUN_005bf73e
// Address: 005bf73e
// Address Range: [[005bf73e, 005bf762]]
// Convention: unknown
// Signature: void FUN_005bf73e(void)

#include "nocturne.h"

void FUN_005bf73e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
