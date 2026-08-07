// Name: engine_special.cpp_transformPoint_FUN_00530a25
// Address: 00530a25
// Address Range: [[00530a25, 00530ced]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_transformPoint_FUN_00530a25(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_transformPoint_FUN_00530a25(SProjectedVertex *output,CVector3i *input)

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
    iVar2 = input->x - _DAT_01c039c4;
    iVar7 = input->y - _DAT_01c039c8;
    iVar8 = input->z - _DAT_01c039cc;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c039f4 + (longlong)iVar2 * (longlong)_DAT_01c039e8 +
            (longlong)iVar8 * (longlong)_DAT_01c03a00;
    uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c039f8 + (longlong)iVar2 * (longlong)_DAT_01c039ec +
            (longlong)iVar8 * (longlong)_DAT_01c03a04;
    uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar7 * (longlong)_DAT_01c039fc + (longlong)iVar2 * (longlong)_DAT_01c039f0 +
            (longlong)iVar8 * (longlong)_DAT_01c03a08;
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
  DAT_005bf4d8 = input->x - _DAT_01c039c4;
  DAT_005bf4dc = input->y - _DAT_01c039c8;
  DAT_005bf4e0 = input->z - _DAT_01c039cc;
  lVar1 = (longlong)DAT_005bf4dc * (longlong)_DAT_01c039f4 +
          (longlong)DAT_005bf4d8 * (longlong)_DAT_01c039e8 +
          (longlong)DAT_005bf4e0 * (longlong)_DAT_01c03a00;
  DAT_005bf4e8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_005bf4dc * (longlong)_DAT_01c039f8 +
          (longlong)DAT_005bf4d8 * (longlong)_DAT_01c039ec +
          (longlong)DAT_005bf4e0 * (longlong)_DAT_01c03a04;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)DAT_005bf4dc * (longlong)_DAT_01c039fc +
          (longlong)DAT_005bf4d8 * (longlong)_DAT_01c039f0 +
          (longlong)DAT_005bf4e0 * (longlong)_DAT_01c03a08;
  uVar4 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uVar5 = 0;
  if ((int)uVar4 < (int)DAT_005bf4e8) {
    uVar5 = 0x80000001;
  }
  if ((int)DAT_005bf4e8 < (int)-uVar4) {
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
  DAT_005bf4ec = uVar3;
  DAT_005bf4f0 = uVar4;
  if (uVar5 == 0) {
    output->transformed_x = DAT_005bf4e8;
    output->transformed_y = uVar3;
    output->transformed_z = uVar4;
    output->inv_z = (int)(0x7fffffff / (longlong)(int)uVar4);
    output->screen_x =
         (int)(((longlong)(int)DAT_005bf4e8 * (longlong)g_Projection.half_width_fixed) /
              (longlong)(int)uVar4) + g_Projection.center_x_fixed;
    iVar2 = (int)(((longlong)(int)DAT_005bf4ec * (longlong)g_Projection.neg_half_height_fixed) /
                 (longlong)(int)uVar4) + g_Projection.center_y_fixed;
    output->screen_y = iVar2;
    return iVar2;
  }
  output->transformed_x = DAT_005bf4e8;
  output->transformed_y = uVar3;
  output->transformed_z = uVar4;
  output->screen_x = uVar5;
  return uVar5;
}
