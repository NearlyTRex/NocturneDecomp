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
  CCharacter *pCVar2;
  CDemonActor_vtable *pCVar3;
  float fVar4;
  CGhoul *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  CMotionList *this_ptr_01;
  int iVar10;
  double dVar11;
  float spawn_radius;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk3 + 0x2c));
  if ((*(int *)(this_ptr->unk3 + 0x3c) != 0) &&
     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(this_ptr->base).base.model.motion_controller), pSVar6->state_index == 0)
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
  pCVar2 = (CCharacter *)(this_ptr->base).victim;
  if ((pCVar2 != (CCharacter *)0x0) &&
     (pCVar5 = (CGhoul *)(*(((pCVar2->base).vtable._uc)->_uc).getGrabber)(pCVar2),
     pCVar5 == this_ptr)) {
    pCVar2 = (CCharacter *)(this_ptr->base).victim;
    (*(((pCVar2->base).vtable._uc)->_uc).releaseFromGrab)(pCVar2);
  }
  iVar10 = *(int *)(this_ptr->unk3 + 0x28);
  (this_ptr->base).base.hit_points = (this_ptr->base).base.hit_points - damage_info->damage_amount;
  if ((this_ptr->base).base.model.part_data.visibility_flags[iVar10] == 0) {
    (this_ptr->base).base.hit_points = 0.0;
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  if ((this_ptr->base).base.hit_points <= 0.0) {
    iVar10 = (this_ptr->base).special_form_flag;
    (this_ptr->base).base.hit_points = 0.0;
    if (iVar10 != 0) {
      core_charactr_cpp_CCharacter_shatter_FUN_0042b8e0((CCharacter *)this_ptr);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if ((pSVar6->state_index != 10) && (pSVar6->state_index != 9)) {
      if ((this_ptr->base).base.model.part_data.visibility_flags[*(int *)(this_ptr->unk3 + 0x28)] ==
          0) {
        this_ptr->lives_left = 0;
      }
      else {
        this_ptr->lives_left = this_ptr->lives_left + -1;
      }
      iVar10 = 6;
      if ((this_ptr->base).base.damage_decal_count < 1) {
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar7 != 0) {
          iVar10 = 7;
        }
      }
      else {
        iVar7 = 0;
        pCVar5 = this_ptr;
        if (0 < (this_ptr->base).base.damage_decal_count) {
          do {
            if ((pCVar5->base).base.damage_decals[0].part_index == *(int *)(this_ptr->unk3 + 0x24))
            {
              iVar10 = 8;
              break;
            }
            iVar7 = iVar7 + 1;
            pCVar5 = (CGhoul *)((int)&(pCVar5->base).base.base.orient + 8);
          } while (iVar7 < (this_ptr->base).base.damage_decal_count);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,iVar10,1);
      iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x34));
      if (iVar10 == 0) {
        uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"ghoul-die-!-?.wav @1.6");
        *(uint *)(this_ptr->unk3 + 0x34) = uVar8;
      }
      fVar9 = core_actor_cpp_getRandomFloat_FUN_0040cc10(4.0,10.0);
      fVar4 = (float)65536;
      this_ptr->arise_timer = 0xa0000;
      pCVar3 = (this_ptr->base).base.base.vtable._ub;
      spawn_radius = 7.00649e-44;
      iVar10 = 0x4e8999;
      dVar11 = round((double)(fVar9 * fVar4));
      *(int *)(this_ptr->unk1 + 8) = (int)ROUND(dVar11);
      (*pCVar3->spawnFlies)((CDemonActor *)this_ptr,iVar10,spawn_radius);
    }
  }
  else {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    iVar10 = pSVar6->state_index;
    if (((iVar10 == 0) || (iVar10 == 0xb || (iVar10 == 0xc || iVar10 == 2))) ||
       (iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.25), iVar10 != 0)) {
      iVar7 = 1;
      iVar10 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(this_ptr->base).base.model.motion_controller,(iVar10 == 0) + 3,iVar7);
    }
    else {
      core_actor_cpp_getRandomInt_FUN_0040cc70(1,2);
      _sprintf(&stack0xffffff88,"guul flinch%d");
      this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(this_ptr->base).base.model.motion_controller);
      iVar10 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_01);
      this_ptr->unk2[4] = '\0';
      this_ptr->unk2[5] = '\0';
      this_ptr->unk2[6] = -0x80;
      this_ptr->unk2[7] = '?';
      *(int *)(this_ptr->unk2 + 8) = iVar10;
    }
    iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(this_ptr->unk3 + 0x30));
    if (iVar10 == 0) {
      uVar8 = (*((this_ptr->base).base.base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"ghoul-mad-!-?.wav");
      *(uint *)(this_ptr->unk3 + 0x30) = uVar8;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  return;
}
