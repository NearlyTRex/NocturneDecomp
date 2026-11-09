// Name: core_construc.cpp_FUN_00438060
// Address: 00438060
// Address Range: [[00438060, 00438291]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_00438060(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_construc_cpp_FUN_00438060(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CCharacter *pCVar2;
  CBodyPart *body_part;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_1820 [1520];
  uint local_44;
  CVector3f local_34;
  UOrientationVector *local_28;
  CVector3f *local_24;
  CDeformableModel *local_20;
  byte *local_1c;
  CCharacter *local_18;
  uint local_14;
  
  bVar7 = 0;
  core_charactr_cpp_FUN_00428e00(param_1);
  *(uint *)&param_1[1].field_0x878 = 1;
  *(uint *)&param_1[1].field_0x87c = 0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                       ((CDeformableModelInstance *)&param_1->field_0x2b4);
  iVar4 = *(int *)&local_20->field_0xc00;
  *(int *)&param_1[1].field_0x1b4 = iVar4;
  if (0x18 < iVar4) {
    _DAT_01d046a0 = "..\\core\\construc.cpp";
    _DAT_01d046a4 = 0x294;
    core_main_c_FUN_004e4500("CConstruct::explode - Not enough containers");
  }
  iVar4 = 0;
  if (0 < *(int *)&local_20->field_0xc00) {
    local_1c = &param_1[1].field_0x1b8;
    local_28 = (UOrientationVector *)&param_1->field_0x30;
    local_24 = (CVector3f *)&param_1->field_0x20;
    puVar5 = (uint *)&param_1[1].field_0x1c4;
    local_18 = param_1;
    do {
      local_34._0_4_ = core_actor_cpp_FUN_0040cf60(0xc0a00000,0x40a00000);
      local_14 = local_34._0_4_;
      local_34._4_4_ = core_actor_cpp_FUN_0040cf60(0,0x41200000);
      local_14 = local_34._4_4_;
      local_34._8_4_ = core_actor_cpp_FUN_0040cf60(0xc0a00000,0x40a00000);
      local_14 = local_34._8_4_;
      body_part = core_bodypart_cpp_FUN_004154f0
                            (local_24,local_28,&local_34,(CDemonActor *)param_1,1,1,BLOOD_TYPE_NONE)
      ;
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0(param_1,body_part,iVar4,0);
      if (iVar4 == *(int *)&param_1[1].field_0x100) {
        *(int *)&param_1[1].field_0x880 = *(int *)&param_1[1].field_0x100;
        *(uint *)&body_part->field_0x10d8 = 0;
      }
      else {
        *(uint *)&body_part->field_0x10d8 = 1;
      }
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      *(CBodyPart **)&local_18[1].field_0x1fc = body_part;
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
      core_xform_cpp_FUN_00594380(&body_part->field_0x30);
      pCVar2 = local_18;
      pCVar1 = local_18 + 1;
      local_18 = (CCharacter *)&local_18->field_0x48;
      puVar3 = (uint *)((int)pCVar2 + (uint)bVar7 * -8 + 0x10c44);
      *(uint *)&pCVar1->field_0x1e0 = local_44;
      puVar6 = puVar3 + (uint)bVar7 * -2 + 1;
      *puVar3 = *(uint *)(&stack0xffffffc0 + (uint)bVar7 * -8);
      *puVar6 = *(uint *)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
      puVar6[(uint)bVar7 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
            ((uint)bVar7 * -2 + 1) * 4);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x12;
    } while (iVar4 < *(int *)&local_20->field_0xc00);
  }
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"boneguy-fallapart.wav");
  return;
}
