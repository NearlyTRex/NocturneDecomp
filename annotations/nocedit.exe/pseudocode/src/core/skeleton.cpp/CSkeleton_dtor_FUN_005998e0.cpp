// Name: core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0
// Address: 005998e0
// Address Range: [[005998e0, 0059990f]]
// Convention: __cdecl
// Signature: CSkeleton * core_skeleton.cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton * this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_dtor_FUN_005998e0(CSkeleton *this_ptr)

{
  int extraout_EAX;
  CSkeleton *in_stack_00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(in_stack_00000004);
  core_curtain_cpp_freeVectors_FUN_0044baf0((CVector3f **)in_stack_00000004->bone_scales);
  return (CSkeleton *)(extraout_EAX + -0x2937c);
}
