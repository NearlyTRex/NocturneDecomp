// Name: core_gore.cpp_CBloodSplat_save_FUN_004cdbe0
// Address: 004cdbe0
// Address Range: [[004cdbe0, 004cdc89]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004cdbe0(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004cdbe0(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"%f,%f,%f,%d\n");
  _fprintf(file_handle,"%d,%d,%d\n");
  _fprintf(file_handle,"%f,%f,%f\n");
  iVar1 = _fprintf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n");
  return iVar1;
}
