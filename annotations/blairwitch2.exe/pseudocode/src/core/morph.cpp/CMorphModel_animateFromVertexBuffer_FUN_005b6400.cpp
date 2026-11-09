// Name: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
// Address: 005b6400
// Address Range: [[005b6400, 005b64d4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((part_index < 0) || (*(int *)this_ptr <= part_index)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x112;
    core_main_c_FUN_004e4500("CMorphModel::animate - invalid part index");
  }
  iVar3 = start_offset + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
  if (*(int *)(&this_ptr->field_0xc + part_index * 0x10) +
      *(int *)(&this_ptr->field_0x4 + part_index * 0x10) < iVar3 + vertex_count) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x119;
    core_main_c_FUN_004e4500("CMorphModel::animate - invalid vertex range");
  }
  iVar1 = 0;
  if (0 < vertex_count) {
    iVar3 = iVar3 * 0x10;
    do {
      iVar2 = *(int *)&this_ptr->field_0x58 + iVar3;
      iVar1 = iVar1 + 1;
      *(float *)(iVar2 + 4) = (float)*(int *)vertex_buffer * _DAT_006013a8;
      *(float *)(iVar2 + 8) = (float)*(int *)(vertex_buffer + 4) * _DAT_006013a8;
      *(float *)(iVar2 + 0xc) = (float)*(int *)(vertex_buffer + 8) * _DAT_006013a8;
      iVar3 = iVar3 + 0x10;
      vertex_buffer = vertex_buffer + 0xc;
    } while (iVar1 < vertex_count);
  }
  return;
}
