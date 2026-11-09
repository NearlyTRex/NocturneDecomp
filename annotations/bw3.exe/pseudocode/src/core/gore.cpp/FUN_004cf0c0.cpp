// Name: core_gore.cpp_FUN_004cf0c0
// Address: 004cf0c0
// Address Range: [[004cf0c0, 004cf164]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_FUN_004cf0c0(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_FUN_004cf0c0(CGore *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_005a3140(file_handle,"--- Gore ---\n");
  iVar2 = 0;
  FUN_005a3140(file_handle,&DAT_005c47a7,_DAT_01d4a940);
  if (0 < _DAT_01d4a940) {
    iVar1 = 0x1d4a944;
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_FUN_004ce0f0(iVar1,file_handle);
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < _DAT_01d4a940);
  }
  iVar1 = 0;
  iVar2 = FUN_005a3140(file_handle,&DAT_005c47ab,_DAT_01d276b8);
  if (0 < _DAT_01d276b8) {
    iVar3 = 0x1d276bc;
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_FUN_004cdbe0(iVar3,file_handle);
      iVar3 = iVar3 + 0x48;
    } while (iVar1 < _DAT_01d276b8);
  }
  return iVar2;
}
