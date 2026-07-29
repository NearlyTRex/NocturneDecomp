// Name: core_hero.cpp_FUN_004b5110
// Address: 004b5110
// Address Range: [[004b5110, 004b5260]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004b5110(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_FUN_004b5110(CHero *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDoor *this_ptr_00;
  CVector3f *pCVar5;
  int iVar6;
  int iVar7;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  iVar7 = 0;
  local_14 = 0;
  this_ptr->door_to_open = (CDoor *)0x0;
  do {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar7) {
      return 0;
    }
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040d890
                                     (*(CDemonActor **)(0x01E57284 + local_14 + 0x14cd70),
                                      g_CDoorActorType_01af4e9c.name_hash);
    if ((this_ptr_00 != (CDoor *)0x0) && (this_ptr_00->door_state == DOOR_STATE_CLOSED)) {
      fVar3 = (this_ptr->base).base.location.position.x - (this_ptr_00->open_position).x;
      fVar1 = (this_ptr->base).base.location.position.y;
      fVar2 = (this_ptr_00->open_position).y;
      fVar4 = (this_ptr->base).base.location.position.z - (this_ptr_00->open_position).z;
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         ((CDemonActor *)this_ptr,&local_24,&(this_ptr_00->base).location.position);
      if ((0.0 < pCVar5->z) &&
         ((ABS(fVar1 - fVar2) <= (float)5 &&
          (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)4)))) {
        iVar6 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(&this_ptr_00->open_rule);
        if (iVar6 != 0) {
          return 1;
        }
        local_18 = core_door_cpp_CDoor_getMoveType_FUN_004564b0(this_ptr_00,(CDemonActor *)this_ptr)
        ;
        if (local_18 != 0) {
          if (local_18 == 1) {
            core_door_cpp_CDoor_onOpened_FUN_00455270(this_ptr_00);
            return local_18;
          }
          this_ptr->door_to_open = this_ptr_00;
          return local_18;
        }
      }
    }
    local_14 = local_14 + 4;
    iVar7 = iVar7 + 1;
  } while( true );
}
