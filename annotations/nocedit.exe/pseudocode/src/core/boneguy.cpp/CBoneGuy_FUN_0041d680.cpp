// Name: core_boneguy.cpp_CBoneGuy_FUN_0041d680
// Address: 0041d680
// Address Range: [[0041d680, 0041d72f] [0041d853, 0041d89c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d680(CBoneGuy *this_ptr)

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_CBoneGuy_explode2(uint param_1) */

void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d680(CBoneGuy *this_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  CBoneGuy *pCVar3;
  CVector3f *pCVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1824 [1523];
  CQuaternion4f local_48;
  float local_38;
  float local_34;
  float local_30;
  COrientation *local_2c;
  CLocation *local_28;
  CDeformableModel *local_24;
  CVector3f *local_20;
  CBoneGuy *local_1c;
  int local_18;
  float local_14;
  
  bVar8 = 0;
  core_charactr_cpp_CCharacter_FUN_0042d060((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->param = 0.0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (&(this_ptr->base).base.model);
  iVar1 = local_24->num_parts;
  this_ptr->box_count = iVar1;
  if (0x14 < iVar1) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x443;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < local_24->num_parts) {
    local_20 = &this_ptr->box_list_pos;
    local_2c = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location;
    pCVar4 = &this_ptr->box_list_orient;
    local_1c = this_ptr;
    do {
      local_38 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_38;
      local_34 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,10.0);
      local_14 = local_34;
      local_30 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_30;
      iVar1 = core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      *(uint *)(iVar1 + 0xcc4) = 1;
      core_bodypart_cpp_FUN_0041a050();
      *(int *)local_1c->unk2 = iVar1;
      pCVar2 = local_20 + local_18 * 6;
      if (pCVar2 != (CVector3f *)(iVar1 + 0x20)) {
        pCVar2->x = *(float *)(iVar1 + 0x20);
        pCVar2->y = *(float *)(iVar1 + 0x24);
        pCVar2->z = *(float *)(iVar1 + 0x28);
      }
      if (pCVar4 != (CVector3f *)(iVar1 + 0x30)) {
        pCVar4->x = *(float *)(iVar1 + 0x30);
        pCVar4->y = *(float *)(iVar1 + 0x34);
        pCVar4->z = *(float *)(iVar1 + 0x38);
      }
      pCVar4 = pCVar4 + 6;
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)(iVar1 + 0x30),&local_48);
      pCVar3 = (CBoneGuy *)((local_1c->base).base.base.orient_matrix.m + 1);
      local_18 = local_18 + 1;
      puVar6 = (uint *)((int)local_1c + (uint)bVar8 * -8 + 49000);
      (local_1c->box_list_start_orient).w = local_48.w;
      puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar5 = (uint *)((int)&local_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      *puVar6 = *(uint *)((int)&local_48 + (uint)bVar8 * -8 + 4);
      *puVar7 = *puVar5;
      puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
      local_1c = pCVar3;
    } while (local_18 < local_24->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-fallapart.wav");
  return;
}
