// Name: core_gore.cpp_CGore_save_FUN_004e6730
// Address: 004e6730
// Address Range: [[004e6730, 004e67d4]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_save_FUN_004e6730(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_save_FUN_004e6730(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodSplat *this_ptr_01;
  
  _fprintf(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n");
  if (0 < g_BloodPoolCount) {
    this_ptr_00 = g_BloodPools;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_CBloodPool_save_FUN_004e5660(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < g_BloodPoolCount);
  }
  iVar1 = 0;
  iVar2 = _fprintf(file_handle,"%d\n");
  if (0 < g_BloodSplatCount) {
    this_ptr_01 = g_BloodSplats;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_CBloodSplat_save_FUN_004e5030(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < g_BloodSplatCount);
  }
  return iVar2;
}
