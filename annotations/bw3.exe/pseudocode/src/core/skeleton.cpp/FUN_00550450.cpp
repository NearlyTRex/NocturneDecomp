// Name: core_skeleton.cpp_FUN_00550450
// Address: 00550450
// Address Range: [[00550450, 005504df]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00550450(char *param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00550450(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  pcVar4 = g_DeformableModelPool[0].model_filename;
  do {
    iVar1 = _stricmp(pcVar4,param_1);
    if (iVar1 == 0) {
      pcVar4 = g_SkeletonPool[0].loaded_filename;
      *(uint *)(&DAT_02802f5c + iVar3 * 4) = 1;
      iVar1 = 0;
      do {
        iVar2 = _stricmp(g_DeformableModelPool[iVar3].model_name,pcVar4);
        if (iVar2 == 0) {
          *(uint *)(&DAT_02cd28bc + iVar1 * 4) = 1;
          return;
        }
        iVar1 = iVar1 + 1;
        pcVar4 = pcVar4 + 0x1ec9c;
      } while (iVar1 < 0x28);
      return;
    }
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 0x3600;
  } while (iVar3 < 0x40);
  return;
}
