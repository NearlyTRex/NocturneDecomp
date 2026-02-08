// Name: core_hero.cpp_CHero_FUN_004f35b0
// Address: 004f35b0
// Address Range: [[004f35b0, 004f3751]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f35b0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f35b0(CHero *this_ptr)

{
  CDemonActor *pCVar1;
  CActorDestination *this_ptr_00;
  int iVar2;
  CVector3f *pCVar3;
  COrientation *pCVar4;
  int iVar5;
  CVector3f local_48;
  CVector3f local_3c;
  double local_30;
  double local_28;
  CInventory *local_20;
  CLocation *local_1c;
  int local_18;
  CActorDestination *local_14;
  
  local_20 = &this_ptr->inventory;
  this_ptr->unk3[4] = '\0';
  this_ptr->unk3[5] = '\0';
  this_ptr->unk3[6] = '\0';
  this_ptr->unk3[7] = '\0';
  iVar5 = 0;
  local_18 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= local_18) {
      iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0(local_20->selected_item,"CTrap");
      if (iVar5 != 0) {
        *(CDemonActor **)(this_ptr->unk3 + 4) = local_20->selected_item;
      }
      return 0;
    }
    this_ptr_00 = (CActorDestination *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                             g_CActorDestinationClassInfo.name_hash);
    local_14 = this_ptr_00;
    if (this_ptr_00 != (CActorDestination *)0x0) {
      iVar2 = core_dest_cpp_CActorDestination_FUN_0046fd50(this_ptr_00);
      if (iVar2 != 0) {
        local_1c = &(this_ptr_00->base).location;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  ((CDemonActor *)this_ptr,&local_3c,&local_1c->position);
        local_30 = (double)local_3c.y;
        if ((((1.0 <= local_30) && (local_30 <= 6)) &&
            (local_28 = (double)local_3c.z, (float)0.5 <= local_3c.z)) &&
           ((local_28 <= 3 && (ABS(local_3c.x) <= (float)3)))) {
          pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_48,&local_3c);
          if ((ABS(pCVar3->y) <= (float)60) &&
             (pCVar1 = this_ptr_00->dest_actor, *(CDemonActor **)(this_ptr->unk3 + 4) = pCVar1,
             pCVar1 != (CDemonActor *)0x0)) {
            if ((CLocation *)(this_ptr->unk3 + 8) != local_1c) {
              *(float *)(this_ptr->unk3 + 8) = (local_1c->position).x;
              *(float *)(this_ptr->unk3 + 0xc) = (local_1c->position).y;
              *(float *)(this_ptr->unk3 + 0x10) = (local_1c->position).z;
            }
            pCVar4 = &(local_14->base).orient;
            if ((COrientation *)(this_ptr->unk3 + 0x14) != pCVar4) {
              *(float *)(this_ptr->unk3 + 0x14) = pCVar4->pitch;
              *(float *)(this_ptr->unk3 + 0x18) = (local_14->base).orient.bank;
              *(float *)(this_ptr->unk3 + 0x1c) = (local_14->base).orient.heading;
            }
            return 1;
          }
        }
      }
    }
    local_18 = local_18 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
