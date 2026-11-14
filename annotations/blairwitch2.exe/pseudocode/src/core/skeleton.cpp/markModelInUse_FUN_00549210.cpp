// Name: core_skeleton.cpp_markModelInUse_FUN_00549210
// Address: 00549210
// Address Range: [[00549210, 0054929f]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_markModelInUse_FUN_00549210(char *model_filename)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_markModelInUse_FUN_00549210(char *model_filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  pcVar4 = g_DeformableModelPool[0].model_filename;
  do {
    iVar1 = _stricmp(pcVar4,model_filename);
    if (iVar1 == 0) {
      pcVar4 = g_SkeletonPool[0].loaded_filename;
      *(uint *)(&DAT_02177ff4 + iVar3 * 4) = 1;
      iVar1 = 0;
      do {
        iVar2 = _stricmp(g_DeformableModelPool[iVar3].model_name,pcVar4);
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
