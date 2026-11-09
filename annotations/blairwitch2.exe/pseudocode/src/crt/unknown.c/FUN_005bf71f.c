// Name: crt_unknown.c_FUN_005bf71f
// Address: 005bf71f
// Address Range: [[005bf71f, 005bf723]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf71f(void)

#include "nocturne.h"

void FUN_005bf71f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
