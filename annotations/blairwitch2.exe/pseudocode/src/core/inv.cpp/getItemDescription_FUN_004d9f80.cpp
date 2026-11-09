// Name: core_inv.cpp_getItemDescription_FUN_004d9f80
// Address: 004d9f80
// Address Range: [[004d9f80, 004d9feb]]
// Convention: __cdecl
// Signature: char * __cdecl core_inv_cpp_getItemDescription_FUN_004d9f80(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_inv_cpp_getItemDescription_FUN_004d9f80(uint param_1)

{
  int iVar1;
  int iVar2;
  char *str2;
  int iVar3;
  
  str2 = (char *)0x1cf0208;
  iVar3 = 0;
  iVar1 = core_inv_cpp_FUN_004d9db0(param_1);
  if (0 < _DAT_01cf0200) {
    do {
      iVar2 = _stricmp((char *)(iVar1 + 0x78),str2);
      if (iVar2 == 0) {
        return str2 + 0x200;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 0x300;
    } while (iVar3 < _DAT_01cf0200);
  }
  FUN_005b7790(0x1cee2b0,"Add to dict: %s",(char *)(iVar1 + 0x78));
  return (char *)0x1cee2b0;
}
