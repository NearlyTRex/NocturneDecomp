// Name: core_inv.cpp_getItemDisplayName_FUN_004beca0
// Address: 004beca0
// Address Range: [[004beca0, 004bed0b]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_inv_cpp_getItemDisplayName_FUN_004beca0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x1cb03d8;
  iVar4 = 0;
  iVar1 = core_inv_cpp_getItemModel_FUN_004beb40(param_1);
  if (0 < _DAT_01cb03d0) {
    do {
      iVar2 = _stricmp(iVar1 + 0x78,iVar3);
      if (iVar2 == 0) {
        return iVar3 + 0x100;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x300;
    } while (iVar4 < _DAT_01cb03d0);
  }
  _sprintf(0x1cae380,"Add to dict: %s",iVar1 + 0x78);
  return 0x1cae380;
}
