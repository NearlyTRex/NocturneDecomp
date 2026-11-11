// Name: core_carved.cpp_CCarved_getGrabbed_FUN_0042bda0
// Address: 0042bda0
// Address Range: [[0042bda0, 0042be00]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_getGrabbed_FUN_0042bda0(CCarved *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_carved_cpp_CCarved_getGrabbed_FUN_0042bda0(CCarved *this_ptr,CDemonActor *grabber,int grab_type)

{
  CCharacter *pCVar1;
  CCarved *pCVar2;
  
  if (grab_type == 1) {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      pCVar2 = (CCarved *)(*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1);
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
