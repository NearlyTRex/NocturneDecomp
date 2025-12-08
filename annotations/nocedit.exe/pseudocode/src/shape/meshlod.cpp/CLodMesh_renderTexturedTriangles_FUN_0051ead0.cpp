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
  int iVar2;
  char *pcVar3;
  int atlas_texture_index;
  int *extraout_ECX;
  BADSPACEBASE *in_ESP;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
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
        iVar2 = 0;
        piVar4 = local_18;
        piVar5 = local_18;
        do {
          *(int *)((int)aiStack_5c + iVar2 + -4) = piVar4[4];
          local_30 = (float)piVar5[7];
          local_2c = (float)piVar5[8];
          if ((-1 < atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090(atlas_texture_index,&local_30,&local_2c);
          }
          fVar8 = (float10)local_2c * (float10)65535f;
          piVar5 = piVar5 + 2;
          dVar9 = crt_math_c_round_FUN_005fe6b0
                            ((double)((float10)local_30 * (float10)65535f));
          fVar7 = (float10)dVar9;
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
          local_28 = (int)ROUND(dVar9);
          *(int *)((int)aiStack_5c + iVar2) = (int)ROUND(fVar7);
          piVar4 = piVar4 + 1;
          *(int *)((int)aiStack_5c + iVar2 + 4) = local_28;
          iVar2 = iVar2 + 0xc;
        } while (piVar4 != extraout_ECX);
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
              iVar2 = shape_design_c_getAtlasMapIndex_FUN_0046e030(atlas_texture_index);
              pcVar3 = shape_design_c_getTextureName_FUN_0046e060(iVar2);
              pcVar6 = g_TempTextureDescriptor.texture_name;
              do {
                cVar1 = *pcVar3;
                *pcVar6 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar3[1];
                pcVar3 = pcVar3 + 2;
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
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
