// Name: core_boneguy.cpp_CBoneGuy_FUN_0041d680
// Address: 0041d680
// Address Range: [[0041d680, 0041d72f] [0041d853, 0041d89c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d680(CBoneGuy *this_ptr)

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_CBoneGuy_explode2(uint param_1) */

void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d680(CBoneGuy *this_ptr)

{
  COrientation *pCVar1;
  int iVar2;
  CBodyPart *pCVar3;
  CVector3f *pCVar4;
  CBoneGuy *pCVar5;
  CLocation *pCVar6;
  CVector3f *pCVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
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
  
  bVar11 = 0;
  core_charactr_cpp_CCharacter_FUN_0042d060((CCharacter *)this_ptr);
  this_ptr->blown_up = 1;
  this_ptr->param = 0.0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       (&(this_ptr->base).base.model);
  iVar2 = local_24->num_parts;
  this_ptr->box_count = iVar2;
  if (0x14 < iVar2) {
    g_CurrentFilename = "..\\core\\boneguy.cpp";
    g_CurrentLineNumber = 0x443;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < local_24->num_parts) {
    local_20 = &this_ptr->box_list_pos;
    local_2c = &(this_ptr->base).base.base.orient;
    local_28 = &(this_ptr->base).base.base.location;
    pCVar7 = &this_ptr->box_list_orient;
    local_1c = this_ptr;
    do {
      local_38 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_38;
      local_34 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,10.0);
      local_14 = local_34;
      local_30 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
      local_14 = local_30;
      pCVar3 = core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
      core_charactr_cpp_CCharacter_FUN_0042bd30((CCharacter *)this_ptr);
      pCVar3->unk[0xb6c] = '\x01';
      pCVar3->unk[0xb6d] = '\0';
      pCVar3->unk[0xb6e] = '\0';
      pCVar3->unk[0xb6f] = '\0';
      core_bodypart_cpp_FUN_0041a050();
      *(CBodyPart **)local_1c->unk2 = pCVar3;
      pCVar6 = &(pCVar3->base).location;
      pCVar4 = local_20 + local_18 * 6;
      if ((CLocation *)pCVar4 != pCVar6) {
        pCVar4->x = (pCVar6->position).x;
        pCVar4->y = (pCVar3->base).location.position.y;
        pCVar4->z = (pCVar3->base).location.position.z;
      }
      pCVar1 = &(pCVar3->base).orient;
      if ((COrientation *)pCVar7 != pCVar1) {
        pCVar7->x = pCVar1->pitch;
        pCVar7->y = (pCVar3->base).orient.bank;
        pCVar7->z = (pCVar3->base).orient.heading;
      }
      pCVar7 = pCVar7 + 6;
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20((CVector3f *)&(pCVar3->base).orient,&local_48);
      pCVar5 = (CBoneGuy *)((local_1c->base).base.base.orient_matrix.m + 1);
      local_18 = local_18 + 1;
      puVar9 = (uint *)((int)local_1c + (uint)bVar11 * -8 + 49000);
      (local_1c->box_list_start_orient).w = local_48.w;
      puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar8 = (uint *)((int)&local_48 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      *puVar9 = *(uint *)((int)&local_48 + (uint)bVar11 * -8 + 4);
      *puVar10 = *puVar8;
      puVar10[(uint)bVar11 * -2 + 1] = puVar8[(uint)bVar11 * -2 + 1];
      local_1c = pCVar5;
    } while (local_18 < local_24->num_parts);
  }
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-fallapart.wav");
  return;
}
