// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_00599880
// Address: 00599880
// Address Range: [[00599880, 005998dd]]
// Convention: __cdecl
// Signature: CSkeleton * core_skeleton.cpp_CSkeleton_ctor_FUN_00599880(CSkeleton * this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton *this_ptr)

{
  int extraout_EAX;
  uint *puVar1;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  core_motion_cpp_CMotionList_ctor_FUN_0052cd50(&this_ptr->motion_list);
  puVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)(extraout_EAX + 0x2937c),100,&g_CVectorTypeInfo);
  puVar1[-0x389] = 0;
  puVar1[-4] = 0;
  puVar1[-3] = 0;
  puVar1[-2] = 0;
  puVar1[-1] = 0;
  *puVar1 = 0xc7c34f80;
  return (CSkeleton *)(puVar1 + -0xa4df);
}
