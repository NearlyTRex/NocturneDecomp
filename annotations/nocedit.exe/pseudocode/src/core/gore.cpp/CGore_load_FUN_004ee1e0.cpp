// Name: core_gore.cpp_CGore_load_FUN_004ee1e0
// Address: 004ee1e0
// Address Range: [[004ee1e0, 004ee28a]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_load_FUN_004ee1e0(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_load_FUN_004ee1e0(CGore *this_ptr,_FILE *file_handle)

{
  int iVar3;
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,"%d\n",&g_BloodPoolCount);
  if (0 < g_BloodPoolCount) {
    this_ptr_00 = g_BloodPools;
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_CBloodPool_load_FUN_004ed160(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < g_BloodPoolCount);
  }
  iVar2 = 0;
  iVar3 = _fscanf(file_handle,"%d\n",&g_BloodSplatCount);
  if (0 < g_BloodSplatCount) {
    this_ptr_01 = g_BloodSplats;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = core_gore_cpp_CBloodSplat_load_FUN_004ecb00(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < g_BloodSplatCount);
  }
  return iVar3;
}
