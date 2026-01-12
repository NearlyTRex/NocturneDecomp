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
  BADSPACEBASE *in_ESP;
  CQuaternion4f *unaff_ESI;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1808 [1521];
  int frame_index;
  double dVar8;
  float in_stack_ffffffd4;
  float local_20;
  
  bVar7 = 0;
  dVar8 = (double)interpolation;
  frame_index = frame_index_1;
  if ((dVar8 <= 0.0) || (frame_index = frame_index_2, 1.0 <= dVar8)) {
    pfVar3 = (float *)&stack0xffffffd4;
    pCVar1 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index);
  }
  else {
    core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050(this_ptr,bone_index,frame_index_2);
    pCVar1 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_0059a050
                       (this_ptr,bone_index,frame_index_1);
    pfVar3 = (float *)&stack0xffffffdc;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (pCVar1,SUB84 /* extract 2-byte value */(dVar8,0),(CQuaternion4f *)((ulonglong)dVar8 >> 0x20),in_stack_ffffffd4);
    pCVar1 = (CQuaternion4f *)&stack0xfffffff0;
  }
  pfVar4 = pfVar3 + (uint)bVar7 * -2 + 1;
  pfVar2 = (float *)((int)pCVar1 + (uint)bVar7 * -8 + 4);
  *pfVar3 = pCVar1->w;
  pfVar3 = pfVar2 + (uint)bVar7 * -2 + 1;
  *pfVar4 = *pfVar2;
  pfVar4[(uint)bVar7 * -2 + 1] = *pfVar3;
  (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] = pfVar3[(uint)bVar7 * -2 + 1];
  puVar5 = (uint *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
  unaff_ESI->w = local_20;
  puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
  *puVar5 = *(uint *)(&stack0xffffffe4 + (uint)bVar7 * -8);
  *puVar6 = *(uint *)(&stack0xffffffe8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  puVar6[(uint)bVar7 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffe8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  return unaff_ESI;
}
