// Name: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
// Address: 004df660
// Address Range: [[004df660, 004df734]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

{
  SMorphPoint *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    PTR_01cc4800 = "..\\core\\morph.cpp";
    INT_01cc4804 = 0x112;
    core_main_c_FUN_004c8440("CMorphModel::animate - invalid part index");
  }
  iVar2 = this_ptr->parts[part_index].start_vertex;
  iVar3 = start_offset + iVar2;
  if (iVar2 + this_ptr->parts[part_index].vertex_count < iVar3 + vertex_count) {
    PTR_01cc4800 = "..\\core\\morph.cpp";
    INT_01cc4804 = 0x119;
    core_main_c_FUN_004c8440("CMorphModel::animate - invalid vertex range");
  }
  iVar2 = 0;
  if (0 < vertex_count) {
    iVar3 = iVar3 * 0x10;
    do {
      pSVar1 = this_ptr->points;
      iVar2 = iVar2 + 1;
      *(float *)((int)&(pSVar1->position).x + iVar3) = (float)vertex_buffer->x * _DAT_005a0cc8;
      *(float *)((int)&(pSVar1->position).y + iVar3) = (float)vertex_buffer->y * _DAT_005a0cc8;
      *(float *)((int)&(pSVar1->position).z + iVar3) = (float)vertex_buffer->z * _DAT_005a0cc8;
      iVar3 = iVar3 + 0x10;
      vertex_buffer = vertex_buffer + 1;
    } while (iVar2 < vertex_count);
  }
  return;
}
