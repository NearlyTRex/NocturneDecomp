// Name: core_skeleton.cpp_FUN_005496bc
// Address: 005496bc
// Address Range: [[005496bc, 005498c7]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_FUN_005496bc(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_FUN_005496bc(CDeformableModel *param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CSkeleton *pCVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_105c [1015];
  CDemonRenderer *this_ptr;
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [2];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  CSkeleton *pCStack_14;
  
  bVar7 = 0;
  pCStack_14 = core_skeleton_cpp_FUN_005487e0(param_1);
  if ((param_4 & 1) != 0) {
    iVar3 = 0;
    if (0 < *(int *)&pCStack_14->field_0x1de78) {
      iStack_18 = param_3;
      do {
        iStack_20 = iVar3 * 0x30;
        core_xform_cpp_FUN_00584450();
        fStack_50 = fStack_38;
        afStack_4c[(uint)bVar7 * -2] = afStack_34[(uint)bVar7 * -2];
        afStack_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        iStack_44 = (int)ROUND(fStack_50 * _DAT_005e4758);
        iStack_40 = (int)ROUND(afStack_4c[0] * _DAT_005e4758);
        iStack_3c = (int)ROUND(afStack_4c[1] * _DAT_005e4758);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)DAT_005f2afc + iStack_20),(CVector3i *)&iStack_44);
        iVar3 = iVar3 + 1;
        iStack_18 = iStack_18 + 0x30;
      } while (iVar3 < *(int *)&pCStack_14->field_0x1de78);
    }
    _DAT_01c6b5c0 = param_2;
    iVar3 = 0;
    if (0 < *(int *)&pCStack_14->field_0x1de78) {
      iStack_1c = 0;
      pCVar4 = pCStack_14;
      do {
        if (-1 < *(int *)&pCVar4->field_0x1de9c) {
          iVar1 = *(int *)DAT_005f2afc;
          puVar5 = (uint *)(*(int *)&pCVar4->field_0x1de9c * 0x30 + iVar1);
          pfVar6 = afStackY_105c + 0x3ee;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = (float)*puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          puVar5 = (uint *)(iStack_1c + iVar1);
          pfVar6 = afStackY_105c + 0x3e2;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = (float)*puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_FUN_00407b30();
        }
        pCVar4 = (CSkeleton *)&pCVar4->field_0x24;
        iVar3 = iVar3 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar3 < *(int *)&pCStack_14->field_0x1de78);
    }
  }
  if (((param_4 & 2) != 0) && (iVar3 = 0, 0 < *(int *)&pCStack_14->field_0x1de78)) {
    do {
      translation = &CStack_74;
      core_xform_cpp_FUN_00583b10();
      CStack_2c._0_4_ = CStack_68._0_4_;
      *(uint *)((int)&CStack_2c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_68 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_68 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      core_xform_cpp_FUN_00584450();
      euler_angles = &CStack_2c;
      CStack_74._0_4_ = CStack_5c._0_4_;
      *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_5c + (uint)bVar7 * -8 + 4);
      this_ptr = DAT_005f2afc;
      *(uint *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      afStackY_105c[0x3f6] = 7.768877e-39;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (this_ptr,euler_angles,translation);
      afStackY_105c[0x3f6] = 7.768912e-39;
      shape_edittool_cpp_FUN_00480f00();
      engine_matrix_c_pop_FUN_0046d080();
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)&pCStack_14->field_0x1de78);
  }
  return pCStack_14;
}
