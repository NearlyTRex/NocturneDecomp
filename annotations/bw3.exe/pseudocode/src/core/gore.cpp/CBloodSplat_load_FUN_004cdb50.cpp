// Name: core_gore.cpp_CBloodSplat_load_FUN_004cdb50
// Address: 004cdb50
// Address Range: [[004cdb50, 004cdbd5]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004cdb50(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004cdb50(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f,%d\n");
  _fscanf(file_handle,"%d,%d,%d\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n");
  return iVar1;
}
