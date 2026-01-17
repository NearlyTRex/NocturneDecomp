// Name: core_manpuz.cpp_FUN_0050b1d0
// Address: 0050b1d0
// Address Range: [[0050b1d0, 0050b254]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b1d0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050b1d0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_0050b1d0(void)

{
  int iVar1;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  
  (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x33);
  if (iVar1 != 0) {
    (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank - unaff_retaddr;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x34);
  if (iVar1 != 0) {
    (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + in_stack_00000008;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  return;
}
