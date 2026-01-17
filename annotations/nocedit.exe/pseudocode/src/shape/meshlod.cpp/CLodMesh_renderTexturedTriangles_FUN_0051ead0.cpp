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
  float atlas_texture_index;
  float *extraout_ECX;
  int unaff_EBX;
  float *pfVar4;
  float *pfVar5;
  char *pcVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  int unaff_retaddr;
  SMRGLTextureBasic *texture;
  int local_64;
  float afStack_60 [12];
  float local_30;
  float local_2c [2];
  uint local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float *local_14;
  
  local_64 = 0;
  local_24 = 0xffffffff;
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      local_18 = (float *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if (local_18[0x10] == 0.0) {
        atlas_texture_index = *local_18;
        if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
          atlas_texture_index =
               (float)shape_design_c_findTextureByFilename_FUN_0046dfc0
                                (this_ptr->submesh_data[(int)atlas_texture_index].texture_filename);
        }
        local_14 = local_18 + 3;
        iVar2 = 0;
        pfVar4 = local_18;
        pfVar5 = local_18;
        do {
          *(float *)((int)afStack_60 + iVar2) = pfVar4[4];
          local_30 = pfVar5[7];
          local_2c[0] = pfVar5[8];
          if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090((int)atlas_texture_index,&local_30,local_2c);
          }
          fVar8 = (float10)local_2c[0] * (float10)65535.0f;
          pfVar5 = pfVar5 + 2;
          dVar9 = crt_math_c_round_FUN_005fe6b0
                            ((double)((float10)local_30 * (float10)65535.0f));
          fVar7 = (float10)dVar9;
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
          local_30 = (float)(int)ROUND(dVar9);
          *(int *)((int)afStack_60 + iVar2 + -4) = (int)ROUND(fVar7);
          pfVar4 = pfVar4 + 1;
          *(float *)((int)afStack_60 + iVar2) = local_30;
          iVar2 = iVar2 + 0xc;
        } while (pfVar4 != extraout_ECX);
        if ((int)atlas_texture_index < 0) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,-((local_24 & 0x7f) + 0x80));
          engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff80);
        }
        else {
          if (atlas_texture_index != local_2c[0]) {
            if (unaff_retaddr == 0) {
              texture = (SMRGLTextureBasic *)
                        ((int)atlas_texture_index * 0x48 + *(int *)(unaff_EBX + 0x14));
            }
            else {
              iVar2 = shape_design_c_getAtlasMapIndex_FUN_0046e030((int)atlas_texture_index);
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
            local_2c[0] = atlas_texture_index;
          }
          engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                    (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff80);
        }
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 0x8c;
    } while (local_1c < this_ptr->tri_count);
  }
  return;
}
