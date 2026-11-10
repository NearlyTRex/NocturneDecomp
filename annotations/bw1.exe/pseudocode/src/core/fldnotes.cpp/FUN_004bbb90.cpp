// Name: core_fldnotes.cpp_FUN_004bbb90
// Address: 004bbb90
// Address Range: [[004bbb90, 004bbbee]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bbb90(int param_1,char *param_2)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004bbb90(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x18);
  }
  iVar2 = -1;
  pcVar3 = (char *)(param_1 + 0x48);
  do {
    pcVar4 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                    (*(CBitFont **)(param_1 + 0x2c),(char *)(param_1 + 0x48));
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x40) + iVar2;
  return;
}
