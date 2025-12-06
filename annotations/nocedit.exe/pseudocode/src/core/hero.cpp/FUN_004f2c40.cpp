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
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *in_stack_00000004;
  byte auStack_3c [20];
  CVector3f CStack_28;
  CVector3f local_1c;
  int iVar4;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_3c + 4),(CVector3f *)&stack0xffffffb0);
  iVar4 = 0;
  do {
    if (g_CDemonSetPtr->damage_listener_count <= iVar3) {
      return 0;
    }
    pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar4 + -4);
    if ((*(char *)&pCVar1[0x1b].field13_0xec.x != '\0') && (pCVar1 != in_stack_00000004)) {
      local_1c.x = (pCVar1->location).position.x - (in_stack_00000004->location).position.x;
      local_1c.z = (pCVar1->location).position.z - (in_stack_00000004->location).position.z;
      if (ABS((pCVar1->location).position.y - (in_stack_00000004->location).position.y) <=
          (float)4) {
        local_1c.y = 0.0;
        if (SQRT(local_1c.z * local_1c.z + local_1c.x * local_1c.x) <= (float)5) {
          pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                             (in_stack_00000004,&CStack_28,&local_1c);
          pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             ((CVector3f *)auStack_3c,pCVar2);
          if (ABS(pCVar2->y) <= (float)0.34906585038888899) {
            core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
            return 1;
          }
        }
      }
    }
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
  } while( true );
}
