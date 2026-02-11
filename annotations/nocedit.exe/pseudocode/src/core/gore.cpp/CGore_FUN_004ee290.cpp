// Name: core_gore.cpp_CGore_FUN_004ee290
// Address: 004ee290
// Address Range: [[004ee290, 004ee334]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_FUN_004ee290(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CGore_FUN_004ee290(CGore *this_ptr,_FILE *file_handle)

{
  int extraout_EAX;
  CBloodPool *this_ptr_00;
  int iVar1;
  int iVar2;
  CBloodSplat *this_ptr_01;
  
  _fprintf(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  _fprintf(file_handle,"%d\n",INT_02da8720);
  if (0 < INT_02da8720) {
    this_ptr_00 = DAT_02da8724;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_CBloodPool_FUN_004ed1c0(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 < INT_02da8720);
  }
  iVar1 = 0;
  iVar2 = _fprintf(file_handle,"%d\n",INT_02d873d8);
  if (0 < INT_02d873d8) {
    this_ptr_01 = DAT_02d873dc;
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_CBloodSplat_FUN_004ecb90(this_ptr_01);
      this_ptr_01 = this_ptr_01 + 1;
      iVar2 = extraout_EAX;
    } while (iVar1 < INT_02d873d8);
  }
  return iVar2;
}
