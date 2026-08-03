// Name: core_actor.cpp_draw3DPointMarker_FUN_0040ab70
// Address: 0040ab70
// Address Range: [[0040ab70, 0040adc1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DPointMarker_FUN_0040ab70(CVector3f *world_position,int marker_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_draw3DPointMarker_FUN_0040ab70(CVector3f *world_position,int marker_color)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CVector3i local_14;
  
  local_14.x = (int)ROUND(world_position->x * _DAT_005992b0);
  local_14.y = (int)ROUND(world_position->y * _DAT_005992b0);
  local_14.z = (int)ROUND(world_position->z * _DAT_005992b0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*(int *)PTR_DAT_005ae700 + 0xea5d0),&local_14);
  iVar3 = *(int *)PTR_DAT_005ae700;
  if ((*(byte *)(iVar3 + 0xea5e3) & 0x80) == 0) {
    iVar4 = *(int *)(iVar3 + 0xea5e0) >> 0x10;
    _DAT_01c00c70 = marker_color;
    iVar3 = *(int *)(iVar3 + 0xea5e4) >> 0x10;
    if ((((-1 < iVar4) && (-1 < iVar3)) && (iVar4 < DAT_005b761c)) && (iVar3 < DAT_005b7620)) {
      engine_2d_c_plotPixel_FUN_00401530(iVar4,iVar3);
    }
    iVar1 = iVar4 + -1;
    iVar2 = iVar3 + -1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar1 = iVar4 + -1;
    iVar2 = iVar3 + 1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar1 = iVar4 + 1;
    iVar2 = iVar3 + -1;
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005b761c)) && (iVar2 < DAT_005b7620)) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar1 = iVar4 + 1;
    iVar2 = iVar3 + 1;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar1 = iVar4 + -2;
    iVar2 = iVar3 + -2;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar1 = iVar4 + -2;
    iVar2 = iVar3 + 2;
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005b761c)) && (iVar2 < DAT_005b7620)) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar1 = iVar4 + 2;
    iVar2 = iVar3 + -2;
    if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    iVar4 = iVar4 + 2;
    iVar3 = iVar3 + 2;
    if (((-1 < iVar4) && (-1 < iVar3)) && ((iVar4 < DAT_005b761c && (iVar3 < DAT_005b7620)))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar4,iVar3);
      return;
    }
  }
  return;
}
