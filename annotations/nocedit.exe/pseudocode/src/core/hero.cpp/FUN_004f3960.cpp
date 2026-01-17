// Name: core_hero.cpp_FUN_004f3960
// Address: 004f3960
// Address Range: [[004f3960, 004f3ae7]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3960()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f3960(uint param_1, uint param_2)
    */

float core_hero_cpp_FUN_004f3960(void)

{
  CDemonActor *actor_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *unaff_retaddr;
  int in_stack_00000004;
  float *in_stack_00000008;
  SCollisionInfo *in_stack_ffffff58;
  CVector3f aCStack_9c [10];
  float local_1c;
  float fStack_18;
  float local_14;
  
  iVar5 = 0;
  *in_stack_00000008 = 9999.9;
  iVar4 = 0;
  local_14 = (float)(in_stack_00000004 + 0x20);
  local_1c = 0.0;
  while( true ) {
    if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) <= iVar5) break;
    actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + 8000);
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CVehicleClassInfo.name_hash);
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CMobsterClassInfo.name_hash);
      if ((pCVar2 == (CDemonActor *)0x0) || (*(int *)(pCVar2[0x8e].actor_name + 0x10) == 0)) {
        iVar3 = (*actor_ptr->vtable[1].hasCollision)(actor_ptr,in_stack_ffffff58);
        if (iVar3 == 0) {
          in_stack_ffffff58 = (SCollisionInfo *)0x4f3a1c;
          iVar3 = (*actor_ptr->vtable->shouldIgnoreForTargeting)(actor_ptr);
          if (iVar3 == 0) {
            crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                      (aCStack_9c,10,&g_CVectorTypeInfo);
            in_stack_ffffff58 = (SCollisionInfo *)0x4f3a48;
            iVar3 = (*actor_ptr->vtable->getTargetPoints)(actor_ptr,aCStack_9c);
            if (0 < iVar3) {
              local_1c = *unaff_retaddr - (actor_ptr->location).position.x;
              fStack_18 = (unaff_retaddr[1] - (actor_ptr->location).position.y) *
                          (float)2;
              local_14 = unaff_retaddr[2] - (actor_ptr->location).position.z;
              fVar1 = local_14 * local_14 + local_1c * local_1c + fStack_18 * fStack_18;
              if (fVar1 < *in_stack_00000008) {
                *in_stack_00000008 = fVar1;
              }
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  }
  if (local_1c == 0.0) {
    return 0.0;
  }
  *in_stack_00000008 = SQRT(*in_stack_00000008);
  return local_1c;
}
