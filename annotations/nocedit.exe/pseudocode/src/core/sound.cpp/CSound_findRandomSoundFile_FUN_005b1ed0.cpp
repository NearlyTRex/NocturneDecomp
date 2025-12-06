// Name: core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0
// Address: 005b1ed0
// Address Range: [[005b1ed0, 005b1fc8]]
// Convention: __cdecl
// Signature: void core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0(CSound * this_ptr, char * out_result, char * wildcard_pattern)

#include "nocturne.h"

void __cdecl
core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0
          (CSound *this_ptr,char *out_result,char *wildcard_pattern)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CStrList *unaff_EBP;
  char *pcVar4;
  char *pcVar5;
  
  g_SoundMatchCount = 0;
  *out_result = '\0';
  for (iVar3 = 0; iVar3 < g_SoundFileList.item_count; iVar3 = iVar3 + 1) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,iVar3);
    iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                      (wildcard_pattern,pcVar4,(int)unaff_EBP);
    if (iVar2 != 0) {
      unaff_EBP = &g_SoundFileList;
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&g_SoundFileList,iVar3);
      pcVar5 = g_SoundMatchedFilenames[g_SoundMatchCount];
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      g_SoundMatchCount = g_SoundMatchCount + 1;
      if (0x27 < g_SoundMatchCount) break;
    }
  }
  if (g_SoundMatchCount < 1) {
    return;
  }
  iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
  pcVar4 = g_SoundMatchedFilenames[iVar3 % g_SoundMatchCount];
  do {
    cVar1 = *pcVar4;
    *wildcard_pattern = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    wildcard_pattern[1] = cVar1;
    wildcard_pattern = wildcard_pattern + 2;
  } while (cVar1 != '\0');
  return;
}
