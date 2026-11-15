// Name: core_gabriela.cpp_CGabriella_processMotionEvents_FUN_004c83b0
// Address: 004c83b0
// Address Range: [[004c83b0, 004c8891]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004c83b0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_processMotionEvents_FUN_004c83b0(CGabriella *this_ptr,float delta_time)

{
  CLadder *this_ptr_00;
  int iVar1;
  int bone_index;
  EGroundType ground_type;
  CDemonActor *pCVar2;
  CMotionController *unaff_EBP;
  byte bVar3;
  double dVar4;
  float afStackY_109c [997];
  CGabriella *this_ptr_01;
  CVector3f *pCVar5;
  SDamageInfo *this_ptr_02;
  char *in_stack_ffffff08;
  float fStack_e4;
  float local_d4;
  float local_d0;
  float local_cc;
  CGabriella *local_bc;
  CGabriella *local_b8;
  byte local_b4 [8];
  float fStack_ac;
  CVector3f local_a8;
  CVector3f local_9c;
  CVector3f local_90;
  byte auStack_80 [12];
  float afStack_74 [4];
  float local_64;
  byte auStack_5c [12];
  float afStack_50 [2];
  byte local_48 [8];
  float fStack_40;
  CVector3f local_3c;
  float local_30;
  float afStack_2c [2];
  CCharacter *local_24;
  CCharacter *local_20;
  CDeformableModelInstance *local_1c;
  UActorVTable local_18;
  int iStack_14;
  
  bVar3 = 0;
  local_1c = &(this_ptr->base).base.model;
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270(&local_1c->base,&delta_time);
    switch(iVar1) {
    case 1:
    case 7:
      bone_index = _DAT_01cc9124;
      if (iVar1 == 7) {
        bone_index = _DAT_01cc9128;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                (local_1c,bone_index,&local_90);
      local_48._0_4_ = local_90.x;
      *(uint *)(local_48 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar3 * -8 + 4);
      (&fStack_40)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
           *(float *)((int)&local_90 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      this_ptr_00 = (this_ptr->base).ladder_to_climb;
      if (this_ptr_00 == (CLadder *)0x0) {
        if ((this_ptr->base).base.is_on_ground != 0) {
          local_18 = (UActorVTable)
                     core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                               (&local_1c->base,2);
          if ((float)_DAT_005e10a4 < (float)local_18) {
            (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                      ((CDemonActor *)this_ptr,(CVector3f *)local_48,1.7);
          }
          else {
            local_18 = (UActorVTable)
                       core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                 (&local_1c->base,1);
            if ((float)local_18 <= (float)_DAT_005e10a4) {
              local_18 = (UActorVTable)
                         core_motion_cpp_CMotionController_getStateBlendWeight_FUN_00524a40
                                   (&local_1c->base,3);
              if ((float)_DAT_005e10a4 < (float)local_18) {
                (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                          ((CDemonActor *)this_ptr,(CVector3f *)local_48,1.0);
              }
            }
            else {
              (*((this_ptr->base).base.base.vtable._ub)->processFootstepAtOffset)
                        ((CDemonActor *)this_ptr,(CVector3f *)local_48,1.0);
            }
          }
        }
      }
      else {
        local_18 = (this_ptr->base).base.base.vtable;
        ground_type = (*((this_ptr_00->base).vtable._ub)->getGroundType)(&this_ptr_00->base);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,(CVector3f *)(local_48 + 4),(CVector3f *)auStack_80);
        iVar1 = iStack_14;
        pCVar5 = (CVector3f *)auStack_5c;
        auStack_5c._0_4_ = auStack_80._0_4_;
        *(uint *)(auStack_5c + (uint)bVar3 * -8 + 4) =
             *(uint *)(auStack_80 + (uint)bVar3 * -8 + 4);
        this_ptr_01 = this_ptr;
        afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1] =
             afStack_74[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1];
        (**(code **)(iVar1 + 0x28))
                  ((CDemonActor *)this_ptr_01,pCVar5,ground_type,(float)in_stack_ffffff08);
      }
      break;
    case 2:
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                         ((this_ptr->base).object_to_pick_up,DAT_007c5330);
      if (pCVar2 != (CDemonActor *)0x0) {
        if (pCVar2[4].blood_effect_color != 1) {
          this_ptr->flashlight_angle = -0.5235988;
          core_hero_cpp_CHero_executeObjectPickup_FUN_004ec280(&this_ptr->base,0);
          break;
        }
        this_ptr->flashlight_angle = 0.31415927;
      }
    case 0x14:
      core_hero_cpp_CHero_executeObjectPickup_FUN_004ec280(&this_ptr->base,0);
      break;
    case 3:
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)this_ptr,0,(CVector3f *)0x0);
      in_stack_ffffff08 = (char *)unaff_EBP;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(unaff_EBP,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,iVar1);
      break;
    case 6:
      local_24 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           ((this_ptr->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      local_20 = local_24;
      if (local_24 != (CCharacter *)0x0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
                  (local_1c,_DAT_01cc9138,&local_3c);
        pCVar5 = (CVector3f *)(auStack_80 + 8);
        auStack_80._8_4_ = local_3c.x;
        afStack_74[(uint)bVar3 * -2] = *(float *)((int)&local_3c + (uint)bVar3 * -8 + 4);
        afStack_74[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             *(float *)((int)&local_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                  ((CDemonActor *)this_ptr,pCVar5,(CVector3f *)(auStack_5c + 8));
        this_ptr_02 = (SDamageInfo *)&stack0xffffff10;
        local_b4._0_4_ = auStack_5c._8_4_;
        *(float *)(local_b4 + (uint)bVar3 * -8 + 4) = afStack_50[(uint)bVar3 * -2];
        (&fStack_ac)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
             afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_02);
        local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  (&local_20->base,(CVector3f *)local_b4,&local_a8);
        afStack_74[2] = local_a8.x;
        afStack_74[(uint)bVar3 * -2 + 3] = *(float *)((int)&local_a8 + (uint)bVar3 * -8 + 4);
        afStack_74[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
             *(float *)((int)&local_a8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        if (&stack0xffffff2c != afStack_74 + 2) {
          local_d4 = afStack_74[2];
          local_d0 = afStack_74[3];
          local_cc = local_64;
        }
        local_bc = this_ptr;
        local_b8 = this_ptr;
        (*(((local_24->base).vtable._uc)->_uc).processDamage)
                  (local_24,(SDamageInfo *)&stack0xffffff10);
        if (0.0 < (double)fStack_e4) {
          dVar4 = round((double)fStack_e4 * _DAT_005e109c);
          iStack_14 = (int)ROUND(dVar4);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                    (g_CGorePtr,(CVector3f *)(local_b4 + 4),(CVector3f *)0x0,iStack_14 + 1,
                     BLOOD_TYPE_RED);
          in_stack_ffffff08 = "kick1.wav";
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"kick1.wav");
          (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      (this_ptr->base).base.grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      pCVar2 = (this_ptr->base).base.grabbed_by;
      if (pCVar2 != (CDemonActor *)0x0) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,&(pCVar2->location).position,&local_9c);
        local_30 = local_9c.x;
        afStack_2c[(uint)bVar3 * -2] = *(float *)((int)&local_9c + (uint)bVar3 * -8 + 4);
        afStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             *(float *)((int)&local_9c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        if (0.0 < afStack_2c[1]) {
          (*((this_ptr->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)this_ptr,"hit-gh[4,7].wav");
        }
      }
      break;
    case 0x11:
      (*((this_ptr->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)this_ptr,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      core_gabriela_cpp_CGabriella_collectAmmo_FUN_004c9990(this_ptr);
      break;
    case 0x15:
      core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(&this_ptr->base,0);
      break;
    case 0x16:
      iVar1 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&this_ptr->base);
      if (iVar1 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&local_1c->base,0,1);
      }
    }
    if (delta_time <= 0.0) {
      return;
    }
  } while( true );
}
