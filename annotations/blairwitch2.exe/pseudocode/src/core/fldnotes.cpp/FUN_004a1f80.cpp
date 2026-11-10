// Name: core_fldnotes.cpp_FUN_004a1f80
// Address: 004a1f80
// Address Range: [[004a1f80, 004a1ff9]]
// Convention: unknown
// Signature: int core_fldnotes_cpp_FUN_004a1f80(undefined4 param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

int core_fldnotes_cpp_FUN_004a1f80(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = unkaddr_004a1200_cpp_FUN_004a1e60(param_1);
  *(byte ***)(iVar2 + 0x14) =
       &PTR_core_fldnotes_cpp_PageResource_Text_dtor_FUN_004a2000_005f6ed4;
  *(uint *)(iVar2 + 0x11c) = param_3;
  pcVar5 = (char *)(iVar2 + 0x1c);
  do {
    cVar1 = *param_2;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x18) = 0;
  uVar3 = engine_font_cpp_FUN_004aaf00(*(uint *)(iVar2 + 0x11c),(char *)(iVar2 + 0x1c));
  *(uint *)(iVar2 + 8) = uVar3;
  iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(*(CBitFont **)(iVar2 + 0x11c),0x6a);
  *(int *)(iVar2 + 0xc) = iVar4;
  return iVar2;
}
