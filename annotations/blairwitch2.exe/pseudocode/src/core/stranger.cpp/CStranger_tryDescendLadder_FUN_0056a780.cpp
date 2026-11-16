// Name: core_stranger.cpp_CStranger_tryDescendLadder_FUN_0056a780
// Address: 0056a780
// Address Range: [[0056a780, 0056accd]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0056a780(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0056a780(CStranger *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  CStranger *unaff_EBP;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float10 fVar5;
  float afStackY_1100 [998];
  CStranger *in_stack_fffffea0;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  CVector3f local_114;
  float fStack_100;
  float afStack_fc [2];
  CVector3f CStack_f4;
  CVector3f local_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f *local_28;
  float fStack_24;
  int local_20;
  float local_1c;
  CDemonActor *local_18;
  float local_14;
  
  bVar4 = 0;
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                       ((CCharacter *)this_ptr,0);
  if ((float)_DAT_005ebb05 <= local_14) {
    if (((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      local_28 = &(this_ptr->base).base.base.location.position;
      local_20 = 0;
      local_1c = 0.0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= local_20) break;
        this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (*(CDemonActor **)((int)g_CDemonSetPtr->actors + (int)local_1c),
                                 g_CLadderClassInfo.name_hash);
        local_18 = this_ptr_00;
        if ((this_ptr_00 != (CDemonActor *)0x0) &&
           (ABS((this_ptr->base).base.base.location.position.y -
                ((this_ptr_00->location).position.y +
                this_ptr_00[1].particle_systems[0].fade_duration)) <= (float)_DAT_005ebb15)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0(this_ptr_00,local_28,&local_114)
          ;
          CStack_f4.y = local_114.x;
          *(uint *)((int)&CStack_f4 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&local_114 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&local_e8 + ((uint)bVar4 * -2 + (uint)bVar4 * -2) * 4) =
               *(uint *)((int)&local_114 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          if ((ABS(local_e8.x) <= (float)_DAT_005ebb1d) && (local_e8.x <= 0.0)) {
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                      (this_ptr_00,(CBoundingBox3D *)in_stack_fffffea0);
            puVar2 = (uint *)&stack0xfffffeb8;
            puVar3 = (uint *)&stack0xfffffec8;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
              puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
            }
            if (fStack_124 < local_e8.x) {
              if (fStack_124 + 1.0 < local_e8.x) goto LAB_0056a80b;
              local_e8.x = fStack_124;
            }
            if (local_e8.x < fStack_130) {
              if (local_e8.x < fStack_130 + (float)_DAT_005ebb25) goto LAB_0056a80b;
              local_e8.x = fStack_130;
            }
            fStack_94 = fStack_130 + fStack_124;
            afStack_90[0] = fStack_12c + fStack_120;
            afStack_90[1] = fStack_128 + fStack_11c;
            afStack_cc[2] = fStack_130 + fStack_124;
            afStack_cc[(uint)bVar4 * -2 + 3] = afStack_90[(uint)bVar4 * -2];
            afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                 afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            fStack_100 = afStack_cc[2] * _DAT_005ebb0d;
            afStack_fc[0] = afStack_cc[3] * _DAT_005ebb0d;
            afStack_fc[1] = fStack_bc * _DAT_005ebb0d;
            fStack_118 = afStack_cc[2] * _DAT_005ebb0d;
            *(float *)((int)&local_114 + (uint)bVar4 * -8) = afStack_fc[(uint)bVar4 * -2];
            *(float *)((int)&local_114 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
                 afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            local_e8.z = local_114.y;
            in_stack_fffffea0 = unaff_EBP;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)unaff_EBP,&local_e8,&CStack_a0);
            CStack_7c.x = CStack_a0.x;
            afStack_90[(uint)bVar4 * -2 + 6] = *(float *)((int)&CStack_a0 + (uint)bVar4 * -8 + 4);
            afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                 *(float *)((int)&CStack_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            if (&local_e8 != (CVector3f *)(afStack_90 + 5)) {
              local_e8.x = CStack_7c.x;
              local_e8.y = CStack_7c.y;
              local_e8.z = CStack_7c.z;
            }
            local_e8.y = local_e8.y + (unaff_EBP->base).base.model.bone_origins[0x18].z;
            fStack_30 = (this_ptr->base).base.base.orient_matrix.m[0].z;
            fStack_2c = (this_ptr->base).base.base.orient_matrix.m[1].z;
            fStack_34 = (this_ptr->base).base.base.orient_matrix.m[2].z;
            local_28 = (CVector3f *)(unaff_EBP->base).base.base.orient_matrix.m[0].z;
            fStack_24 = (unaff_EBP->base).base.base.orient_matrix.m[1].z;
            local_1c = (unaff_EBP->base).base.base.orient_matrix.m[2].z;
            fVar5 = (float10)fcos((float10)_DAT_005ebb2d);
            if (fVar5 <= (float10)ABS(fStack_34 * local_1c +
                                      fStack_30 * (float)local_28 + fStack_2c * fStack_24)) {
              in_stack_fffffea0 = this_ptr;
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        ((CDemonActor *)this_ptr,&(unaff_EBP->base).base.base.location.position,
                         &CStack_70);
              fStack_d0 = CStack_70.x;
              afStack_cc[(uint)bVar4 * -2] = *(float *)((int)&CStack_70 + (uint)bVar4 * -8 + 4);
              afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                   *(float *)((int)&CStack_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
              if (0.0 < afStack_cc[1]) {
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (g_CConsolePtr,"?Ladder dot : %f\n" + 1);
                this_ptr->ladder_to_descend = (CLadder *)unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0x2b,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                CStack_dc.y = (unaff_EBP->base).base.model.bone_origins[0x18].z;
                CStack_dc.x = 0.0;
                CStack_dc.z = -1.5;
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                          ((CDemonActor *)unaff_EBP,&CStack_dc,&CStack_ac);
                fStack_b8 = CStack_ac.x;
                afStack_cc[(uint)bVar4 * -2 + 6] =
                     *(float *)((int)&CStack_ac + (uint)bVar4 * -8 + 4);
                afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                     *(float *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
                afStack_54[2] = fStack_b8 - (this_ptr->base).base.base.location.position.x;
                afStack_54[3] = fStack_b4 - (this_ptr->base).base.base.location.position.y;
                fStack_44 = fStack_b0 - (this_ptr->base).base.base.location.position.z;
                afStack_90[2] = afStack_54[2];
                afStack_90[(uint)bVar4 * -2 + 3] = afStack_54[(uint)bVar4 * -2 + 3];
                afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                     afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
                if (&this_ptr->ladder_offset != (CVector3f *)(afStack_90 + 2)) {
                  (this_ptr->ladder_offset).x = afStack_90[2];
                  (this_ptr->ladder_offset).y = afStack_90[3];
                  (this_ptr->ladder_offset).z = fStack_80;
                }
                fStack_40 = local_e8.x - (this_ptr->base).base.base.location.position.x;
                fStack_3c = local_e8.y - (this_ptr->base).base.base.location.position.y;
                fStack_38 = local_e8.z - (this_ptr->base).base.base.location.position.z;
                CStack_f4.x = fStack_40;
                *(float *)((int)&CStack_f4 + (uint)bVar4 * -8 + 4) =
                     afStack_54[(uint)bVar4 * -2 + 6];
                *(float *)((int)&CStack_f4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                     afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                          (&CStack_f4,&CStack_64);
                fStack_58 = CStack_64.x;
                afStack_54[(uint)bVar4 * -2] = *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + 4);
                afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                     *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
                this_ptr->ladder_blend_time = 1.0;
                this_ptr->ladder_facing_angle = afStack_54[0];
                return 1;
              }
            }
          }
        }
LAB_0056a80b:
        local_20 = local_20 + 1;
        local_1c = (float)((int)local_1c + 4);
      }
    }
  }
  return 0;
}
