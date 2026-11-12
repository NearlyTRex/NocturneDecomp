// Name: core_gabriela.cpp_FUN_004c83b0
// Address: 004c83b0
// Address Range: [[004c83b0, 004c8891]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004c83b0(CGabriella *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004c83b0(CGabriella *param_1,float param_2)

{
  CLadder *this_ptr;
  int iVar1;
  uint uVar2;
  EGroundType ground_type;
  CDemonActor *pCVar3;
  CGabriella *unaff_EBP;
  byte bVar4;
  float10 fVar5;
  float afStackY_109c [998];
  CGabriella *this_ptr_00;
  CVector3f *position;
  float *pfVar6;
  SDamageInfo *this_ptr_01;
  CGabriella *in_stack_ffffff08;
  float fStack_e4;
  float local_d4;
  float local_d0;
  float local_cc;
  CGabriella *local_bc;
  CGabriella *local_b8;
  float local_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  float afStack_a0 [4];
  float local_90;
  float fStack_80;
  float local_78 [3];
  float local_6c;
  float local_68;
  float local_64;
  CVector3f CStack_5c;
  float afStack_50 [2];
  CVector3f local_48;
  uint local_3c;
  float afStack_38 [4];
  float local_28;
  CCharacter *local_24;
  CCharacter *local_20;
  CMotionController *local_1c;
  UActorVTable local_18;
  int iStack_14;
  
  bVar4 = 0;
  local_1c = &(param_1->base).base.model.base;
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_00524270(local_1c,&param_2);
    switch(iVar1) {
    case 1:
    case 7:
      uVar2 = _DAT_01cc9124;
      if (iVar1 == 7) {
        uVar2 = _DAT_01cc9128;
      }
      core_skeleton_cpp_FUN_00569040(local_1c,uVar2);
      local_48.x = local_90;
      *(float *)((int)&local_48 + (uint)bVar4 * -8 + 4) = afStack_a0[(uint)bVar4 * -2 + 5];
      *(float *)((int)&local_48 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 6];
      this_ptr = (param_1->base).ladder_to_climb;
      if (this_ptr == (CLadder *)0x0) {
        if ((param_1->base).base.is_on_ground != 0) {
          local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_1c,2);
          if ((float)_DAT_005e10a4 < (float)local_18) {
            (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                      ((CDemonActor *)param_1,&local_48,1.7);
          }
          else {
            local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_1c,1);
            if ((float)local_18 <= (float)_DAT_005e10a4) {
              local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_00524a40(local_1c,3);
              if ((float)_DAT_005e10a4 < (float)local_18) {
                (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                          ((CDemonActor *)param_1,&local_48,1.0);
              }
            }
            else {
              (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                        ((CDemonActor *)param_1,&local_48,1.0);
            }
          }
        }
      }
      else {
        local_18 = (param_1->base).base.base.vtable;
        ground_type = (*((this_ptr->base).vtable._ub)->getGroundType)(&this_ptr->base);
        core_actor_cpp_FUN_00408b40(param_1,&local_48.y);
        iVar1 = iStack_14;
        position = &CStack_5c;
        CStack_5c.x = fStack_80;
        afStack_50[(uint)bVar4 * -2 + -2] = afStack_a0[(uint)bVar4 * -2 + 9];
        this_ptr_00 = param_1;
        afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
             afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
        (**(code **)(iVar1 + 0x28))
                  ((CDemonActor *)this_ptr_00,position,ground_type,(float)in_stack_ffffff08);
      }
      break;
    case 2:
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                         ((param_1->base).object_to_pick_up,DAT_007c5330);
      if (pCVar3 != (CDemonActor *)0x0) {
        if (pCVar3[4].blood_effect_color != 1) {
          param_1->flashlight_angle = -0.5235988;
          core_hero_cpp_FUN_004ec280(&param_1->base,0);
          break;
        }
        param_1->flashlight_angle = 0.31415927;
      }
    case 0x14:
      core_hero_cpp_FUN_004ec280(&param_1->base,0);
      break;
    case 3:
      (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)param_1,0,(CVector3f *)0x0);
      in_stack_ffffff08 = unaff_EBP;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)unaff_EBP,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar1);
      break;
    case 6:
      local_24 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           ((param_1->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      local_20 = local_24;
      if (local_24 != (CCharacter *)0x0) {
        core_skeleton_cpp_FUN_00569040(local_1c,_DAT_01cc9138);
        pfVar6 = afStack_a0 + 10;
        local_78[0] = (float)local_3c;
        afStack_a0[(uint)bVar4 * -2 + 0xb] = afStack_38[(uint)bVar4 * -2];
        afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xc] =
             afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        core_actor_cpp_FUN_00408b40(param_1,pfVar6);
        this_ptr_01 = (SDamageInfo *)&stack0xffffff10;
        local_b4 = CStack_5c.z;
        (&fStack_b0)[(uint)bVar4 * -2] = afStack_50[(uint)bVar4 * -2];
        *(float *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(this_ptr_01);
        local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,15.0);
        core_actor_cpp_FUN_00408bb0(local_20,&local_b4);
        local_6c = CStack_ac.y;
        afStack_a0[(uint)bVar4 * -2 + 0xe] = afStack_a0[(uint)bVar4 * -2 + -1];
        afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xf] =
             afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2];
        if (&stack0xffffff2c != afStack_a0 + 0xd) {
          local_d4 = local_6c;
          local_d0 = local_68;
          local_cc = local_64;
        }
        local_bc = param_1;
        local_b8 = param_1;
        (*(((local_24->base).vtable._uc)->_uc).processDamage)
                  (local_24,(SDamageInfo *)&stack0xffffff10);
        if (0.0 < fStack_e4) {
          fVar5 = (float10)fStack_e4 * (float10)_DAT_005e109c;
          round();
          unaff_EBP = (CGabriella *)(int)ROUND(fVar5);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                    (g_CGorePtr,&CStack_ac,(CVector3f *)0x0,
                     (int)((unaff_EBP->base).base.base.actor_name + 1),BLOOD_TYPE_RED);
          in_stack_ffffff08 = param_1;
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"kick1.wav");
          (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
          break;
        }
      }
      (param_1->base).base.grabbed_by = (CDemonActor *)0x0;
      break;
    case 0xf:
      pCVar3 = (param_1->base).base.grabbed_by;
      if (pCVar3 != (CDemonActor *)0x0) {
        core_actor_cpp_FUN_00408bb0(param_1,&pCVar3->location);
        afStack_38[2] = afStack_a0[1];
        afStack_38[(uint)bVar4 * -2 + 3] = afStack_a0[(uint)bVar4 * -2 + 2];
        afStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             afStack_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 3];
        if (0.0 < local_28) {
          (*((param_1->base).base.base.vtable._ub)->playSound)
                    ((CDemonActor *)param_1,"hit-gh[4,7].wav");
        }
      }
      break;
    case 0x11:
      (*((param_1->base).base.base.vtable._ub)->playSound)
                ((CDemonActor *)param_1,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      core_gabriela_cpp_CGabriella_collectAmmo_FUN_004c9990(param_1);
      break;
    case 0x15:
      core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004ec2c0(&param_1->base,0);
      break;
    case 0x16:
      iVar1 = core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(&param_1->base);
      if (iVar1 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_1c,0,1);
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
