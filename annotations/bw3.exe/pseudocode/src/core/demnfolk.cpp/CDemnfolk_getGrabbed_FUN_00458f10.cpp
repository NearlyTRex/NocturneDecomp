// Name: core_demnfolk.cpp_CDemnfolk_getGrabbed_FUN_00458f10
// Address: 00458f10
// Address Range: [[00458f10, 00458f70]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_getGrabbed_FUN_00458f10(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_getGrabbed_FUN_00458f10(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

{
  CCharacter *pCVar1;
  CDemnfolk *pCVar2;
  
  if (grab_type == 1) {
    pCVar1 = (this_ptr->base).victim;
    if (pCVar1 != (CCharacter *)0x0) {
      pCVar2 = (CDemnfolk *)(*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1);
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
