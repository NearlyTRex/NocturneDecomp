// Name: core_stranger.cpp_CStranger_tryDescendLadder_FUN_0056a780
// Address: 0056a780
// Address Range: [[0056a780, 0056accd]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0056a780(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
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
  uint local_114;
  float fStack_110;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  uint local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_64;
  uint uStack_58;
  float fStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CLocation *local_28;
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
      local_28 = &(this_ptr->base).base.base.location;
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
          core_actor_cpp_FUN_00408de0(this_ptr_00,local_28);
          local_f0 = local_114;
          (&stack0xffffff10)[(uint)bVar4 * -2 + 1] =
               *(uint *)(&stack0xfffffef4 + (uint)bVar4 * -8 + -4);
          (&stack0xffffff18)[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
               (float)*(uint *)(&stack0xfffffef4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          if ((ABS(local_e8) <= (float)_DAT_005ebb1d) && (local_e8 <= 0.0)) {
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)
                      (this_ptr_00,(CBoundingBox3D *)in_stack_fffffea0);
            puVar2 = (uint *)&stack0xfffffeb8;
            puVar3 = (uint *)&stack0xfffffec8;
            for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar3 = *puVar2;
              puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
              puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
            }
            if (fStack_124 < local_e8) {
              if (fStack_124 + 1.0 < local_e8) goto LAB_0056a80b;
              local_e8 = fStack_124;
            }
            if (local_e8 < fStack_130) {
              if (local_e8 < fStack_130 + (float)_DAT_005ebb25) goto LAB_0056a80b;
              local_e8 = fStack_130;
            }
            fStack_94 = fStack_130 + fStack_124;
            fStack_90 = fStack_12c + fStack_120;
            fStack_8c = fStack_128 + fStack_11c;
            fStack_c4 = fStack_130 + fStack_124;
            *(uint *)((int)&stack0xffffff34 + ((uint)bVar4 * -2 + 3) * 4) =
                 *(uint *)((int)&stack0xffffff34 + ((uint)bVar4 * -2 + 0xf) * 4);
            *(uint *)((int)&stack0xffffff34 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 4) * 4) =
                 *(uint *)
                  ((int)&stack0xffffff34 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10) * 4);
            fStack_100 = fStack_c4 * _DAT_005ebb0d;
            fStack_fc = fStack_c0 * _DAT_005ebb0d;
            fStack_f8 = fStack_bc * _DAT_005ebb0d;
            fStack_118 = fStack_c4 * _DAT_005ebb0d;
            *(uint *)((int)&stack0xfffffeec + (uint)bVar4 * -8) =
                 *(uint *)((int)&stack0xffffff04 + (uint)bVar4 * -8);
            *(uint *)(&stack0xfffffef4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4) =
                 *(uint *)((int)&stack0xffffff08 + ((uint)bVar4 * -2 + (uint)bVar4 * -2) * 4);
            fStack_e0 = fStack_110;
            in_stack_fffffea0 = unaff_EBP;
            core_actor_cpp_FUN_00408d70(unaff_EBP,&stack0xffffff18);
            fStack_7c = fStack_a0;
            (&stack0xffffff88)[(uint)bVar4 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffff34 + ((uint)bVar4 * -2 + 0xc) * 4);
            (&stack0xffffff88)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 (float)*(uint *)
                         ((int)&stack0xffffff34 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd) * 4);
            if (&stack0xffffff18 != &stack0xffffff84) {
              local_e8 = fStack_7c;
              fStack_e4 = fStack_78;
              fStack_e0 = fStack_74;
            }
            fStack_e4 = fStack_e4 + (unaff_EBP->base).base.model.bone_origins[0x18].z;
            fStack_30 = (this_ptr->base).base.base.orient_matrix.m[0].z;
            fStack_2c = (this_ptr->base).base.base.orient_matrix.m[1].z;
            fStack_34 = (this_ptr->base).base.base.orient_matrix.m[2].z;
            local_28 = (CLocation *)(unaff_EBP->base).base.base.orient_matrix.m[0].z;
            fStack_24 = (unaff_EBP->base).base.base.orient_matrix.m[1].z;
            local_1c = (unaff_EBP->base).base.base.orient_matrix.m[2].z;
            fVar5 = (float10)fcos((float10)_DAT_005ebb2d);
            if (fVar5 <= (float10)ABS(fStack_34 * local_1c +
                                      fStack_30 * (float)local_28 + fStack_2c * fStack_24)) {
              in_stack_fffffea0 = this_ptr;
              core_actor_cpp_FUN_00408de0(this_ptr,&(unaff_EBP->base).base.base.location);
              uStack_d0 = uStack_70;
              *(float *)((int)&stack0xffffff34 + (uint)bVar4 * 0xfffffffe * 4) =
                   (&stack0xffffff88)[(uint)bVar4 * -2 + 3];
              *(float *)((int)&stack0xffffff34 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 1) * 4) =
                   (&stack0xffffff88)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
              if (0.0 < fStack_c8) {
                engine_console_cpp_CConsole_printf_FUN_00436710
                          (g_CConsolePtr,"?Ladder dot : %f\n" + 1);
                this_ptr->ladder_to_descend = (CLadder *)unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0x2b,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                fStack_d8 = (unaff_EBP->base).base.model.bone_origins[0x18].z;
                uStack_dc = 0;
                uStack_d4 = 0xbfc00000;
                core_actor_cpp_FUN_00408d70(unaff_EBP,&stack0xffffff24);
                fStack_b8 = fStack_ac;
                *(uint *)((int)&stack0xffffff34 + ((uint)bVar4 * -2 + 6) * 4) =
                     *(uint *)((int)&stack0xffffff34 + ((uint)bVar4 * -2 + 9) * 4);
                *(uint *)
                 ((int)&stack0xffffff34 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 7) * 4) =
                     *(uint *)
                      ((int)&stack0xffffff34 + ((uint)bVar4 * -2 + (uint)bVar4 * -2 + 10) * 4);
                fStack_4c = fStack_b8 - (this_ptr->base).base.base.location.position.x;
                fStack_48 = fStack_b4 - (this_ptr->base).base.base.location.position.y;
                fStack_44 = fStack_b0 - (this_ptr->base).base.base.location.position.z;
                fStack_88 = fStack_4c;
                (&stack0xffffff7c)[(uint)bVar4 * 0xfffffffe] =
                     (&stack0xffffff88)[(uint)bVar4 * -2 + 0xc];
                (&stack0xffffff7c)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                     (&stack0xffffff88)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
                if (&this_ptr->ladder_offset != (CVector3f *)&stack0xffffff78) {
                  (this_ptr->ladder_offset).x = fStack_88;
                  (this_ptr->ladder_offset).y = fStack_84;
                  (this_ptr->ladder_offset).z = fStack_80;
                }
                fStack_40 = local_e8 - (this_ptr->base).base.base.location.position.x;
                fStack_3c = fStack_e4 - (this_ptr->base).base.base.location.position.y;
                fStack_38 = fStack_e0 - (this_ptr->base).base.base.location.position.z;
                fStack_f4 = fStack_40;
                (&stack0xffffff10)[(uint)bVar4 * 0xfffffffe] =
                     (&stack0xffffff88)[(uint)bVar4 * -2 + 0xf];
                (&stack0xffffff10)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                     (&stack0xffffff88)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff0c);
                uStack_58 = uStack_64;
                (&stack0xffffff88)[(uint)bVar4 * -2 + 9] = (&stack0xffffff88)[(uint)bVar4 * -2 + 6];
                (&stack0xffffff88)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                     (&stack0xffffff88)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
                this_ptr->ladder_blend_time = 1.0;
                this_ptr->ladder_facing_angle = fStack_54;
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
