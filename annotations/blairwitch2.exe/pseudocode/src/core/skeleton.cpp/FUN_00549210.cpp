// Name: core_skeleton.cpp_FUN_00549210
// Address: 00549210
// Address Range: [[00549210, 0054929f]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00549210(char *param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00549210(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  pcVar4 = &g_DeformableModelPool[0].field_0x2a70;
  do {
    iVar1 = _stricmp(pcVar4,param_1);
    if (iVar1 == 0) {
      pcVar4 = &g_SkeletonPool[0].field_0x1d1a8;
      *(uint *)(&DAT_02177ff4 + iVar3 * 4) = 1;
      iVar1 = 0;
      do {
        iVar2 = _stricmp
                          (&g_DeformableModelPool[iVar3].field_0x2a1c,pcVar4);
        if (iVar2 == 0) {
          *(uint *)(&DAT_02628554 + iVar1 * 4) = 1;
          return;
        }
        iVar1 = iVar1 + 1;
        pcVar4 = pcVar4 + 0x1e01c;
      } while (iVar1 < 0x28);
      return;
    }
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 0x2ac0;
  } while (iVar3 < 0x40);
  return;
}
