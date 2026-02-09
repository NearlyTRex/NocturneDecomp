// Name: core_zombie.cpp_CZombie_FUN_005fc970
// Address: 005fc970
// Address Range: [[005fc970, 005fc9d0]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fc970(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fc970(CZombie *this_ptr)

{
  CDemonActor *pCVar1;
  CZombie *pCVar2;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 1) {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CDemonActor *)0x0) {
      pCVar2 = (CZombie *)(*(((pCVar1->vtable)._uc)->_uc).cfunc8)();
      if (pCVar2 == this_ptr) {
        (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc7)();
      }
    }
    (this_ptr->base).base.grabbed_by = in_stack_00000008;
    (this_ptr->base).base.grabbed_type = 1;
    return 1;
  }
  return 0;
}
