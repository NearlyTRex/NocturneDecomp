// Name: core_sound.cpp_filterSoundFilesByPattern_FUN_0052c930
// Address: 0052c930
// Address Range: [[0052c930, 0052c9c5]]
// Convention: unknown
// Signature: void core_sound_cpp_filterSoundFilesByPattern_FUN_0052c930(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_filterSoundFilesByPattern_FUN_0052c930(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  _DAT_02dc9620 = 0;
  if (_DAT_02dc9610 < 1) {
    _DAT_02dc9620 = 0;
    return;
  }
  do {
    uVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&DAT_02dc9610,iVar5,0);
    iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(param_1,uVar2);
    if (iVar3 != 0) {
      pcVar4 = (char *)shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&DAT_02dc9610,iVar5);
      pcVar6 = (char *)(_DAT_02dc9620 * 0x28 + 0x2dc9628);
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      _DAT_02dc9620 = _DAT_02dc9620 + 1;
      if (0x27 < _DAT_02dc9620) {
        return;
      }
    }
    iVar5 = iVar5 + 1;
    if (_DAT_02dc9610 <= iVar5) {
      return;
    }
  } while( true );
}
