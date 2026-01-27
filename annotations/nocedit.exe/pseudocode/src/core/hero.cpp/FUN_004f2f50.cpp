// Name: core_hero.cpp_FUN_004f2f50
// Address: 004f2f50
// Address Range: [[004f2f50, 004f30eb]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2f50()

#include "nocturne.h"

uint core_hero_cpp_FUN_004f2f50(void)

{
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  CVector3f local_3c;
  CVector3f local_30;
  CLocation *local_1c;
  float local_18;
  float local_14;
  
  local_1c = &in_stack_00000004->location;
  iVar4 = 0;
  local_18 = 1e+30;
  in_stack_00000004[0x179].scale.z = 0;
  for (iVar5 = 0; iVar5 < (int)g_CDemonSetPtr->actor_list_ptr; iVar5 = iVar5 + 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4),
                        g_CLeverClassInfo.name_hash);
    if (pCVar1 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (in_stack_00000004,&local_3c,&(pCVar1->location).position);
      if ((((ABS(local_3c.y) <= (float)5) && (0.0 <= (double)local_3c.z)) &&
          ((double)local_3c.z <= 3)) && (ABS(local_3c.x) <= (float)3)) {
        pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_30,&local_3c);
        if (ABS(pCVar2->y) <= (float)1.04719755116667) {
          iVar3 = core_lever_cpp_FUN_00505080();
          if (iVar3 != 0) {
            local_14 = SQRT((local_3c.z + -2.0f) * (local_3c.z + -2.0f) +
                            (local_3c.x + -0.5f) * (local_3c.x + -0.5f));
            if (local_14 <= local_18) {
              in_stack_00000004[0x179].scale.z = (int)pCVar1;
              local_18 = local_14;
            }
          }
        }
      }
    }
    iVar4 = iVar4 + 4;
  }
  if (in_stack_00000004[0x179].scale.z != 0) {
    iVar4 = core_event_cpp_FUN_004b18e0();
    if (iVar4 == 0) {
      in_stack_00000004[0x8d].create_event[0x48] = '\0';
      in_stack_00000004[0x8d].create_event[0x49] = '\0';
      in_stack_00000004[0x8d].create_event[0x4a] = '\0';
      in_stack_00000004[0x8d].create_event[0x4b] = '\0';
      return 1;
    }
  }
  return 0;
}
