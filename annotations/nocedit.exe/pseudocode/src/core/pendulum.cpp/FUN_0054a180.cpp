// Name: core_pendulum.cpp_FUN_0054a180
// Address: 0054a180
// Address Range: [[0054a180, 0054a2e5]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a180()

#include "nocturne.h"

/* Signature: byte actors_other_pendulum.cpp_FUN_0054a180(uint param_1, uint
   param_2) */

void core_pendulum_cpp_FUN_0054a180(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x39c) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,(char *)(in_stack_00000004 + 0x2d4));
    if (iVar1 == 0) {
      return;
    }
    *(uint *)(in_stack_00000004 + 0x39c) = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,(char *)(in_stack_00000004 + 0x338));
  if ((iVar1 != 0) && (*(int *)(in_stack_00000004 + 0x430) != 0x3f800000)) {
    *(uint *)(in_stack_00000004 + 0x434) = 0;
    *(uint *)(in_stack_00000004 + 0x430) = 0x3f800000;
  }
  core_pendulum_cpp_FUN_00549b90();
  fVar7 = (float10)1;
  fVar5 = (float10)1.4426950408889634 *
          (float10)*(float *)(in_stack_00000004 + 0x430) * (float10)-1 *
          (float10)*(float *)(in_stack_00000004 + 0x434);
  fVar6 = (float10)f2xm1(fVar5 - (fVar5 / fVar7) * fVar7);
  fVar7 = (float10)fscale(fVar6 + fVar7,fVar5);
  if (fVar7 <= (float10)0.10000000000000001) {
    *(uint *)(in_stack_00000004 + 0x440) = 1;
    return;
  }
  *(uint *)(in_stack_00000004 + 0x440) = 0;
  if ((*(int *)(in_stack_00000004 + 0x428) == 0) && (*(int *)(in_stack_00000004 + 0x42c) == 0)) {
    return;
  }
  iVar4 = 0;
  iVar1 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar1) {
        return;
      }
      pCVar3 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + -4);
      if ((*(int *)(in_stack_00000004 + 0x428) == 0) ||
         (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar3,g_CHeroClassInfo.name_hash),
         pCVar2 == (CDemonActor *)0x0)) break;
      core_pendulum_cpp_FUN_005495c0();
LAB_0054a24e:
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 4;
    }
    if ((*(int *)(in_stack_00000004 + 0x42c) == 0) ||
       (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar3,g_CEnemyClassInfo.name_hash),
       pCVar3 == (CDemonActor *)0x0)) goto LAB_0054a24e;
    core_pendulum_cpp_FUN_005495c0();
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
