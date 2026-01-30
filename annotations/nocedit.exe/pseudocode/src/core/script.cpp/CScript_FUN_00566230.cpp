// Name: core_script.cpp_CScript_FUN_00566230
// Address: 00566230
// Address Range: [[00566230, 0056629d]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566230(CScript *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00566230(CScript *this_ptr,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  pcVar5 = &DAT_00643f94;
  if (-1 < param_2) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
    if (param_2 < iVar2) {
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(this_ptr->unk4 + 0x20),param_2);
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
  pcVar6 = &DAT_031101c0;
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
  (&DAT_031101c0)[uVar3] = 0;
  return;
}
