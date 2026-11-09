// Name: crt_unknown.c_FUN_005bf73e
// Address: 005bf73e
// Address Range: [[005bf73e, 005bf742]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf73e(void)

#include "nocturne.h"

void FUN_005bf73e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
