// Name: core_path.cpp_getOrCreatePathMap_FUN_00548390
// Address: 00548390
// MANUAL RECONSTRUCTION
// Address Range: [[00548390, 005484fa] [006107f0, 0061080c]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_00548390(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_00548390(CLocation *location)

{
  int iVar1;
  int iVar6;
  int iVar7;
  int iVar5;
  CVector3i local_34;
  CVector3f local_28;
  
  if ((g_PathMapCacheInitFlag & 1) == 0) {
    g_PathMapCacheInitFlag = g_PathMapCacheInitFlag | 1;
    __arrinit(g_PathMapCache,0xc,&g_CPathMapTypeInfo);
    _atexit(&g_PathMapCacheDestructorNode);
  }
  if (g_PathMapLRUCounters[0] < 0) {
    for (iVar6 = 0; iVar6 < 0xc; iVar6 = iVar6 + 1) {
      g_PathMapLRUCounters[iVar6] = iVar6;
    }
  }
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,&location->position,&local_34);
  iVar6 = 0;
  iVar7 = 0;
  do {
    if (((local_34.x == g_PathMapCache[iVar6].cached_voxel_coords.x) &&
        (local_34.y == g_PathMapCache[iVar6].cached_voxel_coords.y)) &&
       (iVar5 = iVar6, local_34.z == g_PathMapCache[iVar6].cached_voxel_coords.z))
    break;
    iVar5 = iVar7;
    if (g_PathMapLRUCounters[iVar7] < g_PathMapLRUCounters[iVar6]) {
      iVar5 = iVar6;
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar5;
  } while (iVar6 < 0xc);
  iVar1 = 0;
  do {
    if (g_PathMapLRUCounters[iVar1] < g_PathMapLRUCounters[iVar5]) {
      g_PathMapLRUCounters[iVar1] = g_PathMapLRUCounters[iVar1] + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  g_PathMapLRUCounters[iVar5] = 0;
  local_28 = location->position;
  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(g_PathMapCache + iVar5,&local_28,1);
  return g_PathMapCache + iVar5;
}
