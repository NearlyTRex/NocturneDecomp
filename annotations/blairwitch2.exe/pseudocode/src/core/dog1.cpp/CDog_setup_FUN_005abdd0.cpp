// Name: core_dog1.cpp_CDog_setup_FUN_005abdd0
// Address: 005abdd0
// Address Range: [[005abdd0, 005abe8c]]
// Convention: __cdecl
// Signature: void __cdecl core_dog1_cpp_CDog_setup_FUN_005abdd0(CDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog1_cpp_CDog_setup_FUN_005abdd0(CDog *this_ptr)

{
  int iVar1;
  int iVar2;
  uint auStack_1c [3];
  
  unkafter_basicene_cpp_FUN_0059e6a0(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Dummy01",1);
  iVar2 = *(int *)&this_ptr->field_0x1185c;
  *(int *)&this_ptr->field_0x11850 = iVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x90))(iVar2,this_ptr);
  }
  iVar2 = _strcmp(&this_ptr->field_0x2514,"BDOG.DFM");
  if (iVar2 == 0) {
    *(uint *)&this_ptr->field_0x10a28 = 1;
    iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                      (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 Head",1);
    *(int *)&this_ptr->field_0x10a24 = iVar2;
    if ((uint *)&this_ptr->field_0x10a3c != auStack_1c) {
      *(uint *)&this_ptr->field_0x10a3c = 0x3f800000;
      *(uint *)&this_ptr->field_0x10a40 = 0;
      *(uint *)&this_ptr->field_0x10a44 = 0;
      return;
    }
  }
  return;
}
