// Name: core_box.cpp_CBox_saveToFile_FUN_00420020
// Address: 00420020
// Address Range: [[00420020, 00420172]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%sboxVersion\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%sboxStateInfo\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n");
  return;
}
