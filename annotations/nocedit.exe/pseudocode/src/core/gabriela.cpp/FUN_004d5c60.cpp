// Name: core_gabriela.cpp_FUN_004d5c60
// Address: 004d5c60
// Address Range: [[004d5c60, 004d5f63]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5c60()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d5c60(uint param_1) */

uint core_gabriela_cpp_FUN_004d5c60(void)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  CDemonActor *in_stack_00000004;
  byte local_8c [8];
  float local_84;
  CVector3f local_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CDemonActor *local_20;
  int local_1c;
  int local_18;
  
  iVar3 = 0;
  local_18 = 0;
  in_stack_00000004[0x179].field19_0x114 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar3) {
      return 0;
    }
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_18),
                          g_CLadderClassInfo.name_hash);
    local_20 = this_ptr;
    if (this_ptr != (CDemonActor *)0x0) {
      local_5c = (in_stack_00000004->location).position.x - (this_ptr->location).position.x;
      local_58 = (in_stack_00000004->location).position.y - (this_ptr->location).position.y;
      local_54 = (in_stack_00000004->location).position.z - (this_ptr->location).position.z;
      if ((ABS(local_58) <= (float)5) &&
         (local_58 = 0.0, SQRT(local_54 * local_54 + local_5c * local_5c) <= (float)3)
         ) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (in_stack_00000004,(CVector3f *)local_8c,&(this_ptr->location).position);
        if ((ABS((float)local_8c._0_4_) <= (float)0.29999999999999999) &&
           (((float)0.5 <= local_84 && ((double)local_84 <= 3)))) {
          pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_50,(CVector3f *)local_8c);
          fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar1->y);
          if (ABS(fVar2) <= (float)0.17453292519444399) {
            local_1c = 0;
            pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (this_ptr,&CStack_74,&(in_stack_00000004->location).position);
            if ((CVector3f *)(local_8c + 4) != pCVar1) {
              local_8c._0_4_ = pCVar1->x;
              local_8c._4_4_ = pCVar1->y;
              local_84 = pCVar1->z;
            }
            if (local_84 < 0.0) {
              local_1c = 1;
              local_84 = -local_84;
            }
            if (((ABS((float)local_8c._0_4_) <= (float)0.29999999999999999) &&
                ((float)0.5 <= local_84)) && ((double)local_84 <= 3)) {
              pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_2c,(CVector3f *)local_8c);
              fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar1->y);
              if (ABS(fVar2) <= (float)0.17453292519444399) {
                in_stack_00000004[0x179].field19_0x114 = (int)local_20;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          ((CMotionController *)(in_stack_00000004 + 1),0x16,1);
                in_stack_00000004[0x8d].create_event[0x48] = '\0';
                in_stack_00000004[0x8d].create_event[0x49] = '\0';
                in_stack_00000004[0x8d].create_event[0x4a] = '\0';
                in_stack_00000004[0x8d].create_event[0x4b] = '\0';
                local_80.x = 0.0;
                local_80.y = 0.0;
                local_80.z = 2.0;
                if (local_1c != 0) {
                  local_80.z = -2.0;
                }
                pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   (local_20,&CStack_68,&local_80);
                (in_stack_00000004->location).position.x = pCVar1->x;
                (in_stack_00000004->location).position.y = pCVar1->y;
                (in_stack_00000004->location).position.z = pCVar1->z;
                local_44.x = (local_20->location).position.x -
                             (in_stack_00000004->location).position.x;
                local_44.y = (local_20->location).position.y -
                             (in_stack_00000004->location).position.y;
                local_44.z = (local_20->location).position.z -
                             (in_stack_00000004->location).position.z;
                pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                   (&CStack_38,&local_44);
                (in_stack_00000004->orient).bank = pCVar1->y;
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
                return 1;
              }
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
    iVar3 = iVar3 + 1;
  } while( true );
}
