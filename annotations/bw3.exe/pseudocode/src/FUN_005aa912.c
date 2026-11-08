// Name: FUN_005aa912
// Address: 005aa912
// Address Range: [[005aa912, 005aa936]]
// Convention: unknown
// Signature: void FUN_005aa912(void)

#include "nocturne.h"

void FUN_005aa912(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
