// Name: FUN_005c793b
// Address: 005c793b
// Address Range: [[005c793b, 005c7959]]
// Convention: unknown
// Signature: void FUN_005c793b(void)

#include "nocturne.h"

void FUN_005c793b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
