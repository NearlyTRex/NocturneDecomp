// Name: core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0c0
// Address: 0041a0c0
// Address Range: [[0041a0c0, 0041a2dc]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0c0(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0c0(CBoneGuy *this_ptr)

{
  int iVar1;
  CBodyPart *body_part;
  uint *puVar2;
  byte *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1824 [1520];
  uint local_48;
  CVector3f local_38;
  UOrientationVector *local_2c;
  CVector3f *local_28;
  CDeformableModel *local_24;
  byte *local_20;
  CBoneGuy *local_1c;
  int local_18;
  uint local_14;
  
  bVar6 = 0;
  core_charactr_cpp_FUN_00428e00((CCharacter *)this_ptr);
  *(uint *)&this_ptr->field_0x11118 = 1;
  *(uint *)&this_ptr->field_0x1111c = 0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                       ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  iVar1 = *(int *)&local_24->field_0xc00;
  *(int *)&this_ptr->field_0x10b74 = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d046a0 = "..\\core\\boneguy.cpp";
    _DAT_01d046a4 = 0x444;
    core_main_c_FUN_004e4500("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < *(int *)&local_24->field_0xc00) {
    local_20 = &this_ptr->field_0x10b78;
    local_2c = (UOrientationVector *)&this_ptr->field_0x30;
    local_28 = (CVector3f *)&this_ptr->field_0x20;
    puVar4 = (uint *)&this_ptr->field_0x10b84;
    local_1c = this_ptr;
    do {
      local_38._0_4_ = core_actor_cpp_FUN_0040cf60(0xc0a00000,0x40a00000);
      local_14 = local_38._0_4_;
      local_38._4_4_ = core_actor_cpp_FUN_0040cf60(0,0x41200000);
      local_14 = local_38._4_4_;
      local_38._8_4_ = core_actor_cpp_FUN_0040cf60(0xc0a00000,0x40a00000);
      local_14 = local_38._8_4_;
      body_part = core_bodypart_cpp_FUN_004154f0
                            (local_28,local_2c,&local_38,(CDemonActor *)this_ptr,1,1,BLOOD_TYPE_NONE
                            );
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                ((CCharacter *)this_ptr,body_part,local_18,0);
      *(uint *)&body_part->field_0x10d8 = 1;
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      *(CBodyPart **)&local_1c->field_0x10bbc = body_part;
      puVar2 = (uint *)(local_20 + local_18 * 0x48);
      if (puVar2 != (uint *)&body_part->field_0x20) {
        *puVar2 = *(uint *)&body_part->field_0x20;
        puVar2[1] = *(uint *)&body_part->field_0x24;
        puVar2[2] = *(uint *)&body_part->field_0x28;
      }
      if (puVar4 != (uint *)&body_part->field_0x30) {
        *puVar4 = *(uint *)&body_part->field_0x30;
        puVar4[1] = *(uint *)&body_part->field_0x34;
        puVar4[2] = *(uint *)&body_part->field_0x38;
      }
      puVar4 = puVar4 + 0x12;
      core_xform_cpp_FUN_00594380(&body_part->field_0x30);
      puVar3 = &local_1c->field_0x48;
      local_18 = local_18 + 1;
      puVar2 = (uint *)((int)local_1c + (uint)bVar6 * -8 + 0x10ba4);
      *(uint *)&local_1c->field_0x10ba0 = local_48;
      puVar5 = puVar2 + (uint)bVar6 * -2 + 1;
      *puVar2 = *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      local_1c = (CBoneGuy *)puVar3;
    } while (local_18 < *(int *)&local_24->field_0xc00);
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,"boneguy-fallapart.wav");
  return;
}
