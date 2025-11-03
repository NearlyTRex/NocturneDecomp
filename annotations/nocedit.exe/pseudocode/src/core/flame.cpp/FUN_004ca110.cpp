// Name: core_flame.cpp_FUN_004ca110
// Address: 004ca110
// Address Range: [[004ca110, 004ca626] [004ca64e, 004ca659] [004ca65d, 004ca70b] [004caa15, 004caa6f]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004ca110()
// Cross-references:
//   core_bodypart.cpp_FUN_00419740 (00419740) at 004197dd [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80 (00448e80) at 00448e96 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb550 (004cb550) at 004cb56d [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e9a11 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062a126 = 0.5
//   double DOUBLE_0062a12e = 2
//   double DOUBLE_0062a136 = 0.5
//   undefined4 DAT_0065e010
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067b100
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[1].w_recip
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
//   undefined4 g_RenderVertexBuffer[2].w_recip
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 g_RenderVertexBuffer[3].light
//   undefined4 g_RenderVertexBuffer[3].color
//   undefined4 g_RenderVertexBuffer[3].fog
//   undefined4 g_RenderVertexBuffer[3].w_recip
//   CDemonCamera* g_CurrentSceneCamera
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
//   core_set.cpp_CDemonSet_FUN_0056d140
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_flame.cpp_FUN_004ca110(undefined4 param_1) */

float core_flame_cpp_FUN_004ca110(void)

{
  int iVar1;
  int iVar2;
  CDemonRenderer *this_ptr;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  float fVar4;
  SProjectedVertex *point;
  undefined4 uVar5;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_ESI;
  byte bVar6;
  float10 fVar7;
  CDemonActor *in_stack_00000004;
  int aiStackY_1080 [973];
  SMRGLHeaderPrimitive SStack_13c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  SMRGLHeaderPrimitive SStack_114;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  CBoundingBox3D local_f4;
  CVector3i CStack_d4;
  CVector3i CStack_c8;
  CVector3i CStack_bc;
  CVector3i CStack_b0;
  CVector3i CStack_a4;
  int iStack_98;
  int aiStack_94 [2];
  CVector3i CStack_8c;
  CVector3i CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3i CStack_68;
  int iStack_5c;
  int aiStack_58 [2];
  CVector3i CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3i CStack_38;
  CVector3i CStack_2c;
  CVector3i CStack_20;
  float fStack_14;
  int iStack_10;
  
  bVar6 = 0;
  if (((in_stack_00000004[1].orient_matrix.m[2].z != 0.0) ||
      (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
       (in_stack_00000004 == *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c))) {
      core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
                ((CDemonGlobe *)
                 ((*(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c))[1].actor_name + 0x10));
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    if (in_stack_00000004[1].previous_transform_state.dirty_flags != 0) {
      this_ptr_00 = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&local_f4);
      fVar4 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      in_stack_00000004[1].previous_transform_state.orientation.y = fVar4;
    }
    if ((in_stack_00000004[1].previous_transform_state.orientation.y != 0.0) &&
       (1.0 < SQRT(*(float *)(in_stack_00000004[1].actor_name + 8) *
                   *(float *)(in_stack_00000004[1].actor_name + 8) +
                   *(float *)in_stack_00000004[1].actor_name *
                   *(float *)in_stack_00000004[1].actor_name +
                   *(float *)(in_stack_00000004[1].actor_name + 4) *
                   *(float *)(in_stack_00000004[1].actor_name + 4)) *
              in_stack_00000004[1].orient_matrix.m[2].x)) {
      core_set_cpp_CDemonSet_FUN_0056d140(g_CDemonSetPtr);
    }
    if ((in_stack_00000004[1].previous_transform_state.orientation.y != 0.0) &&
       (in_stack_00000004[1].orient_matrix.m[1].z != 4.2039e-45)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                (g_CDemonRendererPtr,unaff_ESI);
      CStack_50.x = iStack_5c;
      *(int *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) = aiStack_58[(uint)bVar6 * -2];
      *(int *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           aiStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      CStack_50.x = 0;
      CStack_50.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                (g_CDemonRendererPtr,&CStack_50,(CVector3i *)0x0);
      CStack_a4.x = 0;
      CStack_a4.y = 0;
      CStack_a4.z = 0;
      engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                (g_CDemonRendererPtr,unaff_ESI);
      iStack_10 = 1;
      CStack_50.x = iStack_98;
      *(int *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) = aiStack_94[(uint)bVar6 * -2];
      *(int *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           aiStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if ((0x2000 < CStack_50.x) || (CStack_50.x < -0x2000)) {
        iStack_10 = 3;
      }
      iVar3 = 0;
      if (0 < iStack_10) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                    (g_CDemonRendererPtr,&CStack_a4,(CVector3i *)0x0);
          fStack_74 = *(float *)in_stack_00000004[1].actor_name * FLOAT_0062a126;
          fStack_70 = 0.0;
          fStack_6c = 0.0;
          CStack_d4.x = (int)ROUND(fStack_74 * _DAT_0065e010);
          CStack_d4.y = (int)ROUND(_DAT_0065e010 * 0.0);
          CStack_d4.z = (int)ROUND(_DAT_0065e010 * 0.0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_d4);
          fStack_70 = *(float *)(in_stack_00000004[1].actor_name + 4);
          CStack_c8.x = (int)ROUND(fStack_74 * _DAT_0065e010);
          CStack_c8.y = (int)ROUND(fStack_70 * _DAT_0065e010);
          CStack_c8.z = (int)ROUND(fStack_6c * _DAT_0065e010);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_c8);
          fStack_74 = -fStack_74;
          CStack_b0.x = (int)ROUND(fStack_74 * _DAT_0065e010);
          CStack_b0.y = (int)ROUND(fStack_70 * _DAT_0065e010);
          CStack_b0.z = (int)ROUND(fStack_6c * _DAT_0065e010);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_b0);
          fStack_70 = 0.0;
          CStack_2c.x = (int)ROUND(fStack_74 * _DAT_0065e010);
          CStack_2c.y = (int)ROUND(_DAT_0065e010 * 0.0);
          CStack_2c.z = (int)ROUND(fStack_6c * _DAT_0065e010);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_2c);
          (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
          fVar4 = g_PerspectiveReciprocal;
          g_RenderVertexBuffer[0].w_recip = (float)(0xffff - (int)g_PerspectiveReciprocal);
          if (iStack_10 == 3) {
            fVar4 = (float)((0xffff - (int)g_PerspectiveReciprocal) / 2);
            g_RenderVertexBuffer[0].w_recip = fVar4;
          }
          if (in_stack_00000004[1].orient_matrix.m[1].z == 5.60519e-45) {
            fVar4 = (float)((int)g_RenderVertexBuffer[0].w_recip / 4);
            g_RenderVertexBuffer[0].w_recip = fVar4;
          }
          if (in_stack_00000004[1].orient_matrix.m[1].z == 1.4013e-45) {
            fVar4 = (float)((int)g_RenderVertexBuffer[0].w_recip / 2);
            g_RenderVertexBuffer[0].w_recip = fVar4;
          }
          uVar5 = 0xffff;
          g_RenderVertexBuffer[0].light = 9.18341e-41;
          g_RenderVertexBuffer[0].color = 0xffff;
          g_RenderVertexBuffer[0].fog = 9.18341e-41;
          g_RenderVertexBuffer[1].light = 9.18341e-41;
          g_RenderVertexBuffer[1].color = 0xffff;
          g_RenderVertexBuffer[1].fog = 9.18341e-41;
          g_RenderVertexBuffer[2].light = 9.18341e-41;
          g_RenderVertexBuffer[2].color = 0xffff;
          g_RenderVertexBuffer[2].fog = 9.18341e-41;
          g_RenderVertexBuffer[3].light = 9.18341e-41;
          g_RenderVertexBuffer[3].color = 0xffff;
          g_RenderVertexBuffer[3].fog = 9.18341e-41;
          if (in_stack_00000004[1].previous_transform_state.orientation.z == 0.0) {
            g_RenderVertexBuffer[0].u = 7.34684e-40;
            g_RenderVertexBuffer[1].u = 7.34684e-40;
            g_RenderVertexBuffer[2].u = 2.2775203e-38;
            g_RenderVertexBuffer[3].u = 2.2775203e-38;
          }
          else {
            g_RenderVertexBuffer[0].u = 2.2775203e-38;
            uVar5 = 0x80000;
            g_RenderVertexBuffer[1].u = 2.2775203e-38;
            g_RenderVertexBuffer[2].u = 7.34684e-40;
            g_RenderVertexBuffer[3].u = 7.34684e-40;
          }
          g_RenderVertexBuffer[3].v = 2.2775203e-38;
          g_RenderVertexBuffer[2].v = 7.34684e-40;
          g_RenderVertexBuffer[1].v = 7.34684e-40;
          g_RenderVertexBuffer[0].v = 2.2775203e-38;
          fVar7 = (float10)*(float *)(in_stack_00000004[1].actor_name + 0xc);
          g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
          g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
          g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar5,fVar4));
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr,
                     &DAT_0067b100 +
                     (int)in_stack_00000004[1].orient_matrix.m[1].z * 8 + (int)ROUND(fVar7) % 8);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
          SStack_114.base.count = 4;
          SStack_114.surface_normal.D = 0;
          SStack_114.surface_normal.C = 0;
          SStack_114.surface_normal.B = 0;
          SStack_114.surface_normal.A = 0;
          local_f4.min.x = 2.8026e-45;
          uStack_fc = 0;
          uStack_f8 = 1;
          local_f4.min.y = 4.2039e-45;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr,&SStack_114);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar3 = iVar3 + 1;
          CStack_a4.z = CStack_a4.z + 0x2aaa;
        } while (iVar3 < iStack_10);
      }
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    if ((in_stack_00000004[1].orient_matrix.m[1].z == 1.4013e-45) &&
       (fStack_14 = *(float *)(in_stack_00000004[1].actor_name + 4) * (float)DOUBLE_0062a12e,
       in_stack_00000004[1].previous_transform_state.orientation.y != 0.0)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr,(float *)&CStack_80);
      CStack_20.y = (int)(*(float *)(in_stack_00000004[1].actor_name + 4) * (float)DOUBLE_0062a136);
      CStack_20.x = 0;
      CStack_20.z = 0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&CStack_80,&CStack_20);
      fStack_44 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.98,1.02);
      fStack_44 = fStack_44 * fStack_14;
      fStack_3c = 0.0;
      CStack_bc.x = (int)ROUND(fStack_44 * _DAT_0065e010);
      CStack_bc.y = (int)ROUND(fStack_44 * _DAT_0065e010);
      CStack_bc.z = (int)ROUND(_DAT_0065e010 * 0.0);
      fStack_40 = fStack_44;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_bc);
      fStack_44 = -fStack_44;
      CStack_68.x = (int)ROUND(fStack_44 * _DAT_0065e010);
      CStack_68.y = (int)ROUND(fStack_40 * _DAT_0065e010);
      CStack_68.z = (int)ROUND(fStack_3c * _DAT_0065e010);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_68);
      fStack_40 = -fStack_40;
      CStack_8c.x = (int)ROUND(fStack_44 * _DAT_0065e010);
      CStack_8c.y = (int)ROUND(fStack_40 * _DAT_0065e010);
      CStack_8c.z = (int)ROUND(fStack_3c * _DAT_0065e010);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_8c);
      fStack_44 = -fStack_44;
      CStack_38.x = (int)ROUND(fStack_44 * _DAT_0065e010);
      CStack_38.y = (int)ROUND(fStack_40 * _DAT_0065e010);
      CStack_38.z = (int)ROUND(fStack_3c * _DAT_0065e010);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_38);
      iVar3 = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                iVar3);
        iVar2 = point->transformed_z;
        if (0x200 < iVar2) {
          iVar1 = iVar2 + -0x100;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar1) / (longlong)iVar2);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar1) / (longlong)iVar2);
          point->transformed_z = iVar1;
          engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(point);
        }
        this_ptr = g_CDemonRendererPtr;
        iVar3 = iVar3 + 0x30;
      } while (iVar3 != 0xc0);
      g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = 2.29589e-41;
      this_ptr->vertex_buffer_ptr[1].w_recip = 2.29589e-41;
      this_ptr->vertex_buffer_ptr[2].w_recip = 2.29589e-41;
      this_ptr->vertex_buffer_ptr[3].w_recip = 2.29589e-41;
      this_ptr->vertex_buffer_ptr->u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[1].u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[2].u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[3].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
      SStack_13c.base.count = 4;
      SStack_13c.surface_normal.D = 0;
      SStack_13c.surface_normal.C = 0;
      SStack_13c.surface_normal.B = 0;
      SStack_13c.surface_normal.A = 0;
      uStack_124 = 0;
      uStack_11c = 2;
      uStack_118 = 3;
      uStack_120 = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr,&DAT_0067b0c8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr,&SStack_13c,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    return in_stack_00000004[1].previous_transform_state.orientation.y;
  }
  return 0.0;
}


// Assembly code:
// 004ca110: PUSH EBX
//   Label: core_flame.cpp_FUN_004ca110
// 004ca111: PUSH EDI
// 004ca112: PUSH EBP
// 004ca113: SUB ESP,0x138
// 004ca119: MOV EBP,dword ptr [ESP + 0x148]
// 004ca120: CMP dword ptr [EBP + 0x1b4],0x0
// 004ca127: JNZ 0x004ca140
//   XREF to: 004ca140 (CONDITIONAL_JUMP)
// 004ca129: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 004ca12e: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004ca132: JNZ 0x004ca140
//   XREF to: 004ca140 (CONDITIONAL_JUMP)
// 004ca134: XOR EAX,EAX
//   Label: LAB_004ca134
// 004ca136: ADD ESP,0x138
// 004ca13c: POP EBP
// 004ca13d: POP EDI
// 004ca13e: POP EBX
// 004ca13f: RET
// 004ca140: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004ca140
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 004ca146: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004ca147: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004ca14c: ADD ESP,0x4
// 004ca14f: TEST EAX,EAX
// 004ca151: JNZ 0x004ca134
//   XREF to: 004ca134 (CONDITIONAL_JUMP)
// 004ca153: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 004ca158: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004ca15c: JZ 0x004ca174
//   XREF to: 004ca174 (CONDITIONAL_JUMP)
// 004ca15e: MOV EDI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 004ca161: CMP EBP,EDI
// 004ca163: JNZ 0x004ca174
//   XREF to: 004ca174 (CONDITIONAL_JUMP)
// 004ca165: LEA EAX,[EDI + 0x168]
// 004ca16b: PUSH EAX
// 004ca16c: CALL core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
//   XREF to: 004715e0 (UNCONDITIONAL_CALL)
// 004ca171: ADD ESP,0x4
// 004ca174: PUSH EBP
//   Label: LAB_004ca174
// 004ca175: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004ca17a: MOV EAX,dword ptr [EBP + 0x298]
// 004ca180: ADD ESP,0x4
// 004ca183: TEST EAX,EAX
// 004ca185: JZ 0x004ca1a8
//   XREF to: 004ca1a8 (CONDITIONAL_JUMP)
// 004ca187: LEA EAX,[ESP + 0x50]
// 004ca18b: PUSH EAX
// 004ca18c: MOV EDX,dword ptr [EBP + 0x154]
// 004ca192: PUSH EBP
// 004ca193: CALL dword ptr [EDX + 0x14]
// 004ca196: ADD ESP,0x8
// 004ca199: PUSH EAX
// 004ca19a: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004ca19f: ADD ESP,0x4
// 004ca1a2: MOV dword ptr [EBP + 0x290],EAX
// 004ca1a8: CMP dword ptr [EBP + 0x290],0x0
//   Label: LAB_004ca1a8
// 004ca1af: JZ 0x004ca1f0
//   XREF to: 004ca1f0 (CONDITIONAL_JUMP)
// 004ca1b1: LEA EAX,[EBP + 0x158]
// 004ca1b7: FLD float ptr [EAX + 0x4]
// 004ca1ba: FMUL ST0
// 004ca1bc: FLD float ptr [EAX]
// 004ca1be: FMUL ST0
// 004ca1c0: FADDP
// 004ca1c2: FLD float ptr [EAX + 0x8]
// 004ca1c5: FMUL ST0
// 004ca1c7: FADDP
// 004ca1c9: FSQRT
// 004ca1cb: FMUL float ptr [EBP + 0x1ac]
// 004ca1d1: FLD1
// 004ca1d3: FCOMPP
// 004ca1d5: FNSTSW AX
// 004ca1d7: SAHF
// 004ca1d8: JNC 0x004ca1f0
//   XREF to: 004ca1f0 (CONDITIONAL_JUMP)
// 004ca1da: LEA EAX,[EBP + 0x168]
// 004ca1e0: PUSH EAX
// 004ca1e1: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004ca1e7: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004ca1e8: CALL core_set.cpp_CDemonSet_FUN_0056d140
//   XREF to: 0056d140 (UNCONDITIONAL_CALL)
// 004ca1ed: ADD ESP,0x8
// 004ca1f0: PUSH ESI
//   Label: LAB_004ca1f0
// 004ca1f1: CMP dword ptr [EBP + 0x290],0x0
// 004ca1f8: JZ 0x004ca65d
//   XREF to: 004ca65d (CONDITIONAL_JUMP)
// 004ca1fe: CMP dword ptr [EBP + 0x1a8],0x3
// 004ca205: JZ 0x004ca65d
//   XREF to: 004ca65d (CONDITIONAL_JUMP)
// 004ca20b: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca211: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004ca212: LEA ESI,[ESP + 0xe8]
// 004ca219: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004ca21e: LEA EDI,[ESP + 0xf4]
// 004ca225: LEA ESI,[ESP + 0xe8]
// 004ca22c: ADD ESP,0x4
// 004ca22f: XOR EAX,EAX
// 004ca231: MOVSD ES:EDI,ESI
// 004ca232: MOVSD ES:EDI,ESI
// 004ca233: MOVSD ES:EDI,ESI
// 004ca234: PUSH EAX
// 004ca235: MOV dword ptr [ESP + 0xf4],EAX
// 004ca23c: MOV dword ptr [ESP + 0xf8],EAX
// 004ca243: LEA EAX,[ESP + 0xf4]
// 004ca24a: PUSH EAX
// 004ca24b: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca251: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ca252: MOV EBX,0x1
// 004ca257: XOR ESI,ESI
// 004ca259: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004ca25e: ADD ESP,0xc
// 004ca261: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca267: MOV dword ptr [ESP + 0x9c],ESI
// 004ca26e: MOV dword ptr [ESP + 0xa0],ESI
// 004ca275: MOV dword ptr [ESP + 0xa4],ESI
// 004ca27c: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ca27d: LEA ESI,[ESP + 0xac]
// 004ca284: LEA EDI,[ESP + 0xf4]
// 004ca28b: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004ca290: LEA ESI,[ESP + 0xac]
// 004ca297: MOV dword ptr [ESP + 0x134],EBX
// 004ca29e: ADD ESP,0x4
// 004ca2a1: MOVSD ES:EDI,ESI
// 004ca2a2: MOVSD ES:EDI,ESI
// 004ca2a3: MOVSD ES:EDI,ESI
// 004ca2a4: MOV ECX,dword ptr [ESP + 0xf0]
// 004ca2ab: CMP ECX,0x2000
// 004ca2b1: JLE 0x004caa26
//   XREF to: 004caa26 (CONDITIONAL_JUMP)
// 004ca2b7: MOV dword ptr [ESP + 0x130],0x3
//   Label: LAB_004ca2b7
// 004ca2c2: MOV EDI,dword ptr [ESP + 0x130]
//   Label: LAB_004ca2c2
// 004ca2c9: XOR ESI,ESI
// 004ca2cb: TEST EDI,EDI
// 004ca2cd: JLE 0x004ca64e
//   XREF to: 004ca64e (CONDITIONAL_JUMP)
// 004ca2d3: LEA EDI,[EBP + 0x20]
// 004ca2d6: PUSH 0x0
//   Label: LAB_004ca2d6
// 004ca2d8: LEA EAX,[ESP + 0xa0]
// 004ca2df: PUSH EAX
// 004ca2e0: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca2e5: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ca2e6: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004ca2eb: FLD float ptr [EBP + 0x158]
// 004ca2f1: FMUL float ptr [0x0062a126]
//   XREF to: 0062a126 (READ)
// 004ca2f7: LEA EBX,[ESP + 0x78]
// 004ca2fb: ADD ESP,0xc
// 004ca2fe: XOR EDX,EDX
// 004ca300: LEA EAX,[ESP + 0xcc]
// 004ca307: MOV dword ptr [ESP + 0xd0],EDX
// 004ca30e: MOV dword ptr [ESP + 0xd4],EDX
// 004ca315: FSTP float ptr [ESP + 0xcc]
// 004ca31c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca322: FLD float ptr [EAX]
// 004ca324: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca32a: FISTP dword ptr [EBX]
// 004ca32c: FLD float ptr [EAX + 0x4]
// 004ca32f: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca335: FISTP dword ptr [EBX + 0x4]
// 004ca338: FLD float ptr [EAX + 0x8]
// 004ca33b: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca341: FISTP dword ptr [EBX + 0x8]
// 004ca344: LEA EAX,[ESP + 0x6c]
// 004ca348: PUSH EAX
// 004ca349: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ca34b: PUSH EAX
// 004ca34c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ca351: ADD ESP,0x8
// 004ca354: MOV EAX,dword ptr [EBP + 0x15c]
// 004ca35a: LEA EBX,[ESP + 0x78]
// 004ca35e: MOV dword ptr [ESP + 0xd0],EAX
// 004ca365: LEA EAX,[ESP + 0xcc]
// 004ca36c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca372: FLD float ptr [EAX]
// 004ca374: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca37a: FISTP dword ptr [EBX]
// 004ca37c: FLD float ptr [EAX + 0x4]
// 004ca37f: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca385: FISTP dword ptr [EBX + 0x4]
// 004ca388: FLD float ptr [EAX + 0x8]
// 004ca38b: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca391: FISTP dword ptr [EBX + 0x8]
// 004ca394: LEA EAX,[ESP + 0x78]
// 004ca398: PUSH EAX
// 004ca399: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ca39b: ADD EAX,0x30
// 004ca39e: PUSH EAX
// 004ca39f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ca3a4: ADD ESP,0x8
// 004ca3a7: MOV AH,byte ptr [ESP + 0xcf]
// 004ca3ae: XOR AH,0x80
// 004ca3b1: LEA EBX,[ESP + 0x90]
// 004ca3b8: MOV byte ptr [ESP + 0xcf],AH
// 004ca3bf: LEA EAX,[ESP + 0xcc]
// 004ca3c6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca3cc: FLD float ptr [EAX]
// 004ca3ce: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca3d4: FISTP dword ptr [EBX]
// 004ca3d6: FLD float ptr [EAX + 0x4]
// 004ca3d9: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca3df: FISTP dword ptr [EBX + 0x4]
// 004ca3e2: FLD float ptr [EAX + 0x8]
// 004ca3e5: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca3eb: FISTP dword ptr [EBX + 0x8]
// 004ca3ee: LEA EAX,[ESP + 0x90]
// 004ca3f5: PUSH EAX
// 004ca3f6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ca3f8: ADD EAX,0x60
// 004ca3fb: PUSH EAX
// 004ca3fc: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ca401: ADD ESP,0x8
// 004ca404: XOR EBX,EBX
// 004ca406: LEA EAX,[ESP + 0xcc]
// 004ca40d: MOV dword ptr [ESP + 0xd0],EBX
// 004ca414: LEA EBX,[ESP + 0x114]
// 004ca41b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca421: FLD float ptr [EAX]
// 004ca423: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca429: FISTP dword ptr [EBX]
// 004ca42b: FLD float ptr [EAX + 0x4]
// 004ca42e: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca434: FISTP dword ptr [EBX + 0x4]
// 004ca437: FLD float ptr [EAX + 0x8]
// 004ca43a: FMUL float ptr [0x0065e010]
//   XREF to: 0065e010 (READ)
// 004ca440: FISTP dword ptr [EBX + 0x8]
// 004ca443: LEA EAX,[ESP + 0x114]
// 004ca44a: PUSH EAX
// 004ca44b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ca44d: ADD EAX,0x90
// 004ca452: PUSH EAX
// 004ca453: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ca458: ADD ESP,0x8
// 004ca45b: PUSH 0x0
// 004ca45d: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 004ca462: PUSH EDI
// 004ca463: MOV EDX,dword ptr [EAX + 0x3c]
// 004ca466: PUSH EAX
// 004ca467: CALL dword ptr [EDX + 0x4]
// 004ca46a: MOV EDX,0xffff
// 004ca46f: ADD ESP,0xc
// 004ca472: MOV EAX,[0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004ca477: MOV ECX,dword ptr [ESP + 0x130]
// 004ca47e: SUB EDX,EAX
// 004ca480: CMP ECX,0x3
// 004ca483: JNZ 0x004ca490
//   XREF to: 004ca490 (CONDITIONAL_JUMP)
// 004ca485: MOV EAX,EDX
// 004ca487: SAR EDX,0x1f
// 004ca48a: SUB EAX,EDX
// 004ca48c: SAR EAX,0x1
// 004ca48e: MOV EDX,EAX
// 004ca490: MOV EBX,dword ptr [EBP + 0x1a8]
//   Label: LAB_004ca490
// 004ca496: CMP EBX,0x4
// 004ca499: JNZ 0x004ca4a4
//   XREF to: 004ca4a4 (CONDITIONAL_JUMP)
// 004ca49b: MOV EAX,EDX
// 004ca49d: SAR EDX,0x1f
// 004ca4a0: IDIV EBX
// 004ca4a2: MOV EDX,EAX
// 004ca4a4: CMP dword ptr [EBP + 0x1a8],0x1
//   Label: LAB_004ca4a4
// 004ca4ab: JNZ 0x004ca4b8
//   XREF to: 004ca4b8 (CONDITIONAL_JUMP)
// 004ca4ad: MOV EAX,EDX
// 004ca4af: SAR EDX,0x1f
// 004ca4b2: SUB EAX,EDX
// 004ca4b4: SAR EAX,0x1
// 004ca4b6: MOV EDX,EAX
// 004ca4b8: MOV dword ptr [0x00688070],EDX
//   Label: LAB_004ca4b8
//   XREF to: 00688070 (WRITE)
// 004ca4be: MOV dword ptr [0x006880a0],EDX
//   XREF to: 006880a0 (WRITE)
// 004ca4c4: MOV dword ptr [0x006880d0],EDX
//   XREF to: 006880d0 (WRITE)
// 004ca4ca: MOV dword ptr [0x00688040],EDX
//   XREF to: 00688040 (WRITE)
// 004ca4d0: MOV EDX,0xffff
// 004ca4d5: MOV dword ptr [0x00688034],EDX
//   XREF to: 00688034 (WRITE)
// 004ca4db: MOV dword ptr [0x00688038],EDX
//   XREF to: 00688038 (WRITE)
// 004ca4e1: MOV dword ptr [0x0068803c],EDX
//   XREF to: 0068803c (WRITE)
// 004ca4e7: MOV dword ptr [0x00688064],EDX
//   XREF to: 00688064 (WRITE)
// 004ca4ed: MOV dword ptr [0x00688068],EDX
//   XREF to: 00688068 (WRITE)
// 004ca4f3: MOV dword ptr [0x0068806c],EDX
//   XREF to: 0068806c (WRITE)
// 004ca4f9: MOV dword ptr [0x00688094],EDX
//   XREF to: 00688094 (WRITE)
// 004ca4ff: MOV dword ptr [0x00688098],EDX
//   XREF to: 00688098 (WRITE)
// 004ca505: MOV dword ptr [0x0068809c],EDX
//   XREF to: 0068809c (WRITE)
// 004ca50b: MOV dword ptr [0x006880c4],EDX
//   XREF to: 006880c4 (WRITE)
// 004ca511: MOV dword ptr [0x006880c8],EDX
//   XREF to: 006880c8 (WRITE)
// 004ca517: MOV dword ptr [0x006880cc],EDX
//   XREF to: 006880cc (WRITE)
// 004ca51d: CMP dword ptr [EBP + 0x294],0x0
// 004ca524: JNZ 0x004caa37
//   XREF to: 004caa37 (CONDITIONAL_JUMP)
// 004ca52a: MOV EBX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004ca52f: MOV ECX,0x80000
// 004ca534: MOV dword ptr [0x00688030],EBX
//   XREF to: 00688030 (WRITE)
// 004ca53a: MOV dword ptr [0x0068805c],ECX
//   XREF to: 0068805c (WRITE)
// 004ca540: MOV dword ptr [0x00688060],ECX
//   XREF to: 00688060 (WRITE)
// 004ca546: MOV dword ptr [0x0068808c],EBX
//   XREF to: 0068808c (WRITE)
// 004ca54c: MOV dword ptr [0x00688090],ECX
//   XREF to: 00688090 (WRITE)
// 004ca552: MOV dword ptr [0x006880bc],EBX
//   XREF to: 006880bc (WRITE)
// 004ca558: MOV dword ptr [0x006880c0],EBX
//   XREF to: 006880c0 (WRITE)
// 004ca55e: MOV dword ptr [0x0068802c],ECX
//   Label: LAB_004ca55e
//   XREF to: 0068802c (WRITE)
// 004ca564: FLD float ptr [EBP + 0x164]
// 004ca56a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004ca56f: FISTP dword ptr [ESP + 0x138]
// 004ca576: MOV EAX,dword ptr [ESP + 0x138]
// 004ca57d: MOV EDX,EAX
// 004ca57f: MOV ECX,0x8
// 004ca584: SAR EDX,0x1f
// 004ca587: IDIV ECX
// 004ca589: IMUL EDX,EDX,0x18
// 004ca58c: IMUL EAX,dword ptr [EBP + 0x1a8],0xc0
// 004ca596: ADD EAX,0x67b100
//   XREF to: 0067b100 (DATA)
// 004ca59b: ADD EDX,EAX
// 004ca59d: PUSH EDX
// 004ca59e: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca5a4: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004ca5a5: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ca5aa: ADD ESP,0x8
// 004ca5ad: PUSH 0x1
// 004ca5af: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca5b4: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ca5b5: MOV EBX,0x1
// 004ca5ba: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004ca5bf: MOV EDX,0x4
// 004ca5c4: MOV EAX,0x2
// 004ca5c9: ADD ESP,0x8
// 004ca5cc: XOR ECX,ECX
// 004ca5ce: MOV dword ptr [ESP + 0x30],EDX
// 004ca5d2: MOV dword ptr [ESP + 0x40],ECX
// 004ca5d6: MOV dword ptr [ESP + 0x3c],ECX
// 004ca5da: MOV dword ptr [ESP + 0x38],ECX
// 004ca5de: MOV dword ptr [ESP + 0x34],ECX
// 004ca5e2: MOV dword ptr [ESP + 0x4c],EAX
// 004ca5e6: LEA EAX,[ESP + 0x2c]
// 004ca5ea: MOV dword ptr [ESP + 0x44],ECX
// 004ca5ee: PUSH EAX
// 004ca5ef: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca5f5: MOV EDX,0x3
// 004ca5fa: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ca5fb: MOV dword ptr [ESP + 0x50],EBX
// 004ca5ff: MOV dword ptr [ESP + 0x58],EDX
// 004ca603: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 004ca608: ADD ESP,0x8
// 004ca60b: PUSH 0x0
// 004ca60d: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca613: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004ca614: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004ca619: ADD ESP,0x8
// 004ca61c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca621: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ca622: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004ca64e: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004ca64e
//   XREF to: 006703ec (READ)
// 004ca654: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004ca655: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004ca65d: PUSH EBP
//   Label: LAB_004ca65d
// 004ca65e: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004ca663: MOV ECX,dword ptr [EBP + 0x1a8]
// 004ca669: ADD ESP,0x4
// 004ca66c: CMP ECX,0x1
// 004ca66f: JNZ 0x004caa15
//   XREF to: 004caa15 (CONDITIONAL_JUMP)
// 004ca675: FLD float ptr [EBP + 0x15c]
// 004ca67b: FMUL double ptr [0x0062a12e]
//   XREF to: 0062a12e (READ)
// 004ca681: MOV EBX,dword ptr [EBP + 0x290]
// 004ca687: FSTP float ptr [ESP + 0x12c]
// 004ca68e: TEST EBX,EBX
// 004ca690: JZ 0x004caa15
//   XREF to: 004caa15 (CONDITIONAL_JUMP)
// 004ca696: LEA EAX,[ESP + 0xc0]
// 004ca69d: PUSH EAX
// 004ca69e: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca6a4: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004ca6a5: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 004ca6aa: FLD float ptr [EBP + 0x15c]
// 004ca6b0: FMUL double ptr [0x0062a136]
//   XREF to: 0062a136 (READ)
// 004ca6b6: ADD ESP,0x8
// 004ca6b9: FSTP float ptr [ESP + 0x138]
// 004ca6c0: MOV EAX,dword ptr [ESP + 0x138]
// 004ca6c7: MOV dword ptr [ESP + 0x124],EAX
// 004ca6ce: LEA EAX,[ESP + 0x120]
// 004ca6d5: PUSH EAX
// 004ca6d6: LEA EAX,[ESP + 0xc4]
// 004ca6dd: PUSH EAX
// 004ca6de: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ca6e4: XOR EDI,EDI
// 004ca6e6: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ca6e7: MOV dword ptr [ESP + 0x12c],EDI
// 004ca6ee: MOV dword ptr [ESP + 0x134],EDI
// 004ca6f5: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004ca6fa: ADD ESP,0xc
// 004ca6fd: PUSH 0x3f828f5c
// 004ca702: PUSH 0x3f7ae148
// 004ca707: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004caa15: MOV EAX,dword ptr [EBP + 0x290]
//   Label: LAB_004caa15
// 004caa1b: POP ESI
// 004caa1c: ADD ESP,0x138
// 004caa22: POP EBP
// 004caa23: POP EDI
// 004caa24: POP EBX
// 004caa25: RET
// 004caa26: CMP ECX,0xffffe000
//   Label: LAB_004caa26
// 004caa2c: JL 0x004ca2b7
//   XREF to: 004ca2b7 (CONDITIONAL_JUMP)
// 004caa32: JMP 0x004ca2c2
//   XREF to: 004ca2c2 (UNCONDITIONAL_JUMP)
// 004caa37: MOV ECX,0xf80000
//   Label: LAB_004caa37
//   XREF to: 00f80000 (DATA)
// 004caa3c: MOV EDX,0x80000
// 004caa41: MOV dword ptr [0x00688030],ECX
//   XREF to: 00688030 (WRITE)
// 004caa47: MOV dword ptr [0x0068805c],ECX
//   XREF to: 0068805c (WRITE)
// 004caa4d: MOV dword ptr [0x00688060],EDX
//   XREF to: 00688060 (WRITE)
// 004caa53: MOV dword ptr [0x0068808c],EDX
//   XREF to: 0068808c (WRITE)
// 004caa59: MOV dword ptr [0x00688090],EDX
//   XREF to: 00688090 (WRITE)
// 004caa5f: MOV dword ptr [0x006880bc],EDX
//   XREF to: 006880bc (WRITE)
// 004caa65: MOV dword ptr [0x006880c0],ECX
//   XREF to: 006880c0 (WRITE)
// 004caa6b: JMP 0x004ca55e
//   XREF to: 004ca55e (UNCONDITIONAL_JUMP)
