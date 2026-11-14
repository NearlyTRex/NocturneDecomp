// Name: core_sound.cpp_filterSoundFilesByPattern_FUN_00558cb0
// Address: 00558cb0
// Address Range: [[00558cb0, 00558d45]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_00558cb0(char *wildcard_pattern)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_00558cb0(char *wildcard_pattern)

{
  char cVar1;
  char *pcVar2;
  int index;
  char *pcVar3;
  int iVar4;
  
  index = 0;
  _DAT_0264b460 = 0;
  if (g_CStrListInstance.item_count < 1) {
    _DAT_0264b460 = 0;
    return;
  }
  do {
    iVar4 = 0;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(&g_CStrListInstance,index);
    iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_00485840(wildcard_pattern,pcVar2,iVar4);
    if (iVar4 != 0) {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(&g_CStrListInstance,index);
      pcVar3 = (char *)(_DAT_0264b460 * 0x28 + 0x264b468);
      do {
        cVar1 = *pcVar2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      _DAT_0264b460 = _DAT_0264b460 + 1;
      if (0x27 < _DAT_0264b460) {
        return;
      }
    }
    index = index + 1;
    if (g_CStrListInstance.item_count <= index) {
      return;
    }
  } while( true );
}
