// Name: core_gore.cpp_CGore_load_FUN_004cf010
// Address: 004cf010
// Address Range: [[004cf010, 004cf0ba]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_load_FUN_004cf010(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_load_FUN_004cf010(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  int iVar1;
  int iVar2;
  char local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,&DAT_005c4791);
  if (0 < _DAT_01d4a940) {
    this_ptr_00 = (CBloodPool *)0x1d4a944;
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_CBloodPool_load_FUN_004ce090(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < _DAT_01d4a940);
  }
  iVar2 = 0;
  iVar1 = _fscanf(file_handle,&DAT_005c4795);
  if (0 < _DAT_01d276b8) {
    this_ptr_01 = (CBloodSplat *)0x1d276bc;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = core_gore_cpp_CBloodSplat_load_FUN_004cdb50(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01d276b8);
  }
  return iVar1;
}
