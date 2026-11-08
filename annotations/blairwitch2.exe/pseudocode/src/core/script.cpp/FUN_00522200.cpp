// Name: FUN_00522200
// Address: 00522200
// Address Range: [[00522200, 0052234c]]
// Convention: unknown
// Signature: void FUN_00522200(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00522200(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  
  _DAT_01e650f8 = 0;
  if ((0 < *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x30) != 0)) {
    iVar2 = FUN_005299b0(param_1,"initSection");
    if (-1 < iVar2) {
      iVar3 = FUN_005299b0(param_1,"initSectionEnd");
      if (iVar3 < 0) {
        _DAT_01d046a0 = "..\\core\\script.cpp";
        _DAT_01d046a4 = 0x42d;
        FUN_004e4500("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = *(uint *)(param_1 + 0x44);
      _DAT_01e65904 = 0;
      *(int *)(param_1 + 0x44) = iVar2;
      iVar2 = 0;
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x44);
        local_14 = 0x3e800000;
        iVar4 = FUN_00522350(param_1,&local_14);
        if (iVar4 < 0) {
          _DAT_01d046a0 = "..\\core\\script.cpp";
          _DAT_01d046a4 = 0x449;
          FUN_004e4500("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                       *(uint *)(*(int *)(param_1 + 0x30) + iVar1 * 8),
                       *(uint *)(*(int *)(param_1 + 0x30) + 4 + iVar1 * 8),&DAT_01e65100);
        }
        if (iVar3 == *(int *)(param_1 + 0x44)) break;
        iVar2 = iVar2 + 1;
        if (10000 < iVar2) {
          _DAT_01d046a0 = "..\\core\\script.cpp";
          _DAT_01d046a4 = 0x45b;
          FUN_004e4500("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01e65904 != 0) {
        FUN_004b8250(0x01CB6900);
        _DAT_01e65904 = 0;
      }
      *(uint *)(param_1 + 0x44) = local_10;
      return;
    }
  }
  return;
}
