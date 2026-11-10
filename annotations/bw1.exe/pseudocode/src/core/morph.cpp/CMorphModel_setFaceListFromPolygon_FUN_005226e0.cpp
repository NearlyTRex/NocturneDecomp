// Name: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0
// Address: 005226e0
// Address Range: [[005226e0, 005228b7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)

{
  UIntegerFloat *pUVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  int *piVar8;
  UIntegerFloat *pUVar9;
  int *piVar10;
  int *piVar11;
  UIntegerFloat *pUVar12;
  byte bVar13;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar13 = 0;
  if ((part_index < 0) || (*(int *)this_ptr <= part_index)) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x152;
    core_main_c_FUN_005030e0("CMorphModel::setFaceList - invalid part index");
  }
  local_18 = start_face + *(int *)(&this_ptr->field_0x10 + part_index * 0x10);
  if (*(int *)(&this_ptr->field_0x10 + part_index * 0x10) +
      *(int *)(&this_ptr->field_0x8 + part_index * 0x10) < poly_count + local_18) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x159;
    core_main_c_FUN_005030e0("CMorphModel::setFaceList - invalid vertex range");
  }
  local_20 = 0;
  if (0 < poly_count) {
    local_24 = texture_index_list;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_00522a80
                        (this_ptr,texture_list[*local_24].texture_name);
      iVar6 = 2;
      if (2 < (poly_data->base).count) {
        pSVar7 = poly_data + 1;
        iVar5 = local_18 * 0x3c;
        do {
          iVar2 = _DAT_01d39d30;
          *(uint *)(*(int *)&this_ptr->field_0x60 + 4 + iVar5) = 3;
          if (iVar2 == 0) {
            piVar10 = (int *)(*(int *)&this_ptr->field_0x60 + 0x18 + iVar5);
            piVar11 = piVar10 + (uint)bVar13 * -2 + 1;
            piVar8 = (int *)((int)poly_data + (uint)bVar13 * -8 + 0x1c);
            *piVar10 = poly_data[1].base.type;
            *piVar11 = *piVar8;
            piVar11[(uint)bVar13 * -2 + 1] = piVar8[(uint)bVar13 * -2 + 1];
            pUVar1 = (UIntegerFloat *)(*(int *)&this_ptr->field_0x60 + 0x24 + iVar5);
            pUVar12 = pUVar1 + (uint)bVar13 * -2 + 1;
            pUVar9 = (UIntegerFloat *)((int)pSVar7 + (uint)bVar13 * -8 + 0x10);
            *pUVar1 = (pSVar7->surface_normal).B;
            *pUVar12 = *pUVar9;
            pUVar12[(uint)bVar13 * -2 + 1] = pUVar9[(uint)bVar13 * -2 + 1];
            iVar2 = *(int *)&this_ptr->field_0x60;
            pSVar3 = pSVar7;
          }
          else {
            piVar10 = (int *)(*(int *)&this_ptr->field_0x60 + 0x18 + iVar5);
            piVar11 = piVar10 + (uint)bVar13 * -2 + 1;
            piVar8 = (int *)((int)pSVar7 + (uint)bVar13 * -8 + 0x1c);
            *piVar10 = pSVar7[1].base.type;
            *piVar11 = *piVar8;
            piVar11[(uint)bVar13 * -2 + 1] = piVar8[(uint)bVar13 * -2 + 1];
            pUVar1 = (UIntegerFloat *)(*(int *)&this_ptr->field_0x60 + 0x24 + iVar5);
            pUVar12 = pUVar1 + (uint)bVar13 * -2 + 1;
            pUVar9 = (UIntegerFloat *)((int)pSVar7 + (uint)bVar13 * -8 + 0x10);
            *pUVar1 = (pSVar7->surface_normal).B;
            *pUVar12 = *pUVar9;
            pUVar12[(uint)bVar13 * -2 + 1] = pUVar9[(uint)bVar13 * -2 + 1];
            iVar2 = *(int *)&this_ptr->field_0x60;
            pSVar3 = poly_data;
          }
          piVar8 = (int *)(iVar2 + 0x30 + iVar5);
          piVar11 = piVar8 + (uint)bVar13 * -2 + 1;
          piVar10 = (int *)((int)pSVar3 + (uint)bVar13 * -8 + 0x1c);
          *piVar8 = pSVar3[1].base.type;
          *piVar11 = *piVar10;
          piVar11[(uint)bVar13 * -2 + 1] = piVar10[(uint)bVar13 * -2 + 1];
          *(int *)(*(int *)&this_ptr->field_0x60 + iVar5) = iVar4;
          piVar10 = (int *)(*(int *)&this_ptr->field_0x60 + iVar5 + 0x18);
          *piVar10 = *piVar10 + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
          piVar10 = (int *)(*(int *)&this_ptr->field_0x60 + iVar5 + 0x24);
          *piVar10 = *piVar10 + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
          pSVar7 = (SMRGLHeaderPrimitive *)&(pSVar7->surface_normal).B;
          iVar6 = iVar6 + 1;
          piVar10 = (int *)(*(int *)&this_ptr->field_0x60 + iVar5 + 0x30);
          *piVar10 = *piVar10 + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
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
