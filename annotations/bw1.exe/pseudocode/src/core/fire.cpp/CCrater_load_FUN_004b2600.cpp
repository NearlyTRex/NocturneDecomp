// Name: core_fire.cpp_CCrater_load_FUN_004b2600
// Address: 004b2600
// Address Range: [[004b2600, 004b273b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_load_FUN_004b2600(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_004b2600(CCrater *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%d,%d,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    _fscanf(file_handle,"%f,%f,%f\n");
  } while (iVar1 < 3);
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  return;
}
