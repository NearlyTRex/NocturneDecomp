// Name: core_setedit.cpp_CDemonSet_FUN_005800d0
// Address: 005800d0
// Address Range: [[005800d0, 005801a2]]
// Convention: __cdecl
// Signature: int core_setedit.cpp_CDemonSet_FUN_005800d0(CDemonSet * this_ptr)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_FUN_005800d0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000014;
  int aiStackY_1028 [1015];
  CVector3i local_40;
  int local_34;
  int aiStack_30 [2];
  CVector3i local_28;
  CVector3i local_1c;
  
  bVar4 = 0;
  if ((((0 < in_stack_00000008) && (0 < in_stack_0000000c)) &&
      (in_stack_00000008 <= g_CDemonCameraInstance.framebuffer_width + -1)) &&
     (in_stack_0000000c <= g_CDemonCameraInstance.framebuffer_height + -1)) {
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
              (&g_CDemonCameraInstance,in_stack_00000008,in_stack_0000000c,&local_28);
    local_1c.x = local_28.x;
    *(uint *)((int)&local_1c + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&local_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (local_1c.z < 0x40000000) {
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                (&g_CDemonCameraInstance,&local_1c,&local_40);
      local_34 = local_40.x;
      aiStack_30[(uint)bVar4 * -2] = *(int *)((int)&local_40 + (uint)bVar4 * -8 + 4);
      aiStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           *(int *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      iVar2 = 0;
      iVar3 = 0;
      if (0 < this_ptr->camera_count) {
        do {
          while ((iVar2 != in_stack_00000014 &&
                 (iVar1 = core_setedit_cpp_FUN_005801b0(), iVar1 != 0))) {
            iVar3 = iVar3 + 1;
            *in_stack_00000010 = iVar2;
            iVar2 = iVar2 + 1;
            in_stack_00000010 = in_stack_00000010 + 1;
            if (this_ptr->camera_count <= iVar2) {
              return iVar3;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < this_ptr->camera_count);
      }
      return iVar3;
    }
  }
  return 0;
}
