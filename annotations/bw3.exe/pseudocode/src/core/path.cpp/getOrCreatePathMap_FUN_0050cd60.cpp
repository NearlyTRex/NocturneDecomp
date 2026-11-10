// Name: core_path.cpp_getOrCreatePathMap_FUN_0050cd60
// Address: 0050cd60
// Address Range: [[0050cd60, 0050cec0]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_0050cd60(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_0050cd60(CLocation *location)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  int aiStackY_101c [1015];
  CPathMap *this_ptr;
  CVector3f *source_position;
  int local_34;
  CVector3f local_28;
  int local_1c;
  int local_18 [2];
  
  bVar7 = 0;
  if ((DAT_01ec1510 & 1) == 0) {
    DAT_01ec1510 = DAT_01ec1510 | 1;
    __arrinit(g_PathMapCache,0xc,&g_CPathMapTypeInfo);
    _atexit(&g_PathMapCacheDestructorNode);
  }
  if (DAT_00603634 < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)&DAT_00603634 + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  core_dtrace_cpp_FUN_00477ac0(&g_CDemonRaytraceInstance,location);
  iVar2 = 0;
  iVar3 = 0;
  local_1c = local_34;
  local_18[(uint)bVar7 * -2] = *(int *)(&stack0xffffffd0 + (uint)bVar7 * -8);
  local_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(int *)(&stack0xffffffd4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  iVar1 = 0;
  do {
    if (((local_1c ==
          *(int *)((int)&((CVector3i *)(g_PathMapCache[0].height_cache_tags + 100))->x + iVar3)) &&
        (local_18[0] ==
         *(int *)((int)&((CVector3i *)(g_PathMapCache[0].height_cache_tags + 100))->y + iVar3))) &&
       (iVar5 = iVar2,
       local_18[1] ==
       *(int *)((int)&((CVector3i *)(g_PathMapCache[0].height_cache_tags + 100))->z + iVar3)))
    break;
    iVar5 = iVar1;
    if ((&DAT_00603634)[iVar1] < *(int *)((int)&DAT_00603634 + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_00603634 + iVar1) < (&DAT_00603634)[iVar5]) {
      *(int *)((int)&DAT_00603634 + iVar1) = *(int *)((int)&DAT_00603634 + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  iVar1 = 1;
  source_position = &local_28;
  (&DAT_00603634)[iVar5] = 0;
  puVar6 = (uint *)((int)location + (uint)bVar7 * -8 + 4);
  local_28.x = (location->position).x;
  *(uint *)((int)&local_28 + (uint)bVar7 * -8 + 4) = *puVar6;
  this_ptr = g_PathMapCache + iVar5;
  *(uint *)((int)&local_28 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       puVar6[(uint)bVar7 * -2 + 1];
  core_path_cpp_CPathMap_updateIfNeeded_FUN_0050b1d0(this_ptr,source_position,iVar1);
  return g_PathMapCache + iVar5;
}
