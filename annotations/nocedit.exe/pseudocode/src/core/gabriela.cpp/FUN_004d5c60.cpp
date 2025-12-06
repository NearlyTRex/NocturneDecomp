// Name: core_gabriela.cpp_FUN_004d5c60
// Address: 004d5c60
// Address Range: [[004d5c60, 004d5f63]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5c60()

#include "nocturne.h"

/* Signature: byte actors_hero_gabriella.cpp_FUN_004d5c60(uint param_1) */

uint
core_gabriela_cpp_FUN_004d5c60
          (uint param_1,uint param_2,CDemonActor *unaff_EBX,uint param_4,
          CDemonActor *param_5)

{
  CLocation *input_world_point;
  CDemonActor *pCVar1;
  CDemonActor *this_ptr;
  CVector3f *pCVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int unaff_retaddr;
  float in_stack_ffffff78;
  float in_stack_ffffff80;
  float in_stack_ffffff84;
  float fStack_74;
  byte auStack_68 [8];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f aCStack_4c [3];
  byte local_24 [20];
  
  pCVar1 = param_5;
  iVar4 = 0;
  input_world_point = &param_5->location;
  local_24._8_4_ = 0.0;
  param_5[0x179].field19_0x114 = 0;
  do {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar4) {
      return 0;
    }
    this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_24._8_4_),
                          g_CLadderClassInfo.name_hash);
    local_24._4_4_ = this_ptr;
    if (this_ptr != (CDemonActor *)0x0) {
      local_5c = (input_world_point->position).x - (this_ptr->location).position.x;
      local_58 = (pCVar1->location).position.y - (this_ptr->location).position.y;
      local_54 = (pCVar1->location).position.z - (this_ptr->location).position.z;
      if ((ABS(local_58) <= (float)5) &&
         (local_58 = 0.0, SQRT(local_54 * local_54 + local_5c * local_5c) <= (float)3)
         ) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (param_5,(CVector3f *)&stack0xffffff74,&(this_ptr->location).position);
        if ((ABS(in_stack_ffffff78) <= (float)0.29999999999999999) &&
           (((float)0.5 <= in_stack_ffffff80 &&
            ((double)in_stack_ffffff80 <= 3)))) {
          pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (aCStack_4c,(CVector3f *)&stack0xffffff78);
          fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar2->y);
          if (ABS(fVar3) <= (float)0.17453292519444399) {
            pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (this_ptr,(CVector3f *)auStack_68,&input_world_point->position);
            if ((CVector3f *)&stack0xffffff84 != pCVar2) {
              in_stack_ffffff84 = pCVar2->x;
              fStack_74 = pCVar2->z;
            }
            if (fStack_74 < 0.0) {
              fStack_74 = -fStack_74;
            }
            if (((ABS(in_stack_ffffff84) <= (float)0.29999999999999999) &&
                (in_stack_ffffff78 = (float)((ulonglong)(double)fStack_74 >> 0x20),
                (float)0.5 <= fStack_74)) && ((double)fStack_74 <= 3)) {
              pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 ((CVector3f *)(local_24 + 8),(CVector3f *)&stack0xffffff84);
              param_5 = (CDemonActor *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar2->y);
              if (ABS((float)param_5) <= (float)0.17453292519444399) {
                param_5[0x179].field19_0x114 = (int)fVar3;
                core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                          ((CMotionController *)(param_5 + 1),0x16,1);
                param_5[0x8d].create_event[0x48] = '\0';
                param_5[0x8d].create_event[0x49] = '\0';
                param_5[0x8d].create_event[0x4a] = '\0';
                param_5[0x8d].create_event[0x4b] = '\0';
                auStack_68._4_4_ = 0.0;
                local_60 = 0.0;
                local_5c = 2.0;
                if (unaff_retaddr != 0) {
                  local_5c = -2.0;
                }
                pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                   (unaff_EBX,aCStack_4c,(CVector3f *)(auStack_68 + 4));
                (param_5->location).position.x = pCVar2->x;
                (param_5->location).position.y = pCVar2->y;
                (param_5->location).position.z = pCVar2->z;
                local_24._0_4_ = *(float *)(unaff_retaddr + 0x20) - (param_5->location).position.x;
                local_24._4_4_ = *(float *)(unaff_retaddr + 0x24) - (param_5->location).position.y;
                local_24._8_4_ = *(float *)(unaff_retaddr + 0x28) - (param_5->location).position.z;
                pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                   ((CVector3f *)(local_24 + 0xc),(CVector3f *)local_24);
                (param_5->orient).bank = pCVar2->y;
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(param_5);
                return 1;
              }
            }
          }
        }
      }
    }
    local_24._8_4_ = local_24._8_4_ + 4;
    iVar4 = iVar4 + 1;
  } while( true );
}
