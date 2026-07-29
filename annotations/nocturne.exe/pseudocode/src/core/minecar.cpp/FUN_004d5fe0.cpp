// Name: core_minecar.cpp_FUN_004d5fe0
// Address: 004d5fe0
// Address Range: [[004d5fe0, 004d6005]]
// Convention: unknown
// Signature: void core_minecar_cpp_FUN_004d5fe0(void)

#include "nocturne.h"

void core_minecar_cpp_FUN_004d5fe0(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x724);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = core_platfrm_cpp_FUN_004f5d90(iVar1);
  *(CDemonActor_vtable **)(iVar1 + 0x14c) = &g_CMinecarVTable;
  return;
}
