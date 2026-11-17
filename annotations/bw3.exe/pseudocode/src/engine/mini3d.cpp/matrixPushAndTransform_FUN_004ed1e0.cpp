// Name: engine_mini3d.cpp_matrixPushAndTransform_FUN_004ed1e0
// Address: 004ed1e0
// Address Range: [[004ed1e0, 004ed510]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushAndTransform_FUN_004ed1e0(CVector3f *angles,CVector3f *position)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_matrixPushAndTransform_FUN_004ed1e0(CVector3f *angles,CVector3f *position)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  byte *puVar17;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float afStack_50 [3];
  float afStack_44 [2];
  float afStack_3c [11];
  
  g_PTR_01d76d00 = g_PTR_01d76d00 + 1;
  if (9 < (int)g_PTR_01d76d00) {
    g_CHAR_PTR_01d71de0 = "..\\engine\\mini3d.cpp";
    g_INT_01d71de4 = 0x3df;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Matrix unbalance");
  }
  puVar17 = g_PTR_01d76d00;
  iVar15 = (int)g_PTR_01d76d00 * 0x3c;
  iVar16 = (int)g_PTR_01d76d00 * 0xf;
  core_dirmat_cpp_sinCos_FUN_0045bef0(&fStack_5c,afStack_44,&angles->x);
  core_dirmat_cpp_sinCos_FUN_0045bef0(afStack_50,&fStack_58,&angles->z);
  core_dirmat_cpp_sinCos_FUN_0045bef0(&fStack_54,afStack_3c,&angles->y);
  fVar6 = fStack_54 * afStack_44[0];
  fVar7 = afStack_50[0] * afStack_44[0];
  fVar8 = fStack_58 * afStack_44[0];
  fVar9 = *(float *)(g_PTR_01d76cfc + 0x24) - position->x;
  fVar10 = *(float *)(g_PTR_01d76cfc + 0x28) - position->y;
  fVar5 = afStack_3c[0] * fStack_58 + fStack_54 * fStack_5c * afStack_50[0];
  fVar11 = *(float *)(g_PTR_01d76cfc + 0x2c) - position->z;
  fVar4 = -afStack_3c[0] * afStack_50[0] + fStack_54 * fStack_5c * fStack_58;
  afStack_44[0] = afStack_3c[0] * afStack_44[0];
  fVar14 = -fStack_5c;
  fVar13 = -fStack_54 * fStack_58 + afStack_3c[0] * fStack_5c * afStack_50[0];
  fVar12 = afStack_50[0] * fStack_54 + afStack_3c[0] * fStack_5c * fStack_58;
  *(float *)(iVar15 + 0x1d76d30) = fVar11 * afStack_44[0] + fVar10 * fVar14 + fVar9 * fVar6;
  *(float *)(iVar15 + 0x1d76d28) = fVar11 * fVar13 + fVar10 * fVar7 + fVar9 * fVar5;
  *(float *)(iVar15 + 0x1d76d2c) = fVar10 * fVar8 + fVar9 * fVar4 + fVar11 * fVar12;
  *(float *)(iVar15 + 0x1d76d34) =
       *(float *)(g_PTR_01d76cfc + 0x38) * fVar13 +
       *(float *)(g_PTR_01d76cfc + 0x34) * fVar7 + *(float *)(g_PTR_01d76cfc + 0x30) * fVar5;
  *(float *)(iVar15 + 0x1d76d38) =
       *(float *)(g_PTR_01d76cfc + 0x38) * fVar12 +
       *(float *)(g_PTR_01d76cfc + 0x34) * fVar8 + *(float *)(g_PTR_01d76cfc + 0x30) * fVar4;
  *(float *)(iVar15 + 0x1d76d3c) =
       *(float *)(g_PTR_01d76cfc + 0x38) * afStack_44[0] +
       *(float *)(g_PTR_01d76cfc + 0x34) * fVar14 + *(float *)(g_PTR_01d76cfc + 0x30) * fVar6;
  (&g_FLOAT_01d76d04)[iVar16] =
       fVar13 * *(float *)(g_PTR_01d76cfc + 0x18) +
       fVar5 * *(float *)g_PTR_01d76cfc + fVar7 * *(float *)(g_PTR_01d76cfc + 0xc);
  (&g_FLOAT_01d76d08)[(int)puVar17 * 0xf] =
       fVar13 * *(float *)(g_PTR_01d76cfc + 0x1c) +
       fVar7 * *(float *)(g_PTR_01d76cfc + 0x10) + fVar5 * *(float *)(g_PTR_01d76cfc + 4);
  (&g_FLOAT_01d76d0c)[(int)puVar17 * 0xf] =
       fVar13 * *(float *)(g_PTR_01d76cfc + 0x20) +
       fVar7 * *(float *)(g_PTR_01d76cfc + 0x14) + fVar5 * *(float *)(g_PTR_01d76cfc + 8);
  (&g_FLOAT_01d76d10)[(int)puVar17 * 0xf] =
       fVar12 * *(float *)(g_PTR_01d76cfc + 0x18) +
       fVar4 * *(float *)g_PTR_01d76cfc + fVar8 * *(float *)(g_PTR_01d76cfc + 0xc);
  (&g_FLOAT_01d76d14)[(int)puVar17 * 0xf] =
       fVar12 * *(float *)(g_PTR_01d76cfc + 0x1c) +
       fVar8 * *(float *)(g_PTR_01d76cfc + 0x10) + fVar4 * *(float *)(g_PTR_01d76cfc + 4);
  (&g_FLOAT_01d76d18)[(int)puVar17 * 0xf] =
       fVar12 * *(float *)(g_PTR_01d76cfc + 0x20) +
       fVar8 * *(float *)(g_PTR_01d76cfc + 0x14) + fVar4 * *(float *)(g_PTR_01d76cfc + 8);
  (&g_FLOAT_01d76d1c)[(int)puVar17 * 0xf] =
       afStack_44[0] * *(float *)(g_PTR_01d76cfc + 0x18) +
       fVar6 * *(float *)g_PTR_01d76cfc + fVar14 * *(float *)(g_PTR_01d76cfc + 0xc);
  (&g_FLOAT_01d76d20)[(int)puVar17 * 0xf] =
       afStack_44[0] * *(float *)(g_PTR_01d76cfc + 0x1c) +
       fVar14 * *(float *)(g_PTR_01d76cfc + 0x10) + fVar6 * *(float *)(g_PTR_01d76cfc + 4);
  pfVar1 = (float *)(g_PTR_01d76cfc + 8);
  pfVar2 = (float *)(g_PTR_01d76cfc + 0x14);
  pfVar3 = (float *)(g_PTR_01d76cfc + 0x20);
  g_INT_01d7977c = 1;
  g_PTR_01d76cfc = (byte *)(&g_FLOAT_01d76d04 + iVar16);
  (&g_FLOAT_01d76d24)[(int)puVar17 * 0xf] =
       afStack_44[0] * *pfVar3 + fVar14 * *pfVar2 + fVar6 * *pfVar1;
  return;
}
