// Name: FUN_004c6e00
// Address: 004c6e00
// Address Range: [[004c6e00, 004c6e1b]]
// Convention: unknown
// Signature: void FUN_004c6e00(void)

#include "nocturne.h"

void FUN_004c6e00(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x588);
  if (iVar1 == 0) {
    return;
  }
  core_lightgun_cpp_CLightGun_ctor_FUN_004c6e30(iVar1);
  return;
}
