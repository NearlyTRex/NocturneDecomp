// Name: engine_mini3d.cpp_setCameraMatrix_FUN_004f24b0
// Address: 004f24b0
// Address Range: [[004f24b0, 004f294a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004f24b0(CMatrix3x3f *rotation)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004f24b0(CMatrix3x3f *rotation)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte *puVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int aiStackY_1054 [1017];
  CVector3f CStack_6c;
  float fStack_60;
  int aiStack_5c [2];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar9 = 0;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_004496e0(rotation,&CStack_6c);
  puVar8 = g_PTR_01d09918;
  fVar3 = g_FLOAT_01d098c8;
  fVar2 = g_FLOAT_01d09878 - g_FLOAT_01d09870;
  fVar1 = g_FLOAT_01d09874 - g_FLOAT_01d0986c;
  fStack_60 = CStack_6c.x;
  aiStack_5c[(uint)bVar9 * -2] = *(int *)((int)&CStack_6c + (uint)bVar9 * -8 + 4);
  aiStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(int *)((int)&CStack_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  g_INT_01d098bc = (int)fStack_60;
  g_INT_01d098c0 = aiStack_5c[1];
  g_FLOAT_01d098cc = g_FLOAT_01d098c8;
  g_INT_01d098c4 = aiStack_5c[0];
  *(float *)g_PTR_01d09918 = rotation->m[0].x;
  *(float *)(puVar8 + 4) = rotation->m[0].y;
  *(float *)(puVar8 + 8) = rotation->m[0].z;
  *(float *)(puVar8 + 0xc) = rotation->m[1].x;
  fVar4 = g_FLOAT_01d098cc;
  fStack_14 = *(float *)(puVar8 + 0xc) * g_FLOAT_01d098cc;
  *(float *)(puVar8 + 0x10) = rotation->m[1].y;
  *(float *)(puVar8 + 0x14) = rotation->m[1].z;
  *(float *)(puVar8 + 0x18) = rotation->m[2].x;
  g_FLOAT_01d098d4 = 1.0 / fVar4;
  fVar4 = *(float *)(puVar8 + 0x18) * g_FLOAT_01d098cc;
  *(float *)(puVar8 + 0x1c) = rotation->m[2].y;
  *(float *)(puVar8 + 0x20) = rotation->m[2].z;
  *(float *)(puVar8 + 0xc) = fStack_14;
  fStack_14 = fStack_14 * *(float *)(puVar8 + 0x20);
  *(float *)(puVar8 + 0x18) = fVar4;
  fStack_4c = *(float *)(puVar8 + 0x14) * *(float *)(puVar8 + 0x18);
  fVar3 = fVar3 * ((fVar1 + 1.0) / (fVar2 + 1.0));
  fVar1 = *(float *)(puVar8 + 4);
  fVar2 = *(float *)(puVar8 + 0x10);
  fStack_40 = fStack_14 - fStack_4c;
  g_FLOAT_01d098d0 = fVar3;
  *(float *)(puVar8 + 4) = fVar1 * fVar3;
  g_FLOAT_01d098d8 = 1.0 / fVar3;
  *(float *)(puVar8 + 0x10) = fVar2 * fVar3;
  fStack_18 = fVar2 * fVar3 * *(float *)(puVar8 + 0x20);
  *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar3;
  fStack_10 = *(float *)(puVar8 + 0x14) * *(float *)(puVar8 + 0x1c);
  fStack_3c = fStack_18 - fStack_10;
  *(float *)puVar8 = *(float *)puVar8 * g_FLOAT_01d098cc;
  fStack_50 = *(float *)(puVar8 + 0xc) * *(float *)(puVar8 + 0x1c);
  fStack_48 = *(float *)(puVar8 + 0x10) * *(float *)(puVar8 + 0x18);
  fStack_44 = fStack_50 - fStack_48;
  fVar2 = *(float *)(puVar8 + 4) * 65536.0f;
  fVar4 = *(float *)(puVar8 + 8) * 65536.0f;
  fStack_30 = -fStack_40;
  fStack_38 = -(*(float *)(puVar8 + 4) * *(float *)(puVar8 + 0x20) -
               *(float *)(puVar8 + 8) * *(float *)(puVar8 + 0x1c));
  fStack_20 = 1.0 / ((*(float *)puVar8 * fStack_3c - fVar1 * fVar3 * fStack_40) +
                    *(float *)(puVar8 + 8) * fStack_44);
  fStack_2c = *(float *)puVar8 * *(float *)(puVar8 + 0x20) -
              *(float *)(puVar8 + 8) * *(float *)(puVar8 + 0x18);
  fStack_24 = -(*(float *)puVar8 * *(float *)(puVar8 + 0x1c) -
               *(float *)(puVar8 + 4) * *(float *)(puVar8 + 0x18));
  fStack_34 = *(float *)(puVar8 + 4) * *(float *)(puVar8 + 0x14) -
              *(float *)(puVar8 + 8) * *(float *)(puVar8 + 0x10);
  fStack_28 = -(*(float *)puVar8 * *(float *)(puVar8 + 0x14) -
               *(float *)(puVar8 + 8) * *(float *)(puVar8 + 0xc));
  fStack_54 = *(float *)puVar8 * *(float *)(puVar8 + 0x10) -
              *(float *)(puVar8 + 4) * *(float *)(puVar8 + 0xc);
  fVar1 = *(float *)(puVar8 + 0xc) * 65536.0f;
  fVar3 = *(float *)(puVar8 + 0x10) * 65536.0f;
  g_FLOAT_01d0988c = fStack_3c * fStack_20;
  g_FLOAT_01d09890 = fStack_38 * fStack_20;
  g_FLOAT_01d09894 = fStack_34 * fStack_20;
  g_FLOAT_01d09898 = fStack_30 * fStack_20;
  g_FLOAT_01d0989c = fStack_2c * fStack_20;
  g_FLOAT_01d098a0 = fStack_28 * fStack_20;
  g_FLOAT_01d098a4 = fStack_44 * fStack_20;
  g_FLOAT_01d098a8 = fStack_24 * fStack_20;
  g_FLOAT_01d098ac = fStack_54 * fStack_20;
  fVar5 = *(float *)(puVar8 + 0x14) * 65536.0f;
  fVar6 = *(float *)(puVar8 + 0x18) * 65536.0f;
  g_INT_01d0c398 = 1;
  dVar10 = round((double)(*(float *)puVar8 * 65536.0f));
  g_INT_01c38b9c = (int)ROUND(dVar10);
  fVar7 = *(float *)(puVar8 + 0x1c) * 65536.0f;
  dVar10 = round((double)fVar2);
  g_INT_01c38ba0 = (int)ROUND(dVar10);
  fVar2 = *(float *)(puVar8 + 0x20) * 65536.0f;
  dVar10 = round((double)fVar4);
  g_INT_01c38ba4 = (int)ROUND(dVar10);
  fVar4 = g_FLOAT_01d0988c * 65536.0f;
  dVar10 = round((double)fVar1);
  g_INT_01c38ba8 = (int)ROUND(dVar10);
  fVar1 = g_FLOAT_01d09890 * 65536.0f;
  dVar10 = round((double)fVar3);
  g_INT_01c38bac = (int)ROUND(dVar10);
  fVar3 = g_FLOAT_01d09894 * 65536.0f;
  dVar10 = round((double)fVar5);
  g_INT_01c38bb0 = (int)ROUND(dVar10);
  fVar5 = g_FLOAT_01d09898 * 65536.0f;
  dVar10 = round((double)fVar6);
  g_INT_01c38bb4 = (int)ROUND(dVar10);
  fVar6 = g_FLOAT_01d0989c * 65536.0f;
  dVar10 = round((double)fVar7);
  g_INT_01c38bb8 = (int)ROUND(dVar10);
  fVar7 = g_FLOAT_01d098a0 * 65536.0f;
  dVar10 = round((double)fVar2);
  g_INT_01c38bbc = (int)ROUND(dVar10);
  fVar2 = g_FLOAT_01d098a4 * 65536.0f;
  dVar10 = round((double)fVar4);
  g_INT_01d04fb8 = (int)ROUND(dVar10);
  fVar4 = g_FLOAT_01d098a8 * 65536.0f;
  dVar10 = round((double)fVar1);
  g_INT_01d04fbc = (int)ROUND(dVar10);
  fVar1 = g_FLOAT_01d098ac * 65536.0f;
  dVar10 = round((double)fVar3);
  dVar11 = round((double)fVar5);
  dVar12 = round((double)fVar6);
  dVar13 = round((double)fVar7);
  dVar14 = round((double)fVar2);
  dVar15 = round((double)fVar4);
  dVar16 = round((double)fVar1);
  g_INT_01d04fc0 = (int)ROUND(dVar10);
  g_INT_01d04fc4 = (int)ROUND(dVar11);
  g_INT_01d04fc8 = (int)ROUND(dVar12);
  g_INT_01d04fcc = (int)ROUND(dVar13);
  g_INT_01d04fd0 = (int)ROUND(dVar14);
  g_INT_01d04fd4 = (int)ROUND(dVar15);
  g_INT_01d04fd8 = (int)ROUND(dVar16);
  return;
}
