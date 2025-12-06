// Name: core_script.cpp_FUN_00566230
// Address: 00566230
// Address Range: [[00566230, 0056629d]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566230()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566230(CScript* param_1, uint param_2) */

void core_script_cpp_FUN_00566230(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  bVar7 = 0;
  pcVar5 = &DAT_00643f94;
  if (-1 < in_stack_00000008) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_00000008 < iVar2) {
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(in_stack_00000004 + 0x38),in_stack_00000008);
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
