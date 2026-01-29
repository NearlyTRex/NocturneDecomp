// Name: core_box.cpp_CBox_saveToFile_FUN_00420020
// Address: 00420020
// Address Range: [[00420020, 00420172]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,_FILE *file_handle)

{
  _fprintf(file_handle,"%sboxVersion\n");
  _fprintf(file_handle,"%s%d\n");
  _fprintf(file_handle,"%sboxStateInfo\n");
  _fprintf(file_handle,"%s%f,%f,%f\n");
  _fprintf(file_handle,"%s%f,%f,%f\n");
  _fprintf(file_handle,"%s%f,%f,%f\n");
  _fprintf(file_handle,"%s%f\n");
  _fprintf(file_handle,"%s%f,%f,%f\n");
  _fprintf(file_handle,"%s%f,%f,%f\n");
  _fprintf(file_handle,"%s%d\n");
  return;
}
