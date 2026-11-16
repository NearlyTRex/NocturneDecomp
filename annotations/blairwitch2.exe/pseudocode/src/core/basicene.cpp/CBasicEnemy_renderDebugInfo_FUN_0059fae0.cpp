// Name: core_basicene.cpp_CBasicEnemy_renderDebugInfo_FUN_0059fae0
// Address: 0059fae0
// Address Range: [[0059fae0, 0059fc02]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_renderDebugInfo_FUN_0059fae0(CBasicEnemy *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_basicene_cpp_CBasicEnemy_renderDebugInfo_FUN_0059fae0(CBasicEnemy *this_ptr)

{
  int iVar1;
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
  local_34.x = (int)ROUND(local_1c * _DAT_005febc0);
  local_34.y = (int)ROUND(local_18[0] * _DAT_005febc0);
  local_34.z = (int)ROUND(local_18[1] * _DAT_005febc0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            ((SProjectedVertex *)*DAT_0060b280,&local_34);
  iVar1 = *DAT_0060b280;
  if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
              (&(this_ptr->base).base.model.base);
    core_muzzle_cpp_SStateMachine_getStateName_FUN_0059db70(&this_ptr->state_machine);
    _sprintf((char *)0x2668360,"@(%s)\n%s:[%s] (%0.2f)" + 1);
    engine_2d_c_drawText_FUN_00401fe0
              ((char *)0x2668360,*(int *)(iVar1 + 0x10) >> 0x10,*(int *)(iVar1 + 0x14) >> 0x10);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
  return;
}
