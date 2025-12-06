// Name: core_lightgun.cpp_FUN_00505b70
// Address: 00505b70
// Address Range: [[00505b70, 00505c6e]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505b70()

#include "nocturne.h"

/* Signature: byte actors_weapon_lightgun.cpp_FUN_00505b70(uint param_1, uint
   param_2) */

uint core_lightgun_cpp_FUN_00505b70(void)

{
  CDemonActor *actor_ptr;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint uVar4;
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_44;
  CVector3f CStack_1c;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  pCVar1 = (*in_stack_00000008->vtable->getBoundingBox)
                     (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffb8);
  CStack_1c.x = ((pCVar1->min).x + (pCVar1->max).x) * 0.5f;
  CStack_1c.y = ((pCVar1->min).y + (pCVar1->max).y) * 0.5f;
  CStack_1c.z = ((pCVar1->min).z + (pCVar1->max).z) * 0.5f;
  uVar4 = 0;
  iVar3 = 0;
  fStack_44 = 7.37983e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,(CVector3f *)&stack0xfffffff0,&CStack_1c);
  do {
    core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
              (g_CDemonSetPtr,in_stack_00000004,(CVector3f *)&stack0xfffffff4);
    actor_ptr = g_CDemonSetPtr->collision_actor;
    if (actor_ptr == (CDemonActor *)0x0) break;
    if (in_stack_00000008 == actor_ptr) {
      uVar4 = 1;
      break;
    }
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CTrigger || CGlass");
    if (iVar2 == 0) break;
    iVar3 = iVar3 + 1;
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,g_CDemonSetPtr->collision_actor);
  } while (iVar3 < 3);
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  return uVar4;
}
