// Name: core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0
// Address: 004719e0
// Address Range: [[004719e0, 00471a3d]]
// Convention: __cdecl
// Signature: void core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0(CDemonImage * this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_004719e0(CDemonImage *this_ptr)

{
  void *pvVar1;
  
  core_dimage_cpp_CDemonImage_freeMemory_FUN_00471a40(this_ptr);
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->width * this_ptr->height,"..\\core\\dimage.cpp",0x30);
  this_ptr->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dimage.cpp";
  g_CurrentLineNumber = 0x31;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonImage::allocMemory - Out of memory!");
  return;
}
