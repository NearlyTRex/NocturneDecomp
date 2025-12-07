// Name: core_flies.cpp_FUN_004cc300
// Address: 004cc300
// Address Range: [[004cc300, 004cc6f2]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc300()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_flies.cpp_FUN_004cc300(uint param_1) */

int core_flies_cpp_FUN_004cc300
              (uint param_1,uint param_2,int unaff_EBX,uint param_4,
              CDemonActor *param_5)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar8;
  SRenderVertex *vertices;
  int iVar9;
  SRenderVertex *pSVar10;
  byte bVar11;
  double dVar12;
  CBoundingBox3D aCStack_50 [2];
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar11 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar3 != 0) {
    return 0;
  }
  param_5[0x1f].create_prob = 0.0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(param_5);
  this_ptr = (*param_5->vtable->getBoundingBox)(param_5,aCStack_50);
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  iVar3 = INT_02d7a7c0;
  if (iVar4 != 0) {
    param_5[0x1f].create_prob = 1.4013e-45;
    if (iVar3 == 0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        core_spline_cpp_FUN_005b90a0();
      } while (iVar3 < 0x40);
      INT_02d7a7c0 = 1;
    }
    pCVar2 = g_CDemonRendererPtr;
    if (g_UseExternalRenderer == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0,0,0);
      uVar5 = (int)g_PerspectiveReciprocal >> 8;
      DAT_02d7a800 = uVar5 | uVar5 << 8 | uVar5 << 0x10;
      DAT_02d7a804 = DAT_02d7a800 ^ 0xffffff;
    }
    else {
      aCStack_50[0].min.y = 1.1754944e-38;
      aCStack_50[0].min.z = 1.1754944e-38;
      aCStack_50[0].min.x = 2.8026e-45;
      g_CDemonRendererPtr->vertex_buffer_ptr->light = 0.0;
      pCVar2->vertex_buffer_ptr->color = 0;
      pCVar2->vertex_buffer_ptr->fog = 0.0;
      pCVar2->vertex_buffer_ptr[1].light = 0.0;
      pCVar2->vertex_buffer_ptr[1].color = 0;
      pCVar2->vertex_buffer_ptr[1].fog = 0.0;
      pCVar2->vertex_buffer_ptr[2].light = 0.0;
      pCVar2->vertex_buffer_ptr[2].color = 0;
      fVar7 = g_PerspectiveReciprocal;
      pCVar2->vertex_buffer_ptr[2].fog = 0.0;
      fVar7 = (float)(0xffff - (int)fVar7);
      pCVar2->vertex_buffer_ptr->w_recip = fVar7;
      pCVar2->vertex_buffer_ptr[1].w_recip = fVar7;
      pCVar2->vertex_buffer_ptr[2].w_recip = fVar7;
      engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&DAT_0067b514);
    }
    unaff_EBX = 0;
    if (0 < *(int *)(param_5[1].actor_name + 0xc)) {
      pcVar6 = param_5[1].actor_name + 0x10;
      do {
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)(*(float *)pcVar6 * 64f));
        iVar3 = (int)ROUND(dVar12);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3f < iVar3) {
          iVar3 = 0x3f;
        }
        core_spline_cpp_FUN_005b92d0();
        iStack_18 = (int)ROUND(fStack_20 * _DAT_0065e500);
        iStack_14 = (int)ROUND(fStack_1c * _DAT_0065e500);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)&iStack_14
                  );
        pCVar2 = g_CDemonRendererPtr;
        vertices = g_CDemonRendererPtr->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar9 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar4 = (vertices->projected_vertex).screen_x >> 0x10;
          if (g_UseExternalRenderer == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,1);
            if ((((-1 < iVar4) && (iVar4 < g_WindowWidth)) && (-1 < iVar9)) &&
               (iVar9 < g_WindowHeight)) {
              core_flies_cpp_FUN_004cc230();
            }
          }
          else if ((iVar4 < g_WindowWidth + -1) && (iVar9 < g_WindowHeight + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar8 = vertices;
            pSVar10 = pCVar2->vertex_buffer_ptr + 1;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar10->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
              pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
            }
            pSVar8 = pCVar2->vertex_buffer_ptr + 2;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar11 * -8 + 4);
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                      (pCVar2,(SMRGLHeaderPrimitive *)&stack0xffffff80,999);
          }
        }
        pcVar6 = (char *)(iVar3 + 0x34);
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < *(int *)(param_5[1].actor_name + 0xc));
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(param_5);
  return unaff_EBX;
}
