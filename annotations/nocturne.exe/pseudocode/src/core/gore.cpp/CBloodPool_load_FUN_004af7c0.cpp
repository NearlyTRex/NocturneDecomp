// Name: core_gore.cpp_CBloodPool_load_FUN_004af7c0
// Address: 004af7c0
// Address Range: [[004af7c0, 004af81b]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_load_FUN_004af7c0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_load_FUN_004af7c0(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f\n");
  _fscanf(file_handle,"%d,%d\n");
  iVar1 = _fscanf(file_handle,"%d,%f,%d,%d,%d\n");
  return iVar1;
}
