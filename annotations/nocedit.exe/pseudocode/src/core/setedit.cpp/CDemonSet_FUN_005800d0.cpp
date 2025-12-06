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
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar3;
  byte bVar4;
  CVector3i *in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000018;
  int in_stack_0000001c;
  uint auStackY_1020 [1013];
  int in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  uint uStack_38;
  uint uStack_30;
  uint uStack_24;
  uint local_1c;
  
  bVar4 = 0;
  if ((((0 < (int)in_stack_00000008) && (0 < in_stack_0000000c)) &&
      ((int)in_stack_00000008 <= g_CDemonCameraInstance.framebuffer_width + -1)) &&
     (in_stack_0000000c <= g_CDemonCameraInstance.framebuffer_height + -1)) {
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
              (&g_CDemonCameraInstance,in_stack_00000008,in_stack_0000000c,in_stack_ffffffc0);
    local_1c = uStack_24;
    *(uint *)(&stack0xffffffe8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (unaff_EBP < 0x40000000) {
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                (&g_CDemonCameraInstance,(CVector3i *)&stack0xffffffe8,in_stack_ffffffc4);
      uStack_30 = uStack_38;
      *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8);
      *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      iVar2 = 0;
      iVar3 = 0;
      if (0 < this_ptr->camera_count) {
        do {
          while ((iVar2 != in_stack_0000001c &&
                 (iVar1 = core_setedit_cpp_FUN_005801b0(), iVar1 != 0))) {
            iVar3 = iVar3 + 1;
            *in_stack_00000018 = iVar2;
            iVar2 = iVar2 + 1;
            in_stack_00000018 = in_stack_00000018 + 1;
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
