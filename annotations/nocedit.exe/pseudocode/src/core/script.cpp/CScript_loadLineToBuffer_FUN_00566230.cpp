// Name: core_script.cpp_CScript_loadLineToBuffer_FUN_00566230
// Address: 00566230
// Address Range: [[00566230, 0056629d]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(CScript *this_ptr,int line_number)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(CScript *this_ptr,int line_number)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  pcVar5 = &s_EmptyChar_00643f94;
  if (-1 < line_number) {
    iVar2 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&this_ptr->script_text);
    if (line_number < iVar2) {
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         (&this_ptr->script_text,line_number);
    }
  }
  uVar3 = 0xffffffff;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0x3fff < uVar3) {
    uVar3 = 0x3fff;
  }
  pcVar6 = g_CurrentLineBuffer + 1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar6 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
    pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  }
  g_CurrentLineBuffer[uVar3 + 1] = '\0';
  return;
}
