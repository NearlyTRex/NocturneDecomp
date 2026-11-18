// Name: core_skeleton.cpp_loadSkeleton_FUN_0056b650
// Address: 0056b650
// Address Range: [[0056b650, 0056b731]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_0056b650(char *filename)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_0056b650(char *filename)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  pcVar4 = g_SkeletonPool[0].loaded_filename;
  do {
    iVar1 = _stricmp(pcVar4,filename);
    if (iVar1 == 0) {
      pcVar4 = g_CHAR_ARRAY_02c5fc1c + iVar3 * 4;
      pcVar4[0] = '\x01';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      return g_SkeletonPool + iVar3;
    }
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 0x1ec9c;
  } while (iVar3 < 0x28);
  iVar2 = 0;
  iVar1 = 0;
  iVar3 = g_CHAR_ARRAY_02c5fc1c._0_4_;
  while( true ) {
    if (iVar3 == 0) {
      core_skeleton_cpp_CSkeleton_load_FUN_00563000(g_SkeletonPool + iVar2,filename);
      pcVar4 = g_CHAR_ARRAY_02c5fc1c + iVar1;
      pcVar4[0] = '\x01';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      return g_SkeletonPool + iVar2;
    }
    iVar2 = iVar2 + 1;
    if (0x9f < iVar1 + 4) break;
    iVar3 = *(int *)(g_CHAR_ARRAY_02c5fc1c + iVar1 + 4);
    iVar1 = iVar1 + 4;
  }
  g_CHAR_PTR_01d1d400 = "..\\core\\skeleton.cpp";
  g_INT_01d1d404 = 0x10b5;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Can't load %s because skeleton manager is full.  (Size is %d)");
  return (CSkeleton *)0x0;
}
