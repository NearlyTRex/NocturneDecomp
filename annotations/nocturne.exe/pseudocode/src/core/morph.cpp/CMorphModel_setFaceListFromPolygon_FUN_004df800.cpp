// Name: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_004df800
// Address: 004df800
// Address Range: [[004df800, 004df9d7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_004df800(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_004df800(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureLod *texture_list,int *texture_index_list,int start_face,int poly_count)

{
  UIntegerFloat *pUVar1;
  SMRGLPrimitiveTriangle *pSVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  SMRGLHeaderPrimitive *pSVar8;
  int *piVar9;
  UIntegerFloat *pUVar10;
  int *piVar11;
  int *piVar12;
  UIntegerFloat *pUVar13;
  byte bVar14;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar14 = 0;
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 338;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMorphModel::setFaceList - invalid part index");
  }
  iVar5 = this_ptr->parts[part_index].start_face;
  local_18 = start_face + iVar5;
  if (iVar5 + this_ptr->parts[part_index].face_count < poly_count + local_18) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 345;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < poly_count) {
    local_24 = texture_index_list;
    do {
      iVar5 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004dfba0
                        (this_ptr,texture_list[*local_24].textures[0].texture_name);
      iVar7 = 2;
      if (2 < (poly_data->base).count) {
        pSVar8 = poly_data + 1;
        iVar6 = local_18 * 0x3c;
        do {
          iVar4 = _DAT_01cd4314;
          *(uint *)((int)this_ptr->faces->vertices + iVar6 + -0x14) = 3;
          if (iVar4 == 0) {
            piVar11 = (int *)((int)&this_ptr->faces->vertices[0].vertex_index + iVar6);
            piVar12 = piVar11 + (uint)bVar14 * -2 + 1;
            piVar9 = (int *)((int)poly_data + (uint)bVar14 * -8 + 0x1c);
            *piVar11 = poly_data[1].base.type;
            *piVar12 = *piVar9;
            piVar12[(uint)bVar14 * -2 + 1] = piVar9[(uint)bVar14 * -2 + 1];
            pUVar1 = (UIntegerFloat *)((int)&this_ptr->faces->vertices[1].vertex_index + iVar6);
            pUVar13 = pUVar1 + (uint)bVar14 * -2 + 1;
            pUVar10 = (UIntegerFloat *)((int)pSVar8 + (uint)bVar14 * -8 + 0x10);
            *pUVar1 = (pSVar8->surface_normal).B;
            *pUVar13 = *pUVar10;
            pUVar13[(uint)bVar14 * -2 + 1] = pUVar10[(uint)bVar14 * -2 + 1];
            pSVar2 = this_ptr->faces;
            pSVar3 = pSVar8;
          }
          else {
            piVar11 = (int *)((int)&this_ptr->faces->vertices[0].vertex_index + iVar6);
            piVar12 = piVar11 + (uint)bVar14 * -2 + 1;
            piVar9 = (int *)((int)pSVar8 + (uint)bVar14 * -8 + 0x1c);
            *piVar11 = pSVar8[1].base.type;
            *piVar12 = *piVar9;
            piVar12[(uint)bVar14 * -2 + 1] = piVar9[(uint)bVar14 * -2 + 1];
            pUVar1 = (UIntegerFloat *)((int)&this_ptr->faces->vertices[1].vertex_index + iVar6);
            pUVar13 = pUVar1 + (uint)bVar14 * -2 + 1;
            pUVar10 = (UIntegerFloat *)((int)pSVar8 + (uint)bVar14 * -8 + 0x10);
            *pUVar1 = (pSVar8->surface_normal).B;
            *pUVar13 = *pUVar10;
            pUVar13[(uint)bVar14 * -2 + 1] = pUVar10[(uint)bVar14 * -2 + 1];
            pSVar2 = this_ptr->faces;
            pSVar3 = poly_data;
          }
          piVar9 = (int *)((int)&pSVar2->vertices[2].vertex_index + iVar6);
          piVar12 = piVar9 + (uint)bVar14 * -2 + 1;
          piVar11 = (int *)((int)pSVar3 + (uint)bVar14 * -8 + 0x1c);
          *piVar9 = pSVar3[1].base.type;
          *piVar12 = *piVar11;
          piVar12[(uint)bVar14 * -2 + 1] = piVar11[(uint)bVar14 * -2 + 1];
          *(int *)((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.
                         type + iVar6) = iVar5;
          piVar11 = (int *)((int)&this_ptr->faces->vertices[0].vertex_index + iVar6);
          *piVar11 = *piVar11 + this_ptr->parts[part_index].start_vertex;
          piVar11 = (int *)((int)&this_ptr->faces->vertices[1].vertex_index + iVar6);
          *piVar11 = *piVar11 + this_ptr->parts[part_index].start_vertex;
          pSVar8 = (SMRGLHeaderPrimitive *)&(pSVar8->surface_normal).B;
          iVar7 = iVar7 + 1;
          piVar11 = (int *)((int)&this_ptr->faces->vertices[2].vertex_index + iVar6);
          *piVar11 = *piVar11 + this_ptr->parts[part_index].start_vertex;
          iVar6 = iVar6 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar7 < (poly_data->base).count);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      poly_data = (SMRGLHeaderPrimitive *)((int)&(poly_data->base).type + poly_stride);
    } while (local_20 < poly_count);
  }
  return;
}
