// Name: core_gore.cpp_CGore_load_FUN_004c9e70
// Address: 004c9e70
// Address Range: [[004c9e70, 004c9f1a]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_load_FUN_004c9e70(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_load_FUN_004c9e70(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,"%d\n");
  if (0 < g_BloodPoolCount) {
    this_ptr_00 = g_BloodPools;
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_CBloodPool_load_FUN_004c8da0(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < g_BloodPoolCount);
  }
  iVar2 = 0;
  iVar1 = _fscanf(file_handle,"%d\n");
  if (0 < g_BloodSplatCount) {
    this_ptr_01 = g_BloodSplats;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = core_gore_cpp_CBloodSplat_load_FUN_004c86c0(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < g_BloodSplatCount);
  }
  return iVar1;
}
