// Name: core_setdir.cpp_FUN_0053f0f0
// Address: 0053f0f0
// Address Range: [[0053f0f0, 0053f935]]
// Convention: unknown
// Signature: float core_setdir_cpp_FUN_0053f0f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_setdir_cpp_FUN_0053f0f0(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  SMRGLPrimitivePoly *pSVar7;
  int iVar8;
  byte *puVar9;
  uint *puVar10;
  int iVar11;
  SProjectedVertex *point;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  CDemonActor *in_stack_00000004;
  CVector3i *in_stack_00000008;
  SMRGLPrimitivePoly *in_stack_0000000c;
  int in_stack_00000010;
  C3DSCamera *in_stack_00000014;
  float in_stack_00000018;
  float afStackY_1080 [995];
  float fStack_e8;
  SMRGLHeaderPrimitive SStack_e4;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  int aiStack_bc [6];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [2];
  CVector3i aCStack_80 [3];
  CBoundingBox3D *pCStack_5c;
  uint uStack_58;
  float fStack_50;
  uint *puStack_4c;
  uint uStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  CVector3f *pCStack_38;
  CBoundingBox3D *pCStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  CDemonActor *pCStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  
  bVar14 = 0;
  if (in_stack_00000014->enabled != 0) {
    fVar2 = (in_stack_00000014->position).x - (in_stack_00000004->location).position.x;
    fVar4 = (in_stack_00000014->position).y - (in_stack_00000004->location).position.y;
    fVar3 = (in_stack_00000014->position).z - (in_stack_00000004->location).position.z;
    if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= _DAT_005e3cf8 * _DAT_005e3cf8) {
      iVar6 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_005420b0
                        (in_stack_00000014,&(in_stack_00000004->location).position,in_stack_00000018
                        );
      if (iVar6 == 0) {
        return 0.0;
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
                (DAT_005f2afc,&in_stack_00000014->position);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090
                (DAT_005f2afc,in_stack_00000014->projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
                (DAT_005f2afc,&in_stack_00000014->orientation);
      uStack_3c = 0x800000ff;
      uStack_48 = 0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (DAT_005f2afc,&(in_stack_00000004->location).position);
      CStack_a4.x = (in_stack_00000004->orient).vec.x;
      CStack_a4.z = (in_stack_00000004->orient).vec.z;
      CStack_a4.y = (in_stack_00000014->orientation).y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                (DAT_005f2afc,&CStack_a4,(CVector3f *)0x0);
      iVar6 = 0;
      do {
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  ((SProjectedVertex *)
                   ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x + iVar6)
                   ,in_stack_00000008);
        iVar11 = iVar6 + 0x30;
        in_stack_00000008 = in_stack_00000008 + 1;
        uVar1 = *(uint *)((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x + iVar6
                         );
        uStack_3c = uStack_3c & uVar1;
        uStack_48 = uStack_48 | uVar1;
        iVar6 = iVar11;
      } while (iVar11 != 0x180);
      if (((uStack_3c & 0x80000000) != 0) && ((char)uStack_3c != '\0')) {
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(in_stack_00000004);
        return 0.0;
      }
      iVar6 = 0;
      iStack_28 = 0;
      pSVar7 = in_stack_0000000c;
      do {
        *(SMRGLPrimitivePoly **)((int)aiStack_bc + iVar6) = pSVar7;
        iVar6 = iVar6 + 4;
        iStack_28 = iStack_28 + 1;
        pSVar7 = (SMRGLPrimitivePoly *)(pSVar7->vertices + 4);
      } while (pSVar7 != (SMRGLPrimitivePoly *)(in_stack_0000000c[3].vertices + 4));
      iVar6 = 0;
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(in_stack_00000004);
      do {
        point = (SProjectedVertex *)
                ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x + iVar6);
        iVar11 = point->transformed_z;
        if (0 < iVar11) {
          iVar8 = iVar11 + 0x80;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar8) / (longlong)iVar11);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar8) /
                    (longlong)point->transformed_z);
          point->transformed_z = iVar8;
          engine_matrix_c_projectTransformedPoint_FUN_004e5590(point);
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != 0x180);
      iVar6 = 0;
      fStack_e8 = 1.0;
      do {
        if ((*(byte *)((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x +
                      iVar6 + 3) & 0x80) != 0) {
          dVar5 = _DAT_005d0c7e;
          if (0 < *(int *)((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_z +
                          iVar6)) {
            dVar5 = _DAT_005d0c76;
          }
          fStack_e8 = fStack_e8 * (float)dVar5;
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != 0x180);
      iStack_2c = 0;
      iStack_40 = 0;
      if (0 < _DAT_02701910) {
        fStack_50 = _DAT_005e3cfc * _DAT_005e3cfc;
        iStack_30 = 0;
        puStack_4c = (uint *)(&DAT_0212551c + in_stack_00000010 * 0x3000);
        pCStack_38 = &in_stack_00000014->position;
        pCStack_34 = (CBoundingBox3D *)0x2703854;
        do {
          pCStack_24 = *(CDemonActor **)(&DAT_02701914 + iStack_30);
          fVar2 = (pCStack_24->location).position.x - pCStack_38->x;
          fVar4 = (pCStack_24->location).position.y - pCStack_38->y;
          fVar3 = (pCStack_24->location).position.z - pCStack_38->z;
          if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= fStack_50) {
            core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(pCStack_24);
            uStack_58 = 0x800000ff;
            uStack_20 = 0;
            pCStack_5c = pCStack_34;
            uStack_1c = 0;
            iStack_18 = 0x180;
            do {
              core_box_cpp_CBoundingBox3D_getCorner_FUN_0041d8b0(pCStack_5c,uStack_1c,&CStack_98);
              fStack_8c = CStack_98.x;
              afStack_88[(uint)bVar14 * -2] = *(float *)((int)&CStack_98 + (uint)bVar14 * -8 + 4);
              iVar6 = iStack_18;
              afStack_88[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                   *(float *)((int)&CStack_98 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              aCStack_80[0].x = (int)ROUND(fStack_8c * _DAT_005e3ce0);
              aCStack_80[0].y = (int)ROUND(afStack_88[0] * _DAT_005e3ce0);
              aCStack_80[0].z = (int)ROUND(afStack_88[1] * _DAT_005e3ce0);
              engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                        ((SProjectedVertex *)
                         ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x +
                         iStack_18),aCStack_80);
              iStack_18 = iVar6 + 0x30;
              uVar1 = *(uint *)((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).screen_x +
                               iVar6);
              uStack_58 = uStack_58 & uVar1;
              uStack_20 = uStack_20 | uVar1;
              uStack_1c = uStack_1c + 1;
            } while ((int)uStack_1c < 8);
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(pCStack_24);
            if (((uStack_58 & 0x80000000) == 0) || ((char)uStack_58 == '\0')) {
              if (iStack_40 == 0) {
                puVar10 = puStack_4c;
                puVar12 = (uint *)&DAT_02122514;
                for (iVar6 = 0xc00; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar12 = *puVar10;
                  puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
                  puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar12 = *(byte *)puVar10;
                  puVar10 = (uint *)((int)puVar10 + (uint)bVar14 * -2 + 1);
                  puVar12 = (uint *)((int)puVar12 + (uint)bVar14 * -2 + 1);
                }
                puVar9 = &DAT_02122514;
                iStack_40 = 1;
                iVar6 = 0;
                do {
                  *(byte **)(&DAT_01c60dac + iVar6) = puVar9;
                  iVar6 = iVar6 + 4;
                  puVar9 = puVar9 + 0x100;
                } while (iVar6 != 0xc0);
                engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
              }
              SStack_e4.base.count = 4;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                        (DAT_005f2afc,(uint)((uStack_20 & 0x80000000) != 0));
              uStack_cc = 8;
              uStack_c8 = 0xc;
              uStack_c4 = 0xe;
              uStack_c0 = 10;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                        (DAT_005f2afc,&SStack_e4);
              uStack_cc = 9;
              uStack_c8 = 0xb;
              uStack_c4 = 0xf;
              uStack_c0 = 0xd;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                        (DAT_005f2afc,&SStack_e4);
              uStack_c8 = 9;
              uStack_c4 = 0xd;
              uStack_cc = 8;
              uStack_c0 = 0xc;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                        (DAT_005f2afc,&SStack_e4);
              uStack_c4 = 0xf;
              uStack_cc = 10;
              uStack_c8 = 0xe;
              uStack_c0 = 0xb;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                        (DAT_005f2afc,&SStack_e4);
              uStack_cc = 8;
              uStack_c0 = 9;
              uStack_c8 = 10;
              uStack_c4 = 0xb;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                        (DAT_005f2afc,&SStack_e4);
              uStack_cc = 0xc;
              uStack_c8 = 0xd;
              uStack_c4 = 0xf;
              uStack_c0 = 0xe;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0046b240
                        (DAT_005f2afc,&SStack_e4);
            }
          }
          iStack_30 = iStack_30 + 4;
          pCStack_34 = pCStack_34 + 1;
          iStack_2c = iStack_2c + 1;
        } while (iStack_2c < _DAT_02701910);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
      if (iStack_40 == 0) {
        puVar9 = &DAT_0212551c + in_stack_00000010 * 0x3000;
        iVar6 = 0;
        do {
          *(byte **)(&DAT_01c60dac + iVar6) = puVar9;
          iVar6 = iVar6 + 4;
          puVar9 = puVar9 + 0x100;
        } while (iVar6 != 0xc0);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
                (DAT_005f2afc,(uint)((uStack_48 & 0x80000000) != 0));
      iVar6 = 0;
      iStack_44 = 0;
      if (0 < iStack_28) {
        iVar11 = iStack_28 * 4;
        do {
          iVar8 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0046b470
                            (DAT_005f2afc,*(SMRGLPrimitivePoly **)((int)aiStack_bc + iVar6));
          iVar6 = iVar6 + 4;
          iStack_44 = iStack_44 + iVar8;
        } while (iVar6 < iVar11);
      }
      if (g_CGamePtr->debug_toggle_flag != 0) {
        puVar10 = (uint *)(in_stack_00000010 * 0x3000 + 0x241351c);
        iVar6 = 0;
        do {
          iVar8 = iVar6 + 4;
          puVar12 = *(uint **)(&DAT_01c60dac + iVar6);
          puVar13 = puVar10;
          for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
            puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
          }
          for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
            *(byte *)puVar13 = *(byte *)puVar12;
            puVar12 = (uint *)((int)puVar12 + (uint)bVar14 * -2 + 1);
            puVar13 = (uint *)((int)puVar13 + (uint)bVar14 * -2 + 1);
          }
          *(uint **)(&DAT_01c60dac + iVar6) = puVar10;
          puVar10 = puVar10 + 0x40;
          iVar6 = iVar8;
        } while (iVar8 != 0xc0);
        iVar6 = 0;
        if (0 < iStack_28) {
          do {
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
                      (DAT_005f2afc,in_stack_0000000c);
            iVar6 = iVar6 + 1;
            in_stack_0000000c = (SMRGLPrimitivePoly *)(in_stack_0000000c->vertices + 4);
          } while (iVar6 < iStack_28);
        }
      }
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
      return (float)iStack_44 * fStack_e8;
    }
  }
  return 0.0;
}
