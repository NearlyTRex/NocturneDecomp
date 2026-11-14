// Name: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_005496c0
// Address: 005496c0
// Address Range: [[005496c0, 005498c7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_005496c0(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_005496c0(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)

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
  float afStackY_105c [994];
  SRenderVertex in_stack_ffffff2c;
  byte auVar11 [24];
  byte in_stack_ffffff5c [32];
  uint in_stack_ffffff7c;
  uint in_stack_ffffff80;
  CDemonRenderer *this_ptr_00;
  SProjectedVertex *output;
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [5];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  int iStack_20;
  int iStack_1c;
  CMatrix3x4f *pCStack_18;
  CSkeleton *pCStack_14;
  
  bVar10 = 0;
  output = (SProjectedVertex *)0x5496d1;
  pCStack_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005487e0(this_ptr);
  if ((render_flags & 1U) != 0) {
    iVar4 = 0;
    if (0 < pCStack_14->bone_count) {
      pCStack_18 = bone_matrices;
      do {
        iStack_20 = iVar4 * 0x30;
        core_xform_cpp_FUN_00584450();
        fStack_50 = fStack_38;
        afStack_64[(uint)bVar10 * -2 + 6] = afStack_34[(uint)bVar10 * -2];
        afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        iStack_44 = (int)ROUND(fStack_50 * _DAT_005e4758);
        iStack_40 = (int)ROUND(fStack_4c * _DAT_005e4758);
        iStack_3c = (int)ROUND(fStack_48 * _DAT_005e4758);
        this_ptr = (CDeformableModel *)&iStack_44;
        output = (SProjectedVertex *)
                 ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iStack_20);
        in_stack_ffffff80 = 0x549767;
        engine_special_cpp_FUN_005632a3(output,(CVector3i *)this_ptr);
        iVar4 = iVar4 + 1;
        pCStack_18 = pCStack_18 + 1;
      } while (iVar4 < pCStack_14->bone_count);
    }
    _DAT_01c6b5c0 = color;
    iVar4 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_1c = 0;
      pCVar5 = pCStack_14;
      do {
        iVar3 = pCVar5->bone_list[0].parent_index;
        if (-1 < iVar3) {
          pSVar1 = DAT_005f2afc->vertex_buffer_ptr;
          pSVar6 = pSVar1 + iVar3;
          piVar8 = (int *)&stack0xffffff5c;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar8 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
            piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar7 = (uint *)((int)&(pSVar1->projected_vertex).transformed_x + iStack_1c);
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
          engine_3d_c_clipAndDrawLine2D_FUN_00407b30(in_stack_ffffff2c,vertex2);
        }
        pCVar5 = (CSkeleton *)((pCVar5->motion_list).state_names[1] + 2);
        iVar4 = iVar4 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar4 < pCStack_14->bone_count);
    }
  }
  if (((render_flags & 2U) != 0) && (iVar4 = 0, 0 < pCStack_14->bone_count)) {
    do {
      translation = &CStack_74;
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10();
      CStack_2c.x = fStack_68;
      *(float *)((int)&CStack_2c + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_xform_cpp_FUN_00584450();
      euler_angles = &CStack_2c;
      CStack_74.x = afStack_64[2];
      *(float *)((int)&CStack_74 + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2 + 3];
      this_ptr_00 = DAT_005f2afc;
      *(float *)((int)&CStack_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (this_ptr_00,euler_angles,translation);
      shape_edittool_cpp_FUN_00480f00(g_CEditorToolsPtr,0.5,0xff);
      CStack_74.z = (float)DAT_005f2afc;
      CStack_74.y = 7.768933e-39;
      engine_drender_cpp_pop_FUN_0046d080();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0x1de78));
  }
  return;
}
