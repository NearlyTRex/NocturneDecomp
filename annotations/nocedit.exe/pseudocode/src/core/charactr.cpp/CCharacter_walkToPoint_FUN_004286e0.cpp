// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
// Address: 004286e0
// Address Range: [[004286e0, 00428d7c]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr)

{
  char *pcVar1;
  CVector3f *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  float fVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000008;
  CPathMap *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float fVar8;
  float local_fc;
  float fStack_f4;
  float local_ec;
  CVector3f CStack_e4;
  byte local_d4 [12];
  float local_c8;
  byte local_b8 [8];
  CVector3f local_b0;
  float local_a4;
  float local_8c;
  float local_88;
  float local_84;
  byte local_80 [8];
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  float local_54;
  float local_50;
  uint local_40;
  uint local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_20;
  uint local_1c;
  float fStack_14;
  
  local_1c = *(uint *)(this_ptr->field2_0x240c + 0x2c);
  fVar8 = SQRT(in_stack_00000010->x * in_stack_00000010->x +
               in_stack_00000010->z * in_stack_00000010->z);
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_b0,in_stack_00000010);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base_actor,(CVector3f *)local_b8,in_stack_00000008);
  pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)(local_d4 + 8),(CVector3f *)(local_b8 + 4));
  fStack_14 = pCVar2->y;
  fVar7 = fVar8 - fStack_f4;
  local_40 = 0;
  if (0.0 < SQRT(in_stack_00000010->z * in_stack_00000010->z +
                 in_stack_00000010->x * in_stack_00000010->x +
                 in_stack_00000010->y * in_stack_00000010->y)) {
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_14 - local_fc);
    local_ec = ABS(fVar6);
  }
  if (((fStack_f4 < in_stack_00000014 + (float)0.01) &&
      (local_ec < in_stack_00000018 + (float)0.01)) &&
     (ABS(local_b0.z) < (float)5)) {
    local_3c = 1;
  }
  (this_ptr->model).accumulated_root_motion.z = 0.0;
  (this_ptr->model).accumulated_root_motion.y = (this_ptr->model).accumulated_root_motion.z;
  (this_ptr->model).accumulated_root_motion.x = (this_ptr->model).accumulated_root_motion.y;
  if (((float)1.5 * 0.0 + (float)0.5 +
       ABS(ABS(fVar7)) * (float)0.31830988619288902 * (float)2 <= local_fc) ||
     (1.0 < ABS(local_b0.z))) {
    if (in_stack_0000000c == (CPathMap *)0x0) {
      in_stack_0000000c = (CPathMap *)core_path_cpp_FUN_00548500();
    }
    iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (in_stack_0000000c,(CVector3f *)0x42886d,&local_64,
                       (this_ptr->base_actor).field7_0x6c);
    if (iVar3 == 0) {
      if (local_30 != 0) {
        return 1;
      }
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
      return -1;
    }
    local_38 = -fStack_f4;
    local_34 = 0.0 - CStack_e4.x;
    local_28 = local_38;
    if ((local_38 <= local_34) && (local_28 = local_34, fStack_f4 < local_34)) {
      local_28 = fStack_f4;
    }
    *(float *)(this_ptr->field2_0x240c + 0x18) =
         *(float *)(this_ptr->field2_0x240c + 0x18) + local_28;
    fVar8 = local_54 - (this_ptr->base_actor).orient.bank;
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar8);
    fVar7 = -fVar8;
    if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar8 < fVar6)) {
      fVar7 = fVar8;
    }
    *(float *)(this_ptr->field2_0x240c + 0xc) = *(float *)(this_ptr->field2_0x240c + 0xc) + fVar7;
  }
  else {
    if (fVar8 * (float)4 + 0.0 <= local_fc) {
      local_54 = -fVar8;
      local_2c = local_fc - 0.0;
      local_20 = local_54;
      if ((local_54 <= local_2c) && (local_20 = local_2c, fVar8 < local_2c)) {
        local_20 = fVar8;
      }
      *(float *)(this_ptr->field2_0x240c + 0x18) =
           *(float *)(this_ptr->field2_0x240c + 0x18) + local_20;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,(CVector3f *)(local_80 + 4),
                 (CVector3f *)(this_ptr->field2_0x240c + 0x10));
      pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (&this_ptr->base_actor,&CStack_e4,in_stack_00000010);
      local_8c = in_stack_00000008->x - pCVar2->x;
      local_88 = in_stack_00000008->y - pCVar2->y;
      local_80._0_4_ = local_8c - local_74;
      local_84 = in_stack_00000008->z - pCVar2->z;
      local_80._4_4_ = local_88 - local_70.x;
      local_78 = local_84 - local_70.y;
      pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)local_d4,(CVector3f *)local_80);
      pCVar4 = (CCharacter *)
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (pCVar2->y - (this_ptr->base_actor).orient.bank);
      pCVar5 = (CCharacter *)-(float)this_ptr;
      if ((-(float)this_ptr <= (float)pCVar4) && (pCVar5 = pCVar4, (float)this_ptr < (float)pCVar4))
      {
        pCVar5 = this_ptr;
      }
    }
    else {
      local_d4._4_4_ = local_b0.y - in_stack_00000010->x;
      local_c8 = local_a4 - in_stack_00000010->z;
      local_50 = SQRT(local_c8 * local_c8 + (float)local_d4._4_4_ * (float)local_d4._4_4_);
      local_d4._8_4_ = 0.0;
      if (fVar8 < local_50) {
        local_38 = fVar8 / local_50;
        local_d4._4_4_ = (float)local_d4._4_4_ * local_38;
        local_d4._8_4_ = local_38 * 0.0;
        local_c8 = local_c8 * local_38;
      }
      pcVar1 = this_ptr->field2_0x240c + 0x10;
      *(float *)pcVar1 = *(float *)pcVar1 + (float)local_d4._4_4_;
      *(float *)(this_ptr->field2_0x240c + 0x14) =
           *(float *)(this_ptr->field2_0x240c + 0x14) + (float)local_d4._8_4_;
      *(float *)(this_ptr->field2_0x240c + 0x18) =
           *(float *)(this_ptr->field2_0x240c + 0x18) + local_c8;
      local_70.x = local_b0.y - *(float *)pcVar1;
      local_70.y = local_b0.z - *(float *)(this_ptr->field2_0x240c + 0x14);
      local_70.z = local_a4 - *(float *)(this_ptr->field2_0x240c + 0x18);
      pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)local_b8,&local_70);
      pCVar4 = (CCharacter *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar2->y - local_ec);
      pCVar5 = (CCharacter *)-(float)this_ptr;
      if (((float)pCVar5 <= (float)pCVar4) && (pCVar5 = pCVar4, (float)this_ptr < (float)pCVar4)) {
        pCVar5 = this_ptr;
      }
    }
    *(CCharacter **)(this_ptr->field2_0x240c + 0xc) = pCVar5;
  }
  if (local_2c == 0.0) {
    return 0;
  }
  return 1;
}
