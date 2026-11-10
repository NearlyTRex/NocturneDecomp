// Name: core_skeleton.cpp_loadSkeleton_FUN_005501e0
// Address: 005501e0
// Address Range: [[005501e0, 005502c1]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_loadSkeleton_FUN_005501e0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_loadSkeleton_FUN_005501e0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *str1;
  
  iVar3 = 0;
  str1 = &g_SkeletonPool[0].field_0x1de28;
  do {
    iVar1 = _stricmp(str1,param_1);
    if (iVar1 == 0) {
      *(uint *)(&DAT_02cd28bc + iVar3 * 4) = 1;
      return g_SkeletonPool + iVar3;
    }
    iVar3 = iVar3 + 1;
    str1 = str1 + 0x1ec9c;
  } while (iVar3 < 0x28);
  iVar2 = 0;
  iVar1 = 0;
  iVar3 = _DAT_02cd28bc;
  while( true ) {
    if (iVar3 == 0) {
      core_skeleton_cpp_CSkeleton_load_FUN_00547c20(g_SkeletonPool + iVar2,param_1);
      *(uint *)(&DAT_02cd28bc + iVar1) = 1;
      return g_SkeletonPool + iVar2;
    }
    iVar2 = iVar2 + 1;
    if (0x9f < iVar1 + 4) break;
    iVar3 = *(int *)(iVar1 + 0x2cd28c0);
    iVar1 = iVar1 + 4;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x10ac;
  core_main_c_FUN_004e4330("Can't load %s because skeleton manager is full.  (Size is %d)",param_1,0x28);
  return (CSkeleton *)0x0;
}
