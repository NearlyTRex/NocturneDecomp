// Name: core_morph.cpp_CMorphModel_addPart_FUN_0052a580
// Address: 0052a580
// Address Range: [[0052a580, 0052a704]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel *this_ptr)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  if (4 < this_ptr->part_count) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x77;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::addPart - too many parts!");
  }
  iVar3 = 0;
  iVar4 = in_stack_00000014;
  for (; 0 < in_stack_00000010; in_stack_00000010 = in_stack_00000010 + -1) {
    piVar1 = (int *)(iVar4 + 4);
    iVar4 = iVar4 + in_stack_00000018;
    iVar3 = iVar3 + *piVar1 + -2;
  }
  this_ptr->parts[this_ptr->part_count].start_vertex = this_ptr->num_points;
  this_ptr->parts[this_ptr->part_count].vertex_count = in_stack_00000008;
  this_ptr->parts[this_ptr->part_count].start_face = this_ptr->num_faces;
  this_ptr->parts[this_ptr->part_count].face_count = iVar3;
  this_ptr->num_points = this_ptr->num_points + this_ptr->parts[this_ptr->part_count].vertex_count;
  this_ptr->num_faces = this_ptr->num_faces + this_ptr->parts[this_ptr->part_count].face_count;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->points,this_ptr->num_points << 4,"..\\core\\morph.cpp",0x89);
  this_ptr->points = pvVar2;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->faces,this_ptr->num_faces * 0x3c,"..\\core\\morph.cpp",0x8a);
  this_ptr->faces = pvVar2;
  this_ptr->part_count = this_ptr->part_count + 1;
  if ((this_ptr->points == (void *)0x0) || (this_ptr->faces == (void *)0x0)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x90;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setup - out of memory!");
  }
  if (in_stack_0000000c != 0) {
    core_morph_cpp_CMorphModel_animate_FUN_0052a920(this_ptr,this_ptr->part_count + -1);
  }
  if (in_stack_00000014 == 0) {
    return;
  }
  core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0(this_ptr,this_ptr->part_count + -1);
  return;
}
