// Name: core_chain.cpp_FUN_0042c4c0
// Address: 0042c4c0
// Address Range: [[0042c4c0, 0042ca80]]
// Convention: unknown
// Signature: undefined4 core_chain_cpp_FUN_0042c4c0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_chain_cpp_FUN_0042c4c0(CDemonActor *param_1)

{
  int *piVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  int *piVar4;
  UOrientationVector *pUVar5;
  SMRGLHeaderPrimitive SStack_b8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  CBoundingBox3D local_90;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  CVector3i CStack_30;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_90);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    param_1[4].location.area_id = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    if (param_1[4].location.area_id != 0) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (DAT_005ae704,(SMRGLTextureBasic *)(param_1[1].actor_name + 0x14));
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
      SStack_b8.base.count = 4;
      SStack_b8.surface_normal.D.i = 0;
      SStack_b8.surface_normal.C.i = 0;
      SStack_b8.surface_normal.B.i = 0;
      SStack_b8.surface_normal.A.i = 0;
      uStack_a0 = 0;
      uStack_9c = 1;
      uStack_98 = 2;
      uStack_94 = 3;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
      pUVar5 = &param_1[1].previous_transform_state.orientation;
      piVar4 = (int *)(param_1[2].actor_name + 8);
      for (iVar3 = 0; iVar3 < *(int *)param_1[1].actor_name + -1; iVar3 = iVar3 + 1) {
        CStack_3c.x = (int)ROUND((pUVar5->vec).x * _DAT_0059b220);
        CStack_3c.y = (int)ROUND((pUVar5->vec).y * _DAT_0059b220);
        CStack_3c.z = (int)ROUND((pUVar5->vec).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_3c);
        CStack_78.x = (int)ROUND((pUVar5->vec).x * _DAT_0059b220);
        CStack_78.y = (int)ROUND((pUVar5->vec).y * _DAT_0059b220);
        CStack_78.z = (int)ROUND((pUVar5->vec).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_78);
        CStack_48.x = (int)ROUND((float)*piVar4 * _DAT_0059b220);
        CStack_48.y = (int)ROUND((float)piVar4[1] * _DAT_0059b220);
        CStack_48.z = (int)ROUND((float)piVar4[2] * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&CStack_48);
        CStack_18.x = (int)ROUND((float)*piVar4 * _DAT_0059b220);
        CStack_18.y = (int)ROUND((float)piVar4[1] * _DAT_0059b220);
        CStack_18.z = (int)ROUND((float)piVar4[2] * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&CStack_18);
        pCVar2 = DAT_005ae704;
        piVar1 = &(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_y;
        *piVar1 = *piVar1 + -0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + 0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + 0x40;
        piVar1 = &pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_y;
        *piVar1 = *piVar1 + -0x40;
        (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr->u = 0x80000;
        pCVar2->vertex_buffer_ptr->v = 0x80000;
        pCVar2->vertex_buffer_ptr[1].u = 0x80000;
        pCVar2->vertex_buffer_ptr[1].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].v = 0x80000;
        CStack_6c.x = (int)ROUND((pUVar5->vec).x * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((pUVar5->vec).y * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((pUVar5->vec).z * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (0x01E57284,&CStack_6c,(CVector3i *)0x0,0,2);
        CStack_6c.x = (int)ROUND((float)*piVar4 * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((float)piVar4[1] * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((float)piVar4[2] * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (0x01E57284,&CStack_6c,(CVector3i *)0x0,2,2);
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,&SStack_b8);
        CStack_30.x = (int)ROUND((pUVar5->vec).x * _DAT_0059b220);
        CStack_30.y = (int)ROUND((pUVar5->vec).y * _DAT_0059b220);
        CStack_30.z = (int)ROUND((pUVar5->vec).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_30);
        CStack_60.x = (int)ROUND((pUVar5->vec).x * _DAT_0059b220);
        CStack_60.y = (int)ROUND((pUVar5->vec).y * _DAT_0059b220);
        CStack_60.z = (int)ROUND((pUVar5->vec).z * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_60);
        CStack_54.x = (int)ROUND((float)*piVar4 * _DAT_0059b220);
        CStack_54.y = (int)ROUND((float)piVar4[1] * _DAT_0059b220);
        CStack_54.z = (int)ROUND((float)piVar4[2] * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr[2].projected_vertex,&CStack_54);
        CStack_24.x = (int)ROUND((float)*piVar4 * _DAT_0059b220);
        CStack_24.y = (int)ROUND((float)piVar4[1] * _DAT_0059b220);
        CStack_24.z = (int)ROUND((float)piVar4[2] * _DAT_0059b220);
        engine_special_cpp_transformPoint_FUN_00530a25
                  (&DAT_005ae704->vertex_buffer_ptr[3].projected_vertex,&CStack_24);
        pCVar2 = DAT_005ae704;
        (DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x =
             (DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + -0x40;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[1].projected_vertex.transformed_x + 0x40;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[2].projected_vertex.transformed_x + 0x40;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_x =
             pCVar2->vertex_buffer_ptr[3].projected_vertex.transformed_x + -0x40;
        (pCVar2->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
        pCVar2->vertex_buffer_ptr->u = 0x80000;
        pCVar2->vertex_buffer_ptr->v = 0x80000;
        pCVar2->vertex_buffer_ptr[1].u = 0x80000;
        pCVar2->vertex_buffer_ptr[1].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[2].v = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].u = 0xf80000;
        pCVar2->vertex_buffer_ptr[3].v = 0x80000;
        CStack_6c.x = (int)ROUND((pUVar5->vec).x * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((pUVar5->vec).y * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((pUVar5->vec).z * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (0x01E57284,&CStack_6c,(CVector3i *)0x0,0,2);
        CStack_6c.x = (int)ROUND((float)*piVar4 * _DAT_0059b220);
        CStack_6c.y = (int)ROUND((float)piVar4[1] * _DAT_0059b220);
        CStack_6c.z = (int)ROUND((float)piVar4[2] * _DAT_0059b220);
        core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
                  (0x01E57284,&CStack_6c,(CVector3i *)0x0,2,2);
        pUVar5 = pUVar5 + 3;
        piVar4 = piVar4 + 9;
        engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,&SStack_b8);
      }
      return 1;
    }
  }
  return 0;
}
