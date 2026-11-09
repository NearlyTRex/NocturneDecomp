// Name: core_skeleton.cpp_FUN_0056b8c0
// Address: 0056b8c0
// Address Range: [[0056b8c0, 0056b94f]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0056b8c0(char *param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0056b8c0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  pcVar4 = &g_DeformableModelPool[0].field_0x35b0;
  do {
    iVar1 = _stricmp(pcVar4,param_1);
    if (iVar1 == 0) {
      pcVar4 = &g_SkeletonPool[0].field_0x1de28;
      *(uint *)(&DAT_027902bc + iVar3 * 4) = 1;
      iVar1 = 0;
      do {
        iVar2 = _stricmp
                          (&g_DeformableModelPool[iVar3].field_0x355c,pcVar4);
        if (iVar2 == 0) {
          *(uint *)(&DAT_02c5fc1c + iVar1 * 4) = 1;
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
