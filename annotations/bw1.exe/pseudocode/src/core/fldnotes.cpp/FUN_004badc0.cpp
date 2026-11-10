// Name: core_fldnotes.cpp_FUN_004badc0
// Address: 004badc0
// Address Range: [[004badc0, 004baf43]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004badc0(int param_1)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004badc0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *str1;
  char *str2;
  char acStack_124 [256];
  int iStack_24;
  void *pvStack_20;
  int iStack_1c;
  int iStack_18;
  CAlphaBitmap *pCStack_14;
  
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01cc7c70,0x16c,0x16c,0xffff);
  pvStack_20 = (void *)(param_1 + 0x18);
  iVar3 = 0;
  pCStack_14 = (CAlphaBitmap *)(param_1 + 0xdc);
  iStack_1c = 0;
  iStack_24 = param_1 + 0x7c;
  iStack_18 = param_1;
  do {
    if (*(char *)(iStack_18 + 0x18) != '\0') {
      str2 = (char *)(iStack_24 + iVar3 * 0x20);
      str1 = (char *)(iVar3 * 0x20 + (int)pvStack_20);
      iVar2 = _stricmp(str1,str2);
      if (iVar2 != 0) {
        _sprintf(acStack_124,(char *)0x5df8f6);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(pCStack_14,acStack_124,0x23,0x2f);
        do {
          cVar1 = *str1;
          *str2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = str1[1];
          str1 = str1 + 2;
          str2[1] = cVar1;
          str2 = str2 + 2;
        } while (cVar1 != '\0');
      }
      *(int *)(param_1 + 0x78) = iStack_1c + 0x17c;
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
                (pCStack_14,iStack_1c + 0x17c,0x17c,0xffff);
      if (iVar3 == 2) {
        core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                  (0x01C51D80,"FinishedTwanaPuzzle");
        memset(pvStack_20,0,0x60);
      }
    }
    iVar3 = iVar3 + 1;
    iStack_18 = iStack_18 + 0x20;
    pCStack_14 = pCStack_14 + 1;
    iStack_1c = iStack_1c + 0x23;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 0x23;
    if (2 < iVar3) {
      return;
    }
  } while( true );
}
