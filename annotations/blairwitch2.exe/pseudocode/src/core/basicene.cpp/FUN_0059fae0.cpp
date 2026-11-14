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
  uint uVar2;
  byte bVar3;
  float afStackY_1010 [1008];
  CVector3i local_34;
  float local_28;
  float afStack_24 [4];
  float local_14;
  
  bVar3 = 0;
  if (param_1[0x65].particle_systems[4].owner == (CDemonActor *)0xffffffff) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  core_xform_cpp_FUN_00592720();
  afStack_24[2] = local_28;
  afStack_24[(uint)bVar3 * -2 + 3] = afStack_24[(uint)bVar3 * -2];
  afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_24[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  afStack_24[3] = afStack_24[3] + 1.0;
  local_34.x = (int)ROUND(afStack_24[2] * _DAT_005febc0);
  local_34.y = (int)ROUND(afStack_24[3] * _DAT_005febc0);
  local_34.z = (int)ROUND(local_14 * _DAT_005febc0);
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)*DAT_0060b280,&local_34);
  iVar1 = *DAT_0060b280;
  if ((*(byte *)(iVar1 + 0x13) & 0x80) == 0) {
    uVar2 = core_motion_cpp_FUN_005035c0
                      (param_1 + 1,(double)*(float *)(param_1[0x66].actor_name + 0xc));
    core_muzzle_cpp_FUN_0059db70(&param_1[0x62].particle_systems[2].stop_after_fade,uVar2);
    _sprintf((char *)0x2668360,"@(%s)\n%s:[%s] (%0.2f)" + 1);
    engine_2d_c_drawText_FUN_00401fe0
              ((char *)0x2668360,*(int *)(iVar1 + 0x10) >> 0x10,*(int *)(iVar1 + 0x14) >> 0x10);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return;
}
