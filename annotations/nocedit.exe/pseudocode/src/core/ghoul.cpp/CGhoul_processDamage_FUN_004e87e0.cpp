// Name: core_ghoul.cpp_CGhoul_processDamage_FUN_004e87e0
// Address: 004e87e0
// Address Range: [[004e87e0, 004e896d] [004e89a9, 004e8ba1]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004e87e0(CGhoul *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_ghoul_cpp_CGhoul_processDamage_FUN_004e87e0(CGhoul *this_ptr,SDamageInfo *damage_info)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar2;
  float fVar3;
  CGhoul *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  CMotionList *this_ptr_01;
  int iVar9;
  double dVar10;
  float spawn_radius;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk3 + 0x2c));
  if ((*(int *)(this_ptr->unk3 + 0x3c) != 0) &&
     (pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller), pSVar5->state_index == 0)
     ) {
    this_ptr->unk3[0x40] = '\0';
    this_ptr->unk3[0x41] = '\0';
    this_ptr->unk3[0x42] = -0x10;
    this_ptr->unk3[0x43] = 'A';
    this_ptr->unk3[0x3c] = '\0';
    this_ptr->unk3[0x3d] = '\0';
    this_ptr->unk3[0x3e] = '\0';
    this_ptr->unk3[0x3f] = '\0';
    this_ptr->unk3[0x44] = '\x01';
    this_ptr->unk3[0x45] = '\0';
    this_ptr->unk3[0x46] = '\0';
    this_ptr->unk3[0x47] = '\0';
    pCVar1 = &(this_ptr->base).base.base.location;
    this_ptr->unk3[0x48] = '\0';
    this_ptr->unk3[0x49] = '\0';
    this_ptr->unk3[0x4a] = -0x80;
    this_ptr->unk3[0x4b] = '?';
    if ((CLocation *)(this_ptr->unk3 + 0x4c) != pCVar1) {
      *(float *)(this_ptr->unk3 + 0x4c) = (pCVar1->position).x;
      *(float *)(this_ptr->unk3 + 0x50) = (this_ptr->base).base.base.location.position.y;
      *(float *)(this_ptr->unk3 + 0x54) = (this_ptr->base).base.base.location.position.z;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"go berzerk\n");
  }
  if (damage_info->damage_type == 0x6c) {
    this_ptr->unk3[0x38] = '\0';
    this_ptr->unk3[0x39] = '\0';
    this_ptr->unk3[0x3a] = -0x80;
    this_ptr->unk3[0x3b] = '@';
  }
  core_ghoul_cpp_CGhoul_FUN_004e8520(this_ptr);
  iVar9 = *(int *)((this_ptr->base).unk2 + 4);
  if ((iVar9 != 0) &&
     (pCVar4 = (CGhoul *)(**(code **)(*(int *)(iVar9 + 0x154) + 0x108))(), pCVar4 == this_ptr)) {
    (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x104))();
  }
  iVar9 = *(int *)(this_ptr->unk3 + 0x28);
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_visibility_flags[iVar9] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    iVar9 = (this_ptr->base).unk3;
    (this_ptr->base).base.hit_points = 0.0;
    if (iVar9 != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0((CCharacter *)this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar5->state_index != 10) && (pSVar5->state_index != 9)) {
      if ((this_ptr->base).base.model.part_visibility_flags[*(int *)(this_ptr->unk3 + 0x28)] == 0) {
        this_ptr->lives_left = 0;
      }
      else {
        this_ptr->lives_left = this_ptr->lives_left + -1;
      }
      iVar9 = 6;
      if ((this_ptr->base).base.field60_0x2df4 < 1) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar6 != 0) {
          iVar9 = 7;
        }
      }
      else {
        iVar6 = 0;
        pCVar4 = this_ptr;
        if (0 < (this_ptr->base).base.field60_0x2df4) {
          do {
            if (*(int *)(pCVar4->base).base.field61_0x2df8 == *(int *)(this_ptr->unk3 + 0x24)) {
              iVar9 = 8;
              break;
            }
            iVar6 = iVar6 + 1;
            pCVar4 = (CGhoul *)&(pCVar4->base).base.base.orient.heading;
          } while (iVar6 < (this_ptr->base).base.field60_0x2df4);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar9,1);
      iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x34));
      if (iVar9 == 0) {
        uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"ghoul-die-!-?.wav @1.6");
        *(uint *)(this_ptr->unk3 + 0x34) = uVar7;
      }
      fVar8 = core_actor_cpp_getRandomFloat_FUN_0040cc10(4.0,10.0);
      fVar3 = (float)65536;
      this_ptr->arise_timer = 0xa0000;
      pCVar2 = (this_ptr->base).base.base.vtable._ub;
      spawn_radius = 7.00649e-44;
      iVar9 = 0x4e8999;
      dVar10 = round((double)(fVar8 * fVar3));
      *(int *)(this_ptr->unk1 + 0x10) = (int)ROUND(dVar10);
      (*pCVar2->spawnFlies)((CDemonActor *)this_ptr,iVar9,spawn_radius);
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    iVar9 = pSVar5->state_index;
    if (((iVar9 == 0) || (iVar9 == 0xb || (iVar9 == 0xc || iVar9 == 2))) ||
       (iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.25), iVar9 != 0)) {
      iVar6 = 1;
      iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,(iVar9 == 0) + 3,iVar6);
    }
    else {
      iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,2);
      sprintf(&stack0xffffff88,"guul flinch%d",iVar9);
      this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->base).base.model.motion_controller);
      iVar9 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_01);
      this_ptr->unk2[4] = '\0';
      this_ptr->unk2[5] = '\0';
      this_ptr->unk2[6] = -0x80;
      this_ptr->unk2[7] = '?';
      *(int *)(this_ptr->unk2 + 8) = iVar9;
    }
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x30));
    if (iVar9 == 0) {
      uVar7 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ghoul-mad-!-?.wav");
      *(uint *)(this_ptr->unk3 + 0x30) = uVar7;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
