// Name: core_sound.cpp_filterSoundFilesByPattern_FUN_0052c930
// Address: 0052c930
// Address Range: [[0052c930, 0052c9c5]]
// Convention: unknown
// Signature: void core_sound_cpp_filterSoundFilesByPattern_FUN_0052c930(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sound_cpp_filterSoundFilesByPattern_FUN_0052c930(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int index;
  char *pcVar3;
  int iVar4;
  
  index = 0;
  _DAT_02dc9620 = 0;
  if (_DAT_02dc9610 < 1) {
    _DAT_02dc9620 = 0;
    return;
  }
  do {
    iVar4 = 0;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080((CStrList *)&DAT_02dc9610,index);
    iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(param_1,pcVar2,iVar4);
    if (iVar4 != 0) {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080((CStrList *)&DAT_02dc9610,index)
      ;
      pcVar3 = (char *)(_DAT_02dc9620 * 0x28 + 0x2dc9628);
      do {
        cVar1 = *pcVar2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      _DAT_02dc9620 = _DAT_02dc9620 + 1;
      if (0x27 < _DAT_02dc9620) {
        return;
      }
    }
    index = index + 1;
    if (_DAT_02dc9610 <= index) {
      return;
    }
  } while( true );
}
