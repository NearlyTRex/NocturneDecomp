// Name: core_gore.cpp_CGore_save_FUN_004c9f20
// Address: 004c9f20
// Address Range: [[004c9f20, 004c9fc4]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_save_FUN_004c9f20(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_save_FUN_004c9f20(CGore *this_ptr,_FILE *file_handle)

{
  CBloodPool *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodSplat *this_ptr_01;
  
  FUN_005b8010(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  FUN_005b8010(file_handle,&DAT_005d95a0,_DAT_01cdde40);
  if (0 < _DAT_01cdde40) {
    this_ptr_00 = (CBloodPool *)0x1cdde44;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_CBloodPool_save_FUN_004c8e00(this_ptr_00,file_handle);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < _DAT_01cdde40);
  }
  iVar1 = 0;
  iVar2 = FUN_005b8010(file_handle,&DAT_005d95a4,_DAT_01cbcaf8);
  if (0 < _DAT_01cbcaf8) {
    this_ptr_01 = (CBloodSplat *)0x1cbcafc;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_CBloodSplat_save_FUN_004c8750(this_ptr_01,file_handle);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < _DAT_01cbcaf8);
  }
  return iVar2;
}
