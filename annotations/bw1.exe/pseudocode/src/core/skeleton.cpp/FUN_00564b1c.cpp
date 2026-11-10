// Name: core_skeleton.cpp_FUN_00564b1c
// Address: 00564b1c
// Address Range: [[00564b1c, 00564d37]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_FUN_00564b1c(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_FUN_00564b1c(CDeformableModel *param_1,uint param_2,int param_3,byte param_4)

{
  CSkeleton *pCVar1;
  int iVar2;
  int iVar3;
  CSkeleton *pCVar4;
  CSkeleton *unaff_ESI;
  SRenderVertex *pSVar5;
  SRenderVertex *pSVar6;
  float *pfVar7;
  byte bVar8;
  CDemonRenderer *apCStackY_105c [3];
  float afStackY_1050 [1012];
  CDemonRenderer *this_ptr;
  CVector3f *euler_angles;
  CVector3f *translation;
  CDemonRenderer *apCStack_70 [2];
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3i CStack_2c;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  CSkeleton *pCStack_14;
  
  bVar8 = 0;
  pCStack_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(param_1);
  pCVar1 = pCStack_14;
  if ((param_4 & 1) != 0) {
    iVar3 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_1c = param_3;
      do {
        iStack_20 = iVar3 * 0x30;
        core_xform_cpp_FUN_005b6270();
        fStack_50 = fStack_38;
        afStack_4c[(uint)bVar8 * -2] = afStack_34[(uint)bVar8 * -2];
        afStack_4c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_34[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        CStack_2c.x = (int)ROUND(fStack_50 * _DAT_00605888);
        CStack_2c.y = (int)ROUND(afStack_4c[0] * _DAT_00605888);
        CStack_2c.z = (int)ROUND(afStack_4c[1] * _DAT_00605888);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + iStack_20),&CStack_2c);
        iVar3 = iVar3 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar3 < pCStack_14->bone_count);
    }
    _DAT_01c4f020 = param_2;
    iStack_18 = 0;
    pCVar1 = pCStack_14;
    if (0 < pCStack_14->bone_count) {
      iVar3 = 0;
      pCVar4 = pCStack_14;
      do {
        if (-1 < *(int *)(pCVar4->bone_list + 0x20)) {
          pSVar6 = DAT_00612560->vertex_buffer_ptr;
          pSVar5 = pSVar6 + *(int *)(pCVar4->bone_list + 0x20) * 0x30;
          pfVar7 = (float *)(apCStackY_105c + 0x3ee);
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar7 = (float)*(uint *)pSVar5;
            pSVar5 = pSVar5 + ((uint)bVar8 * -2 + 1) * 4;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          pSVar6 = pSVar6 + iVar3;
          pfVar7 = (float *)(apCStackY_105c + 0x3e2);
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar7 = (float)*(uint *)pSVar6;
            pSVar6 = pSVar6 + ((uint)bVar8 * -2 + 1) * 4;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
        }
        pCVar1 = (CSkeleton *)(iStack_18 + 1);
        pCVar4 = (CSkeleton *)&pCVar4->field_0x24;
        iVar3 = iVar3 + 0x30;
        iStack_18 = (int)pCVar1;
      } while ((int)pCVar1 < pCStack_14->bone_count);
    }
  }
  if (((param_4 & 2) != 0) && (iVar3 = 0, pCVar1 = pCStack_14, 0 < pCStack_14->bone_count)) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930();
      *(CDemonRenderer **)((int)&CStack_44 + (uint)bVar8 * -8 + 4) = apCStack_70[(uint)bVar8 * -2];
      *(CDemonRenderer **)((int)&CStack_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           apCStack_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      core_xform_cpp_FUN_005b6270();
      translation = &CStack_5c;
      euler_angles = &CStack_44;
      CStack_5c.x = fStack_68;
      *(float *)((int)&CStack_5c + (uint)bVar8 * -8 + 4) = afStack_64[(uint)bVar8 * -2];
      this_ptr = DAT_00612560;
      *(float *)((int)&CStack_5c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      afStackY_1050[0x3f3] = 7.925433e-39;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (this_ptr,euler_angles,translation);
      afStackY_1050[0x3f3] = 7.925468e-39;
      shape_edittool_cpp_FUN_00498360(g_CEditorToolsPtr,0.5,0xff);
      apCStack_70[1] = DAT_00612560;
      apCStack_70[0] = (CDemonRenderer *)0x564d0a;
      engine_matrix_c_pop_FUN_004839a0();
      iVar3 = iVar3 + 1;
      pCVar1 = unaff_ESI;
    } while (iVar3 < unaff_ESI->bone_count);
  }
  return pCVar1;
}
