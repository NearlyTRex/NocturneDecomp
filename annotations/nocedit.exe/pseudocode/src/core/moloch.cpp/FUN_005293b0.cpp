// Name: core_moloch.cpp_FUN_005293b0
// Address: 005293b0
// Address Range: [[005293b0, 0052974a]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_005293b0()

#include "nocturne.h"

/* Signature: byte actors_hero_moloch.cpp_FUN_005293b0(uint param_1, uint param_2)
    */

void core_moloch_cpp_FUN_005293b0
               (uint param_1,uint param_2,float unaff_EBX,uint param_4,
               CCharacter *param_5,float param_6)

{
  CLocation *pCVar1;
  CHero *pCVar2;
  CHero *pCVar3;
  CCharacter *pCVar4;
  CPathMap *this_ptr;
  int iVar5;
  float fVar6;
  CVector3f *pCVar7;
  uint uVar8;
  BADSPACEBASE *in_ESP;
  float unaff_retaddr;
  int in_stack_ffffff74;
  float local_70;
  ulonglong local_6c;
  uint uStack_5c;
  byte auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  float local_40;
  float local_3c;
  float fStack_38;
  CVector3f CStack_34;
  uint local_24;
  uint local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = 0x3e800000;
  local_24 = 0x3f490fdb;
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(param_5[1].base_actor.actor_name + 8,0,0x2c);
  iVar5 = g_LocalHeroIndex;
  if ((*(int *)(param_5[2].cloth_data + 0x54f0) != 0) &&
     (*(int *)(param_5[2].cloth_data + 0x54f0) == 1)) {
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    pCVar1 = &(param_5->base_actor).location;
    local_6c._0_4_ =
         (param_5->base_actor).location.position.y -
         (pCVar3->base_character).base_actor.location.position.y;
    local_6c._4_4_ =
         (param_5->base_actor).location.position.z -
         (pCVar3->base_character).base_actor.location.position.z;
    local_40 = (pCVar2->base_character).base_actor.location.position.x - (pCVar1->position).x;
    local_3c = (pCVar2->base_character).base_actor.location.position.y -
               (param_5->base_actor).location.position.y;
    fStack_38 = (pCVar2->base_character).base_actor.location.position.z -
                (param_5->base_actor).location.position.z;
    local_70 = (pCVar1->position).x - (pCVar3->base_character).base_actor.location.position.x;
    if (&local_70 != &local_40) {
      local_70 = local_40;
      local_6c._0_4_ = local_3c;
      local_6c._4_4_ = fStack_38;
    }
    param_5->field2_0x240c[0xc] = '\0';
    param_5->field2_0x240c[0xd] = '\0';
    param_5->field2_0x240c[0xe] = '\0';
    param_5->field2_0x240c[0xf] = '\0';
    if (SQRT(local_6c._4_4_ * local_6c._4_4_ +
             local_70 * local_70 + (float)local_6c * (float)local_6c) <= (float)6) {
      iVar5 = (*(g_HeroActors[iVar5]->base_character).base_actor.vtable[1].processMeleeHit)
                        ((CDemonActor *)g_HeroActors[iVar5],in_stack_ffffff74);
      if ((iVar5 == 0) && (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(param_5), uVar8 != 0))
      {
        if (uVar8 < 2) {
          pCVar4 = param_5 + 1;
          (pCVar4->base_actor).actor_name[8] = '\x01';
          (pCVar4->base_actor).actor_name[9] = '\0';
          (pCVar4->base_actor).actor_name[10] = '\0';
          (pCVar4->base_actor).actor_name[0xb] = '\0';
        }
        else if (uVar8 == 2) {
          pCVar4 = param_5 + 1;
          (pCVar4->base_actor).actor_name[0x10] = '\x01';
          (pCVar4->base_actor).actor_name[0x11] = '\0';
          (pCVar4->base_actor).actor_name[0x12] = '\0';
          (pCVar4->base_actor).actor_name[0x13] = '\0';
          pCVar4 = param_5 + 1;
          (pCVar4->base_actor).actor_name[8] = '\x01';
          (pCVar4->base_actor).actor_name[9] = '\0';
          (pCVar4->base_actor).actor_name[10] = '\0';
          (pCVar4->base_actor).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      this_ptr = (*((g_HeroActors[iVar5]->base_character).base_actor.vtable)->getPathMap)
                           ((CDemonActor *)g_HeroActors[iVar5]);
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,&(param_5->base_actor).location.position,
                         (CVector3f *)(auStack_58 + 4),(param_5->base_actor).field7_0x6c);
      if (iVar5 != 0) {
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (fStack_4c - (param_5->base_actor).orient.bank);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        param_5[1].base_actor.location.area_id = (int)fVar6;
        if (fVar6 < -unaff_EBX) {
          param_5[1].base_actor.location.area_id = (int)-unaff_EBX;
        }
        if (unaff_EBX < (float)param_5[1].base_actor.location.area_id) {
          param_5[1].base_actor.location.area_id = (int)unaff_EBX;
        }
        pCVar4 = param_5 + 1;
        (pCVar4->base_actor).actor_name[8] = '\x01';
        (pCVar4->base_actor).actor_name[9] = '\0';
        (pCVar4->base_actor).actor_name[10] = '\0';
        (pCVar4->base_actor).actor_name[0xb] = '\0';
      }
      param_5->cloth_data[0x32c] = '\0';
      param_5->cloth_data[0x32d] = '\0';
      param_5->cloth_data[0x32e] = '\0';
      param_5->cloth_data[0x32f] = '\0';
    }
    local_6c = (double)*(float *)(param_5->field2_0x240c + 0xc);
    if (local_6c <= 0.0) {
      if (local_6c < 0.0) {
        param_5->field2_0x240c[0xc] = '\0';
        param_5->field2_0x240c[0xd] = '\0';
        param_5->field2_0x240c[0xe] = '\0';
        param_5->field2_0x240c[0xf] = '\0';
        param_5[1].base_actor.location.area_id = (int)-unaff_EBX;
      }
    }
    else {
      param_5->field2_0x240c[0xc] = '\0';
      param_5->field2_0x240c[0xd] = '\0';
      param_5->field2_0x240c[0xe] = '\0';
      param_5->field2_0x240c[0xf] = '\0';
      param_5[1].base_actor.location.area_id = (int)unaff_EBX;
    }
    fStack_1c = (pCVar2->base_character).base_actor.location.position.x -
                (param_5->base_actor).location.position.x;
    fStack_18 = (pCVar2->base_character).base_actor.location.position.y -
                (param_5->base_actor).location.position.y;
    fStack_14 = (pCVar2->base_character).base_actor.location.position.z -
                (param_5->base_actor).location.position.z;
    if ((float *)auStack_58 != &fStack_1c) {
      auStack_58._0_4_ = fStack_1c;
      auStack_58._4_4_ = fStack_18;
      fStack_50 = fStack_14;
    }
    pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_34,(CVector3f *)auStack_58);
    if ((CVector3f *)(auStack_58 + 4) != pCVar7) {
      auStack_58._4_4_ = pCVar7->x;
      fStack_50 = pCVar7->y;
      fStack_4c = pCVar7->z;
    }
    CStack_34.x = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (fStack_50 - (param_5->base_actor).orient.bank);
    if (unaff_retaddr < CStack_34.x) {
      CStack_34.x = unaff_retaddr;
    }
    if (CStack_34.x < -unaff_retaddr) {
      CStack_34.x = -unaff_retaddr;
    }
    auStack_58._4_4_ = CStack_34.x - *(float *)(param_5[2].cloth_data + 0x84ac);
    if (param_6 * (float)3.1415926535000001 < (float)auStack_58._4_4_) {
      auStack_58._4_4_ = param_6 * (float)3.1415926535000001;
    }
    if ((float)auStack_58._4_4_ < param_6 * (float)-3.1415926535000001) {
      auStack_58._4_4_ = param_6 * (float)-3.1415926535000001;
    }
    *(float *)(param_5[2].cloth_data + 0x84ac) =
         *(float *)(param_5[2].cloth_data + 0x84ac) + (float)auStack_58._4_4_;
  }
  return;
}
