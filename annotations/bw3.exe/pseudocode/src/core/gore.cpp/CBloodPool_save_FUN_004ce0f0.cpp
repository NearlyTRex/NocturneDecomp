// Name: core_gore.cpp_CBloodPool_save_FUN_004ce0f0
// Address: 004ce0f0
// Address Range: [[004ce0f0, 004ce169]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ce0f0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ce0f0(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"%f,%f,%f,%d\n");
  _fprintf(file_handle,"%d,%d\n");
  iVar1 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n");
  return iVar1;
}
