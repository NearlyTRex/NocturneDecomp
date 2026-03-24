// Name: core_path.cpp_getOrCreatePathMap_FUN_00548390
// Address: 00548390
// Address Range: [[00548390, 005484fa] [006107f0, 0061080c]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_00548390(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_00548390(CLocation *location)

{
  int iVar1;
  int iVar2;
  int iVar6;
  int iVar3;
  int iVar7;
  int iVar8;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_101c [1015];
  CVector3i local_34;
  CVector3f local_28;
  int local_1c;
  int local_18 [2];
  
  if ((g_PathMapCacheInitFlag & 1) == 0) {
    g_PathMapCacheInitFlag = g_PathMapCacheInitFlag | 1;
    __arrinit(g_PathMapCache,0xc,&g_CPathMapTypeInfo);
    _atexit(&g_PathMapCacheDestructorNode);
  }
  if (g_PathMapLRUCounters[0] < 0) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      *(int *)((int)g_PathMapLRUCounters + iVar7) = iVar6;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < 0xc);
  }
  iVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,&location->position,&local_34);
  iVar8 = 0;
  iVar6 = local_34.z;
  iVar7 = 0;
  do {
    if (((local_34.x ==
          *(int *)((int)&((CVector3i *)(g_PathMapCache[0].height_cache_tags + 100))->x + iVar8)) &&
        (local_34.y ==
         *(int *)((int)&((CVector3i *)(g_PathMapCache[0].height_cache_tags + 100))->y + iVar8))) &&
       (iVar5 = iVar6,
       local_34.z ==
       *(int *)((int)&((CVector3i *)(g_PathMapCache[0].height_cache_tags + 100))->z + iVar8)))
    break;
    iVar5 = iVar7;
    if (g_PathMapLRUCounters[iVar7] < *(int *)((int)g_PathMapLRUCounters + iVar4)) {
      iVar5 = iVar6;
    }
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 1;
    iVar8 = iVar8 + 0x138dc;
    iVar7 = iVar5;
  } while (iVar6 < 0xc);
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
