// Name: core_skeleton.cpp_FUN_00540f30
// Address: 00540f30
// Address Range: [[00540f30, 00540fbf]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00540f30(CSkeleton *param_1,int param_2,int param_3,int param_4,float param_5)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00540f30(CSkeleton *param_1,int param_2,int param_3,int param_4,float param_5)

{
  uint uVar1;
  CQuaternion4f *pCVar2;
  uint *unaff_ESI;
  CQuaternion4f *pCVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_180c [1520];
  int frame_index;
  CQuaternion4f local_20 [20];
  
  bVar5 = 0;
  frame_index = param_3;
  if ((param_5 <= 0.0) || (frame_index = param_4, 1.0 <= param_5)) {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10
                       (param_1,param_2,frame_index);
  }
  else {
    pCVar2 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(param_1,param_2,param_4);
    pCVar3 = core_skeleton_cpp_CSkeleton_getBoneAngleAtFrame_FUN_00540f10(param_1,param_2,param_3);
    core_xform_cpp_slerpQuaternion_FUN_00593df0(pCVar3,pCVar2,param_5);
    pCVar2 = local_20;
  }
  pCVar3 = pCVar2 + (uint)bVar5 * -8 + 4;
  uVar1 = *(uint *)pCVar2;
  *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8) = *(uint *)pCVar3;
  *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(pCVar3 + (uint)bVar5 * -8 + 4);
  *(uint *)
   ((int)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       *(uint *)(pCVar3 + (uint)bVar5 * -8 + 4 + (uint)bVar5 * -8 + 4);
  puVar4 = unaff_ESI + (uint)bVar5 * -2 + 1;
  *unaff_ESI = uVar1;
  *puVar4 = *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
  puVar4[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  return;
}
