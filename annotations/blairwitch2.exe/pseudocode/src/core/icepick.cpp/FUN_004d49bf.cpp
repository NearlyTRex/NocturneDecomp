// Name: core_icepick.cpp_FUN_004d49bf
// Address: 004d49bf
// Address Range: [[004d49bf, 004d4a11]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004d49bf(void)

#include "nocturne.h"

void core_icepick_cpp_FUN_004d49bf(void)

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
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1b].y = 1.0;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1b].x = 0.0;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1b].w =
       unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1b].x;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1a].z =
       unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1b].w;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1b].z = 0.0;
  unaff_EBX[0x11].bone_transform.pose_data.bone_rotations[0x1c].w = 0.0;
  unaff_EBX[1].bone_origins[0x37].z = 300.0;
  return;
}
