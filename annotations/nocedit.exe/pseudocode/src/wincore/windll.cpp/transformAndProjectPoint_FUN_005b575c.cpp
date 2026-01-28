// Name: wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
// Address: 005b575c
// Address Range: [[005b575c, 005b5a24]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex *output,CVector3i *input)

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
    iVar2 = input->x - g_RelativeX;
    iVar7 = input->y - g_RelativeY;
    iVar8 = input->z - g_RelativeZ;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1].x +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0].x +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2].x;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1].y +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0].y +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2].y;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_TransformMatrix.m[1].z +
            (longlong)iVar2 * (longlong)g_TransformMatrix.m[0].z +
            (longlong)iVar8 * (longlong)g_TransformMatrix.m[2].z;
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = 0;
    if ((int)uVar5 < (int)uVar3) {
      uVar6 = GAME_CLIP_RIGHT;
    }
    if ((int)uVar3 < (int)-uVar5) {
      uVar6 = uVar6 | GAME_CLIP_LEFT;
    }
    if ((int)uVar5 < (int)uVar4) {
      uVar6 = uVar6 | GAME_CLIP_BOTTOM;
    }
    if ((int)uVar4 < (int)-uVar5) {
      uVar6 = uVar6 | GAME_CLIP_TOP;
    }
    if ((int)uVar5 < 1) {
      uVar6 = uVar6 | GAME_CLIP_NEAR;
    }
    output->transformed_x = uVar3;
    output->transformed_y = uVar4;
    output->transformed_z = uVar5;
    if (uVar6 == 0) {
      output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar5);
      output->screen_x =
           (int)(((longlong)(int)uVar3 * (longlong)g_ViewportCenterXFixed) / (longlong)(int)uVar5) +
           g_ViewportRightFixed;
      output->screen_y =
           (int)(((longlong)(int)uVar4 * (longlong)g_ViewportCenterYFixed) / (longlong)(int)uVar5) +
           g_ViewportBottomFixed;
      return;
    }
    output->screen_x = uVar6;
    return;
  }
  g_TempX = input->x - g_RelativeX;
  g_TempY = input->y - g_RelativeY;
  g_TempZ = input->z - g_RelativeZ;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1].x +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0].x +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2].x;
  g_TempTransformedX = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1].y +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0].y +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2].y;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_TempY * (longlong)g_TransformMatrix.m[1].z +
          (longlong)g_TempX * (longlong)g_TransformMatrix.m[0].z +
          (longlong)g_TempZ * (longlong)g_TransformMatrix.m[2].z;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < g_TempTransformedX) {
    uVar5 = GAME_CLIP_RIGHT;
  }
  if (g_TempTransformedX < (int)-uVar4) {
    uVar5 = uVar5 | GAME_CLIP_LEFT;
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar5 = uVar5 | GAME_CLIP_BOTTOM;
  }
  if ((int)uVar3 < (int)-uVar4) {
    uVar5 = uVar5 | GAME_CLIP_TOP;
  }
  if ((int)uVar4 < 1) {
    uVar5 = uVar5 | GAME_CLIP_NEAR;
  }
  g_TempTransformedY = uVar3;
  g_TempTransformedZ = uVar4;
  if (uVar5 == 0) {
    output->transformed_x = g_TempTransformedX;
    output->transformed_y = uVar3;
    output->transformed_z = uVar4;
    output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar4);
    output->screen_x =
         (int)(((longlong)g_TempTransformedX * (longlong)g_ViewportCenterXFixed) /
              (longlong)(int)uVar4) + g_ViewportRightFixed;
    output->screen_y =
         (int)(((longlong)g_TempTransformedY * (longlong)g_ViewportCenterYFixed) /
              (longlong)(int)uVar4) + g_ViewportBottomFixed;
    return;
  }
  output->transformed_x = g_TempTransformedX;
  output->transformed_y = uVar3;
  output->transformed_z = uVar4;
  output->screen_x = uVar5;
  return;
}
