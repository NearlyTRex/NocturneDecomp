// Name: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80
// Address: 00517a80
// Address Range: [[00517a80, 00517b0f]]
// Convention: __stack5_esi
// Signature: CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out)

#include "nocturne.h"

CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_00517a80(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out)

{
  float fVar1;
  CQuaternion4f *pCVar2;
  CQuaternion4f *pCVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_180c [1520];
  int frame_index;
  CQuaternion4f local_20;
  
  bVar6 = 0;
  frame_index = frame_index_1;
  if ((interpolation <= 0.0) || (frame_index = frame_index_2, 1.0 <= interpolation)) {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
                       (this_ptr,bone_index,frame_index);
  }
  else {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
                       (this_ptr,bone_index,frame_index_2);
    pCVar3 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00517a60
                       (this_ptr,bone_index,frame_index_1);
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0(pCVar3,pCVar2,interpolation);
    pCVar2 = &local_20;
  }
  puVar4 = (uint *)((int)pCVar2 + (uint)bVar6 * -8 + 4);
  fVar1 = pCVar2->w;
  puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
  *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8) = *puVar4;
  *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) = *puVar5;
  *(uint *)
   ((int)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
       puVar5[(uint)bVar6 * -2 + 1];
  puVar4 = (uint *)((int)result_out + (uint)bVar6 * -8 + 4);
  result_out->w = fVar1;
  puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
  *puVar4 = *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8);
  *puVar5 = *(uint *)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  return result_out;
}
