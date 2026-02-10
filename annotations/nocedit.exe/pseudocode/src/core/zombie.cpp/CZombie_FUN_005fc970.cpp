// Name: core_zombie.cpp_CZombie_FUN_005fc970
// Address: 005fc970
// Address Range: [[005fc970, 005fc9d0]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fc970(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fc970(CZombie *this_ptr)

{
  CCharacter *pCVar1;
  CZombie *pCVar2;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (in_stack_0000000c == 1) {
    pCVar1 = (CCharacter *)(this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      pCVar2 = (CZombie *)(*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1);
      if (pCVar2 == this_ptr) {
        pCVar1 = (CCharacter *)(this_ptr->base).victim;
        (*(((pCVar1->base).vtable._uc)->_uc).releaseFromGrab)(pCVar1);
      }
    }
    (this_ptr->base).base.grabbed_by = (CDemonActor *)0x1;
    (this_ptr->base).base.grabbed_type = in_stack_00000010;
    return 1;
  }
  return 0;
}
