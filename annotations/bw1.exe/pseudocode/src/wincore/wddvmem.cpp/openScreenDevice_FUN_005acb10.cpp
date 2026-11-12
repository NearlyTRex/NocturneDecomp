// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10
// Address: 005acb10
// Address Range: [[005acb10, 005acbf8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_7c [4];
  int iStack_6c;
  
  if ((_DAT_02c9931c == 0) && (_DAT_01c50948 == 0)) {
    memset(local_7c,0,0x6c);
    iVar3 = 0;
    local_7c[0] = 0x6c;
    iVar1 = (**(code **)(*_DAT_02c99308 + 100))(_DAT_02c99308,0,local_7c,1);
    if (iVar1 != 0) {
      _DAT_01d1d400 = "..\\wincore\\wddvmem.cpp";
      _DAT_01d1d404 = 0x262;
      core_main_c_FUN_005030e0("openScreenDevice - Unable to lock screen!");
    }
    if (_DAT_02c9931c == 0) {
      iVar1 = _DAT_02c9932c * _DAT_02c99328 >> 0x1f;
      iStack_6c = iStack_6c +
                  ((int)((_DAT_02c9932c * _DAT_02c99328 + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3
                  ) + iVar3 * _DAT_02c99330;
    }
    if (0 < DAT_0061b49c) {
      iVar1 = DAT_0061b49c * 4;
      iVar2 = 0;
      do {
        *(int *)(&DAT_01c4354c + iVar2) = iStack_6c;
        iVar2 = iVar2 + 4;
        iStack_6c = iStack_6c + iVar3;
      } while (iVar2 < iVar1);
      return;
    }
  }
  return;
}
