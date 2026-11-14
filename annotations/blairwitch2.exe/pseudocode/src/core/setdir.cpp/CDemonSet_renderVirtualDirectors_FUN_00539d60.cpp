// Name: core_setdir.cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60
// Address: 00539d60
// Address Range: [[00539d60, 00539fe9]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_renderVirtualDirectors_FUN_00539d60(CDemonSet *this_ptr)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_98 [100];
  C3DSCamera *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CZThumb *local_18;
  int local_14;
  
  iVar3 = 0;
  if (0 < this_ptr->camera_count) {
    iVar5 = 0;
    do {
      *(int *)(iVar5 + 0x20b1524) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < this_ptr->camera_count);
  }
  local_28 = 0;
  for (iVar3 = 0; iVar3 < this_ptr->camera_count + -1; iVar3 = iVar3 + 1) {
    iVar5 = iVar3 + 1;
    if (iVar5 < this_ptr->camera_count) {
      iVar4 = iVar5 * 4;
      do {
        if (*(float *)(&DAT_0209394c + *(int *)(local_28 + 0x20b1524) * 4) <
            *(float *)(&DAT_0209394c + *(int *)(iVar4 + 0x20b1524) * 4)) {
          uVar1 = *(uint *)(local_28 + 0x20b1524);
          *(uint *)(local_28 + 0x20b1524) = *(uint *)(iVar4 + 0x20b1524);
          *(uint *)(iVar4 + 0x20b1524) = uVar1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < this_ptr->camera_count);
    }
    local_28 = local_28 + 4;
  }
  iVar3 = 2;
  iVar5 = DAT_006141bc + -0xb2;
  local_30 = 9;
  if (this_ptr->camera_count < 9) {
    local_30 = this_ptr->camera_count;
  }
  if (0 < local_30) {
    local_34 = this_ptr->cameras;
    local_30 = local_30 << 2;
    local_20 = DAT_006141bc + -0xbd;
    local_1c = 0;
    local_24 = DAT_006141bc + -0x18;
    do {
      iVar4 = *(int *)(local_1c + 0x20b1524);
      local_18 = g_CZThumbPool + iVar4 * 6;
      local_2c = iVar3;
      local_14 = iVar4;
      if (this_ptr->cameras[iVar4].is_panning == 0) {
        core_setdir_cpp_CZThumb_render_FUN_00538a60(local_18,iVar3,iVar5);
        iVar4 = g_CZThumbPool[iVar4 * 6].width;
      }
      else {
        core_setdir_cpp_CZThumb_render_FUN_00538a60(g_CZThumbPool + iVar4 * 6 + 3,iVar3,iVar5);
        iVar3 = iVar3 + g_CZThumbPool[iVar4 * 6 + 3].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00538a60(local_18,iVar3,iVar5);
        iVar3 = iVar3 + g_CZThumbPool[iVar4 * 6].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00538a60(local_18 + 2,iVar3,iVar5);
        iVar3 = iVar3 + g_CZThumbPool[iVar4 * 6 + 2].width + -2;
        core_setdir_cpp_CZThumb_render_FUN_00538a60(local_18 + 1,iVar3,iVar5);
        iVar4 = g_CZThumbPool[iVar4 * 6 + 1].width;
      }
      iVar4 = iVar3 + iVar4 + -2;
      _sprintf(local_98,&DAT_005e609c);
      engine_2d_c_drawText_FUN_00401fe0
                (local_98,local_2c,g_CZThumbPool[local_14 * 6].height + iVar5);
      engine_2d_c_drawText_FUN_00401fe0(local_34[local_14].name,local_2c,local_20);
      iVar3 = iVar4 + 2;
      if (DAT_006141b8 < iVar4 + 0x42) {
        iVar3 = 2;
        iVar5 = iVar5 + 0x58;
        local_20 = local_20 + 0x58;
        bVar2 = DAT_006141bc < local_24;
        local_24 = local_24 + 0x58;
        if (bVar2) {
          return;
        }
      }
      local_1c = local_1c + 4;
    } while (local_1c < local_30);
  }
  return;
}
