// Name: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0
// Address: 0052aac0
// Address Range: [[0052aac0, 0052ac97]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0(CMorphModel *this_ptr,int part_index,SMRGLPrimitiveQuad *poly_data,int poly_stride,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0(CMorphModel *this_ptr,int part_index,SMRGLPrimitiveQuad *poly_data,int poly_stride,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

{
  void *pvVar1;
  SMRGLPrimitiveQuad *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLPrimitiveQuad *pSVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar11 = 0;
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x152;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar4 = this_ptr->parts[part_index].start_face;
  local_18 = start_face + iVar4;
  if (iVar4 + this_ptr->parts[part_index].face_count < poly_count + local_18) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x159;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < poly_count) {
    local_24 = texture_index_list;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,texture_list[*local_24].textures[0].texture_name);
      iVar6 = 2;
      if (2 < (poly_data->base).base.count) {
        pSVar7 = (SMRGLPrimitiveQuad *)poly_data->vertices;
        iVar5 = local_18 * 0x3c;
        do {
          iVar3 = INT_02f43974;
          *(uint *)((int)this_ptr->faces + iVar5 + 4) = 3;
          if (iVar3 == 0) {
            piVar9 = (int *)((int)this_ptr->faces + iVar5 + 0x18);
            piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
            piVar8 = (int *)((int)poly_data + (uint)bVar11 * -8 + 0x1c);
            *piVar9 = poly_data->vertices[0].vertex_index;
            *piVar10 = *piVar8;
            piVar10[(uint)bVar11 * -2 + 1] = piVar8[(uint)bVar11 * -2 + 1];
            piVar9 = (int *)((int)this_ptr->faces + iVar5 + 0x24);
            piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
            piVar8 = (int *)((int)pSVar7 + (uint)bVar11 * -8 + 0x10);
            *piVar9 = (pSVar7->base).surface_normal.B;
            *piVar10 = *piVar8;
            piVar10[(uint)bVar11 * -2 + 1] = piVar8[(uint)bVar11 * -2 + 1];
            pvVar1 = this_ptr->faces;
            pSVar2 = pSVar7;
          }
          else {
            piVar9 = (int *)((int)this_ptr->faces + iVar5 + 0x18);
            piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
            piVar8 = (int *)((int)pSVar7 + (uint)bVar11 * -8 + 0x1c);
            *piVar9 = pSVar7->vertices[0].vertex_index;
            *piVar10 = *piVar8;
            piVar10[(uint)bVar11 * -2 + 1] = piVar8[(uint)bVar11 * -2 + 1];
            piVar9 = (int *)((int)this_ptr->faces + iVar5 + 0x24);
            piVar10 = piVar9 + (uint)bVar11 * -2 + 1;
            piVar8 = (int *)((int)pSVar7 + (uint)bVar11 * -8 + 0x10);
            *piVar9 = (pSVar7->base).surface_normal.B;
            *piVar10 = *piVar8;
            piVar10[(uint)bVar11 * -2 + 1] = piVar8[(uint)bVar11 * -2 + 1];
            pvVar1 = this_ptr->faces;
            pSVar2 = poly_data;
          }
          piVar8 = (int *)((int)pvVar1 + iVar5 + 0x30);
          piVar10 = piVar8 + (uint)bVar11 * -2 + 1;
          piVar9 = (int *)((int)pSVar2 + (uint)bVar11 * -8 + 0x1c);
          *piVar8 = pSVar2->vertices[0].vertex_index;
          *piVar10 = *piVar9;
          piVar10[(uint)bVar11 * -2 + 1] = piVar9[(uint)bVar11 * -2 + 1];
          *(int *)((int)this_ptr->faces + iVar5) = iVar4;
          piVar9 = (int *)((int)this_ptr->faces + iVar5 + 0x18);
          *piVar9 = *piVar9 + this_ptr->parts[part_index].start_vertex;
          piVar9 = (int *)((int)this_ptr->faces + iVar5 + 0x24);
          *piVar9 = *piVar9 + this_ptr->parts[part_index].start_vertex;
          pSVar7 = (SMRGLPrimitiveQuad *)&(pSVar7->base).surface_normal.B;
          iVar6 = iVar6 + 1;
          piVar9 = (int *)((int)this_ptr->faces + iVar5 + 0x30);
          *piVar9 = *piVar9 + this_ptr->parts[part_index].start_vertex;
          iVar5 = iVar5 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar6 < (poly_data->base).base.count);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      poly_data = (SMRGLPrimitiveQuad *)
                  ((int)&(((SMRGLPrimitiveQuad *)(poly_data->vertices + -2))->base).base.type +
                  poly_stride);
    } while (local_20 < poly_count);
  }
  return;
}
