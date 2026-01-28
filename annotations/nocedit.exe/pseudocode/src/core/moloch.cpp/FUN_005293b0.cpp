// Name: core_moloch.cpp_FUN_005293b0
// Address: 005293b0
// Address Range: [[005293b0, 0052974a]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_005293b0(void)

#include "nocturne.h"

/* Signature: byte actors_hero_moloch.cpp_FUN_005293b0(uint param_1, uint param_2)
    */

void core_moloch_cpp_FUN_005293b0(void)

{
  CLocation *pCVar1;
  CHero *pCVar2;
  CHero *pCVar3;
  float fVar4;
  CCharacter *pCVar5;
  CPathMap *this_ptr;
  int iVar6;
  CVector3f *pCVar7;
  uint uVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float local_74;
  CVector3f local_70;
  CVector3f CStack_64;
  float fStack_54;
  CVector3f CStack_4c;
  float local_40;
  float local_3c;
  CVector3f CStack_34;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_14;
  
  local_20 = 0.25;
  local_24 = 0.7853982;
  pCVar2 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base.actor_name + 8,0,0x2c);
  iVar6 = g_LocalHeroIndex;
  if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) &&
     (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 1)) {
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    pCVar1 = &(in_stack_00000004->base).location;
    CStack_4c.z = (pCVar2->base).base.location.position.x - (pCVar1->position).x;
    local_40 = (pCVar2->base).base.location.position.y -
               (in_stack_00000004->base).location.position.y;
    local_3c = (pCVar2->base).base.location.position.z -
               (in_stack_00000004->base).location.position.z;
    local_74 = (pCVar1->position).x - (pCVar3->base).base.location.position.x;
    local_70.x = (in_stack_00000004->base).location.position.y -
                 (pCVar3->base).base.location.position.y;
    local_70.y = (in_stack_00000004->base).location.position.z -
                 (pCVar3->base).base.location.position.z;
    if (&local_74 != &CStack_4c.z) {
      local_74 = CStack_4c.z;
      local_70.x = local_40;
      local_70.y = local_3c;
    }
    in_stack_00000004->unk1[0xc] = '\0';
    in_stack_00000004->unk1[0xd] = '\0';
    in_stack_00000004->unk1[0xe] = '\0';
    in_stack_00000004->unk1[0xf] = '\0';
    if (SQRT(local_70.y * local_70.y + local_74 * local_74 + local_70.x * local_70.x) <=
        (float)6) {
      iVar6 = (*(((g_HeroActors[iVar6]->base).base.vtable._ue)->_ue).field_8)();
      if ((iVar6 == 0) &&
         (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar8 != 0)) {
        if (uVar8 < 2) {
          pCVar5 = in_stack_00000004 + 1;
          (pCVar5->base).actor_name[8] = '\x01';
          (pCVar5->base).actor_name[9] = '\0';
          (pCVar5->base).actor_name[10] = '\0';
          (pCVar5->base).actor_name[0xb] = '\0';
        }
        else if (uVar8 == 2) {
          pCVar5 = in_stack_00000004 + 1;
          (pCVar5->base).actor_name[0x10] = '\x01';
          (pCVar5->base).actor_name[0x11] = '\0';
          (pCVar5->base).actor_name[0x12] = '\0';
          (pCVar5->base).actor_name[0x13] = '\0';
          pCVar5 = in_stack_00000004 + 1;
          (pCVar5->base).actor_name[8] = '\x01';
          (pCVar5->base).actor_name[9] = '\0';
          (pCVar5->base).actor_name[10] = '\0';
          (pCVar5->base).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      this_ptr = (*((g_HeroActors[iVar6]->base).base.vtable._ub)->getPathMap)
                           ((CDemonActor *)g_HeroActors[iVar6]);
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,&(in_stack_00000004->base).location.position,&CStack_64,
                         (in_stack_00000004->base).unk1);
      if (iVar6 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_64.y - (in_stack_00000004->base).orient.bank);
        fVar4 = fStack_14 * (float)0.31830988619288902 * (float)4;
        local_24 = -fStack_1c;
        in_stack_00000004[1].base.location.area_id = (int)fVar4;
        if (fVar4 < local_24) {
          in_stack_00000004[1].base.location.area_id = (int)local_24;
        }
        if (fStack_1c < (float)in_stack_00000004[1].base.location.area_id) {
          in_stack_00000004[1].base.location.area_id = (int)fStack_1c;
        }
        pCVar5 = in_stack_00000004 + 1;
        (pCVar5->base).actor_name[8] = '\x01';
        (pCVar5->base).actor_name[9] = '\0';
        (pCVar5->base).actor_name[10] = '\0';
        (pCVar5->base).actor_name[0xb] = '\0';
      }
      in_stack_00000004->cloth_data[0x32c] = '\0';
      in_stack_00000004->cloth_data[0x32d] = '\0';
      in_stack_00000004->cloth_data[0x32e] = '\0';
      in_stack_00000004->cloth_data[0x32f] = '\0';
    }
    if (*(float *)(in_stack_00000004->unk1 + 0xc) <= 0.0) {
      if (*(float *)(in_stack_00000004->unk1 + 0xc) < 0.0) {
        in_stack_00000004->unk1[0xc] = '\0';
        in_stack_00000004->unk1[0xd] = '\0';
        in_stack_00000004->unk1[0xe] = '\0';
        in_stack_00000004->unk1[0xf] = '\0';
        in_stack_00000004[1].base.location.area_id = (int)-fStack_1c;
      }
    }
    else {
      in_stack_00000004->unk1[0xc] = '\0';
      in_stack_00000004->unk1[0xd] = '\0';
      in_stack_00000004->unk1[0xe] = '\0';
      in_stack_00000004->unk1[0xf] = '\0';
      in_stack_00000004[1].base.location.area_id = (int)fStack_1c;
    }
    CStack_34.x = (pCVar2->base).base.location.position.x -
                  (in_stack_00000004->base).location.position.x;
    CStack_34.y = (pCVar2->base).base.location.position.y -
                  (in_stack_00000004->base).location.position.y;
    CStack_34.z = (pCVar2->base).base.location.position.z -
                  (in_stack_00000004->base).location.position.z;
    if (&local_70 != &CStack_34) {
      local_70.x = CStack_34.x;
      local_70.y = CStack_34.y;
      local_70.z = CStack_34.z;
    }
    pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_4c,&local_70)
    ;
    if (&local_70 != pCVar7) {
      local_70.x = pCVar7->x;
      local_70.y = pCVar7->y;
      local_70.z = pCVar7->z;
    }
    fStack_54 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_70.y - (in_stack_00000004->base).orient.bank);
    if (local_20 < fStack_54) {
      fStack_54 = local_20;
    }
    if (fStack_54 < -local_20) {
      fStack_54 = -local_20;
    }
    local_74 = fStack_54 - *(float *)(in_stack_00000004[2].cloth_data + 0x84ac);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_74) {
      local_74 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_74 < in_stack_00000008 * (float)-3.1415926535000001) {
      local_74 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x84ac) =
         *(float *)(in_stack_00000004[2].cloth_data + 0x84ac) + local_74;
  }
  return;
}
