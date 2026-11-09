// Name: crt_unknown.c_FUN_005bf886
// Address: 005bf886
// Address Range: [[005bf886, 005bf88a]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf886(void)

#include "nocturne.h"

void FUN_005bf886(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
