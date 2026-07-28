// Name: core_sound.cpp_FUN_0052d030
// Address: 0052d030
// Address Range: [[0052d030, 0052d118]]
// Convention: unknown
// Signature: void core_sound_cpp_FUN_0052d030(undefined4 param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_FUN_0052d030(uint param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  _DAT_02dc9620 = 0;
  *param_2 = '\0';
  for (iVar2 = 0; iVar2 < _DAT_02dc9610; iVar2 = iVar2 + 1) {
    iVar5 = 0;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080((CStrList *)&DAT_02dc9610,iVar2);
    iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(param_3,pcVar3,iVar5);
    if (iVar5 != 0) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080((CStrList *)&DAT_02dc9610,iVar2)
      ;
      pcVar4 = (char *)(_DAT_02dc9620 * 0x28 + 0x2dc9628);
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      _DAT_02dc9620 = _DAT_02dc9620 + 1;
      if (0x27 < _DAT_02dc9620) break;
    }
  }
  if (_DAT_02dc9620 < 1) {
    return;
  }
  iVar2 = rand();
  pcVar3 = (char *)((iVar2 % _DAT_02dc9620) * 0x28 + 0x2dc9628);
  do {
    cVar1 = *pcVar3;
    *param_2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return;
}
