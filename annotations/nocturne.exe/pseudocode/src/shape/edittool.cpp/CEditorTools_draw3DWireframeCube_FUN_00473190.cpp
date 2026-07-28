// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_00473190
// Address: 00473190
// Address Range: [[00473190, 0047364a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  uint uVar1;
  int iVar2;
  float unaff_EBP;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint unaff_retaddr;
  uint auStackY_160 [3];
  uint uStackY_154;
  uint auStackY_150 [3];
  uint uStackY_144;
  uint auStackY_140 [4];
  uint auStackY_130 [4];
  uint uStackY_120;
  float afStack_e8 [18];
  byte auStack_a0 [12];
  int iStack_94;
  int iStack_90;
  byte auStack_8c [12];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  byte auStack_30 [12];
  int iStack_24;
  uint uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  uStackY_120 = 0x4731b9;
  __arrinit(&stack0xfffffef0,8,&g_CVectorTypeInfo_005993b0);
  pfVar3 = (float *)&stack0xfffffef0;
  uVar1 = 0;
  do {
    fStack_1c = corner2->x;
    iVar2 = uVar1 * 0xc;
    while( true ) {
      *(float *)(&stack0xfffffef0 + iVar2) = fStack_1c;
      if ((uVar1 & 2) == 0) {
        fStack_14 = corner2->y;
      }
      else {
        fStack_14 = corner1->y;
      }
      *(float *)(&stack0xfffffef4 + iVar2) = fStack_14;
      if ((uVar1 & 4) == 0) {
        fStack_18 = corner2->z;
      }
      else {
        fStack_18 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)((int)afStack_e8 + iVar2 + -0x20) = fStack_18;
      if (7 < (int)uVar1) {
        uStack_20 = 0;
        _DAT_01c00c70 = color_value;
        do {
          uVar1 = uStack_20 ^ 1;
          iVar2 = uVar1 * 0xc;
          auStack_8c._0_4_ = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          auStack_8c._4_4_ = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          auStack_8c._8_4_ = (uint)ROUND(pfVar3[2] * _DAT_0059ca4c);
          engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)auStack_8c);
          fStack_60 = *(float *)(&stack0xfffffef0 + iVar2) * 0.2f;
          fStack_5c = *(float *)(&stack0xfffffef4 + iVar2) * 0.2f;
          fStack_58 = afStack_e8[uVar1 * 3 + -8] * 0.2f;
          auStack_30._0_4_ = *pfVar3 * 3.0517585321376802e-05._0_4_;
          auStack_30._4_4_ = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          auStack_30._8_4_ = pfVar3[2] * 3.0517585321376802e-05._0_4_;
          fStack_3c = *pfVar3 * 3.0517585321376802e-05._0_4_ +
                      *(float *)(&stack0xfffffef0 + iVar2) * 0.2f;
          fStack_38 = pfVar3[1] * 3.0517585321376802e-05._0_4_ +
                      *(float *)(&stack0xfffffef4 + iVar2) * 0.2f;
          fStack_34 = (float)auStack_30._8_4_ + afStack_e8[uVar1 * 3 + -8] * 0.2f;
          auStack_8c._8_4_ = (uint)ROUND(fStack_3c * _DAT_0059ca4c);
          fStack_80 = (float)(int)ROUND(fStack_38 * _DAT_0059ca4c);
          fStack_7c = (float)(int)ROUND(fStack_34 * _DAT_0059ca4c);
          engine_matrix_c_transformToCache_FUN_004cd210(1,(CVector3i *)(auStack_8c + 8));
          puVar4 = &DAT_005c5044;
          puVar5 = auStackY_130;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = auStackY_160;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00409290();
          uVar1 = (uint)unaff_EBP ^ 2;
          auStack_a0._0_4_ = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          auStack_a0._4_4_ = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          auStack_a0._8_4_ = (uint)ROUND(pfVar3[2] * _DAT_0059ca4c);
          engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)auStack_a0);
          fStack_80 = afStack_e8[uVar1 * 3 + -6] * 0.2f;
          fStack_7c = afStack_e8[uVar1 * 3 + -5] * 0.2f;
          fStack_78 = afStack_e8[uVar1 * 3 + -4] * 0.2f;
          fStack_5c = *pfVar3 * 3.0517585321376802e-05._0_4_;
          fStack_58 = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          fStack_54 = pfVar3[2] * 3.0517585321376802e-05._0_4_;
          fStack_14 = *pfVar3 * 3.0517585321376802e-05._0_4_ + afStack_e8[uVar1 * 3 + -6] * 0.2f;
          unaff_EBP = pfVar3[1] * 3.0517585321376802e-05._0_4_ +
                      afStack_e8[uVar1 * 3 + -5] * 0.2f;
          auStack_a0._8_4_ = (uint)ROUND(fStack_14 * _DAT_0059ca4c);
          iStack_94 = (int)ROUND(unaff_EBP * _DAT_0059ca4c);
          iStack_90 = (int)ROUND((fStack_54 + afStack_e8[uVar1 * 3 + -4] * 0.2f) *
                                 _DAT_0059ca4c);
          engine_matrix_c_transformToCache_FUN_004cd210(1,(CVector3i *)(auStack_a0 + 8));
          puVar4 = &DAT_005c5044;
          puVar5 = &uStackY_120;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = auStackY_150;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          uStackY_154 = 0x4734c5;
          engine_3d_c_clipAndDrawLine2D_FUN_00409290();
          uVar1 = unaff_retaddr ^ 4;
          auStack_30._0_4_ = (int)ROUND(*pfVar3 * _DAT_0059ca4c);
          auStack_30._4_4_ = (int)ROUND(pfVar3[1] * _DAT_0059ca4c);
          auStack_30._8_4_ = (uint)ROUND(pfVar3[2] * _DAT_0059ca4c);
          engine_matrix_c_transformToCache_FUN_004cd210(0,(CVector3i *)auStack_30);
          fStack_58 = afStack_e8[uVar1 * 3 + -2] * 0.2f;
          fStack_54 = afStack_e8[uVar1 * 3 + -1] * 0.2f;
          fStack_50 = 0.2f * afStack_e8[uVar1 * 3];
          fStack_7c = *pfVar3 * 3.0517585321376802e-05._0_4_;
          fStack_78 = pfVar3[1] * 3.0517585321376802e-05._0_4_;
          fStack_74 = 3.0517585321376802e-05._0_4_ * pfVar3[2];
          fStack_34 = *pfVar3 * 3.0517585321376802e-05._0_4_ + afStack_e8[uVar1 * 3 + -2] * 0.2f;
          auStack_30._0_4_ =
               pfVar3[1] * 3.0517585321376802e-05._0_4_ + afStack_e8[uVar1 * 3 + -1] * 0.2f;
          auStack_30._4_4_ = fStack_74 + 0.2f * afStack_e8[uVar1 * 3];
          auStack_30._8_4_ = (uint)ROUND(fStack_34 * _DAT_0059ca4c);
          iStack_24 = (int)ROUND((float)auStack_30._0_4_ * _DAT_0059ca4c);
          uStack_20 = (uint)ROUND((float)auStack_30._4_4_ * _DAT_0059ca4c);
          engine_matrix_c_transformToCache_FUN_004cd210(1,(CVector3i *)(auStack_30 + 8));
          puVar4 = &DAT_005c5044;
          puVar5 = (uint *)&stack0xfffffef0;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          puVar4 = &DAT_005c5014;
          puVar5 = auStackY_140;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          uStackY_144 = 0x4735fc;
          engine_3d_c_clipAndDrawLine2D_FUN_00409290();
          color_value = color_value + 1;
          pfVar3 = pfVar3 + 3;
        } while (color_value < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      fStack_1c = corner1->x;
      iVar2 = iVar2 + 0xc;
    }
  } while( true );
}
