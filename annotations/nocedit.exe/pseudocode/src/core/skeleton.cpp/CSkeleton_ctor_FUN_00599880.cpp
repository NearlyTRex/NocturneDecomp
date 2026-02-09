// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_00599880
// Address: 00599880
// Address Range: [[00599880, 005998dd]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton *this_ptr)

{
  CMotionList *pCVar1;
  uint *puVar2;
  
  __STK();
  pCVar1 = core_motion_cpp_CMotionList_ctor_FUN_0052cd50(&this_ptr->motion_list);
  puVar2 = __arrinit
                     (&pCVar1[1].motions[0].signals[0xc].value,100,&g_CVectorTypeInfo);
  puVar2[-0x389] = 0;
  puVar2[-4] = 0;
  puVar2[-3] = 0;
  puVar2[-2] = 0;
  puVar2[-1] = 0;
  *puVar2 = 0xc7c34f80;
  return (CSkeleton *)(puVar2 + -0xa4df);
}
