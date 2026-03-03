// Name: core_zombie.cpp_CZombie_getGrabbed_FUN_005fc970
// Address: 005fc970
// Address Range: [[005fc970, 005fc9d0]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_getGrabbed_FUN_005fc970(CZombie *this_ptr,CDemonActor *grabber,int grab_type,int param_4)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_getGrabbed_FUN_005fc970(CZombie *this_ptr,CDemonActor *grabber,int grab_type,int param_4)

{
  CCharacter *pCVar1;
  CZombie *pCVar2;
  
  if (grab_type == 1) {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      pCVar2 = (CZombie *)(*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1);
      if (pCVar2 == this_ptr) {
        pCVar1 = (this_ptr->base).victim;
        (*(((pCVar1->base).vtable._uc)->_uc).releaseFromGrab)(pCVar1);
      }
    }
    (this_ptr->base).base.grabbed_by = grabber;
    (this_ptr->base).base.grabbed_type = 1;
    return 1;
  }
  return 0;
}
