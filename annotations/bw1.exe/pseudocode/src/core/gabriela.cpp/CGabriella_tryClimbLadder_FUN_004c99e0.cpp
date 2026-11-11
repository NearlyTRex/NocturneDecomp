// Name: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004c99e0
// Address: 004c99e0
// Address Range: [[004c99e0, 004c9dc5]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(CGabriella *this_ptr)

{
  CLocation *pCVar1;
  CLadder *pCVar2;
  byte bVar3;
  float afStackY_10e0 [1011];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  uint local_e0;
  uint local_d4;
  uint local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_74;
  float local_70;
  float local_6c;
  uint local_68;
  float local_64;
  float local_5c;
  uint local_50;
  uint local_4c;
  uint local_44;
  uint local_38;
  CLadder *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  float local_18;
  
  bVar3 = 0;
  local_1c = &(this_ptr->base).base.base.location;
  local_24 = 0;
  local_20 = 0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  do {
    if (g_CDemonSetPtr->actor_count <= local_24) {
      return 0;
    }
    pCVar2 = (CLadder *)
             core_actor_cpp_castToClassHash_FUN_0040c600
                       (*(uint *)((int)g_CDemonSetPtr->actors + local_20),
                        g_CLadderClassInfo.name_hash);
    local_2c = pCVar2;
    if (pCVar2 != (CLadder *)0x0) {
      pCVar1 = &(pCVar2->base).location;
      local_b0 = (local_1c->position).x - (pCVar1->position).x;
      local_ac = (local_1c->position).y - (pCVar2->base).location.position.y;
      local_a8 = (local_1c->position).z - (pCVar2->base).location.position.z;
      local_98 = local_b0;
      *(uint *)((int)&stack0xffffff6c + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff54 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff58 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if ((ABS(local_94) <= (float)_DAT_005e113c) &&
         (local_94 = 0.0, SQRT(local_90 * local_90 + local_98 * local_98) <= (float)_DAT_005e1144))
      {
        core_actor_cpp_FUN_00408bb0(this_ptr,pCVar1);
        local_f8 = local_80;
        (&stack0xffffff0c)[(uint)bVar3 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffff84 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffff10 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if ((ABS(local_f8) <= (float)_DAT_005e114c) &&
           (((float)_DAT_005e1154 <= local_f0 && ((double)local_f0 <= _DAT_005e1144)))) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff08);
          local_d4 = local_38;
          *(uint *)((int)&stack0xffffff30 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8);
          *(uint *)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_d0);
          if (ABS(local_18) <= (float)_DAT_005e115c) {
            local_28 = 0;
            core_actor_cpp_FUN_00408bb0(pCVar2,local_1c);
            local_ec = local_5c;
            (&stack0xffffff18)[(uint)bVar3 * 0xfffffffe] =
                 (float)*(uint *)(&stack0xffffffa8 + (uint)bVar3 * -8);
            *(uint *)((int)&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)(&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            if (&stack0xffffff08 != &stack0xffffff14) {
              local_f8 = local_ec;
              local_f4 = local_e8;
              local_f0 = local_e4;
            }
            if (local_f0 < 0.0) {
              local_28 = 1;
              local_f0 = -local_f0;
            }
            if (((ABS(local_f8) <= (float)_DAT_005e114c) && ((float)_DAT_005e1154 <= local_f0)) &&
               ((double)local_f0 <= _DAT_005e1144)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff08);
              local_50 = local_44;
              *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8) =
                   *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
              *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                   *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
              local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_4c);
              if (ABS(local_18) <= (float)_DAT_005e115c) {
                (this_ptr->base).ladder_to_climb = local_2c;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,0x16,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                local_c0 = 0x40000000;
                local_c8 = 0;
                local_c4 = 0;
                if (local_28 != 0) {
                  local_c0 = 0xc0000000;
                }
                core_actor_cpp_FUN_00408b40(local_2c,&stack0xffffff38);
                local_74 = local_a4;
                *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8) =
                     *(uint *)(&stack0xffffff60 + (uint)bVar3 * -8);
                *(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                     *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
                (this_ptr->base).base.base.location.position.x = local_74;
                (this_ptr->base).base.base.location.position.y = local_70;
                (this_ptr->base).base.base.location.position.z = local_6c;
                local_8c = (local_2c->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
                local_88 = (local_2c->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y;
                local_84 = (local_2c->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
                local_bc = local_8c;
                *(uint *)((int)&stack0xffffff48 + (uint)bVar3 * 0xfffffffe * 4) =
                     *(uint *)((int)&stack0xffffff78 + (uint)bVar3 * -8);
                *(uint *)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                     *(uint *)((int)&stack0xffffff7c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff44);
                local_68 = local_e0;
                *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * -8) =
                     *(uint *)(&stack0xffffff24 + (uint)bVar3 * -8);
                *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                     *(uint *)(&stack0xffffff28 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
                (this_ptr->base).base.base.orient.vec.y = local_64;
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
                          ((CDemonActor *)this_ptr);
                return 1;
              }
            }
          }
        }
      }
    }
    local_24 = local_24 + 1;
    local_20 = local_20 + 4;
  } while( true );
}
