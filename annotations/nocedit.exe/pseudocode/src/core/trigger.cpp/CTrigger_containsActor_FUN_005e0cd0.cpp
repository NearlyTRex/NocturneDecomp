// Name: core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
// Address: 005e0cd0
// Address Range: [[005e0cd0, 005e0f61]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl
core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(CTrigger *this_ptr,CDemonActor *actor)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  CVector3f *pCVar5;
  CDemonActor *pCVar6;
  byte auStack_8c [24];
  float fStack_74;
  CBoundingBox3D CStack_5c;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  
  if (actor != (CDemonActor *)0x0) {
    pCVar4 = (*((actor->vtable)._ub)->getBoundingBox)(actor,(CBoundingBox3D *)(auStack_8c + 0x10));
    fStack_2c = (pCVar4->min).x + (pCVar4->max).x;
    fStack_28 = (pCVar4->min).y + (pCVar4->max).y;
    CStack_44.x = fStack_2c * 0.5f;
    CStack_44.y = fStack_28 * 0.5f;
    fStack_24 = (pCVar4->min).z + (pCVar4->max).z;
    CStack_44.z = fStack_24 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor,&CStack_38,&CStack_44);
    if (this_ptr->pressure_plate != 0) {
      pCVar6 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c790(actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar6 != (CDemonActor *)0x0) && (pCVar6[0x1a].unk11 == 0)) {
        return 0;
      }
      CStack_38.y = (actor->location).position.y;
    }
    fVar1 = CStack_38.x - (this_ptr->base).location.position.x;
    fVar3 = CStack_38.y - (this_ptr->base).location.position.y;
    fVar2 = CStack_38.z - (this_ptr->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        this_ptr->test_radius * this_ptr->test_radius) {
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&this_ptr->base,&CStack_20,&CStack_38);
      if (&CStack_38 != pCVar5) {
        CStack_38.x = pCVar5->x;
        CStack_38.y = pCVar5->y;
        CStack_38.z = pCVar5->z;
      }
      if (this_ptr->shape == 0) {
        pCVar4 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_5c);
        if ((((((pCVar4->min).x <= CStack_38.z) && ((pCVar4->min).y <= fStack_2c)) &&
             ((pCVar4->min).z <= fStack_28)) &&
            ((CStack_38.z <= (pCVar4->max).x && (fStack_2c <= (pCVar4->max).y)))) &&
           (fStack_28 <= (pCVar4->max).z)) {
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
        (*((this_ptr->base).vtable._ub)->getBoundingBox)
                  (&this_ptr->base,(CBoundingBox3D *)auStack_8c);
        if (((float)auStack_8c._12_4_ <= fStack_2c) && (fStack_2c <= fStack_74)) {
          if (CStack_38.z * CStack_38.z + fStack_28 * fStack_28 <=
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
