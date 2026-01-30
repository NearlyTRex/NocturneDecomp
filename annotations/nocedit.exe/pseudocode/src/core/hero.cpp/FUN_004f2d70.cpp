// Name: core_hero.cpp_FUN_004f2d70
// Address: 004f2d70
// Address Range: [[004f2d70, 004f2ec0]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004f2d70(void)

#include "nocturne.h"

int __cdecl core_hero_cpp_FUN_004f2d70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDoor *this_ptr;
  CVector3f *pCVar5;
  int iVar6;
  int iVar7;
  CDemonActor *in_stack_00000004;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  iVar7 = 0;
  local_14 = 0;
  in_stack_00000004[0x179].unk7 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar7) {
      return 0;
    }
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_14),
                                   g_CDoorClassInfo.name_hash);
    if ((this_ptr != (CDoor *)0x0) && (this_ptr->door_state == 0)) {
      fVar3 = (in_stack_00000004->location).position.x - *(float *)this_ptr->unk3;
      fVar1 = (in_stack_00000004->location).position.y;
      fVar2 = *(float *)(this_ptr->unk3 + 4);
      fVar4 = (in_stack_00000004->location).position.z - *(float *)(this_ptr->unk3 + 8);
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (in_stack_00000004,&local_24,&(this_ptr->base).location.position);
      if ((0.0 < pCVar5->z) &&
         ((ABS(fVar1 - fVar2) <= (float)5 &&
          (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)4)))) {
        iVar6 = core_event_cpp_FUN_004b18e0(&this_ptr->open_rules);
        if (iVar6 != 0) {
          return 1;
        }
        local_18 = core_door_cpp_CDoor_getMoveType_FUN_00481070(this_ptr);
        if (local_18 != 0) {
          if (local_18 == 1) {
            core_door_cpp_FUN_0047fcf0();
            return local_18;
          }
          in_stack_00000004[0x179].unk7 = (int)this_ptr;
          return local_18;
        }
      }
    }
    local_14 = local_14 + 4;
    iVar7 = iVar7 + 1;
  } while( true );
}
