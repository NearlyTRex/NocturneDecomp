// Name: core_skeleton.cpp_FUN_00564b1c
// Address: 00564b1c
// Address Range: [[00564b1c, 00564d37]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_FUN_00564b1c(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_FUN_00564b1c(CDeformableModel *param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  CSkeleton *pCVar2;
  int iVar3;
  int iVar4;
  CSkeleton *pCVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_105c [1015];
  CDemonRenderer *this_ptr;
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  CSkeleton *pCStack_14;
  
  bVar8 = 0;
  pCStack_14 = core_skeleton_cpp_FUN_00563c40(param_1);
  pCVar2 = pCStack_14;
  if ((param_4 & 1) != 0) {
    iVar4 = 0;
    if (0 < *(int *)&pCStack_14->field_0x1de78) {
      iStack_1c = param_3;
      do {
        iStack_20 = iVar4 * 0x30;
        core_xform_cpp_FUN_005b6270();
        fStack_50 = fStack_38;
        afStack_4c[(uint)bVar8 * -2] = afStack_34[(uint)bVar8 * -2];
        afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_34[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        iStack_2c = (int)ROUND(fStack_50 * _DAT_00605888);
        iStack_28 = (int)ROUND(afStack_4c[0] * _DAT_00605888);
        iStack_24 = (int)ROUND(afStack_4c[1] * _DAT_00605888);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + iStack_20),(CVector3i *)&iStack_2c);
        iVar4 = iVar4 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar4 < *(int *)&pCStack_14->field_0x1de78);
    }
    _DAT_01c4f020 = param_2;
    iStack_18 = 0;
    pCVar2 = pCStack_14;
    if (0 < *(int *)&pCStack_14->field_0x1de78) {
      iVar4 = 0;
      pCVar5 = pCStack_14;
      do {
        if (-1 < *(int *)&pCVar5->field_0x1de9c) {
          iVar1 = *(int *)DAT_00612560;
          puVar6 = (uint *)(*(int *)&pCVar5->field_0x1de9c * 0x30 + iVar1);
          pfVar7 = afStackY_105c + 0x3ee;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar7 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          puVar6 = (uint *)(iVar1 + iVar4);
          pfVar7 = afStackY_105c + 0x3e2;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar7 = (float)*puVar6;
            puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
        }
        pCVar2 = (CSkeleton *)(iStack_18 + 1);
        pCVar5 = (CSkeleton *)&pCVar5->field_0x24;
        iVar4 = iVar4 + 0x30;
        iStack_18 = (int)pCVar2;
      } while ((int)pCVar2 < *(int *)&pCStack_14->field_0x1de78);
    }
  }
  if (((param_4 & 2) != 0) &&
     (iVar4 = 0, pCVar2 = pCStack_14, 0 < *(int *)&pCStack_14->field_0x1de78)) {
    do {
      core_xform_cpp_FUN_005b5930();
      *(uint *)((int)&CStack_44 + (uint)bVar8 * -8 + 4) =
           *(uint *)(&stack0xffffff90 + (uint)bVar8 * -8);
      *(uint *)((int)&CStack_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)(&stack0xffffff94 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      core_xform_cpp_FUN_005b6270();
      translation = &CStack_5c;
      euler_angles = &CStack_44;
      CStack_5c._0_4_ = CStack_68._0_4_;
      *(uint *)((int)&CStack_5c + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_68 + (uint)bVar8 * -8 + 4);
      this_ptr = DAT_00612560;
      *(uint *)((int)&CStack_5c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      afStackY_105c[0x3f6] = 7.925433e-39;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (this_ptr,euler_angles,translation);
      afStackY_105c[0x3f6] = 7.925468e-39;
      shape_edittool_cpp_FUN_00498360();
      engine_matrix_c_pop_FUN_004839a0();
      iVar4 = iVar4 + 1;
      pCVar2 = pCStack_14;
    } while (iVar4 < *(int *)&pCStack_14->field_0x1de78);
  }
  return pCVar2;
}
