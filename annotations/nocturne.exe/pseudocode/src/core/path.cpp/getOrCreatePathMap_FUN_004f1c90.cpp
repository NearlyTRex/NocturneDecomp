// Name: core_path.cpp_getOrCreatePathMap_FUN_004f1c90
// Address: 004f1c90
// Address Range: [[004f1c90, 004f1dfa]]
// Convention: __cdecl
// Signature: CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_004f1c90(CLocation *location)

#include "nocturne.h"

CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_004f1c90(CLocation *location)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int aiStackY_101c [1015];
  int local_34;
  CVector3f local_28;
  int local_1c;
  int local_18 [2];
  
  bVar6 = 0;
  if ((DAT_01e312f0 & 1) == 0) {
    DAT_01e312f0 = DAT_01e312f0 | 1;
    __arrinit(&DAT_01d468a0,0xc,&g_CPathMapTypeInfo_005a1200);
    _atexit(&g_WatcomStaticDestructorNode_005be0a8);
  }
  if (DAT_005be0b8 < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)&DAT_005be0b8 + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(&DAT_01fba938,location);
  iVar2 = 0;
  local_1c = local_34;
  local_18[(uint)bVar6 * -2] = *(int *)(&stack0xffffffd0 + (uint)bVar6 * -8);
  local_18[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(int *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((local_1c == *(int *)(iVar3 + 0x1d5a150)) && (local_18[0] == *(int *)(iVar3 + 0x1d5a154)))
       && (iVar5 = iVar2, local_18[1] == *(int *)(iVar3 + 0x1d5a158))) break;
    iVar5 = iVar1;
    if ((&DAT_005be0b8)[iVar1] < *(int *)((int)&DAT_005be0b8 + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_005be0b8 + iVar1) < (&DAT_005be0b8)[iVar5]) {
      *(int *)((int)&DAT_005be0b8 + iVar1) = *(int *)((int)&DAT_005be0b8 + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  (&DAT_005be0b8)[iVar5] = 0;
  local_28.x = (location->position).x;
  local_28.y = (location->position).y;
  local_28.z = (location->position).z;
  core_path_cpp_CPathMap_updateIfNeeded_FUN_004f0360
            ((CPathMap *)(&DAT_01d468a0 + iVar5 * 0x138dc),&local_28,1);
  return (CPathMap *)(&DAT_01d468a0 + iVar5 * 0x138dc);
}
