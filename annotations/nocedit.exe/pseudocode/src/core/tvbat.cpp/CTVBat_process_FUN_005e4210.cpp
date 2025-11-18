// Name: core_tvbat.cpp_CTVBat_process_FUN_005e4210
// Address: 005e4210
// Address Range: [[005e4210, 005e4d46]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_process_FUN_005e4210(CTVBat * this_ptr)
// Globals:
//   TerminatedCString s_CVampireBoss_0065692e
//   TerminatedCString s_core_tvbat_cpp_0065693b
//   TerminatedCString s_CTVBat_process_can_t_fol_0065694d
//   undefined4 DAT_00656986
//   undefined4 DAT_0065698a
//   undefined4 DAT_00656992
//   undefined4 DAT_0065699a
//   undefined4 DAT_006569a2
//   undefined4 DAT_006569aa
//   undefined4 DAT_006569b2
//   undefined4 DAT_006569ba
//   undefined4 DAT_006569c2
//   undefined4 DAT_006569ca
//   undefined4 DAT_006569d2
//   undefined4 DAT_006569d6
//   undefined4 DAT_006569da
//   CGore* g_CGorePtr = 02d83364
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CGore g_CGoreInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f7c740
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 DAT_0326525c
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   core_gore.cpp_FUN_004edbb0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   crt_math.c_atan2_FUN_006013b1
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tvbat_cpp_CTVBat_process_FUN_005e4210(CTVBat *this_ptr)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CHero *pCVar9;
  int iVar10;
  CKeyFramedModel *pCVar11;
  undefined4 uVar12;
  float fVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  CLocation *pCVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 extraout_ST1;
  float in_stack_00000008;
  float local_178;
  float local_170;
  SDamageInfo local_16c;
  SCollisionInfo local_130;
  float local_f0;
  float local_ec;
  float fStack_e8;
  CVector3f local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_a0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_58;
  float local_54;
  float local_50;
  float fStack_44;
  float local_3c;
  float fStack_38;
  float local_28;
  float local_24;
  float local_20;
  int local_18;
  
  if ((this_ptr->follow_orders != 0) && (*(int *)(this_ptr->field16_0xc0e8 + 8) == 0)) {
    iVar14 = 0;
    for (iVar16 = 0; iVar16 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c);
        iVar16 = iVar16 + 1) {
      iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0
                         (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar14 + 8000),
                          "CVampireBoss");
      if (iVar10 != 0) {
        *(undefined4 *)(this_ptr->field16_0xc0e8 + 8) =
             *(undefined4 *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar14 + 8000);
        break;
      }
      iVar14 = iVar14 + 4;
    }
  }
  if ((this_ptr->follow_orders != 0) &&
     (iVar14 = *(int *)(this_ptr->field16_0xc0e8 + 8), iVar14 != 0)) {
    if (&this_ptr->home_pos != (CVector3f *)(iVar14 + 0x20)) {
      (this_ptr->home_pos).x = *(float *)(iVar14 + 0x20);
      (this_ptr->home_pos).y = *(float *)(iVar14 + 0x24);
      (this_ptr->home_pos).z = *(float *)(iVar14 + 0x28);
    }
    (this_ptr->home_pos).y = (this_ptr->home_pos).y + _DAT_00656986;
  }
  iVar14 = this_ptr->state;
  if (iVar14 == 2) {
    return;
  }
  if (iVar14 == 3) {
    return;
  }
  pCVar15 = &(this_ptr->base_enemy).base_character.base_actor.location;
  pfVar1 = &(this_ptr->base_enemy).base_character.base_actor.location.position.z;
  pfVar2 = &(this_ptr->base_enemy).base_character.base_actor.location.position.y;
  if (iVar14 == 1) {
    local_dc.x = (pCVar15->position).x;
    local_dc.y = *pfVar2;
    local_dc.z = *pfVar1;
    *(float *)(this_ptr->field11_0xc068 + 8) =
         in_stack_00000008 * (float)_DAT_006569ca + *(float *)(this_ptr->field11_0xc068 + 8);
    local_94 = *(float *)(this_ptr->field11_0xc068 + 4) * in_stack_00000008;
    local_90 = *(float *)(this_ptr->field11_0xc068 + 8) * in_stack_00000008;
    local_8c = *(float *)(this_ptr->field11_0xc068 + 0xc) * in_stack_00000008;
    fVar13 = (this_ptr->base_enemy).base_character.base_actor.location.position.y;
    (pCVar15->position).x = (pCVar15->position).x + local_94;
    fVar3 = (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    (this_ptr->base_enemy).base_character.base_actor.location.position.y = fVar13 + local_90;
    (this_ptr->base_enemy).base_character.base_actor.location.position.z = fVar3 + local_8c;
    (this_ptr->base_enemy).base_character.base_actor.orient.heading =
         in_stack_00000008 * this_ptr->rot_speed * _DAT_006569d2 +
         (this_ptr->base_enemy).base_character.base_actor.orient.heading;
    fVar13 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
                       (&g_CDemonRaytraceInstance,&local_dc,&pCVar15->position,&local_a0,(int *)0x0)
    ;
    if ((0.0 <= fVar13) && (fVar13 < 1.0)) {
      fVar3 = ((this_ptr->base_enemy).base_character.base_actor.location.position.y - local_dc.y) *
              fVar13 * _DAT_006569d6;
      fVar4 = ((this_ptr->base_enemy).base_character.base_actor.location.position.z - local_dc.z) *
              fVar13 * _DAT_006569d6;
      (pCVar15->position).x =
           local_dc.x + ((pCVar15->position).x - local_dc.x) * fVar13 * _DAT_006569d6;
      (this_ptr->base_enemy).base_character.base_actor.location.position.y = local_dc.y + fVar3;
      (this_ptr->base_enemy).base_character.base_actor.location.position.z = local_dc.z + fVar4;
      this_ptr->field11_0xc068[0xc] = '\0';
      this_ptr->field11_0xc068[0xd] = '\0';
      this_ptr->field11_0xc068[0xe] = '\0';
      this_ptr->field11_0xc068[0xf] = '\0';
      *(undefined4 *)(this_ptr->field11_0xc068 + 8) =
           *(undefined4 *)(this_ptr->field11_0xc068 + 0xc);
      *(float *)(this_ptr->field11_0xc068 + 4) = *(float *)(this_ptr->field11_0xc068 + 8);
    }
    if (&local_88 != &local_d0) {
      local_88 = local_dc.x - (this_ptr->base_enemy).base_character.base_actor.location.position.x;
      local_84 = local_dc.y - (this_ptr->base_enemy).base_character.base_actor.location.position.y;
      local_80 = local_dc.z - (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    }
    if ((float)_DAT_006569da <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) {
      return;
    }
    this_ptr->state = 2;
    return;
  }
  local_7c = (pCVar15->position).x;
  local_78 = *pfVar2;
  local_74 = *pfVar1;
  if (this_ptr->follow_orders == 0) {
    pCVar9 = g_HeroActors[g_LocalHeroIndex];
    *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) = pCVar9;
    if (pCVar9 != (CHero *)0x0) {
      pCVar15 = &(pCVar9->base_character).base_actor.location;
      if ((CLocation *)&local_58 != pCVar15) {
        local_58 = (pCVar15->position).x;
        local_54 = (pCVar9->base_character).base_actor.location.position.y;
        local_50 = (pCVar9->base_character).base_actor.location.position.z;
      }
      local_18 = (this_ptr->base_enemy).base_character.base_actor.field7_0x6c % 8 + -4;
      local_54 = (float)local_18 * (float)_DAT_00656992 +
                 *(float *)this_ptr->field9_0xc060 + (float)_DAT_0065698a + local_54;
      goto LAB_005e4342;
    }
  }
  else {
    (this_ptr->base_enemy).field6_0xbe38[4] = '\0';
    (this_ptr->base_enemy).field6_0xbe38[5] = '\0';
    (this_ptr->base_enemy).field6_0xbe38[6] = '\0';
    (this_ptr->base_enemy).field6_0xbe38[7] = '\0';
  }
  if ((CVector3f *)&local_58 != &this_ptr->home_pos) {
    local_58 = (this_ptr->home_pos).x;
    local_54 = (this_ptr->home_pos).y;
    local_50 = (this_ptr->home_pos).z;
  }
LAB_005e4342:
  local_b8 = (this_ptr->home_pos).x -
             (this_ptr->base_enemy).base_character.base_actor.location.position.x;
  local_b4 = (this_ptr->home_pos).y -
             (this_ptr->base_enemy).base_character.base_actor.location.position.y;
  local_b0 = (this_ptr->home_pos).z -
             (this_ptr->base_enemy).base_character.base_actor.location.position.z;
  if (&local_88 != &local_b8) {
    local_88 = local_b8;
    local_84 = local_b4;
    local_80 = local_b0;
  }
  if (((this_ptr->max_distance <=
        SQRT(local_80 * local_80 + local_88 * local_88 + local_84 * local_84)) ||
      (this_ptr->max_height <= ABS(local_84))) && ((CVector3f *)&local_58 != &this_ptr->home_pos)) {
    local_58 = (this_ptr->home_pos).x;
    local_54 = (this_ptr->home_pos).y;
    local_50 = (this_ptr->home_pos).z;
  }
  if (0.0 < *(float *)this_ptr->field11_0xc068) {
    fVar13 = *(float *)this_ptr->field11_0xc068 - in_stack_00000008;
    *(float *)this_ptr->field11_0xc068 = fVar13;
    if (fVar13 < 0.0) {
      this_ptr->field11_0xc068[0] = '\0';
      this_ptr->field11_0xc068[1] = '\0';
      this_ptr->field11_0xc068[2] = '\0';
      this_ptr->field11_0xc068[3] = '\0';
    }
    if (g_CNetGameInstance->connection_type != 0) {
      g_CurrentFilename = "..\\core\\tvbat.cpp";
      g_CurrentLineNumber = 0x10a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CTVBat::process - can't follow orders in network game!");
    }
    pCVar9 = g_HeroActors[g_LocalHeroIndex];
    pCVar15 = &(pCVar9->base_character).base_actor.location;
    if ((CLocation *)&local_58 != pCVar15) {
      local_58 = (pCVar15->position).x;
      local_54 = (pCVar9->base_character).base_actor.location.position.y;
      local_50 = (pCVar9->base_character).base_actor.location.position.z;
    }
    local_54 = *(float *)this_ptr->field9_0xc060 + (float)_DAT_0065698a + local_54;
    *(CHero **)((this_ptr->base_enemy).field6_0xbe38 + 4) = g_HeroActors[g_LocalHeroIndex];
  }
  local_70 = local_58 - (this_ptr->base_enemy).base_character.base_actor.location.position.x;
  local_6c = local_54 - (this_ptr->base_enemy).base_character.base_actor.location.position.y;
  local_68 = local_50 - (this_ptr->base_enemy).base_character.base_actor.location.position.z;
  if (&local_88 != &local_70) {
    local_88 = local_70;
    local_84 = local_6c;
    local_80 = local_68;
  }
  crt_math_c_atan2_FUN_006013b1((float10)local_88,(float10)local_80);
  fVar17 = crt_math_c_atan2_FUN_006013b1
                     ((float10)local_88,
                      SQRT((float10)local_8c * (float10)local_8c +
                           (float10)local_84 * (float10)local_84));
  local_24 = (float)extraout_ST1;
  local_28 = (float)-fVar17;
  if ((*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) != 0) && (this_ptr->follow_orders != 0)) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&local_130);
    (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0x34))();
    iVar14 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
    local_f0 = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
               *(float *)(iVar14 + 0x20);
    local_ec = (this_ptr->base_enemy).base_character.base_actor.location.position.y -
               *(float *)(iVar14 + 0x24);
    fStack_e8 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                *(float *)(iVar14 + 0x28);
    if (&local_90 != &local_f0) {
      local_90 = local_f0;
      local_8c = local_ec;
      local_88 = fStack_e8;
    }
    if (((local_130.cylinder_bottom_y <= local_8c) && (local_8c <= local_130.cylinder_top_y)) &&
       (local_178 < (float)_DAT_0065699a)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_16c);
      local_16c.damage_amount = 1.0;
      local_16c.attacker = (CDemonActor *)this_ptr;
      local_16c.wielder = (CDemonActor *)this_ptr;
      (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x154) + 0x11c))();
      if (0.0 < local_16c.damage_amount) {
        core_gore_cpp_FUN_004edbb0();
      }
    }
  }
  fVar17 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.pitch;
  fVar18 = (float10)fsin(fVar17);
  fVar19 = (float10)(this_ptr->base_enemy).base_character.base_actor.orient.bank;
  fVar20 = (float10)fsin(fVar19);
  fVar17 = (float10)fcos(fVar17);
  fVar19 = (float10)fcos(fVar19);
  fStack_38 = (float)-fVar18;
  local_3c = (float)(fVar20 * fVar17);
  fStack_44 = (float)(fVar19 * fVar17);
  local_24 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       (local_24 - (this_ptr->base_enemy).base_character.base_actor.orient.bank);
  fVar13 = (this_ptr->base_enemy).base_character.base_actor.orient.pitch;
  (this_ptr->base_enemy).base_character.base_actor.orient.bank =
       local_24 * in_stack_00000008 * this_ptr->rot_speed +
       (this_ptr->base_enemy).base_character.base_actor.orient.bank;
  local_20 = local_24;
  local_28 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_28 - fVar13);
  fVar13 = this_ptr->move_speed;
  fVar3 = this_ptr->move_speed;
  fVar4 = this_ptr->move_speed;
  fVar5 = this_ptr->move_speed;
  fVar8 = (float)_DAT_006569a2;
  fVar6 = this_ptr->rot_speed;
  *(float *)(this_ptr->field11_0xc068 + 4) = this_ptr->move_speed * local_3c;
  fVar7 = this_ptr->move_speed;
  *(float *)(this_ptr->field11_0xc068 + 8) = fVar13 * fStack_38;
  *(float *)(this_ptr->field11_0xc068 + 0xc) = fVar7 * fStack_44;
  (this_ptr->base_enemy).base_character.base_actor.orient.heading = -local_24 * fVar8;
  fVar13 = (this_ptr->base_enemy).base_character.base_actor.location.position.y;
  fVar7 = (this_ptr->base_enemy).base_character.base_actor.location.position.z;
  fVar8 = (this_ptr->base_enemy).base_character.base_actor.orient.pitch;
  (this_ptr->base_enemy).base_character.base_actor.location.position.x =
       local_3c * fVar3 * in_stack_00000008 +
       (this_ptr->base_enemy).base_character.base_actor.location.position.x;
  (this_ptr->base_enemy).base_character.base_actor.location.position.y =
       fStack_38 * fVar4 * in_stack_00000008 + fVar13;
  (this_ptr->base_enemy).base_character.base_actor.location.position.z =
       fStack_44 * fVar5 * in_stack_00000008 + fVar7;
  (this_ptr->base_enemy).base_character.base_actor.orient.pitch =
       local_28 * in_stack_00000008 * fVar6 + fVar8;
  local_cc = (this_ptr->base_enemy).base_character.base_actor.location.position.x - local_84;
  local_c8 = (this_ptr->base_enemy).base_character.base_actor.location.position.y - local_80;
  fStack_c4 = (this_ptr->base_enemy).base_character.base_actor.location.position.z - local_7c;
  local_170 = (local_c8 * (float)_DAT_0065698a) / in_stack_00000008 + (float)_DAT_006569aa;
  if (local_170 < (float)_DAT_006569b2) {
    local_170 = 10.0;
  }
  if ((float)_DAT_006569ba < local_170) {
    local_170 = 60.0;
  }
  *(float *)this_ptr->field3_0xc040 =
       (local_170 - *(float *)this_ptr->field3_0xc040) * (float)_DAT_006569c2 +
       *(float *)this_ptr->field3_0xc040;
  *(float *)(this_ptr->field1_0xbeb4 + 8) =
       in_stack_00000008 * *(float *)this_ptr->field3_0xc040 * this_ptr->speed +
       *(float *)(this_ptr->field1_0xbeb4 + 8);
  local_20 = local_28;
  pCVar11 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                      ((CKeyFramedModelInstance *)(this_ptr->field1_0xbeb4 + 0xc));
  local_20 = (float)pCVar11->frame_count;
  if (*(float *)(this_ptr->field1_0xbeb4 + 8) < (float)(int)local_20) {
    if (*(float *)(this_ptr->field1_0xbeb4 + 8) < 0.0) {
      local_20 = (float)((int)local_20 + -1);
      *(float *)(this_ptr->field1_0xbeb4 + 8) = (float)(int)local_20;
    }
  }
  else {
    this_ptr->field1_0xbeb4[8] = '\0';
    this_ptr->field1_0xbeb4[9] = '\0';
    this_ptr->field1_0xbeb4[10] = '\0';
    this_ptr->field1_0xbeb4[0xb] = '\0';
  }
  if ((this_ptr->field13_0xc07c[0] != '\0') &&
     (fVar13 = *(float *)(this_ptr->field16_0xc0e8 + 4) - in_stack_00000008,
     *(float *)(this_ptr->field16_0xc0e8 + 4) = fVar13, fVar13 <= 0.0)) {
    iVar14 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)this_ptr->field16_0xc0e8);
    if ((iVar14 == 0) &&
       (iVar14 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                           ((double)(this_ptr->base_enemy).base_character.base_actor.location.
                                    position.x,
                            (double)(this_ptr->base_enemy).base_character.base_actor.location.
                                    position.y,
                            (double)(this_ptr->base_enemy).base_character.base_actor.location.
                                    position.z,50.0), iVar14 != 0)) {
      uVar12 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->playAmbientSound)
                         ((CDemonActor *)this_ptr,this_ptr->field13_0xc07c);
      *(undefined4 *)this_ptr->field16_0xc0e8 = uVar12;
    }
    fVar13 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                       (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
    *(float *)(this_ptr->field16_0xc0e8 + 4) = fVar13;
    return;
  }
  return;
}


// Assembly code:
// 005e4210: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_process_FUN_005e4210
// 005e4211: PUSH ESI
// 005e4212: PUSH EDI
// 005e4213: PUSH EBP
// 005e4214: MOV EBP,ESP
// 005e4216: SUB ESP,0x164
// 005e421c: AND ESP,0xfffffff8
// 005e421f: MOV EBX,dword ptr [EBP + 0x14]
// 005e4222: CMP dword ptr [EBX + 0xc064],0x0
// 005e4229: JZ 0x005e4276
//   XREF to: 005e4276 (CONDITIONAL_JUMP)
// 005e422b: CMP dword ptr [EBX + 0xc0f0],0x0
// 005e4232: JNZ 0x005e4276
//   XREF to: 005e4276 (CONDITIONAL_JUMP)
// 005e4234: XOR ESI,ESI
// 005e4236: XOR EDI,EDI
// 005e4238: MOV EAX,[0x006810c8]
//   Label: LAB_005e4238
//   XREF to: 006810c8 (READ)
// 005e423d: CMP EDI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 005e4243: JGE 0x005e4276
//   XREF to: 005e4276 (CONDITIONAL_JUMP)
// 005e4245: PUSH 0x65692e
//   XREF to: 0065692e (DATA)
// 005e424a: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
//   XREF to: 0326525c (READ)
// 005e4251: PUSH ECX
// 005e4252: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005e4257: ADD ESP,0x8
// 005e425a: TEST EAX,EAX
// 005e425c: JNZ 0x005e4264
//   XREF to: 005e4264 (CONDITIONAL_JUMP)
// 005e425e: INC EDI
// 005e425f: ADD ESI,0x4
// 005e4262: JMP 0x005e4238
//   XREF to: 005e4238 (UNCONDITIONAL_JUMP)
// 005e4264: MOV EAX,[0x006810c8]
//   Label: LAB_005e4264
//   XREF to: 006810c8 (READ)
// 005e4269: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x150fe0]
//   XREF to: 03265258 (READ)
// 005e4270: MOV dword ptr [EBX + 0xc0f0],EAX
// 005e4276: CMP dword ptr [EBX + 0xc064],0x0
//   Label: LAB_005e4276
// 005e427d: JZ 0x005e42b8
//   XREF to: 005e42b8 (CONDITIONAL_JUMP)
// 005e427f: MOV EDI,dword ptr [EBX + 0xc0f0]
// 005e4285: TEST EDI,EDI
// 005e4287: JZ 0x005e42b8
//   XREF to: 005e42b8 (CONDITIONAL_JUMP)
// 005e4289: LEA EAX,[EBX + 0xc044]
// 005e428f: LEA ESI,[EDI + 0x20]
// 005e4292: CMP EAX,ESI
// 005e4294: JZ 0x005e42a6
//   XREF to: 005e42a6 (CONDITIONAL_JUMP)
// 005e4296: MOV EDX,dword ptr [ESI]
// 005e4298: MOV dword ptr [EAX],EDX
// 005e429a: MOV EDX,dword ptr [ESI + 0x4]
// 005e429d: MOV dword ptr [EAX + 0x4],EDX
// 005e42a0: MOV EDX,dword ptr [ESI + 0x8]
// 005e42a3: MOV dword ptr [EAX + 0x8],EDX
// 005e42a6: FLD float ptr [EBX + 0xc048]
//   Label: LAB_005e42a6
// 005e42ac: FADD float ptr [0x00656986]
//   XREF to: 00656986 (READ)
// 005e42b2: FSTP float ptr [EBX + 0xc048]
// 005e42b8: MOV EAX,dword ptr [EBX + 0xc078]
//   Label: LAB_005e42b8
// 005e42be: CMP EAX,0x2
// 005e42c1: JZ 0x005e494c
//   XREF to: 005e494c (CONDITIONAL_JUMP)
// 005e42c7: CMP EAX,0x3
// 005e42ca: JZ 0x005e494c
//   XREF to: 005e494c (CONDITIONAL_JUMP)
// 005e42d0: LEA ESI,[EBX + 0x20]
// 005e42d3: LEA EDX,[EBX + 0x28]
// 005e42d6: LEA EDI,[EBX + 0x24]
// 005e42d9: CMP EAX,0x1
// 005e42dc: JZ 0x005e4953
//   XREF to: 005e4953 (CONDITIONAL_JUMP)
// 005e42e2: MOV EAX,dword ptr [ESI]
// 005e42e4: MOV dword ptr [ESP + 0xfc],EAX
// 005e42eb: MOV EAX,dword ptr [EDI]
// 005e42ed: MOV dword ptr [ESP + 0x100],EAX
// 005e42f4: MOV EAX,dword ptr [EDX]
// 005e42f6: MOV dword ptr [ESP + 0x104],EAX
// 005e42fd: CMP dword ptr [EBX + 0xc064],0x0
// 005e4304: JZ 0x005e4bf8
//   XREF to: 005e4bf8 (CONDITIONAL_JUMP)
// 005e430a: MOV dword ptr [EBX + 0xbe3c],0x0
// 005e4314: LEA EAX,[ESP + 0x120]
//   Label: LAB_005e4314
// 005e431b: LEA ESI,[EBX + 0xc044]
// 005e4321: CMP EAX,ESI
// 005e4323: JZ 0x005e4342
//   XREF to: 005e4342 (CONDITIONAL_JUMP)
// 005e4325: MOV EAX,dword ptr [ESI]
// 005e4327: MOV dword ptr [ESP + 0x120],EAX
// 005e432e: MOV EAX,dword ptr [ESI + 0x4]
// 005e4331: MOV dword ptr [ESP + 0x124],EAX
// 005e4338: MOV EAX,dword ptr [ESI + 0x8]
// 005e433b: MOV dword ptr [ESP + 0x128],EAX
// 005e4342: LEA ESI,[EBX + 0xc044]
//   Label: LAB_005e4342
// 005e4348: LEA EAX,[EBX + 0x20]
// 005e434b: FLD float ptr [ESI]
// 005e434d: FSUB float ptr [EAX]
// 005e434f: FSTP float ptr [ESP + 0xc0]
// 005e4356: FLD float ptr [ESI + 0x4]
// 005e4359: FSUB float ptr [EAX + 0x4]
// 005e435c: LEA EDX,[ESP + 0xf0]
// 005e4363: FSTP float ptr [ESP + 0xc4]
// 005e436a: FLD float ptr [ESI + 0x8]
// 005e436d: FSUB float ptr [EAX + 0x8]
// 005e4370: LEA EAX,[ESP + 0xc0]
// 005e4377: FSTP float ptr [ESP + 0xc8]
// 005e437e: CMP EDX,EAX
// 005e4380: JZ 0x005e43ac
//   XREF to: 005e43ac (CONDITIONAL_JUMP)
// 005e4382: MOV EAX,dword ptr [ESP + 0xc0]
// 005e4389: MOV dword ptr [ESP + 0xf0],EAX
// 005e4390: MOV EAX,dword ptr [ESP + 0xc4]
// 005e4397: MOV dword ptr [ESP + 0xf4],EAX
// 005e439e: MOV EAX,dword ptr [ESP + 0xc8]
// 005e43a5: MOV dword ptr [ESP + 0xf8],EAX
// 005e43ac: FLD float ptr [ESP + 0xf4]
//   Label: LAB_005e43ac
// 005e43b3: FMUL ST0
// 005e43b5: FLD float ptr [ESP + 0xf0]
// 005e43bc: FMUL ST0
// 005e43be: FADDP
// 005e43c0: FLD float ptr [ESP + 0xf8]
// 005e43c7: FMUL ST0
// 005e43c9: FADDP
// 005e43cb: FSQRT
// 005e43cd: FCOMP float ptr [EBX + 0xc050]
// 005e43d3: FNSTSW AX
// 005e43d5: SAHF
// 005e43d6: JC 0x005e4c92
//   XREF to: 005e4c92 (CONDITIONAL_JUMP)
// 005e43dc: LEA EAX,[ESP + 0x120]
//   Label: LAB_005e43dc
// 005e43e3: LEA ESI,[EBX + 0xc044]
// 005e43e9: CMP EAX,ESI
// 005e43eb: JZ 0x005e440a
//   XREF to: 005e440a (CONDITIONAL_JUMP)
// 005e43ed: MOV EAX,dword ptr [ESI]
// 005e43ef: MOV dword ptr [ESP + 0x120],EAX
// 005e43f6: MOV EAX,dword ptr [ESI + 0x4]
// 005e43f9: MOV dword ptr [ESP + 0x124],EAX
// 005e4400: MOV EAX,dword ptr [ESI + 0x8]
// 005e4403: MOV dword ptr [ESP + 0x128],EAX
// 005e440a: FLD float ptr [EBX + 0xc068]
//   Label: LAB_005e440a
// 005e4410: FLDZ
// 005e4412: FCOMPP
// 005e4414: FNSTSW AX
// 005e4416: SAHF
// 005e4417: JNC 0x005e44d5
//   XREF to: 005e44d5 (CONDITIONAL_JUMP)
// 005e441d: FLD float ptr [EBX + 0xc068]
// 005e4423: FSUB float ptr [EBP + 0x18]
// 005e4426: FST float ptr [EBX + 0xc068]
// 005e442c: FLDZ
// 005e442e: FCOMPP
// 005e4430: FNSTSW AX
// 005e4432: SAHF
// 005e4433: JBE 0x005e443f
//   XREF to: 005e443f (CONDITIONAL_JUMP)
// 005e4435: MOV dword ptr [EBX + 0xc068],0x0
// 005e443f: MOV EAX,[0x00680a00]
//   Label: LAB_005e443f
//   XREF to: 00680a00 (READ)
// 005e4444: CMP dword ptr [EAX],0x0
//   XREF to: 02f7c740 (READ)
// 005e4447: JZ 0x005e446c
//   XREF to: 005e446c (CONDITIONAL_JUMP)
// 005e4449: MOV ECX,0x65693b
//   XREF to: 0065693b (DATA)
// 005e444e: MOV ESI,0x10a
// 005e4453: PUSH 0x65694d
//   XREF to: 0065694d (DATA)
// 005e4458: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005e445e: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005e4464: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005e4469: ADD ESP,0x4
// 005e446c: MOV EAX,[0x02db87d0]
//   Label: LAB_005e446c
//   XREF to: 02db87d0 (READ)
// 005e4471: MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e4478: LEA EAX,[ESP + 0x120]
// 005e447f: ADD ESI,0x20
// 005e4482: CMP EAX,ESI
// 005e4484: JZ 0x005e44a3
//   XREF to: 005e44a3 (CONDITIONAL_JUMP)
// 005e4486: MOV EAX,dword ptr [ESI]
// 005e4488: MOV dword ptr [ESP + 0x120],EAX
// 005e448f: MOV EAX,dword ptr [ESI + 0x4]
// 005e4492: MOV dword ptr [ESP + 0x124],EAX
// 005e4499: MOV EAX,dword ptr [ESI + 0x8]
// 005e449c: MOV dword ptr [ESP + 0x128],EAX
// 005e44a3: FLD float ptr [EBX + 0xc060]
//   Label: LAB_005e44a3
// 005e44a9: FADD double ptr [0x0065698a]
//   XREF to: 0065698a (READ)
// 005e44af: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005e44b4: FLD float ptr [ESP + 0x124]
// 005e44bb: FXCH
// 005e44bd: FADD ST0,ST1
// 005e44bf: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e44c6: FSTP ST1
// 005e44c8: FSTP float ptr [ESP + 0x124]
// 005e44cf: MOV dword ptr [EBX + 0xbe3c],EAX
// 005e44d5: FLD float ptr [ESP + 0x120]
//   Label: LAB_005e44d5
// 005e44dc: LEA EAX,[EBX + 0x20]
// 005e44df: FLD float ptr [ESP + 0x124]
// 005e44e6: FXCH
// 005e44e8: FSUB float ptr [EAX]
// 005e44ea: FLD float ptr [ESP + 0x128]
// 005e44f1: FXCH
// 005e44f3: FSTP float ptr [ESP + 0x108]
// 005e44fa: FXCH
// 005e44fc: FSUB float ptr [EAX + 0x4]
// 005e44ff: LEA EDX,[ESP + 0x108]
// 005e4506: FSTP float ptr [ESP + 0x10c]
// 005e450d: FSUB float ptr [EAX + 0x8]
// 005e4510: LEA EAX,[ESP + 0xf0]
// 005e4517: FSTP float ptr [ESP + 0x110]
// 005e451e: CMP EAX,EDX
// 005e4520: JZ 0x005e454c
//   XREF to: 005e454c (CONDITIONAL_JUMP)
// 005e4522: MOV EAX,dword ptr [ESP + 0x108]
// 005e4529: MOV dword ptr [ESP + 0xf0],EAX
// 005e4530: MOV EAX,dword ptr [ESP + 0x10c]
// 005e4537: MOV dword ptr [ESP + 0xf4],EAX
// 005e453e: MOV EAX,dword ptr [ESP + 0x110]
// 005e4545: MOV dword ptr [ESP + 0xf8],EAX
// 005e454c: FLD float ptr [ESP + 0xf8]
//   Label: LAB_005e454c
// 005e4553: FLD float ptr [ESP + 0xf0]
// 005e455a: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005e455f: FLD float ptr [ESP + 0xf8]
// 005e4566: FMUL ST0
// 005e4568: FLD float ptr [ESP + 0xf0]
// 005e456f: FMUL ST0
// 005e4571: FADDP
// 005e4573: FSQRT
// 005e4575: FLD float ptr [ESP + 0xf4]
// 005e457c: FXCH
// 005e457e: FST float ptr [ESP + 0x8]
// 005e4582: FXCH
// 005e4584: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005e4589: MOV EDI,dword ptr [EBX + 0xbe3c]
// 005e458f: FXCH
// 005e4591: FSTP float ptr [ESP + 0x15c]
// 005e4598: FCHS
// 005e459a: FSTP float ptr [ESP + 0x158]
// 005e45a1: TEST EDI,EDI
// 005e45a3: JZ 0x005e46d8
//   XREF to: 005e46d8 (CONDITIONAL_JUMP)
// 005e45a9: CMP dword ptr [EBX + 0xc064],0x0
// 005e45b0: JZ 0x005e46d8
//   XREF to: 005e46d8 (CONDITIONAL_JUMP)
// 005e45b6: LEA EAX,[ESP + 0x50]
// 005e45ba: PUSH EAX
// 005e45bb: CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: 005743c0 (UNCONDITIONAL_CALL)
// 005e45c0: ADD ESP,0x4
// 005e45c3: LEA ESI,[ESP + 0x50]
// 005e45c7: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005e45cd: PUSH ESI
// 005e45ce: MOV EDX,dword ptr [EAX + 0x154]
// 005e45d4: PUSH EAX
// 005e45d5: CALL dword ptr [EDX + 0x34]
// 005e45d8: LEA EAX,[EBX + 0x20]
// 005e45db: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005e45e1: FLD float ptr [EAX]
// 005e45e3: FSUB float ptr [ESI + 0x20]
// 005e45e6: ADD ESP,0x8
// 005e45e9: FSTP float ptr [ESP + 0x90]
// 005e45f0: FLD float ptr [EAX + 0x4]
// 005e45f3: FSUB float ptr [ESI + 0x24]
// 005e45f6: LEA EDX,[ESP + 0xf0]
// 005e45fd: FSTP float ptr [ESP + 0x94]
// 005e4604: FLD float ptr [EAX + 0x8]
// 005e4607: FSUB float ptr [ESI + 0x28]
// 005e460a: LEA EAX,[ESP + 0x90]
// 005e4611: FSTP float ptr [ESP + 0x98]
// 005e4618: CMP EDX,EAX
// 005e461a: JZ 0x005e4646
//   XREF to: 005e4646 (CONDITIONAL_JUMP)
// 005e461c: MOV EAX,dword ptr [ESP + 0x90]
// 005e4623: MOV dword ptr [ESP + 0xf0],EAX
// 005e462a: MOV EAX,dword ptr [ESP + 0x94]
// 005e4631: MOV dword ptr [ESP + 0xf4],EAX
// 005e4638: MOV EAX,dword ptr [ESP + 0x98]
// 005e463f: MOV dword ptr [ESP + 0xf8],EAX
// 005e4646: FLD float ptr [ESP + 0xf4]
//   Label: LAB_005e4646
// 005e464d: FCOMP float ptr [ESP + 0x64]
// 005e4651: FNSTSW AX
// 005e4653: SAHF
// 005e4654: JC 0x005e46d8
//   XREF to: 005e46d8 (CONDITIONAL_JUMP)
// 005e465a: FLD float ptr [ESP + 0xf4]
// 005e4661: FCOMP float ptr [ESP + 0x68]
// 005e4665: FNSTSW AX
// 005e4667: SAHF
// 005e4668: JA 0x005e46d8
//   XREF to: 005e46d8 (CONDITIONAL_JUMP)
// 005e466a: FLD float ptr [ESP + 0x8]
// 005e466e: FCOMP double ptr [0x0065699a]
//   XREF to: 0065699a (READ)
// 005e4674: FNSTSW AX
// 005e4676: SAHF
// 005e4677: JNC 0x005e46d8
//   XREF to: 005e46d8 (CONDITIONAL_JUMP)
// 005e4679: LEA EAX,[ESP + 0x14]
// 005e467d: PUSH EAX
// 005e467e: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 005e4683: MOV EDX,0x3f800000
// 005e4688: ADD ESP,0x4
// 005e468b: LEA ESI,[ESP + 0x14]
// 005e468f: MOV dword ptr [ESP + 0x18],EDX
// 005e4693: MOV dword ptr [ESP + 0x48],EBX
// 005e4697: MOV dword ptr [ESP + 0x4c],EBX
// 005e469b: PUSH ESI
// 005e469c: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005e46a2: PUSH EAX
// 005e46a3: MOV EDX,dword ptr [EAX + 0x154]
// 005e46a9: CALL dword ptr [EDX + 0x11c]
// 005e46af: ADD ESP,0x8
// 005e46b2: FLD float ptr [ESP + 0x18]
// 005e46b6: FLDZ
// 005e46b8: FCOMPP
// 005e46ba: FNSTSW AX
// 005e46bc: SAHF
// 005e46bd: JNC 0x005e46d8
//   XREF to: 005e46d8 (CONDITIONAL_JUMP)
// 005e46bf: PUSH 0x0
// 005e46c1: PUSH 0x3
// 005e46c3: PUSH 0x0
// 005e46c5: LEA EAX,[EBX + 0x20]
// 005e46c8: PUSH EAX
// 005e46c9: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005e46cf: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 005e46d0: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 005e46d5: ADD ESP,0x14
// 005e46d8: FLD float ptr [EBX + 0x30]
//   Label: LAB_005e46d8
// 005e46db: FLD ST0
// 005e46dd: FSIN
// 005e46df: FLD float ptr [EBX + 0x34]
// 005e46e2: FLD ST0
// 005e46e4: FSIN
// 005e46e6: FXCH ST3
// 005e46e8: FCOS
// 005e46ea: FXCH
// 005e46ec: FCOS
// 005e46ee: FXCH ST3
// 005e46f0: FMUL ST1
// 005e46f2: FXCH ST3
// 005e46f4: FMULP
// 005e46f6: FLD float ptr [ESP + 0x15c]
// 005e46fd: FSUB float ptr [EBX + 0x34]
// 005e4700: FXCH ST2
// 005e4702: FCHS
// 005e4704: FSTP float ptr [ESP + 0x148]
// 005e470b: FXCH ST2
// 005e470d: FSTP float ptr [ESP + 0x144]
// 005e4714: FXCH
// 005e4716: FSTP float ptr [ESP + 0x13c]
// 005e471d: SUB ESP,0x4
// 005e4720: FSTP float ptr [ESP]
// 005e4723: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e4728: MOV dword ptr [ESP + 0x164],EAX
// 005e472f: FLD float ptr [ESP + 0x164]
// 005e4736: ADD ESP,0x4
// 005e4739: FST float ptr [ESP + 0x15c]
// 005e4740: FMUL float ptr [EBP + 0x18]
// 005e4743: FMUL float ptr [EBX + 0xc058]
// 005e4749: FLD float ptr [ESP + 0x158]
// 005e4750: FSUB float ptr [EBX + 0x30]
// 005e4753: FXCH
// 005e4755: FADD float ptr [EBX + 0x34]
// 005e4758: SUB ESP,0x4
// 005e475b: FSTP float ptr [EBX + 0x34]
// 005e475e: FSTP float ptr [ESP]
// 005e4761: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005e4766: MOV dword ptr [ESP + 0x164],EAX
// 005e476d: FLD float ptr [ESP + 0x164]
// 005e4774: ADD ESP,0x4
// 005e4777: FLD float ptr [EBX + 0xc05c]
// 005e477d: FMUL float ptr [ESP + 0x144]
// 005e4784: FLD float ptr [EBX + 0xc05c]
// 005e478a: FMUL float ptr [ESP + 0x148]
// 005e4791: FLD float ptr [ESP + 0x144]
// 005e4798: FMUL float ptr [EBX + 0xc05c]
// 005e479e: FLD float ptr [ESP + 0x148]
// 005e47a5: FMUL float ptr [EBX + 0xc05c]
// 005e47ab: FLD float ptr [ESP + 0x13c]
// 005e47b2: FMUL float ptr [EBX + 0xc05c]
// 005e47b8: FXCH ST5
// 005e47ba: FST float ptr [ESP + 0x158]
// 005e47c1: FMUL float ptr [EBP + 0x18]
// 005e47c4: FLD float ptr [ESP + 0x15c]
// 005e47cb: FCHS
// 005e47cd: FMUL double ptr [0x006569a2]
//   XREF to: 006569a2 (READ)
// 005e47d3: FXCH ST3
// 005e47d5: FMUL float ptr [EBP + 0x18]
// 005e47d8: FXCH ST2
// 005e47da: FMUL float ptr [EBP + 0x18]
// 005e47dd: FXCH ST6
// 005e47df: FMUL float ptr [EBP + 0x18]
// 005e47e2: FXCH
// 005e47e4: FMUL float ptr [EBX + 0xc058]
// 005e47ea: FXCH ST5
// 005e47ec: FSTP float ptr [EBX + 0xc06c]
// 005e47f2: FLD float ptr [EBX + 0xc05c]
// 005e47f8: FMUL float ptr [ESP + 0x13c]
// 005e47ff: LEA EAX,[EBX + 0x20]
// 005e4802: FXCH ST4
// 005e4804: FSTP float ptr [EBX + 0xc070]
// 005e480a: FXCH ST3
// 005e480c: FSTP float ptr [EBX + 0xc074]
// 005e4812: FXCH
// 005e4814: FSTP float ptr [EBX + 0x38]
// 005e4817: FADD float ptr [EBX + 0x20]
// 005e481a: FXCH ST3
// 005e481c: FADD float ptr [EBX + 0x24]
// 005e481f: FXCH
// 005e4821: FADD float ptr [EBX + 0x28]
// 005e4824: FXCH ST2
// 005e4826: FADD float ptr [EBX + 0x30]
// 005e4829: FXCH ST3
// 005e482b: FSTP float ptr [EBX + 0x20]
// 005e482e: FSTP float ptr [EBX + 0x24]
// 005e4831: FSTP float ptr [EBX + 0x28]
// 005e4834: FSTP float ptr [EBX + 0x30]
// 005e4837: FLD float ptr [EAX]
// 005e4839: FSUB float ptr [ESP + 0xfc]
// 005e4840: FSTP float ptr [ESP + 0xb4]
// 005e4847: FLD float ptr [EAX + 0x4]
// 005e484a: FSUB float ptr [ESP + 0x100]
// 005e4851: FST float ptr [ESP + 0xb8]
// 005e4858: FMUL double ptr [0x0065698a]
//   XREF to: 0065698a (READ)
// 005e485e: FDIV float ptr [EBP + 0x18]
// 005e4861: FLD float ptr [EAX + 0x8]
// 005e4864: FSUB float ptr [ESP + 0x104]
// 005e486b: FXCH
// 005e486d: FADD double ptr [0x006569aa]
//   XREF to: 006569aa (READ)
// 005e4873: FXCH
// 005e4875: FSTP float ptr [ESP + 0xbc]
// 005e487c: FST float ptr [ESP + 0x10]
// 005e4880: FCOMP double ptr [0x006569b2]
//   XREF to: 006569b2 (READ)
// 005e4886: FNSTSW AX
// 005e4888: SAHF
// 005e4889: JNC 0x005e4893
//   XREF to: 005e4893 (CONDITIONAL_JUMP)
// 005e488b: MOV dword ptr [ESP + 0x10],0x41200000
// 005e4893: FLD float ptr [ESP + 0x10]
//   Label: LAB_005e4893
// 005e4897: FCOMP double ptr [0x006569ba]
//   XREF to: 006569ba (READ)
// 005e489d: FNSTSW AX
// 005e489f: SAHF
// 005e48a0: JBE 0x005e48aa
//   XREF to: 005e48aa (CONDITIONAL_JUMP)
// 005e48a2: MOV dword ptr [ESP + 0x10],0x42700000
// 005e48aa: FLD float ptr [ESP + 0x10]
//   Label: LAB_005e48aa
// 005e48ae: FSUB float ptr [EBX + 0xc040]
// 005e48b4: FMUL double ptr [0x006569c2]
//   XREF to: 006569c2 (READ)
// 005e48ba: FLD float ptr [EBX + 0xc040]
// 005e48c0: FXCH
// 005e48c2: FADD ST0,ST1
// 005e48c4: FLD float ptr [EBP + 0x18]
// 005e48c7: FXCH
// 005e48c9: FSTP ST2
// 005e48cb: FXCH
// 005e48cd: FSTP float ptr [EBX + 0xc040]
// 005e48d3: FMUL float ptr [EBX + 0xc040]
// 005e48d9: FMUL float ptr [EBX + 0xc03c]
// 005e48df: LEA EAX,[EBX + 0xbec0]
// 005e48e5: FADD float ptr [EBX + 0xbebc]
// 005e48eb: PUSH EAX
// 005e48ec: FSTP float ptr [EBX + 0xbebc]
// 005e48f2: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e48f7: ADD ESP,0x4
// 005e48fa: MOV EDX,dword ptr [EAX + 0x100]
// 005e4900: MOV dword ptr [ESP + 0x160],EDX
// 005e4907: FILD dword ptr [ESP + 0x160]
// 005e490e: FCOMP float ptr [EBX + 0xbebc]
// 005e4914: FNSTSW AX
// 005e4916: SAHF
// 005e4917: JA 0x005e4cb1
//   XREF to: 005e4cb1 (CONDITIONAL_JUMP)
// 005e491d: MOV dword ptr [EBX + 0xbebc],0x0
// 005e4927: CMP byte ptr [EBX + 0xc07c],0x0
//   Label: LAB_005e4927
// 005e492e: JZ 0x005e494c
//   XREF to: 005e494c (CONDITIONAL_JUMP)
// 005e4930: FLD float ptr [EBX + 0xc0ec]
// 005e4936: FSUB float ptr [EBP + 0x18]
// 005e4939: FST float ptr [EBX + 0xc0ec]
// 005e493f: FLDZ
// 005e4941: FCOMPP
// 005e4943: FNSTSW AX
// 005e4945: SAHF
// 005e4946: JNC 0x005e4cdc
//   XREF to: 005e4cdc (CONDITIONAL_JUMP)
// 005e494c: MOV ESP,EBP
//   Label: LAB_005e494c
// 005e494e: POP EBP
// 005e494f: POP EDI
// 005e4950: POP ESI
// 005e4951: POP EBX
// 005e4952: RET
// 005e4953: MOV EAX,dword ptr [ESI]
//   Label: LAB_005e4953
// 005e4955: FLD float ptr [EBP + 0x18]
// 005e4958: FLD ST0
// 005e495a: MOV dword ptr [ESP + 0x9c],EAX
// 005e4961: FMUL double ptr [0x006569ca]
//   XREF to: 006569ca (READ)
// 005e4967: MOV EAX,dword ptr [EDI]
// 005e4969: MOV dword ptr [ESP + 0xa0],EAX
// 005e4970: MOV EAX,dword ptr [EDX]
// 005e4972: MOV dword ptr [ESP + 0xa4],EAX
// 005e4979: FLD float ptr [EBX + 0xc070]
// 005e497f: FXCH
// 005e4981: FADD ST0,ST1
// 005e4983: LEA EDI,[EBX + 0xc06c]
// 005e4989: FSTP ST1
// 005e498b: FSTP float ptr [EBX + 0xc070]
// 005e4991: FLD float ptr [EDI]
// 005e4993: FMUL ST1
// 005e4995: FSTP float ptr [ESP + 0xe4]
// 005e499c: FLD float ptr [EDI + 0x4]
// 005e499f: FMUL ST1
// 005e49a1: FSTP float ptr [ESP + 0xe8]
// 005e49a8: FLD float ptr [EDI + 0x8]
// 005e49ab: FMUL ST1
// 005e49ad: PUSH 0x0
// 005e49af: FSTP float ptr [ESP + 0xf0]
// 005e49b6: FLD float ptr [ESI]
// 005e49b8: FADD float ptr [ESP + 0xe8]
// 005e49bf: FLD float ptr [ESI + 0x4]
// 005e49c2: FXCH
// 005e49c4: FSTP float ptr [ESI]
// 005e49c6: FADD float ptr [ESP + 0xec]
// 005e49cd: FLD float ptr [ESI + 0x8]
// 005e49d0: FXCH
// 005e49d2: FSTP float ptr [ESI + 0x4]
// 005e49d5: FADD float ptr [ESP + 0xf0]
// 005e49dc: LEA EAX,[ESP + 0xdc]
// 005e49e3: FSTP float ptr [ESI + 0x8]
// 005e49e6: FMUL float ptr [EBX + 0xc058]
// 005e49ec: PUSH EAX
// 005e49ed: LEA EAX,[ESP + 0xa4]
// 005e49f4: PUSH ESI
// 005e49f5: FMUL float ptr [0x006569d2]
//   XREF to: 006569d2 (READ)
// 005e49fb: PUSH EAX
// 005e49fc: FADD float ptr [EBX + 0x38]
// 005e49ff: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005e4a04: FSTP float ptr [EBX + 0x38]
// 005e4a07: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70
//   XREF to: 00495b70 (UNCONDITIONAL_CALL)
// 005e4a0c: MOV dword ptr [ESP + 0x174],EAX
// 005e4a13: FLD float ptr [ESP + 0x174]
// 005e4a1a: ADD ESP,0x14
// 005e4a1d: FLDZ
// 005e4a1f: FXCH
// 005e4a21: FST float ptr [ESP + 0xc]
// 005e4a25: FSTP double ptr [ESP]
// 005e4a28: FCOMP double ptr [ESP]
// 005e4a2b: FNSTSW AX
// 005e4a2d: SAHF
// 005e4a2e: JA 0x005e4b40
//   XREF to: 005e4b40 (CONDITIONAL_JUMP)
// 005e4a34: FLD1
// 005e4a36: FCOMP double ptr [ESP]
// 005e4a39: FNSTSW AX
// 005e4a3b: SAHF
// 005e4a3c: JBE 0x005e4b40
//   XREF to: 005e4b40 (CONDITIONAL_JUMP)
// 005e4a42: FLD float ptr [ESI]
// 005e4a44: FSUB float ptr [ESP + 0x9c]
// 005e4a4b: FST float ptr [ESP + 0x78]
// 005e4a4f: FLD float ptr [ESI + 0x4]
// 005e4a52: FSUB float ptr [ESP + 0xa0]
// 005e4a59: FXCH
// 005e4a5b: FLD float ptr [ESP + 0xc]
// 005e4a5f: FXCH
// 005e4a61: FMUL ST1
// 005e4a63: FXCH ST2
// 005e4a65: FST float ptr [ESP + 0x7c]
// 005e4a69: FMUL ST1
// 005e4a6b: FLD float ptr [ESI + 0x8]
// 005e4a6e: FXCH ST3
// 005e4a70: FST float ptr [ESP + 0xcc]
// 005e4a77: FXCH ST3
// 005e4a79: FSUB float ptr [ESP + 0xa4]
// 005e4a80: FXCH ST3
// 005e4a82: FLD float ptr [0x006569d6]
//   XREF to: 006569d6 (READ)
// 005e4a88: FXCH
// 005e4a8a: FMUL ST1
// 005e4a8c: FXCH ST4
// 005e4a8e: FST float ptr [ESP + 0x80]
// 005e4a95: FMULP ST3
// 005e4a97: FXCH
// 005e4a99: FST float ptr [ESP + 0xd0]
// 005e4aa0: FMUL ST1
// 005e4aa2: FXCH ST2
// 005e4aa4: FST float ptr [ESP + 0xd4]
// 005e4aab: FMULP
// 005e4aad: FLD float ptr [ESP + 0x9c]
// 005e4ab4: FLD float ptr [ESP + 0xa0]
// 005e4abb: FLD float ptr [ESP + 0xa4]
// 005e4ac2: FXCH ST5
// 005e4ac4: FSTP float ptr [ESP + 0x84]
// 005e4acb: FXCH
// 005e4acd: FADD float ptr [ESP + 0x84]
// 005e4ad4: FXCH ST3
// 005e4ad6: FSTP float ptr [ESP + 0x88]
// 005e4add: FXCH ST2
// 005e4adf: FSTP float ptr [ESP + 0x114]
// 005e4ae6: MOV EAX,dword ptr [ESP + 0x114]
// 005e4aed: FXCH
// 005e4aef: FADD float ptr [ESP + 0x88]
// 005e4af6: FXCH
// 005e4af8: FSTP float ptr [ESP + 0x8c]
// 005e4aff: FXCH
// 005e4b01: FADD float ptr [ESP + 0x8c]
// 005e4b08: FXCH
// 005e4b0a: FSTP float ptr [ESP + 0x118]
// 005e4b11: FSTP float ptr [ESP + 0x11c]
// 005e4b18: MOV dword ptr [ESI],EAX
// 005e4b1a: MOV EAX,dword ptr [ESP + 0x118]
// 005e4b21: MOV dword ptr [ESI + 0x4],EAX
// 005e4b24: MOV EAX,dword ptr [ESP + 0x11c]
// 005e4b2b: MOV dword ptr [ESI + 0x8],EAX
// 005e4b2e: MOV dword ptr [EDI + 0x8],0x0
// 005e4b35: MOV EAX,dword ptr [EDI + 0x8]
// 005e4b38: MOV dword ptr [EDI + 0x4],EAX
// 005e4b3b: MOV EAX,dword ptr [EDI + 0x4]
// 005e4b3e: MOV dword ptr [EDI],EAX
// 005e4b40: FLD float ptr [ESP + 0x9c]
//   Label: LAB_005e4b40
// 005e4b47: LEA EAX,[EBX + 0x20]
// 005e4b4a: FLD float ptr [ESP + 0xa0]
// 005e4b51: FXCH
// 005e4b53: FSUB float ptr [EAX]
// 005e4b55: FLD float ptr [ESP + 0xa4]
// 005e4b5c: FXCH
// 005e4b5e: FSTP float ptr [ESP + 0xa8]
// 005e4b65: FXCH
// 005e4b67: FSUB float ptr [EAX + 0x4]
// 005e4b6a: LEA EDX,[ESP + 0xf0]
// 005e4b71: FSTP float ptr [ESP + 0xac]
// 005e4b78: FSUB float ptr [EAX + 0x8]
// 005e4b7b: LEA EAX,[ESP + 0xa8]
// 005e4b82: FSTP float ptr [ESP + 0xb0]
// 005e4b89: CMP EDX,EAX
// 005e4b8b: JZ 0x005e4bb7
//   XREF to: 005e4bb7 (CONDITIONAL_JUMP)
// 005e4b8d: MOV EAX,dword ptr [ESP + 0xa8]
// 005e4b94: MOV dword ptr [ESP + 0xf0],EAX
// 005e4b9b: MOV EAX,dword ptr [ESP + 0xac]
// 005e4ba2: MOV dword ptr [ESP + 0xf4],EAX
// 005e4ba9: MOV EAX,dword ptr [ESP + 0xb0]
// 005e4bb0: MOV dword ptr [ESP + 0xf8],EAX
// 005e4bb7: FLD float ptr [ESP + 0xf4]
//   Label: LAB_005e4bb7
// 005e4bbe: FMUL ST0
// 005e4bc0: FLD float ptr [ESP + 0xf0]
// 005e4bc7: FMUL ST0
// 005e4bc9: FADDP
// 005e4bcb: FLD float ptr [ESP + 0xf8]
// 005e4bd2: FMUL ST0
// 005e4bd4: FADDP
// 005e4bd6: FSQRT
// 005e4bd8: FCOMP double ptr [0x006569da]
//   XREF to: 006569da (READ)
// 005e4bde: FNSTSW AX
// 005e4be0: SAHF
// 005e4be1: JNC 0x005e494c
//   XREF to: 005e494c (CONDITIONAL_JUMP)
// 005e4be7: MOV dword ptr [EBX + 0xc078],0x2
// 005e4bf1: MOV ESP,EBP
// 005e4bf3: POP EBP
// 005e4bf4: POP EDI
// 005e4bf5: POP ESI
// 005e4bf6: POP EBX
// 005e4bf7: RET
// 005e4bf8: MOV EAX,[0x02db87d0]
//   Label: LAB_005e4bf8
//   XREF to: 02db87d0 (READ)
// 005e4bfd: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005e4c04: MOV dword ptr [EBX + 0xbe3c],EAX
// 005e4c0a: TEST EAX,EAX
// 005e4c0c: JZ 0x005e4314
//   XREF to: 005e4314 (CONDITIONAL_JUMP)
// 005e4c12: LEA ESI,[EAX + 0x20]
// 005e4c15: LEA EAX,[ESP + 0x120]
// 005e4c1c: CMP EAX,ESI
// 005e4c1e: JNZ 0x005e4c73
//   XREF to: 005e4c73 (CONDITIONAL_JUMP)
// 005e4c20: FLD float ptr [EBX + 0xc060]
//   Label: LAB_005e4c20
// 005e4c26: FADD double ptr [0x0065698a]
//   XREF to: 0065698a (READ)
// 005e4c2c: FADD float ptr [ESP + 0x124]
// 005e4c33: FSTP float ptr [ESP + 0x124]
// 005e4c3a: MOV EAX,dword ptr [EBX + 0x6c]
// 005e4c3d: MOV EDX,EAX
// 005e4c3f: MOV ESI,0x8
// 005e4c44: SAR EDX,0x1f
// 005e4c47: IDIV ESI
// 005e4c49: SUB EDX,0x4
// 005e4c4c: MOV dword ptr [ESP + 0x160],EDX
// 005e4c53: FILD dword ptr [ESP + 0x160]
// 005e4c5a: FMUL double ptr [0x00656992]
//   XREF to: 00656992 (READ)
// 005e4c60: FADD float ptr [ESP + 0x124]
// 005e4c67: FSTP float ptr [ESP + 0x124]
// 005e4c6e: JMP 0x005e4342
//   XREF to: 005e4342 (UNCONDITIONAL_JUMP)
// 005e4c73: MOV EAX,dword ptr [ESI]
//   Label: LAB_005e4c73
// 005e4c75: MOV dword ptr [ESP + 0x120],EAX
// 005e4c7c: MOV EAX,dword ptr [ESI + 0x4]
// 005e4c7f: MOV dword ptr [ESP + 0x124],EAX
// 005e4c86: MOV EAX,dword ptr [ESI + 0x8]
// 005e4c89: MOV dword ptr [ESP + 0x128],EAX
// 005e4c90: JMP 0x005e4c20
//   XREF to: 005e4c20 (UNCONDITIONAL_JUMP)
// 005e4c92: FLD float ptr [ESP + 0xf4]
//   Label: LAB_005e4c92
// 005e4c99: FABS
// 005e4c9b: FLD float ptr [EBX + 0xc054]
// 005e4ca1: FCOMPP
// 005e4ca3: FNSTSW AX
// 005e4ca5: SAHF
// 005e4ca6: JBE 0x005e43dc
//   XREF to: 005e43dc (CONDITIONAL_JUMP)
// 005e4cac: JMP 0x005e440a
//   XREF to: 005e440a (UNCONDITIONAL_JUMP)
// 005e4cb1: FLDZ
//   Label: LAB_005e4cb1
// 005e4cb3: FCOMP float ptr [EBX + 0xbebc]
// 005e4cb9: FNSTSW AX
// 005e4cbb: SAHF
// 005e4cbc: JBE 0x005e4927
//   XREF to: 005e4927 (CONDITIONAL_JUMP)
// 005e4cc2: DEC EDX
// 005e4cc3: MOV dword ptr [ESP + 0x160],EDX
// 005e4cca: FILD dword ptr [ESP + 0x160]
// 005e4cd1: FSTP float ptr [EBX + 0xbebc]
// 005e4cd7: JMP 0x005e4927
//   XREF to: 005e4927 (UNCONDITIONAL_JUMP)
// 005e4cdc: MOV EAX,dword ptr [EBX + 0xc0e8]
//   Label: LAB_005e4cdc
// 005e4ce2: PUSH EAX
// 005e4ce3: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005e4ce8: ADD ESP,0x4
// 005e4ceb: TEST EAX,EAX
// 005e4ced: JNZ 0x005e4d36
//   XREF to: 005e4d36 (CONDITIONAL_JUMP)
// 005e4cef: PUSH 0x40490000
// 005e4cf4: PUSH EAX
// 005e4cf5: SUB ESP,0x8
// 005e4cf8: FLD float ptr [EBX + 0x28]
// 005e4cfb: FSTP double ptr [ESP]
// 005e4cfe: SUB ESP,0x8
// 005e4d01: FLD float ptr [EBX + 0x24]
// 005e4d04: FSTP double ptr [ESP]
// 005e4d07: SUB ESP,0x8
// 005e4d0a: FLD float ptr [EBX + 0x20]
// 005e4d0d: FSTP double ptr [ESP]
// 005e4d10: CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
//   XREF to: 005aa290 (UNCONDITIONAL_CALL)
// 005e4d15: ADD ESP,0x20
// 005e4d18: TEST EAX,EAX
// 005e4d1a: JZ 0x005e4d36
//   XREF to: 005e4d36 (CONDITIONAL_JUMP)
// 005e4d1c: LEA EDX,[EBX + 0xc07c]
// 005e4d22: PUSH EDX
// 005e4d23: MOV EAX,dword ptr [EBX + 0x154]
// 005e4d29: PUSH EBX
// 005e4d2a: CALL dword ptr [EAX + 0x28]
// 005e4d2d: ADD ESP,0x8
// 005e4d30: MOV dword ptr [EBX + 0xc0e8],EAX
// 005e4d36: PUSH dword ptr [EBX + 0xc0e4]
//   Label: LAB_005e4d36
// 005e4d3c: PUSH dword ptr [EBX + 0xc0e0]
// 005e4d42: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
