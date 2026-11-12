// Name: core_sound.cpp_CSound_findRandomSoundFile_FUN_005593d0
// Address: 005593d0
// Address Range: [[005593d0, 005594b8]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_005593d0(CSound *this_ptr,char *out_result,char *wildcard_pattern)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_005593d0(CSound *this_ptr,char *out_result,char *wildcard_pattern)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  _DAT_0264b460 = 0;
  *out_result = '\0';
  for (iVar2 = 0; iVar2 < g_CStrListInstance.item_count; iVar2 = iVar2 + 1) {
    iVar5 = 0;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(&g_CStrListInstance,iVar2);
    iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_00485840(wildcard_pattern,pcVar3,iVar5);
    if (iVar5 != 0) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(&g_CStrListInstance,iVar2);
      pcVar4 = (char *)(_DAT_0264b460 * 0x28 + 0x264b468);
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      _DAT_0264b460 = _DAT_0264b460 + 1;
      if (0x27 < _DAT_0264b460) break;
    }
  }
  if (_DAT_0264b460 < 1) {
    return;
  }
  iVar2 = rand();
  pcVar3 = (char *)((iVar2 % _DAT_0264b460) * 0x28 + 0x264b468);
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
