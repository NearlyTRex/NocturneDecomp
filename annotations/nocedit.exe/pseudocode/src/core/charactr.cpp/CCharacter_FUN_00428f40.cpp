// Name: core_charactr.cpp_CCharacter_FUN_00428f40
// Address: 00428f40
// Address Range: [[00428f40, 004297d9]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 0041564d [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416a6b [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 004188c7 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c50a [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00424469 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425ead [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 00426356 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043ff0a [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044451e [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f365 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484853 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048eee2 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_FUN_004aa030 (004aa030) at 004aa0a6 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3d72 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4c0f [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e687f [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f13d4 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5dd1 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f70f6 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f87fb [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa0f6 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005032b8 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0052047a [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525cc9 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 0052921b [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544acc [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005578d1 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 0056820a [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a314d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bd6c6 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c70ac [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d9220 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e65db [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f01b8 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1e40 (005f1e40) at 005f1fcc [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fb06e [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00617072 = 0.5
//   double DOUBLE_0061707a = 1.20000000000000
//   double DOUBLE_00617082 = 0.900000000000000
//   double DOUBLE_0061708a = -0.0100000000000000
//   TerminatedCString s_noCollision_0066e778
//   undefined4 s_ion_0066e780
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_006e6f69
//   undefined4 DAT_00823c50
//   CVector3f g_TempNormal0
//   undefined4 g_TempNormal0.y
//   undefined4 g_TempNormal0.z
//   CVector3f g_TempNormal1
//   undefined4 g_TempNormal1.y
//   undefined4 g_TempNormal1.z
//   CVector3f g_TempNormal2
//   undefined4 g_TempNormal2.y
//   undefined4 g_TempNormal2.z
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613a0
//   undefined4 DAT_032613a4
//   undefined4 DAT_032613a8
//   undefined4 DAT_032613bc
// Function calls:
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   crt_string.c_strnicmp_FUN_005ff070

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428f40(CCharacter *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  char cVar3;
  bool bVar4;
  CDemonSet *pCVar5;
  double dVar6;
  double dVar7;
  char *pcVar8;
  float fVar9;
  CVector3f *pCVar10;
  int iVar11;
  uint uVar12;
  CVector3f *pCVar13;
  char *pcVar14;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar15;
  int unaff_EDI;
  CVector3f *pCVar16;
  byte bVar17;
  CVector3f *unaff_retaddr;
  CVector3f *in_stack_00000008;
  float afStackY_1060 [991];
  double local_9c;
  float fStack_94;
  float local_90;
  CVector3f local_8c;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74 [4];
  float fStack_64;
  float local_60;
  float local_50;
  float local_4c;
  char *local_48;
  float local_44;
  char *local_40;
  char *pcStack_3c;
  float local_38;
  float local_30;
  int local_2c;
  float local_28;
  CLocation *local_24;
  char *local_20;
  CLocation *local_1c;
  char *pcStack_18;
  CVector3f *local_14;
  
  bVar17 = 0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (&this_ptr->base_actor,(CVector3f *)&stack0xffffff58,in_stack_00000008);
  if ((this_ptr->base_actor).field11_0xdc != 0) {
    (this_ptr->base_actor).location.position.y =
         (this_ptr->base_actor).field12_0xe0.y + (this_ptr->base_actor).location.position.y;
    local_9c = (double)(ulonglong)(uint)(local_9c._0_4_ + (this_ptr->base_actor).field12_0xe0.z);
    (this_ptr->base_actor).field12_0xe0.z = 0.0;
    pCVar2 = &(this_ptr->base_actor).orient;
    (this_ptr->base_actor).field12_0xe0.y = (this_ptr->base_actor).field12_0xe0.z;
    (this_ptr->base_actor).field12_0xe0.x = (this_ptr->base_actor).field12_0xe0.y;
    pCVar13 = &(this_ptr->base_actor).field13_0xec;
    pCVar2->pitch = pCVar13->x + pCVar2->pitch;
    (this_ptr->base_actor).orient.bank =
         (this_ptr->base_actor).field13_0xec.y + (this_ptr->base_actor).orient.bank;
    (this_ptr->base_actor).orient.heading =
         (this_ptr->base_actor).field13_0xec.z + (this_ptr->base_actor).orient.heading;
    (this_ptr->base_actor).field13_0xec.z = 0.0;
    (this_ptr->base_actor).field13_0xec.y = (this_ptr->base_actor).field13_0xec.z;
    pCVar13->x = (this_ptr->base_actor).field13_0xec.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  }
  DAT_00823c50 = (CDemonActor *)0x0;
  if ((((ABS(in_stack_00000008->z) == 0.0) && (ABS(in_stack_00000008->x) == 0.0)) &&
      (in_stack_00000008->y <= 0.0)) &&
     (((this_ptr->base_actor).field11_0xdc == 0 &&
      ((this_ptr->base_actor).location.position.y == *(float *)(this_ptr->field2_0x240c + 8))))) {
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    this_ptr->field2_0x240c[0x24] = '\0';
    this_ptr->field2_0x240c[0x25] = '\0';
    this_ptr->field2_0x240c[0x26] = '\0';
    this_ptr->field2_0x240c[0x27] = '\0';
    *(undefined4 *)(this_ptr->field2_0x240c + 0x20) =
         *(undefined4 *)(this_ptr->field2_0x240c + 0x24);
    *(undefined4 *)(this_ptr->field2_0x240c + 0x1c) =
         *(undefined4 *)(this_ptr->field2_0x240c + 0x20);
    return;
  }
  if ((this_ptr->model).model_name[0] != '\0') {
    pcVar8 = (char *)core_motion_cpp_CMotionController_FUN_0052dab0
                               (&(this_ptr->model).motion_controller);
    uVar12 = 0xffffffff;
    pcVar14 = pcVar8;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar14;
      pcVar14 = pcVar14 + (uint)bVar17 * -2 + 1;
    } while (cVar3 != '\0');
    pCVar13 = (CVector3f *)(~uVar12 - 0xc);
    local_78 = (float)"noCollision"._0_4_;
    local_74[(uint)bVar17 * -2] = *(float *)("noCollision" + (uint)bVar17 * -8 + 4);
    local_74[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1] =
         *(float *)("noCollision" + (uint)bVar17 * -8 + (uint)bVar17 * -8 + 8);
    iVar15 = 0;
    local_14 = pCVar13;
    if (-1 < (int)pCVar13) {
      do {
        iVar11 = crt_string_c_strnicmp_FUN_005ff070(pcVar8,(char *)&local_78,0xb);
        if (iVar11 == 0) {
          this_ptr->field2_0x240c[0x24] = '\0';
          this_ptr->field2_0x240c[0x25] = '\0';
          this_ptr->field2_0x240c[0x26] = '\0';
          this_ptr->field2_0x240c[0x27] = '\0';
          *(undefined4 *)(this_ptr->field2_0x240c + 0x20) =
               *(undefined4 *)(this_ptr->field2_0x240c + 0x24);
          *(undefined4 *)(this_ptr->field2_0x240c + 0x1c) =
               *(undefined4 *)(this_ptr->field2_0x240c + 0x20);
          return;
        }
        iVar15 = iVar15 + 1;
        pcVar8 = pcVar8 + 1;
      } while (iVar15 <= unaff_EBP);
    }
  }
  local_48 = this_ptr->cloth_data + 0x1c4;
  iVar15 = 0;
  pcStack_3c = this_ptr->cloth_data + 0x278;
  local_40 = this_ptr->cloth_data + 0x1e8;
  do {
    pcVar8 = local_48 + iVar15 * 0x24;
    pcVar14 = pcStack_3c;
    do {
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      *(undefined4 *)(pcVar8 + 4) = *(undefined4 *)(pcVar8 + 8);
      *(undefined4 *)pcVar8 = *(undefined4 *)(pcVar8 + 8);
      pcVar14[8] = '\0';
      pcVar14[9] = '\0';
      pcVar14[10] = '\0';
      pcVar14[0xb] = '\0';
      pcVar8 = pcVar8 + 0xc;
      *(undefined4 *)(pcVar14 + 4) = *(undefined4 *)(pcVar14 + 8);
      *(undefined4 *)pcVar14 = *(undefined4 *)(pcVar14 + 8);
      pcVar14 = pcVar14 + 0xc;
    } while (pcVar8 != local_40);
    iVar15 = iVar15 + 1;
    pcStack_3c = pcStack_3c + 0x24;
    local_40 = local_40 + 0x24;
  } while (iVar15 < 5);
  pCVar1 = &(this_ptr->base_actor).location;
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base_actor);
  local_2c = 0;
  local_48 = (char *)in_stack_00000008->y;
  local_40 = this_ptr->cloth_data + 0x278;
  pcStack_18 = this_ptr->cloth_data + 0x1d0;
  pCVar13 = (CVector3f *)(this_ptr->cloth_data + 0x290);
  local_20 = this_ptr->cloth_data + 0x284;
  pCVar16 = (CVector3f *)(this_ptr->cloth_data + 0x1dc);
  local_24 = pCVar1;
  local_1c = pCVar1;
  do {
    dVar6 = local_9c;
    local_9c = (double)((ulonglong)local_9c & 0xffffffff);
    dVar7 = local_9c;
    local_28 = *(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale;
    if (local_28 < *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale) {
      local_28 = (this_ptr->model).bounding_box.max.y;
    }
    fVar9 = *(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale;
    if (local_28 < fVar9) {
      local_28 = this_ptr->size_scale * (float)DOUBLE_00617072 + fVar9;
    }
    local_9c._0_4_ = SUB84(dVar6,0);
    fVar9 = core_setcolid_cpp_CDemonSet_testCapsuleCollision_FUN_00573470
                      (g_CDemonSetPtr,(this_ptr->base_actor).location.position.x,
                       (this_ptr->base_actor).location.position.z,local_9c._0_4_,fStack_94,
                       *(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale,
                       (void *)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale +
                               (this_ptr->base_actor).location.position.y),
                       (void *)((this_ptr->base_actor).location.position.y + local_28));
    if (DAT_00823c50 == (CDemonActor *)0x0) {
      DAT_00823c50 = g_CDemonSetPtr->collision_actor;
    }
    pCVar10 = (CVector3f *)((int)local_28 * 0x24 + unaff_EDI);
    if (pCVar10 != &g_TempNormal0) {
      pCVar10->x = g_TempNormal0.x;
      pCVar10->y = g_TempNormal0.y;
      pCVar10->z = g_TempNormal0.z;
    }
    if (local_14 != &g_TempNormal1) {
      local_14->x = g_TempNormal1.x;
      local_14->y = g_TempNormal1.y;
      local_14->z = g_TempNormal1.z;
    }
    if (pCVar16 != &g_TempNormal2) {
      pCVar16->x = g_TempNormal2.x;
      pCVar16->y = g_TempNormal2.y;
      pCVar16->z = g_TempNormal2.z;
    }
    if (0.0 <= fVar9) {
      if (1.0 < fVar9) {
        fVar9 = 1.0;
      }
      local_50 = fVar9 * 0.0;
      local_4c = fStack_94 * fVar9;
      local_48 = (char *)(local_90 * fVar9);
      *(float *)pcStack_18 = *(float *)pcStack_18 + local_50;
      *(float *)(pcStack_18 + 4) = *(float *)(pcStack_18 + 4) + local_4c;
      pCVar5 = g_CDemonSetPtr;
      *(float *)(pcStack_18 + 8) = *(float *)(pcStack_18 + 8) + (float)local_48;
      local_74[3] = (pCVar5->collision_normal).x;
      fStack_64 = (pCVar5->collision_normal).y;
      local_60 = (pCVar5->collision_normal).z;
      fVar9 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                        (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),&local_8c);
      bVar4 = false;
      pCVar10 = (CVector3f *)(local_20 + unaff_EDI * 0x24);
      *(float *)(this_ptr->field2_0x240c + 8) = fVar9;
      if (pCVar10 != &g_TempNormal0) {
        pCVar10->x = g_TempNormal0.x;
        pCVar10->y = g_TempNormal0.y;
        pCVar10->z = g_TempNormal0.z;
      }
      if (unaff_retaddr != &g_TempNormal1) {
        unaff_retaddr->x = g_TempNormal1.x;
        unaff_retaddr->y = g_TempNormal1.y;
        unaff_retaddr->z = g_TempNormal1.z;
      }
      if (pCVar13 != &g_TempNormal2) {
        pCVar13->x = g_TempNormal2.x;
        pCVar13->y = g_TempNormal2.y;
        pCVar13->z = g_TempNormal2.z;
      }
      if ((this_ptr->base_actor).location.position.y < *(float *)(this_ptr->field2_0x240c + 8)) {
        (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
        local_8c.z = (this_ptr->base_actor).location.position.y;
      }
      if ((float)DOUBLE_00617082 < fStack_94) break;
      local_90 = SQRT(local_44 * local_44 + local_4c * local_4c);
      local_48 = (char *)0x0;
      if (0.0 < local_90) {
        fVar9 = 1.0 / local_90;
        local_4c = local_4c * fVar9;
        local_48 = (char *)(fVar9 * 0.0);
        local_44 = local_44 * fVar9;
      }
      fVar9 = (float)DOUBLE_00617082 - fStack_94;
      fStack_7c = fStack_7c * fVar9;
      local_78 = local_78 * fVar9;
      local_74[0] = local_74[0] * fVar9;
      fVar9 = local_44 * local_74[0] + local_4c * fStack_7c + (float)local_48 * local_78;
      local_9c = (double)fVar9;
      if (0.0 <= local_9c) break;
      fVar9 = fVar9 * (float)DOUBLE_0061707a;
      local_40 = (char *)(local_4c * fVar9);
      pcStack_3c = (char *)((float)local_48 * fVar9);
      local_38 = local_44 * fVar9;
      fStack_7c = fStack_7c - (float)local_40;
      local_78 = local_78 - (float)pcStack_3c;
      local_74[0] = local_74[0] - local_38;
    }
    else {
      local_30 = fVar9 + (float)DOUBLE_0061708a;
      fStack_80 = (g_CDemonSetPtr->collision_normal).x * local_30;
      fStack_7c = (g_CDemonSetPtr->collision_normal).y * local_30;
      local_78 = (g_CDemonSetPtr->collision_normal).z * local_30;
      *(float *)local_20 = *(float *)local_20 - fStack_80;
      *(float *)(local_20 + 4) = *(float *)(local_20 + 4) - fStack_7c;
      bVar4 = true;
      *(float *)(local_20 + 8) = *(float *)(local_20 + 8) - local_78;
      local_9c = dVar7;
    }
    pCVar16 = pCVar16 + 3;
    pcStack_18 = pcStack_18 + 0x24;
    pCVar13 = pCVar13 + 3;
    local_20 = local_20 + 0x24;
    local_2c = local_2c + 1;
  } while (local_2c < 3);
  if (bVar4) {
    fVar9 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                      (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),
                       (CVector3f *)0x0);
    *(float *)(this_ptr->field2_0x240c + 8) = fVar9;
  }
  fVar9 = (this_ptr->base_actor).location.position.y + local_28;
  (this_ptr->base_actor).location.position.y = fVar9;
  if (*(float *)(this_ptr->field2_0x240c + 8) <= fVar9) {
    if ((*(int *)(this_ptr->field2_0x240c + 4) != 0) &&
       ((this_ptr->base_actor).location.position.y <
        *(float *)(this_ptr->field2_0x240c + 8) + (float)DOUBLE_00617072)) {
      (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
      local_8c.z = (this_ptr->base_actor).location.position.y;
    }
  }
  else {
    (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field2_0x240c + 8);
  }
  this_ptr->field2_0x240c[0x24] = '\0';
  this_ptr->field2_0x240c[0x25] = '\0';
  this_ptr->field2_0x240c[0x26] = '\0';
  this_ptr->field2_0x240c[0x27] = '\0';
  *(undefined4 *)(this_ptr->field2_0x240c + 0x20) = *(undefined4 *)(this_ptr->field2_0x240c + 0x24);
  *(undefined4 *)(this_ptr->field2_0x240c + 0x1c) = *(undefined4 *)(this_ptr->field2_0x240c + 0x20);
  pCVar5 = g_CDemonSetPtr;
  *(float *)(this_ptr->field2_0x240c + 0x20) =
       ((this_ptr->base_actor).location.position.y - local_8c.z) / g_CGamePtr->delta_time_float;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(pCVar5);
  return;
}


// Assembly code:
// 00428f40: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00428f40
// 00428f41: PUSH ESI
// 00428f42: PUSH EDI
// 00428f43: PUSH EBP
// 00428f44: MOV EBP,ESP
// 00428f46: SUB ESP,0xc0
// 00428f4c: AND ESP,0xfffffff8
// 00428f4f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00428f52: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00428f55: PUSH EDX
// 00428f56: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0xa8] (DATA)
// 00428f5a: PUSH EAX
// 00428f5b: PUSH EBX
// 00428f5c: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00428f61: MOV ECX,dword ptr [EBX + 0xdc]
// 00428f67: ADD ESP,0xc
// 00428f6a: TEST ECX,ECX
// 00428f6c: JNZ 0x004293cb
//   XREF to: 004293cb (CONDITIONAL_JUMP)
// 00428f72: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00428f72
//   XREF to: Stack[0x8] (READ)
// 00428f75: XOR ESI,ESI
// 00428f77: MOV EDI,dword ptr [EAX + 0x8]
// 00428f7a: MOV dword ptr [0x00823c50],ESI
//   XREF to: 00823c50 (WRITE)
// 00428f80: TEST EDI,0x7fffffff
// 00428f86: JNZ 0x00428fb7
//   XREF to: 00428fb7 (CONDITIONAL_JUMP)
// 00428f88: TEST dword ptr [EAX],0x7fffffff
// 00428f8e: JNZ 0x00428fb7
//   XREF to: 00428fb7 (CONDITIONAL_JUMP)
// 00428f90: FLD float ptr [EAX + 0x4]
// 00428f93: FLDZ
// 00428f95: FCOMPP
// 00428f97: FNSTSW AX
// 00428f99: SAHF
// 00428f9a: JC 0x00428fb7
//   XREF to: 00428fb7 (CONDITIONAL_JUMP)
// 00428f9c: CMP dword ptr [EBX + 0xdc],0x0
// 00428fa3: JNZ 0x00428fb7
//   XREF to: 00428fb7 (CONDITIONAL_JUMP)
// 00428fa5: FLD float ptr [EBX + 0x24]
// 00428fa8: FCOMP float ptr [EBX + 0x2414]
// 00428fae: FNSTSW AX
// 00428fb0: SAHF
// 00428fb1: JZ 0x0042944e
//   XREF to: 0042944e (CONDITIONAL_JUMP)
// 00428fb7: LEA EAX,[EBX + 0x158]
//   Label: LAB_00428fb7
// 00428fbd: LEA EDX,[EBX + 0x23b8]
// 00428fc3: CMP byte ptr [EDX],0x0
// 00428fc6: JNZ 0x00429482
//   XREF to: 00429482 (CONDITIONAL_JUMP)
// 00428fcc: LEA EAX,[EBX + 0x2c5c]
//   Label: LAB_00428fcc
// 00428fd2: XOR ESI,ESI
// 00428fd4: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00428fdb: LEA EDX,[EBX + 0x2d10]
// 00428fe1: MOV EDI,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x50] (READ)
// 00428fe8: LEA EAX,[EBX + 0x2c80]
// 00428fee: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00428ff5: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00428ffc: IMUL EAX,ESI,0x24
//   Label: LAB_00428ffc
// 00428fff: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x44] (READ)
// 00429006: MOV ECX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x48] (READ)
// 0042900d: ADD EAX,EDI
// 0042900f: MOV dword ptr [EAX + 0x8],0x0
//   Label: LAB_0042900f
// 00429016: ADD EDX,0xc
// 00429019: FLD float ptr [EAX + 0x8]
// 0042901c: FST float ptr [EAX + 0x4]
// 0042901f: FSTP float ptr [EAX]
// 00429021: MOV dword ptr [EDX + -0x4],0x0
// 00429028: ADD EAX,0xc
// 0042902b: FLD float ptr [EDX + -0x4]
// 0042902e: FST float ptr [EDX + -0x8]
// 00429031: FSTP float ptr [EDX + -0xc]
// 00429034: CMP EAX,ECX
// 00429036: JNZ 0x0042900f
//   XREF to: 0042900f (CONDITIONAL_JUMP)
// 00429038: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x44] (READ)
// 0042903f: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x48] (READ)
// 00429046: INC ESI
// 00429047: ADD EDX,0x24
// 0042904a: ADD EAX,0x24
// 0042904d: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00429054: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0042905b: CMP ESI,0x5
// 0042905e: JL 0x00428ffc
//   XREF to: 00428ffc (CONDITIONAL_JUMP)
// 00429060: LEA ESI,[EBX + 0x20]
// 00429063: MOV EAX,dword ptr [ESI]
// 00429065: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00429069: LEA EAX,[ESI + 0x4]
// 0042906c: MOV EAX,dword ptr [EAX]
// 0042906e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 00429072: LEA EAX,[ESI + 0x8]
// 00429075: PUSH EBX
// 00429076: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0042907c: MOV EAX,dword ptr [EAX]
// 0042907e: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0042907f: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 00429083: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 00429088: ADD ESP,0x8
// 0042908b: XOR EDI,EDI
// 0042908d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00429090: MOV dword ptr [ESP + 0x98],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 00429097: MOV EAX,dword ptr [EAX + 0x4]
// 0042909a: MOV dword ptr [ESP + 0xa0],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 004290a1: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004290a5: LEA EAX,[EBX + 0x2d10]
// 004290ab: MOV dword ptr [ESP + 0xa8],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 004290b2: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004290b9: LEA EAX,[EBX + 0x2c5c]
// 004290bf: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x4c] (READ)
// 004290c6: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004290cd: ADD EAX,0xc
// 004290d0: ADD ESI,0x18
// 004290d3: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004290da: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x4c] (READ)
// 004290e1: MOV EDI,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 004290e8: ADD EAX,0xc
// 004290eb: ADD EDI,0x18
// 004290ee: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004290f5: XOR EAX,EAX
//   Label: LAB_004290f5
// 004290f7: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 004290fb: FLD float ptr [EBX + 0x2df0]
// 00429101: FMUL float ptr [EBX + 0x261c]
// 00429107: FLD float ptr [EBX + 0x2dec]
// 0042910d: FMUL float ptr [EBX + 0x261c]
// 00429113: FXCH
// 00429115: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x34] (WRITE)
// 0042911c: FCOMP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x34] (READ)
// 00429123: FNSTSW AX
// 00429125: SAHF
// 00429126: JBE 0x00429135
//   XREF to: 00429135 (CONDITIONAL_JUMP)
// 00429128: MOV EAX,dword ptr [EBX + 0x23a0]
// 0042912e: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00429135: FLD float ptr [EBX + 0x2dec]
//   Label: LAB_00429135
// 0042913b: FMUL float ptr [EBX + 0x261c]
// 00429141: FLD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x34] (READ)
// 00429148: FXCH
// 0042914a: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xb8] (WRITE)
// 0042914e: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0xb8] (READ)
// 00429152: FNSTSW AX
// 00429154: SAHF
// 00429155: JNC 0x00429170
//   XREF to: 00429170 (CONDITIONAL_JUMP)
// 00429157: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0xb8] (READ)
// 0042915b: FLD float ptr [EBX + 0x261c]
// 00429161: FMUL double ptr [0x00617072]
//   XREF to: 00617072 (READ)
// 00429167: FADDP
// 00429169: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x34] (WRITE)
// 00429170: FLD float ptr [EBX + 0x24]
//   Label: LAB_00429170
// 00429173: FADD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x34] (READ)
// 0042917a: SUB ESP,0x4
// 0042917d: FSTP float ptr [ESP]
//   XREF to: Stack[-0xd4] (DATA)
// 00429180: FLD float ptr [EBX + 0x2dec]
// 00429186: FMUL float ptr [EBX + 0x261c]
// 0042918c: FADD float ptr [EBX + 0x24]
// 0042918f: SUB ESP,0x4
// 00429192: FSTP float ptr [ESP]
//   XREF to: Stack[-0xd8] (DATA)
// 00429195: FLD float ptr [EBX + 0x2de0]
// 0042919b: FMUL float ptr [EBX + 0x261c]
// 004291a1: SUB ESP,0x4
// 004291a4: FSTP float ptr [ESP]
//   XREF to: Stack[-0xdc] (DATA)
// 004291a7: PUSH dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0xa0] (READ)
// 004291ab: PUSH dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xa8] (READ)
// 004291af: PUSH dword ptr [EBX + 0x28]
// 004291b2: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004291b8: PUSH dword ptr [EBX + 0x20]
// 004291bb: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004291bc: CALL core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470
//   XREF to: 00573470 (UNCONDITIONAL_CALL)
// 004291c1: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004291c8: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 004291cf: ADD ESP,0x20
// 004291d2: MOV ECX,dword ptr [0x00823c50]
//   XREF to: 00823c50 (READ)
// 004291d8: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc0] (WRITE)
// 004291dc: TEST ECX,ECX
// 004291de: JNZ 0x004291f0
//   XREF to: 004291f0 (CONDITIONAL_JUMP)
// 004291e0: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004291e5: MOV EAX,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004291eb: MOV [0x00823c50],EAX
//   XREF to: 00823c50 (WRITE)
// 004291f0: IMUL EAX,dword ptr [ESP + 0x98],0x24
//   Label: LAB_004291f0
//   XREF to: Stack[-0x38] (READ)
// 004291f8: ADD EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x1c] (READ)
// 004291ff: CMP EAX,0x15c4800
//   XREF to: 015c4800 (DATA)
// 00429204: JZ 0x00429220
//   XREF to: 00429220 (CONDITIONAL_JUMP)
// 00429206: MOV EDX,dword ptr [0x015c4800]
//   XREF to: 015c4800 (READ)
// 0042920c: MOV dword ptr [EAX],EDX
// 0042920e: MOV EDX,dword ptr [0x015c4804]
//   XREF to: 015c4804 (READ)
// 00429214: MOV dword ptr [EAX + 0x4],EDX
// 00429217: MOV EDX,dword ptr [0x015c4808]
//   XREF to: 015c4808 (READ)
// 0042921d: MOV dword ptr [EAX + 0x8],EDX
// 00429220: MOV EAX,dword ptr [ESP + 0xac]
//   Label: LAB_00429220
//   XREF to: Stack[-0x24] (READ)
// 00429227: CMP EAX,0x15c480c
//   XREF to: 015c480c (DATA)
// 0042922c: JZ 0x00429248
//   XREF to: 00429248 (CONDITIONAL_JUMP)
// 0042922e: MOV EDX,dword ptr [0x015c480c]
//   XREF to: 015c480c (READ)
// 00429234: MOV dword ptr [EAX],EDX
// 00429236: MOV EDX,dword ptr [0x015c4810]
//   XREF to: 015c4810 (READ)
// 0042923c: MOV dword ptr [EAX + 0x4],EDX
// 0042923f: MOV EDX,dword ptr [0x015c4814]
//   XREF to: 015c4814 (READ)
// 00429245: MOV dword ptr [EAX + 0x8],EDX
// 00429248: CMP EDI,0x15c4818
//   Label: LAB_00429248
//   XREF to: 015c4818 (DATA)
// 0042924e: JZ 0x00429267
//   XREF to: 00429267 (CONDITIONAL_JUMP)
// 00429250: MOV EAX,[0x015c4818]
//   XREF to: 015c4818 (READ)
// 00429255: MOV dword ptr [EDI],EAX
// 00429257: MOV EAX,[0x015c481c]
//   XREF to: 015c481c (READ)
// 0042925c: MOV dword ptr [EDI + 0x4],EAX
// 0042925f: MOV EAX,[0x015c4820]
//   XREF to: 015c4820 (READ)
// 00429264: MOV dword ptr [EDI + 0x8],EAX
// 00429267: FLD float ptr [ESP + 0x10]
//   Label: LAB_00429267
//   XREF to: Stack[-0xc0] (READ)
// 0042926b: FLDZ
// 0042926d: FXCH
// 0042926f: FSTP double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 00429272: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 00429275: FNSTSW AX
// 00429277: SAHF
// 00429278: JBE 0x00429506
//   XREF to: 00429506 (CONDITIONAL_JUMP)
// 0042927e: FLD double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 00429281: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00429286: FADD double ptr [0x0061708a]
//   XREF to: 0061708a (READ)
// 0042928c: FLD float ptr [EAX + 0x14d128]
//   XREF to: 032613a0 (READ)
// 00429292: FXCH
// 00429294: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x40] (WRITE)
// 0042929b: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x40] (READ)
// 004292a2: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x90] (WRITE)
// 004292a6: FLD float ptr [EAX + 0x14d12c]
//   XREF to: 032613a4 (READ)
// 004292ac: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x40] (READ)
// 004292b3: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x8c] (WRITE)
// 004292b7: FLD float ptr [EAX + 0x14d130]
//   XREF to: 032613a8 (READ)
// 004292bd: FMUL float ptr [ESP + 0x90]
//   XREF to: Stack[-0x40] (READ)
// 004292c4: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x30] (READ)
// 004292cb: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x88] (WRITE)
// 004292cf: FLD float ptr [EAX]
// 004292d1: FSUB float ptr [ESP + 0x40]
//   XREF to: Stack[-0x90] (READ)
// 004292d5: FLD float ptr [EAX + 0x4]
// 004292d8: FXCH
// 004292da: FSTP float ptr [EAX]
// 004292dc: FSUB float ptr [ESP + 0x44]
//   XREF to: Stack[-0x8c] (READ)
// 004292e0: FLD float ptr [EAX + 0x8]
// 004292e3: FXCH
// 004292e5: FSTP float ptr [EAX + 0x4]
// 004292e8: FSUB float ptr [ESP + 0x48]
//   XREF to: Stack[-0x88] (READ)
// 004292ec: MOV EDX,0x1
// 004292f1: FSTP float ptr [EAX + 0x8]
// 004292f4: MOV EAX,dword ptr [ESP + 0xac]
//   Label: LAB_004292f4
//   XREF to: Stack[-0x24] (READ)
// 004292fb: MOV ECX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x2c] (READ)
// 00429302: ADD EDI,0x24
// 00429305: ADD EAX,0x24
// 00429308: ADD ESI,0x24
// 0042930b: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00429312: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x38] (READ)
// 00429319: ADD ECX,0x24
// 0042931c: INC EAX
// 0042931d: MOV dword ptr [ESP + 0xa4],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00429324: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0042932b: CMP EAX,0x3
// 0042932e: JL 0x004290f5
//   XREF to: 004290f5 (CONDITIONAL_JUMP)
// 00429334: TEST EDX,EDX
//   Label: LAB_00429334
// 00429336: JZ 0x00429361
//   XREF to: 00429361 (CONDITIONAL_JUMP)
// 00429338: PUSH 0x0
// 0042933a: MOV EAX,dword ptr [EBX + 0x154]
// 00429340: PUSH dword ptr [EBX + 0x2ddc]
// 00429346: PUSH EBX
// 00429347: CALL dword ptr [EAX + 0x38]
// 0042934a: MOV dword ptr [ESP + 0xc8],EAX
// 00429351: MOV EAX,dword ptr [ESP + 0xc8]
// 00429358: MOV dword ptr [EBX + 0x2414],EAX
// 0042935e: ADD ESP,0xc
// 00429361: FLD float ptr [EBX + 0x24]
//   Label: LAB_00429361
// 00429364: FADD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x54] (READ)
// 00429368: FST float ptr [EBX + 0x24]
// 0042936b: FCOMP float ptr [EBX + 0x2414]
// 00429371: FNSTSW AX
// 00429373: SAHF
// 00429374: JNC 0x0042979e
//   XREF to: 0042979e (CONDITIONAL_JUMP)
// 0042937a: MOV EAX,dword ptr [EBX + 0x2414]
// 00429380: MOV dword ptr [EBX + 0x24],EAX
// 00429383: LEA EAX,[EBX + 0x2428]
//   Label: LAB_00429383
// 00429389: MOV dword ptr [EAX + 0x8],0x0
// 00429390: MOV EDX,dword ptr [EAX + 0x8]
// 00429393: MOV dword ptr [EAX + 0x4],EDX
// 00429396: MOV EDX,dword ptr [EAX + 0x4]
// 00429399: MOV dword ptr [EAX],EDX
// 0042939b: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004293a0: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004293a6: FLD float ptr [EBX + 0x24]
// 004293a9: FSUB float ptr [ESP + 0x20]
// 004293ad: FDIVRP
// 004293af: MOV EDI,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 004293b5: PUSH EDI
//   XREF to: 03114278 (DATA)
// 004293b6: FSTP float ptr [EBX + 0x242c]
// 004293bc: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004293c1: ADD ESP,0x4
// 004293c4: MOV ESP,EBP
// 004293c6: POP EBP
// 004293c7: POP EDI
// 004293c8: POP ESI
// 004293c9: POP EBX
// 004293ca: RET
// 004293cb: FLD float ptr [EBX + 0xe4]
//   Label: LAB_004293cb
// 004293d1: FADD float ptr [EBX + 0x24]
// 004293d4: FSTP float ptr [EBX + 0x24]
// 004293d7: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0xa8] (READ)
// 004293db: FADD float ptr [EBX + 0xe0]
// 004293e1: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa0] (READ)
// 004293e5: FXCH
// 004293e7: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xa8] (WRITE)
// 004293eb: FADD float ptr [EBX + 0xe8]
// 004293f1: LEA EAX,[EBX + 0xe0]
// 004293f7: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa0] (WRITE)
// 004293fb: MOV dword ptr [EAX + 0x8],0x0
// 00429402: LEA EDX,[EBX + 0x30]
// 00429405: MOV ECX,dword ptr [EAX + 0x8]
// 00429408: MOV dword ptr [EAX + 0x4],ECX
// 0042940b: MOV ECX,dword ptr [EAX + 0x4]
// 0042940e: MOV dword ptr [EAX],ECX
// 00429410: LEA EAX,[EBX + 0xec]
// 00429416: FLD float ptr [EAX]
// 00429418: FADD float ptr [EDX]
// 0042941a: FSTP float ptr [EDX]
// 0042941c: FLD float ptr [EAX + 0x4]
// 0042941f: FADD float ptr [EDX + 0x4]
// 00429422: FSTP float ptr [EDX + 0x4]
// 00429425: FLD float ptr [EAX + 0x8]
// 00429428: FADD float ptr [EDX + 0x8]
// 0042942b: FSTP float ptr [EDX + 0x8]
// 0042942e: MOV dword ptr [EAX + 0x8],0x0
// 00429435: PUSH EBX
// 00429436: MOV EDX,dword ptr [EAX + 0x8]
// 00429439: MOV dword ptr [EAX + 0x4],EDX
// 0042943c: MOV EDX,dword ptr [EAX + 0x4]
// 0042943f: MOV dword ptr [EAX],EDX
// 00429441: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00429446: ADD ESP,0x4
// 00429449: JMP 0x00428f72
//   XREF to: 00428f72 (UNCONDITIONAL_JUMP)
// 0042944e: MOV EDX,dword ptr [0x006810c8]
//   Label: LAB_0042944e
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00429454: PUSH EDX
//   XREF to: 03114278 (DATA)
// 00429455: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0042945a: MOV dword ptr [EBX + 0x2430],ESI
// 00429460: ADD ESP,0x4
// 00429463: MOV EAX,dword ptr [EBX + 0x2430]
// 00429469: MOV dword ptr [EBX + 0x242c],EAX
// 0042946f: MOV EAX,dword ptr [EBX + 0x242c]
// 00429475: MOV dword ptr [EBX + 0x2428],EAX
// 0042947b: MOV ESP,EBP
// 0042947d: POP EBP
// 0042947e: POP EDI
// 0042947f: POP ESI
// 00429480: POP EBX
// 00429481: RET
// 00429482: PUSH EAX
//   Label: LAB_00429482
// 00429483: MOV ESI,0x66e778
//   XREF to: 0066e778 (DATA)
// 00429488: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0042948d: ADD ESP,0x4
// 00429490: MOV EDI,EAX
// 00429492: MOV EDX,EAX
// 00429494: SUB ECX,ECX
// 00429496: DEC ECX
// 00429497: XOR EAX,EAX
// 00429499: SCASB.REPNE ES:EDI
// 0042949b: NOT ECX
// 0042949d: DEC ECX
// 0042949e: LEA EDI,[ESP + 0x4c]
//   XREF to: Stack[-0x84] (DATA)
// 004294a2: SUB ECX,0xb
// 004294a5: MOVSD ES:EDI,ESI
//   XREF to: 0066e778 (READ)
// 004294a6: MOVSD ES:EDI,ESI
//   XREF to: 0066e77c (READ)
// 004294a7: MOVSD ES:EDI,ESI
//   XREF to: 0066e780 (READ)
//   XREF to: 006e6f69 (DATA)
// 004294a8: MOV dword ptr [ESP + 0xb0],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004294af: MOV ESI,EDX
// 004294b1: XOR EDI,EDI
// 004294b3: TEST ECX,ECX
// 004294b5: JL 0x00428fcc
//   XREF to: 00428fcc (CONDITIONAL_JUMP)
// 004294bb: PUSH 0xb
//   Label: LAB_004294bb
// 004294bd: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x84] (DATA)
// 004294c1: PUSH EAX
// 004294c2: PUSH ESI
// 004294c3: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 004294c8: ADD ESP,0xc
// 004294cb: TEST EAX,EAX
// 004294cd: JZ 0x004294e1
//   XREF to: 004294e1 (CONDITIONAL_JUMP)
// 004294cf: MOV ECX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x20] (READ)
// 004294d6: INC EDI
// 004294d7: INC ESI
// 004294d8: CMP EDI,ECX
// 004294da: JLE 0x004294bb
//   XREF to: 004294bb (CONDITIONAL_JUMP)
// 004294dc: JMP 0x00428fcc
//   XREF to: 00428fcc (UNCONDITIONAL_JUMP)
// 004294e1: MOV dword ptr [EBX + 0x2430],EAX
//   Label: LAB_004294e1
// 004294e7: MOV EAX,dword ptr [EBX + 0x2430]
// 004294ed: MOV dword ptr [EBX + 0x242c],EAX
// 004294f3: MOV EAX,dword ptr [EBX + 0x242c]
// 004294f9: MOV dword ptr [EBX + 0x2428],EAX
// 004294ff: MOV ESP,EBP
// 00429501: POP EBP
// 00429502: POP EDI
// 00429503: POP ESI
// 00429504: POP EBX
// 00429505: RET
// 00429506: FLD1
//   Label: LAB_00429506
// 00429508: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 0042950b: FNSTSW AX
// 0042950d: SAHF
// 0042950e: JNC 0x00429518
//   XREF to: 00429518 (CONDITIONAL_JUMP)
// 00429510: MOV dword ptr [ESP + 0x10],0x3f800000
//   XREF to: Stack[-0xc0] (WRITE)
// 00429518: FLD float ptr [ESP + 0x10]
//   Label: LAB_00429518
//   XREF to: Stack[-0xc0] (READ)
// 0042951c: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0xa8] (READ)
// 00429520: FMUL ST1
// 00429522: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa4] (READ)
// 00429526: FMUL ST2
// 00429528: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa0] (READ)
// 0042952c: FMULP ST3
// 0042952e: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x28] (READ)
// 00429535: FXCH
// 00429537: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x60] (WRITE)
// 0042953b: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x5c] (WRITE)
// 0042953f: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x58] (WRITE)
// 00429543: FLD float ptr [EAX]
// 00429545: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x60] (READ)
// 00429549: FLD float ptr [EAX + 0x4]
// 0042954c: FXCH
// 0042954e: FSTP float ptr [EAX]
// 00429550: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x5c] (READ)
// 00429554: FLD float ptr [EAX + 0x8]
// 00429557: FXCH
// 00429559: FSTP float ptr [EAX + 0x4]
// 0042955c: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x58] (READ)
// 00429560: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
// 00429566: FSTP float ptr [EAX + 0x8]
// 00429569: MOV EAX,dword ptr [EDX + 0x14d128]
//   XREF to: 032613a0 (READ)
// 0042956f: ADD EDX,0x14d128
// 00429575: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00429579: LEA EAX,[EDX + 0x4]
//   XREF to: 032613a4 (DATA)
// 0042957c: MOV EAX,dword ptr [EAX]
//   XREF to: 032613a4 (READ)
// 0042957e: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00429582: LEA EAX,[EDX + 0x8]
//   XREF to: 032613a8 (DATA)
// 00429585: MOV EAX,dword ptr [EAX]
//   XREF to: 032613a8 (READ)
// 00429587: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0042958b: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x9c] (DATA)
// 0042958f: PUSH EAX
// 00429590: MOV EDX,dword ptr [EBX + 0x154]
// 00429596: PUSH dword ptr [EBX + 0x2ddc]
// 0042959c: PUSH EBX
// 0042959d: CALL dword ptr [EDX + 0x38]
// 004295a0: MOV dword ptr [ESP + 0xc8],EAX
// 004295a7: FLD float ptr [ESP + 0xc8]
// 004295ae: ADD ESP,0xc
// 004295b1: IMUL EAX,dword ptr [ESP + 0x98],0x24
// 004295b9: MOV ECX,dword ptr [ESP + 0x84]
// 004295c0: XOR EDX,EDX
// 004295c2: ADD EAX,ECX
// 004295c4: FSTP float ptr [EBX + 0x2414]
// 004295ca: CMP EAX,0x15c4800
//   XREF to: 015c4800 (DATA)
// 004295cf: JZ 0x004295eb
//   XREF to: 004295eb (CONDITIONAL_JUMP)
// 004295d1: MOV ECX,dword ptr [0x015c4800]
//   XREF to: 015c4800 (READ)
// 004295d7: MOV dword ptr [EAX],ECX
// 004295d9: MOV ECX,dword ptr [0x015c4804]
//   XREF to: 015c4804 (READ)
// 004295df: MOV dword ptr [EAX + 0x4],ECX
// 004295e2: MOV ECX,dword ptr [0x015c4808]
//   XREF to: 015c4808 (READ)
// 004295e8: MOV dword ptr [EAX + 0x8],ECX
// 004295eb: MOV EAX,dword ptr [ESP + 0xa4]
//   Label: LAB_004295eb
// 004295f2: CMP EAX,0x15c480c
//   XREF to: 015c480c (DATA)
// 004295f7: JZ 0x00429613
//   XREF to: 00429613 (CONDITIONAL_JUMP)
// 004295f9: MOV ECX,dword ptr [0x015c480c]
//   XREF to: 015c480c (READ)
// 004295ff: MOV dword ptr [EAX],ECX
// 00429601: MOV ECX,dword ptr [0x015c4810]
//   XREF to: 015c4810 (READ)
// 00429607: MOV dword ptr [EAX + 0x4],ECX
// 0042960a: MOV ECX,dword ptr [0x015c4814]
//   XREF to: 015c4814 (READ)
// 00429610: MOV dword ptr [EAX + 0x8],ECX
// 00429613: CMP ESI,0x15c4818
//   Label: LAB_00429613
//   XREF to: 015c4818 (DATA)
// 00429619: JZ 0x00429632
//   XREF to: 00429632 (CONDITIONAL_JUMP)
// 0042961b: MOV EAX,[0x015c4818]
//   XREF to: 015c4818 (READ)
// 00429620: MOV dword ptr [ESI],EAX
// 00429622: MOV EAX,[0x015c481c]
//   XREF to: 015c481c (READ)
// 00429627: MOV dword ptr [ESI + 0x4],EAX
// 0042962a: MOV EAX,[0x015c4820]
//   XREF to: 015c4820 (READ)
// 0042962f: MOV dword ptr [ESI + 0x8],EAX
// 00429632: FLD float ptr [EBX + 0x24]
//   Label: LAB_00429632
// 00429635: FCOMP float ptr [EBX + 0x2414]
// 0042963b: FNSTSW AX
// 0042963d: SAHF
// 0042963e: JNC 0x00429650
//   XREF to: 00429650 (CONDITIONAL_JUMP)
// 00429640: MOV EAX,dword ptr [EBX + 0x2414]
// 00429646: MOV dword ptr [EBX + 0x24],EAX
// 00429649: MOV EAX,dword ptr [EBX + 0x24]
// 0042964c: MOV dword ptr [ESP + 0x20],EAX
// 00429650: FLD float ptr [ESP + 0x10]
//   Label: LAB_00429650
// 00429654: FCOMP double ptr [0x00617082]
//   XREF to: 00617082 (READ)
// 0042965a: FNSTSW AX
// 0042965c: SAHF
// 0042965d: JA 0x00429334
//   XREF to: 00429334 (CONDITIONAL_JUMP)
// 00429663: FLD float ptr [ESP + 0x58]
// 00429667: FMUL ST0
// 00429669: FLD float ptr [ESP + 0x60]
// 0042966d: FMUL ST0
// 0042966f: FADDP
// 00429671: FSQRT
// 00429673: XOR ECX,ECX
// 00429675: FLDZ
// 00429677: MOV dword ptr [ESP + 0x5c],ECX
// 0042967b: FXCH
// 0042967d: FSTP float ptr [ESP + 0x14]
// 00429681: FCOMP float ptr [ESP + 0x14]
// 00429685: FNSTSW AX
// 00429687: SAHF
// 00429688: JNC 0x004296c8
//   XREF to: 004296c8 (CONDITIONAL_JUMP)
// 0042968a: FLD float ptr [ESP + 0x14]
// 0042968e: FLD1
// 00429690: FDIVRP
// 00429692: FLD float ptr [ESP + 0x58]
// 00429696: FXCH
// 00429698: FSTP float ptr [ESP + 0xb8]
// 0042969f: FMUL float ptr [ESP + 0xb8]
// 004296a6: FLDZ
// 004296a8: FMUL float ptr [ESP + 0xb8]
// 004296af: FLD float ptr [ESP + 0x60]
// 004296b3: FMUL float ptr [ESP + 0xb8]
// 004296ba: FXCH ST2
// 004296bc: FSTP float ptr [ESP + 0x58]
// 004296c0: FSTP float ptr [ESP + 0x5c]
// 004296c4: FSTP float ptr [ESP + 0x60]
// 004296c8: FLD float ptr [ESP + 0x10]
//   Label: LAB_004296c8
// 004296cc: FSUBR double ptr [0x00617082]
//   XREF to: 00617082 (READ)
// 004296d2: FLD float ptr [ESP + 0x28]
// 004296d6: FXCH
// 004296d8: FSTP float ptr [ESP + 0x94]
// 004296df: FMUL float ptr [ESP + 0x94]
// 004296e6: FLD float ptr [ESP + 0x2c]
// 004296ea: FMUL float ptr [ESP + 0x94]
// 004296f1: FLD float ptr [ESP + 0x5c]
// 004296f5: FXCH
// 004296f7: FSTP float ptr [ESP + 0x2c]
// 004296fb: FMUL float ptr [ESP + 0x2c]
// 004296ff: FXCH
// 00429701: FSTP float ptr [ESP + 0x28]
// 00429705: FLD float ptr [ESP + 0x58]
// 00429709: FMUL float ptr [ESP + 0x28]
// 0042970d: FLD float ptr [ESP + 0x30]
// 00429711: FMUL float ptr [ESP + 0x94]
// 00429718: FXCH
// 0042971a: FADDP ST2,ST0
// 0042971c: FSTP float ptr [ESP + 0x30]
// 00429720: FLD float ptr [ESP + 0x60]
// 00429724: FMUL float ptr [ESP + 0x30]
// 00429728: FADDP
// 0042972a: FLDZ
// 0042972c: FXCH
// 0042972e: FSTP double ptr [ESP + 0x8]
// 00429732: FCOMP double ptr [ESP + 0x8]
// 00429736: FNSTSW AX
// 00429738: SAHF
// 00429739: JBE 0x00429334
//   XREF to: 00429334 (CONDITIONAL_JUMP)
// 0042973f: FLD double ptr [ESP + 0x8]
// 00429743: FMUL double ptr [0x0061707a]
//   XREF to: 0061707a (READ)
// 00429749: FLD float ptr [ESP + 0x58]
// 0042974d: FMUL ST1
// 0042974f: FLD float ptr [ESP + 0x5c]
// 00429753: FMUL ST2
// 00429755: FLD float ptr [ESP + 0x60]
// 00429759: FMULP ST3
// 0042975b: FLD float ptr [ESP + 0x28]
// 0042975f: FLD float ptr [ESP + 0x2c]
// 00429763: FLD float ptr [ESP + 0x30]
// 00429767: FXCH ST4
// 00429769: FSTP float ptr [ESP + 0x64]
// 0042976d: FXCH ST2
// 0042976f: FSTP float ptr [ESP + 0x68]
// 00429773: FXCH ST3
// 00429775: FSTP float ptr [ESP + 0x6c]
// 00429779: FXCH ST2
// 0042977b: FSUB float ptr [ESP + 0x64]
// 0042977f: FXCH ST2
// 00429781: FSUB float ptr [ESP + 0x68]
// 00429785: FXCH
// 00429787: FSUB float ptr [ESP + 0x6c]
// 0042978b: FXCH ST2
// 0042978d: FSTP float ptr [ESP + 0x28]
// 00429791: FSTP float ptr [ESP + 0x2c]
// 00429795: FSTP float ptr [ESP + 0x30]
// 00429799: JMP 0x004292f4
//   XREF to: 004292f4 (UNCONDITIONAL_JUMP)
// 0042979e: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_0042979e
// 004297a5: JZ 0x00429383
//   XREF to: 00429383 (CONDITIONAL_JUMP)
// 004297ab: FLD float ptr [EBX + 0x2414]
// 004297b1: FADD double ptr [0x00617072]
//   XREF to: 00617072 (READ)
// 004297b7: FLD float ptr [EBX + 0x24]
// 004297ba: FCOMPP
// 004297bc: FNSTSW AX
// 004297be: SAHF
// 004297bf: JNC 0x00429383
//   XREF to: 00429383 (CONDITIONAL_JUMP)
// 004297c5: MOV EAX,dword ptr [EBX + 0x2414]
// 004297cb: MOV dword ptr [EBX + 0x24],EAX
// 004297ce: MOV EAX,dword ptr [EBX + 0x24]
// 004297d1: MOV dword ptr [ESP + 0x20],EAX
// 004297d5: JMP 0x00429383
//   XREF to: 00429383 (UNCONDITIONAL_JUMP)
