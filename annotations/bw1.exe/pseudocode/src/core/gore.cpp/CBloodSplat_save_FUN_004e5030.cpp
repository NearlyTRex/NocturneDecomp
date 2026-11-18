// Name: core_gore.cpp_CBloodSplat_save_FUN_004e5030
// Address: 004e5030
// Address Range: [[004e5030, 004e50d5]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004e5030(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004e5030(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"%f,%f,%f\n");
  _fprintf(file_handle,"%d,%d,%d\n");
  _fprintf(file_handle,"%f,%f,%f\n");
  iVar1 = _fprintf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n");
  return iVar1;
}
