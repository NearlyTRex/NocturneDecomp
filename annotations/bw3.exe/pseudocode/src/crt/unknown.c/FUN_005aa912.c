// Name: crt_unknown.c_FUN_005aa912
// Address: 005aa912
// Address Range: [[005aa912, 005aa916]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aa912(void)

#include "nocturne.h"

void FUN_005aa912(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
