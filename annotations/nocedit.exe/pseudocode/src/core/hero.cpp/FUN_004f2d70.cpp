// Name: core_hero.cpp_FUN_004f2d70
// Address: 004f2d70
// Address Range: [[004f2d70, 004f2ec0]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2d70()

#include "nocturne.h"

int core_hero_cpp_FUN_004f2d70
              (uint param_1,uint param_2,int unaff_EBX,uint param_4,
              CDemonActor *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDoor *this_ptr;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  CVector3f CStack_20;
  int local_14;
  
  iVar6 = 0;
  local_14 = 0;
  param_5[0x179].field17_0x104 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) {
      return 0;
    }
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c790
                                  (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_14),
                                   g_CDoorClassInfo.name_hash);
    if ((this_ptr != (CDoor *)0x0) && (this_ptr->door_state == 0)) {
      fVar3 = (param_5->location).position.y - *(float *)(this_ptr->field17_0x9bc + 4);
      fVar1 = (param_5->location).position.z;
      fVar2 = *(float *)(this_ptr->field17_0x9bc + 8);
      pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (param_5,&CStack_20,&(this_ptr->base_actor).location.position);
      if ((0.0 < pCVar4->z) &&
         ((ABS(fVar1 - fVar2) <= (float)5 &&
          (SQRT(CStack_20.x * CStack_20.x + fVar3 * fVar3) < (float)4)))) {
        iVar5 = core_event_cpp_FUN_004b18e0();
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = core_door_cpp_CDoor_getMoveType_FUN_00481070(this_ptr);
        if (iVar5 != 0) {
          if (iVar5 == 1) {
            core_door_cpp_FUN_0047fcf0();
            return unaff_EBX;
          }
          param_5[0x179].field17_0x104 = (int)this_ptr;
          return iVar5;
        }
      }
    }
    local_14 = local_14 + 4;
    iVar6 = iVar6 + 1;
  } while( true );
}
