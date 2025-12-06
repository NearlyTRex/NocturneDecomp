// Name: core_hero.cpp_FUN_004f2f50
// Address: 004f2f50
// Address Range: [[004f2f50, 004f30eb]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2f50()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_hero.cpp_FUN_004f2f50(uint param_1) */

uint core_hero_cpp_FUN_004f2f50(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  int iVar5;
  int iVar6;
  CDemonActor *in_stack_00000004;
  byte local_38 [8];
  float local_30;
  float fStack_2c;
  CVector3f CStack_28;
  CLocation *local_1c;
  uint local_18;
  
  local_1c = &in_stack_00000004->location;
  iVar5 = 0;
  local_18 = 0x7149f2ca;
  in_stack_00000004[0x179].scale.z = 0;
  for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                        g_CLeverClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                (in_stack_00000004,(CVector3f *)local_38,&(pCVar2->location).position);
      if ((((ABS(local_30) <= (float)5) && (0.0 <= (double)fStack_2c)) &&
          ((double)fStack_2c <= 3)) &&
         (ABS((float)local_38._4_4_) <= (float)3)) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_28,(CVector3f *)(local_38 + 4));
        if (ABS(pCVar3->y) <= (float)1.04719755116667) {
          iVar4 = core_lever_cpp_FUN_00505080();
          if (iVar4 != 0) {
            local_38._4_4_ = 0.0;
            fVar1 = SQRT((CStack_28.y + -2f) * (CStack_28.y + -2f) +
                         (fStack_2c + _DAT_0062ec4e) * (fStack_2c + _DAT_0062ec4e));
            local_38._0_4_ = 0.5;
            local_30 = 2.0;
            if (fVar1 <= unaff_ESI) {
              in_stack_00000004[0x179].scale.z = (int)pCVar2;
              unaff_ESI = fVar1;
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  if (in_stack_00000004[0x179].scale.z != 0) {
    iVar5 = core_event_cpp_FUN_004b18e0();
    if (iVar5 == 0) {
      in_stack_00000004[0x8d].create_event[0x48] = '\0';
      in_stack_00000004[0x8d].create_event[0x49] = '\0';
      in_stack_00000004[0x8d].create_event[0x4a] = '\0';
      in_stack_00000004[0x8d].create_event[0x4b] = '\0';
      return 1;
    }
  }
  return 0;
}
