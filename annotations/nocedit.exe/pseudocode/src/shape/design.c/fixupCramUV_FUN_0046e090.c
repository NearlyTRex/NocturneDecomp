// Name: shape_design.c_fixupCramUV_FUN_0046e090
// Address: 0046e090
// Address Range: [[0046e090, 0046e33e]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_fixupCramUV_FUN_0046e090(int atlas_texture_index,float *u_coord,float *v_coord)

#include "nocturne.h"

void __cdecl shape_design_c_fixupCramUV_FUN_0046e090(int atlas_texture_index,float *u_coord,float *v_coord)

{
  double dVar1;
  double dVar2;
  char local_94 [100];
  double local_30;
  int local_28;
  double local_24;
  double local_1c;
  STextureAtlasEntry *local_14;
  
  local_24 = (double)(*u_coord * (float)65536);
  local_1c = (double)(*v_coord * (float)65536);
  if (local_24 < (double)g_TextureAtlasEntries[atlas_texture_index].min_u) {
    local_24 = (double)g_TextureAtlasEntries[atlas_texture_index].min_u;
  }
  if ((double)g_TextureAtlasEntries[atlas_texture_index].max_u < local_24) {
    local_24 = (double)g_TextureAtlasEntries[atlas_texture_index].max_u;
  }
  if (local_1c < (double)g_TextureAtlasEntries[atlas_texture_index].min_v) {
    local_1c = (double)g_TextureAtlasEntries[atlas_texture_index].min_v;
  }
  if ((double)g_TextureAtlasEntries[atlas_texture_index].max_v < local_1c) {
    local_1c = (double)g_TextureAtlasEntries[atlas_texture_index].max_v;
  }
  dVar1 = (double)g_TextureAtlasEntries[atlas_texture_index].packed_width *
          ((local_24 - (double)g_TextureAtlasEntries[atlas_texture_index].min_u) /
          (double)(g_TextureAtlasEntries[atlas_texture_index].max_u -
                  g_TextureAtlasEntries[atlas_texture_index].min_u));
  dVar2 = (double)g_TextureAtlasEntries[atlas_texture_index].packed_height *
          ((local_1c - (double)g_TextureAtlasEntries[atlas_texture_index].min_v) /
          (double)(g_TextureAtlasEntries[atlas_texture_index].max_v -
                  g_TextureAtlasEntries[atlas_texture_index].min_v));
  if (g_TextureAtlasEntries[atlas_texture_index].rotation_flag == 0) {
    *u_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_x + (float)dVar1;
    *v_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_y + (float)dVar2;
  }
  else {
    *u_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_x +
               ((float)g_TextureAtlasEntries[atlas_texture_index].packed_height - (float)dVar2);
    *v_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_y + (float)dVar1;
  }
  *u_coord = (float)((256 / (double)g_TextureAtlasDimension) * (double)*u_coord);
  *v_coord = (float)((256 / (double)g_TextureAtlasDimension) * (double)*v_coord);
  if (((((float)256.00999999999999 < *u_coord) || ((float)256.00999999999999 < *v_coord)) ||
      (*u_coord < (float)-0.01)) || (*v_coord < (float)-0.01)) {
    _sprintf(local_94,"fixupCramUV - UV out of range: %f, %f",(double)*u_coord,(double)*v_coord);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x2c3b;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_94);
  }
  if (*u_coord < 0.0) {
    *u_coord = 0.0;
  }
  if (*v_coord < 0.0) {
    *v_coord = 0.0;
  }
  if ((float)255.999741 < *u_coord) {
    *u_coord = 255.99974;
  }
  if ((float)255.999741 < *v_coord) {
    *v_coord = 255.99974;
  }
  return;
}
