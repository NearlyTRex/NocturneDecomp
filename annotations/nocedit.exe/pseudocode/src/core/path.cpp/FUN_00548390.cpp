// Name: core_path.cpp_FUN_00548390
// Address: 00548390
// Address Range: [[00548390, 005484fa]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00548390()

#include "nocturne.h"

CPathMap * core_path_cpp_FUN_00548390(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  int iVar5;
  int unaff_EDI;
  byte bVar6;
  CVector3f *in_stack_00000004;
  float afStackY_1010 [1012];
  CVector3i *in_stack_ffffffd4;
  float local_28;
  CVector3f local_1c;
  
  bVar6 = 0;
  if ((DAT_030c3ab0 & 1) == 0) {
    DAT_030c3ab0 = DAT_030c3ab0 | 1;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_02fd9060,0xc,&g_CPathMapTypeInfo)
    ;
    crt_stdlib_c_atexit_FUN_005ff060(&DAT_00680bc8);
  }
  if (DAT_00680bd8 < 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      *(int *)((int)&DAT_00680bd8 + iVar2) = iVar1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < 0xc);
  }
  iVar4 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,in_stack_00000004,in_stack_ffffffd4);
  iVar2 = 0;
  local_1c.z = local_28;
  *(uint *)(&stack0xfffffff0 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar6 * -8);
  *(uint *)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((unaff_EBP == *(int *)((int)&DAT_02fd9060[0].cached_voxel_coords.x + iVar3)) &&
        (unaff_EDI == *(int *)((int)&DAT_02fd9060[0].cached_voxel_coords.y + iVar3))) &&
       (iVar5 = iVar2, unaff_ESI == *(int *)((int)&DAT_02fd9060[0].cached_voxel_coords.z + iVar3)))
    break;
    iVar5 = iVar1;
    if ((&DAT_00680bd8)[iVar1] < *(int *)((int)&DAT_00680bd8 + iVar4)) {
      iVar5 = iVar2;
    }
    iVar4 = iVar4 + 4;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x138dc;
    iVar1 = iVar5;
  } while (iVar2 < 0xc);
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_00680bd8 + iVar1) < (&DAT_00680bd8)[iVar5]) {
      *(int *)((int)&DAT_00680bd8 + iVar1) = *(int *)((int)&DAT_00680bd8 + iVar1) + 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x30);
  (&DAT_00680bd8)[iVar5] = 0;
  local_1c.x = in_stack_00000004->x;
  local_1c.y = in_stack_00000004->y;
  local_1c.z = in_stack_00000004->z;
  core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(DAT_02fd9060 + iVar5,&local_1c,1);
  return DAT_02fd9060 + iVar5;
}
