// Name: shape_design.c_fixupCramUV_FUN_0046e090
// Address: 0046e090
// Address Range: [[0046e090, 0046e33e]]
// Convention: __cdecl
// Signature: void shape_design.c_fixupCramUV_FUN_0046e090(int atlas_texture_index, float * u_coord, float * v_coord)

#include "nocturne.h"

void __cdecl
shape_design_c_fixupCramUV_FUN_0046e090(int atlas_texture_index,float *u_coord,float *v_coord)

{
  float fVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  
  fVar1 = *u_coord * (float)65536;
  fVar2 = *v_coord * (float)65536;
  if (fVar1 < (float)g_TextureAtlasEntries[atlas_texture_index].min_u) {
    fVar1 = (float)g_TextureAtlasEntries[atlas_texture_index].min_u;
  }
  if ((float)g_TextureAtlasEntries[atlas_texture_index].max_u < fVar1) {
    fVar1 = (float)g_TextureAtlasEntries[atlas_texture_index].max_u;
  }
  if (fVar2 < (float)g_TextureAtlasEntries[atlas_texture_index].min_v) {
    fVar2 = (float)g_TextureAtlasEntries[atlas_texture_index].min_v;
  }
  if ((float)g_TextureAtlasEntries[atlas_texture_index].max_v < fVar2) {
    fVar2 = (float)g_TextureAtlasEntries[atlas_texture_index].max_v;
  }
  fVar1 = (float)g_TextureAtlasEntries[atlas_texture_index].packed_width *
          ((fVar1 - (float)g_TextureAtlasEntries[atlas_texture_index].min_u) /
          (float)(g_TextureAtlasEntries[atlas_texture_index].max_u -
                 g_TextureAtlasEntries[atlas_texture_index].min_u));
  fVar2 = (float)g_TextureAtlasEntries[atlas_texture_index].packed_height *
          ((fVar2 - (float)g_TextureAtlasEntries[atlas_texture_index].min_v) /
          (float)(g_TextureAtlasEntries[atlas_texture_index].max_v -
                 g_TextureAtlasEntries[atlas_texture_index].min_v));
  if (g_TextureAtlasEntries[atlas_texture_index].rotation_flag == 0) {
    *u_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_x + fVar1;
    *v_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_y + fVar2;
  }
  else {
    *u_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_x +
               ((float)g_TextureAtlasEntries[atlas_texture_index].packed_height - fVar2);
    *v_coord = (float)g_TextureAtlasEntries[atlas_texture_index].packed_offset_y + fVar1;
  }
  *u_coord = (float)((256 / (double)g_TextureAtlasDimension) * (double)*u_coord);
  *v_coord = (float)((256 / (double)g_TextureAtlasDimension) * (double)*v_coord);
  if (((((float)256.00999999999999 < *u_coord) || ((float)256.00999999999999 < *v_coord)) ||
      (*u_coord < (float)-0.01)) || (*v_coord < (float)-0.01)) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff6c,"fixupCramUV - UV out of range: %f, %f",(double)*u_coord,
               (double)*v_coord);
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x2c3b;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff6c);
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
