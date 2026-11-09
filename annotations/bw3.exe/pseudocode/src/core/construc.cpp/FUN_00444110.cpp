// Name: core_construc.cpp_FUN_00444110
// Address: 00444110
// Address Range: [[00444110, 00444330]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_00444110(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_construc_cpp_FUN_00444110(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CCharacter *pCVar2;
  CBodyPart *body_part;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  byte bVar8;
  uint auStackY_1820 [1520];
  int part_index;
  uint local_44;
  CVector3f local_34;
  CVector3f *local_28;
  UOrientationVector *local_24;
  CDeformableModel *local_20;
  byte *local_1c;
  CCharacter *local_18;
  uint local_14;
  
  bVar8 = 0;
  core_charactr_cpp_FUN_00431ce0(param_1);
  *(uint *)&param_1[1].field_0xa78 = 1;
  *(uint *)&param_1[1].field_0xa84 = 0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar4 = *(int *)&local_20->field_0xc00;
  *(int *)&param_1[1].field_0x3b4 = iVar4;
  if (0x18 < iVar4) {
    _DAT_01d71de0 = "..\\core\\construc.cpp";
    _DAT_01d71de4 = 0x357;
    core_main_c_FUN_004e4330("CConstruct::explode - Not enough containers");
  }
  iVar4 = 0;
  if (0 < *(int *)&local_20->field_0xc00) {
    local_1c = &param_1[1].field_0x3b8;
    local_24 = (UOrientationVector *)&param_1->field_0x30;
    local_28 = (CVector3f *)&param_1->field_0x20;
    puVar5 = (uint *)&param_1[1].field_0x3c4;
    local_18 = param_1;
    do {
      local_34._0_4_ = core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
      local_14 = local_34._0_4_;
      local_34._4_4_ = core_actor_cpp_FUN_0040ce40(0,0x41200000);
      local_14 = local_34._4_4_;
      local_34._8_4_ = core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
      local_14 = local_34._8_4_;
      body_part = core_bodypart_cpp_FUN_00414550
                            (local_28,local_24,&local_34,(CDemonActor *)param_1,1,1,BLOOD_TYPE_NONE)
      ;
      part_index = *(int *)&param_1[1].field_0x2ec;
      bVar7 = iVar4 == part_index;
      if (bVar7) {
        *(int *)&param_1[1].field_0xa7c = part_index;
        *(uint *)&body_part->field_0xcc4 = 0;
        *(uint *)&body_part->field_0xcc8 = 1;
      }
      else {
        *(uint *)&body_part->field_0xcc4 = 1;
        part_index = iVar4;
      }
      core_charactr_cpp_FUN_00430590(param_1,body_part,part_index,(uint)!bVar7);
      core_bodypart_cpp_FUN_004157c0(body_part);
      *(CBodyPart **)&local_18[1].field_0x3fc = body_part;
      puVar3 = (uint *)(local_1c + iVar4 * 0x48);
      if (puVar3 != (uint *)&body_part->field_0x20) {
        *puVar3 = *(uint *)&body_part->field_0x20;
        puVar3[1] = *(uint *)&body_part->field_0x24;
        puVar3[2] = *(uint *)&body_part->field_0x28;
      }
      if (puVar5 != (uint *)&body_part->field_0x30) {
        *puVar5 = *(uint *)&body_part->field_0x30;
        puVar5[1] = *(uint *)&body_part->field_0x34;
        puVar5[2] = *(uint *)&body_part->field_0x38;
      }
      core_xform_cpp_FUN_005860b0(&body_part->field_0x30);
      pCVar2 = local_18;
      pCVar1 = local_18 + 1;
      local_18 = (CCharacter *)&local_18->field_0x48;
      puVar3 = (uint *)((int)pCVar2 + (uint)bVar8 * -8 + 0xd1b0);
      *(uint *)&pCVar1->field_0x3e0 = local_44;
      puVar6 = puVar3 + (uint)bVar8 * -2 + 1;
      *puVar3 = *(uint *)(&stack0xffffffc0 + (uint)bVar8 * -8);
      *puVar6 = *(uint *)(&stack0xffffffc4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      puVar6[(uint)bVar8 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) +
            ((uint)bVar8 * -2 + 1) * 4);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x12;
    } while (iVar4 < *(int *)&local_20->field_0xc00);
  }
  return;
}
