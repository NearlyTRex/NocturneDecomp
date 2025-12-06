// Name: core_box.cpp_CBox_saveToFile_FUN_00420020
// Address: 00420020
// Address Range: [[00420020, 00420172]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_saveToFile_FUN_00420020(CBox * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,FILE *file_handle)

{
  uint uStack00000010;
  int iStack00000014;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%sboxVersion\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%sboxStateInfo\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  uStack00000010 = (uint)((ulonglong)(double)(this_ptr->angular_velocity).z >> 0x20);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%f,%f,%f\n");
  iStack00000014 = this_ptr->is_valid;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s%d\n");
  return;
}
