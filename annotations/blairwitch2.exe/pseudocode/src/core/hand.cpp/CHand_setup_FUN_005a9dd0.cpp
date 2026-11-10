// Name: core_hand.cpp_CHand_setup_FUN_005a9dd0
// Address: 005a9dd0
// Address Range: [[005a9dd0, 005a9e01]]
// Convention: __cdecl
// Signature: void __cdecl core_hand_cpp_CHand_setup_FUN_005a9dd0(CHand *this_ptr)

#include "nocturne.h"

void __cdecl core_hand_cpp_CHand_setup_FUN_005a9dd0(CHand *this_ptr)

{
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0x11850 = iVar1;
  *(int *)&this_ptr->field_0x1137c = iVar1;
  return;
}
