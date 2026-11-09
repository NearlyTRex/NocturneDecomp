// Name: core_pendulum.cpp_FUN_00537020
// Address: 00537020
// Address Range: [[00537020, 00537185]]
// Convention: unknown
// Signature: void core_pendulum_cpp_FUN_00537020(CPendulum *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_pendulum_cpp_FUN_00537020(CPendulum *param_1,float param_2)

{
  CDemonActor *actor;
  int iVar1;
  CDemonActor *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)&param_1->field_0x39c == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0x2d4);
    if (iVar1 == 0) {
      return;
    }
    *(uint *)&param_1->field_0x39c = 1;
  }
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&param_1->field_0x338);
  if ((iVar1 != 0) && (*(int *)&param_1->field_0x430 != 0x3f800000)) {
    *(uint *)&param_1->field_0x434 = 0;
    *(uint *)&param_1->field_0x430 = 0x3f800000;
  }
  core_pendulum_cpp_FUN_00536a20(param_1,param_2);
  fVar6 = (float10)1;
  fVar4 = (float10)1.4426950408889634 *
          (float10)*(float *)&param_1->field_0x430 * (float10)_DAT_005ecce5 *
          (float10)*(float *)&param_1->field_0x434;
  fVar5 = (float10)f2xm1(fVar4 - (fVar4 / fVar6) * fVar6);
  fVar6 = (float10)fscale(fVar5 + fVar6,fVar4);
  if (fVar6 <= (float10)_DAT_005ecced) {
    *(uint *)&param_1->field_0x440 = 1;
    return;
  }
  *(uint *)&param_1->field_0x440 = 0;
  if ((*(int *)&param_1->field_0x428 == 0) && (*(int *)&param_1->field_0x42c == 0)) {
    return;
  }
  iVar3 = 0;
  iVar1 = 0;
  do {
    while( true ) {
      if (*(int *)&g_CDemonSetPtr->field_0x14f0a8 <= iVar1) {
        return;
      }
      actor = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iVar3);
      if ((*(int *)&param_1->field_0x428 == 0) ||
         (pCVar2 = (CDemonActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c600(actor,g_CHeroClassInfo.name_hash),
         pCVar2 == (CDemonActor *)0x0)) break;
      core_pendulum_cpp_FUN_00536290(param_1,actor,pCVar2,(CDemonActor *)0x0);
LAB_005370ee:
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
    }
    if ((*(int *)&param_1->field_0x42c == 0) ||
       (pCVar2 = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c600(actor,g_CEnemyClassInfo.name_hash),
       pCVar2 == (CDemonActor *)0x0)) goto LAB_005370ee;
    core_pendulum_cpp_FUN_00536290(param_1,actor,(CDemonActor *)0x0,pCVar2);
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
