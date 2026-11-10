// Name: core_construc.cpp_FUN_00438060
// Address: 00438060
// Address Range: [[00438060, 00438291]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_00438060(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_construc_cpp_FUN_00438060(CCharacter *param_1)

{
  byte *puVar1;
  UOrientationVector *pUVar2;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  CBodyPart *body_part;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_1820 [1520];
  uint local_44;
  CVector3f local_34;
  UOrientationVector *local_28;
  CVector3f *local_24;
  CDeformableModel *local_20;
  byte *local_1c;
  CCharacter *local_18;
  float local_14;
  
  bVar10 = 0;
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00(param_1);
  *(uint *)&param_1[1].model.field_0x5c4 = 1;
  *(uint *)&param_1[1].model.field_0x5c8 = 0;
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(&param_1->model);
  iVar7 = local_20->num_parts;
  *(int *)&param_1[1].base.field_0x1b4 = iVar7;
  if (0x18 < iVar7) {
    _DAT_01d046a0 = "..\\core\\construc.cpp";
    _DAT_01d046a4 = 0x294;
    core_main_c_FUN_004e4500("CConstruct::explode - Not enough containers");
  }
  iVar7 = 0;
  if (0 < local_20->num_parts) {
    local_1c = &param_1[1].base.field_0x1b8;
    local_28 = &(param_1->base).orient;
    local_24 = (CVector3f *)&(param_1->base).field_0x20;
    pfVar8 = (float *)&param_1[1].base.field_0x1c4;
    local_18 = param_1;
    do {
      local_34.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
      local_14 = local_34.x;
      local_34.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,10.0);
      local_14 = local_34.y;
      local_34.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.0,5.0);
      local_14 = local_34.z;
      body_part = core_bodypart_cpp_createBodyPart_FUN_004154f0
                            (local_24,local_28,&local_34,&param_1->base,1,1,BLOOD_TYPE_NONE);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0(param_1,body_part,iVar7,0);
      iVar3 = *(int *)&param_1[1].base.field_0x100;
      if (iVar7 == iVar3) {
        *(int *)&param_1[1].model.field_0x5cc = iVar3;
        body_part->dont_pick_me_up = 0;
      }
      else {
        body_part->dont_pick_me_up = 1;
      }
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
      *(CBodyPart **)&local_18[1].base.field_0x1fc = body_part;
      puVar1 = &(body_part->base).field_0x20;
      puVar6 = (uint *)(local_1c + iVar7 * 0x48);
      if (puVar6 != (uint *)puVar1) {
        *puVar6 = *(uint *)puVar1;
        puVar6[1] = *(uint *)&(body_part->base).field_0x24;
        puVar6[2] = *(uint *)&(body_part->base).field_0x28;
      }
      pUVar2 = &(body_part->base).orient;
      if ((UOrientationVector *)pfVar8 != pUVar2) {
        *pfVar8 = (pUVar2->vec).x;
        pfVar8[1] = (body_part->base).orient.vec.y;
        pfVar8[2] = (body_part->base).orient.vec.z;
      }
      core_xform_cpp_FUN_00594380(&(body_part->base).orient);
      pCVar5 = local_18;
      pCVar4 = local_18 + 1;
      local_18 = (CCharacter *)((local_18->base).orient_matrix.m + 1);
      puVar6 = (uint *)((int)pCVar5 + (uint)bVar10 * -8 + 0x10c44);
      *(uint *)&(pCVar4->base).field_0x1e0 = local_44;
      puVar9 = puVar6 + (uint)bVar10 * -2 + 1;
      *puVar6 = *(uint *)(&stack0xffffffc0 + (uint)bVar10 * -8);
      *puVar9 = *(uint *)(&stack0xffffffc4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
      puVar9[(uint)bVar10 * -2 + 1] =
           *(uint *)
            ((int)(&stack0xffffffc4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
            ((uint)bVar10 * -2 + 1) * 4);
      iVar7 = iVar7 + 1;
      pfVar8 = pfVar8 + 0x12;
    } while (iVar7 < local_20->num_parts);
  }
  (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"boneguy-fallapart.wav");
  return;
}
