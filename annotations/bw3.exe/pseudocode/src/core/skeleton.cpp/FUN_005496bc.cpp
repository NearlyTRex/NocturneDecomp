// Name: core_skeleton.cpp_FUN_005496bc
// Address: 005496bc
// Address Range: [[005496bc, 005498c7]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_FUN_005496bc(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_FUN_005496bc(CDeformableModel *param_1,uint param_2,int param_3,byte param_4)

{
  CSkeleton *pCVar1;
  int iVar2;
  int iVar3;
  CSkeleton *unaff_ESI;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_105c [1015];
  CDemonRenderer *this_ptr;
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [5];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3i CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  CSkeleton *pCStack_14;
  
  bVar7 = 0;
  pCStack_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(param_1);
  if ((param_4 & 1) != 0) {
    iVar3 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_18 = param_3;
      do {
        iStack_20 = iVar3 * 0x30;
        core_xform_cpp_FUN_00584450();
        fStack_50 = fStack_38;
        afStack_64[(uint)bVar7 * -2 + 6] = afStack_34[(uint)bVar7 * -2];
        afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        CStack_44.x = (int)ROUND(fStack_50 * _DAT_005e4758);
        CStack_44.y = (int)ROUND(fStack_4c * _DAT_005e4758);
        CStack_44.z = (int)ROUND(fStack_48 * _DAT_005e4758);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + iStack_20),&CStack_44);
        iVar3 = iVar3 + 1;
        iStack_18 = iStack_18 + 0x30;
      } while (iVar3 < pCStack_14->bone_count);
    }
    _DAT_01c6b5c0 = param_2;
    iVar3 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_1c = 0;
      pCVar1 = pCStack_14;
      do {
        if (-1 < *(int *)(pCVar1->bone_list + 0x20)) {
          pSVar5 = DAT_005f2afc->vertex_buffer_ptr;
          pSVar4 = pSVar5 + *(int *)(pCVar1->bone_list + 0x20) * 0x30;
          pfVar6 = afStackY_105c + 0x3ee;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = (float)*(uint *)pSVar4;
            pSVar4 = pSVar4 + ((uint)bVar7 * -2 + 1) * 4;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar5 = pSVar5 + iStack_1c;
          pfVar6 = afStackY_105c + 0x3e2;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar6 = (float)*(uint *)pSVar5;
            pSVar5 = pSVar5 + ((uint)bVar7 * -2 + 1) * 4;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407b30();
        }
        pCVar1 = (CSkeleton *)&pCVar1->field_0x24;
        iVar3 = iVar3 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar3 < pCStack_14->bone_count);
    }
  }
  pCVar1 = pCStack_14;
  if (((param_4 & 2) != 0) && (iVar3 = 0, 0 < pCStack_14->bone_count)) {
    do {
      translation = &CStack_74;
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10();
      CStack_2c.x = fStack_68;
      *(float *)((int)&CStack_2c + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_xform_cpp_FUN_00584450();
      euler_angles = &CStack_2c;
      CStack_74.x = afStack_64[2];
      *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2 + 3];
      this_ptr = DAT_005f2afc;
      *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      afStackY_105c[0x3f6] = 7.768877e-39;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (this_ptr,euler_angles,translation);
      afStackY_105c[0x3f6] = 7.768912e-39;
      shape_edittool_cpp_FUN_00480f00(g_CEditorToolsPtr,0.5,0xff);
      CStack_74.z = (float)DAT_005f2afc;
      CStack_74.y = 7.768933e-39;
      engine_matrix_c_pop_FUN_0046d080();
      iVar3 = iVar3 + 1;
      pCVar1 = unaff_ESI;
    } while (iVar3 < unaff_ESI->bone_count);
  }
  return pCVar1;
}
