// Name: core_morph.cpp_CMorphModel_FUN_0052a710
// Address: 0052a710
// Address Range: [[0052a710, 0052a869]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_FUN_0052a710(CMorphModel *this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_FUN_0052a710(CMorphModel *this_ptr)

{
  int iVar1;
  void *pvVar2;
  uint in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  int in_stack_00000014;
  
  if (4 < *(int *)this_ptr->unk1) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0xac;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::addPart - too many parts!");
  }
  *(int *)(this_ptr->unk1 + *(int *)this_ptr->unk1 * 0x10 + 0xc) = this_ptr->num_points;
  *(uint *)(this_ptr->unk1 + *(int *)this_ptr->unk1 * 0x10 + 4) = in_stack_00000008;
  *(uint *)(this_ptr->unk1 + *(int *)this_ptr->unk1 * 0x10 + 0x10) =
       *(uint *)(this_ptr->unk2 + 4);
  *(uint *)(this_ptr->unk1 + *(int *)this_ptr->unk1 * 0x10 + 8) = in_stack_00000010;
  this_ptr->num_points =
       this_ptr->num_points + *(int *)(this_ptr->unk1 + *(int *)this_ptr->unk1 * 0x10 + 4);
  iVar1 = this_ptr->num_points;
  pvVar2 = *(void **)this_ptr->unk2;
  *(int *)(this_ptr->unk2 + 4) =
       *(int *)(this_ptr->unk2 + 4) + *(int *)(this_ptr->unk1 + *(int *)this_ptr->unk1 * 0x10 + 8);
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (pvVar2,iVar1 << 4,"..\\core\\morph.cpp",0xbe);
  *(void **)this_ptr->unk2 = pvVar2;
  pvVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->unk2 + 8),*(int *)(this_ptr->unk2 + 4) * 0x3c,
                      "..\\core\\morph.cpp",0xbf);
  iVar1 = *(int *)this_ptr->unk1;
  *(void **)(this_ptr->unk2 + 8) = pvVar2;
  *(int *)this_ptr->unk1 = iVar1 + 1;
  if ((*(int *)this_ptr->unk2 == 0) || (*(int *)(this_ptr->unk2 + 8) == 0)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0xc5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setup - out of memory!");
  }
  if (in_stack_0000000c != 0) {
    core_morph_cpp_CMorphModel_animate_FUN_0052a920(this_ptr);
  }
  if (in_stack_00000014 != 0) {
    core_morph_cpp_CMorphModel_FUN_0052aca0(this_ptr);
    return;
  }
  return;
}
