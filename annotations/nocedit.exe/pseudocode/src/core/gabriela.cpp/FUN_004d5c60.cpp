// Name: core_gabriela.cpp_FUN_004d5c60
// Address: 004d5c60
// Address Range: [[004d5c60, 004d5f63]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_FUN_004d5c60(void)

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d5c60(uint param_1) */

int __cdecl core_gabriela_cpp_FUN_004d5c60(void)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CDemonActor *local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  iVar2 = 0;
  local_1c = 0;
  in_stack_00000004[0x179].unk8 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar2) {
      return 0;
    }
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_1c),
                          g_CLadderClassInfo.name_hash);
    local_24 = this_ptr;
    if (this_ptr != (CDemonActor *)0x0) {
      local_60 = (in_stack_00000004->location).position.x - (this_ptr->location).position.x;
      local_5c = (in_stack_00000004->location).position.y - (this_ptr->location).position.y;
      local_58 = (in_stack_00000004->location).position.z - (this_ptr->location).position.z;
      if ((ABS(local_5c) <= (float)5) &&
         (local_5c = 0.0, SQRT(local_58 * local_58 + local_60 * local_60) <= (float)3)
         ) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,&local_90,&(this_ptr->location).position);
        if ((ABS(local_90.x) <= (float)0.29999999999999999) &&
           (((float)0.5 <= local_90.z && ((double)local_90.z <= 3)))) {
          pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_54,&local_90);
          local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar1->y);
          if (ABS(local_18) <= (float)0.17453292519444399) {
            local_20 = 0;
            pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (this_ptr,&local_78,&(in_stack_00000004->location).position);
            if (&local_90 != pCVar1) {
              local_90.x = pCVar1->x;
              local_90.y = pCVar1->y;
              local_90.z = pCVar1->z;
            }
            if (local_90.z < 0.0) {
              local_20 = 1;
              local_90.z = -local_90.z;
            }
            if (((ABS(local_90.x) <= (float)0.29999999999999999) &&
                ((float)0.5 <= local_90.z)) && ((double)local_90.z <= 3))
            {
              pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&local_30,&local_90);
              local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar1->y);
              if (ABS(local_18) <= (float)0.17453292519444399) {
                in_stack_00000004[0x179].unk8 = (int)local_24;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          ((CMotionController *)(in_stack_00000004 + 1),0x16,1);
                in_stack_00000004[0x8d].create_event[0x48] = '\0';
                in_stack_00000004[0x8d].create_event[0x49] = '\0';
                in_stack_00000004[0x8d].create_event[0x4a] = '\0';
                in_stack_00000004[0x8d].create_event[0x4b] = '\0';
                local_84.x = 0.0;
                local_84.y = 0.0;
                local_84.z = 2.0;
                if (local_20 != 0) {
                  local_84.z = -2.0;
                }
                pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   (local_24,&local_6c,&local_84);
                (in_stack_00000004->location).position.x = pCVar1->x;
                (in_stack_00000004->location).position.y = pCVar1->y;
                (in_stack_00000004->location).position.z = pCVar1->z;
                local_48.x = (local_24->location).position.x -
                             (in_stack_00000004->location).position.x;
                local_48.y = (local_24->location).position.y -
                             (in_stack_00000004->location).position.y;
                local_48.z = (local_24->location).position.z -
                             (in_stack_00000004->location).position.z;
                pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                   (&local_3c,&local_48);
                (in_stack_00000004->orient).bank = pCVar1->y;
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
                return 1;
              }
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
    iVar2 = iVar2 + 1;
  } while( true );
}
