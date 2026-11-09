// Name: core_setdir.cpp_restoreZBufferTable_FUN_00538390
// Address: 00538390
// Address Range: [[00538390, 005383f1]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00538390(int count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00538390(int count)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_020b0258 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x70;
    core_main_c_FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < count) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)(&DAT_01c2b64c + iVar2) = *(uint *)(&DAT_020b0258 + iVar2);
      iVar2 = iVar1;
    } while (iVar1 < count * 4);
  }
  _DAT_020b0258 = 0;
  return;
}
