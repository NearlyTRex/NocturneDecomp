// Name: core_skeleton.cpp_loadSkeleton_FUN_00548fc0
// Address: 00548fc0
// Address Range: [[00548fc0, 00549086]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_00548fc0(char *filename)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_00548fc0(char *filename)

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
      pcVar4 = g_CHAR_ARRAY_02628554 + iVar3 * 4;
      pcVar4[0] = '\x01';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      return g_SkeletonPool + iVar3;
    }
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 0x1e01c;
  } while (iVar3 < 0x28);
  iVar2 = 0;
  iVar1 = 0;
  iVar3 = g_CHAR_ARRAY_02628554._0_4_;
  while( true ) {
    if (iVar3 == 0) {
      core_skeleton_cpp_CSkeleton_load_FUN_00540a10(g_SkeletonPool + iVar2,filename);
      pcVar4 = g_CHAR_ARRAY_02628554 + iVar1;
      pcVar4[0] = '\x01';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      return g_SkeletonPool + iVar2;
    }
    iVar2 = iVar2 + 1;
    if (0x9f < iVar1 + 4) break;
    iVar3 = *(int *)(g_CHAR_ARRAY_02628554 + iVar1 + 4);
    iVar1 = iVar1 + 4;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 4261;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Can't load %s because skeleton manager is full.  (Size is %d)");
  return (CSkeleton *)0x0;
}
