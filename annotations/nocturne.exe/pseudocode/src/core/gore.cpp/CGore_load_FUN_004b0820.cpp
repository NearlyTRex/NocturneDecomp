// Name: core_gore.cpp_CGore_load_FUN_004b0820
// Address: 004b0820
// Address Range: [[004b0820, 004b08ca]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CGore_load_FUN_004b0820(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_CGore_load_FUN_004b0820(CGore *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar3 = 0;
  _fscanf(file_handle,"%d\n",&DAT_01c9e038);
  if (0 < _DAT_01c9e038) {
    iVar1 = 0x1c9e03c;
    do {
      iVar3 = iVar3 + 1;
      core_gore_cpp_CBloodPool_load_FUN_004af7c0(iVar1,file_handle);
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < _DAT_01c9e038);
  }
  iVar1 = 0;
  iVar3 = _fscanf(file_handle,"%d\n",&DAT_01c7ccf0);
  if (0 < _DAT_01c7ccf0) {
    iVar2 = 0x1c7ccf4;
    do {
      iVar1 = iVar1 + 1;
      iVar3 = core_gore_cpp_CBloodSplat_load_FUN_004af160(iVar2,file_handle);
      iVar2 = iVar2 + 0x44;
    } while (iVar1 < _DAT_01c7ccf0);
  }
  return iVar3;
}
