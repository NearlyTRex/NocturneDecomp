// Name: core_fldnotes.cpp_SPageResourceText_ctor_FUN_004a1f80
// Address: 004a1f80
// Address Range: [[004a1f80, 004a1ff9]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SPageResourceText_ctor_FUN_004a1f80(SPageResourceText *this_ptr,char *param_2,undefined4 param_3)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SPageResourceText_ctor_FUN_004a1f80(SPageResourceText *this_ptr,char *param_2,uint param_3)

{
  char cVar1;
  int extraout_EAX;
  int iVar2;
  char *pcVar3;
  
  core_fldnotes_cpp_SPageResource_ctor_FUN_004a1e60(&this_ptr->base);
  *(byte ***)(extraout_EAX + 0x14) = &g_SPageResourceTextVTable;
  *(uint *)(extraout_EAX + 0x11c) = param_3;
  pcVar3 = (char *)(extraout_EAX + 0x1c);
  do {
    cVar1 = *param_2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(uint *)(extraout_EAX + 0x18) = 0;
  iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00
                    (*(CBitFont **)(extraout_EAX + 0x11c),(char *)(extraout_EAX + 0x1c));
  *(int *)(extraout_EAX + 8) = iVar2;
  iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560
                    (*(CBitFont **)(extraout_EAX + 0x11c),0x6a);
  *(int *)(extraout_EAX + 0xc) = iVar2;
  return extraout_EAX;
}
