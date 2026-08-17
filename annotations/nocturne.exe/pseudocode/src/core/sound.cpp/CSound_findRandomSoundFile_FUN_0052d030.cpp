// Name: core_sound.cpp_CSound_findRandomSoundFile_FUN_0052d030
// Address: 0052d030
// Address Range: [[0052d030, 0052d118]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_0052d030(CSound *this_ptr,char *out_result,char *wildcard_pattern)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_0052d030(CSound *this_ptr,char *out_result,char *wildcard_pattern)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  _DAT_02dc9620 = 0;
  *out_result = '\0';
  for (iVar2 = 0; iVar2 < g_CStrList_02dc9610.item_count; iVar2 = iVar2 + 1) {
    iVar5 = 0;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&g_CStrList_02dc9610,iVar2);
    iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(wildcard_pattern,pcVar3,iVar5);
    if (iVar5 != 0) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(&g_CStrList_02dc9610,iVar2);
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
    *out_result = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    out_result[1] = cVar1;
    out_result = out_result + 2;
  } while (cVar1 != '\0');
  return;
}
