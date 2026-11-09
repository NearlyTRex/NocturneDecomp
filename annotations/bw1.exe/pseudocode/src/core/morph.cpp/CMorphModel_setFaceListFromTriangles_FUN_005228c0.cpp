// Name: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0
// Address: 005228c0
// Address Range: [[005228c0, 00522a7e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

{
  int *piVar1;
  SInputFace *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SInputFace *local_24;
  int *local_20;
  int local_1c;
  int local_14;
  
  if ((part_index < 0) || (*(int *)this_ptr <= part_index)) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x191;
    core_main_c_FUN_005030e0("CMorphModel::setFaceList - invalid part index");
  }
  iVar5 = start_face + *(int *)(&this_ptr->field_0x10 + part_index * 0x10);
  if (*(int *)(&this_ptr->field_0x10 + part_index * 0x10) +
      *(int *)(&this_ptr->field_0x8 + part_index * 0x10) < face_count + iVar5) {
    _DAT_01d1d400 = "..\\core\\morph.cpp";
    _DAT_01d1d404 = 0x198;
    core_main_c_FUN_005030e0("CMorphModel::setFaceList - invalid vertex range");
  }
  local_1c = 0;
  local_24 = face_data;
  if (0 < face_count) {
    local_20 = index_data;
    local_14 = iVar5 * 0x3c;
    do {
      iVar5 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_00522a80
                        (this_ptr,(char *)(texture_sets + *local_20 * 0x48 + 8));
      iVar4 = 0;
      *(uint *)(*(int *)&this_ptr->field_0x60 + local_14 + 4) = 3;
      pSVar2 = local_24;
      do {
        iVar3 = iVar4;
        if (_DAT_01d39d30 != 0) {
          iVar3 = 2 - iVar4;
        }
        iVar3 = iVar3 * 0xc;
        *(uint *)(iVar3 + 0x18 + *(int *)&this_ptr->field_0x60 + local_14) = (uint)*(ushort *)pSVar2
        ;
        iVar4 = iVar4 + 1;
        *(uint *)(iVar3 + 0x1c + *(int *)&this_ptr->field_0x60 + local_14) =
             (uint)*(ushort *)(pSVar2 + 6) << 8;
        *(uint *)(iVar3 + *(int *)&this_ptr->field_0x60 + local_14 + 0x20) =
             (uint)*(ushort *)(pSVar2 + 0xc) << 8;
        pSVar2 = pSVar2 + 2;
      } while (iVar4 < 3);
      *(int *)(local_14 + *(int *)&this_ptr->field_0x60) = iVar5;
      piVar1 = (int *)(local_14 + 0x18 + *(int *)&this_ptr->field_0x60);
      *piVar1 = *piVar1 + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
      *(int *)(local_14 + 0x24 + *(int *)&this_ptr->field_0x60) =
           *(int *)(local_14 + 0x24 + *(int *)&this_ptr->field_0x60) +
           *(int *)(&this_ptr->field_0xc + part_index * 0x10);
      local_20 = local_20 + 1;
      iVar5 = local_14 + *(int *)&this_ptr->field_0x60;
      local_1c = local_1c + 1;
      *(int *)(iVar5 + 0x30) =
           *(int *)(iVar5 + 0x30) + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
      local_24 = local_24 + 0x12;
      local_14 = local_14 + 0x3c;
    } while (local_1c < face_count);
  }
  return;
}
