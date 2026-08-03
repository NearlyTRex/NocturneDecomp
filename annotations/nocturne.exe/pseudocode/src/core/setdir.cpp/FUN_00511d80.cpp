// Name: core_setdir.cpp_FUN_00511d80
// Address: 00511d80
// Address Range: [[00511d80, 00512596]]
// Convention: unknown
// Signature: float core_setdir_cpp_FUN_00511d80(CDemonActor *param_1,CVector3i *param_2,SMRGLPrimitivePoly *param_3,int param_4,C3DSCamera *param_5,float param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_setdir_cpp_FUN_00511d80(CDemonActor *param_1,CVector3i *param_2,SMRGLPrimitivePoly *param_3,int param_4,C3DSCamera *param_5,float param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  SMRGLPrimitivePoly *pSVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  SProjectedVertex *point;
  byte *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  byte bVar15;
  float local_d8;
  SMRGLHeaderPrimitive local_d4;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int aiStack_ac [6];
  CVector3f local_94;
  CVector3f local_88;
  CVector3i local_7c [3];
  CBoundingBox3D *local_58;
  uint local_54;
  uint *local_4c;
  float local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  CVector3f *local_34;
  int local_30;
  CBoundingBox3D *local_2c;
  int local_28;
  int local_24;
  CDemonActor *local_20;
  int local_1c;
  uint local_18;
  
  bVar15 = 0;
  if (param_5->enabled != 0) {
    fVar2 = (param_5->position).x - (param_1->location).position.x;
    fVar4 = (param_5->position).y - (param_1->location).position.y;
    fVar3 = (param_5->position).z - (param_1->location).position.z;
    if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= 200.0f * 200.0f) {
      iVar6 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
                        (param_5,&(param_1->location).position,param_6);
      if (iVar6 == 0) {
        return 0.0;
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
                (DAT_005ae704,&param_5->position);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
                (DAT_005ae704,param_5->projection_scale);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
                (DAT_005ae704,&param_5->orientation);
      local_38 = 0x800000ff;
      local_44 = 0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,&(param_1->location).position);
      local_94.x = (param_1->orient).vec.x;
      local_94.z = (param_1->orient).vec.z;
      local_94.y = (param_5->orientation).y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,&local_94,(CVector3f *)0x0);
      iVar6 = 0;
      do {
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  ((SProjectedVertex *)
                   ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + iVar6)
                   ,param_2);
        iVar10 = iVar6 + 0x30;
        param_2 = param_2 + 1;
        uVar13 = *(uint *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x +
                          iVar6);
        local_38 = local_38 & uVar13;
        local_44 = local_44 | uVar13;
        iVar6 = iVar10;
      } while (iVar10 != 0x180);
      if (((local_38 & 0x80000000) != 0) && ((char)local_38 != '\0')) {
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
        return 0.0;
      }
      iVar6 = 0;
      local_24 = 0;
      pSVar7 = param_3;
      do {
        *(SMRGLPrimitivePoly **)((int)aiStack_ac + iVar6) = pSVar7;
        iVar6 = iVar6 + 4;
        local_24 = local_24 + 1;
        pSVar7 = (SMRGLPrimitivePoly *)(pSVar7->vertices + 4);
      } while (pSVar7 != (SMRGLPrimitivePoly *)(param_3[3].vertices + 4));
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      local_1c = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + local_1c)
        ;
        iVar6 = point->transformed_z;
        if (0 < iVar6) {
          iVar10 = iVar6 + 0x80;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar10) / (longlong)iVar6);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar10) /
                    (longlong)point->transformed_z);
          point->transformed_z = iVar10;
          engine_matrix_c_projectTransformedPoint_FUN_004cd260(point);
        }
        local_1c = local_1c + 0x30;
      } while (local_1c != 0x180);
      iVar6 = 0;
      local_d8 = 1.0;
      do {
        if ((*(byte *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x +
                      iVar6 + 3) & 0x80) != 0) {
          dVar5 = _DAT_00590bcd;
          if (0 < *(int *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_z +
                          iVar6)) {
            dVar5 = _DAT_00590bc5;
          }
          local_d8 = local_d8 * (float)dVar5;
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != 0x180);
      local_28 = 0;
      local_3c = 0;
      local_1c = 0x180;
      if (0 < _DAT_026639ec) {
        local_48 = 100.0f * 100.0f;
        local_30 = 0;
        local_2c = g_CBoundingBox3D_ARRAY_02665930;
        local_4c = (uint *)(&DAT_020875f8 + param_4 * 0x3000);
        local_34 = &param_5->position;
        do {
          local_20 = *(CDemonActor **)(&DAT_026639f0 + local_30);
          fVar2 = (local_20->location).position.x - local_34->x;
          fVar4 = (local_20->location).position.y - local_34->y;
          fVar3 = (local_20->location).position.z - local_34->z;
          if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= local_48) {
            core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(local_20);
            local_54 = 0x800000ff;
            local_18 = 0;
            uVar13 = 0;
            local_58 = local_2c;
            iVar6 = 0x180;
            do {
              core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(local_58,&local_88,uVar13);
              local_7c[0].x = (int)ROUND(local_88.x * _DAT_005a1a70);
              local_7c[0].y = (int)ROUND(local_88.y * _DAT_005a1a70);
              local_7c[0].z = (int)ROUND(local_88.z * _DAT_005a1a70);
              engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                        ((SProjectedVertex *)
                         ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x +
                         iVar6),local_7c);
              uVar13 = uVar13 + 1;
              uVar1 = *(uint *)((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).screen_x +
                               iVar6);
              local_54 = local_54 & uVar1;
              local_18 = local_18 | uVar1;
              iVar6 = iVar6 + 0x30;
            } while ((int)uVar13 < 8);
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(local_20);
            if (((local_54 & 0x80000000) == 0) || ((char)local_54 == '\0')) {
              if (local_3c == 0) {
                local_3c = 1;
                puVar9 = local_4c;
                puVar12 = (uint *)&DAT_020845f4;
                for (iVar6 = 0xc00; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar12 = *puVar9;
                  puVar9 = puVar9 + (uint)bVar15 * -2 + 1;
                  puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar12 = *(byte *)puVar9;
                  puVar9 = (uint *)((int)puVar9 + (uint)bVar15 * -2 + 1);
                  puVar12 = (uint *)((int)puVar12 + (uint)bVar15 * -2 + 1);
                }
                puVar11 = &DAT_020845f4;
                iVar6 = 0;
                do {
                  *(byte **)(&DAT_01bd4260 + iVar6) = puVar11;
                  iVar6 = iVar6 + 4;
                  puVar11 = puVar11 + 0x100;
                } while (iVar6 != 0xc0);
                engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
              }
              local_d4.base.count = 4;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                        (DAT_005ae704,(uint)((local_18 & 0x80000000) != 0));
              local_b4 = 0xe;
              local_bc = 8;
              local_b8 = 0xc;
              local_b0 = 10;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,&local_d4);
              local_b0 = 0xd;
              local_bc = 9;
              local_b8 = 0xb;
              local_b4 = 0xf;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,&local_d4);
              local_bc = 8;
              local_b8 = 9;
              local_b4 = 0xd;
              local_b0 = 0xc;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,&local_d4);
              local_bc = 10;
              local_b8 = 0xe;
              local_b4 = 0xf;
              local_b0 = 0xb;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,&local_d4);
              local_bc = 8;
              local_b4 = 0xb;
              local_b8 = 10;
              local_b0 = 9;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,&local_d4);
              local_b8 = 0xd;
              local_bc = 0xc;
              local_b4 = 0xf;
              local_b0 = 0xe;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,&local_d4);
            }
          }
          local_30 = local_30 + 4;
          local_2c = local_2c + 1;
          local_28 = local_28 + 1;
        } while (local_28 < _DAT_026639ec);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
      if (local_3c == 0) {
        puVar11 = &DAT_020875f8 + param_4 * 0x3000;
        iVar6 = 0;
        do {
          *(byte **)(&DAT_01bd4260 + iVar6) = puVar11;
          iVar6 = iVar6 + 4;
          puVar11 = puVar11 + 0x100;
        } while (iVar6 != 0xc0);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                (DAT_005ae704,(uint)((local_44 & 0x80000000) != 0));
      iVar6 = 0;
      local_40 = 0;
      if (0 < local_24) {
        iVar10 = local_24 * 4;
        do {
          iVar8 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
                            (DAT_005ae704,*(SMRGLPrimitivePoly **)((int)aiStack_ac + iVar6));
          iVar6 = iVar6 + 4;
          local_40 = local_40 + iVar8;
        } while (iVar6 < iVar10);
      }
      if (g_CGame_PTR_005b9354->debug_toggle_flag != 0) {
        puVar9 = (uint *)(param_4 * 0x3000 + 0x23755f8);
        iVar6 = 0;
        do {
          iVar8 = iVar6 + 4;
          puVar12 = *(uint **)(&DAT_01bd4260 + iVar6);
          puVar14 = puVar9;
          for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
            puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
          }
          for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
            *(byte *)puVar14 = *(byte *)puVar12;
            puVar12 = (uint *)((int)puVar12 + (uint)bVar15 * -2 + 1);
            puVar14 = (uint *)((int)puVar14 + (uint)bVar15 * -2 + 1);
          }
          *(uint **)(&DAT_01bd4260 + iVar6) = puVar9;
          puVar9 = puVar9 + 0x40;
          iVar6 = iVar8;
        } while (iVar8 != 0xc0);
        iVar6 = 0;
        if (0 < local_24) {
          do {
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                      (DAT_005ae704,param_3);
            iVar6 = iVar6 + 1;
            param_3 = (SMRGLPrimitivePoly *)(param_3->vertices + 4);
          } while (iVar6 < local_24);
        }
      }
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
      return (float)local_40 * local_d8;
    }
  }
  return 0.0;
}
