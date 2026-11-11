// Name: core_stranger.cpp_CStranger_tryClimbLadder_FUN_0056a240
// Address: 0056a240
// Address Range: [[0056a240, 0056a77b]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0056a240(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0056a240(CStranger *this_ptr)

{
  CConsole *pCVar1;
  CDemonActor *this_ptr_00;
  int iVar2;
  CLadder *unaff_EBP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float afStackY_1100 [1000];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_dc;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint uStack_b8;
  float fStack_b4;
  uint uStack_ac;
  uint uStack_a0;
  float fStack_98;
  uint uStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  float fStack_70;
  float local_6c;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CLocation *local_24;
  float local_20;
  int local_1c;
  CDemonActor *local_18;
  float local_14;
  
  bVar5 = 0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
                       ((CCharacter *)this_ptr,0);
  if ((float)_DAT_005ebabd <= local_14) {
    if (((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0) &&
       ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      local_24 = &(this_ptr->base).base.base.location;
      local_20 = 0.0;
      local_1c = 0;
      while( true ) {
        if (g_CDemonSetPtr->actor_count <= local_1c) break;
        this_ptr_00 = (CDemonActor *)
                      core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (*(uint *)((int)g_CDemonSetPtr->actors + (int)local_20),
                                 g_CLadderClassInfo.name_hash);
        local_18 = this_ptr_00;
        if ((this_ptr_00 != (CDemonActor *)0x0) &&
           (ABS((this_ptr->base).base.base.location.position.y - (this_ptr_00->location).position.y)
            <= (float)_DAT_005ebacd)) {
          core_actor_cpp_FUN_00408de0(this_ptr_00,local_24);
          local_6c = local_f0;
          (&stack0xffffff94)[(uint)bVar5 * -2 + 1] = (&stack0xffffff04)[(uint)bVar5 * -2 + 4];
          (&stack0xffffff9c)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
               (&stack0xffffff04)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
          if ((ABS(local_64) <= (float)_DAT_005ebad5) && (0.0 <= (double)local_64)) {
            (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,SUB84(__BITCAST_UINT64((double)local_64),0));
            puVar3 = (uint *)&stack0xfffffeb8;
            puVar4 = (uint *)&stack0xfffffec8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
              puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
            }
            if (fStack_124 < local_64) {
              if (fStack_124 + 1.0 < local_64) goto LAB_0056a2cb;
              local_64 = fStack_124;
            }
            if (local_64 < fStack_130) {
              if (local_64 < fStack_130 + (float)_DAT_005ebadd) goto LAB_0056a2cb;
              local_64 = fStack_130;
            }
            fStack_f4 = fStack_130 + fStack_124;
            local_f0 = fStack_12c + fStack_120;
            fStack_ec = fStack_128 + fStack_11c;
            fStack_88 = fStack_130 + fStack_124;
            (&stack0xffffff40)[(uint)bVar5 * -2 + 0xf] = (&stack0xffffff04)[(uint)bVar5 * -2 + 3];
            (&stack0xffffff40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
                 (&stack0xffffff04)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
            fStack_4c = fStack_88 * _DAT_005ebac5;
            fStack_48 = fStack_84 * _DAT_005ebac5;
            fStack_44 = fStack_80 * _DAT_005ebac5;
            fStack_40 = fStack_88 * _DAT_005ebac5;
            (&stack0xffffffac)[(uint)bVar5 * -2 + 6] = (&stack0xffffffac)[(uint)bVar5 * -2 + 3];
            (&stack0xffffffac)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
                 (&stack0xffffffac)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
            fStack_5c = fStack_38;
            core_actor_cpp_FUN_00408d70(unaff_EBP);
            fStack_100 = fStack_70;
            (&stack0xffffff04)[(uint)bVar5 * 0xfffffffe] =
                 (&stack0xffffff94)[(uint)bVar5 * 0xfffffffe];
            (&stack0xffffff04)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 (&stack0xffffff94)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            if (&stack0xffffff9c != &stack0xffffff00) {
              local_64 = fStack_100;
              fStack_60 = fStack_fc;
              fStack_5c = fStack_f8;
            }
            local_24 = (CLocation *)(this_ptr->base).base.base.orient_matrix.m[0].z;
            fStack_2c = (this_ptr->base).base.base.orient_matrix.m[1].z;
            fStack_34 = (this_ptr->base).base.base.orient_matrix.m[2].z;
            local_20 = (unaff_EBP->base).orient_matrix.m[0].z;
            fStack_30 = (unaff_EBP->base).orient_matrix.m[1].z;
            fStack_28 = (unaff_EBP->base).orient_matrix.m[2].z;
            fVar6 = (float10)fcos((float10)_DAT_005ebae5);
            if (fVar6 <= ABS((float10)fStack_34 * (float10)fStack_28 +
                             (float10)(float)local_24 * (float10)local_20 +
                             (float10)fStack_2c * (float10)fStack_30)) {
              core_actor_cpp_FUN_00408de0(this_ptr);
              uStack_a0 = uStack_ac;
              (&stack0xffffff40)[(uint)bVar5 * -2 + 9] = (&stack0xffffff40)[(uint)bVar5 * -2 + 6];
              (&stack0xffffff40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
                   (&stack0xffffff40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
              if (0.0 < fStack_98) {
                (this_ptr->base).ladder_to_climb = unaff_EBP;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0x2a,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                uStack_7c = 0;
                uStack_74 = 0x40000000;
                uStack_78 = 0;
                core_actor_cpp_FUN_00408d70(unaff_EBP,&stack0xffffff84);
                fStack_58 = fStack_dc;
                (&stack0xffffffac)[(uint)bVar5 * 0xfffffffe] =
                     (float)*(uint *)((int)&stack0xffffff28 + (uint)bVar5 * 0xfffffffe * 4);
                (&stack0xffffffac)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                     (float)*(uint *)
                             ((int)&stack0xffffff28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4)
                ;
                fStack_d0 = fStack_58 - (this_ptr->base).base.base.location.position.x;
                fStack_cc = fStack_54 - (this_ptr->base).base.base.location.position.y;
                fStack_c8 = fStack_50 - (this_ptr->base).base.base.location.position.z;
                fStack_c4 = fStack_d0;
                (&stack0xffffff40)[(uint)bVar5 * 0xfffffffe] =
                     (float)*(uint *)((int)&stack0xffffff28 + ((uint)bVar5 * -2 + 3) * 4);
                (&stack0xffffff40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                     (float)*(uint *)
                             ((int)&stack0xffffff28 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4)
                ;
                if (&this_ptr->ladder_offset != (CVector3f *)&stack0xffffff3c) {
                  (this_ptr->ladder_offset).x = fStack_c4;
                  (this_ptr->ladder_offset).y = fStack_c0;
                  (this_ptr->ladder_offset).z = fStack_bc;
                }
                fStack_10c = local_64 - (this_ptr->base).base.base.location.position.x;
                fStack_108 = fStack_60 - (this_ptr->base).base.base.location.position.y;
                fStack_104 = fStack_5c - (this_ptr->base).base.base.location.position.z;
                fStack_118 = fStack_10c;
                *(uint *)(&stack0xfffffeec + (uint)bVar5 * -8) =
                     *(uint *)((int)&stack0xfffffef8 + (uint)bVar5 * -8);
                *(uint *)(&stack0xfffffef0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
                     *(uint *)
                      ((int)&stack0xfffffefc + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
                uStack_b8 = uStack_94;
                (&stack0xffffff40)[(uint)bVar5 * -2 + 3] =
                     (&stack0xffffff40)[(uint)bVar5 * -2 + 0xc];
                (&stack0xffffff40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                     (&stack0xffffff40)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd];
                this_ptr->ladder_facing_angle = fStack_b4;
                pCVar1 = g_CConsolePtr;
                this_ptr->ladder_blend_time = 1.0;
                engine_console_cpp_FUN_00436710(pCVar1,"Climbing ladder %s\n",unaff_EBP);
                return 1;
              }
            }
          }
        }
LAB_0056a2cb:
        local_1c = local_1c + 1;
        local_20 = (float)((int)local_20 + 4);
      }
    }
  }
  return 0;
}
