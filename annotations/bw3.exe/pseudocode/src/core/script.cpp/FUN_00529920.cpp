// Name: FUN_00529920
// Address: 00529920
// Address Range: [[00529920, 00529a6c]]
// Convention: unknown
// Signature: void FUN_00529920(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529920(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  uint local_10;
  
  _DAT_01ed6808 = 0;
  if ((0 < *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x30) != 0)) {
    iVar2 = FUN_005303b0(param_1,"initSection");
    if (-1 < iVar2) {
      iVar3 = FUN_005303b0(param_1,"initSectionEnd");
      if (iVar3 < 0) {
        _DAT_01d71de0 = "..\\core\\script.cpp";
        _DAT_01d71de4 = 0x42b;
        FUN_004e4330("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = *(uint *)(param_1 + 0x44);
      _DAT_01ed7014 = 0;
      *(int *)(param_1 + 0x44) = iVar2;
      iVar2 = 0;
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x44);
        local_14 = 0x3e800000;
        iVar4 = FUN_00529a70(param_1,&local_14);
        if (iVar4 < 0) {
          _DAT_01d71de0 = "..\\core\\script.cpp";
          _DAT_01d71de4 = 0x447;
          FUN_004e4330("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                       *(uint *)(*(int *)(param_1 + 0x30) + iVar1 * 8),
                       *(uint *)(*(int *)(param_1 + 0x30) + 4 + iVar1 * 8),&DAT_01ed6810);
        }
        if (iVar3 == *(int *)(param_1 + 0x44)) break;
        iVar2 = iVar2 + 1;
        if (10000 < iVar2) {
          _DAT_01d71de0 = "..\\core\\script.cpp";
          _DAT_01d71de4 = 0x459;
          FUN_004e4330("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01ed7014 != 0) {
        FUN_004ba490(0x01D2130C);
        _DAT_01ed7014 = 0;
      }
      *(uint *)(param_1 + 0x44) = local_10;
      return;
    }
  }
  return;
}
