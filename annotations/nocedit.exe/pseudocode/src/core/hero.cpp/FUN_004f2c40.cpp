// Name: core_hero.cpp_FUN_004f2c40
// Address: 004f2c40
// Address Range: [[004f2c40, 004f2d66]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2c40()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f2c40(uint param_1) */

uint core_hero_cpp_FUN_004f2c40(void)

{
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  int local_14;
  
  iVar3 = 0;
  local_50.x = 0.0;
  local_50.y = 0.0;
  local_50.z = 1.5;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_38,&local_50);
  local_14 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= iVar3) {
      return 0;
    }
    pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->unk4 + local_14 + -4);
    if ((*(char *)&pCVar1[0x1b].unk4.x != '\0') && (pCVar1 != in_stack_00000004)) {
      local_20.x = (pCVar1->location).position.x - (in_stack_00000004->location).position.x;
      local_20.z = (pCVar1->location).position.z - (in_stack_00000004->location).position.z;
      if (ABS((pCVar1->location).position.y - (in_stack_00000004->location).position.y) <=
          (float)4) {
        local_20.y = 0.0;
        if (SQRT(local_20.z * local_20.z + local_20.x * local_20.x) <= (float)5) {
          pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                             (in_stack_00000004,&local_2c,&local_20);
          pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_44,pCVar2);
          if (ABS(pCVar2->y) <= (float)0.34906585038888899) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            return 1;
          }
        }
      }
    }
    local_14 = local_14 + 4;
    iVar3 = iVar3 + 1;
  } while( true );
}
