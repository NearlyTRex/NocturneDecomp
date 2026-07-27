// Name: core_filmreel.cpp_FUN_00481c00
// Address: 00481c00
// Address Range: [[00481c00, 00481c1b]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00481c00(void)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00481c00(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x314);
  if (iVar1 == 0) {
    return;
  }
  core_filmreel_cpp_CFilmReel_ctor_FUN_00481c30(iVar1);
  return;
}
