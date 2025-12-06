// Name: engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
// Address: 0050cee0
// Address Range: [[0050cee0, 0050d61f]]
// Convention: __cdecl
// Signature: void engine_matrix.c_matrixPushAndTransform_FUN_0050cee0(ushort rotX, ushort rotY, ushort rotZ, int translateX, int translateY, int translateZ)

#include "nocturne.h"

void __cdecl
engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
          (ushort rotX,ushort rotY,ushort rotZ,int translateX,int translateY,int translateZ)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int unaff_EBX;
  int unaff_EDI;
  ushort in_stack_00000006;
  ushort in_stack_0000000a;
  ushort in_stack_0000000e;
  int local_24;
  int local_1c;
  int local_18;
  
  iVar3 = g_MatrixStackIndex;
  g_MatrixStack_RelX[g_MatrixStackIndex] = g_RelativeX;
  g_MatrixStack_RelY[iVar3] = g_RelativeY;
  g_MatrixStack_RelZ[iVar3] = g_RelativeZ;
  g_MatrixStack_Unk1[iVar3] = g_LightDirectionX;
  g_MatrixStack_Unk2[iVar3] = g_LightDirectionY;
  g_MatrixStack_Unk3[iVar3] = g_LightDirectionZ;
  g_MatrixStack_M00[iVar3] = g_TransformMatrix.m[0].x;
  g_MatrixStack_M01[iVar3] = g_TransformMatrix.m[0].y;
  g_MatrixStack_M02[iVar3] = g_TransformMatrix.m[0].z;
  g_MatrixStack_M10[iVar3] = g_TransformMatrix.m[1].x;
  g_MatrixStack_M11[iVar3] = g_TransformMatrix.m[1].y;
  g_MatrixStack_M12[iVar3] = g_TransformMatrix.m[1].z;
  g_MatrixStack_M20[iVar3] = g_TransformMatrix.m[2].x;
  g_MatrixStack_M21[iVar3] = g_TransformMatrix.m[2].y;
  g_MatrixStack_M22[iVar3] = g_TransformMatrix.m[2].z;
  g_SavedRotationY = _rotY;
  g_SavedRotationZ = _rotZ;
  g_SavedRotationX = _rotX;
  iVar3 = g_RelativeX - translateX;
  iVar4 = g_RelativeY - translateY;
  iVar2 = g_RelativeZ - translateZ;
  if ((_rotX != 0 || _rotY != 0) || _rotZ != 0) {
    iVar2 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(rotX);
    engine_matrix_c_interpolatedCos_FUN_0050c600(rotX);
    iVar3 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(rotY);
    iVar4 = engine_matrix_c_interpolatedCos_FUN_0050c600(rotY);
    engine_matrix_c_interpolatedSin_FUN_0050c5c0(rotZ);
    iVar5 = engine_matrix_c_interpolatedCos_FUN_0050c600(rotZ);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
            (longlong)unaff_EBX;
    iVar11 = ((uint)((longlong)iVar4 * (longlong)iVar5) >> 0x10 |
             (int)((ulonglong)((longlong)iVar4 * (longlong)iVar5) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
            (longlong)unaff_EBX;
    iVar12 = ((uint)((longlong)iVar3 * (longlong)-iVar5) >> 0x10 |
             (int)((ulonglong)((longlong)iVar3 * (longlong)-iVar5) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar6 = (uint)((longlong)local_1c * (longlong)unaff_EBX) >> 0x10 |
            (int)((ulonglong)((longlong)local_1c * (longlong)unaff_EBX) >> 0x20) << 0x10;
    uVar7 = (uint)((longlong)local_1c * (longlong)iVar3) >> 0x10 |
            (int)((ulonglong)((longlong)local_1c * (longlong)iVar3) >> 0x20) << 0x10;
    uVar8 = (uint)((longlong)local_1c * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)local_1c * (longlong)iVar4) >> 0x20) << 0x10;
    iVar9 = -unaff_EDI;
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar3 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
            (longlong)iVar5;
    iVar13 = ((uint)((longlong)iVar4 * (longlong)-unaff_EBX) >> 0x10 |
             (int)((ulonglong)((longlong)iVar4 * (longlong)-unaff_EBX) >> 0x20) << 0x10) +
             ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)
            (int)((uint)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar4 * (longlong)unaff_EDI) >> 0x20) << 0x10) *
            (longlong)iVar5;
    iVar4 = ((uint)((longlong)unaff_EBX * (longlong)iVar3) >> 0x10 |
            (int)((ulonglong)((longlong)unaff_EBX * (longlong)iVar3) >> 0x20) << 0x10) +
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    uVar10 = (uint)((longlong)local_1c * (longlong)iVar5) >> 0x10 |
             (int)((ulonglong)((longlong)local_1c * (longlong)iVar5) >> 0x20) << 0x10;
    g_LightDirectionX =
         ((uint)((longlong)iVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar11 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar7 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar13 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar13 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
              0x20) << 0x10);
    g_LightDirectionY =
         ((uint)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar12 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar8 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar4 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar4 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >>
              0x20) << 0x10);
    g_LightDirectionZ =
         ((uint)((longlong)(int)uVar6 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar6 * (longlong)g_MatrixStack_Unk1[g_MatrixStackIndex])
              >> 0x20) << 0x10) +
         ((uint)((longlong)iVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)iVar9 * (longlong)g_MatrixStack_Unk2[g_MatrixStackIndex]) >>
              0x20) << 0x10) +
         ((uint)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex]) >> 0x10 |
         (int)((ulonglong)((longlong)(int)uVar10 * (longlong)g_MatrixStack_Unk3[g_MatrixStackIndex])
              >> 0x20) << 0x10);
    g_TransformMatrix.m[0].x =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar11) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar7)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar13) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0].y =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar11) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar7)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar13) >>
              0x20) << 0x10);
    g_TransformMatrix.m[0].z =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar11) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar7)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar13) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1].x =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)iVar12) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)(int)uVar8)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)iVar4) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1].y =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)iVar12) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)(int)uVar8)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)iVar4) >>
              0x20) << 0x10);
    g_TransformMatrix.m[1].z =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)iVar12) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)(int)uVar8)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar4) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)iVar4) >>
              0x20) << 0x10);
    g_TransformMatrix.m[2].x =
         ((uint)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M00[g_MatrixStackIndex] * (longlong)(int)uVar6)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M10[g_MatrixStackIndex] * (longlong)iVar9) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M20[g_MatrixStackIndex] * (longlong)(int)uVar10)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2].y =
         ((uint)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M01[g_MatrixStackIndex] * (longlong)(int)uVar6)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M11[g_MatrixStackIndex] * (longlong)iVar9) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M21[g_MatrixStackIndex] * (longlong)(int)uVar10)
              >> 0x20) << 0x10);
    g_TransformMatrix.m[2].z =
         ((uint)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar6) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M02[g_MatrixStackIndex] * (longlong)(int)uVar6)
              >> 0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar9) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M12[g_MatrixStackIndex] * (longlong)iVar9) >>
              0x20) << 0x10) +
         ((uint)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar10) >> 0x10 |
         (int)((ulonglong)((longlong)g_MatrixStack_M22[g_MatrixStackIndex] * (longlong)(int)uVar10)
              >> 0x20) << 0x10);
    iVar3 = ((uint)((longlong)iVar11 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar11 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar7 * (longlong)local_24) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar7 * (longlong)local_24) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar13 * (longlong)local_18) >> 0x10 |
            (int)((ulonglong)((longlong)iVar13 * (longlong)local_18) >> 0x20) << 0x10);
    iVar4 = ((uint)((longlong)iVar12 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)iVar12 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar8 * (longlong)local_24) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar8 * (longlong)local_24) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar4 * (longlong)local_18) >> 0x10 |
            (int)((ulonglong)((longlong)iVar4 * (longlong)local_18) >> 0x20) << 0x10);
    iVar2 = ((uint)((longlong)(int)uVar6 * (longlong)iVar2) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar6 * (longlong)iVar2) >> 0x20) << 0x10) +
            ((uint)((longlong)iVar9 * (longlong)local_24) >> 0x10 |
            (int)((ulonglong)((longlong)iVar9 * (longlong)local_24) >> 0x20) << 0x10) +
            ((uint)((longlong)(int)uVar10 * (longlong)local_18) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar10 * (longlong)local_18) >> 0x20) << 0x10);
  }
  g_RelativeZ = iVar2;
  g_RelativeY = iVar4;
  g_RelativeX = iVar3;
  g_MatrixStackIndex = g_MatrixStackIndex + 1;
  if (9 < g_MatrixStackIndex) {
    g_CurrentFilename = "..\\engine\\matrix.c";
    g_CurrentLineNumber = 799;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Matrix unbalance");
    return;
  }
  return;
}
