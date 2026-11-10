// Name: core_hostage.cpp_CDemnfolk_getGrabbed_FUN_00458f10
// Address: 00458f10
// Address Range: [[00458f10, 00458f70]]
// Convention: __cdecl
// Signature: int __cdecl core_hostage_cpp_CDemnfolk_getGrabbed_FUN_00458f10(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hostage_cpp_CDemnfolk_getGrabbed_FUN_00458f10(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  CDemnfolk *pCVar2;
  
  if (grab_type == 1) {
    iVar1 = *(int *)&this_ptr->field_0xcde4;
    if (iVar1 != 0) {
      pCVar2 = (CDemnfolk *)(**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1);
      if (pCVar2 == this_ptr) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xf0))
                  (*(int *)&this_ptr->field_0xcde4);
      }
    }
    *(CDemonActor **)&this_ptr->field_0x26fc = grabber;
    *(uint *)&this_ptr->field_0x2700 = 1;
    return 1;
  }
  return 0;
}
