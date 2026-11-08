// Name: FUN_005b9d26
// Address: 005b9d26
// Address Range: [[005b9d26, 005b9d7a]]
// Convention: unknown
// Signature: int FUN_005b9d26(void)

#include "nocturne.h"

int FUN_005b9d26(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  if (in_EDX < 0) {
    if (in_ECX < 0) {
      iVar1 = FUN_005b9d7b();
      return iVar1;
    }
    iVar1 = FUN_005b9d7b();
    return -iVar1;
  }
  if (-1 < in_ECX) {
    iVar1 = FUN_005b9d7b();
    return iVar1;
  }
  iVar1 = FUN_005b9d7b();
  return -iVar1;
}
