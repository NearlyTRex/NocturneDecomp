// Name: core_skeleton.cpp_FUN_00548140
// Address: 00548140
// Address Range: [[00548140, 005481cf]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00548140(CSkeleton *param_1,int param_2,int param_3,int param_4,float param_5)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00548140(CSkeleton *param_1,int param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  CQuaternion4f *pCVar2;
  CQuaternion4f *pCVar3;
  float *unaff_ESI;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_180c [1520];
  int frame_index;
  CQuaternion4f local_20;
  
  bVar7 = 0;
  frame_index = param_3;
  if ((param_5 <= 0.0) || (frame_index = param_4, 1.0 <= param_5)) {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120
                       (param_1,param_2,frame_index);
  }
  else {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(param_1,param_2,param_4);
    pCVar3 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00548120(param_1,param_2,param_3);
    core_xform_cpp_slerpQuaternion_FUN_00585b20(pCVar3,pCVar2,param_5);
    pCVar2 = &local_20;
  }
  puVar4 = (uint *)((int)pCVar2 + (uint)bVar7 * -8 + 4);
  fVar1 = pCVar2->w;
  puVar5 = puVar4 + (uint)bVar7 * -2 + 1;
  *(uint *)(&stack0xffffffd4 + (uint)bVar7 * -8) = *puVar4;
  *(uint *)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) = *puVar5;
  *(uint *)
   ((int)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       puVar5[(uint)bVar7 * -2 + 1];
  pfVar6 = unaff_ESI + (uint)bVar7 * -2 + 1;
  *unaff_ESI = fVar1;
  *pfVar6 = *(float *)(&stack0xffffffd4 + (uint)bVar7 * -8);
  pfVar6[(uint)bVar7 * -2 + 1] = *(float *)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       *(float *)((int)(&stack0xffffffd8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                 ((uint)bVar7 * -2 + 1) * 4);
  return;
}
