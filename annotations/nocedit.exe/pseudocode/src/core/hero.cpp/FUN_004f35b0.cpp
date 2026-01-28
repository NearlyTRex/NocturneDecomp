// Name: core_hero.cpp_FUN_004f35b0
// Address: 004f35b0
// Address Range: [[004f35b0, 004f3751]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004f35b0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f35b0(uint param_1) */

uint core_hero_cpp_FUN_004f35b0(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  CVector3f local_48;
  CVector3f local_3c;
  double local_30;
  double local_28;
  char *local_20;
  CLocation *local_1c;
  int local_18;
  CDemonActor *local_14;
  
  local_20 = in_stack_00000004[0x176].create_event + 0x30;
  in_stack_00000004[0x179].unk10 = 0;
  iVar5 = 0;
  local_18 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= local_18) {
      iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (*(CDemonActor **)(local_20 + 0x334),"CTrap");
      if (iVar5 != 0) {
        in_stack_00000004[0x179].unk10 = *(int *)(local_20 + 0x334);
      }
      return 0;
    }
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                        g_CActorDestinationClassInfo.name_hash);
    local_14 = pCVar1;
    if (pCVar1 != (CDemonActor *)0x0) {
      iVar2 = core_dest_cpp_FUN_0046fd50();
      if (iVar2 != 0) {
        local_1c = &pCVar1->location;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&local_3c,&local_1c->position);
        local_30 = (double)local_3c.y;
        if ((((1.0 <= local_30) && (local_30 <= 6)) &&
            (local_28 = (double)local_3c.z, (float)0.5 <= local_3c.z)) &&
           ((local_28 <= 3 && (ABS(local_3c.x) <= (float)3)))) {
          pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_48,&local_3c);
          if ((ABS(pCVar3->y) <= (float)60) &&
             (iVar2 = *(int *)pCVar1[1].actor_name, in_stack_00000004[0x179].unk10 = iVar2,
             iVar2 != 0)) {
            if ((CLocation *)&in_stack_00000004[0x179].unk11 != local_1c) {
              in_stack_00000004[0x179].unk11 = (int)(local_1c->position).x;
              in_stack_00000004[0x179].unk12 = (int)(local_1c->position).y;
              in_stack_00000004[0x179].previous_transform_state.position.x = (local_1c->position).z;
            }
            pfVar4 = &in_stack_00000004[0x179].previous_transform_state.position.y;
            if ((COrientation *)pfVar4 != &local_14->orient) {
              *pfVar4 = (local_14->orient).pitch;
              in_stack_00000004[0x179].previous_transform_state.position.z = (local_14->orient).bank
              ;
              in_stack_00000004[0x179].previous_transform_state.orientation.x =
                   (local_14->orient).heading;
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
