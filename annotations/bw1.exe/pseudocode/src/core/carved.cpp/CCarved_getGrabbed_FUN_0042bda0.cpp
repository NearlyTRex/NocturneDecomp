// Name: core_carved.cpp_CCarved_getGrabbed_FUN_0042bda0
// Address: 0042bda0
// Address Range: [[0042bda0, 0042be00]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_getGrabbed_FUN_0042bda0(CCarved *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_carved_cpp_CCarved_getGrabbed_FUN_0042bda0(CCarved *this_ptr,CDemonActor *grabber,int grab_type)

{
  int iVar1;
  CCarved *pCVar2;
  
  if (grab_type == 1) {
    iVar1 = *(int *)&this_ptr->field_0xc1e8;
    if (iVar1 != 0) {
      pCVar2 = (CCarved *)(**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1);
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
