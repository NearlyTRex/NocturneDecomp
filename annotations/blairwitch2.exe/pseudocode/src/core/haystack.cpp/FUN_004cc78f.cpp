// Name: core_haystack.cpp_FUN_004cc78f
// Address: 004cc78f
// Address Range: [[004cc78f, 004cc7c3]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004cc78f(void)

#include "nocturne.h"

void core_haystack_cpp_FUN_004cc78f(void)

{
  char cVar1;
  char *in_EAX;
  CDeformableModelInstance *unaff_EBX;
  char *unaff_retaddr;
  char *pcVar2;
  
  cVar1 = (char)in_EAX + *in_EAX;
  pcVar2 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(unaff_EBX,unaff_retaddr);
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1b].w = 1.0;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1a].z = 0.0;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1a].y =
       unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1a].z;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1a].x =
       unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1a].y;
  return;
}
