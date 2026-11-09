// Name: unkafter_djien.cpp_FUN_00460cb0
// Address: 00460cb0
// Address Range: [[00460cb0, 00460e73]]
// Convention: unknown
// Signature: void unkafter_djien_cpp_FUN_00460cb0(CCharacter *param_1)

#include "nocturne.h"

void unkafter_djien_cpp_FUN_00460cb0(CCharacter *param_1)

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
  CDeformableModel *local_28;
  CVector3f *local_24;
  byte *local_20;
  CCharacter *local_1c;
  int local_18;
  uint local_14;
  
  bVar6 = 0;
  *(uint *)&param_1[1].field_0x7ec = 1;
  *(uint *)&param_1[1].field_0x7f8 = 0;
  local_28 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = *(int *)&local_28->field_0xc00;
  local_18 = 0;
  *(int *)&param_1[1].field_0x128 = iVar1;
  if (0 < iVar1) {
    local_20 = &param_1[1].field_0x12c;
    local_2c = (UOrientationVector *)&param_1->field_0x30;
    local_24 = (CVector3f *)&param_1->field_0x20;
    puVar4 = (uint *)&param_1[1].field_0x138;
    local_1c = param_1;
    do {
      local_38._0_4_ = core_actor_cpp_FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_38._0_4_;
      local_38._4_4_ = core_actor_cpp_FUN_0040cc00(0,0x41200000);
      local_14 = local_38._4_4_;
      local_38._8_4_ = core_actor_cpp_FUN_0040cc00(0xc0a00000,0x40a00000);
      local_14 = local_38._8_4_;
      body_part = core_bodypart_cpp_FUN_00418940
                            (local_24,local_2c,&local_38,(CDemonActor *)param_1,1,1,BLOOD_TYPE_NONE)
      ;
      iVar1 = local_18;
      core_charactr_cpp_FUN_00431210(param_1,body_part,local_18,0);
      *(uint *)&body_part->field_0xcc4 = 1;
      core_bodypart_cpp_FUN_00419b90(body_part);
      puVar2 = (uint *)(local_20 + iVar1 * 0x48);
      *(CBodyPart **)&local_1c[1].field_0x170 = body_part;
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
      core_xform_cpp_FUN_005b7ed0(&body_part->field_0x30);
      puVar3 = &local_1c->field_0x48;
      puVar2 = (uint *)((int)local_1c + (uint)bVar6 * -8 + 0xc328);
      *(uint *)&local_1c[1].field_0x154 = local_48;
      puVar5 = puVar2 + (uint)bVar6 * -2 + 1;
      *puVar2 = *(uint *)(&stack0xffffffbc + (uint)bVar6 * -8);
      *puVar5 = *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      puVar4 = puVar4 + 0x12;
      local_18 = local_18 + 1;
      local_1c = (CCharacter *)puVar3;
    } while (local_18 < *(int *)&local_28->field_0xc00);
  }
  (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"?djien-die.wav @ 5" + 1);
  return;
}
