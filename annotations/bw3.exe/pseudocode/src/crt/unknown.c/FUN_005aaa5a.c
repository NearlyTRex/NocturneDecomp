// Name: crt_unknown.c_FUN_005aaa5a
// Address: 005aaa5a
// Address Range: [[005aaa5a, 005aaa5e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aaa5a(void)

#include "nocturne.h"

void FUN_005aaa5a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
