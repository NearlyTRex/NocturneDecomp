// Name: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
// Address: 0059a070
// Address Range: [[0059a070, 0059a0ff]]
// Convention: __cdecl
// Signature: CQuaternion4f * core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton * this_ptr, int bone_index, int frame_index_1, int frame_index_2, float interpolation)

#include "nocturne.h"

CQuaternion4f * __cdecl
core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
          (CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,
          float interpolation)

{
  CQuaternion4f *pCVar1;
  CQuaternion4f *result_out;
  CQuaternion4f *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_180c [1520];
  int frame_index;
  float t;
  float local_30;
  CQuaternion4f local_20;
  double dVar5;
  
  bVar4 = 0;
  dVar5 = (double)interpolation;
  frame_index = frame_index_1;
  if ((dVar5 <= 0.0) || (frame_index = frame_index_2, 1.0 <= dVar5)) {
    pCVar1 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index);
  }
  else {
    pCVar1 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index_2);
    t = SUB84 /* extract 2-byte value */(dVar5,0);
    result_out = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                           (this_ptr,bone_index,frame_index_1);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(result_out,pCVar1,(CQuaternion4f *)interpolation,t);
    pCVar1 = &local_20;
  }
  puVar2 = (uint *)((int)pCVar1 + (uint)bVar4 * -8 + 4);
  local_30 = pCVar1->w;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8) = *puVar2;
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) = *puVar3;
  *(uint *)
   ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       puVar3[(uint)bVar4 * -2 + 1];
  puVar2 = (uint *)((int)unaff_ESI + (uint)bVar4 * -8 + 4);
  unaff_ESI->w = local_30;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  *puVar2 = *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8);
  *puVar3 = *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  return unaff_ESI;
}
