// Name: core_dlight.cpp_CDemonLight_applyFilter_FUN_00474770
// Address: 00474770
// Address Range: [[00474770, 00474a89]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770 (CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x, int filter_pos_y)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
          (CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,
          int filter_pos_y)

{
  char cVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  uchar local_40;
  uint local_38;
  uchar *local_34;
  int local_30;
  
  this_ptr->precomputed_lighting_textures = filter_ptr->data_buffer;
  this_ptr->texture_width = filter_ptr->size;
  this_ptr->texture_height = filter_ptr->count;
  iVar3 = this_ptr->texture_width;
  this_ptr->texture_row_shift = 0;
  for (; 1 < iVar3; iVar3 = iVar3 >> 1) {
    this_ptr->texture_row_shift = this_ptr->texture_row_shift + 1;
  }
  this_ptr->shadow_x_shift = 8;
  this_ptr->texture_col_shift = this_ptr->texture_row_shift;
  iVar3 = this_ptr->shadow_map_width;
  this_ptr->shadow_y_shift = 8;
  for (; 1 < iVar3; iVar3 = iVar3 >> 1) {
    this_ptr->shadow_x_shift = this_ptr->shadow_x_shift + 1;
    this_ptr->shadow_y_shift = this_ptr->shadow_y_shift + 1;
  }
  for (iVar3 = this_ptr->texture_width; iVar3 < 0x100; iVar3 = iVar3 * 2) {
    this_ptr->shadow_x_shift = this_ptr->shadow_x_shift + 1;
    this_ptr->shadow_y_shift = this_ptr->shadow_y_shift + 1;
  }
  this_ptr->shadow_y_shift = this_ptr->shadow_y_shift - filter_index;
  this_ptr->shadow_x_shift = this_ptr->shadow_x_shift - filter_index;
  local_34 = this_ptr->filter_buffer;
  this_ptr->teture_coord_mask = this_ptr->texture_width - 1;
  if (local_34 != (uchar *)0x0) {
    uVar8 = filter_pos_x & 0xff;
    local_30 = 0;
    if (0 < this_ptr->texture_height) {
      local_38 = filter_pos_y >> 8;
      do {
        local_38 = local_38 + 1;
        uVar4 = this_ptr->texture_height - 1;
        iVar6 = (local_30 + (filter_pos_y >> 8) & uVar4) * this_ptr->texture_width;
        puVar2 = this_ptr->precomputed_lighting_textures;
        iVar3 = (uVar4 & local_38) * this_ptr->texture_width;
        iVar5 = 0;
        puVar7 = local_34;
        uVar4 = filter_pos_x >> 8;
        if (0 < this_ptr->texture_width) {
          do {
            uVar9 = this_ptr->texture_width - 1;
            uVar11 = (filter_pos_x >> 8) + iVar5 & uVar9;
            uVar9 = uVar4 + 1 & uVar9;
            local_40 = (uchar)((filter_pos_y & 0xffU) *
                               (puVar2[uVar9 + iVar3] * uVar8 +
                               (uint)puVar2[uVar11 + iVar3] * (0xff - uVar8)) +
                               (0xff - (filter_pos_y & 0xffU)) *
                               (puVar2[uVar9 + iVar6] * uVar8 +
                               (0xff - uVar8) * (uint)puVar2[uVar11 + iVar6]) >> 0x10);
            *puVar7 = local_40;
            iVar5 = iVar5 + 1;
            puVar7 = puVar7 + 1;
            uVar4 = uVar4 + 1;
          } while (iVar5 < this_ptr->texture_width);
        }
        local_30 = local_30 + 1;
        local_34 = local_34 + this_ptr->texture_width;
      } while (local_30 < this_ptr->texture_height);
    }
    this_ptr->precomputed_lighting_textures = this_ptr->filter_buffer;
  }
  pcVar10 = filter_ptr->name;
  pcVar12 = this_ptr->filter_name;
  do {
    cVar1 = *pcVar10;
    *pcVar12 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar1;
    pcVar12 = pcVar12 + 2;
  } while (cVar1 != '\0');
  return;
}
