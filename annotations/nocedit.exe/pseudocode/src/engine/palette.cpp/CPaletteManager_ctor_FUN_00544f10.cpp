// Name: engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10
// Address: 00544f10
// Address Range: [[00544f10, 00544f75]]
// Convention: __cdecl
// Signature: CPaletteManager * engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager * this_ptr)

#include "nocturne.h"

CPaletteManager * __cdecl
engine_palette_cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager *this_ptr)

{
  void *pvVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  this_ptr->field3_0xc = in_stack_00000008;
  this_ptr->field2_0x8 = in_stack_0000000c;
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (in_stack_00000008 << 6,"..\\engine\\palette.cpp",0x2b);
  this_ptr->field1_0x4 = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    this_ptr->field0_0x0 = 0;
    return this_ptr;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 0x2c;
  core_main_c_displayErrorAndQuit_FUN_00506f10("The very same person who says not to allocate memory on a constructor did it here.");
  this_ptr->field0_0x0 = 0;
  return this_ptr;
}
