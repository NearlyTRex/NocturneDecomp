// Name: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
// Address: 0059a070
// Address Range: [[0059a070, 0059a0ff] [0060fb40, 0060fb78]]
// Convention: __stack5_esi
// Signature: CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out)

#include "nocturne.h"

CQuaternion4f * __stack5_esi core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation,CQuaternion4f *result_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CQuaternion4f *pCVar4;
  CQuaternion4f *quat1_in;
  int frame_index;
  CQuaternion4f local_20;
  
  frame_index = frame_index_1;
  if ((interpolation <= 0.0) || (frame_index = frame_index_2, 1.0 <= interpolation)) {
    pCVar4 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index);
  }
  else {
    pCVar4 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index_2);
    quat1_in = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                         (this_ptr,bone_index,frame_index_1);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(quat1_in,pCVar4,interpolation,&local_20);
    pCVar4 = &local_20;
  }
  fVar1 = pCVar4->x;
  fVar2 = pCVar4->y;
  fVar3 = pCVar4->z;
  result_out->w = pCVar4->w;
  result_out->x = fVar1;
  result_out->y = fVar2;
  result_out->z = fVar3;
  return result_out;
}
