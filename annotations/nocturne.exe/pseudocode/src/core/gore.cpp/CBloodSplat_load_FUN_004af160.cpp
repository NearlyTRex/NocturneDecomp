// Name: core_gore.cpp_CBloodSplat_load_FUN_004af160
// Address: 004af160
// Address Range: [[004af160, 004af1e1]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004af160(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004af160(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%d,%d,%d\n");
  _fscanf(file_handle,"%f,%f,%f\n");
  iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n");
  return iVar1;
}
