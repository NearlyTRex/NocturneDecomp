// Name: core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950
// Address: 004b5950
// Address Range: [[004b5950, 004b5af1]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(CHero *this_ptr)

{
  CDemonActor *pCVar1;
  CActorDestination *this_ptr_00;
  int iVar2;
  UOrientationVector *pUVar3;
  int iVar4;
  byte local_48 [12];
  CVector3f local_3c;
  double local_30;
  double local_28;
  CInventory *local_20;
  CLocation *local_1c;
  int local_18;
  CActorDestination *local_14;
  
  local_20 = &this_ptr->inventory;
  this_ptr->target_actor = (CDemonActor *)0x0;
  iVar4 = 0;
  local_18 = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= local_18) {
      iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(local_20->selected_item,"CTrap");
      if (iVar4 != 0) {
        this_ptr->target_actor = local_20->selected_item;
      }
      return 0;
    }
    this_ptr_00 = (CActorDestination *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(iVar4 + 0x14cd70 + 0x01E57284),
                             g_CActorDestinationActorType_014b8a1c.name_hash);
    local_14 = this_ptr_00;
    if (this_ptr_00 != (CActorDestination *)0x0) {
      iVar2 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                        (this_ptr_00,local_20->selected_item);
      if (iVar2 != 0) {
        local_1c = &(this_ptr_00->base).location;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  ((CDemonActor *)this_ptr,&local_3c,&local_1c->position);
        local_30 = (double)local_3c.y;
        if ((((1.0 <= local_30) && (local_30 <= 6)) &&
            (local_28 = (double)local_3c.z, (float)0.5 <= local_3c.z)) &&
           ((local_28 <= 3 && (ABS(local_3c.x) <= (float)3)))) {
          iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (local_48,&local_3c);
          if ((ABS(*(float *)(iVar2 + 4)) <= (float)60) &&
             (pCVar1 = this_ptr_00->dest_actor, this_ptr->target_actor = pCVar1,
             pCVar1 != (CDemonActor *)0x0)) {
            if ((CLocation *)&this_ptr->target_position != local_1c) {
              (this_ptr->target_position).x = (local_1c->position).x;
              (this_ptr->target_position).y = (local_1c->position).y;
              (this_ptr->target_position).z = (local_1c->position).z;
            }
            pUVar3 = &(local_14->base).orient;
            if (&this_ptr->target_orientation != pUVar3) {
              (this_ptr->target_orientation).vec.x = (pUVar3->vec).x;
              (this_ptr->target_orientation).vec.y = (local_14->base).orient.vec.y;
              (this_ptr->target_orientation).vec.z = (local_14->base).orient.vec.z;
            }
            return 1;
          }
        }
      }
    }
    local_18 = local_18 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
