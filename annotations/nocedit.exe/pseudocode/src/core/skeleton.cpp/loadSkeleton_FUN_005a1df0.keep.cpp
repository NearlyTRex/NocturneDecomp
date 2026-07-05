// Name: core_skeleton.cpp_loadSkeleton_FUN_005a1df0
// Address: 005a1df0
// MANUAL RECONSTRUCTION
// Address Range: [[005a1df0, 005a1e9b]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_005a1df0(char *filename)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_loadSkeleton_FUN_005a1df0(char *filename)

{
  int iVar2;
  CSkeleton *this_ptr;

  for (iVar2 = 0; iVar2 < g_SkeletonPoolCount; iVar2 = iVar2 + 1) {
    if (_stricmp(g_SkeletonPool[iVar2].loaded_filename,filename) == 0) {
      return g_SkeletonPool + iVar2;
    }
  }
  if (0x27 < g_SkeletonPoolCount) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 4243;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't load %s because skeleton manager is full.  (Size is %d)",filename,0x28);
  }
  this_ptr = g_SkeletonPool + g_SkeletonPoolCount;
  g_SkeletonPoolCount = g_SkeletonPoolCount + 1;
  core_skeleton_cpp_CSkeleton_load_FUN_00599b10(this_ptr,filename);
  return this_ptr;
}
