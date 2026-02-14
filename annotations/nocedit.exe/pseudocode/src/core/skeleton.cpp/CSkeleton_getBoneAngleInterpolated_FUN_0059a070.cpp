// Name: core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
// Address: 0059a070
// Address Range: [[0059a070, 0059a0ff]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation)

#include "nocturne.h"

CQuaternion4f * __cdecl core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070(CSkeleton *this_ptr,int bone_index,int frame_index_1,int frame_index_2,float interpolation)

{
  float fVar1;
  CQuaternion4f *pCVar2;
  CQuaternion4f *quat1_in;
  CQuaternion4f *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_180c [1520];
  int frame_index;
  CQuaternion4f local_20;
  
  bVar5 = 0;
  frame_index = frame_index_1;
  if ((interpolation <= 0.0) || (frame_index = frame_index_2, 1.0 <= interpolation)) {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index);
  }
  else {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index_2);
    quat1_in = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                         (this_ptr,bone_index,frame_index_1);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0(quat1_in,pCVar2,interpolation,&local_20);
    pCVar2 = &local_20;
  }
  puVar3 = (uint *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
  fVar1 = pCVar2->w;
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8) = *puVar3;
  *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) = *puVar4;
  *(uint *)
   ((int)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       puVar4[(uint)bVar5 * -2 + 1];
  puVar3 = (uint *)((int)unaff_ESI + (uint)bVar5 * -8 + 4);
  unaff_ESI->w = fVar1;
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  *puVar3 = *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
  *puVar4 = *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  return unaff_ESI;
}
