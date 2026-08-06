// Name: core_dimage.cpp_CDemonImage_allocMemory_FUN_0044d460
// Address: 0044d460
// Address Range: [[0044d460, 0044d4b6]]
// Convention: __cdecl
// Signature: void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0044d460(CDemonImage *this_ptr)

#include "nocturne.h"

void __cdecl core_dimage_cpp_CDemonImage_allocMemory_FUN_0044d460(CDemonImage *this_ptr)

{
  void *pvVar1;
  
  core_dimage_cpp_CDemonImage_freeMemory_FUN_0044d4c0(this_ptr);
  pvVar1 = malloc(this_ptr->width * this_ptr->height);
  this_ptr->data = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dimage.cpp";
  g_CurrentLineNumber = 49;
  core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonImage::allocMemory - Out of memory!");
  return;
}
