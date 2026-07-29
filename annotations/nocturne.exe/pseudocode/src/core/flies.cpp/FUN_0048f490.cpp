// Name: core_flies.cpp_FUN_0048f490
// Address: 0048f490
// Address Range: [[0048f490, 0048f884]]
// Convention: unknown
// Signature: int core_flies_cpp_FUN_0048f490(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_flies_cpp_FUN_0048f490(CDemonActor *param_1)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  char *pcVar3;
  int iVar4;
  CBoundingBox3D *this_ptr;
  uint uVar5;
  int iVar6;
  float *out_basis;
  SRenderVertex *pSVar7;
  SRenderVertex *vertices;
  SRenderVertex *pSVar8;
  byte bVar9;
  double dVar10;
  byte local_58 [24];
  float fStack_40;
  float fStack_3c;
  CVector3i CStack_38;
  int iStack_28;
  int iStack_24;
  char *pcStack_20;
  int iStack_18;
  
  bVar9 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar4 != 0) {
    return 0;
  }
  param_1[0x20].actor_name[0x14] = '\0';
  param_1[0x20].actor_name[0x15] = '\0';
  param_1[0x20].actor_name[0x16] = '\0';
  param_1[0x20].actor_name[0x17] = '\0';
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,(CBoundingBox3D *)local_58);
  iStack_28 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  iVar4 = _DAT_01c70714;
  if (iStack_28 != 0) {
    param_1[0x20].actor_name[0x14] = '\x01';
    param_1[0x20].actor_name[0x15] = '\0';
    param_1[0x20].actor_name[0x16] = '\0';
    param_1[0x20].actor_name[0x17] = '\0';
    if (iVar4 == 0) {
      out_basis = (float *)0x1c7075c;
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 1;
        iStack_18 = iVar4;
        core_spline_cpp_computeSplineBasis_FUN_00533ce0
                  (out_basis,((float)iVar4 + (float)0.5) * (float)0.015625,0.0);
        out_basis = out_basis + 8;
        iVar4 = iVar6;
      } while (iVar6 < 0x40);
      _DAT_01c70714 = 1;
    }
    pCVar2 = DAT_005ae704;
    if (_DAT_01c02594 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(DAT_005ae704,0,0,0);
      uVar5 = _DAT_01c038f4 >> 8;
      _DAT_01c70754 = uVar5 | uVar5 << 8 | uVar5 << 0x10;
      _DAT_01c70758 = _DAT_01c70754 ^ 0xffffff;
    }
    else {
      DAT_005ae704->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr->b = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[1].b = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      iVar4 = _DAT_01c038f4;
      pCVar2->vertex_buffer_ptr[2].b = 0;
      iVar4 = 0xffff - iVar4;
      pCVar2->vertex_buffer_ptr->a = iVar4;
      pCVar2->vertex_buffer_ptr[1].a = iVar4;
      pCVar2->vertex_buffer_ptr[2].a = iVar4;
      engine_texture_cpp_ensureTextureLoaded_FUN_00545920((SMRGLTextureBasic *)&DAT_005b9214);
    }
    iStack_24 = 0;
    if (0 < *(int *)(param_1[1].actor_name + 0xc)) {
      pcStack_20 = param_1[1].actor_name + 0x10;
      do {
        pcVar3 = pcStack_20;
        dVar10 = round((double)(*(float *)pcStack_20 * 64.0f));
        pcStack_20 = (char *)(int)ROUND(dVar10);
        if ((int)pcStack_20 < 0) {
          pcStack_20 = (char *)0x0;
        }
        else if (0x3f < (int)pcStack_20) {
          pcStack_20 = (char *)0x3f;
        }
        core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10
                  ((float *)((int)pcStack_20 * 0x20 + 0x1c7075c),(CVector3f *)(local_58 + 0x14),
                   (CVector3f *)(pcVar3 + 4),(CVector3f *)(pcVar3 + 0x10),
                   (CVector3f *)(pcVar3 + 0x1c),(CVector3f *)(pcVar3 + 0x28));
        CStack_38.x = (int)ROUND((float)local_58._20_4_ * _DAT_0059da10);
        CStack_38.y = (int)ROUND(fStack_40 * _DAT_0059da10);
        CStack_38.z = (int)ROUND(fStack_3c * _DAT_0059da10);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_38);
        pCVar2 = DAT_005ae704;
        vertices = DAT_005ae704->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar4 = (vertices->projected_vertex).screen_x >> 0x10;
          if (_DAT_01c02594 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_004f99d0(vertices,1);
            if ((((-1 < iVar4) && (iVar4 < DAT_005b761c)) && (-1 < iVar6)) && (iVar6 < DAT_005b7620)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_0048f3c0
                        (iVar4,iVar6,(vertices->projected_vertex).transformed_z);
            }
          }
          else if ((iVar4 < DAT_005b761c + -1) && (iVar6 < DAT_005b7620 + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar7 = vertices;
            pSVar8 = pCVar2->vertex_buffer_ptr + 1;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              pSVar7 = (SRenderVertex *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            pSVar7 = pCVar2->vertex_buffer_ptr + 2;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar7->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar9 * -8 + 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                      (pCVar2,(SMRGLPrimitivePoly *)&stack0xffffff5c,999);
          }
        }
        iStack_24 = iStack_24 + 0x34;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < *(int *)(param_1[1].actor_name + 0xc));
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iStack_28;
}
