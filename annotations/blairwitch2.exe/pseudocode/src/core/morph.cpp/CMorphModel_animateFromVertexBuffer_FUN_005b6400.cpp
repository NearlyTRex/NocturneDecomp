// Name: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
// Address: 005b6400
// Address Range: [[005b6400, 005b64d4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

{
  SMorphPoint *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x112;
    core_main_c_FUN_004e4500("CMorphModel::animate - invalid part index");
  }
  iVar2 = this_ptr->parts[part_index].start_vertex;
  iVar3 = start_offset + iVar2;
  if (iVar2 + this_ptr->parts[part_index].vertex_count < iVar3 + vertex_count) {
    _DAT_01d046a0 = "..\\core\\morph.cpp";
    _DAT_01d046a4 = 0x119;
    core_main_c_FUN_004e4500("CMorphModel::animate - invalid vertex range");
  }
  iVar2 = 0;
  if (0 < vertex_count) {
    iVar3 = iVar3 * 0x10;
    do {
      pSVar1 = this_ptr->points;
      iVar2 = iVar2 + 1;
      *(float *)((int)&(pSVar1->position).x + iVar3) = (float)vertex_buffer->x * _DAT_006013a8;
      *(float *)((int)&(pSVar1->position).y + iVar3) = (float)vertex_buffer->y * _DAT_006013a8;
      *(float *)((int)&(pSVar1->position).z + iVar3) = (float)vertex_buffer->z * _DAT_006013a8;
      iVar3 = iVar3 + 0x10;
      vertex_buffer = vertex_buffer + 1;
    } while (iVar2 < vertex_count);
  }
  return;
}
