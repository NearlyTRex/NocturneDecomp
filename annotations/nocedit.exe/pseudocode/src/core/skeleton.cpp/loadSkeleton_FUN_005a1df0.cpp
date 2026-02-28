// Name: core_skeleton.cpp_loadSkeleton_FUN_005a1df0
// Address: 005a1df0
// Address Range: [[005a1df0, 005a1e9b]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_005a1df0(char *filename)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_005a1df0(char *filename)

{
  int iVar1;
  int iVar2;
  CSkeleton *this_ptr;
  char *str1;
  
  iVar2 = 0;
  if (0 < g_SkeletonPoolCount) {
    str1 = g_SkeletonPool[0].loaded_filename;
    do {
      iVar1 = _stricmp(str1,filename);
      if (iVar1 == 0) {
        return g_SkeletonPool + iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x2982c;
    } while (iVar2 < g_SkeletonPoolCount);
  }
  if (0x27 < g_SkeletonPoolCount) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x1093;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't load %s because skeleton manager is full.  (Size is %d)",filename,0x28);
  }
  this_ptr = g_SkeletonPool + g_SkeletonPoolCount;
  g_SkeletonPoolCount = g_SkeletonPoolCount + 1;
  core_skeleton_cpp_CSkeleton_load_FUN_00599b10(this_ptr,filename);
  return this_ptr;
}
