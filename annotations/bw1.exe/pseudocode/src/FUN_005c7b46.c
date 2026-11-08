// Name: FUN_005c7b46
// Address: 005c7b46
// Address Range: [[005c7b46, 005c7b6a]]
// Convention: unknown
// Signature: void FUN_005c7b46(void)

#include "nocturne.h"

void FUN_005c7b46(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
