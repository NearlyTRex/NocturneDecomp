// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0
// Address: 0057a3c0
// Address Range: [[0057a3c0, 0057a4a8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_7c [4];
  int iStack_6c;
  
  if ((_DAT_02d0bcfc == 0) && (_DAT_01c6cee8 == 0)) {
    memset(local_7c,0,0x6c);
    iVar3 = 0;
    local_7c[0] = 0x6c;
    iVar1 = (**(code **)(*_DAT_02d0bce8 + 100))(_DAT_02d0bce8,0,local_7c,1);
    if (iVar1 != 0) {
      _DAT_01d71de0 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d71de4 = 0x262;
      core_main_c_FUN_004e4330("openScreenDevice - Unable to lock screen!");
    }
    if (_DAT_02d0bcfc == 0) {
      iVar1 = _DAT_02d0bd0c * _DAT_02d0bd08 >> 0x1f;
      iStack_6c = iStack_6c +
                  ((int)((_DAT_02d0bd0c * _DAT_02d0bd08 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3
                  ) + iVar3 * _DAT_02d0bd10;
    }
    if (0 < DAT_005fba1c) {
      iVar1 = DAT_005fba1c * 4;
      iVar2 = 0;
      do {
        *(int *)(&DAT_01c5faec + iVar2) = iStack_6c;
        iVar2 = iVar2 + 4;
        iStack_6c = iStack_6c + iVar3;
      } while (iVar2 < iVar1);
      return;
    }
  }
  return;
}
