// Name: FUN_005aa692
// Address: 005aa692
// Address Range: [[005aa692, 005aa6b2]]
// Convention: unknown
// Signature: void FUN_005aa692(void)

#include "nocturne.h"

void FUN_005aa692(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
