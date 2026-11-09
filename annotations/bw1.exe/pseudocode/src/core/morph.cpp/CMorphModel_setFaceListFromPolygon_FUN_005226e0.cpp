// Name: core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0
// Address: 005226e0
// Address Range: [[005226e0, 005228b7]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromPolygon_FUN_005226e0(CMorphModel *this_ptr,int part_index,SMRGLHeaderPrimitive *poly_data,int poly_stride ,SMRGLTextureModel *texture_list,int *texture_index_list,int start_face,int poly_count)

{
  int *piVar1;
  int iVar2;
  SMRGLHeaderPrimitive *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  int *local_24;
  int local_20;
  int local_18;
  
  bVar10 = 0;
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
                        (this_ptr,(char *)(texture_list + *local_24 * 0x48 + 8));
      iVar6 = 2;
      if (2 < *(int *)(poly_data + 4)) {
        pSVar7 = poly_data + 0x18;
        iVar5 = local_18 * 0x3c;
        do {
          iVar2 = _DAT_01d39d30;
          *(uint *)(*(int *)&this_ptr->field_0x60 + 4 + iVar5) = 3;
          if (iVar2 == 0) {
            puVar9 = (uint *)(*(int *)&this_ptr->field_0x60 + 0x18 + iVar5);
            puVar8 = puVar9 + (uint)bVar10 * -2 + 1;
            *puVar9 = *(uint *)(poly_data + 0x18);
            *puVar8 = *(uint *)(poly_data + (uint)bVar10 * -8 + 0x1c);
            puVar8[(uint)bVar10 * -2 + 1] =
                 *(uint *)(poly_data + (uint)bVar10 * -8 + 0x1c + (uint)bVar10 * -8 + 4);
            puVar9 = (uint *)(*(int *)&this_ptr->field_0x60 + 0x24 + iVar5);
            puVar8 = puVar9 + (uint)bVar10 * -2 + 1;
            *puVar9 = *(uint *)(pSVar7 + 0xc);
            *puVar8 = *(uint *)(pSVar7 + (uint)bVar10 * -8 + 0x10);
            puVar8[(uint)bVar10 * -2 + 1] =
                 *(uint *)(pSVar7 + (uint)bVar10 * -8 + 0x10 + (uint)bVar10 * -8 + 4);
            iVar2 = *(int *)&this_ptr->field_0x60;
            pSVar3 = pSVar7;
          }
          else {
            puVar9 = (uint *)(*(int *)&this_ptr->field_0x60 + 0x18 + iVar5);
            puVar8 = puVar9 + (uint)bVar10 * -2 + 1;
            *puVar9 = *(uint *)(pSVar7 + 0x18);
            *puVar8 = *(uint *)(pSVar7 + (uint)bVar10 * -8 + 0x1c);
            puVar8[(uint)bVar10 * -2 + 1] =
                 *(uint *)(pSVar7 + (uint)bVar10 * -8 + 0x1c + (uint)bVar10 * -8 + 4);
            puVar9 = (uint *)(*(int *)&this_ptr->field_0x60 + 0x24 + iVar5);
            puVar8 = puVar9 + (uint)bVar10 * -2 + 1;
            *puVar9 = *(uint *)(pSVar7 + 0xc);
            *puVar8 = *(uint *)(pSVar7 + (uint)bVar10 * -8 + 0x10);
            puVar8[(uint)bVar10 * -2 + 1] =
                 *(uint *)(pSVar7 + (uint)bVar10 * -8 + 0x10 + (uint)bVar10 * -8 + 4);
            iVar2 = *(int *)&this_ptr->field_0x60;
            pSVar3 = poly_data;
          }
          puVar9 = (uint *)(iVar2 + 0x30 + iVar5);
          puVar8 = puVar9 + (uint)bVar10 * -2 + 1;
          *puVar9 = *(uint *)(pSVar3 + 0x18);
          *puVar8 = *(uint *)(pSVar3 + (uint)bVar10 * -8 + 0x1c);
          puVar8[(uint)bVar10 * -2 + 1] =
               *(uint *)(pSVar3 + (uint)bVar10 * -8 + 0x1c + (uint)bVar10 * -8 + 4);
          *(int *)(*(int *)&this_ptr->field_0x60 + iVar5) = iVar4;
          piVar1 = (int *)(*(int *)&this_ptr->field_0x60 + iVar5 + 0x18);
          *piVar1 = *piVar1 + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
          piVar1 = (int *)(*(int *)&this_ptr->field_0x60 + iVar5 + 0x24);
          *piVar1 = *piVar1 + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
          pSVar7 = pSVar7 + 0xc;
          iVar6 = iVar6 + 1;
          piVar1 = (int *)(*(int *)&this_ptr->field_0x60 + iVar5 + 0x30);
          *piVar1 = *piVar1 + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
          iVar5 = iVar5 + 0x3c;
          local_18 = local_18 + 1;
        } while (iVar6 < *(int *)(poly_data + 4));
      }
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
      poly_data = poly_data + poly_stride;
    } while (local_20 < poly_count);
  }
  return;
}
