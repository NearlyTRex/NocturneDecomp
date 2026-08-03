// Name: core_lightgun.cpp_CLightGun_canSeeTarget_FUN_004c70a0
// Address: 004c70a0
// Address Range: [[004c70a0, 004c719e]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_canSeeTarget_FUN_004c70a0(CLightGun *this_ptr,CDemonActor *target)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_canSeeTarget_FUN_004c70a0(CLightGun *this_ptr,CDemonActor *target)

{
  CDemonActor *actor_ptr;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CBoundingBox3D CStack_4c;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(g_CDemonSet_PTR_005be368);
  pCVar1 = (*((target->vtable)._ub)->getBoundingBox)(target,&CStack_4c);
  fStack_1c = (pCVar1->min).x + (pCVar1->max).x;
  fStack_18 = (pCVar1->min).y + (pCVar1->max).y;
  CStack_34.x = fStack_1c * 0.5f;
  fStack_14 = (pCVar1->min).z + (pCVar1->max).z;
  CStack_34.y = fStack_18 * 0.5f;
  CStack_34.z = fStack_14 * 0.5f;
  iVar4 = 0;
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(target,&CStack_28,&CStack_34);
  do {
    core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
              (g_CDemonSet_PTR_005be368,(CVector3f *)this_ptr,&CStack_28);
    actor_ptr = g_CDemonSet_PTR_005be368->collision_actor;
    if (actor_ptr == (CDemonActor *)0x0) break;
    if (target == actor_ptr) {
      iVar4 = 1;
      break;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(actor_ptr,"CTrigger || CGlass");
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
              (g_CDemonSet_PTR_005be368,g_CDemonSet_PTR_005be368->collision_actor);
  } while (iVar3 < 3);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(g_CDemonSet_PTR_005be368);
  return iVar4;
}
