// Name: core_gore.cpp_CGore_load_FUN_004b0820
// Address: 004b0820
// Address Range: [[004b0820, 004b08ca]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_load_FUN_004b0820(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_load_FUN_004b0820(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,"%d\n",&DAT_01c9e038);
  if (0 < _DAT_01c9e038) {
    this_ptr_00 = g_CBloodPool_ARRAY_01c9e03c;
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_CBloodPool_load_FUN_004af7c0(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < _DAT_01c9e038);
  }
  iVar2 = 0;
  iVar1 = _fscanf(file_handle,"%d\n",&DAT_01c7ccf0);
  if (0 < _DAT_01c7ccf0) {
    this_ptr_01 = g_CBloodSplat_ARRAY_01c7ccf4;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = core_gore_cpp_CBloodSplat_load_FUN_004af160(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01c7ccf0);
  }
  return iVar1;
}
