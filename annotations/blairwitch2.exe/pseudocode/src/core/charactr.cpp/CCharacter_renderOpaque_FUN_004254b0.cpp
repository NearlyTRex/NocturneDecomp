// Name: core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004259f2]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter *this_ptr)

{
  SRenderVertex *pSVar1;
  int iVar2;
  CVector3i *input;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_104c [987];
  CBoundingBox3D *this_ptr_00;
  int in_stack_ffffff2c;
  CVector3i CStack_a0;
  CVector3i CStack_94;
  CVector3i CStack_88;
  CVector3i CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [5];
  CVector3i CStack_4c;
  CVector3i CStack_40;
  CVector3i aCStack_34 [2];
  int iStack_1c;
  SFollowSlotStruct *pSStack_18;
  SFollowSlotStruct *pSStack_14;
  
  bVar6 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar2 == 0) {
    this_ptr->was_rendered_opaque = 0;
  }
  if (this_ptr->render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    this_ptr_00 = (CBoundingBox3D *)&stack0xffffff30;
    puVar3 = (uint *)&stack0xffffff48;
    puVar5 = (uint *)&stack0xffffff28;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iStack_1c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(this_ptr_00,in_stack_ffffff2c);
    if (iStack_1c != 0) {
      this_ptr->was_rendered_opaque = 1;
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
      iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                        (g_CDemonRenderer_PTR_0060b280);
      if ((iVar2 == 0) && (g_CGameHookPtr->debug_follow_slot_display != 0)) {
        afStack_60[2] = 0.0;
        afStack_60[3] = 0.0;
        afStack_60[4] = 0.0;
        pSStack_14 = core_muzzle_cpp_SFollowFormation_getSlots_FUN_0059e0f0
                               (&this_ptr->follow_formation);
        pSStack_18 = pSStack_14;
        for (; (pSStack_14 != (SFollowSlotStruct *)0x0 &&
               (pSStack_14->follower != (CCharacter *)0x0)); pSStack_14 = pSStack_14->next) {
          pfVar4 = (float *)((int)pSStack_14 + (uint)bVar6 * -8 + 0xc);
          fStack_64 = (pSStack_14->offset).x;
          afStack_60[(uint)bVar6 * -2] = *pfVar4;
          afStack_60[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
          afStack_60[0] = 0.0;
          aCStack_34[0].x = (int)ROUND(afStack_60[2] * 256.0f);
          aCStack_34[0].y = (int)ROUND(afStack_60[3] * 256.0f);
          aCStack_34[0].z = (int)ROUND(afStack_60[4] * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,aCStack_34)
          ;
          CStack_40.x = (int)ROUND(fStack_64 * 256.0f);
          CStack_40.y = (int)ROUND(afStack_60[0] * 256.0f);
          CStack_40.z = (int)ROUND(afStack_60[1] * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,
                     &CStack_40);
          g_INT_01c35e60 = 1;
          engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,1);
          g_INT_01c35e60 = 2;
          if (pSStack_14 == pSStack_18) {
            g_INT_01c35e60 = 0xfc;
          }
          fVar7 = (float10)fsin((float10)pSStack_14->heading -
                                (float10)pSStack_14->spread_angle * (float10)0.5f);
          fStack_64 = (float)(fVar7 * (float10)pSStack_14->follow_distance);
          fVar7 = (float10)fcos((float10)pSStack_14->heading -
                                (float10)pSStack_14->spread_angle * (float10)0.5f);
          afStack_60[1] = (float)(fVar7 * (float10)pSStack_14->follow_distance);
          CStack_a0.x = (int)ROUND(fStack_64 * 256.0f);
          CStack_a0.y = (int)ROUND(afStack_60[0] * 256.0f);
          CStack_a0.z = (int)ROUND(afStack_60[1] * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,
                     &CStack_a0);
          engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,2);
          fVar7 = (float10)fsin((float10)pSStack_14->spread_angle * (float10)0.5f +
                                (float10)pSStack_14->heading);
          fStack_64 = (float)(fVar7 * (float10)pSStack_14->follow_distance);
          fVar7 = (float10)fcos((float10)pSStack_14->spread_angle * (float10)0.5f +
                                (float10)pSStack_14->heading);
          afStack_60[1] = (float)(fVar7 * (float10)pSStack_14->follow_distance);
          CStack_94.x = (int)ROUND(fStack_64 * 256.0f);
          CStack_94.y = (int)ROUND(afStack_60[0] * 256.0f);
          CStack_94.z = (int)ROUND(afStack_60[1] * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,
                     &CStack_94);
          engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,3);
          if ((CVector3f *)&fStack_64 != &pSStack_14->offset) {
            fStack_64 = (pSStack_14->offset).x;
            afStack_60[0] = (pSStack_14->offset).y;
            afStack_60[1] = (pSStack_14->offset).z;
          }
          iVar2 = 0;
          do {
            fStack_6c = 0.0;
            fVar7 = (float10)fsin((float10)iVar2 * (float10)0.3141593f);
            fVar8 = (float10)fcos((float10)iVar2 * (float10)0.3141593f);
            fStack_70 = (float)(fVar7 * (float10)pSStack_14->follower_radius + (float10)fStack_64);
            fStack_68 = (float)(fVar8 * (float10)pSStack_14->follower_radius +
                               (float10)afStack_60[1]);
            if (iVar2 == 0) {
              CStack_88.x = (int)ROUND(fStack_70 * 256.0f);
              CStack_88.y = (int)ROUND(256.0f * 0.0);
              CStack_88.z = (int)ROUND(fStack_68 * 256.0f);
              input = &CStack_88;
            }
            else {
              CStack_4c.x = (int)ROUND(fStack_70 * 256.0f);
              CStack_4c.y = (int)ROUND(256.0f * 0.0);
              CStack_4c.z = (int)ROUND(fStack_68 * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                        (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,
                         &CStack_4c);
              g_INT_01c35e60 = 4;
              engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,1);
              CStack_7c.x = (int)ROUND(fStack_70 * 256.0f);
              CStack_7c.y = (int)ROUND(fStack_6c * 256.0f);
              CStack_7c.z = (int)ROUND(fStack_68 * 256.0f);
              input = &CStack_7c;
            }
            engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                      (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,input);
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x15);
          pSVar1 = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
          if ((int)(pSVar1[1].projected_vertex.screen_x & -0x80000000) == 0) {
            engine_2d_c_drawText_FUN_00401fe0
                      ((char *)pSStack_14->follower,pSVar1[1].projected_vertex.screen_x >> 0x10,
                       pSVar1[1].projected_vertex.screen_y >> 0x10);
          }
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
      if ((g_RenderMotionDebug != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                            (g_CDemonRenderer_PTR_0060b280), iVar2 == 0)) {
        core_motion_cpp_CMotionController_render_FUN_005042e0
                  (&(this_ptr->model).base,&this_ptr->base);
        (*((this_ptr->base).vtable._ub)->renderTargetPoints)(&this_ptr->base);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return (int)pSStack_18;
  }
  return 0;
}
