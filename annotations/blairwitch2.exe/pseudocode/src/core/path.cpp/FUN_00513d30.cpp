// Name: core_path.cpp_FUN_00513d30
// Address: 00513d30
// Address Range: [[00513d30, 00513e90]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_FUN_00513d30(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_FUN_00513d30(CLocation *location)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_101c [1015];
  CPathMap *this_ptr;
  CVector3f *source_position;
  int local_34;
  CVector3f local_28;
  int local_1c;
  int local_18 [2];
  
  bVar6 = 0;
  if ((DAT_01e4fed0 & 1) == 0) {
    DAT_01e4fed0 = DAT_01e4fed0 | 1;
    __arrinit(g_PathMapCache,0xc,&g_CPathMapTypeInfo);
    _atexit(&g_PathMapCacheDestructorNode);
  }
  if (DAT_0061b2f8 < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)&DAT_0061b2f8 + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  core_dtrace_cpp_FUN_00476a50(&g_CDemonRaytraceInstance,location);
  iVar2 = 0;
  iVar3 = 0;
  local_1c = local_34;
  local_18[(uint)bVar6 * -2] = *(int *)(&stack0xffffffd0 + (uint)bVar6 * -8);
  local_18[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(int *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar1 = 0;
  do {
    if (((local_1c == *(int *)(&g_PathMapCache[0].field_0x138b0 + iVar3)) &&
        (local_18[0] == *(int *)(&g_PathMapCache[0].field_0x138b4 + iVar3))) &&
       (iVar5 = iVar2, local_18[1] == *(int *)(&g_PathMapCache[0].field_0x138b8 + iVar3))) break;
    iVar5 = iVar1;
    if ((&DAT_0061b2f8)[iVar1] < *(int *)((int)&DAT_0061b2f8 + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_0061b2f8 + iVar1) < (&DAT_0061b2f8)[iVar5]) {
      *(int *)((int)&DAT_0061b2f8 + iVar1) = *(int *)((int)&DAT_0061b2f8 + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  iVar1 = 1;
  source_position = &local_28;
  (&DAT_0061b2f8)[iVar5] = 0;
  local_28._0_4_ = *(uint *)location;
  *(uint *)((int)&local_28 + (uint)bVar6 * -8 + 4) =
       *(uint *)(location + (uint)bVar6 * -8 + 4);
  this_ptr = g_PathMapCache + iVar5;
  *(uint *)((int)&local_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)(location + (uint)bVar6 * -8 + 4 + (uint)bVar6 * -8 + 4);
  core_path_cpp_CPathMap_updateIfNeeded_FUN_005121a0(this_ptr,source_position,iVar1);
  return g_PathMapCache + iVar5;
}
