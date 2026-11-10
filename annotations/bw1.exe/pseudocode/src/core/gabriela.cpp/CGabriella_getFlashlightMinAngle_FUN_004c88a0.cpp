// Name: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_004c88a0
// Address: 004c88a0
// Address Range: [[004c88a0, 004c88ef]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004c88a0(CGabriella *this_ptr)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004c88a0(CGabriella *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&this_ptr->field_0x25b0,DAT_007c5330);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x678) == 2 || (*(int *)(iVar1 + 0x678) == 3)))) {
    return -1.0471976;
  }
  return -1.5629814;
}
