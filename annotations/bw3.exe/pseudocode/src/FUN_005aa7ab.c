// Name: FUN_005aa7ab
// Address: 005aa7ab
// Address Range: [[005aa7ab, 005aa7c9]]
// Convention: unknown
// Signature: void FUN_005aa7ab(void)

#include "nocturne.h"

void FUN_005aa7ab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
