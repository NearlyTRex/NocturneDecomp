// Name: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005b65a0
// Address: 005b65a0
// Address Range: [[005b65a0, 005b6777]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005b65a0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005b65a0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)

{
  UIntegerFloat *pUVar1;
  SMRGLHeaderPrimitive *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  uint *puVar8;
  UIntegerFloat *pUVar9;
  SMRGLPrimitiveTriangle *pSVar10;
  byte bVar11;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar11 = 0;
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x152;
    core_main_c_FUN_004e4500("CMorphModel::setFaceList - invalid part index");
  }
  iVar4 = this_ptr->parts[part_index].start_face;
  local_18 = start_face + iVar4;
  if (iVar4 + this_ptr->parts[part_index].face_count < poly_count + local_18) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x159;
    core_main_c_FUN_004e4500("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < poly_count) {
    local_24 = texture_index_list;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_005b6940
                        (this_ptr,texture_list[*local_24].texture_name);
      iVar6 = 2;
      if (2 < (poly_data->base).count) {
        pSVar7 = poly_data + 1;
        iVar5 = local_18 * 0x3c;
        do {
          iVar3 = _DAT_0268014c;
          *(uint *)(this_ptr->faces + iVar5 + 4) = 3;
          if (iVar3 == 0) {
            pSVar10 = this_ptr->faces + iVar5 + 0x18;
            puVar8 = (uint *)((int)poly_data + (uint)bVar11 * -8 + 0x1c);
            *(int *)pSVar10 = poly_data[1].base.type;
            *(uint *)(pSVar10 + (uint)bVar11 * -8 + 4) = *puVar8;
            *(uint *)(pSVar10 + (uint)bVar11 * -8 + 4 + (uint)bVar11 * -8 + 4) =
                 puVar8[(uint)bVar11 * -2 + 1];
            pUVar1 = (UIntegerFloat *)(this_ptr->faces + iVar5 + 0x24);
            pUVar9 = (UIntegerFloat *)((int)pSVar7 + (uint)bVar11 * -8 + 0x10);
            *pUVar1 = (pSVar7->surface_normal).B;
            pUVar1[(uint)bVar11 * -2 + 1] = *pUVar9;
            (pUVar1 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = pUVar9[(uint)bVar11 * -2 + 1];
            pSVar10 = this_ptr->faces;
            pSVar2 = pSVar7;
          }
          else {
            pSVar10 = this_ptr->faces + iVar5 + 0x18;
            puVar8 = (uint *)((int)pSVar7 + (uint)bVar11 * -8 + 0x1c);
            *(int *)pSVar10 = pSVar7[1].base.type;
            *(uint *)(pSVar10 + (uint)bVar11 * -8 + 4) = *puVar8;
            *(uint *)(pSVar10 + (uint)bVar11 * -8 + 4 + (uint)bVar11 * -8 + 4) =
                 puVar8[(uint)bVar11 * -2 + 1];
            pUVar1 = (UIntegerFloat *)(this_ptr->faces + iVar5 + 0x24);
            pUVar9 = (UIntegerFloat *)((int)pSVar7 + (uint)bVar11 * -8 + 0x10);
            *pUVar1 = (pSVar7->surface_normal).B;
            pUVar1[(uint)bVar11 * -2 + 1] = *pUVar9;
            (pUVar1 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] = pUVar9[(uint)bVar11 * -2 + 1];
            pSVar10 = this_ptr->faces;
            pSVar2 = poly_data;
          }
          pSVar10 = pSVar10 + iVar5 + 0x30;
          puVar8 = (uint *)((int)pSVar2 + (uint)bVar11 * -8 + 0x1c);
          *(int *)pSVar10 = pSVar2[1].base.type;
          *(uint *)(pSVar10 + (uint)bVar11 * -8 + 4) = *puVar8;
          *(uint *)(pSVar10 + (uint)bVar11 * -8 + 4 + (uint)bVar11 * -8 + 4) =
               puVar8[(uint)bVar11 * -2 + 1];
          *(int *)(this_ptr->faces + iVar5) = iVar4;
          *(int *)(this_ptr->faces + iVar5 + 0x18) =
               *(int *)(this_ptr->faces + iVar5 + 0x18) + this_ptr->parts[part_index].start_vertex;
          *(int *)(this_ptr->faces + iVar5 + 0x24) =
               *(int *)(this_ptr->faces + iVar5 + 0x24) + this_ptr->parts[part_index].start_vertex;
          pSVar7 = (SMRGLHeaderPrimitive *)&(pSVar7->surface_normal).B;
          iVar6 = iVar6 + 1;
          *(int *)(this_ptr->faces + iVar5 + 0x30) =
               *(int *)(this_ptr->faces + iVar5 + 0x30) + this_ptr->parts[part_index].start_vertex;
          iVar5 = iVar5 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar6 < (poly_data->base).count);
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      poly_data = (SMRGLHeaderPrimitive *)((int)&(poly_data->base).type + poly_stride);
    } while (local_20 < poly_count);
  }
  return;
}
