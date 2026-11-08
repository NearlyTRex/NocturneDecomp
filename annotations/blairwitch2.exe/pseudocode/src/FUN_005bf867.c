// Name: FUN_005bf867
// Address: 005bf867
// Address Range: [[005bf867, 005bf885]]
// Convention: unknown
// Signature: void FUN_005bf867(void)

#include "nocturne.h"

void FUN_005bf867(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
