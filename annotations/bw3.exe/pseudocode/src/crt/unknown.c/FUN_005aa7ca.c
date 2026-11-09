// Name: crt_unknown.c_FUN_005aa7ca
// Address: 005aa7ca
// Address Range: [[005aa7ca, 005aa7ce]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aa7ca(void)

#include "nocturne.h"

void FUN_005aa7ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  FUN_005aa50c();
  return;
}
