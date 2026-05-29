// Name: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70
// Address: 00575f70
// MANUAL RECONSTRUCTION
// Address Range: [[00575f70, 005761f9]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00575f70(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar6;
  int iVar4;
  int iVar7;
  int iVar5;
  int iVar8;
  int screen_y;
  char local_98 [100];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  bool bVar2;
  uint uVar1;
  
  iVar3 = 0;
  if (0 < this_ptr->camera_count) {
    iVar5 = 0;
    do {
      g_VDCameraSortIndices[iVar5 / 4] = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < this_ptr->camera_count);
  }
  local_28 = 0;
  for (iVar8 = 0; iVar8 < this_ptr->camera_count + -1; iVar8 = iVar8 + 1) {
    iVar6 = iVar8 + 1;
    if (iVar6 < this_ptr->camera_count) {
      iVar4 = iVar6 * 4;
      do {
        if (g_VDCameraScores[g_VDCameraSortIndices[local_28 / 4]] <
            g_VDCameraScores[g_VDCameraSortIndices[iVar4 / 4]]) {
          uVar1 = g_VDCameraSortIndices[local_28 / 4];
          g_VDCameraSortIndices[local_28 / 4] = g_VDCameraSortIndices[iVar4 / 4];
          g_VDCameraSortIndices[iVar4 / 4] = uVar1;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar6 < this_ptr->camera_count);
    }
    local_28 = local_28 + 4;
  }
  iVar6 = 2;
  screen_y = g_WindowHeight + -0xb2;
  iVar8 = 9;
  if (this_ptr->camera_count < 9) {
    iVar8 = this_ptr->camera_count;
  }
  if (0 < iVar8) {
    local_20 = g_WindowHeight + -0xbd;
    local_1c = 0;
    local_24 = g_WindowHeight + -0x18;
    do {
      iVar1 = g_VDCameraSortIndices[local_1c / 4];
      if (this_ptr->cameras[iVar1].is_panning == 0) {
        core_setdir_cpp_CZThumb_render_FUN_00574f20(g_CZThumbPool + iVar1 * 6,iVar6,screen_y);
        iVar2 = g_CZThumbPool[iVar1 * 6].width;
        iVar7 = iVar6;
      }
      else {
        core_setdir_cpp_CZThumb_render_FUN_00574f20(g_CZThumbPool + iVar1 * 6 + 3,iVar6,screen_y);
        iVar7 = iVar6 + g_CZThumbPool[iVar1 * 6 + 3].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20(g_CZThumbPool + iVar1 * 6,iVar7,screen_y);
        iVar7 = iVar7 + g_CZThumbPool[iVar1 * 6].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20(g_CZThumbPool + iVar1 * 6 + 2,iVar7,screen_y);
        iVar7 = iVar7 + g_CZThumbPool[iVar1 * 6 + 2].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00574f20(g_CZThumbPool + iVar1 * 6 + 1,iVar7,screen_y);
        iVar2 = g_CZThumbPool[iVar1 * 6 + 1].width;
      }
      iVar7 = iVar7 + iVar2 + -2;
      _sprintf(local_98,"%g",(double)g_VDCameraScores[iVar1]);
      engine_2d_c_drawText_FUN_00401fd0(local_98,iVar6,g_CZThumbPool[iVar1 * 6].height + screen_y);
      engine_2d_c_drawText_FUN_00401fd0(this_ptr->cameras[iVar1].name,iVar6,local_20);
      iVar6 = iVar7 + 2;
      if (g_WindowWidth < iVar7 + 0x42) {
        iVar6 = 2;
        screen_y = screen_y + 0x58;
        local_20 = local_20 + 0x58;
        bVar2 = g_WindowHeight < local_24;
        local_24 = local_24 + 0x58;
        if (bVar2) {
          return;
        }
      }
      local_1c = local_1c + 4;
    } while (local_1c < iVar8 << 2);
  }
  return;
}
