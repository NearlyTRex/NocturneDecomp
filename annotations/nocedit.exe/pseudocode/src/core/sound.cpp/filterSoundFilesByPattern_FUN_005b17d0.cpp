// Name: core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0
// Address: 005b17d0
// Address Range: [[005b17d0, 005b1865]]
// Convention: __cdecl
// Signature: void core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0(char * wildcard_pattern)

#include "nocturne.h"

void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_005b17d0(char *wildcard_pattern)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int index;
  CStrList *unaff_EBP;
  char *pcVar4;
  
  index = 0;
  g_SoundMatchCount = 0;
  if (g_SoundFileList.item_count < 1) {
    g_SoundMatchCount = 0;
    return;
  }
  do {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,index);
    iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                      (wildcard_pattern,pcVar2,(int)unaff_EBP);
    if (iVar3 != 0) {
      unaff_EBP = &g_SoundFileList;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,index);
      pcVar4 = g_SoundMatchedFilenames[g_SoundMatchCount];
      do {
        cVar1 = *pcVar2;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      g_SoundMatchCount = g_SoundMatchCount + 1;
      if (0x27 < g_SoundMatchCount) {
        return;
      }
    }
    index = index + 1;
    if (g_SoundFileList.item_count <= index) {
      return;
    }
  } while( true );
}
