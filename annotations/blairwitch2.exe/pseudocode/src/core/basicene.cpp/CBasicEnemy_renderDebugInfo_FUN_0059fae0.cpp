// Name: core_basicene.cpp_CBasicEnemy_renderDebugInfo_FUN_0059fae0
// Address: 0059fae0
// Address Range: [[0059fae0, 0059fc02]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_renderDebugInfo_FUN_0059fae0(CBasicEnemy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_basicene_cpp_CBasicEnemy_renderDebugInfo_FUN_0059fae0(CBasicEnemy *this_ptr)

{
  SRenderVertex *pSVar1;
  byte bVar2;
  float afStackY_1010 [1008];
  CVector3i local_34;
  CVector3f local_28;
  float local_1c;
  float local_18 [2];
  
  bVar2 = 0;
  if (this_ptr->head_bone == -1) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
  core_xform_cpp_getTranslation_FUN_00592720
            ((this_ptr->base).base.model.bone_transform.bone_model_matrices + this_ptr->head_bone,
             &local_28);
  local_1c = local_28.x;
  local_18[(uint)bVar2 * -2] = *(float *)((int)&local_28 + (uint)bVar2 * -8 + 4);
  local_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  local_18[0] = local_18[0] + 1.0;
  local_34.x = (int)ROUND(local_1c * 256.0f);
  local_34.y = (int)ROUND(local_18[0] * 256.0f);
  local_34.z = (int)ROUND(local_18[1] * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&local_34);
  pSVar1 = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
  if ((int)((pSVar1->projected_vertex).screen_x & -0x80000000) == 0) {
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
              (&(this_ptr->base).base.model.base);
    core_muzzle_cpp_SStateMachine_getStateName_FUN_0059db70(&this_ptr->state_machine);
    _sprintf(g_CHAR_ARRAY_02668360,"(%s)\n%s:[%s] (%0.2f)");
    engine_2d_c_drawText_FUN_00401fe0
              (g_CHAR_ARRAY_02668360,(pSVar1->projected_vertex).screen_x >> 0x10,
               (pSVar1->projected_vertex).screen_y >> 0x10);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return;
}
