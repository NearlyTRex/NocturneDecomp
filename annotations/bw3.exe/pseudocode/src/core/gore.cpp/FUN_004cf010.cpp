// Name: core_gore.cpp_FUN_004cf010
// Address: 004cf010
// Address Range: [[004cf010, 004cf0ba]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_FUN_004cf010(CGore *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gore_cpp_FUN_004cf010(CGore *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_110 [256];
  
  _fgets(local_110,0xff,file_handle);
  iVar3 = 0;
  _fscanf(file_handle,&DAT_005c4791,&DAT_01d4a940);
  if (0 < _DAT_01d4a940) {
    iVar1 = 0x1d4a944;
    do {
      iVar3 = iVar3 + 1;
      core_gore_cpp_FUN_004ce090(iVar1,file_handle);
      iVar1 = iVar1 + 0x2c;
    } while (iVar3 < _DAT_01d4a940);
  }
  iVar1 = 0;
  iVar3 = _fscanf(file_handle,&DAT_005c4795,&DAT_01d276b8);
  if (0 < _DAT_01d276b8) {
    iVar2 = 0x1d276bc;
    do {
      iVar1 = iVar1 + 1;
      iVar3 = core_gore_cpp_FUN_004cdb50(iVar2,file_handle);
      iVar2 = iVar2 + 0x48;
    } while (iVar1 < _DAT_01d276b8);
  }
  return iVar3;
}
