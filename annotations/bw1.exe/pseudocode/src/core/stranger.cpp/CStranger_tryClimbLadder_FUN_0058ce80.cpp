// Name: core_stranger.cpp_CStranger_tryClimbLadder_FUN_0058ce80
// Address: 0058ce80
// Address Range: [[0058ce80, 0058d3bb]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0058ce80(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0058ce80(CStranger *this_ptr)

{
  CConsole *this_ptr_00;
  CDemonActor *this_ptr_01;
  int iVar1;
  CLadder *unaff_EBP;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1100 [1000];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  CVector3f CStack_118;
  float fStack_10c;
  float afStack_108 [2];
  CVector3f CStack_100;
  float fStack_f4;
  CVector3f local_f0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [2];
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f local_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f *local_24;
  float local_20;
  int local_1c;
  CDemonActor *local_18;
  float local_14;
  
  bVar4 = 0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
                       ((CCharacter *)this_ptr,0);
  if ((float)0.98999999999999999 <= local_14) {
    if (((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      local_24 = &(this_ptr->base).base.base.location.position;
      local_20 = 0.0;
      local_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= local_1c) break;
        this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_20),
                                 g_CLadderClassInfo.name_hash);
        local_18 = this_ptr_01;
        if ((this_ptr_01 != (CDemonActor *)0x0) &&
           (ABS((this_ptr->base).base.base.location.position.y - (this_ptr_01->location).position.y)
            <= (float)2)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(this_ptr_01,local_24,&local_f0);
          CStack_70.y = local_f0.x;
          *(uint *)((int)&CStack_70 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_f0 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&local_64 + ((uint)bVar4 * -2 + (uint)bVar4 * -2) * 4) =
               *(uint *)((int)&local_f0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          if ((ABS(local_64.x) <= (float)4) && (0.0 <= (double)local_64.x)) {
            (*((this_ptr_01->vtable)._ub)->getBoundingBox)(this_ptr_01,SUB84(__BITCAST_UINT64((double)local_64.x),0));
            puVar2 = (uint *)&stack0xfffffeb8;
            puVar3 = (uint *)&stack0xfffffec8;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
              puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
            }
            if (fStack_124 < local_64.x) {
              if (fStack_124 + 1.0 < local_64.x) goto LAB_0058cf0b;
              local_64.x = fStack_124;
            }
            if (local_64.x < fStack_130) {
              if (local_64.x < fStack_130 + (float)-1) goto LAB_0058cf0b;
              local_64.x = fStack_130;
            }
            fStack_f4 = fStack_130 + fStack_124;
            local_f0.x = fStack_12c + fStack_120;
            local_f0.y = fStack_128 + fStack_11c;
            fStack_88 = fStack_130 + fStack_124;
            afStack_84[(uint)bVar4 * -2] = *(float *)((int)&local_f0 + (uint)bVar4 * -8);
            afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 *(float *)((int)&local_f0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4);
            afStack_54[2] = fStack_88 * 0.5f;
            afStack_54[3] = afStack_84[0] * 0.5f;
            fStack_44 = afStack_84[1] * 0.5f;
            fStack_40 = fStack_88 * 0.5f;
            afStack_54[(uint)bVar4 * -2 + 6] = afStack_54[(uint)bVar4 * -2 + 3];
            afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            local_64.z = fStack_38;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      (&unaff_EBP->base,&local_64,&CStack_70);
            CStack_100.x = CStack_70.x;
            afStack_108[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_70 + (uint)bVar4 * -8 + 4);
            afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                 *(float *)((int)&CStack_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            if (&local_64 != (CVector3f *)(afStack_108 + 2)) {
              local_64.x = CStack_100.x;
              local_64.y = CStack_100.y;
              local_64.z = CStack_100.z;
            }
            local_24 = (CVector3f *)(this_ptr->base).base.base.orient_matrix.m[0].z;
            fStack_2c = (this_ptr->base).base.base.orient_matrix.m[1].z;
            fStack_34 = (this_ptr->base).base.base.orient_matrix.m[2].z;
            local_20 = (unaff_EBP->base).orient_matrix.m[0].z;
            fStack_30 = (unaff_EBP->base).orient_matrix.m[1].z;
            fStack_28 = (unaff_EBP->base).orient_matrix.m[2].z;
            fVar5 = (float10)fcos((float10)0.261799387791667);
            if (fVar5 <= ABS((float10)fStack_34 * (float10)fStack_28 +
                             (float10)(float)local_24 * (float10)local_20 +
                             (float10)fStack_2c * (float10)fStack_30)) {
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                        ((CDemonActor *)this_ptr,&(unaff_EBP->base).location.position,&CStack_ac);
              fStack_a0 = CStack_ac.x;
              afStack_9c[(uint)bVar4 * -2] = *(float *)((int)&CStack_ac + (uint)bVar4 * -8 + 4);
              afStack_9c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                   *(float *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
              if (0.0 < afStack_9c[1]) {
                (this_ptr->base).ladder_to_climb = unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,0x37,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                CStack_7c.x = 0.0;
                CStack_7c.z = 2.0;
                CStack_7c.y = 0.0;
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                          (&unaff_EBP->base,&CStack_7c,&CStack_dc);
                fStack_58 = CStack_dc.x;
                afStack_54[(uint)bVar4 * -2] = *(float *)((int)&CStack_dc + (uint)bVar4 * -8 + 4);
                afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                     *(float *)((int)&CStack_dc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
                fStack_d0 = fStack_58 - (this_ptr->base).base.base.location.position.x;
                afStack_cc[0] = afStack_54[0] - (this_ptr->base).base.base.location.position.y;
                afStack_cc[1] = afStack_54[1] - (this_ptr->base).base.base.location.position.z;
                afStack_cc[2] = fStack_d0;
                afStack_cc[(uint)bVar4 * -2 + 3] = afStack_cc[(uint)bVar4 * -2];
                afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                     afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
                if (&this_ptr->ladder_offset != (CVector3f *)(afStack_cc + 2)) {
                  (this_ptr->ladder_offset).x = afStack_cc[2];
                  (this_ptr->ladder_offset).y = afStack_cc[3];
                  (this_ptr->ladder_offset).z = fStack_bc;
                }
                fStack_10c = local_64.x - (this_ptr->base).base.base.location.position.x;
                afStack_108[0] = local_64.y - (this_ptr->base).base.base.location.position.y;
                afStack_108[1] = local_64.z - (this_ptr->base).base.base.location.position.z;
                CStack_118.x = fStack_10c;
                *(float *)((int)&CStack_118 + (uint)bVar4 * -8 + 4) = afStack_108[(uint)bVar4 * -2];
                *(float *)((int)&CStack_118 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                     afStack_108[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
                          (&CStack_118,&CStack_94);
                fStack_b8 = CStack_94.x;
                afStack_cc[(uint)bVar4 * -2 + 6] =
                     *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + 4);
                afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                     *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
                this_ptr->ladder_facing_angle = fStack_b4;
                this_ptr_00 = g_CConsolePtr;
                this_ptr->ladder_blend_time = 1.0;
                engine_console_cpp_CConsole_printf_FUN_00445430
                          (this_ptr_00,"Climbing ladder %s\n");
                return 1;
              }
            }
          }
        }
LAB_0058cf0b:
        local_1c = local_1c + 1;
        local_20 = (float)((int)local_20 + 4);
      }
    }
  }
  return 0;
}
