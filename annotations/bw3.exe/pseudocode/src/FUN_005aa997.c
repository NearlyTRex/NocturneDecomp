// Name: FUN_005aa997
// Address: 005aa997
// Address Range: [[005aa997, 005aa9b5]]
// Convention: unknown
// Signature: void FUN_005aa997(void)

#include "nocturne.h"

void FUN_005aa997(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
