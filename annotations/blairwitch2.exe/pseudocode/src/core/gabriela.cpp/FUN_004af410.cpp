// Name: core_gabriela.cpp_FUN_004af410
// Address: 004af410
// Address Range: [[004af410, 004af8f1]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004af410(CGabriella *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004af410(CGabriella *param_1,float param_2)

{
  CLadder *this_ptr;
  int iVar1;
  int bone_index;
  EGroundType ground_type;
  CDemonActor *pCVar2;
  CGabriella *unaff_EBP;
  byte bVar3;
  float10 fVar4;
  float afStackY_109c [998];
  CGabriella *this_ptr_00;
  CVector3f *position;
  float *pfVar5;
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
  CVector3f local_90;
  float fStack_80;
  float afStack_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  CVector3f CStack_5c;
  float afStack_50 [2];
  CVector3f local_48;
  CVector3f local_3c;
  uint local_30;
  float afStack_2c [2];
  CCharacter *local_24;
  CCharacter *local_20;
  CDeformableModelInstance *local_1c;
  UActorVTable local_18;
  int iStack_14;
  
  bVar3 = 0;
  local_1c = &(param_1->base).base.model;
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0(&local_1c->base,&param_2);
    switch(iVar1) {
    case 1:
    case 7:
      bone_index = _DAT_01cb0694;
      if (iVar1 == 7) {
        bone_index = _DAT_01cb0698;
      }
      core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                (local_1c,bone_index,&local_90);
      local_48.x = local_90.x;
      *(uint *)((int)&local_48 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&local_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&local_90 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      this_ptr = (param_1->base).ladder_to_climb;
      if (this_ptr == (CLadder *)0x0) {
        if ((param_1->base).base.is_on_ground != 0) {
          local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_1c,2);
          if ((float)_DAT_005d702b < (float)local_18) {
            (*((param_1->base).base.base.vtable._ub)->processFootstepAtOffset)
                      ((CDemonActor *)param_1,&local_48,1.7);
          }
          else {
            local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_1c,1);
            if ((float)local_18 <= (float)_DAT_005d702b) {
              local_18._ub = (CDemonActor_vtable *)core_motion_cpp_FUN_005038a0(local_1c,3);
              if ((float)_DAT_005d702b < (float)local_18) {
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
        core_actor_cpp_FUN_00408d70(param_1,&local_48.y);
        iVar1 = iStack_14;
        position = &CStack_5c;
        CStack_5c.x = fStack_80;
        afStack_50[(uint)bVar3 * -2 + -2] = afStack_7c[(uint)bVar3 * -2];
        this_ptr_00 = param_1;
        afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1] =
             afStack_7c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1];
        (**(code **)(iVar1 + 0x30))
                  ((CDemonActor *)this_ptr_00,position,ground_type,(float)in_stack_ffffff08);
      }
      break;
    case 2:
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         ((param_1->base).object_to_pick_up,DAT_007bcc84);
      if (pCVar2 != (CDemonActor *)0x0) {
        if (pCVar2[2].particle_systems[4].position.z != 1.4013e-45) {
          param_1->flashlight_angle = -0.5235988;
          core_hero_cpp_FUN_004cff50(&param_1->base,0);
          break;
        }
        param_1->flashlight_angle = 0.31415927;
      }
    case 0x14:
      core_hero_cpp_FUN_004cff50(&param_1->base,0);
      break;
    case 3:
      (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                ((CCharacter *)param_1,0,(CVector3f *)0x0);
      in_stack_ffffff08 = unaff_EBP;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)unaff_EBP,0,1);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar1);
      break;
    case 6:
      local_24 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           ((param_1->base).base.grabbed_by,g_CEnemyClassInfo.name_hash);
      local_20 = local_24;
      if (local_24 != (CCharacter *)0x0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  (local_1c,_DAT_01cb06a8,&local_3c);
        pfVar5 = afStack_7c + 1;
        afStack_7c[1] = local_3c.x;
        afStack_7c[(uint)bVar3 * 0xfffffffe + 2] =
             (float)*(uint *)((int)&local_3c + (uint)bVar3 * -8 + 4);
        afStack_7c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 3] =
             (float)*(uint *)((int)&local_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        core_actor_cpp_FUN_00408d70(param_1,pfVar5);
        this_ptr_01 = (SDamageInfo *)&stack0xffffff10;
        local_b4 = CStack_5c.z;
        (&fStack_b0)[(uint)bVar3 * -2] = afStack_50[(uint)bVar3 * -2];
        *(float *)((int)&CStack_ac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             afStack_50[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_01);
        local_18 = (UActorVTable)core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,15.0);
        core_actor_cpp_FUN_00408de0(local_20,&local_b4);
        local_6c = CStack_ac.y;
        afStack_7c[(uint)bVar3 * 0xfffffffe + 5] = afStack_a0[(uint)bVar3 * -2 + -1];
        afStack_7c[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 6] =
             afStack_a0[(uint)bVar3 * -2 + (uint)bVar3 * -2];
        if (&stack0xffffff2c != afStack_7c + 4) {
          local_d4 = local_6c;
          local_d0 = local_68;
          local_cc = local_64;
        }
        local_bc = param_1;
        local_b8 = param_1;
        (*(((local_24->base).vtable._uc)->_uc).processDamage)
                  (local_24,(SDamageInfo *)&stack0xffffff10);
        if (0.0 < fStack_e4) {
          fVar4 = (float10)fStack_e4 * (float10)_DAT_005d7023;
          round();
          unaff_EBP = (CGabriella *)(int)ROUND(fVar4);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
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
      pCVar2 = (param_1->base).base.grabbed_by;
      if (pCVar2 != (CDemonActor *)0x0) {
        core_actor_cpp_FUN_00408de0(param_1,&pCVar2->location);
        local_30 = afStack_a0[1];
        afStack_2c[(uint)bVar3 * -2] = afStack_a0[(uint)bVar3 * -2 + 2];
        afStack_2c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
             afStack_a0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 3];
        if (0.0 < afStack_2c[1]) {
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
      core_gabriela_cpp_CGabriella_collectAmmo_FUN_004b0a40(param_1);
      break;
    case 0x15:
      core_hero_cpp_FUN_004cff90(param_1,0);
      break;
    case 0x16:
      iVar1 = core_hero_cpp_CHero_tryOpenDoor_FUN_004cf230(&param_1->base);
      if (iVar1 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&local_1c->base,0,1);
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
