// Name: core_skeleton.cpp_loadSkeleton_FUN_00548fc0
// Address: 00548fc0
// Address Range: [[00548fc0, 00549086]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_00548fc0(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_00548fc0(char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *str1;
  
  iVar3 = 0;
  str1 = &g_SkeletonPool[0].field_0x1d1a8;
  do {
    iVar1 = _stricmp(str1,filename);
    if (iVar1 == 0) {
      *(uint *)(&DAT_02628554 + iVar3 * 4) = 1;
      return g_SkeletonPool + iVar3;
    }
    iVar3 = iVar3 + 1;
    str1 = str1 + 0x1e01c;
  } while (iVar3 < 0x28);
  iVar2 = 0;
  iVar1 = 0;
  iVar3 = _DAT_02628554;
  while( true ) {
    if (iVar3 == 0) {
      core_skeleton_cpp_CSkeleton_load_FUN_00540a10(g_SkeletonPool + iVar2,filename);
      *(uint *)(&DAT_02628554 + iVar1) = 1;
      return g_SkeletonPool + iVar2;
    }
    iVar2 = iVar2 + 1;
    if (0x9f < iVar1 + 4) break;
    iVar3 = *(int *)(iVar1 + 0x2628558);
    iVar1 = iVar1 + 4;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x10a5;
  core_main_c_FUN_004e4500("Can't load %s because skeleton manager is full.  (Size is %d)",filename,0x28);
  return (CSkeleton *)0x0;
}
