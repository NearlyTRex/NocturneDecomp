// Name: core_gore.cpp_CGore_save_FUN_004c9f20
// Address: 004c9f20
// Address Range: [[004c9f20, 004c9fc4]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_save_FUN_004c9f20(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_save_FUN_004c9f20(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodSplat *this_ptr_01;
  
  _fprintf(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n");
  if (0 < g_INT_01cdde40) {
    this_ptr_00 = g_CBloodPool_ARRAY_01cdde44;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_CBloodPool_save_FUN_004c8e00(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < g_INT_01cdde40);
  }
  iVar1 = 0;
  iVar2 = _fprintf(file_handle,"%d\n");
  if (0 < g_INT_01cbcaf8) {
    this_ptr_01 = g_CBloodSplat_ARRAY_01cbcafc;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_CBloodSplat_save_FUN_004c8750(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < g_INT_01cbcaf8);
  }
  return iVar2;
}
