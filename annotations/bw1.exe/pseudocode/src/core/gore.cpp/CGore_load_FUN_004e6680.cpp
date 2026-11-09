// Name: core_gore.cpp_CGore_load_FUN_004e6680
// Address: 004e6680
// Address Range: [[004e6680, 004e672a]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_load_FUN_004e6680(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_load_FUN_004e6680(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  CBloodSplat *this_ptr_01;
  int iVar1;
  int iVar2;
  byte local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,&DAT_005e416d,&DAT_01cf69f8);
  if (0 < _DAT_01cf69f8) {
    this_ptr_00 = (CBloodPool *)0x1cf69fc;
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_CBloodPool_load_FUN_004e5600(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < _DAT_01cf69f8);
  }
  iVar2 = 0;
  iVar1 = _fscanf(file_handle,&DAT_005e4171,&DAT_01cd56b0);
  if (0 < _DAT_01cd56b0) {
    this_ptr_01 = (CBloodSplat *)0x1cd56b4;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = core_gore_cpp_CBloodSplat_load_FUN_004e4fa0(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < _DAT_01cd56b0);
  }
  return iVar1;
}
