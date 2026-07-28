// Name: core_hero.cpp_CHero_tryApproachNearbyActor_FUN_004b5750
// Address: 004b5750
// Address Range: [[004b5750, 004b5916]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryApproachNearbyActor_FUN_004b5750(CHero *this_ptr)

{
  CLocation *input_world_point;
  CHero *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  SInteractionInfo SStack_80;
  float local_60 [3];
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f local_3c;
  byte local_30 [16];
  int local_20;
  int local_1c;
  float local_14;
  
  iVar3 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_004294f0(&this_ptr->base);
  if (iVar3 == 0) {
    if (this_ptr->nearby_interactive_actor != (CDemonActor *)0x0) {
      return 1;
    }
    input_world_point = &(this_ptr->base).base.location;
    local_1c = 0;
    for (local_20 = 0; local_20 < *(int *)(0x01E57284 + 0x14cd6c); local_20 = local_20 + 1) {
      this_ptr_00 = *(CHero **)(0x01E57284 + local_1c + 0x14cd70);
      local_60[0] = (this_ptr_00->base).base.location.position.x - (input_world_point->position).x;
      local_60[2] = (this_ptr_00->base).base.location.position.z -
                    (this_ptr->base).base.location.position.z;
      if (((ABS((this_ptr_00->base).base.location.position.y -
                (this_ptr->base).base.location.position.y) <= (float)10) &&
          (local_60[1] = 0.0,
          SQRT(local_60[2] * local_60[2] + local_60[0] * local_60[0]) <= (float)10)) &&
         (this_ptr_00 != this_ptr)) {
        iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_30,local_60);
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (*(float *)(iVar3 + 4) - (this_ptr->base).base.orient.vec.y);
        if (((ABS(local_14) <= (float)1.04719755116667) &&
            (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                ((CDemonActor *)this_ptr_00,&local_3c,&input_world_point->position),
            pCVar4->z <= 0.0)) &&
           (((*((this_ptr_00->base).base.vtable._ub)->getInteractionInfo)
                       ((CDemonActor *)this_ptr_00,&SStack_80), SStack_80.can_interact != 0 &&
            (SStack_80.interacting_actor == (CDemonActor *)0x0)))) {
          CStack_48.z = SStack_80.approach_offset;
          CStack_48.x = (float)SStack_80.interacting_actor;
          CStack_48.y = (float)SStack_80.interacting_actor;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    ((CDemonActor *)this_ptr_00,&CStack_54,&CStack_48);
          fVar1 = CStack_54.x - (input_world_point->position).x;
          fVar2 = CStack_54.z - (this_ptr->base).base.location.position.z;
          if ((SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)5) &&
             (iVar3 = (*((this_ptr_00->base).base.vtable._ub)->startInteraction)
                                ((CDemonActor *)this_ptr_00,(CDemonActor *)this_ptr), iVar3 != 0)) {
            this_ptr->nearby_interactive_actor = (CDemonActor *)this_ptr_00;
            return 1;
          }
        }
      }
      local_1c = local_1c + 4;
    }
  }
  return 0;
}
