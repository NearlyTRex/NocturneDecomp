// Name: core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0
// Address: 005b1ed0
// MANUAL RECONSTRUCTION
// Address Range: [[005b1ed0, 005b1fc8]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0(CSound *this_ptr,char *out_result,char *wildcard_pattern)

#include "nocturne.h"

void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0(CSound *this_ptr,char *out_result,char *wildcard_pattern)

{
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  g_SoundMatchCount = 0;
  *out_result = '\0';
  for (iVar2 = 0; iVar2 < g_SoundFileList.item_count; iVar2 = iVar2 + 1) {
    iVar5 = 0;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,iVar2);
    iVar5 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(wildcard_pattern,pcVar3,iVar5);
    if (iVar5 != 0) {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,iVar2);
      pcVar4 = g_SoundMatchedFilenames[g_SoundMatchCount];
      strcpy(pcVar4,pcVar3);
      g_SoundMatchCount = g_SoundMatchCount + 1;
      if (0x27 < g_SoundMatchCount) break;
    }
  }
  if (g_SoundMatchCount < 1) {
    return;
  }
  iVar2 = rand();
  pcVar3 = g_SoundMatchedFilenames[iVar2 % g_SoundMatchCount];
  strcpy(out_result,pcVar3);
  return;
}
