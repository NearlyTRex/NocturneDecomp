// Name: wincore_winrun.cpp_FUN_00590c90
// Address: 00590c90
// Address Range: [[00590c90, 00590e3b]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00590c90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_winrun_cpp_FUN_00590c90(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  HWND in_stack_00000004;
  byte bStack_a4;
  byte abStack_a3 [127];
  tagRECT tStack_24;
  tagRECT tStack_14;
  
  if (_DAT_02665a50 == 0) {
    return;
  }
  GetClientRect(in_stack_00000004,&tStack_24);
  mciSendStringA("where mov source",(LPSTR)&bStack_a4,0x80,(HWND)0x0);
  SetRectEmpty(&tStack_14);
  pbVar3 = &bStack_a4;
  while (bStack_a4 == 0x20) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bStack_a4 = *pbVar1;
  }
  for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 != 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (0x2f < *pbVar3 && (*pbVar3 < 0x3a)); pbVar3 = pbVar3 + 1) {
    tStack_14.right = tStack_14.right * 10 + (*pbVar3 - 0x30);
  }
  for (; *pbVar3 == 0x20; pbVar3 = pbVar3 + 1) {
  }
  for (; (bVar2 = *pbVar3, 0x2f < bVar2 && (bVar2 < 0x3a)); pbVar3 = pbVar3 + 1) {
    tStack_14.bottom = tStack_14.bottom * 10 + (bVar2 - 0x30);
  }
  if ((400 < tStack_24.right) || (300 < tStack_24.bottom)) {
    tStack_14.right = tStack_14.right * 2;
    tStack_14.bottom = tStack_14.bottom * 2;
  }
  MoveWindow(_DAT_02665a48,tStack_24.right / 2 - tStack_14.right / 2,
             tStack_24.bottom / 2 - tStack_14.bottom / 2,tStack_14.right,tStack_14.bottom,1);
  return;
}
