// Name: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920
// Address: 0052a920
// Address Range: [[0052a920, 0052a9f4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_0052a920(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

{
  SMorphPoint *pSVar1;
  int iVar2;
  int iVar3;
  
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 274;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid part index");
  }
  iVar2 = this_ptr->parts[part_index].start_vertex;
  iVar3 = start_offset + iVar2;
  if (iVar2 + this_ptr->parts[part_index].vertex_count < iVar3 + vertex_count) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 281;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid vertex range");
  }
  iVar2 = 0;
  if (0 < vertex_count) {
    iVar3 = iVar3 * 0x10;
    do {
      pSVar1 = this_ptr->points;
      iVar2 = iVar2 + 1;
      *(float *)((int)&(pSVar1->position).x + iVar3) = (float)vertex_buffer->x * 0.00390625f;
      *(float *)((int)&(pSVar1->position).y + iVar3) = (float)vertex_buffer->y * 0.00390625f;
      *(float *)((int)&(pSVar1->position).z + iVar3) = (float)vertex_buffer->z * 0.00390625f;
      iVar3 = iVar3 + 0x10;
      vertex_buffer = vertex_buffer + 1;
    } while (iVar2 < vertex_count);
  }
  return;
}
