// Name: engine_font.cpp_CBitFont_drawText_FUN_00490980
// Address: 00490980
// Address Range: [[00490980, 00490ae6]]
// Convention: unknown
// Signature: int engine_font_cpp_CBitFont_drawText_FUN_00490980(int param_1,char *param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_font_cpp_CBitFont_drawText_FUN_00490980(int param_1,char *param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *local_14;
  
  iVar2 = param_3;
  if (*(int *)(param_1 + 0x3190) == 0) {
    for (; cVar1 = *param_2, cVar1 != '\0'; param_2 = param_2 + 1) {
      if (cVar1 != '\r') {
        if (cVar1 == '\n') {
          param_4 = param_4 + *(int *)(param_1 + 0x3170) + *(int *)(param_1 + 0x3178);
          iVar2 = param_3;
        }
        else {
          iVar3 = engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0
                            (param_1,cVar1,iVar2,param_4,param_5,param_6);
          iVar2 = iVar2 + iVar3;
        }
      }
    }
    return iVar2 - param_3;
  }
  if (*(int *)(param_1 + 0x3194) == 0) {
    _DAT_01cc4800 = "..\\engine\\font.cpp";
    _DAT_01cc4804 = 0x267;
    FUN_004c8440("CBitFont::drawText - OSFont not set before DrawText called");
  }
  local_14 = param_2;
  do {
    pcVar4 = param_2;
    if (*param_2 == '\n') goto LAB_004909d3;
    if (*param_2 == '\0') goto LAB_004909d1;
    pcVar4 = param_2 + 1;
    if (*pcVar4 == '\n') goto LAB_004909d3;
    param_2 = param_2 + 2;
    if (*pcVar4 == '\0') {
LAB_004909d1:
      pcVar4 = (char *)0x0;
LAB_004909d3:
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      iVar2 = engine_palette_cpp_CFont_drawText_FUN_004eefd0
                        (*(uint *)(param_1 + 0x3194),local_14,param_3,param_4,param_5,param_6)
      ;
      if (iVar2 == -1) {
        *(uint *)(param_1 + 0x3190) = 0;
        iVar2 = engine_font_cpp_CBitFont_drawText_FUN_00490980
                          (param_1,local_14,param_3,param_4,param_5,param_6);
        *(uint *)(param_1 + 0x3190) = 1;
      }
      if (pcVar4 == (char *)0x0) {
        return iVar2;
      }
      param_2 = pcVar4 + 1;
      *pcVar4 = '\n';
      param_4 = param_4 + *(int *)(param_1 + 0x3170) + *(int *)(param_1 + 0x3178);
      local_14 = param_2;
    }
  } while( true );
}
