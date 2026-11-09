// Name: shape_edittool.cpp_FUN_00498660
// Address: 00498660
// Address Range: [[00498660, 004987a1]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00498660(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00498660(float *param_1,float *param_2)

{
  int iVar1;
  float unaff_EBP;
  uint *puVar2;
  float unaff_EDI;
  float *pfVar3;
  byte bVar4;
  float afStackY_1044 [1014];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float afStack_4c [2];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  afStack_4c[0] = (float)(int)ROUND(*param_1 * _DAT_005ff7ec);
  afStack_4c[1] = (float)(int)ROUND(param_1[1] * _DAT_005ff7ec);
  iStack_44 = (int)ROUND(param_1[2] * _DAT_005ff7ec);
  afStackY_1044[0x3f5] = 6.75229e-39;
  engine_matrix_c_transformToCache_FUN_00507b00(0,(CVector3i *)afStack_4c);
  afStack_34[2] = *param_2 * _DAT_005dc280;
  afStack_34[3] = param_2[1] * _DAT_005dc280;
  fStack_24 = param_2[2] * _DAT_005dc280;
  fStack_14 = *param_2 * _DAT_005dc280;
  *(float *)(&stack0xfffffff0 + (uint)bVar4 * -8) = afStack_34[(uint)bVar4 * -2 + 3];
  *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  fStack_20 = *param_1 * _DAT_005dc284;
  fStack_1c = param_1[1] * _DAT_005dc284;
  fStack_18 = param_1[2] * _DAT_005dc284;
  fStack_50 = *param_1 * _DAT_005dc284;
  afStack_4c[(uint)bVar4 * -2] = afStack_34[(uint)bVar4 * -2 + 6];
  afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  fStack_58 = afStack_4c[0] + unaff_EBP;
  fStack_54 = afStack_4c[1] + unaff_EDI;
  fStack_38 = fStack_50 + fStack_14;
  afStack_34[(uint)bVar4 * -2] = *(float *)((int)&stack0xffffffa8 + (uint)bVar4 * -8);
  afStack_34[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iStack_44 = (int)ROUND(fStack_38 * _DAT_005ff7ec);
  iStack_40 = (int)ROUND(afStack_34[0] * _DAT_005ff7ec);
  iStack_3c = (int)ROUND(afStack_34[1] * _DAT_005ff7ec);
  engine_matrix_c_transformToCache_FUN_00507b00(1,(CVector3i *)&iStack_44);
  puVar2 = &DAT_00629044;
  pfVar3 = afStackY_1044 + 0x3f0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (float)*puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = &DAT_00629014;
  pfVar3 = afStackY_1044 + 0x3e4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = (float)*puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
  return;
}
