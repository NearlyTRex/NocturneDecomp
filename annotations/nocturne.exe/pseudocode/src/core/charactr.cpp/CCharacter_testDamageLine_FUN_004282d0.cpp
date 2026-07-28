// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_004282d0
// Address: 004282d0
// Address Range: [[004282d0, 0042850a]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(CCharacter *param_1,CVector3f *param_2,CVector3f *param_3,CDemonActor *param_4,CVector3f *param_5)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(CCharacter *param_1,CVector3f *param_2,CVector3f *param_3,CDemonActor *param_4,CVector3f *param_5)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  double dVar4;
  CVector3f *in_stack_ffffff7c;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  byte local_60 [12];
  byte local_54 [12];
  CVector3f local_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(&param_1->base,&local_48,param_2);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            (&param_1->base,(CVector3f *)local_54,param_3);
  iVar2 = (*((param_1->base).vtable._ub)->testLineIntersection)
                    (&param_1->base,&local_48,(CVector3f *)local_54,(CVector3f *)local_60);
  if (iVar2 != 0) {
    if (param_5 != (CVector3f *)0x0) {
      in_stack_ffffff7c = (CVector3f *)(local_54 + 4);
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (&param_1->base,(CVector3f *)(local_60 + 4),in_stack_ffffff7c);
      if (param_5 != pCVar3) {
        param_5->x = pCVar3->x;
        param_5->y = pCVar3->y;
        param_5->z = pCVar3->z;
      }
    }
    if (0.0 < (double)*(float *)(param_4->actor_name + 4)) {
      fStack_68 = param_3->x - param_2->x;
      fStack_64 = param_3->y - param_2->y;
      local_60._0_4_ = param_3->z - param_2->z;
      fVar1 = SQRT((float)local_60._0_4_ * (float)local_60._0_4_ +
                   fStack_68 * fStack_68 + fStack_64 * fStack_64);
      in_stack_ffffff7c = (CVector3f *)0x42838f;
      dVar4 = round
                        ((double)*(float *)(param_4->actor_name + 4) * 0.40000000000000002);
      if (fVar1 <= 0.0) {
        fStack_68 = 0.0;
        fStack_6c = 0.0;
        fStack_64 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        fStack_6c = fStack_6c * fVar1;
        fStack_68 = fStack_68 * fVar1;
        fStack_64 = fStack_64 * fVar1;
      }
      CStack_30.x = fStack_6c * 10.0f;
      CStack_30.y = fStack_68 * 10.0f;
      CStack_30.z = fStack_64 * 10.0f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                (&param_1->base,(CVector3f *)&stack0xffffffe8,(CVector3f *)local_54);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                ((CGore *)INT_005b96c4,(CVector3f *)&stack0xffffffe8,&CStack_30,
                 (int)ROUND(dVar4) + 1,param_1->blood_type);
    }
    fStack_24 = (fStack_3c + local_48.x) * 0.5f;
    fStack_20 = (fStack_38 + local_48.y) * 0.5f;
    fStack_1c = (fStack_34 + local_48.z) * 0.5f;
    if ((float *)(param_4->actor_name + 0x1c) != &fStack_24) {
      *(float *)(param_4->actor_name + 0x1c) = fStack_24;
      (param_4->location).position.x = fStack_20;
      (param_4->location).position.y = fStack_1c;
    }
    (*(((param_1->base).vtable._uc)->_uc).getGrabbed)(param_1,param_4,(int)in_stack_ffffff7c);
    return 1;
  }
  param_4->actor_name[4] = '\0';
  param_4->actor_name[5] = '\0';
  param_4->actor_name[6] = '\0';
  param_4->actor_name[7] = '\0';
  return 0;
}
