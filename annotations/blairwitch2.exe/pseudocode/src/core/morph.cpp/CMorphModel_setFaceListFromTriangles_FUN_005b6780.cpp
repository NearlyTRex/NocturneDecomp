// Name: core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780
// Address: 005b6780
// Address Range: [[005b6780, 005b693e]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780(CMorphModel *this_ptr,int part_index,SInputFace *face_data,STextureSet *texture_sets ,int *index_data,int start_face,int face_count)

{
  int iVar1;
  SInputFace *pSVar2;
  int iVar3;
  int iVar4;
  SInputFace *local_24;
  int *local_20;
  int local_1c;
  int local_14;
  
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x191;
    core_main_c_FUN_004e4500("CMorphModel::setFaceList - invalid part index");
  }
  iVar1 = this_ptr->parts[part_index].start_face;
  iVar4 = start_face + iVar1;
  if (iVar1 + this_ptr->parts[part_index].face_count < face_count + iVar4) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x198;
    core_main_c_FUN_004e4500("CMorphModel::setFaceList - invalid vertex range");
  }
  local_1c = 0;
  local_24 = face_data;
  if (0 < face_count) {
    local_20 = index_data;
    local_14 = iVar4 * 0x3c;
    do {
      iVar1 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_005b6940
                        (this_ptr,(char *)(texture_sets + *local_20 * 0x48 + 8));
      iVar4 = 0;
      *(uint *)(this_ptr->faces + local_14 + 4) = 3;
      pSVar2 = local_24;
      do {
        iVar3 = iVar4;
        if (_DAT_0268014c != 0) {
          iVar3 = 2 - iVar4;
        }
        iVar3 = iVar3 * 0xc;
        *(uint *)(this_ptr->faces + iVar3 + 0x18 + local_14) = (uint)*(ushort *)pSVar2;
        iVar4 = iVar4 + 1;
        *(uint *)(this_ptr->faces + iVar3 + 0x1c + local_14) = (uint)*(ushort *)(pSVar2 + 6) << 8;
        *(uint *)(this_ptr->faces + iVar3 + local_14 + 0x20) = (uint)*(ushort *)(pSVar2 + 0xc) << 8;
        pSVar2 = pSVar2 + 2;
      } while (iVar4 < 3);
      *(int *)(this_ptr->faces + local_14) = iVar1;
      *(int *)(this_ptr->faces + local_14 + 0x18) =
           *(int *)(this_ptr->faces + local_14 + 0x18) + this_ptr->parts[part_index].start_vertex;
      *(int *)(this_ptr->faces + local_14 + 0x24) =
           *(int *)(this_ptr->faces + local_14 + 0x24) + this_ptr->parts[part_index].start_vertex;
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      *(int *)(this_ptr->faces + local_14 + 0x30) =
           *(int *)(this_ptr->faces + local_14 + 0x30) + this_ptr->parts[part_index].start_vertex;
      local_24 = local_24 + 0x12;
      local_14 = local_14 + 0x3c;
    } while (local_1c < face_count);
  }
  return;
}
