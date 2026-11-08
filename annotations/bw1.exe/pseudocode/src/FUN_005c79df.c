// Name: FUN_005c79df
// Address: 005c79df
// Address Range: [[005c79df, 005c79fd]]
// Convention: unknown
// Signature: void FUN_005c79df(void)

#include "nocturne.h"

void FUN_005c79df(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005c769c();
  return;
}
