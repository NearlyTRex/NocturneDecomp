// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00564b20
// Address: 00564b20
// Address Range: [[00564b20, 00564d37]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00564b20(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00564b20(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

{
  SRenderVertex *pSVar1;
  SRenderVertex vertex2;
  int iVar2;
  int iVar3;
  int iVar4;
  CSkeleton *pCVar5;
  int unaff_ESI;
  SRenderVertex *pSVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  byte bVar10;
  CDemonRenderer *apCStackY_105c [3];
  float afStackY_1050 [991];
  SRenderVertex in_stack_ffffff2c;
  byte auVar11 [24];
  byte in_stack_ffffff5c [32];
  uint in_stack_ffffff7c;
  uint in_stack_ffffff80;
  CDemonRenderer *this_ptr_00;
  SProjectedVertex *output;
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
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  CMatrix3x4f *pCStack_1c;
  int iStack_18;
  CSkeleton *pCStack_14;
  
  bVar10 = 0;
  output = (SProjectedVertex *)0x564b31;
  pCStack_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(this_ptr);
  if ((render_flags & 1U) != 0) {
    iVar4 = 0;
    if (0 < pCStack_14->bone_count) {
      pCStack_1c = bone_matrices;
      do {
        iStack_20 = iVar4 * 0x30;
        core_xform_cpp_FUN_005b6270();
        fStack_50 = fStack_38;
        afStack_4c[(uint)bVar10 * -2] = afStack_34[(uint)bVar10 * -2];
        afStack_4c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        iStack_2c = (int)ROUND(fStack_50 * _DAT_00605888);
        iStack_28 = (int)ROUND(afStack_4c[0] * _DAT_00605888);
        iStack_24 = (int)ROUND(afStack_4c[1] * _DAT_00605888);
        this_ptr = (CDeformableModel *)(afStack_34 + 2);
        output = (SProjectedVertex *)
                 ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iStack_20);
        in_stack_ffffff80 = 0x564bc7;
        engine_special_cpp_FUN_00580173(output,(CVector3i *)this_ptr);
        iVar4 = iVar4 + 1;
        pCStack_1c = pCStack_1c + 1;
      } while (iVar4 < pCStack_14->bone_count);
    }
    _DAT_01c4f020 = color;
    iStack_18 = 0;
    if (0 < pCStack_14->bone_count) {
      iVar4 = 0;
      pCVar5 = pCStack_14;
      do {
        iVar3 = pCVar5->bone_list[0].parent_index;
        if (-1 < iVar3) {
          pSVar1 = DAT_00612560->vertex_buffer_ptr;
          pSVar6 = pSVar1 + iVar3;
          piVar8 = (int *)&stack0xffffff5c;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar8 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
            piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar7 = (uint *)((int)&(pSVar1->projected_vertex).transformed_x + iVar4);
          puVar9 = (uint *)&stack0xffffff2c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          vertex2.r = in_stack_ffffff7c;
          auVar11 = in_stack_ffffff5c._0_24_;
          vertex2.projected_vertex.transformed_x = auVar11._0_4_;
          vertex2.projected_vertex.transformed_y = auVar11._4_4_;
          vertex2.projected_vertex.transformed_z = auVar11._8_4_;
          vertex2.projected_vertex.inv_z = auVar11._12_4_;
          vertex2.projected_vertex.screen_x = auVar11._16_4_;
          vertex2.projected_vertex.screen_y = auVar11._20_4_;
          vertex2.u = in_stack_ffffff5c._24_4_;
          vertex2.v = in_stack_ffffff5c._28_4_;
          vertex2.g = in_stack_ffffff80;
          vertex2.b = (int)output;
          vertex2.a = (int)this_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407af0(in_stack_ffffff2c,vertex2);
        }
        iStack_18 = iStack_18 + 1;
        pCVar5 = (CSkeleton *)((pCVar5->motion_list).state_names[1] + 2);
        iVar4 = iVar4 + 0x30;
      } while (iStack_18 < pCStack_14->bone_count);
    }
  }
  if (((render_flags & 2U) != 0) && (iVar4 = 0, 0 < pCStack_14->bone_count)) {
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
      this_ptr_00 = DAT_00612560;
      *(float *)((int)&CStack_5c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (this_ptr_00,euler_angles,translation);
      shape_edittool_cpp_FUN_00498360(g_CEditorToolsPtr,0.5,0xff);
      apCStack_70[1] = DAT_00612560;
      apCStack_70[0] = (CDemonRenderer *)0x564d0a;
      engine_drender_cpp_pop_FUN_004839a0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0x1de78));
  }
  return;
}
