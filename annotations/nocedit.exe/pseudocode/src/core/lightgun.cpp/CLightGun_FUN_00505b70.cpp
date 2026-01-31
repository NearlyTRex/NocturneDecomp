// Name: core_lightgun.cpp_CLightGun_FUN_00505b70
// Address: 00505b70
// Address Range: [[00505b70, 00505c6e]]
// Convention: __cdecl
// Signature: int __cdecl core_lightgun_cpp_CLightGun_FUN_00505b70(CLightGun *this_ptr)

#include "nocturne.h"

int __cdecl core_lightgun_cpp_CLightGun_FUN_00505b70(CLightGun *this_ptr)

{
  CDemonActor *actor_ptr;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonActor *in_stack_00000008;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  pCVar1 = (*((in_stack_00000008->vtable)._ub)->getBoundingBox)
                     (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffb4);
  fStack_14 = (pCVar1->min).x + (pCVar1->max).x;
  CStack_2c.x = fStack_14 * 0.5f;
  CStack_2c.y = ((pCVar1->min).y + (pCVar1->max).y) * 0.5f;
  CStack_2c.z = ((pCVar1->min).z + (pCVar1->max).z) * 0.5f;
  iVar4 = 0;
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000008,&CStack_20,&CStack_2c)
  ;
  do {
    core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
              (g_CDemonSetPtr,(CVector3f *)this_ptr,&CStack_20);
    actor_ptr = g_CDemonSetPtr->collision_actor;
    if (actor_ptr == (CDemonActor *)0x0) break;
    if (in_stack_00000008 == actor_ptr) {
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
