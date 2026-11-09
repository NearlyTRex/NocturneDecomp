// Name: crt_unknown.c_FUN_005bf562
// Address: 005bf562
// Address Range: [[005bf562, 005bf566]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bf562(void)

#include "nocturne.h"

void FUN_005bf562(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005bf3dc();
  return;
}
