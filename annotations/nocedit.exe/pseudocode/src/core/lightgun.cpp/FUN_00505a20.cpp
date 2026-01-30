// Name: core_lightgun.cpp_FUN_00505a20
// Address: 00505a20
// Address Range: [[00505a20, 00505ab9]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_FUN_00505a20(void)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_FUN_00505a20(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  iVar1 = (*(((in_stack_00000004->vtable)._uc)->_uc).cfunc3)();
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CGhoul");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CTVBat");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBatCreature");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CWerewolf");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CSvetlana");
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
