// Name: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40
// Address: 004f9e40
// Address Range: [[004f9e40, 004f9f14]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40(CMorphModel *this_ptr,int part_index,CVector3i *vertex_buffer,int start_offset,int vertex_count)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((part_index < 0) || (*(int *)this_ptr <= part_index)) {
    _DAT_01d71de0 = "..\\core\\morph.cpp";
    _DAT_01d71de4 = 0x112;
    core_main_c_FUN_004e4330("CMorphModel::animate - invalid part index");
  }
  iVar3 = start_offset + *(int *)(&this_ptr->field_0xc + part_index * 0x10);
  if (*(int *)(&this_ptr->field_0xc + part_index * 0x10) +
      *(int *)(&this_ptr->field_0x4 + part_index * 0x10) < iVar3 + vertex_count) {
    _DAT_01d71de0 = "..\\core\\morph.cpp";
    _DAT_01d71de4 = 0x119;
    core_main_c_FUN_004e4330("CMorphModel::animate - invalid vertex range");
  }
  iVar1 = 0;
  if (0 < vertex_count) {
    iVar3 = iVar3 * 0x10;
    do {
      iVar2 = *(int *)&this_ptr->field_0x58 + iVar3;
      iVar1 = iVar1 + 1;
      *(float *)(iVar2 + 4) = (float)vertex_buffer->x * _DAT_005e2c08;
      *(float *)(iVar2 + 8) = (float)vertex_buffer->y * _DAT_005e2c08;
      *(float *)(iVar2 + 0xc) = (float)vertex_buffer->z * _DAT_005e2c08;
      iVar3 = iVar3 + 0x10;
      vertex_buffer = vertex_buffer + 1;
    } while (iVar1 < vertex_count);
  }
  return;
}
