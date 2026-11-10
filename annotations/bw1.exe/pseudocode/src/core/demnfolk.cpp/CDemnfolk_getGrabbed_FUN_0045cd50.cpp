// Name: core_demnfolk.cpp_CDemnfolk_getGrabbed_FUN_0045cd50
// Address: 0045cd50
// Address Range: [[0045cd50, 0045cdb0]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_getGrabbed_FUN_0045cd50(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_getGrabbed_FUN_0045cd50(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  CDemnfolk *pCVar2;
  
  if (grab_type == 1) {
    iVar1 = *(int *)&this_ptr->field_0xc1e8;
    if (iVar1 != 0) {
      pCVar2 = (CDemnfolk *)(**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1);
      if (pCVar2 == this_ptr) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xf0))
                  (*(int *)&this_ptr->field_0xc1e8);
      }
    }
    *(CDemonActor **)&this_ptr->field_0x26fc = grabber;
    *(uint *)&this_ptr->field_0x2700 = 1;
    return 1;
  }
  return 0;
}
