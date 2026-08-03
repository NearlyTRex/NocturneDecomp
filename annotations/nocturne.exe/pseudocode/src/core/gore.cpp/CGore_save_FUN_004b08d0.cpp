// Name: core_gore.cpp_CGore_save_FUN_004b08d0
// Address: 004b08d0
// Address Range: [[004b08d0, 004b0974]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_save_FUN_004b08d0(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_save_FUN_004b08d0(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodSplat *this_ptr_01;
  
  _fprintf(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n",_DAT_01c9e038);
  if (0 < _DAT_01c9e038) {
    this_ptr_00 = g_CBloodPool_ARRAY_01c9e03c;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_CBloodPool_save_FUN_004af820(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01c9e038);
  }
  iVar1 = 0;
  iVar2 = _fprintf(file_handle,"%d\n",_DAT_01c7ccf0);
  if (0 < _DAT_01c7ccf0) {
    this_ptr_01 = g_CBloodSplat_ARRAY_01c7ccf4;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_CBloodSplat_save_FUN_004af1f0(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < _DAT_01c7ccf0);
  }
  return iVar2;
}
