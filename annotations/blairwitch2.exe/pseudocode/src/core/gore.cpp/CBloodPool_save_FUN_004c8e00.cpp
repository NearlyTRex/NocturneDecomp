// Name: core_gore.cpp_CBloodPool_save_FUN_004c8e00
// Address: 004c8e00
// Address Range: [[004c8e00, 004c8e75]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004c8e00(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004c8e00(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"%f,%f,%f\n");
  _fprintf(file_handle,"%d,%d\n");
  iVar1 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n");
  return iVar1;
}
