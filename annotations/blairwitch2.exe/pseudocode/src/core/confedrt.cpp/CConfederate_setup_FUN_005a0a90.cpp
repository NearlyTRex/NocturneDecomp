// Name: core_confedrt.cpp_CConfederate_setup_FUN_005a0a90
// Address: 005a0a90
// Address Range: [[005a0a90, 005a0b18]]
// Convention: __cdecl
// Signature: void __cdecl core_confedrt_cpp_CConfederate_setup_FUN_005a0a90(CConfederate *this_ptr)

#include "nocturne.h"

void __cdecl core_confedrt_cpp_CConfederate_setup_FUN_005a0a90(CConfederate *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  unkafter_basicene_cpp_FUN_0059e6a0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 gun1",1);
  *(int *)&this_ptr->field_0x11858 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,"Bip01 gun12",1);
  *(int *)&this_ptr->field_0x1185c = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 Spine",1);
  *(int *)&this_ptr->field_0x11860 = iVar1;
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x154,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x154,this_ptr);
  return;
}
