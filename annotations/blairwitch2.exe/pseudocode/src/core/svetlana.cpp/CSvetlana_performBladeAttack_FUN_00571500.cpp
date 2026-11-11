// Name: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00571500
// Address: 00571500
// Address Range: [[00571500, 005716eb]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00571500(CSvetlana *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00571500(CSvetlana *this_ptr,int bone_index)

{
  CDeformableModelInstance *pCVar1;
  CSvetlana *this_ptr_00;
  CSkeleton *pCVar2;
  CSkeleton *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  float afStackY_1060 [998];
  float *pfVar8;
  char *sound_name;
  SDamageInfo local_b4;
  uint local_78;
  float afStack_74 [5];
  uint local_60;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c [3];
  float local_30 [3];
  uint local_24;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  iVar5 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                     (&(this_ptr->base).base.model);
  local_18 = -1;
  pCVar3 = pCVar2;
  iVar6 = local_18;
  if (0 < pCVar2->bone_count) {
    do {
      iVar6 = iVar5;
      if (bone_index == pCVar3->bone_list[0].parent_index) break;
      iVar5 = iVar5 + 1;
      pCVar3 = (CSkeleton *)((pCVar3->motion_list).state_names[1] + 2);
      iVar6 = local_18;
    } while (iVar5 < pCVar2->bone_count);
  }
  local_18 = iVar6;
  if (local_18 == -1) {
    _DAT_01d046a0 = "..\\core\\svetlana.cpp";
    _DAT_01d046a4 = 0x2ef;
    core_main_c_FUN_004e4500("Can't find svetlana's parent bone");
  }
  pCVar1 = &(this_ptr->base).base.model;
  core_skeleton_cpp_FUN_00546a90(pCVar1,bone_index);
  pfVar8 = afStack_74 + 0x11;
  local_30[0] = afStack_74[2];
  afStack_74[(uint)bVar7 * -2 + 0x12] = afStack_74[(uint)bVar7 * -2 + 3];
  afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x13] =
       afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar8);
  local_48.x = (float)local_24;
  afStack_74[(uint)bVar7 * -2 + 0xc] = afStack_74[(uint)bVar7 * -2 + 0x15];
  afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x16];
  core_skeleton_cpp_FUN_00546a90(pCVar1,local_18);
  pfVar8 = afStack_74 + 0xe;
  local_3c[0] = (float)local_78;
  afStack_74[(uint)bVar7 * -2 + 0xf] = afStack_74[(uint)bVar7 * -2];
  afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
       afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar8);
  local_54.x = (float)local_60;
  afStack_74[(uint)bVar7 * -2 + 9] = afStack_74[(uint)bVar7 * -2 + 6];
  afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  iVar5 = 0;
  iVar6 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar6) {
        if (local_14 == 0) {
          sound_name = "svetlana-miss?.wav";
        }
        else {
          sound_name = "svetlana-attack?.wav";
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
        return;
      }
      this_ptr_00 = *(CSvetlana **)((int)g_CDemonSetPtr->characters + iVar5);
      if (this_ptr_00 != this_ptr) break;
LAB_00571618:
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&local_b4);
    local_b4.damage_amount = 15.0;
    local_b4.ammo_type = AMMO_TYPE_SILVER;
    local_b4.dismember_prob = 0.7;
    local_b4.damage_type = DAMAGE_TYPE_ATTACK_BLADE;
    iVar4 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).testDamageLine)
                      ((CCharacter *)this_ptr_00,(CVector3f *)(afStack_74 + 0xb),
                       (CVector3f *)(afStack_74 + 8),&local_b4,(CVector3f *)0x0);
    if (iVar4 == 0) goto LAB_00571618;
    local_14 = 1;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
