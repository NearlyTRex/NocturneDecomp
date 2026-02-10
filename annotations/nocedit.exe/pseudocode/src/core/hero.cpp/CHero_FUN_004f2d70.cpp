// Name: core_hero.cpp_CHero_FUN_004f2d70
// Address: 004f2d70
// Address Range: [[004f2d70, 004f2ec0]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f2d70(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2d70(CHero *this_ptr)

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
  this_ptr->door_to_open = (CDemonActor *)0x0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar7) {
      return 0;
    }
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_14),
                                      g_CDoorClassInfo.name_hash);
    if ((this_ptr_00 != (CDoor *)0x0) && (this_ptr_00->door_state == 0)) {
      fVar3 = (this_ptr->base).base.location.position.x - *(float *)this_ptr_00->unk3;
      fVar1 = (this_ptr->base).base.location.position.y;
      fVar2 = *(float *)(this_ptr_00->unk3 + 4);
      fVar4 = (this_ptr->base).base.location.position.z - *(float *)(this_ptr_00->unk3 + 8);
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         ((CDemonActor *)this_ptr,&local_24,&(this_ptr_00->base).location.position);
      if ((0.0 < pCVar5->z) &&
         ((ABS(fVar1 - fVar2) <= (float)5 &&
          (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)4)))) {
        iVar6 = core_event_cpp_FUN_004b18e0(&(this_ptr_00->open_rule).list_size);
        if (iVar6 != 0) {
          return 1;
        }
        local_18 = core_door_cpp_CDoor_getMoveType_FUN_00481070(this_ptr_00);
        if (local_18 != 0) {
          if (local_18 == 1) {
            core_door_cpp_FUN_0047fcf0((int)this_ptr_00);
            return local_18;
          }
          this_ptr->door_to_open = (CDemonActor *)this_ptr_00;
          return local_18;
        }
      }
    }
    local_14 = local_14 + 4;
    iVar7 = iVar7 + 1;
  } while( true );
}
