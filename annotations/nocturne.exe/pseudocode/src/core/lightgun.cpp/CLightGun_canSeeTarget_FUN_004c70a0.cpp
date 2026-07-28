// Name: core_lightgun.cpp_CLightGun_canSeeTarget_FUN_004c70a0
// Address: 004c70a0
// Address Range: [[004c70a0, 004c719e]]
// Convention: unknown
// Signature: undefined4 core_lightgun_cpp_CLightGun_canSeeTarget_FUN_004c70a0(undefined4 param_1,CDemonActor *param_2)

#include "nocturne.h"

uint core_lightgun_cpp_CLightGun_canSeeTarget_FUN_004c70a0(uint param_1,CDemonActor *param_2)

{
  CDemonActor *actor_ptr;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  CBoundingBox3D CStack_4c;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
  pCVar1 = (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&CStack_4c);
  fStack_1c = (pCVar1->min).x + (pCVar1->max).x;
  fStack_18 = (pCVar1->min).y + (pCVar1->max).y;
  CStack_34.x = fStack_1c * 0.5f;
  fStack_14 = (pCVar1->min).z + (pCVar1->max).z;
  CStack_34.y = fStack_18 * 0.5f;
  CStack_34.z = fStack_14 * 0.5f;
  uVar4 = 0;
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,&CStack_28,&CStack_34);
  do {
    core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00(0x01E57284,param_1,&CStack_28);
    actor_ptr = *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18);
    if (actor_ptr == (CDemonActor *)0x0) break;
    if (param_2 == actor_ptr) {
      uVar4 = 1;
      break;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CTrigger || CGlass");
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
              (0x01E57284,*(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18));
  } while (iVar3 < 3);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
  return uVar4;
}
