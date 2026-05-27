// Name: core_hero.cpp_CHero_findItemUseTarget_FUN_004f35b0
// Address: 004f35b0
// MANUAL RECONSTRUCTION
// Address Range: [[004f35b0, 004f3751]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004f35b0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004f35b0(CHero *this_ptr)

{
  int iVar1;
  CActorDestination *this_ptr_00;
  int iVar2;
  CLocation *input_world_point;
  CVector3f *pCVar3;
  UOrientationVector *pUVar4;
  CVector3f local_48;
  CVector3f local_3c;
  int local_18;
  CDemonActor *pCVar1;
  
  this_ptr->target_actor = (CDemonActor *)0x0;
  local_18 = 0;
  do {
    if (g_CDemonSetPtr->actor_count <= local_18) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        ((this_ptr->inventory).selected_item,"CTrap");
      if (iVar1 != 0) {
        this_ptr->target_actor = (this_ptr->inventory).selected_item;
      }
      return 0;
    }
    this_ptr_00 = (CActorDestination *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (g_CDemonSetPtr->actors[local_18],
                             g_CActorDestinationClassInfo.name_hash);
    if (this_ptr_00 != (CActorDestination *)0x0) {
      iVar2 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0046fd50
                        (this_ptr_00,(this_ptr->inventory).selected_item);
      if (iVar2 != 0) {
        input_world_point = &(this_ptr_00->base).location;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  ((CDemonActor *)this_ptr,&local_3c,&input_world_point->position);
        if ((((1.0 <= (double)local_3c.y) && ((double)local_3c.y <= 6)) &&
            ((float)0.5 <= local_3c.z)) &&
           (((double)local_3c.z <= 3 && (ABS(local_3c.x) <= (float)3))))
        {
          pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_48,&local_3c);
          if ((ABS(pCVar3->y) <= (float)60) &&
             (pCVar1 = this_ptr_00->dest_actor, this_ptr->target_actor = pCVar1,
             pCVar1 != (CDemonActor *)0x0)) {
            if ((CLocation *)&this_ptr->target_position != input_world_point) {
              this_ptr->target_position = input_world_point->position;
            }
            pUVar4 = &(this_ptr_00->base).orient;
            if (&this_ptr->target_orientation != pUVar4) {
              this_ptr->target_orientation = *pUVar4;
            }
            return 1;
          }
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
