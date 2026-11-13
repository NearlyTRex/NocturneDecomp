// Name: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00594140
// Address: 00594140
// Address Range: [[00594140, 0059432b]]
// Convention: __cdecl
// Signature: void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00594140(CSvetlana *this_ptr,int bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00594140(CSvetlana *this_ptr,int bone_index)

{
  CDeformableModelInstance *this_ptr_00;
  CSvetlana *this_ptr_01;
  CSkeleton *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1060 [998];
  float *pfVar7;
  char *sound_name;
  SDamageInfo local_b4;
  CVector3f local_78;
  CVector3f local_6c;
  uint local_60;
  float afStack_5c [2];
  CVector3f local_54;
  CVector3f local_48;
  float local_3c [3];
  float local_30 [3];
  uint local_24;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar4 = 0;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                     (&(this_ptr->base).base.model);
  local_18 = -1;
  pCVar2 = pCVar1;
  iVar5 = local_18;
  if (0 < pCVar1->bone_count) {
    do {
      iVar5 = iVar4;
      if (bone_index == pCVar2->bone_list[0].parent_index) break;
      iVar4 = iVar4 + 1;
      pCVar2 = (CSkeleton *)((pCVar2->motion_list).state_names[1] + 2);
      iVar5 = local_18;
    } while (iVar4 < pCVar1->bone_count);
  }
  local_18 = iVar5;
  if (local_18 == -1) {
    _DAT_01d1d400 = "..\\core\\svetlana.cpp";
    _DAT_01d1d404 = 0x2ef;
    core_main_c_FUN_005030e0("Can't find svetlana's parent bone");
  }
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,bone_index,&local_6c);
  pfVar7 = afStack_5c + 0xb;
  local_30[0] = local_6c.x;
  afStack_5c[(uint)bVar6 * -2 + 0xc] = *(float *)((int)&local_6c + (uint)bVar6 * -8 + 4);
  afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       *(float *)((int)&local_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar7);
  local_48.x = (float)local_24;
  afStack_5c[(uint)bVar6 * -2 + 6] = afStack_5c[(uint)bVar6 * -2 + 0xf];
  afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (this_ptr_00,local_18,&local_78);
  pfVar7 = afStack_5c + 8;
  local_3c[0] = local_78.x;
  afStack_5c[(uint)bVar6 * -2 + 9] = *(float *)((int)&local_78 + (uint)bVar6 * -8 + 4);
  afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
       *(float *)((int)&local_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar7);
  local_54.x = (float)local_60;
  afStack_5c[(uint)bVar6 * -2 + 3] = afStack_5c[(uint)bVar6 * -2];
  afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  iVar4 = 0;
  iVar5 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar5) {
        if (local_14 == 0) {
          sound_name = "svetlana-miss?.wav";
        }
        else {
          sound_name = "svetlana-attack?.wav";
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)((CDemonActor *)this_ptr,sound_name);
        return;
      }
      this_ptr_01 = *(CSvetlana **)((int)g_CDemonSetPtr->characters + iVar4);
      if (this_ptr_01 != this_ptr) break;
LAB_00594258:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(&local_b4);
    local_b4.damage_amount = 15.0;
    local_b4.ammo_type = AMMO_TYPE_SILVER;
    local_b4.dismember_prob = 0.7;
    local_b4.damage_type = DAMAGE_TYPE_ATTACK_BLADE;
    iVar3 = (*(((this_ptr_01->base).base.base.vtable._uc)->_uc).testDamageLine)
                      ((CCharacter *)this_ptr_01,(CVector3f *)(afStack_5c + 5),
                       (CVector3f *)(afStack_5c + 2),&local_b4,(CVector3f *)0x0);
    if (iVar3 == 0) goto LAB_00594258;
    local_14 = 1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
