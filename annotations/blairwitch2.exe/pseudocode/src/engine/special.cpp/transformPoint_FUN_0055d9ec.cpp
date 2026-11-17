// Name: engine_special.cpp_transformPoint_FUN_0055d9ec
// Address: 0055d9ec
// Address Range: [[0055d9ec, 0055dcb4]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_transformPoint_FUN_0055d9ec(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

void __cdecl engine_special_cpp_transformPoint_FUN_0055d9ec(SProjectedVertex *output,CVector3i *input)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (g_MMXSupported != 0) {
    iVar2 = input->x - g_CameraOriginX;
    iVar7 = input->y - g_CameraOriginY;
    iVar8 = input->z - g_CameraOriginZ;
    lVar1 = (longlong)iVar7 * (longlong)g_INT_01c38ba8 + (longlong)iVar2 * (longlong)g_INT_01c38b9c
            + (longlong)iVar8 * (longlong)g_INT_01c38bb4;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_INT_01c38bac + (longlong)iVar2 * (longlong)g_INT_01c38ba0
            + (longlong)iVar8 * (longlong)g_INT_01c38bb8;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_INT_01c38bb0 + (longlong)iVar2 * (longlong)g_INT_01c38ba4
            + (longlong)iVar8 * (longlong)g_INT_01c38bbc;
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = 0;
    if ((int)uVar5 < (int)uVar3) {
      uVar6 = 0x80000001;
    }
    if ((int)uVar3 < (int)-uVar5) {
      uVar6 = uVar6 | 0x80000002;
    }
    if ((int)uVar5 < (int)uVar4) {
      uVar6 = uVar6 | 0x80000004;
    }
    if ((int)uVar4 < (int)-uVar5) {
      uVar6 = uVar6 | 0x80000008;
    }
    if ((int)uVar5 < 1) {
      uVar6 = uVar6 | 0x80000010;
    }
    output->transformed_x = uVar3;
    output->transformed_y = uVar4;
    output->transformed_z = uVar5;
    if (uVar6 == 0) {
      output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar5);
      output->screen_x =
           (int)(((longlong)(int)uVar3 * (longlong)g_INT_01c35e38) / (longlong)(int)uVar5) +
           g_INT_01c35e40;
      output->screen_y =
           (int)(((longlong)(int)uVar4 * (longlong)g_INT_01c35e3c) / (longlong)(int)uVar5) +
           g_INT_01c35e44;
      return;
    }
    output->screen_x = uVar6;
    return;
  }
  g_INT_0061c7d8 = input->x - g_CameraOriginX;
  g_INT_0061c7dc = input->y - g_CameraOriginY;
  g_INT_0061c7e0 = input->z - g_CameraOriginZ;
  lVar1 = (longlong)g_INT_0061c7dc * (longlong)g_INT_01c38ba8 +
          (longlong)g_INT_0061c7d8 * (longlong)g_INT_01c38b9c +
          (longlong)g_INT_0061c7e0 * (longlong)g_INT_01c38bb4;
  g_INT_0061c7e8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_INT_0061c7dc * (longlong)g_INT_01c38bac +
          (longlong)g_INT_0061c7d8 * (longlong)g_INT_01c38ba0 +
          (longlong)g_INT_0061c7e0 * (longlong)g_INT_01c38bb8;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_INT_0061c7dc * (longlong)g_INT_01c38bb0 +
          (longlong)g_INT_0061c7d8 * (longlong)g_INT_01c38ba4 +
          (longlong)g_INT_0061c7e0 * (longlong)g_INT_01c38bbc;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < g_INT_0061c7e8) {
    uVar5 = 0x80000001;
  }
  if (g_INT_0061c7e8 < (int)-uVar4) {
    uVar5 = uVar5 | 0x80000002;
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar5 = uVar5 | 0x80000004;
  }
  if ((int)uVar3 < (int)-uVar4) {
    uVar5 = uVar5 | 0x80000008;
  }
  if ((int)uVar4 < 1) {
    uVar5 = uVar5 | 0x80000010;
  }
  g_INT_0061c7ec = uVar3;
  g_INT_0061c7f0 = uVar4;
  if (uVar5 == 0) {
    output->transformed_x = g_INT_0061c7e8;
    output->transformed_y = uVar3;
    output->transformed_z = uVar4;
    output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar4);
    output->screen_x =
         (int)(((longlong)g_INT_0061c7e8 * (longlong)g_INT_01c35e38) / (longlong)(int)uVar4) +
         g_INT_01c35e40;
    output->screen_y =
         (int)(((longlong)g_INT_0061c7ec * (longlong)g_INT_01c35e3c) / (longlong)(int)uVar4) +
         g_INT_01c35e44;
    return;
  }
  output->transformed_x = g_INT_0061c7e8;
  output->transformed_y = uVar3;
  output->transformed_z = uVar4;
  output->screen_x = uVar5;
  return;
}
