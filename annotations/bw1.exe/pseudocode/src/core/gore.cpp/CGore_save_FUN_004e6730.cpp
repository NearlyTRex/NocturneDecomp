// Name: core_gore.cpp_CGore_save_FUN_004e6730
// Address: 004e6730
// Address Range: [[004e6730, 004e67d4]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_save_FUN_004e6730(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_save_FUN_004e6730(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodSplat *this_ptr_01;
  
  FUN_005c03c0(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  FUN_005c03c0(file_handle,&DAT_005e4183,_DAT_01cf69f8);
  if (0 < _DAT_01cf69f8) {
    this_ptr_00 = (CBloodPool *)0x1cf69fc;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_CBloodPool_save_FUN_004e5660(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cf69f8);
  }
  iVar1 = 0;
  iVar2 = FUN_005c03c0(file_handle,&DAT_005e4187,_DAT_01cd56b0);
  if (0 < _DAT_01cd56b0) {
    this_ptr_01 = (CBloodSplat *)0x1cd56b4;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_CBloodSplat_save_FUN_004e5030(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < _DAT_01cd56b0);
  }
  return iVar2;
}
