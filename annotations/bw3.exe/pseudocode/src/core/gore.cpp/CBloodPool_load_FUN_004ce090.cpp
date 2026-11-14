// Name: core_gore.cpp_CBloodPool_load_FUN_004ce090
// Address: 004ce090
// Address Range: [[004ce090, 004ce0ef]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_load_FUN_004ce090(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_load_FUN_004ce090(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f,%d\n");
  _fscanf(file_handle,"%d,%d\n");
  iVar1 = _fscanf(file_handle,"%d,%f,%d,%d,%d\n");
  return iVar1;
}
