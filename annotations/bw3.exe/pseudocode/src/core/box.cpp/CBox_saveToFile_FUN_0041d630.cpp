// Name: core_box.cpp_CBox_saveToFile_FUN_0041d630
// Address: 0041d630
// Address Range: [[0041d630, 0041d782]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041d630(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041d630(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

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
