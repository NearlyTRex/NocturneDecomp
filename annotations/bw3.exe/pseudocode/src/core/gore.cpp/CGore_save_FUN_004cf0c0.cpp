// Name: core_gore.cpp_CGore_save_FUN_004cf0c0
// Address: 004cf0c0
// Address Range: [[004cf0c0, 004cf164]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_save_FUN_004cf0c0(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_save_FUN_004cf0c0(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodSplat *this_ptr_01;
  
  _fprintf(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n");
  if (0 < g_INT_01d4a940) {
    this_ptr_00 = g_CBloodPool_ARRAY_01d4a944;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_CBloodPool_save_FUN_004ce0f0(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < g_INT_01d4a940);
  }
  iVar1 = 0;
  iVar2 = _fprintf(file_handle,"%d\n");
  if (0 < g_INT_01d276b8) {
    this_ptr_01 = g_CBloodSplat_ARRAY_01d276bc;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_CBloodSplat_save_FUN_004cdbe0(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < g_INT_01d276b8);
  }
  return iVar2;
}
