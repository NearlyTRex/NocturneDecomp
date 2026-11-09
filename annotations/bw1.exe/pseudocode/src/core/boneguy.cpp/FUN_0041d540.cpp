// Name: core_boneguy.cpp_FUN_0041d540
// Address: 0041d540
// Address Range: [[0041d540, 0041d75c]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_FUN_0041d540(CBoneGuy *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boneguy_cpp_FUN_0041d540(CBoneGuy *this_ptr)

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
  core_charactr_cpp_FUN_004328c0((CCharacter *)this_ptr);
  *(uint *)&this_ptr->field_0xc888 = 1;
  *(uint *)&this_ptr->field_0xc88c = 0;
  local_24 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       ((CDeformableModelInstance *)&this_ptr->field_0x158);
  iVar1 = *(int *)&local_24->field_0xc00;
  *(int *)&this_ptr->field_0xc2e4 = iVar1;
  if (0x14 < iVar1) {
    _DAT_01d1d400 = "..\\core\\boneguy.cpp";
    _DAT_01d1d404 = 0x444;
    core_main_c_FUN_005030e0("CBoneGuy::explode - Not enough containers");
  }
  local_18 = 0;
  if (0 < *(int *)&local_24->field_0xc00) {
    local_20 = &this_ptr->field_0xc2e8;
    local_2c = (UOrientationVector *)&this_ptr->field_0x30;
    local_28 = (CVector3f *)&this_ptr->field_0x20;
    puVar4 = (uint *)&this_ptr->field_0xc2f4;
    local_1c = this_ptr;
    do {
      local_38._0_4_ = core_actor_cpp_FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_38._0_4_;
      local_38._4_4_ = core_actor_cpp_FUN_0040cc00(0,0x41200000);
      local_14 = local_38._4_4_;
      local_38._8_4_ = core_actor_cpp_FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_38._8_4_;
      body_part = core_bodypart_cpp_FUN_00418940
                            (local_28,local_2c,&local_38,(CDemonActor *)this_ptr,1,1,BLOOD_TYPE_NONE
                            );
      core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,local_18,0);
      *(uint *)&body_part->field_0xcc4 = 1;
      core_bodypart_cpp_FUN_00419b90(body_part);
      *(CBodyPart **)&local_1c->field_0xc32c = body_part;
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
      core_xform_cpp_FUN_005b7ed0(&body_part->field_0x30);
      puVar3 = &local_1c->field_0x48;
      local_18 = local_18 + 1;
      puVar2 = (uint *)((int)local_1c + (uint)bVar6 * -8 + 0xc314);
      *(uint *)&local_1c->field_0xc310 = local_48;
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
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"boneguy-fallapart.wav");
  return;
}
