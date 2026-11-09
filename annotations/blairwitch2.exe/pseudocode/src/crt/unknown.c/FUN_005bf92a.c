// Name: crt_unknown.c_FUN_005bf92a
// Address: 005bf92a
// Address Range: [[005bf92a, 005bf92e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf92a(void)

#include "nocturne.h"

void FUN_005bf92a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
