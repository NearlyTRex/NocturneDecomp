// Name: core_skeledit.cpp_FUN_00598f10
// Address: 00598f10
// Address Range: [[00598f10, 00598fbb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_00598f10(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_00598f10(void)

{
  CDeformableModelInstance *this_ptr;
  CDeformableModelInstance *this_ptr_00;
  CDeformableModelInstance *unaff_EBP;
  char *in_stack_00000004;
  
  __STK();
  this_ptr = (CDeformableModelInstance *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeledit.cpp",0x1b79);
  this_ptr_00 = (CDeformableModelInstance *)0x0;
  if (this_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
  }
  if (this_ptr_00 == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x1b7a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("viewModel - out of memory!");
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr_00,in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(unaff_EBP);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x1b7e;
  if (this_ptr_00 == (CDeformableModelInstance *)0x0) {
    return;
  }
  (*((this_ptr_00->motion_controller).vtable)->dtor)(&this_ptr_00->motion_controller);
  return;
}
