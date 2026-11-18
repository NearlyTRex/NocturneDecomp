// Name: engine_mini3d.cpp_setCameraMatrix_FUN_004eca10
// Address: 004eca10
// Address Range: [[004eca10, 004eceaa]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004eca10(CMatrix3x3f *rotation)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_setCameraMatrix_FUN_004eca10(CMatrix3x3f *rotation)

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
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045b9b0(rotation,&CStack_6c);
  puVar8 = g_PTR_01d76cfc;
  fVar3 = g_FLOAT_01d76ca8;
  fVar2 = g_FLOAT_01d76c58 - g_FLOAT_01d76c50;
  fVar1 = g_FLOAT_01d76c54 - g_FLOAT_01d76c4c;
  fStack_60 = CStack_6c.x;
  aiStack_5c[(uint)bVar9 * -2] = *(int *)((int)&CStack_6c + (uint)bVar9 * -8 + 4);
  aiStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(int *)((int)&CStack_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  g_INT_01d76c9c = (int)fStack_60;
  g_INT_01d76ca0 = aiStack_5c[1];
  g_FLOAT_01d76cac = g_FLOAT_01d76ca8;
  g_INT_01d76ca4 = aiStack_5c[0];
  *(float *)g_PTR_01d76cfc = rotation->m[0].x;
  *(float *)(puVar8 + 4) = rotation->m[0].y;
  *(float *)(puVar8 + 8) = rotation->m[0].z;
  *(float *)(puVar8 + 0xc) = rotation->m[1].x;
  fVar4 = g_FLOAT_01d76cac;
  fStack_14 = *(float *)(puVar8 + 0xc) * g_FLOAT_01d76cac;
  *(float *)(puVar8 + 0x10) = rotation->m[1].y;
  *(float *)(puVar8 + 0x14) = rotation->m[1].z;
  *(float *)(puVar8 + 0x18) = rotation->m[2].x;
  g_FLOAT_01d76cb4 = 1.0 / fVar4;
  fVar4 = *(float *)(puVar8 + 0x18) * g_FLOAT_01d76cac;
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
  g_FLOAT_01d76cb0 = fVar3;
  *(float *)(puVar8 + 4) = fVar1 * fVar3;
  g_FLOAT_01d76cb8 = 1.0 / fVar3;
  *(float *)(puVar8 + 0x10) = fVar2 * fVar3;
  fStack_18 = fVar2 * fVar3 * *(float *)(puVar8 + 0x20);
  *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar3;
  fStack_10 = *(float *)(puVar8 + 0x14) * *(float *)(puVar8 + 0x1c);
  fStack_3c = fStack_18 - fStack_10;
  *(float *)puVar8 = *(float *)puVar8 * g_FLOAT_01d76cac;
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
  g_FLOAT_01d76c6c = fStack_3c * fStack_20;
  g_FLOAT_01d76c70 = fStack_38 * fStack_20;
  g_FLOAT_01d76c74 = fStack_34 * fStack_20;
  g_FLOAT_01d76c78 = fStack_30 * fStack_20;
  g_FLOAT_01d76c7c = fStack_2c * fStack_20;
  g_FLOAT_01d76c80 = fStack_28 * fStack_20;
  g_FLOAT_01d76c84 = fStack_44 * fStack_20;
  g_FLOAT_01d76c88 = fStack_24 * fStack_20;
  g_FLOAT_01d76c8c = fStack_54 * fStack_20;
  fVar5 = *(float *)(puVar8 + 0x14) * 65536.0f;
  fVar6 = *(float *)(puVar8 + 0x18) * 65536.0f;
  g_INT_01d7977c = 1;
  dVar10 = round((double)(*(float *)puVar8 * 65536.0f));
  g_INT_01c6e2fc = (int)ROUND(dVar10);
  fVar7 = *(float *)(puVar8 + 0x1c) * 65536.0f;
  dVar10 = round((double)fVar2);
  g_INT_01c6e300 = (int)ROUND(dVar10);
  fVar2 = *(float *)(puVar8 + 0x20) * 65536.0f;
  dVar10 = round((double)fVar4);
  g_INT_01c6e304 = (int)ROUND(dVar10);
  fVar4 = g_FLOAT_01d76c6c * 65536.0f;
  dVar10 = round((double)fVar1);
  g_INT_01c6e308 = (int)ROUND(dVar10);
  fVar1 = g_FLOAT_01d76c70 * 65536.0f;
  dVar10 = round((double)fVar3);
  g_INT_01c6e30c = (int)ROUND(dVar10);
  fVar3 = g_FLOAT_01d76c74 * 65536.0f;
  dVar10 = round((double)fVar5);
  g_INT_01c6e310 = (int)ROUND(dVar10);
  fVar5 = g_FLOAT_01d76c78 * 65536.0f;
  dVar10 = round((double)fVar6);
  g_INT_01c6e314 = (int)ROUND(dVar10);
  fVar6 = g_FLOAT_01d76c7c * 65536.0f;
  dVar10 = round((double)fVar7);
  g_INT_01c6e318 = (int)ROUND(dVar10);
  fVar7 = g_FLOAT_01d76c80 * 65536.0f;
  dVar10 = round((double)fVar2);
  g_INT_01c6e31c = (int)ROUND(dVar10);
  fVar2 = g_FLOAT_01d76c84 * 65536.0f;
  dVar10 = round((double)fVar4);
  g_INT_01d72644 = (int)ROUND(dVar10);
  fVar4 = g_FLOAT_01d76c88 * 65536.0f;
  dVar10 = round((double)fVar1);
  g_INT_01d72648 = (int)ROUND(dVar10);
  fVar1 = g_FLOAT_01d76c8c * 65536.0f;
  dVar10 = round((double)fVar3);
  dVar11 = round((double)fVar5);
  dVar12 = round((double)fVar6);
  dVar13 = round((double)fVar7);
  dVar14 = round((double)fVar2);
  dVar15 = round((double)fVar4);
  dVar16 = round((double)fVar1);
  g_INT_01d7264c = (int)ROUND(dVar10);
  g_INT_01d72650 = (int)ROUND(dVar11);
  g_INT_01d72654 = (int)ROUND(dVar12);
  g_INT_01d72658 = (int)ROUND(dVar13);
  g_INT_01d7265c = (int)ROUND(dVar14);
  g_INT_01d72660 = (int)ROUND(dVar15);
  g_INT_01d72664 = (int)ROUND(dVar16);
  return;
}
