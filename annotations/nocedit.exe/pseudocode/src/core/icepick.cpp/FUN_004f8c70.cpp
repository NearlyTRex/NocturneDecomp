// Name: core_icepick.cpp_FUN_004f8c70
// Address: 004f8c70
// Address Range: [[004f8c70, 004f9378]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8c70()

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f8c70(uint param_1, uint
   param_2) */

void core_icepick_cpp_FUN_004f8c70(void)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  CCharacter *pCVar4;
  int iVar5;
  CHero *pCVar6;
  CVector3f *pCVar7;
  SMotion *pSVar8;
  uint uVar9;
  CHero *pCVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fStack_98;
  float fStack_8c;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f local_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  CPathMap *pCStack_20;
  CPathMap *local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = false;
  local_1c = (CPathMap *)0x3e800000;
  local_24 = 0.7853982;
  pCVar10 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004[1].base.actor_name + 8,0,0x2c);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) != 0) {
    pCVar6 = g_HeroActors[g_LocalHeroIndex];
    local_6c.x = (in_stack_00000004->base).location.position.x -
                 (pCVar6->base).base.location.position.x;
    local_6c.y = (in_stack_00000004->base).location.position.y -
                 (pCVar6->base).base.location.position.y;
    local_6c.z = (in_stack_00000004->base).location.position.z -
                 (pCVar6->base).base.location.position.z;
    local_30 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3) {
      local_30 = 0.0;
    }
    local_28 = 20.0;
    iVar5 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).field_8)();
    if (iVar5 != 0) {
      local_28 = 30.0;
    }
    if ((local_30 < local_28) &&
       ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 2 ||
        (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 3)))) {
      fStack_3c = 9999.9;
      pCVar6 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar6 == (CHero *)0x0) || (local_28 <= fStack_3c)) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          in_stack_00000004[1].base.location.position.x = 1.4013e-45;
        }
      }
      else {
        bVar2 = true;
        pCVar10 = pCVar6;
      }
    }
    CStack_78.x = (pCVar10->base).base.location.position.x -
                  (in_stack_00000004->base).location.position.x;
    CStack_78.y = (pCVar10->base).base.location.position.y -
                  (in_stack_00000004->base).location.position.y;
    CStack_78.z = (pCVar10->base).base.location.position.z -
                  (in_stack_00000004->base).location.position.z;
    if (&local_6c != &CStack_78) {
      local_6c.x = CStack_78.x;
      local_6c.y = CStack_78.y;
      local_6c.z = CStack_78.z;
    }
    fVar1 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    in_stack_00000004->unk1[0xc] = '\0';
    in_stack_00000004->unk1[0xd] = '\0';
    in_stack_00000004->unk1[0xe] = '\0';
    in_stack_00000004->unk1[0xf] = '\0';
    fStack_18 = fVar1;
    if ((float)6 <= fVar1) {
      pCStack_20 = (CPathMap *)0x0;
      if (bVar2) {
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        local_1c = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                             ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar5 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).field_8)();
        if ((iVar5 == 0) &&
           (uVar9 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar9 != 0)) {
          if (uVar9 < 2) {
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base).actor_name[8] = '\x01';
            (pCVar4->base).actor_name[9] = '\0';
            (pCVar4->base).actor_name[10] = '\0';
            (pCVar4->base).actor_name[0xb] = '\0';
          }
          else if (uVar9 == 2) {
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base).actor_name[0x10] = '\x01';
            (pCVar4->base).actor_name[0x11] = '\0';
            (pCVar4->base).actor_name[0x12] = '\0';
            (pCVar4->base).actor_name[0x13] = '\0';
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base).actor_name[8] = '\x01';
            (pCVar4->base).actor_name[9] = '\0';
            (pCVar4->base).actor_name[10] = '\0';
            (pCVar4->base).actor_name[0xb] = '\0';
          }
        }
      }
      if (pCStack_20 == (CPathMap *)0x0) {
        pCStack_20 = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (pCStack_20,&(in_stack_00000004->base).location.position,&CStack_48,
                         (in_stack_00000004->base).unk1);
      if (iVar5 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_48.y - (in_stack_00000004->base).orient.bank);
        fVar3 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_38 = -(float)local_1c;
        in_stack_00000004[1].base.location.area_id = (int)fVar3;
        if (fVar3 < fStack_38) {
          in_stack_00000004[1].base.location.area_id = (int)fStack_38;
        }
        if ((float)local_1c < (float)in_stack_00000004[1].base.location.area_id) {
          in_stack_00000004[1].base.location.area_id = (int)local_1c;
        }
        if (((float)10 <= fVar1) || (bVar2)) {
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base).actor_name[0x10] = '\x01';
          (pCVar4->base).actor_name[0x11] = '\0';
          (pCVar4->base).actor_name[0x12] = '\0';
          (pCVar4->base).actor_name[0x13] = '\0';
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base).actor_name[8] = '\x01';
          (pCVar4->base).actor_name[9] = '\0';
          (pCVar4->base).actor_name[10] = '\0';
          (pCVar4->base).actor_name[0xb] = '\0';
        }
        else {
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base).actor_name[8] = '\x01';
          (pCVar4->base).actor_name[9] = '\0';
          (pCVar4->base).actor_name[10] = '\0';
          (pCVar4->base).actor_name[0xb] = '\0';
        }
      }
    }
    else {
      if (bVar2) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) {
          in_stack_00000004[1].base.location.position.x = 1.4013e-45;
        }
        else {
          pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&(in_stack_00000004->model).motion_controller);
          if ((pSVar8->state_index != 2) && (pSVar8->state_index != 1)) {
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base).actor_name[0x14] = '\x01';
            (pCVar4->base).actor_name[0x15] = '\0';
            (pCVar4->base).actor_name[0x16] = '\0';
            (pCVar4->base).actor_name[0x17] = '\0';
          }
        }
        in_stack_00000004->cloth_data[0x32c] = '\0';
        in_stack_00000004->cloth_data[0x32d] = '\0';
        in_stack_00000004->cloth_data[0x32e] = '\0';
        in_stack_00000004->cloth_data[0x32f] = '\0';
      }
      else {
        pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(in_stack_00000004->model).motion_controller);
        if ((pSVar8->state_index == 10) && (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0)
           ) {
          in_stack_00000004[1].base.location.position.x = 1.4013e-45;
        }
        iVar5 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).field_8)();
        if ((iVar5 == 0) &&
           (uVar9 = core_charactr_cpp_CCharacter_FUN_0042ede0(in_stack_00000004), uVar9 != 0)) {
          if (uVar9 < 2) {
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base).actor_name[8] = '\x01';
            (pCVar4->base).actor_name[9] = '\0';
            (pCVar4->base).actor_name[10] = '\0';
            (pCVar4->base).actor_name[0xb] = '\0';
          }
          else if (uVar9 == 2) {
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base).actor_name[0x10] = '\x01';
            (pCVar4->base).actor_name[0x11] = '\0';
            (pCVar4->base).actor_name[0x12] = '\0';
            (pCVar4->base).actor_name[0x13] = '\0';
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base).actor_name[8] = '\x01';
            (pCVar4->base).actor_name[9] = '\0';
            (pCVar4->base).actor_name[10] = '\0';
            (pCVar4->base).actor_name[0xb] = '\0';
          }
        }
      }
      if (bVar2) {
        pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_54,&local_6c);
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (pCVar7->y - (in_stack_00000004->base).orient.bank);
        fVar1 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_34 = -(float)local_1c;
        in_stack_00000004[1].base.location.area_id = (int)fVar1;
        if (fVar1 < fStack_34) {
          in_stack_00000004[1].base.location.area_id = (int)fStack_34;
        }
        if ((float)local_1c < (float)in_stack_00000004[1].base.location.area_id) {
          in_stack_00000004[1].base.location.area_id = (int)local_1c;
        }
        fVar1 = (float)in_stack_00000004[1].base.location.area_id;
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
           (*(int *)(in_stack_00000004[1].base.actor_name + 0x14) != 0)) {
          in_stack_00000004[1].base.location.area_id = 0;
        }
      }
    }
    if (*(float *)(in_stack_00000004->unk1 + 0xc) <= 0.0) {
      if (*(float *)(in_stack_00000004->unk1 + 0xc) < 0.0) {
        in_stack_00000004->unk1[0xc] = '\0';
        in_stack_00000004->unk1[0xd] = '\0';
        in_stack_00000004->unk1[0xe] = '\0';
        in_stack_00000004->unk1[0xf] = '\0';
        in_stack_00000004[1].base.location.area_id = (int)-(float)local_1c;
      }
    }
    else {
      in_stack_00000004->unk1[0xc] = '\0';
      in_stack_00000004->unk1[0xd] = '\0';
      in_stack_00000004->unk1[0xe] = '\0';
      in_stack_00000004->unk1[0xf] = '\0';
      in_stack_00000004[1].base.location.area_id = (int)local_1c;
    }
    CStack_60.x = (pCVar10->base).base.location.position.x -
                  (in_stack_00000004->base).location.position.x;
    CStack_60.y = (pCVar10->base).base.location.position.y -
                  (in_stack_00000004->base).location.position.y;
    CStack_60.z = (pCVar10->base).base.location.position.z -
                  (in_stack_00000004->base).location.position.z;
    if (&local_6c != &CStack_60) {
      local_6c.x = CStack_60.x;
      local_6c.y = CStack_60.y;
      local_6c.z = CStack_60.z;
    }
    pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_84,&local_6c)
    ;
    if (&local_6c != pCVar7) {
      local_6c.x = pCVar7->x;
      local_6c.y = pCVar7->y;
      local_6c.z = pCVar7->z;
    }
    fStack_8c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_6c.y - (in_stack_00000004->base).orient.bank);
    if (local_24 < fStack_8c) {
      fStack_8c = local_24;
    }
    if (fStack_8c < -local_24) {
      fStack_8c = -local_24;
    }
    fStack_98 = fStack_8c - *(float *)(in_stack_00000004[2].cloth_data + 0x5508);
    if (in_stack_00000008 * (float)3.1415926535000001 < fStack_98) {
      fStack_98 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (fStack_98 < in_stack_00000008 * (float)-3.1415926535000001) {
      fStack_98 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004[2].cloth_data + 0x5508) =
         *(float *)(in_stack_00000004[2].cloth_data + 0x5508) + fStack_98;
  }
  return;
}
