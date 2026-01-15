// Name: core_morph.cpp_CMorphModel_addPart_FUN_0052a580
// Address: 0052a580
// Address Range: [[0052a580, 0052a704]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_addPart_FUN_0052a580(CMorphModel *this_ptr)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  if (4 < *(int *)this_ptr->field0_0x0) {
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
  *(int *)(this_ptr->field0_0x0 + *(int *)this_ptr->field0_0x0 * 0x10 + 0xc) = this_ptr->num_points;
  *(uint *)(this_ptr->field0_0x0 + *(int *)this_ptr->field0_0x0 * 0x10 + 4) =
       in_stack_00000008;
  *(uint *)(this_ptr->field0_0x0 + *(int *)this_ptr->field0_0x0 * 0x10 + 0x10) =
       *(uint *)(this_ptr->field2_0x58 + 4);
  *(int *)(this_ptr->field0_0x0 + *(int *)this_ptr->field0_0x0 * 0x10 + 8) = iVar3;
  this_ptr->num_points =
       this_ptr->num_points +
       *(int *)(this_ptr->field0_0x0 + *(int *)this_ptr->field0_0x0 * 0x10 + 4);
  iVar3 = this_ptr->num_points;
  pvVar2 = *(void **)this_ptr->field2_0x58;
  *(int *)(this_ptr->field2_0x58 + 4) =
       *(int *)(this_ptr->field2_0x58 + 4) +
       *(int *)(this_ptr->field0_0x0 + *(int *)this_ptr->field0_0x0 * 0x10 + 8);
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (pvVar2,iVar3 << 4,"..\\core\\morph.cpp",0x89);
  *(void **)this_ptr->field2_0x58 = pvVar2;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->field2_0x58 + 8),
                      *(int *)(this_ptr->field2_0x58 + 4) * 0x3c,"..\\core\\morph.cpp",0x8a);
  iVar3 = *(int *)this_ptr->field0_0x0;
  *(void **)(this_ptr->field2_0x58 + 8) = pvVar2;
  *(int *)this_ptr->field0_0x0 = iVar3 + 1;
  if ((*(int *)this_ptr->field2_0x58 == 0) || (*(int *)(this_ptr->field2_0x58 + 8) == 0)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x90;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setup - out of memory!");
  }
  if (in_stack_0000000c != 0) {
    core_morph_cpp_CMorphModel_animate_FUN_0052a920(this_ptr);
  }
  if (in_stack_00000014 == 0) {
    return;
  }
  core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0(this_ptr);
  return;
}
