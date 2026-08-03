// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520
// Address: 00553520
// Address Range: [[00553520, 005535f7]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (_DAT_02ddf56c == 0) {
    if (_DAT_01c02594 != 0) {
      _DAT_02ddf564 = 1;
      return;
    }
    if (0 < DAT_005b7620) {
      iVar4 = DAT_005b7624 >> 0x1f;
      iVar2 = DAT_005b7624 + iVar4 * -8;
      iVar5 = 0;
      iVar6 = DAT_005b761c * 4;
      iVar3 = 0;
      iVar1 = 0;
      do {
        *(int *)(&DAT_01bd2fa0 + iVar1) =
             DAT_005c5010 + DAT_005b761c * iVar3 * ((int)(iVar2 - (uint)(iVar4 << 2 < 0)) >> 3);
        iVar3 = iVar3 + 1;
        *(int *)(&DAT_01bd4260 + iVar1) = DAT_006af62c + iVar5;
        iVar5 = iVar5 + iVar6;
        iVar1 = iVar1 + 4;
      } while (iVar3 < DAT_005b7620);
    }
    iVar2 = (**(code **)(*_DAT_02ddf558 + 0x80))(_DAT_02ddf558,0);
    if (iVar2 != 0) {
      g_CHAR_PTR_01cc4800 = "..\\wincore\\wddvmem.cpp";
      g_INT_01cc4804 = 0x27f;
      core_main_c_FUN_004c8440("closeScreenDevice - Unable to unlock");
    }
    _DAT_02ddf564 = 1;
  }
  return;
}
