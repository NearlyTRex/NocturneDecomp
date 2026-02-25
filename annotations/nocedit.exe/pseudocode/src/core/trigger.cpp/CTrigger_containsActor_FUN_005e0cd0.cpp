// Name: core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
// Address: 005e0cd0
// Address Range: [[005e0cd0, 005e0f61]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger *this_ptr,CDemonActor *actor)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  CCharacter *pCVar6;
  CBoundingBox3D CStack_94;
  CBoundingBox3D local_7c;
  CBoundingBox3D CStack_64;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f aCStack_28 [2];
  
  if (actor != (CDemonActor *)0x0) {
    pCVar4 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&local_7c);
    fStack_34 = (pCVar4->min).x + (pCVar4->max).x;
    fStack_30 = (pCVar4->min).y + (pCVar4->max).y;
    CStack_4c.x = fStack_34 * 0.5f;
    CStack_4c.y = fStack_30 * 0.5f;
    fStack_2c = (pCVar4->min).z + (pCVar4->max).z;
    CStack_4c.z = fStack_2c * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor,&CStack_40,&CStack_4c);
    if (this_ptr->pressure_plate != 0) {
      pCVar6 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790(actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar6 != (CCharacter *)0x0) && (pCVar6->is_on_ground == 0)) {
        return 0;
      }
      CStack_40.y = (actor->location).position.y;
    }
    fVar1 = CStack_40.x - (this_ptr->base).location.position.x;
    fVar3 = CStack_40.y - (this_ptr->base).location.position.y;
    fVar2 = CStack_40.z - (this_ptr->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        this_ptr->test_radius * this_ptr->test_radius) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,aCStack_28,&CStack_40);
      if (&CStack_40 != pCVar5) {
        CStack_40.x = pCVar5->x;
        CStack_40.y = pCVar5->y;
        CStack_40.z = pCVar5->z;
      }
      if (this_ptr->shape == 0) {
        pCVar4 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_64);
        if ((((((pCVar4->min).x <= CStack_40.x) && ((pCVar4->min).y <= CStack_40.y)) &&
             ((pCVar4->min).z <= CStack_40.z)) &&
            ((CStack_40.x <= (pCVar4->max).x && (CStack_40.y <= (pCVar4->max).y)))) &&
           (CStack_40.z <= (pCVar4->max).z)) {
          return 1;
        }
      }
      else {
        if (this_ptr->shape != 1) {
          g_CurrentFilename = "..\\core\\trigger.cpp";
          g_CurrentLineNumber = 0x37d;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("CTrigger::containsActor - invalid trigger shape %d for %s",this_ptr->shape,this_ptr);
          g_CurrentLineNumber = 899;
          g_CurrentFilename = "..\\core\\trigger.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze...");
          return 0;
        }
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_94);
        if ((CStack_94.min.y <= CStack_40.y) && (CStack_40.y <= CStack_94.max.y)) {
          if (CStack_40.x * CStack_40.x + CStack_40.z * CStack_40.z <=
              (this_ptr->trigger_size).x * (this_ptr->trigger_size).z * (float)0.25) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
