// Name: core_skeleton.cpp_FUN_00564b20
// Address: 00564b20
// Address Range: [[00564b20, 00564d37]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_FUN_00564b20(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_FUN_00564b20(CDeformableModel *param_1,uint param_2,int param_3,byte param_4)

{
  SRenderVertex *pSVar1;
  CSkeleton *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CSkeleton *pCVar6;
  CSkeleton *unaff_ESI;
  SRenderVertex *pSVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
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
  CSkeleton *pCStack_18;
  CSkeleton *pCStack_14;
  
  bVar10 = 0;
  pCStack_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(param_1);
  pCVar2 = pCStack_14;
  if ((param_4 & 1) != 0) {
    iVar5 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_1c = param_3;
      do {
        iStack_20 = iVar5 * 0x30;
        core_xform_cpp_FUN_005b6270();
        fStack_50 = fStack_38;
        afStack_4c[(uint)bVar10 * -2] = afStack_34[(uint)bVar10 * -2];
        afStack_4c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        CStack_2c.x = (int)ROUND(fStack_50 * _DAT_00605888);
        CStack_2c.y = (int)ROUND(afStack_4c[0] * _DAT_00605888);
        CStack_2c.z = (int)ROUND(afStack_4c[1] * _DAT_00605888);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)
                   ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x +
                   iStack_20),&CStack_2c);
        iVar5 = iVar5 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar5 < pCStack_14->bone_count);
    }
    _DAT_01c4f020 = param_2;
    pCStack_18 = (CSkeleton *)0x0;
    pCVar2 = pCStack_14;
    if (0 < pCStack_14->bone_count) {
      iVar5 = 0;
      pCVar6 = pCStack_14;
      do {
        iVar4 = pCVar6->bone_list[0].parent_index;
        if (-1 < iVar4) {
          pSVar1 = DAT_00612560->vertex_buffer_ptr;
          pSVar7 = pSVar1 + iVar4;
          pfVar9 = (float *)(apCStackY_105c + 0x3ee);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar9 = (float)(pSVar7->projected_vertex).transformed_x;
            pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar10 * -2 + 1) * 4);
            pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
          }
          puVar8 = (uint *)((int)&(pSVar1->projected_vertex).transformed_x + iVar5);
          pfVar9 = (float *)(apCStackY_105c + 0x3e2);
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar9 = (float)*puVar8;
            puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
            pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407af0();
        }
        pCVar2 = (CSkeleton *)((int)&(pCStack_18->motion_list).state_count + 1);
        pCVar6 = (CSkeleton *)((pCVar6->motion_list).state_names[1] + 2);
        iVar5 = iVar5 + 0x30;
        pCStack_18 = pCVar2;
      } while ((int)pCVar2 < pCStack_14->bone_count);
    }
  }
  if (((param_4 & 2) != 0) && (iVar5 = 0, pCVar2 = pCStack_14, 0 < pCStack_14->bone_count)) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930();
      *(CDemonRenderer **)((int)&CStack_44 + (uint)bVar10 * -8 + 4) = apCStack_70[(uint)bVar10 * -2]
      ;
      *(CDemonRenderer **)((int)&CStack_44 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           apCStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_xform_cpp_FUN_005b6270();
      translation = &CStack_5c;
      euler_angles = &CStack_44;
      CStack_5c.x = fStack_68;
      *(float *)((int)&CStack_5c + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2];
      this_ptr = DAT_00612560;
      *(float *)((int)&CStack_5c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      afStackY_1050[0x3f3] = 7.925433e-39;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (this_ptr,euler_angles,translation);
      afStackY_1050[0x3f3] = 7.925468e-39;
      shape_edittool_cpp_FUN_00498360(g_CEditorToolsPtr,0.5,0xff);
      apCStack_70[1] = DAT_00612560;
      apCStack_70[0] = (CDemonRenderer *)0x564d0a;
      engine_drender_cpp_pop_FUN_004839a0();
      iVar5 = iVar5 + 1;
      pCVar2 = unaff_ESI;
    } while (iVar5 < unaff_ESI->bone_count);
  }
  return pCVar2;
}
