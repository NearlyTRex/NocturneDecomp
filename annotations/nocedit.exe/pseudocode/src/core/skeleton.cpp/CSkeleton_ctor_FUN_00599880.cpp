// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_00599880
// Address: 00599880
// Address Range: [[00599880, 005998dd]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton *this_ptr)

{
  CSkeleton *pCVar1;
  CSkeleton_ptr_168828 puVar1;
  
  __STK();
  pCVar1 = (CSkeleton *)core_motion_cpp_CMotionList_ctor_FUN_0052cd50(&this_ptr->motion_list);
  puVar1 = __arrinit(pCVar1->bone_scales,100,&g_CVectorTypeInfo);
  ADJ(puVar1)->bone_count = 0;
  ADJ(puVar1)->frame_count = 0;
  ADJ(puVar1)->bone_angle_frames = (CQuaternion4f *)0x0;
  ADJ(puVar1)->frame_positions_1 = (CVector3f *)0x0;
  ADJ(puVar1)->frame_positions_2 = (CVector3f *)0x0;
  ADJ(puVar1)->bone_scales[0].x = -99999.0;
  return ADJ(puVar1);
}
