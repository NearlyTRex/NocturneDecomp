// Name: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0
// Address: 0052aac0
// Address Range: [[0052aac0, 0052ac97] [0060a11a, 0060a1af]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_0052aac0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

{
  UIntegerFloat *pUVar1;
  int iVar2;
  SMRGLPrimitiveTriangle *pSVar3;
  SMRGLHeaderPrimitive *pSVar4;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar5;
  byte bVar11;
  int *local_24;
  int local_20;
  int local_18;
  SMRGLPrimitiveTriangle *pSVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 338;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  iVar2 = this_ptr->parts[part_index].start_face;
  local_18 = start_face + iVar2;
  if (iVar2 + this_ptr->parts[part_index].face_count < poly_count + local_18) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 345;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < poly_count) {
    local_24 = texture_index_list;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,texture_list[*local_24].textures[0].texture_name);
      if (2 < (poly_data->base).count) {
        pSVar7 = poly_data + 1;
        iVar5 = local_18 * 0x3c;
        do {
          iVar3 = INT_02f43974;
          *(uint *)((int)this_ptr->faces->vertices + iVar5 + -0x14) = 3;
          if (iVar3 == 0) {
            piVar5 = (int *)((int)&this_ptr->faces->vertices[0].vertex_index + iVar5);
            *piVar5 = poly_data[1].base.type;
            piVar5[1] = poly_data[1].base.count;
            *(UIntegerFloat *)(piVar5 + 2) = poly_data[1].surface_normal.A;
            pUVar1 = (UIntegerFloat *)((int)&this_ptr->faces->vertices[1].vertex_index + iVar5);
            *pUVar1 = (pSVar7->surface_normal).B;
            pUVar1[1] = (pSVar7->surface_normal).C;
            pUVar1[2] = (pSVar7->surface_normal).D;
            pSVar3 = this_ptr->faces;
            pSVar4 = pSVar7;
          }
          else {
            piVar5 = (int *)((int)&this_ptr->faces->vertices[0].vertex_index + iVar5);
            *piVar5 = pSVar7[1].base.type;
            piVar5[1] = pSVar7[1].base.count;
            *(UIntegerFloat *)(piVar5 + 2) = pSVar7[1].surface_normal.A;
            pUVar1 = (UIntegerFloat *)((int)&this_ptr->faces->vertices[1].vertex_index + iVar5);
            *pUVar1 = (pSVar7->surface_normal).B;
            pUVar1[1] = (pSVar7->surface_normal).C;
            pUVar1[2] = (pSVar7->surface_normal).D;
            pSVar3 = this_ptr->faces;
            pSVar4 = poly_data;
          }
          piVar5 = (int *)((int)&pSVar3->vertices[2].vertex_index + iVar5);
          piVar9 = (int *)(pSVar4 + 1);
          *piVar5 = *piVar9;
          piVar5[1] = pSVar4[1].base.count;
          iVar2 = pSVar4[1].surface_normal.A.i;
          piVar5[2] = iVar2;
          *(int *)((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                         type + iVar5) = iVar4;
          piVar5 = (int *)((int)&this_ptr->faces->vertices[0].vertex_index + iVar5);
          *piVar5 = *piVar5 + this_ptr->parts[part_index].start_vertex;
          piVar5 = (int *)((int)&this_ptr->faces->vertices[1].vertex_index + iVar5);
          *piVar5 = *piVar5 + this_ptr->parts[part_index].start_vertex;
          pSVar7 = (SMRGLHeaderPrimitive *)&(pSVar7->surface_normal).B;
          piVar5 = (int *)((int)&this_ptr->faces->vertices[2].vertex_index + iVar5);
          *piVar5 = *piVar5 + this_ptr->parts[part_index].start_vertex;
          iVar5 = iVar5 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar2 + 1 < (poly_data->base).count);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      poly_data = (SMRGLHeaderPrimitive *)((int)&(poly_data->base).type + poly_stride);
    } while (local_20 < poly_count);
  }
  return;
}
