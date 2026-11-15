// Name: core_basicene.cpp_FUN_0059fae0
// Address: 0059fae0
// Address Range: [[0059fae0, 0059fc02]]
// Convention: unknown
// Signature: void core_basicene_cpp_FUN_0059fae0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_basicene_cpp_FUN_0059fae0(CDemonActor *param_1)

{
  int iVar1;
  SMotion *pSVar2;
  byte bVar3;
  float afStackY_1010 [1008];
  double dVar4;
  CVector3i local_34;
  CVector3f local_28;
  float local_1c;
  float local_18 [2];
  
  bVar3 = 0;
  if (param_1[0x65].particle_systems[4].owner == (CDemonActor *)0xffffffff) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  core_xform_cpp_getTranslation_FUN_00592720
            ((CMatrix3x4f *)
             (param_1[6].footstep_sound_code +
             (int)param_1[0x65].particle_systems[4].owner * 0x30 + -0x24),&local_28);
  local_1c = local_28.x;
  local_18[(uint)bVar3 * -2] = *(float *)((int)&local_28 + (uint)bVar3 * -8 + 4);
  local_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  local_18[0] = local_18[0] + 1.0;
  local_34.x = (int)ROUND(local_1c * _DAT_005febc0);
  local_34.y = (int)ROUND(local_18[0] * _DAT_005febc0);
  local_34.z = (int)ROUND(local_18[1] * _DAT_005febc0);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            ((SProjectedVertex *)*DAT_0060b280,&local_34);
  iVar1 = *DAT_0060b280;
  if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
    dVar4 = (double)*(float *)(param_1[0x66].actor_name + 0xc);
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                       ((CMotionController *)(param_1 + 1));
    core_muzzle_cpp_FUN_0059db70(&param_1[0x62].particle_systems[2].stop_after_fade,pSVar2,dVar4);
    _sprintf((char *)0x2668360,"@(%s)\n%s:[%s] (%0.2f)" + 1);
    engine_2d_c_drawText_FUN_00401fe0
              ((char *)0x2668360,*(int *)(iVar1 + 0x10) >> 0x10,*(int *)(iVar1 + 0x14) >> 0x10);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return;
}
