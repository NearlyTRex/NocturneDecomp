// Name: core_flies.cpp_FUN_004cc300
// Address: 004cc300
// Address Range: [[004cc300, 004cc6f2]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cc300()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_flies.cpp_FUN_004cc300(uint param_1) */

int core_flies_cpp_FUN_004cc300(void)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  uint uVar4;
  float fVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *vertices;
  SRenderVertex *pSVar8;
  byte bVar9;
  double dVar10;
  CDemonActor *in_stack_00000004;
  SMRGLHeaderPrimitive SStack_9c;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  CBoundingBox3D CStack_54;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3i CStack_30;
  int iStack_24;
  int iStack_20;
  char *pcStack_1c;
  int iStack_14;
  
  bVar9 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar3 != 0) {
    return 0;
  }
  in_stack_00000004[0x1f].create_prob = 0.0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_54);
  iStack_24 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  iVar3 = INT_02d7a7c0;
  if (iStack_24 != 0) {
    in_stack_00000004[0x1f].create_prob = 1.4013e-45;
    if (iVar3 == 0) {
      iVar3 = 0;
      do {
        iVar6 = iVar3 + 1;
        iStack_14 = iVar3;
        core_spline_cpp_FUN_005b90a0();
        iVar3 = iVar6;
      } while (iVar6 < 0x40);
      INT_02d7a7c0 = 1;
    }
    pCVar2 = g_CDemonRendererPtr;
    if (g_UseExternalRenderer == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0,0,0);
      uVar4 = (int)g_PerspectiveReciprocal >> 8;
      DAT_02d7a800 = uVar4 | uVar4 << 8 | uVar4 << 0x10;
      DAT_02d7a804 = DAT_02d7a800 ^ 0xffffff;
    }
    else {
      SStack_9c.base.count = 3;
      SStack_9c.surface_normal.D = 0;
      SStack_9c.surface_normal.C = 0;
      SStack_9c.surface_normal.B = 0;
      SStack_9c.surface_normal.A = 0;
      uStack_84 = 0;
      uStack_80 = 0x800000;
      uStack_7c = 0x800000;
      uStack_74 = 0x800000;
      uStack_70 = 0x800000;
      uStack_68 = 0x800000;
      uStack_64 = 0x800000;
      uStack_78 = 1;
      uStack_6c = 2;
      g_CDemonRendererPtr->vertex_buffer_ptr->light = 0.0;
      pCVar2->vertex_buffer_ptr->color = 0;
      pCVar2->vertex_buffer_ptr->fog = 0.0;
      pCVar2->vertex_buffer_ptr[1].light = 0.0;
      pCVar2->vertex_buffer_ptr[1].color = 0;
      pCVar2->vertex_buffer_ptr[1].fog = 0.0;
      pCVar2->vertex_buffer_ptr[2].light = 0.0;
      pCVar2->vertex_buffer_ptr[2].color = 0;
      fVar5 = g_PerspectiveReciprocal;
      pCVar2->vertex_buffer_ptr[2].fog = 0.0;
      fVar5 = (float)(0xffff - (int)fVar5);
      pCVar2->vertex_buffer_ptr->w_recip = fVar5;
      pCVar2->vertex_buffer_ptr[1].w_recip = fVar5;
      pCVar2->vertex_buffer_ptr[2].w_recip = fVar5;
      engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&DAT_0067b514);
    }
    iStack_20 = 0;
    if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
      pcStack_1c = in_stack_00000004[1].actor_name + 0x10;
      do {
        dVar10 = crt_math_c_round_FUN_005fe6b0((double)(*(float *)pcStack_1c * 64f));
        pcStack_1c = (char *)(int)ROUND(dVar10);
        if ((int)pcStack_1c < 0) {
          pcStack_1c = (char *)0x0;
        }
        else if (0x3f < (int)pcStack_1c) {
          pcStack_1c = (char *)0x3f;
        }
        core_spline_cpp_FUN_005b92d0();
        fStack_34 = (float)(int)ROUND(fStack_3c * _DAT_0065e500);
        CStack_30.x = (int)ROUND(fStack_38 * _DAT_0065e500);
        CStack_30.y = (int)ROUND(fStack_34 * _DAT_0065e500);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_30);
        pCVar2 = g_CDemonRendererPtr;
        vertices = g_CDemonRendererPtr->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar3 = (vertices->projected_vertex).screen_x >> 0x10;
          if (g_UseExternalRenderer == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,1);
            if ((((-1 < iVar3) && (iVar3 < g_WindowWidth)) && (-1 < iVar6)) &&
               (iVar6 < g_WindowHeight)) {
              core_flies_cpp_FUN_004cc230();
            }
          }
          else if ((iVar3 < g_WindowWidth + -1) && (iVar6 < g_WindowHeight + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar7 = vertices;
            pSVar8 = pCVar2->vertex_buffer_ptr + 1;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              pSVar7 = (SRenderVertex *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            pSVar7 = pCVar2->vertex_buffer_ptr + 2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar7->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar9 * -8 + 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                      (pCVar2,&SStack_9c,999);
          }
        }
        pcStack_1c = (char *)((int)pcStack_1c + 0x34);
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iStack_24;
}
