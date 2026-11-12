// Name: core_skeleton.cpp_FUN_005424b0
// Address: 005424b0
// Address Range: [[005424b0, 005426b7]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_FUN_005424b0(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_FUN_005424b0(CDeformableModel *param_1,uint param_2,int param_3,byte param_4)

{
  SRenderVertex *pSVar1;
  SRenderVertex vertex2;
  int iVar2;
  int iVar3;
  int iVar4;
  CSkeleton *pCVar5;
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
  CDemonRenderer *this_ptr;
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
  int iStack_18;
  CSkeleton *pCStack_14;
  
  bVar10 = 0;
  output = (SProjectedVertex *)0x5424c1;
  pCStack_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(param_1);
  if ((param_4 & 1) != 0) {
    iVar4 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_18 = param_3;
      do {
        iStack_20 = iVar4 * 0x30;
        core_xform_cpp_FUN_00592720();
        fStack_50 = fStack_38;
        afStack_64[(uint)bVar10 * -2 + 6] = afStack_34[(uint)bVar10 * -2];
        afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        iStack_44 = (int)ROUND(fStack_50 * _DAT_005fb998);
        iStack_40 = (int)ROUND(fStack_4c * _DAT_005fb998);
        iStack_3c = (int)ROUND(fStack_48 * _DAT_005fb998);
        param_1 = (CDeformableModel *)&iStack_44;
        output = (SProjectedVertex *)
                 ((int)&(DAT_0060b280->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iStack_20);
        in_stack_ffffff80 = 0x542557;
        engine_special_cpp_FUN_0055d723(output,(CVector3i *)param_1);
        iVar4 = iVar4 + 1;
        iStack_18 = iStack_18 + 0x30;
      } while (iVar4 < pCStack_14->bone_count);
    }
    _DAT_01c35e60 = param_2;
    iVar4 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_1c = 0;
      pCVar5 = pCStack_14;
      do {
        iVar3 = pCVar5->bone_list[0].parent_index;
        if (-1 < iVar3) {
          pSVar1 = DAT_0060b280->vertex_buffer_ptr;
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
          vertex2.a = (int)param_1;
          engine_3d_c_clipAndDrawLine2D_FUN_00407cc0(in_stack_ffffff2c,vertex2);
        }
        pCVar5 = (CSkeleton *)((pCVar5->motion_list).state_names[1] + 2);
        iVar4 = iVar4 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar4 < pCStack_14->bone_count);
    }
  }
  if (((param_4 & 2) != 0) && (iVar4 = 0, 0 < pCStack_14->bone_count)) {
    do {
      translation = &CStack_74;
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
      CStack_2c.x = fStack_68;
      *(float *)((int)&CStack_2c + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_xform_cpp_FUN_00592720();
      euler_angles = &CStack_2c;
      CStack_74.x = afStack_64[2];
      *(float *)((int)&CStack_74 + (uint)bVar10 * -8 + 4) = afStack_64[(uint)bVar10 * -2 + 3];
      this_ptr = DAT_0060b280;
      *(float *)((int)&CStack_74 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_64[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (this_ptr,euler_angles,translation);
      shape_edittool_cpp_FUN_0047fd00();
      engine_drender_cpp_pop_FUN_0046b4a0();
      iVar4 = iVar4 + 1;
    } while (iVar4 < pCStack_14->bone_count);
  }
  return pCStack_14;
}
