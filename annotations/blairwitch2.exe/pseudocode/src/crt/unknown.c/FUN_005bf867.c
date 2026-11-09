// Name: crt_unknown.c_FUN_005bf867
// Address: 005bf867
// Address Range: [[005bf867, 005bf86b]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf867(void)

#include "nocturne.h"

void FUN_005bf867(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
