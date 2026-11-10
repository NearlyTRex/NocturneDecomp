// Name: engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
// Address: 004b2a80
// Address Range: [[004b2a80, 004b2b25]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont *this_ptr,char *text)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont *this_ptr,char *text)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar3 = text;
  if (*(int *)(this_ptr + 0x4210) == 0) {
    while (*text != 0) {
      iVar2 = 0;
      do {
        bVar1 = *text;
        text = text + 1;
        if (bVar1 == 10) break;
        iVar2 = iVar2 + *(int *)(this_ptr + (uint)bVar1 * 4 + 0x35e8) + *(int *)(this_ptr + 0x41f4);
      } while (*text != 0);
      if (0 < iVar2) {
        iVar2 = iVar2 - *(int *)(this_ptr + 0x41f4);
      }
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
    }
  }
  else {
LAB_004b2a9e:
    do {
      pcVar4 = text;
      if (*text == '\n') goto LAB_004b2ab6;
      if (*text == '\0') break;
      pcVar4 = text + 1;
      if (*pcVar4 == '\n') goto LAB_004b2ab6;
      text = text + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
LAB_004b2ab6:
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(this_ptr + 0x4214) + 0x6a44) + 8))
                      (*(int *)(this_ptr + 0x4214),pcVar3);
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    if (pcVar4 != (char *)0x0) {
      text = pcVar4 + 1;
      *pcVar4 = '\n';
      pcVar3 = text;
      goto LAB_004b2a9e;
    }
  }
  return iVar5;
}
