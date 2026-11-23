// Name: core_dimage.cpp_CDemonImage_allocMemory_FUN_0045f0a0
// Address: 0045f0a0
// Address Range: [[0045f0a0, 0045f0f6]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0045f0a0(CDemonImage *this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0045f0a0(CDemonImage *this_ptr)

{
  void *pvVar1;
  
  core_dimage_cpp_CDemonImage_freeMemory_FUN_0045f100(this_ptr);
  pvVar1 = malloc(this_ptr->width * this_ptr->height);
  this_ptr->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dimage.cpp";
  g_CurrentLineNumber = 49;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonImage::allocMemory - Out of memory!");
  return;
}
