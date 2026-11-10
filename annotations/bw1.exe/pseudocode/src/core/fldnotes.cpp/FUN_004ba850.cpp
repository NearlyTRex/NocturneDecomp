// Name: core_fldnotes.cpp_FUN_004ba850
// Address: 004ba850
// Address Range: [[004ba850, 004ba8c9]]
// Convention: unknown
// Signature: int core_fldnotes_cpp_FUN_004ba850(undefined4 param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

int core_fldnotes_cpp_FUN_004ba850(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = unkaddr_004b9ab0_cpp_FUN_004ba730(param_1);
  *(byte ***)(iVar2 + 0x14) =
       &PTR_core_fldnotes_cpp_PageResource_Text_dtor_FUN_004ba8d0_00600934;
  *(uint *)(iVar2 + 0x11c) = param_3;
  pcVar4 = (char *)(iVar2 + 0x1c);
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + 0x18) = 0;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0
                    (*(CBitFont **)(iVar2 + 0x11c),(char *)(iVar2 + 0x1c));
  *(int *)(iVar2 + 8) = iVar3;
  iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(*(CBitFont **)(iVar2 + 0x11c),0x6a);
  *(int *)(iVar2 + 0xc) = iVar3;
  return iVar2;
}
