// Name: core_ghoul.cpp_CGhoul_processDamage_FUN_004c40f0
// Address: 004c40f0
// Address Range: [[004c40f0, 004c44b1]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004c40f0(CGhoul *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004c40f0(CGhoul *this_ptr,SDamageInfo *damage_info)

{
  CGhoul *pCVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  CMotionList *this_ptr_00;
  float10 fVar5;
  char *motion_name;
  char acStack_78 [100];
  float fStack_14;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10b48);
  if ((*(int *)&this_ptr->field_0x10b58 != 0) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4), *(int *)(iVar2 + 0x24) == 0)) {
    *(uint *)&this_ptr->field_0x10b5c = 0x41f00000;
    *(uint *)&this_ptr->field_0x10b58 = 0;
    *(uint *)&this_ptr->field_0x10b60 = 1;
    *(uint *)&this_ptr->field_0x10b64 = 0x3f800000;
    if (&this_ptr->field_0x10b68 != &this_ptr->field_0x20) {
      *(uint *)&this_ptr->field_0x10b68 = *(uint *)&this_ptr->field_0x20;
      *(uint *)&this_ptr->field_0x10b6c = *(uint *)&this_ptr->field_0x24;
      *(uint *)&this_ptr->field_0x10b70 = *(uint *)&this_ptr->field_0x28;
    }
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"@go berzerk\n" + 1);
  }
  if (*(int *)(damage_info + 0x30) == 0x6c) {
    *(uint *)&this_ptr->field_0x10b54 = 0x40800000;
  }
  core_ghoul_cpp_CGhoul_processDismemberment_FUN_004c3e30(this_ptr,damage_info);
  iVar2 = *(int *)&this_ptr->field_0x10a78;
  if ((iVar2 != 0) &&
     (pCVar1 = (CGhoul *)(**(code **)(*(int *)(iVar2 + 0x2b0) + 0xfc))(iVar2), pCVar1 == this_ptr))
  {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x10a78 + 0x2b0) + 0xf8))
              (*(int *)&this_ptr->field_0x10a78);
  }
  *(float *)&this_ptr->field_0x25a8 =
       *(float *)&this_ptr->field_0x25a8 - *(float *)(damage_info + 4);
  if (*(int *)(&this_ptr->field_0x23f4 + *(int *)&this_ptr->field_0x10b44 * 4) == 0) {
    *(uint *)&this_ptr->field_0x25a8 = 0;
  }
  if (*(float *)&this_ptr->field_0x25a8 <= 0.0) {
    *(uint *)&this_ptr->field_0x25a8 = 0;
    if (*(int *)&this_ptr->field_0x10ae8 != 0) {
      core_charactr_cpp_FUN_00427210((CCharacter *)this_ptr);
      core_enemy_cpp_FUN_00488890(this_ptr,damage_info);
      return;
    }
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    if ((*(int *)(iVar2 + 0x24) != 10) && (*(int *)(iVar2 + 0x24) != 9)) {
      if (*(int *)(&this_ptr->field_0x23f4 + *(int *)&this_ptr->field_0x10b44 * 4) == 0) {
        *(uint *)&this_ptr->field_0x10b14 = 0;
      }
      else {
        *(int *)&this_ptr->field_0x10b14 = *(int *)&this_ptr->field_0x10b14 + -1;
      }
      iVar2 = 6;
      if (*(int *)&this_ptr->field_0x3448 < 1) {
        iVar3 = core_actor_cpp_FUN_0040d060(0.5);
        if (iVar3 != 0) {
          iVar2 = 7;
        }
      }
      else {
        iVar3 = 0;
        pCVar1 = this_ptr;
        if (0 < *(int *)&this_ptr->field_0x3448) {
          do {
            if (*(int *)&pCVar1->field_0x344c == *(int *)&this_ptr->field_0x10b40) {
              iVar2 = 8;
              break;
            }
            iVar3 = iVar3 + 1;
            pCVar1 = (CGhoul *)&pCVar1->field_0x38;
          } while (iVar3 < *(int *)&this_ptr->field_0x3448);
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,iVar2,1);
      iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x10b50);
      if (iVar2 == 0) {
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                          (this_ptr,"ghoul-die-!-?.wav @1.6");
        *(uint *)&this_ptr->field_0x10b50 = uVar4;
      }
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40800000,0x41200000);
      fVar5 = (float10)fStack_14 * (float10)_DAT_005d9247;
      *(uint *)&this_ptr->field_0x10b04 = 0xa0000;
      iVar2 = round(0x32,0x41c80000);
      *(int *)&this_ptr->field_0x10b00 = (int)ROUND(fVar5);
      (**(code **)(iVar2 + 0xb0))(this_ptr);
    }
  }
  else {
    iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
    iVar2 = *(int *)(iVar2 + 0x24);
    if (((iVar2 == 0) || (iVar2 == 0xb || (iVar2 == 0xc || iVar2 == 2))) ||
       (iVar2 = core_actor_cpp_FUN_0040d060(0.25), iVar2 != 0)) {
      iVar3 = 1;
      iVar2 = core_actor_cpp_FUN_0040d060(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,(iVar2 == 0) + 3,iVar3);
    }
    else {
      iVar2 = core_actor_cpp_FUN_0040cfc0(1,2);
      FUN_005b7790(acStack_78,"guul flinch%d",iVar2);
      iVar2 = 1;
      motion_name = acStack_78;
      this_ptr_00 = core_motion_cpp_FUN_00503860((CMotionController *)&this_ptr->field_0x2b4);
      iVar2 = core_motion_cpp_FUN_00502f10(this_ptr_00,motion_name,iVar2);
      *(uint *)&this_ptr->field_0x10b0c = 0x3f800000;
      *(int *)&this_ptr->field_0x10b10 = iVar2;
    }
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x10b4c);
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                        (this_ptr,"ghoul-mad-!-?.wav");
      *(uint *)&this_ptr->field_0x10b4c = uVar4;
      core_enemy_cpp_FUN_00488890(this_ptr,damage_info);
      return;
    }
  }
  core_enemy_cpp_FUN_00488890(this_ptr,damage_info);
  return;
}
