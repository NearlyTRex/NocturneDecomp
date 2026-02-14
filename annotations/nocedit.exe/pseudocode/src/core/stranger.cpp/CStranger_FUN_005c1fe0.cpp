// Name: core_stranger.cpp_CStranger_FUN_005c1fe0
// Address: 005c1fe0
// Address Range: [[005c1fe0, 005c23f2]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c1fe0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_FUN_005c1fe0(CStranger *this_ptr)

{
  CConsole *this_ptr_00;
  CDemonActor *this_ptr_01;
  CVector3f *pCVar1;
  float10 fVar2;
  CBoundingBox3D local_e0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f local_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  (this_ptr->base).ladder_to_climb = (CDemonActor *)0x0;
  local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                       ((CCharacter *)this_ptr,0);
  if ((((float)0.98999999999999999 <= local_14) &&
      ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    local_20 = &(this_ptr->base).base.base.location.position;
    local_1c = 0;
    local_18 = 0;
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= local_1c) break;
      this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_18),
                               g_CLadderClassInfo.name_hash);
      if ((this_ptr_01 != (CDemonActor *)0x0) &&
         (ABS((this_ptr->base).base.base.location.position.y - (this_ptr_01->location).position.y)
          <= (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr_01,&local_a4,local_20);
        if ((ABS(local_a4.z) <= (float)4) && (0.0 <= local_a4.z)) {
          (*((this_ptr_01->vtable)._ub)->getBoundingBox)(this_ptr_01,&local_e0);
          if (local_e0.max.x < local_a4.x) {
            if (local_e0.max.x + 1.0 < local_a4.x) goto LAB_005c2068;
            local_a4.x = local_e0.max.x;
          }
          if (local_a4.x < local_e0.min.x) {
            if (local_a4.x < local_e0.min.x + (float)-1) goto LAB_005c2068;
            local_a4.x = local_e0.min.x;
          }
          fStack_bc = local_e0.min.x + local_e0.max.x;
          fStack_c8 = fStack_bc * 0.5f;
          fStack_b4 = local_e0.min.z + local_e0.max.z;
          fStack_b8 = local_e0.min.y + local_e0.max.y;
          fStack_c0 = fStack_b4 * 0.5f;
          fStack_c4 = fStack_b8 * 0.5f;
          local_a4.z = fStack_c0;
          pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_01,&CStack_8c,&local_a4);
          if (&local_a4 != pCVar1) {
            local_a4.x = pCVar1->x;
            local_a4.y = pCVar1->y;
            local_a4.z = pCVar1->z;
          }
          fStack_b0 = (this_ptr->base).base.base.orient_matrix.m[0].z;
          fStack_ac = (this_ptr->base).base.base.orient_matrix.m[1].z;
          fStack_a8 = (this_ptr->base).base.base.orient_matrix.m[2].z;
          fStack_44 = (this_ptr_01->orient_matrix).m[0].z;
          fStack_40 = (this_ptr_01->orient_matrix).m[1].z;
          fStack_3c = (this_ptr_01->orient_matrix).m[2].z;
          fVar2 = (float10)fcos((float10)0.261799387791667);
          fStack_38 = fStack_b0;
          fStack_34 = fStack_ac;
          fStack_30 = fStack_a8;
          fStack_2c = fStack_44;
          fStack_28 = fStack_40;
          fStack_24 = fStack_3c;
          if (fVar2 <= ABS((float10)fStack_a8 * (float10)fStack_3c +
                           (float10)fStack_b0 * (float10)fStack_44 +
                           (float10)fStack_ac * (float10)fStack_40)) {
            pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)this_ptr,&CStack_98,&(this_ptr_01->location).position
                               );
            if (0.0 < pCVar1->z) {
              (this_ptr->base).ladder_to_climb = this_ptr_01;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0x2a,1);
              (this_ptr->base).player_control.action_states[3] = 0;
              CStack_5c.z = 2.0;
              CStack_5c.x = 0.0;
              CStack_5c.y = 0.0;
              pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr_01,&CStack_50,&CStack_5c);
              fStack_68 = pCVar1->x - (this_ptr->base).base.base.location.position.x;
              fStack_64 = pCVar1->y - (this_ptr->base).base.base.location.position.y;
              fStack_60 = pCVar1->z - (this_ptr->base).base.base.location.position.z;
              if ((float *)this_ptr->unk11 != &fStack_68) {
                *(float *)this_ptr->unk11 = fStack_68;
                *(float *)(this_ptr->unk11 + 4) = fStack_64;
                *(float *)(this_ptr->unk11 + 8) = fStack_60;
              }
              CStack_74.x = local_a4.x - (this_ptr->base).base.base.location.position.x;
              CStack_74.y = local_a4.y - (this_ptr->base).base.base.location.position.y;
              CStack_74.z = local_a4.z - (this_ptr->base).base.base.location.position.z;
              pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_80,&CStack_74);
              this_ptr_00 = g_CConsolePtr;
              *(float *)(this_ptr->unk11 + 0xc) = pCVar1->y;
              this_ptr->unk11[0x10] = '\0';
              this_ptr->unk11[0x11] = '\0';
              this_ptr->unk11[0x12] = -0x80;
              this_ptr->unk11[0x13] = '?';
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (this_ptr_00,"Climbing ladder %s\n",this_ptr_01);
              return 1;
            }
          }
        }
      }
LAB_005c2068:
      local_1c = local_1c + 1;
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
