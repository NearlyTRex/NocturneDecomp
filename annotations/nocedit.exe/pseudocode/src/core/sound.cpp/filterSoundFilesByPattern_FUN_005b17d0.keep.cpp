// Name: core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0
// Address: 005b17d0
// MANUAL RECONSTRUCTION
// Address Range: [[005b17d0, 005b1865]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_005b17d0(char *wildcard_pattern)

#include "nocturne.h"

void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_005b17d0(char *wildcard_pattern)

{
  char *pcVar2;
  int index;
  int iVar4;

  index = 0;
  g_SoundMatchCount = 0;
  if (g_SoundFileList.item_count < 1) {
    g_SoundMatchCount = 0;
    return;
  }
  do {
    iVar4 = 0;
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,index);
    iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(wildcard_pattern,pcVar2,iVar4);
    if (iVar4 != 0) {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,index);
      strcpy(g_SoundMatchedFilenames[g_SoundMatchCount],pcVar2);
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
