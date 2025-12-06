// Name: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
// Address: 00575f70
// Address Range: [[00575f70, 005761f9]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet *this_ptr)

{
  uint uVar1;
  int this_ptr_00;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  int local_28;
  
  iVar2 = 0;
  if (0 < this_ptr->camera_count) {
    iVar5 = 0;
    do {
      *(int *)((int)g_VDCameraSortIndices + iVar5) = iVar2;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < this_ptr->camera_count);
  }
  local_28 = 0;
  for (iVar2 = 0; iVar2 < this_ptr->camera_count + -1; iVar2 = iVar2 + 1) {
    iVar5 = iVar2 + 1;
    if (iVar5 < this_ptr->camera_count) {
      iVar3 = iVar5 * 4;
      do {
        if (g_VDCameraScores[*(int *)((int)g_VDCameraSortIndices + local_28)] <
            g_VDCameraScores[*(int *)((int)g_VDCameraSortIndices + iVar3)]) {
          uVar1 = *(uint *)((int)g_VDCameraSortIndices + local_28);
          *(uint *)((int)g_VDCameraSortIndices + local_28) =
               *(uint *)((int)g_VDCameraSortIndices + iVar3);
          *(uint *)((int)g_VDCameraSortIndices + iVar3) = uVar1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < this_ptr->camera_count);
    }
    local_28 = local_28 + 4;
  }
  iVar5 = 2;
  iVar3 = g_WindowHeight + -0xb2;
  iVar2 = 9;
  if (this_ptr->camera_count < 9) {
    iVar2 = this_ptr->camera_count;
  }
  if (0 < iVar2) {
    do {
      this_ptr_00 = g_VDCameraSortIndices[0];
      iVar2 = g_VDCameraSortIndices[0] * 6;
      if (this_ptr->cameras[g_VDCameraSortIndices[0]].is_panning == 0) {
        core_setdir_cpp_CZThumb_render_FUN_00574f20(g_CZThumbPool + iVar2,iVar5,iVar3);
        iVar4 = g_CZThumbPool[this_ptr_00 * 6].width;
      }
      else {
        core_setdir_cpp_CZThumb_render_FUN_00574f20
                  (g_CZThumbPool + g_VDCameraSortIndices[0] * 6 + 3,iVar5,iVar3);
        iVar5 = iVar5 + g_CZThumbPool[this_ptr_00 * 6 + 3].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20((CZThumb *)this_ptr_00,iVar5,iVar3);
        iVar5 = iVar5 + g_CZThumbPool[this_ptr_00 * 6].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20((CZThumb *)(unaff_EBP + 0x50),iVar5,iVar3);
        iVar5 = iVar5 + g_CZThumbPool[this_ptr_00 * 6 + 2].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20((CZThumb *)(unaff_EDI + 0x28),iVar5,iVar3);
        iVar4 = g_CZThumbPool[this_ptr_00 * 6 + 1].width;
      }
      iVar4 = iVar5 + iVar4 + -2;
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffff78,"%g",(double)g_VDCameraScores[unaff_EBX]);
      engine_2d_c_drawText_FUN_00401fd0
                (&stack0xffffff7c,(int)(g_CZThumbPool + iVar2),
                 g_CZThumbPool[unaff_retaddr * 6].height + iVar3);
      engine_2d_c_drawText_FUN_00401fd0((char *)((int)this_ptr * 0x1a4),this_ptr_00,unaff_ESI);
      iVar5 = iVar4 + 2;
      iVar2 = unaff_ESI;
      if (g_WindowWidth < iVar4 + 0x42) {
        iVar5 = 2;
        iVar3 = iVar3 + 0x58;
        unaff_EBX = unaff_EBX + 0x58;
        iVar2 = unaff_ESI + 0x58;
        if (g_WindowHeight < unaff_ESI) {
          return;
        }
      }
      unaff_retaddr = unaff_retaddr + 4;
      unaff_ESI = iVar2;
    } while (unaff_retaddr < this_ptr_00);
  }
  return;
}
