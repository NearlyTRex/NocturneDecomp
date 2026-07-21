// Name: engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
// Address: 00492e60
// Address Range: [[00492e60, 00492f2f]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(int param_1,char *param_2)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_2;
  if (*(int *)(param_1 + 0x3190) != 0) {
    do {
      pcVar5 = pcVar4;
      if (*pcVar4 == '\n') goto LAB_00492ee4;
      if (*pcVar4 == '\0') break;
      pcVar5 = pcVar4 + 1;
      if (*pcVar5 == '\n') goto LAB_00492ee4;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
LAB_00492ee4:
    if (pcVar5 == (char *)0x0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x3194) + 0xc))(*(int **)(param_1 + 0x3194),param_2)
      ;
      return iVar3;
    }
  }
  cVar1 = *param_2;
  iVar3 = 0;
  while( true ) {
    if (cVar1 == '\0') {
      return iVar3;
    }
    if (*param_2 == '\n') break;
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,*param_2);
    if (iVar3 < iVar2) {
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(param_1,*param_2);
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x3170);
  do {
    iVar3 = iVar3 + *(int *)(param_1 + 0x3178) + *(int *)(param_1 + 0x3170);
    pcVar4 = param_2 + 1;
    do {
      param_2 = pcVar4;
      if (*pcVar4 == '\n') goto LAB_00492ebc;
      if (*pcVar4 == '\0') break;
      param_2 = pcVar4 + 1;
      if (*param_2 == '\n') goto LAB_00492ebc;
      pcVar4 = pcVar4 + 2;
    } while (*param_2 != '\0');
    param_2 = (char *)0x0;
LAB_00492ebc:
    if (param_2 == (char *)0x0) {
      return iVar3;
    }
  } while( true );
}
