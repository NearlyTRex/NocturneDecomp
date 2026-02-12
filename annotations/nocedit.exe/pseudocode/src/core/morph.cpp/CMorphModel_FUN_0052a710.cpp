// Name: core_morph.cpp_CMorphModel_FUN_0052a710
// Address: 0052a710
// Address Range: [[0052a710, 0052a869]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_FUN_0052a710(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052a710(CMorphModel *this_ptr)

{
  void *pvVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if (4 < this_ptr->part_count) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0xac;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::addPart - too many parts!");
  }
  this_ptr->parts[this_ptr->part_count].start_vertex = this_ptr->num_points;
  this_ptr->parts[this_ptr->part_count].vertex_count = in_stack_00000008;
  this_ptr->parts[this_ptr->part_count].start_face = this_ptr->num_faces;
  this_ptr->parts[this_ptr->part_count].face_count = in_stack_00000010;
  this_ptr->num_points = this_ptr->num_points + this_ptr->parts[this_ptr->part_count].vertex_count;
  this_ptr->num_faces = this_ptr->num_faces + this_ptr->parts[this_ptr->part_count].face_count;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->points,this_ptr->num_points << 4,"..\\core\\morph.cpp",0xbe);
  this_ptr->points = pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->faces,this_ptr->num_faces * 0x3c,"..\\core\\morph.cpp",0xbf);
  this_ptr->faces = pvVar1;
  this_ptr->part_count = this_ptr->part_count + 1;
  if ((this_ptr->points == (void *)0x0) || (this_ptr->faces == (void *)0x0)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0xc5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setup - out of memory!");
  }
  if (in_stack_0000000c != 0) {
    core_morph_cpp_CMorphModel_animate_FUN_0052a920(this_ptr,this_ptr->part_count + -1);
  }
  if (in_stack_00000014 != 0) {
    core_morph_cpp_CMorphModel_FUN_0052aca0(this_ptr);
    return;
  }
  return;
}
