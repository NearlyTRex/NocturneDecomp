// Name: core_lightgun.cpp_CLightGun_canSeeTarget_FUN_00505b70
// Address: 00505b70
// Address Range: [[00505b70, 00505c6e]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_canSeeTarget_FUN_00505b70(CLightGun *this_ptr,CDemonActor *target)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_canSeeTarget_FUN_00505b70(CLightGun *this_ptr,CDemonActor *target)

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
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  pCVar1 = (*((target->vtable)._ub)->getBoundingBox)(target,&CStack_4c);
  fStack_1c = (pCVar1->min).x + (pCVar1->max).x;
  fStack_18 = (pCVar1->min).y + (pCVar1->max).y;
  CStack_34.x = fStack_1c * 0.5f;
  fStack_14 = (pCVar1->min).z + (pCVar1->max).z;
  CStack_34.y = fStack_18 * 0.5f;
  CStack_34.z = fStack_14 * 0.5f;
  iVar4 = 0;
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(target,&CStack_28,&CStack_34);
  do {
    core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
              (g_CDemonSetPtr,(CVector3f *)this_ptr,&CStack_28);
    actor_ptr = g_CDemonSetPtr->collision_actor;
    if (actor_ptr == (CDemonActor *)0x0) break;
    if (target == actor_ptr) {
      iVar4 = 1;
      break;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrigger || CGlass");
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
  } while (iVar3 < 3);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  return iVar4;
}
