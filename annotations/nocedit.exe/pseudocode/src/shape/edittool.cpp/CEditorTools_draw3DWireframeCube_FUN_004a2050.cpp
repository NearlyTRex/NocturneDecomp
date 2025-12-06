// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
// Address Range: [[004a2050, 004a250a]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools * this_ptr, CVector3f * corner1, CVector3f * corner2, int color_value)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
          (CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

{
  uint uVar1;
  int iVar2;
  uint unaff_EBX;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  SRenderVertex *pSVar4;
  float fVar5;
  int *piVar6;
  byte bVar7;
  int in_stack_00000014;
  SRenderVertex *in_stack_fffffe9c;
  SRenderVertex *in_stack_fffffea0;
  SRenderVertex *in_stack_fffffea8;
  SRenderVertex *in_stack_fffffeac;
  SRenderVertex *in_stack_fffffeb4;
  SRenderVertex *in_stack_fffffeb8;
  int aiStack_134 [3];
  int aiStack_128 [2];
  uint uStack_120;
  float afStack_f0 [20];
  byte local_a0 [8];
  int local_98;
  int local_94;
  byte local_88 [8];
  float local_80;
  float local_7c;
  float local_60;
  float local_5c;
  float local_58;
  float local_3c;
  float local_38;
  byte local_34 [8];
  float local_2c;
  float local_28;
  uint local_1c;
  float local_18;
  float local_14;
  
  bVar7 = 0;
  uStack_120 = 0x4a2079;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffef0,8,&g_CVectorTypeInfo);
  pfVar3 = (float *)&stack0xfffffef4;
  uVar1 = 0;
  do {
    local_18 = corner2->x;
    iVar2 = uVar1 * 0xc;
    while( true ) {
      *(float *)((int)afStack_f0 + iVar2 + -0x1c) = local_18;
      if ((uVar1 & 2) == 0) {
        fVar5 = corner2->y;
      }
      else {
        fVar5 = corner1->y;
      }
      *(float *)((int)afStack_f0 + iVar2 + -0x18) = fVar5;
      if ((uVar1 & 4) == 0) {
        local_14 = corner2->z;
      }
      else {
        local_14 = corner1->z;
      }
      uVar1 = uVar1 + 1;
      *(float *)((int)afStack_f0 + iVar2 + -0x14) = local_14;
      if (7 < (int)uVar1) {
        local_1c = 0;
        g_ActiveRenderColor = in_stack_00000014;
        do {
          uVar1 = local_1c ^ 1;
          local_88._0_4_ = (int)ROUND(*pfVar3 * 256f);
          local_88._4_4_ = (int)ROUND(pfVar3[1] * 256f);
          local_80 = (float)(int)ROUND(pfVar3[2] * 256f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_88);
          local_60 = afStack_f0[uVar1 * 3 + -7] * 0.2f;
          local_5c = afStack_f0[uVar1 * 3 + -6] * 0.2f;
          local_58 = afStack_f0[uVar1 * 3 + -5] * 0.2f;
          local_34._4_4_ = *pfVar3 * 0.8f;
          local_2c = pfVar3[1] * 0.8f;
          local_28 = pfVar3[2] * 0.8f;
          local_3c = *pfVar3 * 0.8f + afStack_f0[uVar1 * 3 + -7] * 0.2f;
          local_38 = pfVar3[1] * 0.8f + afStack_f0[uVar1 * 3 + -6] * 0.2f;
          local_34._0_4_ = local_28 + afStack_f0[uVar1 * 3 + -5] * 0.2f;
          local_88._4_4_ = (uint)ROUND(local_3c * 256f);
          local_80 = (float)(int)ROUND(local_38 * 256f);
          local_7c = (float)(int)ROUND((float)local_34._0_4_ * 256f);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)(local_88 + 4));
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = aiStack_134;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffe9c;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffe9c,in_stack_fffffea0);
          uVar1 = (uint)fVar5 ^ 2;
          local_a0._0_4_ = (int)ROUND(*pfVar3 * 256f);
          local_a0._4_4_ = (int)ROUND(pfVar3[1] * 256f);
          local_98 = (int)ROUND(pfVar3[2] * 256f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_a0);
          local_88._4_4_ = afStack_f0[uVar1 * 3 + -4] * 0.2f;
          local_80 = afStack_f0[uVar1 * 3 + -3] * 0.2f;
          local_7c = afStack_f0[uVar1 * 3 + -2] * 0.2f;
          local_60 = *pfVar3 * 0.8f;
          local_5c = pfVar3[1] * 0.8f;
          local_58 = pfVar3[2] * 0.8f;
          local_18 = *pfVar3 * 0.8f + afStack_f0[uVar1 * 3 + -4] * 0.2f;
          local_14 = pfVar3[1] * 0.8f + afStack_f0[uVar1 * 3 + -3] * 0.2f;
          fVar5 = local_58 + afStack_f0[uVar1 * 3 + -2] * 0.2f;
          local_a0._4_4_ = (uint)ROUND(local_18 * 256f);
          local_98 = (int)ROUND(local_14 * 256f);
          local_94 = (int)ROUND(fVar5 * 256f);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)(local_a0 + 4));
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = aiStack_128;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffea8;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffea8,in_stack_fffffeac);
          uVar1 = unaff_EBX ^ 4;
          local_34._0_4_ = (int)ROUND(*pfVar3 * 256f);
          local_34._4_4_ = (int)ROUND(pfVar3[1] * 256f);
          local_2c = (float)(int)ROUND(pfVar3[2] * 256f);
          engine_matrix_c_transformToCache_FUN_0050cd70(0,(CVector3i *)local_34);
          local_60 = afStack_f0[uVar1 * 3 + -1] * 0.2f;
          local_5c = afStack_f0[uVar1 * 3] * 0.2f;
          local_58 = 0.2f * afStack_f0[uVar1 * 3 + 1];
          local_88._4_4_ = *pfVar3 * 0.8f;
          local_80 = pfVar3[1] * 0.8f;
          local_7c = 0.8f * pfVar3[2];
          local_3c = *pfVar3 * 0.8f + afStack_f0[uVar1 * 3 + -1] * 0.2f;
          local_38 = pfVar3[1] * 0.8f + afStack_f0[uVar1 * 3] * 0.2f;
          local_34._0_4_ = local_7c + 0.2f * afStack_f0[uVar1 * 3 + 1];
          local_34._4_4_ = (uint)ROUND(local_3c * 256f);
          local_2c = (float)(int)ROUND(local_38 * 256f);
          local_28 = (float)(int)ROUND((float)local_34._0_4_ * 256f);
          engine_matrix_c_transformToCache_FUN_0050cd70(1,(CVector3i *)(local_34 + 4));
          pSVar4 = g_RenderVertexBuffer + 1;
          piVar6 = (int *)&stack0xfffffee4;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar4 = g_RenderVertexBuffer;
          piVar6 = (int *)&stack0xfffffeb4;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = (pSVar4->projected_vertex).transformed_x;
            pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar7 * -2 + 1) * 4);
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffeb4,in_stack_fffffeb8);
          corner1 = (CVector3f *)((int)&corner1->x + 1);
          pfVar3 = pfVar3 + 3;
        } while ((int)corner1 < 8);
        return;
      }
      if ((uVar1 & 1) == 0) break;
      local_18 = corner1->x;
      iVar2 = iVar2 + 0xc;
    }
  } while( true );
}
