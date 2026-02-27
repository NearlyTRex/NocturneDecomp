// Name: core_path.cpp_getOrCreatePathMap_FUN_00548390
// Address: 00548390
// Address Range: [[00548390, 005484fa]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_00548390(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_00548390(CLocation *location)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_101c [1015];
  CVector3i local_34;
  CVector3f local_28;
  int local_1c;
  int local_18 [2];
  
  bVar6 = 0;
  if ((g_PathMapCacheInitFlag & 1) == 0) {
    g_PathMapCacheInitFlag = g_PathMapCacheInitFlag | 1;
    __arrinit(g_PathMapCache,0xc,&g_CPathMapTypeInfo);
    _atexit(&g_PathMapCacheDestructorNode);
  }
  if (g_PathMapLRUCounters[0] < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)g_PathMapLRUCounters + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,&location->position,&local_34);
  iVar2 = 0;
  local_1c = local_34.x;
  local_18[(uint)bVar6 * -2] = *(int *)((int)&local_34 + (uint)bVar6 * -8 + 4);
  local_18[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(int *)((int)&local_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((local_1c == *(int *)((int)&g_PathMapCache[0].cached_voxel_coords.x + iVar3)) &&
        (local_18[0] == *(int *)((int)&g_PathMapCache[0].cached_voxel_coords.y + iVar3))) &&
       (iVar5 = iVar2,
       local_18[1] == *(int *)((int)&g_PathMapCache[0].cached_voxel_coords.z + iVar3))) break;
    iVar5 = iVar1;
    if (g_PathMapLRUCounters[iVar1] < *(int *)((int)g_PathMapLRUCounters + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)g_PathMapLRUCounters + iVar1) < g_PathMapLRUCounters[iVar5]) {
      *(int *)((int)g_PathMapLRUCounters + iVar1) = *(int *)((int)g_PathMapLRUCounters + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  g_PathMapLRUCounters[iVar5] = 0;
  local_28.x = (location->position).x;
  local_28.y = (location->position).y;
  local_28.z = (location->position).z;
  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(g_PathMapCache + iVar5,&local_28,1);
  return g_PathMapCache + iVar5;
}
