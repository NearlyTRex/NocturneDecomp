// Name: engine_matrix.c_buildRotationMatrix_FUN_0050c920
// Address: 0050c920
// Address Range: [[0050c920, 0050cc34]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_buildRotationMatrix_FUN_0050c920(int pitch,int yaw,int roll)

#include "nocturne.h"

void __cdecl engine_matrix_c_buildRotationMatrix_FUN_0050c920(int pitch,int yaw,int roll)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(pitch);
  iVar7 = engine_matrix_c_interpolatedCos_FUN_0050c600(pitch);
  iVar8 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(yaw);
  iVar9 = engine_matrix_c_interpolatedCos_FUN_0050c600(yaw);
  iVar10 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(roll);
  iVar11 = engine_matrix_c_interpolatedCos_FUN_0050c600(roll);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  lVar2 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  g_TransformMatrix.m[0].z =
       (uint)((longlong)iVar7 * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar10) >> 0x20) << 0x10;
  g_TransformMatrix.m[1].z = -iVar6;
  lVar3 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  lVar4 = (longlong)
          (int)((uint)((longlong)iVar9 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar9 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar11;
  g_TransformMatrix.m[2].z =
       (uint)((longlong)iVar7 * (longlong)iVar11) >> 0x10 |
       (int)((ulonglong)((longlong)iVar7 * (longlong)iVar11) >> 0x20) << 0x10;
  if (199 < (uint)g_WindowHeight) {
    if ((uint)g_WindowHeight < 0xc9) {
      g_PixelAspectCorrection = 0x15555;
      goto LAB_0050ca9c;
    }
    if (g_WindowHeight == 400) {
      g_PixelAspectCorrection = 0xaaaa;
      goto LAB_0050ca9c;
    }
  }
  g_PixelAspectCorrection = 0x10000;
LAB_0050ca9c:
  iVar6 = (g_WindowWidth *
           -(int)(((longlong)g_ViewportCenterYFixed * 0x10000) / (longlong)g_ViewportCenterXFixed) *
          3) / (g_WindowHeight << 2);
  lVar1 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar9 * (longlong)iVar11) >> 0x10 |
                (int)((ulonglong)((longlong)iVar9 * (longlong)iVar11) >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
  lVar5 = (longlong)iVar6 *
          (longlong)
          (int)((uint)((longlong)iVar7 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar8) >> 0x20) << 0x10);
  lVar3 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar9 * (longlong)-iVar10) >> 0x10 |
                (int)((ulonglong)((longlong)iVar9 * (longlong)-iVar10) >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
  iVar6 = ((((g_ClipRight - g_ClipLeft) * 0x280) / g_WindowWidth) * 0x30000) /
          (((g_ClipBottom - g_ClipTop) * 0x1e0) / g_WindowHeight);
  iVar12 = iVar6 >> 0x1f;
  iVar6 = (int)((iVar6 + iVar12 * -4) - (uint)(iVar12 << 1 < 0)) >> 2;
  g_TransformMatrix.m[0].x =
       (int)(((longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[0].y =
       (int)(((longlong)
              (int)(((uint)((longlong)iVar8 * (longlong)-iVar11) >> 0x10 |
                    (int)((ulonglong)((longlong)iVar8 * (longlong)-iVar11) >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10)) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[1].x =
       (int)(((longlong)(int)((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[1].y =
       (int)(((longlong)
              (int)((uint)((longlong)iVar7 * (longlong)iVar9) >> 0x10 |
                   (int)((ulonglong)((longlong)iVar7 * (longlong)iVar9) >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[2].x =
       (int)(((longlong)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[2].y =
       (int)(((longlong)
              (int)(((uint)((longlong)iVar10 * (longlong)iVar8) >> 0x10 |
                    (int)((ulonglong)((longlong)iVar10 * (longlong)iVar8) >> 0x20) << 0x10) +
                   ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  engine_matrix_c_invertTransformMatrix_FUN_0050c640();
  return;
}
