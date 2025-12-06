// Name: core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
// Address: 005e0cd0
// Address Range: [[005e0cd0, 005e0f61]]
// Convention: unknown
// Signature: undefined core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0()

#include "nocturne.h"

/* Signature: byte actors_other_trigger.cpp_CTrigger_containsActor(CTrigger* param_1,
   uint param_2) */

uint
core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0
          (uint param_1,uint param_2,float unaff_EBX,uint param_4,
          CDemonActor *param_5,CDemonActor *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  CDemonActor *pCVar6;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_ESI;
  float fStack_5c;
  float fStack_50;
  CBoundingBox3D CStack_44;
  byte auStack_2c [12];
  CVector3f CStack_20;
  
  if (param_6 != (CDemonActor *)0x0) {
    pCVar4 = (*param_6->vtable->getBoundingBox)(param_6,(CBoundingBox3D *)&stack0xffffff84);
    CStack_20.x = (pCVar4->min).x + (pCVar4->max).x;
    CStack_20.y = (pCVar4->min).y + (pCVar4->max).y;
    CStack_44.max.x = CStack_20.x * 0.5f;
    CStack_44.max.y = CStack_20.y * 0.5f;
    CStack_20.z = (pCVar4->min).z + (pCVar4->max).z;
    CStack_44.max.z = CStack_20.z * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (param_6,(CVector3f *)auStack_2c,&CStack_44.max);
    if (*(int *)(param_5[1].create_event + 0x48) != 0) {
      pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c790(param_6,g_CCharacterClassInfo.name_hash);
      if ((pCVar6 != (CDemonActor *)0x0) && (pCVar6[0x1a].field22_0x120 == 0)) {
        return 0;
      }
      CStack_20.x = (param_6->location).position.y;
    }
    fVar1 = (float)auStack_2c._8_4_ - (param_5->location).position.x;
    fVar3 = CStack_20.x - (param_5->location).position.y;
    fVar2 = CStack_20.y - (param_5->location).position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)param_5[1].actor_name * *(float *)param_5[1].actor_name) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (param_5,(CVector3f *)&stack0xfffffff4,(CVector3f *)(auStack_2c + 8));
      if (&CStack_20 != pCVar5) {
        CStack_20.x = pCVar5->x;
        CStack_20.y = pCVar5->y;
        CStack_20.z = pCVar5->z;
      }
      if (*(int *)(param_5[1].actor_name + 0x18) == 0) {
        pCVar4 = (*param_5->vtable->getBoundingBox)(param_5,&CStack_44);
        if ((((((pCVar4->min).x <= unaff_EBP) && ((pCVar4->min).y <= unaff_ESI)) &&
             ((pCVar4->min).z <= unaff_EBX)) &&
            ((unaff_EBP <= (pCVar4->max).x && (unaff_ESI <= (pCVar4->max).y)))) &&
           (unaff_EBX <= (pCVar4->max).z)) {
          return 1;
        }
      }
      else {
        if (*(int *)(param_5[1].actor_name + 0x18) != 1) {
          g_CurrentFilename = "..\\core\\trigger.cpp";
          g_CurrentLineNumber = 0x37d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CTrigger::containsActor - invalid trigger shape %d for %s");
          g_CurrentLineNumber = 899;
          g_CurrentFilename = "..\\core\\trigger.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze...");
          return 0;
        }
        (*param_5->vtable->getBoundingBox)(param_5,(CBoundingBox3D *)&stack0xffffff8c);
        if ((fStack_5c <= unaff_ESI) && (unaff_ESI <= fStack_50)) {
          if (unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX <=
              *(float *)(param_5[1].actor_name + 8) * *(float *)(param_5[1].actor_name + 0x10) *
              (float)0.25) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
