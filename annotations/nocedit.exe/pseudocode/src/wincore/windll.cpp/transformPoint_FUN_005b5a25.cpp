// Name: wincore_windll.cpp_transformPoint_FUN_005b5a25
// Address: 005b5a25
// Address Range: [[005b5a25, 005b5ced]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_transformPoint_FUN_005b5a25(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_transformPoint_FUN_005b5a25(SProjectedVertex *output,CVector3i *input)

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
           (int)(((longlong)(int)uVar3 * (longlong)g_Projection.half_width_fixed) /
                (longlong)(int)uVar5) + g_Projection.center_x_fixed;
      iVar2 = (int)(((longlong)(int)uVar4 * (longlong)g_Projection.neg_half_height_fixed) /
                   (longlong)(int)uVar5) + g_Projection.center_y_fixed;
      output->screen_y = iVar2;
      return iVar2;
    }
    output->screen_x = uVar6;
    return uVar6;
  }
  g_TempX = input->x - g_CameraOriginX;
  g_TempY = input->y - g_CameraOriginY;
  g_TempZ = input->z - g_CameraOriginZ;
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
    uVar5 = 0x80000001;
  }
  if (g_TempTransformedX < (int)-uVar4) {
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
  g_TempTransformedY = uVar3;
  g_TempTransformedZ = uVar4;
  if (uVar5 == 0) {
    output->transformed_x = g_TempTransformedX;
    output->transformed_y = uVar3;
    output->transformed_z = uVar4;
    output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar4);
    output->screen_x =
         (int)(((longlong)g_TempTransformedX * (longlong)g_Projection.half_width_fixed) /
              (longlong)(int)uVar4) + g_Projection.center_x_fixed;
    iVar2 = (int)(((longlong)g_TempTransformedY * (longlong)g_Projection.neg_half_height_fixed) /
                 (longlong)(int)uVar4) + g_Projection.center_y_fixed;
    output->screen_y = iVar2;
    return iVar2;
  }
  output->transformed_x = g_TempTransformedX;
  output->transformed_y = uVar3;
  output->transformed_z = uVar4;
  output->screen_x = uVar5;
  return uVar5;
}
