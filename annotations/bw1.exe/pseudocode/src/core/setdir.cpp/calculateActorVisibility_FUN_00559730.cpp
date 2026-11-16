// Name: core_setdir.cpp_calculateActorVisibility_FUN_00559730
// Address: 00559730
// Address Range: [[00559730, 00559f75]]
// Convention: __cdecl
// Signature: float __cdecl core_setdir_cpp_calculateActorVisibility_FUN_00559730(CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int thumb_index,C3DSCamera *camera,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_setdir_cpp_calculateActorVisibility_FUN_00559730(CDemonActor *actor,CVector3i *bounding_box_vertices,SMRGLHeaderPrimitive *primitives,int thumb_index,C3DSCamera *camera,float radius)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  SMRGLHeaderPrimitive *pSVar7;
  int iVar8;
  byte *puVar9;
  uint *puVar10;
  int iVar11;
  SProjectedVertex *point;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
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
  if (camera->enabled != 0) {
    fVar2 = (camera->position).x - (actor->location).position.x;
    fVar4 = (camera->position).y - (actor->location).position.y;
    fVar3 = (camera->position).z - (actor->location).position.z;
    if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= _DAT_00605138 * _DAT_00605138) {
      iVar6 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_0055c6f0
                        (camera,&(actor->location).position,radius);
      if (iVar6 == 0) {
        return 0.0;
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
                (DAT_00612560,&camera->position);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0
                (DAT_00612560,camera->projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00483530
                (DAT_00612560,&camera->orientation);
      uStack_3c = 0x800000ff;
      uStack_48 = 0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                (DAT_00612560,&(actor->location).position);
      CStack_a4.x = (actor->orient).vec.x;
      CStack_a4.z = (actor->orient).vec.z;
      CStack_a4.y = (camera->orientation).y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&CStack_a4,(CVector3f *)0x0);
      iVar6 = 0;
      do {
        engine_special_cpp_transformAndProjectPoint_FUN_00580173
                  ((SProjectedVertex *)
                   ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x + iVar6)
                   ,bounding_box_vertices);
        iVar11 = iVar6 + 0x30;
        bounding_box_vertices = bounding_box_vertices + 1;
        uVar1 = *(uint *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x + iVar6
                         );
        uStack_3c = uStack_3c & uVar1;
        uStack_48 = uStack_48 | uVar1;
        iVar6 = iVar11;
      } while (iVar11 != 0x180);
      if (((uStack_3c & 0x80000000) != 0) && ((char)uStack_3c != '\0')) {
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(actor);
        return 0.0;
      }
      iVar6 = 0;
      iStack_28 = 0;
      pSVar7 = primitives;
      do {
        *(SMRGLHeaderPrimitive **)((int)aiStack_bc + iVar6) = pSVar7;
        iVar6 = iVar6 + 4;
        iStack_28 = iStack_28 + 1;
        pSVar7 = pSVar7 + 3;
      } while (pSVar7 != primitives + 0x12);
      iVar6 = 0;
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(actor);
      do {
        point = (SProjectedVertex *)
                ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x + iVar6);
        iVar11 = point->transformed_z;
        if (0 < iVar11) {
          iVar8 = iVar11 + 0x80;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar8) / (longlong)iVar11);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar8) /
                    (longlong)point->transformed_z);
          point->transformed_z = iVar8;
          engine_matrix_c_projectTransformedPoint_FUN_00507b50(point);
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != 0x180);
      iVar6 = 0;
      fStack_e8 = 1.0;
      do {
        if ((*(byte *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x +
                      iVar6 + 3) & 0x80) != 0) {
          dVar5 = _DAT_005f0fd5;
          if (0 < *(int *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_z +
                          iVar6)) {
            dVar5 = _DAT_005f0fcd;
          }
          fStack_e8 = fStack_e8 * (float)dVar5;
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != 0x180);
      iStack_2c = 0;
      iStack_40 = 0;
      if (0 < _DAT_0268ece8) {
        fStack_50 = _DAT_0060513c * _DAT_0060513c;
        iStack_30 = 0;
        puStack_4c = (uint *)(&DAT_020b28f4 + thumb_index * 0x3000);
        pCStack_38 = &camera->position;
        pCStack_34 = (CBoundingBox3D *)0x2690c2c;
        do {
          pCStack_24 = *(CDemonActor **)(&DAT_0268ecec + iStack_30);
          fVar2 = (pCStack_24->location).position.x - pCStack_38->x;
          fVar4 = (pCStack_24->location).position.y - pCStack_38->y;
          fVar3 = (pCStack_24->location).position.z - pCStack_38->z;
          if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= fStack_50) {
            core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(pCStack_24);
            uStack_58 = 0x800000ff;
            uStack_20 = 0;
            pCStack_5c = pCStack_34;
            uStack_1c = 0;
            iStack_18 = 0x180;
            do {
              core_box_cpp_CBoundingBox3D_getCorner_FUN_00420570(pCStack_5c,uStack_1c,&CStack_98);
              fStack_8c = CStack_98.x;
              afStack_88[(uint)bVar14 * -2] = *(float *)((int)&CStack_98 + (uint)bVar14 * -8 + 4);
              iVar6 = iStack_18;
              afStack_88[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                   *(float *)((int)&CStack_98 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              aCStack_80[0].x = (int)ROUND(fStack_8c * _DAT_00605120);
              aCStack_80[0].y = (int)ROUND(afStack_88[0] * _DAT_00605120);
              aCStack_80[0].z = (int)ROUND(afStack_88[1] * _DAT_00605120);
              engine_special_cpp_transformAndProjectPoint_FUN_00580173
                        ((SProjectedVertex *)
                         ((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).transformed_x +
                         iStack_18),aCStack_80);
              iStack_18 = iVar6 + 0x30;
              uVar1 = *(uint *)((int)&(DAT_00612560->vertex_buffer_ptr->projected_vertex).screen_x +
                               iVar6);
              uStack_58 = uStack_58 & uVar1;
              uStack_20 = uStack_20 | uVar1;
              uStack_1c = uStack_1c + 1;
            } while ((int)uStack_1c < 8);
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(pCStack_24);
            if (((uStack_58 & 0x80000000) == 0) || ((char)uStack_58 == '\0')) {
              if (iStack_40 == 0) {
                puVar10 = puStack_4c;
                puVar12 = (uint *)&DAT_020af8ec;
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
                puVar9 = &DAT_020af8ec;
                iStack_40 = 1;
                iVar6 = 0;
                do {
                  *(byte **)(&DAT_01c4480c + iVar6) = puVar9;
                  iVar6 = iVar6 + 4;
                  puVar9 = puVar9 + 0x100;
                } while (iVar6 != 0xc0);
                engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
              }
              SStack_e4.base.count = 4;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
                        (DAT_00612560,(uint)((uStack_20 & 0x80000000) != 0));
              uStack_cc = 8;
              uStack_c8 = 0xc;
              uStack_c4 = 0xe;
              uStack_c0 = 10;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                        (DAT_00612560,&SStack_e4);
              uStack_cc = 9;
              uStack_c8 = 0xb;
              uStack_c4 = 0xf;
              uStack_c0 = 0xd;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                        (DAT_00612560,&SStack_e4);
              uStack_c8 = 9;
              uStack_c4 = 0xd;
              uStack_cc = 8;
              uStack_c0 = 0xc;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                        (DAT_00612560,&SStack_e4);
              uStack_c4 = 0xf;
              uStack_cc = 10;
              uStack_c8 = 0xe;
              uStack_c0 = 0xb;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                        (DAT_00612560,&SStack_e4);
              uStack_cc = 8;
              uStack_c0 = 9;
              uStack_c8 = 10;
              uStack_c4 = 0xb;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                        (DAT_00612560,&SStack_e4);
              uStack_cc = 0xc;
              uStack_c8 = 0xd;
              uStack_c4 = 0xf;
              uStack_c0 = 0xe;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
                        (DAT_00612560,&SStack_e4);
            }
          }
          iStack_30 = iStack_30 + 4;
          pCStack_34 = pCStack_34 + 1;
          iStack_2c = iStack_2c + 1;
        } while (iStack_2c < _DAT_0268ece8);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
      if (iStack_40 == 0) {
        puVar9 = &DAT_020b28f4 + thumb_index * 0x3000;
        iVar6 = 0;
        do {
          *(byte **)(&DAT_01c4480c + iVar6) = puVar9;
          iVar6 = iVar6 + 4;
          puVar9 = puVar9 + 0x100;
        } while (iVar6 != 0xc0);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
                (DAT_00612560,(uint)((uStack_48 & 0x80000000) != 0));
      iVar6 = 0;
      iStack_44 = 0;
      if (0 < iStack_28) {
        iVar11 = iStack_28 * 4;
        do {
          iVar8 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
                            (DAT_00612560,*(SMRGLPrimitivePoly **)((int)aiStack_bc + iVar6));
          iVar6 = iVar6 + 4;
          iStack_44 = iStack_44 + iVar8;
        } while (iVar6 < iVar11);
      }
      if (g_CGamePtr->debug_toggle_flag != 0) {
        puVar10 = (uint *)(thumb_index * 0x3000 + 0x23a08f4);
        iVar6 = 0;
        do {
          iVar8 = iVar6 + 4;
          puVar12 = *(uint **)(&DAT_01c4480c + iVar6);
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
          *(uint **)(&DAT_01c4480c + iVar6) = puVar10;
          puVar10 = puVar10 + 0x40;
          iVar6 = iVar8;
        } while (iVar8 != 0xc0);
        iVar6 = 0;
        if (0 < iStack_28) {
          do {
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
                      (DAT_00612560,(SMRGLPrimitivePoly *)primitives);
            iVar6 = iVar6 + 1;
            primitives = (SMRGLHeaderPrimitive *)(((SMRGLPrimitivePoly *)primitives)->vertices + 4);
          } while (iVar6 < iStack_28);
        }
      }
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
      return (float)iStack_44 * fStack_e8;
    }
  }
  return 0.0;
}
