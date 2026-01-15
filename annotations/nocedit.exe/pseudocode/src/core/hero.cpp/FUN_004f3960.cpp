// Name: core_hero.cpp_FUN_004f3960
// Address: 004f3960
// Address Range: [[004f3960, 004f3ae7]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3960()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f3960(uint param_1, uint param_2)
    */

CDemonActor * core_hero_cpp_FUN_004f3960(void)

{
  CDemonActor *actor_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_stack_00000004;
  float *in_stack_00000008;
  SCollisionInfo *in_stack_ffffff58;
  CDemonActor *local_1c;
  
  *in_stack_00000008 = 9999.9;
  iVar6 = 0;
  local_1c = (CDemonActor *)0x0;
  for (iVar7 = 0; iVar7 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c); iVar7 = iVar7 + 1) {
    actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar6 + 8000);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CVehicleClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CMobsterClassInfo.name_hash);
      if ((pCVar4 == (CDemonActor *)0x0) || (*(int *)(pCVar4[0x8e].actor_name + 0x10) == 0)) {
        iVar5 = (*actor_ptr->vtable[1].hasCollision)(actor_ptr,in_stack_ffffff58);
        if (iVar5 == 0) {
          iVar5 = (*actor_ptr->vtable->shouldIgnoreForTargeting)(actor_ptr);
          if (iVar5 == 0) {
            crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                      (&stack0xffffff58,10,&g_CVectorTypeInfo);
            iVar5 = (*actor_ptr->vtable->getTargetPoints)(actor_ptr,(CVector3f *)&stack0xffffff58);
            if (0 < iVar5) {
              fVar1 = *(float *)(in_stack_00000004 + 0x20) - (actor_ptr->location).position.x;
              fVar2 = (*(float *)(in_stack_00000004 + 0x24) - (actor_ptr->location).position.y) *
                      (float)2;
              fVar3 = *(float *)(in_stack_00000004 + 0x28) - (actor_ptr->location).position.z;
              fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
              if (fVar1 < *in_stack_00000008) {
                *in_stack_00000008 = fVar1;
                local_1c = actor_ptr;
              }
            }
          }
        }
      }
    }
    iVar6 = iVar6 + 4;
  }
  if (local_1c == (CDemonActor *)0x0) {
    return (CDemonActor *)0x0;
  }
  *in_stack_00000008 = SQRT(*in_stack_00000008);
  return local_1c;
}
