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
  float extraout_EAX;
  float fVar2;
  int iVar3;
  char *pcVar4;
  int *atlas_texture_index;
  int *extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000010;
  SMRGLTextureBasic *texture;
  SMRGLHeaderPrimitive local_6c;
  int aiStack_54 [9];
  float local_30;
  float local_2c [2];
  uint local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  
  local_6c.surface_normal.A = 0;
  local_6c.base.count = 0;
  local_6c.base.type = 0;
  local_24 = 0xffffffff;
  iVar3 = this_ptr->tri_count;
  local_1c = (int *)0x0;
  if (0 < iVar3) {
    local_20 = 0;
    do {
      local_18 = (int *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if (local_18[0x10] == 0) {
        atlas_texture_index = (int *)*local_18;
        if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
          atlas_texture_index =
               (int *)shape_design_c_findTextureByFilename_FUN_0046dfc0
                                (this_ptr->submesh_data[(int)atlas_texture_index].texture_filename);
          iVar3 = extraout_EDX_01;
        }
        local_14 = local_18 + 3;
        iVar5 = 0;
        piVar6 = local_18;
        piVar7 = local_18;
        do {
          *(int *)((int)aiStack_54 + iVar5 + -0xc) = piVar6[4];
          local_30 = (float)piVar7[7];
          fVar2 = (float)piVar7[8];
          local_2c[0] = fVar2;
          if ((-1 < (int)atlas_texture_index) && (enable_texture_lookup != 0)) {
            shape_design_c_fixupCramUV_FUN_0046e090((int)atlas_texture_index,&local_30,local_2c);
            fVar2 = extraout_EAX;
            iVar3 = extraout_EDX;
          }
          fVar9 = (float10)local_30 * (float10)65535f;
          fVar10 = (float10)local_2c[0] * (float10)65535f;
          piVar7 = piVar7 + 2;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar3,fVar2));
          dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
          iVar3 = (int)((ulonglong)dVar11 >> 0x20);
          local_20 = (int)ROUND(fVar10);
          *(int *)((int)aiStack_54 + iVar5) = (int)ROUND(fVar9);
          piVar6 = piVar6 + 1;
          *(int *)((int)aiStack_54 + iVar5 + 4) = local_20;
          iVar5 = iVar5 + 0xc;
        } while (piVar6 != extraout_ECX);
        if ((int)atlas_texture_index < 0) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,-(((uint)local_14 & 0x7f) + 0x80));
          engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                    (g_CDemonRendererPtr,&local_6c);
          iVar3 = extraout_EDX_02;
        }
        else {
          if (atlas_texture_index != local_1c) {
            if (in_stack_00000010 == 0) {
              texture = (SMRGLTextureBasic *)
                        ((int)atlas_texture_index * 0x48 + *(int *)(use_atlas_mode + 0x14));
            }
            else {
              iVar3 = shape_design_c_getAtlasMapIndex_FUN_0046e030((int)atlas_texture_index);
              pcVar4 = shape_design_c_getTextureName_FUN_0046e060(iVar3);
              pcVar8 = g_TempTextureDescriptor.texture_name;
              do {
                cVar1 = *pcVar4;
                *pcVar8 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar4[1];
                pcVar4 = pcVar4 + 2;
                pcVar8[1] = cVar1;
                pcVar8 = pcVar8 + 2;
              } while (cVar1 != '\0');
              texture = &g_TempTextureDescriptor;
            }
            engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(texture);
            local_18 = atlas_texture_index;
          }
          engine_drender_cpp_CDemonRenderer_renderPremium_FUN_0048b1e0
                    (g_CDemonRendererPtr,&local_6c);
          iVar3 = extraout_EDX_00;
        }
      }
      local_1c = (int *)((int)local_1c + 1);
      local_20 = local_20 + 0x8c;
    } while ((int)local_1c < this_ptr->tri_count);
  }
  return;
}
