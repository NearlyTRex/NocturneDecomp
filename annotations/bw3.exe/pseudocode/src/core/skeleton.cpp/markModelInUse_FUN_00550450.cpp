// Name: core_skeleton.cpp_markModelInUse_FUN_00550450
// Address: 00550450
// Address Range: [[00550450, 005504df]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_markModelInUse_FUN_00550450(char *model_filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_markModelInUse_FUN_00550450(char *model_filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *str2;
  
  iVar3 = 0;
  pcVar4 = g_DeformableModelPool[0].model_filename;
  do {
    iVar1 = _stricmp(pcVar4,model_filename);
    if (iVar1 == 0) {
      str2 = g_SkeletonPool[0].loaded_filename;
      pcVar4 = g_CHAR_ARRAY_02802f5c + iVar3 * 4;
      pcVar4[0] = '\x01';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      iVar1 = 0;
      do {
        iVar2 = _stricmp(g_DeformableModelPool[iVar3].model_name,str2);
        if (iVar2 == 0) {
          pcVar4 = g_CHAR_ARRAY_02cd28bc + iVar1 * 4;
          pcVar4[0] = '\x01';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          return;
        }
        iVar1 = iVar1 + 1;
        str2 = str2 + 0x1ec9c;
      } while (iVar1 < 0x28);
      return;
    }
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 0x3600;
  } while (iVar3 < 0x40);
  return;
}
