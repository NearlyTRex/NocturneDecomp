// Name: FUN_00481ee0
// Address: 00481ee0
// Address Range: [[00481ee0, 00481efb]]
// Convention: unknown
// Signature: void FUN_00481ee0(void)

#include "nocturne.h"

void FUN_00481ee0(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x3dc);
  if (iVar1 == 0) {
    return;
  }
  core_filmreel_cpp_CFilmProjector_ctor_FUN_00481f10(iVar1);
  return;
}
