// Name: crt_unknown.c_FUN_005aaa3b
// Address: 005aaa3b
// Address Range: [[005aaa3b, 005aaa3f]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aaa3b(void)

#include "nocturne.h"

void FUN_005aaa3b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
