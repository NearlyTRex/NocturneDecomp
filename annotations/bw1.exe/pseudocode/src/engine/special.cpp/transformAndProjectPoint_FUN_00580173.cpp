// Name: engine_special.cpp_transformAndProjectPoint_FUN_00580173
// Address: 00580173
// Address Range: [[00580173, 0058043b]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

void __cdecl engine_special_cpp_transformAndProjectPoint_FUN_00580173(SProjectedVertex *output,CVector3i *input)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (g_INT_01c51d00 != 0) {
    iVar2 = input->x - g_INT_01c51d2c;
    iVar7 = input->y - g_INT_01c51d30;
    iVar8 = input->z - g_INT_01c51d34;
    lVar1 = (longlong)iVar7 * (longlong)g_INT_01c51d68 + (longlong)iVar2 * (longlong)g_INT_01c51d5c
            + (longlong)iVar8 * (longlong)g_INT_01c51d74;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_INT_01c51d6c + (longlong)iVar2 * (longlong)g_INT_01c51d60
            + (longlong)iVar8 * (longlong)g_INT_01c51d78;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)g_INT_01c51d70 + (longlong)iVar2 * (longlong)g_INT_01c51d64
            + (longlong)iVar8 * (longlong)g_INT_01c51d7c;
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
           (int)(((longlong)(int)uVar3 * (longlong)g_INT_01c4eff8) / (longlong)(int)uVar5) +
           g_INT_01c4f000;
      output->screen_y =
           (int)(((longlong)(int)uVar4 * (longlong)g_INT_01c4effc) / (longlong)(int)uVar5) +
           g_INT_01c4f004;
      return;
    }
    output->screen_x = uVar6;
    return;
  }
  g_INT_00623e28 = input->x - g_INT_01c51d2c;
  g_INT_00623e2c = input->y - g_INT_01c51d30;
  g_INT_00623e30 = input->z - g_INT_01c51d34;
  lVar1 = (longlong)g_INT_00623e2c * (longlong)g_INT_01c51d68 +
          (longlong)g_INT_00623e28 * (longlong)g_INT_01c51d5c +
          (longlong)g_INT_00623e30 * (longlong)g_INT_01c51d74;
  g_INT_00623e38 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_INT_00623e2c * (longlong)g_INT_01c51d6c +
          (longlong)g_INT_00623e28 * (longlong)g_INT_01c51d60 +
          (longlong)g_INT_00623e30 * (longlong)g_INT_01c51d78;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)g_INT_00623e2c * (longlong)g_INT_01c51d70 +
          (longlong)g_INT_00623e28 * (longlong)g_INT_01c51d64 +
          (longlong)g_INT_00623e30 * (longlong)g_INT_01c51d7c;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < g_INT_00623e38) {
    uVar5 = 0x80000001;
  }
  if (g_INT_00623e38 < (int)-uVar4) {
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
  g_INT_00623e3c = uVar3;
  g_INT_00623e40 = uVar4;
  if (uVar5 == 0) {
    output->transformed_x = g_INT_00623e38;
    output->transformed_y = uVar3;
    output->transformed_z = uVar4;
    output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar4);
    output->screen_x =
         (int)(((longlong)g_INT_00623e38 * (longlong)g_INT_01c4eff8) / (longlong)(int)uVar4) +
         g_INT_01c4f000;
    output->screen_y =
         (int)(((longlong)g_INT_00623e3c * (longlong)g_INT_01c4effc) / (longlong)(int)uVar4) +
         g_INT_01c4f004;
    return;
  }
  output->transformed_x = g_INT_00623e38;
  output->transformed_y = uVar3;
  output->transformed_z = uVar4;
  output->screen_x = uVar5;
  return;
}
