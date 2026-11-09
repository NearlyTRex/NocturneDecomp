// Name: crt_unknown.c_FUN_005c2106
// Address: 005c2106
// Address Range: [[005c2106, 005c215a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c2106(void)

#include "nocturne.h"

int FUN_005c2106(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  if (in_EDX < 0) {
    if (in_ECX < 0) {
      iVar1 = FUN_005c215b();
      return iVar1;
    }
    iVar1 = FUN_005c215b();
    return -iVar1;
  }
  if (-1 < in_ECX) {
    iVar1 = FUN_005c215b();
    return iVar1;
  }
  iVar1 = FUN_005c215b();
  return -iVar1;
}
