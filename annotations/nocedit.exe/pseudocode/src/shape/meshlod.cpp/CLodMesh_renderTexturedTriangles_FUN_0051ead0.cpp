// Name: shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
// Address: 0051ead0
// Address Range: [[0051ead0, 0051ecc9]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0(CLodMesh * this_ptr, int enable_texture_lookup, int use_atlas_mode)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_renderTexturedTriangles_FUN_0051ead0
          (CLodMesh *this_ptr,int enable_texture_lookup,int use_atlas_mode)

{
  char cVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int atlas_texture_index;
  BADSPACEBASE *in_ESP;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  double dVar9;
  double dVar10;
  SMRGLTextureBasic *texture;
  SMRGLHeaderPrimitive local_74;
  int aiStack_5c [11];
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  
  local_74.surface_normal.C = 0;
  local_74.surface_normal.B = 0;
  local_74.surface_normal.A = 0;
  local_74.base.count = 0;
  local_74.base.type = 3;
  local_24 = -1;
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      local_18 = (int *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if (local_18[0x10] == 0) {
        atlas_texture_index = *local_18;
        if ((-1 < atlas_texture_index) && (enable_texture_lookup != 0)) {
          atlas_texture_index =
               shape_design_c_findTextureByFilename_FUN_0046dfc0
                         (this_ptr->submesh_data[atlas_texture_index].texture_filename);
        }
        local_14 = local_18 + 3;
        iVar4 = 0;
        piVar6 = local_18;
        piVar7 = local_18;
        do {
          *(int *)((int)aiStack_5c + iVar4 + -4) = piVar6[4];
          local_30 = (float)piVar7[7];
          local_2c = (float)piVar7[8];
          if ((-1 < atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090(atlas_texture_index,&local_30,&local_2c);
          }
          piVar3 = local_14;
          fVar2 = local_2c * 65535f;
          piVar7 = piVar7 + 2;
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)(local_30 * 65535f));
          dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
          local_28 = (int)ROUND(dVar10);
          *(int *)((int)aiStack_5c + iVar4) = (int)ROUND(dVar9);
          piVar6 = piVar6 + 1;
          *(int *)((int)aiStack_5c + iVar4 + 4) = local_28;
          iVar4 = iVar4 + 0xc;
        } while (piVar6 != piVar3);
        if (atlas_texture_index < 0) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,-((local_1c & 0x7f) + 0x80));
          engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                    (g_CDemonRendererPtr,&local_74);
        }
        else {
          if (atlas_texture_index != local_24) {
            if (enable_texture_lookup == 0) {
              texture = (SMRGLTextureBasic *)(this_ptr->submesh_data + atlas_texture_index);
            }
            else {
              iVar4 = shape_design_c_getAtlasMapIndex_FUN_0046e030(atlas_texture_index);
              pcVar5 = shape_design_c_getTextureName_FUN_0046e060(iVar4);
              pcVar8 = g_TempTextureDescriptor.texture_name;
              do {
                cVar1 = *pcVar5;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar5[1];
                pcVar5 = pcVar5 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              texture = &g_TempTextureDescriptor;
            }
            engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
            local_20 = atlas_texture_index;
          }
          engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff88);
        }
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x8c;
    } while ((int)local_1c < this_ptr->tri_count);
  }
  return;
}
