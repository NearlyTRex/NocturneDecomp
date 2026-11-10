// Name: core_inv.cpp_getItemDisplayName_FUN_004d9e40
// Address: 004d9e40
// Address Range: [[004d9e40, 004d9eab]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004d9e40(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004d9e40(uint param_1)

{
  int iVar1;
  int iVar2;
  char *str2;
  int iVar3;
  
  str2 = (char *)0x1d5dc90;
  iVar3 = 0;
  iVar1 = core_inv_cpp_FUN_004d9d20(param_1);
  if (0 < _DAT_01d5dc88) {
    do {
      iVar2 = _stricmp((char *)(iVar1 + 0x78),str2);
      if (iVar2 == 0) {
        return str2 + 0x100;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 0x300;
    } while (iVar3 < _DAT_01d5dc88);
  }
  _sprintf((char *)0x1d5bc80,"Add to dict: %s");
  return (char *)0x1d5bc80;
}
