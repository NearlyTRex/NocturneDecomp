// Name: FUN_0052d030
// Address: 0052d030
// Address Range: [[0052d030, 0052d118]]
// Convention: unknown
// Signature: void FUN_0052d030(undefined4 param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d030(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  _DAT_02dc9620 = 0;
  *param_2 = '\0';
  for (iVar4 = 0; iVar4 < _DAT_02dc9610; iVar4 = iVar4 + 1) {
    uVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&DAT_02dc9610,iVar4,0);
    iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(param_3,uVar2);
    if (iVar3 != 0) {
      pcVar5 = (char *)shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&DAT_02dc9610,iVar4);
      pcVar6 = (char *)(_DAT_02dc9620 * 0x28 + 0x2dc9628);
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      _DAT_02dc9620 = _DAT_02dc9620 + 1;
      if (0x27 < _DAT_02dc9620) break;
    }
  }
  if (_DAT_02dc9620 < 1) {
    return;
  }
  iVar4 = rand();
  pcVar5 = (char *)((iVar4 % _DAT_02dc9620) * 0x28 + 0x2dc9628);
  do {
    cVar1 = *pcVar5;
    *param_2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return;
}
