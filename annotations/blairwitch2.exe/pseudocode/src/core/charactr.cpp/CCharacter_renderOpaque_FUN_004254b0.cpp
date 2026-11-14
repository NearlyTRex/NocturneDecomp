// Name: core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004259f2]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  float afStackY_1054 [988];
  CVector3i CStack_a8;
  CVector3i CStack_9c;
  CVector3i CStack_90;
  CVector3i CStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [5];
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i aCStack_3c [2];
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  
  bVar6 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(DAT_0060b280);
  if (iVar2 == 0) {
    this_ptr->was_rendered_opaque = 0;
  }
  if (this_ptr->render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar3 = (uint *)&stack0xffffff40;
    puVar5 = (uint *)&stack0xffffff28;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    iStack_24 = core_box_cpp_FUN_0041a840(&stack0xffffff28);
    if (iStack_24 != 0) {
      this_ptr->was_rendered_opaque = 1;
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00424bd0(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
      iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
      if ((iVar2 == 0) && (g_CGameHookPtr->debug_follow_slot_display != 0)) {
        afStack_68[2] = 0.0;
        afStack_68[3] = 0.0;
        afStack_68[4] = 0.0;
        piStack_1c = (int *)core_muzzle_cpp_FUN_0059e0f0(&this_ptr->follow_formation);
        piStack_20 = piStack_1c;
        for (; (piStack_1c != (int *)0x0 && (*piStack_1c != 0)); piStack_1c = (int *)piStack_1c[0xe]
            ) {
          pfVar4 = (float *)(piStack_1c + (uint)bVar6 * -2 + 3);
          fStack_6c = (float)piStack_1c[2];
          afStack_68[(uint)bVar6 * -2] = *pfVar4;
          afStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = pfVar4[(uint)bVar6 * -2 + 1];
          afStack_68[0] = 0.0;
          aCStack_3c[0].x = (int)ROUND(afStack_68[2] * _DAT_005f4060);
          aCStack_3c[0].y = (int)ROUND(afStack_68[3] * _DAT_005f4060);
          aCStack_3c[0].z = (int)ROUND(afStack_68[4] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,aCStack_3c);
          CStack_48.x = (int)ROUND(fStack_6c * _DAT_005f4060);
          CStack_48.y = (int)ROUND(afStack_68[0] * _DAT_005f4060);
          CStack_48.z = (int)ROUND(afStack_68[1] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_48);
          _DAT_01c35e60 = 1;
          engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,1);
          _DAT_01c35e60 = 2;
          if (piStack_1c == piStack_20) {
            _DAT_01c35e60 = 0xfc;
          }
          fVar7 = (float10)fsin((float10)(float)piStack_1c[8] -
                                (float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26);
          fStack_6c = (float)(fVar7 * (float10)(float)piStack_1c[1]);
          fVar7 = (float10)fcos((float10)(float)piStack_1c[8] -
                                (float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26);
          afStack_68[1] = (float)(fVar7 * (float10)(float)piStack_1c[1]);
          CStack_a8.x = (int)ROUND(fStack_6c * _DAT_005f4060);
          CStack_a8.y = (int)ROUND(afStack_68[0] * _DAT_005f4060);
          CStack_a8.z = (int)ROUND(afStack_68[1] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_a8);
          engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,2);
          fVar7 = (float10)fsin((float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26 +
                                (float10)(float)piStack_1c[8]);
          fStack_6c = (float)(fVar7 * (float10)(float)piStack_1c[1]);
          fVar7 = (float10)fcos((float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26 +
                                (float10)(float)piStack_1c[8]);
          afStack_68[1] = (float)(fVar7 * (float10)(float)piStack_1c[1]);
          CStack_9c.x = (int)ROUND(fStack_6c * _DAT_005f4060);
          CStack_9c.y = (int)ROUND(afStack_68[0] * _DAT_005f4060);
          CStack_9c.z = (int)ROUND(afStack_68[1] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_9c);
          engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,3);
          if (&fStack_6c != (float *)(piStack_1c + 2)) {
            fStack_6c = (float)piStack_1c[2];
            afStack_68[0] = (float)piStack_1c[3];
            afStack_68[1] = (float)piStack_1c[4];
          }
          iVar2 = 0;
          do {
            fStack_74 = 0.0;
            fVar7 = (float10)fsin((float10)iVar2 * (float10)_DAT_005ccd2a);
            fVar8 = (float10)fcos((float10)iVar2 * (float10)_DAT_005ccd2a);
            fStack_78 = (float)(fVar7 * (float10)(float)piStack_1c[10] + (float10)fStack_6c);
            fStack_70 = (float)(fVar8 * (float10)(float)piStack_1c[10] + (float10)afStack_68[1]);
            iStack_18 = iVar2;
            if (iVar2 == 0) {
              CStack_90.x = (int)ROUND(fStack_78 * _DAT_005f4060);
              CStack_90.y = (int)ROUND(_DAT_005f4060 * 0.0);
              CStack_90.z = (int)ROUND(fStack_70 * _DAT_005f4060);
              input = &CStack_90;
            }
            else {
              CStack_54.x = (int)ROUND(fStack_78 * _DAT_005f4060);
              CStack_54.y = (int)ROUND(_DAT_005f4060 * 0.0);
              CStack_54.z = (int)ROUND(fStack_70 * _DAT_005f4060);
              engine_special_cpp_FUN_0055d723
                        (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
              _DAT_01c35e60 = 4;
              engine_3d_c_drawLine2DFromIndices_FUN_00407c40(0,1);
              CStack_84.x = (int)ROUND(fStack_78 * _DAT_005f4060);
              CStack_84.y = (int)ROUND(fStack_74 * _DAT_005f4060);
              CStack_84.z = (int)ROUND(fStack_70 * _DAT_005f4060);
              input = &CStack_84;
            }
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,input);
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x15);
          pSVar1 = DAT_0060b280->vertex_buffer_ptr;
          if ((int)(pSVar1[1].projected_vertex.screen_x & -0x80000000) == 0) {
            engine_2d_c_drawText_FUN_00401fe0
                      ((char *)*piStack_1c,pSVar1[1].projected_vertex.screen_x >> 0x10,
                       pSVar1[1].projected_vertex.screen_y >> 0x10);
          }
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
      if ((_DAT_01d1cdc8 != 0) &&
         (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
         iVar2 == 0)) {
        core_motion_cpp_FUN_005042e0(&(this_ptr->model).base,&this_ptr->base);
        (*((this_ptr->base).vtable._ub)->renderTargetPoints)(&this_ptr->base);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return iStack_24;
  }
  return 0;
}
