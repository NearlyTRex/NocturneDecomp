// Name: core_morph.cpp_CMorphModel_animate_FUN_0052a920
// Address: 0052a920
// Address Range: [[0052a920, 0052a9f4]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_animate_FUN_0052a920(CMorphModel *this_ptr,int part_index)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animate_FUN_0052a920(CMorphModel *this_ptr,int part_index)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if ((part_index < 0) || (this_ptr->part_count <= part_index)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x112;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid part index");
  }
  iVar2 = this_ptr->parts[part_index].start_vertex;
  iVar3 = in_stack_00000010 + iVar2;
  if (iVar2 + this_ptr->parts[part_index].vertex_count < iVar3 + in_stack_00000014) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x119;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid vertex range");
  }
  iVar2 = 0;
  if (0 < in_stack_00000014) {
    iVar3 = iVar3 * 0x10;
    do {
      pvVar1 = this_ptr->points;
      iVar2 = iVar2 + 1;
      *(float *)((int)pvVar1 + iVar3 + 4) = (float)*in_stack_0000000c * 0.00390625f;
      *(float *)((int)pvVar1 + iVar3 + 8) = (float)in_stack_0000000c[1] * 0.00390625f;
      *(float *)((int)pvVar1 + iVar3 + 0xc) = (float)in_stack_0000000c[2] * 0.00390625f;
      iVar3 = iVar3 + 0x10;
      in_stack_0000000c = in_stack_0000000c + 3;
    } while (iVar2 < in_stack_00000014);
  }
  return;
}
