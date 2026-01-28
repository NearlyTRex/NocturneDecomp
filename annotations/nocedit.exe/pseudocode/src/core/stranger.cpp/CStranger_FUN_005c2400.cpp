// Name: core_stranger.cpp_CStranger_FUN_005c2400
// Address: 005c2400
// Address Range: [[005c2400, 005c2846]]
// Convention: unknown
// Signature: undefined4 core_stranger_cpp_CStranger_FUN_005c2400(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c2400(CStranger* param_1) */

uint core_stranger_cpp_CStranger_FUN_005c2400(void)

{
  int *piVar1;
  double dVar2;
  float fVar3;
  CDemonActor *this_ptr;
  CVector3f *pCVar4;
  float10 fVar5;
  CDemonActor *in_stack_00000004;
  uint local_f0;
  uint uStack_ec;
  CBoundingBox3D local_e8;
  byte local_d0 [12];
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f *pCStack_9c;
  CVector3f CStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f CStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f *local_28;
  float fStack_24;
  int local_20;
  float local_1c;
  float local_18;
  
  in_stack_00000004[0x17a].orient.heading = 0.0;
  local_18 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= local_18) && (in_stack_00000004[0x1b].unk1 == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    local_28 = &(in_stack_00000004->location).position;
    local_20 = 0;
    local_1c = 0.0;
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= (int)local_1c) break;
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20),
                            g_CLadderClassInfo.name_hash);
      if ((this_ptr != (CDemonActor *)0x0) &&
         (ABS((in_stack_00000004->location).position.y -
              ((this_ptr->location).position.y + this_ptr[2].location.position.z)) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (this_ptr,(CVector3f *)local_d0,local_28);
        if ((ABS((float)local_d0._8_4_) <= (float)4) && ((float)local_d0._8_4_ <= 0.0)
           ) {
          (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&local_e8);
          if (local_e8.max.z < (float)local_d0._8_4_) {
            if (local_e8.max.z + 1.0 < (float)local_d0._8_4_) goto LAB_005c2488;
            local_d0._8_4_ = local_e8.max.z;
          }
          if ((float)local_d0._8_4_ < local_e8.min.z) {
            if ((float)local_d0._8_4_ < local_e8.min.z + (float)-1) goto LAB_005c2488;
            local_d0._8_4_ = local_e8.min.z;
          }
          fStack_74 = local_e8.min.z + local_e8.max.z;
          fStack_8c = fStack_74 * 0.5f;
          fStack_6c = local_e8.max.y + (float)local_d0._4_4_;
          fStack_70 = local_e8.max.x + (float)local_d0._0_4_;
          fStack_c0 = fStack_6c * 0.5f;
          fStack_88 = fStack_70 * 0.5f;
          fStack_84 = fStack_c0;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr,&CStack_80,(CVector3f *)(local_d0 + 8));
          if ((CVector3f *)(local_d0 + 8) != pCVar4) {
            local_d0._8_4_ = pCVar4->x;
            fStack_c4 = pCVar4->y;
            fStack_c0 = pCVar4->z;
          }
          fStack_c4 = fStack_c4 + this_ptr[2].location.position.z;
          fStack_a4 = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_a0 = (in_stack_00000004->orient_matrix).m[1].z;
          pCStack_9c = (CVector3f *)(in_stack_00000004->orient_matrix).m[2].z;
          fStack_b0 = (this_ptr->orient_matrix).m[0].z;
          fStack_ac = (this_ptr->orient_matrix).m[1].z;
          fStack_a8 = (this_ptr->orient_matrix).m[2].z;
          fVar5 = (float10)fcos((float10)0.261799387791667);
          fVar3 = ABS((float)pCStack_9c * fStack_a8 + fStack_a4 * fStack_b0 + fStack_a0 * fStack_ac)
          ;
          dVar2 = (double)fVar3;
          fStack_38 = fStack_a0;
          fStack_34 = fStack_b0;
          fStack_30 = fStack_ac;
          fStack_2c = fStack_a8;
          local_28 = pCStack_9c;
          local_1c = fStack_a4;
          if (fVar5 <= (float10)fVar3) {
            pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (in_stack_00000004,&CStack_68,&(this_ptr->location).position);
            if (0.0 < pCVar4->z) {
              uStack_ec = (uint)((ulonglong)dVar2 >> 0x20);
              local_f0 = SUB84(dVar2,0);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Ladder dot : %f\n",local_f0,uStack_ec);
              in_stack_00000004[0x17a].orient.heading = (float)this_ptr;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)(in_stack_00000004 + 1),0x2b,1);
              in_stack_00000004[0x8d].create_event[0x48] = '\0';
              in_stack_00000004[0x8d].create_event[0x49] = '\0';
              in_stack_00000004[0x8d].create_event[0x4a] = '\0';
              in_stack_00000004[0x8d].create_event[0x4b] = '\0';
              CStack_98.y = this_ptr[2].location.position.z;
              CStack_98.x = 0.0;
              CStack_98.z = -1.5;
              fStack_24 = CStack_98.y;
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr,&CStack_50,&CStack_98);
              fStack_5c = pCVar4->x - (in_stack_00000004->location).position.x;
              fStack_58 = pCVar4->y - (in_stack_00000004->location).position.y;
              piVar1 = &in_stack_00000004[0x17b].scale.y;
              fStack_54 = pCVar4->z - (in_stack_00000004->location).position.z;
              if ((float *)piVar1 != &fStack_5c) {
                *piVar1 = (int)fStack_5c;
                in_stack_00000004[0x17b].scale.z = (int)fStack_58;
                in_stack_00000004[0x17b].unk8 = (int)fStack_54;
              }
              CStack_44.x = (float)local_d0._8_4_ - (in_stack_00000004->location).position.x;
              CStack_44.y = fStack_c4 - (in_stack_00000004->location).position.y;
              CStack_44.z = fStack_c0 - (in_stack_00000004->location).position.z;
              pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_bc,&CStack_44);
              in_stack_00000004[0x17b].unk9 = (int)pCVar4->y;
              in_stack_00000004[0x17b].unk10 = 0x3f800000;
              return 1;
            }
          }
        }
      }
LAB_005c2488:
      local_1c = (float)((int)local_1c + 1);
      local_20 = local_20 + 4;
    }
  }
  return 0;
}
