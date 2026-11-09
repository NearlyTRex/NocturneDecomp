// Name: core_gore.cpp_CGore_load_FUN_004c9e70
// Address: 004c9e70
// Address Range: [[004c9e70, 004c9f1a]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_load_FUN_004c9e70(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_load_FUN_004c9e70(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  int iVar1;
  int iVar2;
  byte local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,&DAT_005d958a,&DAT_01cdde40);
  if (0 < _DAT_01cdde40) {
    this_ptr_00 = (CBloodPool *)0x1cdde44;
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_CBloodPool_load_FUN_004c8da0(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < _DAT_01cdde40);
  }
  iVar2 = 0;
  iVar1 = _fscanf(file_handle,&DAT_005d958e,&DAT_01cbcaf8);
  if (0 < _DAT_01cbcaf8) {
    this_ptr_01 = (CBloodSplat *)0x1cbcafc;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = core_gore_cpp_CBloodSplat_load_FUN_004c86c0(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01cbcaf8);
  }
  return iVar1;
}
