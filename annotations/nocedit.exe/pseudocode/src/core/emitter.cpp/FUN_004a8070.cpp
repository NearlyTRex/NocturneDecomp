// Name: core_emitter.cpp_FUN_004a8070
// Address: 004a8070
// Address Range: [[004a8070, 004a8858]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8070()
// Globals:
//   void* switchdataD_004a8044 = 004a8178
//   TerminatedCString s_none_0062409e
//   TerminatedCString s_mob_006240a3
//   undefined4 DAT_006240aa
//   undefined4 DAT_006240b2
//   undefined4 DAT_006240ba
//   CEventList* g_CEventListInstance = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 DAT_02d05310
//   CFireEffect g_CFireEffectInstance
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ab8
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_FUN_0040cc70
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_emitter.cpp_FUN_004a8d20
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_fire.cpp_CFireEffect_FUN_004c7b20
//   core_fire.cpp_CFireEffect_FUN_004c7e60
//   core_fire.cpp_CFireEffect_FUN_004c8ef0
//   core_fire.cpp_CFireEffect_FUN_004c8f50
//   core_fire.cpp_CFireEffect_FUN_004c8fd0
//   core_fire.cpp_CFireEffect_FUN_004c9240
//   core_set.cpp_CDemonSet_FUN_0056ade0
//   core_set.cpp_CDemonSet_FUN_0056d110
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_strnicmp_FUN_005ff070
//   sound_sndmain.cpp_FUN_005aa290
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a8070(undefined4 param_1, undefined4
   param_2) */

void core_emitter_cpp_FUN_004a8070(void)

{
  CHero *this_ptr;
  float fVar1;
  float fVar2;
  CDemonSet *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  undefined4 uVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float fVar8;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CColor3f local_4c [2];
  undefined4 local_2c;
  float local_28;
  float local_14;
  
  iVar7 = *(int *)(in_stack_00000004 + 0x48c);
  iVar4 = crt_string_c_strcmp_FUN_005fef20((char *)(in_stack_00000004 + 0x16c),"none");
  if ((iVar4 != 0) &&
     (iVar4 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                        (g_CEventListInstance,(char *)(in_stack_00000004 + 0x16c)),
     pCVar3 = g_CDemonSetPtr, iVar4 != 0)) {
    iVar7 = 1;
    *(undefined4 *)(in_stack_00000004 + 0x168) = 1;
    *(undefined4 *)(in_stack_00000004 + 0x448) = *(undefined4 *)(in_stack_00000004 + 0x234);
    core_set_cpp_CDemonSet_FUN_0056ade0(pCVar3);
  }
  iVar4 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                    (g_CEventListInstance,(char *)(in_stack_00000004 + 0x1d0));
  if (iVar4 != 0) {
    *(undefined4 *)(in_stack_00000004 + 0x168) = 0;
  }
  if (*(int *)(in_stack_00000004 + 0x158) == 10) {
    iVar7 = 0;
    iVar4 = sound_sndmain_cpp_FUN_005aa290();
    if (((iVar4 == 0) || (iVar7 = 1, g_CGamePtr->foul_language_flag != 0)) ||
       (iVar4 = crt_string_c_strnicmp_FUN_005ff070
                          ((char *)(in_stack_00000004 + 0x3d4),"mob",3), iVar4 != 0)) {
      if (iVar7 != 0) goto LAB_004a811d;
    }
    else {
      iVar7 = 0;
    }
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  }
LAB_004a811d:
  if (*(int *)(in_stack_00000004 + 0x168) == 0) {
    sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
    goto LAB_004a8221;
  }
  fVar8 = *(float *)(in_stack_00000004 + 0x440) + in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x440) = fVar8;
  if ((fVar8 < *(float *)(in_stack_00000004 + 0x444)) ||
     (*(float *)(in_stack_00000004 + 0x440) =
           *(float *)(in_stack_00000004 + 0x440) - *(float *)(in_stack_00000004 + 0x444), iVar7 == 0
     )) goto LAB_004a8221;
  switch(*(undefined4 *)(in_stack_00000004 + 0x158)) {
  case 0:
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
              ((CDemonGlobe *)(in_stack_00000004 + 0x44c),(CColor3f *)(in_stack_00000004 + 0x20));
    iVar7 = core_actor_cpp_FUN_0040cc70();
    *(int *)(in_stack_00000004 + 0x488) = iVar7;
    iVar7 = (iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0);
    iVar4 = iVar7 >> 0x1f;
    fVar8 = 10.0;
    *(char *)(in_stack_00000004 + 0x468) =
         (char)((int)(((iVar7 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    goto LAB_004a81e2;
  case 1:
    iVar7 = 0;
    do {
      if (&local_70 != (float *)(in_stack_00000004 + 0x20)) {
        local_70 = *(float *)(in_stack_00000004 + 0x20);
        local_6c = *(undefined4 *)(in_stack_00000004 + 0x24);
        local_68 = *(float *)(in_stack_00000004 + 0x28);
      }
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
      local_70 = local_14 * *(float *)(in_stack_00000004 + 0x15c) + local_70;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
      local_68 = local_14 * *(float *)(in_stack_00000004 + 0x164) + local_68;
      iVar7 = iVar7 + 1;
      core_fire_cpp_CFireEffect_FUN_004c7b20(g_CFireEffectPtr);
    } while (iVar7 < 4);
    break;
  case 4:
    local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    local_14 = local_28;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    local_2c = *(undefined4 *)(in_stack_00000004 + 0x3c4);
    fcos((float10)local_28);
    fcos((float10)local_14);
    fsin((float10)local_28);
    fsin((float10)local_14);
    core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x248));
    core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
    break;
  case 5:
    core_emitter_cpp_FUN_004a8d20();
    core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
    this_ptr = g_HeroActors[g_LocalHeroIndex];
    fVar8 = (this_ptr->base_character).base_actor.location.position.x -
            *(float *)(in_stack_00000004 + 0x20);
    fVar1 = (this_ptr->base_character).base_actor.location.position.y -
            *(float *)(in_stack_00000004 + 0x24);
    fVar2 = (this_ptr->base_character).base_actor.location.position.z -
            *(float *)(in_stack_00000004 + 0x28);
    if (SQRT(fVar2 * fVar2 + fVar8 * fVar8 + fVar1 * fVar1) < (float)_DAT_006240ba) {
      core_actor_cpp_CDemonActor_FUN_00408f10((CDemonActor *)this_ptr);
      core_charactr_cpp_CCharacter_FUN_0042b5b0(&g_HeroActors[g_LocalHeroIndex]->base_character);
    }
    break;
  case 6:
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    break;
  case 7:
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    if (local_4c != (CColor3f *)(in_stack_00000004 + 0x20)) {
      local_4c[0].r = ((CColor3f *)(in_stack_00000004 + 0x20))->r;
      local_4c[0].g = *(float *)(in_stack_00000004 + 0x24);
      local_4c[0].b = *(float *)(in_stack_00000004 + 0x28);
    }
    local_4c[0].g = *(float *)(in_stack_00000004 + 0x160) * (float)_DAT_006240b2 + local_4c[0].g;
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
              ((CDemonGlobe *)(in_stack_00000004 + 0x44c),local_4c);
    iVar7 = core_actor_cpp_FUN_0040cc70();
    *(int *)(in_stack_00000004 + 0x488) = iVar7;
    iVar7 = (iVar7 + (iVar7 >> 0x1f) * -0x100) - (uint)((iVar7 >> 0x1f) << 7 < 0);
    iVar4 = iVar7 >> 0x1f;
    *(char *)(in_stack_00000004 + 0x468) =
         (char)((int)(((iVar7 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
    fVar8 = *(float *)(in_stack_00000004 + 0x160);
LAB_004a81e2:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
              ((CDemonGlobe *)(in_stack_00000004 + 0x44c),fVar8);
    pCVar3 = g_CDemonSetPtr;
    *(undefined4 *)(in_stack_00000004 + 0x46c) = 0;
    core_set_cpp_CDemonSet_FUN_0056d110(pCVar3);
    break;
  case 8:
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    break;
  case 9:
    if (*(int *)(in_stack_00000004 + 0x3d0) != 0) {
      (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x3d0) + 0x154) + 0x14))();
      pCVar5 = core_actor_cpp_CDemonActor_FUN_00408e80(*(CDemonActor **)(in_stack_00000004 + 0x3d0))
      ;
      iVar7 = *(int *)(in_stack_00000004 + 0x3d0);
      fStack_7c = *(float *)(iVar7 + 0x20) + pCVar5->x;
      fStack_78 = *(float *)(iVar7 + 0x24) + pCVar5->y;
      fStack_74 = *(float *)(iVar7 + 0x28) + pCVar5->z;
      if (&fStack_58 != &fStack_7c) {
        fStack_58 = fStack_7c;
        fStack_54 = fStack_78;
        fStack_50 = fStack_74;
      }
      core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    }
  }
  if (((*(char *)(in_stack_00000004 + 0x3d4) != '\0') &&
      (iVar7 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar7 == 0)) &&
     ((*(int *)(in_stack_00000004 + 0x43c) != 1 || (*(int *)(in_stack_00000004 + 0x490) == 0)))) {
    uVar6 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    *(undefined4 *)(in_stack_00000004 + 0x438) = uVar6;
  }
LAB_004a8221:
  *(undefined4 *)(in_stack_00000004 + 0x490) = *(undefined4 *)(in_stack_00000004 + 0x168);
  if (*(int *)(in_stack_00000004 + 0x3c8) == 0) {
    if ((0.0 < *(float *)(in_stack_00000004 + 0x234)) &&
       (in_stack_00000008 = *(float *)(in_stack_00000004 + 0x448) - in_stack_00000008,
       *(float *)(in_stack_00000004 + 0x448) = in_stack_00000008, in_stack_00000008 <= 0.0)) {
      *(undefined4 *)(in_stack_00000004 + 0x448) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x168) = 0;
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0x168) == 0) {
    in_stack_00000008 = *(float *)(in_stack_00000004 + 0x448) - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x448) = in_stack_00000008;
    if (in_stack_00000008 <= 0.0) {
      *(undefined4 *)(in_stack_00000004 + 0x168) = 1;
      *(undefined4 *)(in_stack_00000004 + 0x448) = *(undefined4 *)(in_stack_00000004 + 0x234);
      return;
    }
  }
  else {
    in_stack_00000008 = *(float *)(in_stack_00000004 + 0x448) - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x448) = in_stack_00000008;
    if (in_stack_00000008 <= 0.0) {
      *(undefined4 *)(in_stack_00000004 + 0x168) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x448) = *(undefined4 *)(in_stack_00000004 + 0x3cc);
      return;
    }
  }
  return;
}


// Assembly code:
// 004a8070: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a8070
// 004a8071: PUSH ESI
// 004a8072: PUSH EDI
// 004a8073: PUSH EBP
// 004a8074: MOV EBP,ESP
// 004a8076: SUB ESP,0xd8
// 004a807c: AND ESP,0xfffffff8
// 004a807f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a8082: PUSH 0x62409e
//   XREF to: 0062409e (DATA)
// 004a8087: LEA EDI,[EBX + 0x16c]
// 004a808d: PUSH EDI
// 004a808e: MOV ESI,dword ptr [EBX + 0x48c]
// 004a8094: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004a8099: ADD ESP,0x8
// 004a809c: TEST EAX,EAX
// 004a809e: JNZ 0x004a826a
//   XREF to: 004a826a (CONDITIONAL_JUMP)
// 004a80a4: LEA EAX,[EBX + 0x1d0]
//   Label: LAB_004a80a4
// 004a80aa: PUSH EAX
// 004a80ab: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004a80b1: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 004a80b2: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004a80b7: ADD ESP,0x8
// 004a80ba: TEST EAX,EAX
// 004a80bc: JZ 0x004a80c8
//   XREF to: 004a80c8 (CONDITIONAL_JUMP)
// 004a80be: MOV dword ptr [EBX + 0x168],0x0
// 004a80c8: CMP dword ptr [EBX + 0x158],0xa
//   Label: LAB_004a80c8
// 004a80cf: JNZ 0x004a811d
//   XREF to: 004a811d (CONDITIONAL_JUMP)
// 004a80d1: PUSH 0x40490000
// 004a80d6: XOR ESI,ESI
// 004a80d8: PUSH ESI
// 004a80d9: SUB ESP,0x8
// 004a80dc: FLD float ptr [EBX + 0x28]
// 004a80df: FSTP double ptr [ESP]
//   XREF to: Stack[-0xf8] (DATA)
// 004a80e2: SUB ESP,0x8
// 004a80e5: FLD float ptr [EBX + 0x24]
// 004a80e8: FSTP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 004a80eb: SUB ESP,0x8
// 004a80ee: FLD float ptr [EBX + 0x20]
// 004a80f1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x108] (DATA)
// 004a80f4: CALL sound_sndmain.cpp_FUN_005aa290
//   XREF to: 005aa290 (UNCONDITIONAL_CALL)
// 004a80f9: ADD ESP,0x20
// 004a80fc: TEST EAX,EAX
// 004a80fe: JZ 0x004a8115
//   XREF to: 004a8115 (CONDITIONAL_JUMP)
// 004a8100: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 004a8105: MOV EDX,dword ptr [EAX + 0x1c]
//   XREF to: 02d81ab8 (READ)
// 004a8108: MOV ESI,0x1
// 004a810d: TEST EDX,EDX
// 004a810f: JZ 0x004a82b2
//   XREF to: 004a82b2 (CONDITIONAL_JUMP)
// 004a8115: TEST ESI,ESI
//   Label: LAB_004a8115
// 004a8117: JZ 0x004a82d2
//   XREF to: 004a82d2 (CONDITIONAL_JUMP)
// 004a811d: CMP dword ptr [EBX + 0x168],0x0
//   Label: LAB_004a811d
// 004a8124: JZ 0x004a87a5
//   XREF to: 004a87a5 (CONDITIONAL_JUMP)
// 004a812a: FLD float ptr [EBX + 0x440]
// 004a8130: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a8133: FST float ptr [EBX + 0x440]
// 004a8139: FCOMP float ptr [EBX + 0x444]
// 004a813f: FNSTSW AX
// 004a8141: SAHF
// 004a8142: JC 0x004a8221
//   XREF to: 004a8221 (CONDITIONAL_JUMP)
// 004a8148: FLD float ptr [EBX + 0x444]
// 004a814e: FSUBR float ptr [EBX + 0x440]
// 004a8154: FSTP float ptr [EBX + 0x440]
// 004a815a: TEST ESI,ESI
// 004a815c: JZ 0x004a8221
//   XREF to: 004a8221 (CONDITIONAL_JUMP)
// 004a8162: MOV EAX,dword ptr [EBX + 0x158]
// 004a8168: CMP EAX,0xa
// 004a816b: JA 0x004a8201
//   XREF to: 004a8201 (CONDITIONAL_JUMP)
// 004a8171: JMP dword ptr [EAX*0x4 + 0x4a8044]
//   Label: switchD
//   XREF to: 004a8178 (COMPUTED_JUMP)
//   XREF to: 004a82e6 (COMPUTED_JUMP)
//   XREF to: 004a8201 (COMPUTED_JUMP)
//   XREF to: 004a83b8 (COMPUTED_JUMP)
//   XREF to: 004a847c (COMPUTED_JUMP)
//   XREF to: 004a8533 (COMPUTED_JUMP)
//   XREF to: 004a8582 (COMPUTED_JUMP)
//   XREF to: 004a8648 (COMPUTED_JUMP)
//   XREF to: 004a8673 (COMPUTED_JUMP)
//   XREF to: 004a8044 (DATA)
// 004a8178: PUSH 0xffff
//   Label: caseD_0
// 004a817d: PUSH 0x0
// 004a817f: PUSH 0x10000
// 004a8184: PUSH 0x4000
// 004a8189: PUSH 0x0
// 004a818b: LEA ESI,[EBX + 0x20]
// 004a818e: PUSH ESI
// 004a818f: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a8194: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004a8195: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004a819a: ADD ESP,0x1c
// 004a819d: PUSH ESI
// 004a819e: LEA ESI,[EBX + 0x44c]
// 004a81a4: PUSH ESI
// 004a81a5: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 004a81aa: ADD ESP,0x8
// 004a81ad: PUSH 0x7fff
// 004a81b2: PUSH 0x0
// 004a81b4: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004a81b9: MOV EDX,EAX
// 004a81bb: SAR EDX,0x1f
// 004a81be: MOV dword ptr [ESI + 0x3c],EAX
// 004a81c1: SHL EDX,0x8
// 004a81c4: SBB EAX,EDX
// 004a81c6: SAR EAX,0x8
// 004a81c9: MOV EDX,EAX
// 004a81cb: SAR EDX,0x1f
// 004a81ce: SHL EDX,0x2
// 004a81d1: SBB EAX,EDX
// 004a81d3: SAR EAX,0x2
// 004a81d6: ADD ESP,0x8
// 004a81d9: PUSH 0x41200000
// 004a81de: PUSH ESI
// 004a81df: MOV byte ptr [ESI + 0x1c],AL
// 004a81e2: CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
//   Label: LAB_004a81e2
//   XREF to: 00471360 (UNCONDITIONAL_CALL)
// 004a81e7: ADD ESP,0x8
// 004a81ea: PUSH ESI
// 004a81eb: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004a81f1: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004a81f2: MOV dword ptr [ESI + 0x20],0x0
// 004a81f9: CALL core_set.cpp_CDemonSet_FUN_0056d110
//   XREF to: 0056d110 (UNCONDITIONAL_CALL)
// 004a81fe: ADD ESP,0x8
// 004a8201: CMP byte ptr [EBX + 0x3d4],0x0
//   Label: caseD_2
// 004a8208: JZ 0x004a8221
//   XREF to: 004a8221 (CONDITIONAL_JUMP)
// 004a820a: MOV ECX,dword ptr [EBX + 0x438]
// 004a8210: PUSH ECX
// 004a8211: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004a8216: ADD ESP,0x4
// 004a8219: TEST EAX,EAX
// 004a821b: JZ 0x004a8770
//   XREF to: 004a8770 (CONDITIONAL_JUMP)
// 004a8221: MOV EAX,dword ptr [EBX + 0x168]
//   Label: LAB_004a8221
// 004a8227: MOV dword ptr [EBX + 0x490],EAX
// 004a822d: CMP dword ptr [EBX + 0x3c8],0x0
// 004a8234: JZ 0x004a880f
//   XREF to: 004a880f (CONDITIONAL_JUMP)
// 004a823a: CMP dword ptr [EBX + 0x168],0x0
// 004a8241: JNZ 0x004a87d6
//   XREF to: 004a87d6 (CONDITIONAL_JUMP)
// 004a8247: FLD float ptr [EBX + 0x448]
// 004a824d: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a8250: FST float ptr [EBX + 0x448]
// 004a8256: FLDZ
// 004a8258: FCOMPP
// 004a825a: FNSTSW AX
// 004a825c: SAHF
// 004a825d: JNC 0x004a87b9
//   XREF to: 004a87b9 (CONDITIONAL_JUMP)
// 004a8263: MOV ESP,EBP
//   Label: LAB_004a8263
// 004a8265: POP EBP
// 004a8266: POP EDI
// 004a8267: POP ESI
// 004a8268: POP EBX
// 004a8269: RET
// 004a826a: PUSH EDI
//   Label: LAB_004a826a
// 004a826b: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004a8271: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004a8272: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004a8277: ADD ESP,0x8
// 004a827a: TEST EAX,EAX
// 004a827c: JZ 0x004a80a4
//   XREF to: 004a80a4 (CONDITIONAL_JUMP)
// 004a8282: FLD float ptr [EBX + 0x234]
// 004a8288: MOV ESI,0x1
// 004a828d: PUSH EBX
// 004a828e: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004a8294: MOV dword ptr [EBX + 0x168],0x1
// 004a829e: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004a829f: FSTP float ptr [EBX + 0x448]
// 004a82a5: CALL core_set.cpp_CDemonSet_FUN_0056ade0
//   XREF to: 0056ade0 (UNCONDITIONAL_CALL)
// 004a82aa: ADD ESP,0x8
// 004a82ad: JMP 0x004a80a4
//   XREF to: 004a80a4 (UNCONDITIONAL_JUMP)
// 004a82b2: PUSH 0x3
//   Label: LAB_004a82b2
// 004a82b4: PUSH 0x6240a3
//   XREF to: 006240a3 (DATA)
// 004a82b9: LEA EAX,[EBX + 0x3d4]
// 004a82bf: PUSH EAX
// 004a82c0: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 004a82c5: ADD ESP,0xc
// 004a82c8: TEST EAX,EAX
// 004a82ca: JNZ 0x004a8115
//   XREF to: 004a8115 (CONDITIONAL_JUMP)
// 004a82d0: XOR ESI,ESI
// 004a82d2: MOV ECX,dword ptr [EBX + 0x438]
//   Label: LAB_004a82d2
// 004a82d8: PUSH ECX
// 004a82d9: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004a82de: ADD ESP,0x4
// 004a82e1: JMP 0x004a811d
//   XREF to: 004a811d (UNCONDITIONAL_JUMP)
// 004a82e6: LEA ESI,[EBX + 0x20]
//   Label: caseD_1
// 004a82e9: XOR EDI,EDI
// 004a82eb: LEA EAX,[ESP + 0x78]
//   Label: LAB_004a82eb
//   XREF to: Stack[-0x70] (DATA)
// 004a82ef: CMP EAX,ESI
// 004a82f1: JZ 0x004a830a
//   XREF to: 004a830a (CONDITIONAL_JUMP)
// 004a82f3: MOV EAX,dword ptr [ESI]
// 004a82f5: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004a82f9: MOV EAX,dword ptr [ESI + 0x4]
// 004a82fc: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004a8300: MOV EAX,dword ptr [ESI + 0x8]
// 004a8303: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004a830a: PUSH 0x3f000000
//   Label: LAB_004a830a
// 004a830f: PUSH 0xbf000000
// 004a8314: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004a8319: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a8320: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 004a8327: ADD ESP,0x8
// 004a832a: FMUL float ptr [EBX + 0x15c]
// 004a8330: PUSH 0x3f000000
// 004a8335: FADD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x70] (READ)
// 004a8339: PUSH 0xbf000000
// 004a833e: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x70] (WRITE)
// 004a8345: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004a834a: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a8351: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 004a8358: FMUL float ptr [EBX + 0x164]
// 004a835e: ADD ESP,0x8
// 004a8361: XOR ECX,ECX
// 004a8363: FADD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x68] (READ)
// 004a836a: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0xd0] (WRITE)
// 004a836e: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x68] (WRITE)
// 004a8375: MOV EAX,dword ptr [EBX + 0x160]
// 004a837b: PUSH 0xffff
// 004a8380: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 004a8384: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0xd0] (DATA)
// 004a8388: PUSH EAX
// 004a8389: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x70] (DATA)
// 004a8390: PUSH 0x3f800000
// 004a8395: PUSH EAX
// 004a8396: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a839c: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004a839d: INC EDI
// 004a839e: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0xc8] (WRITE)
// 004a83a2: CALL core_fire.cpp_CFireEffect_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004a83a7: ADD ESP,0x14
// 004a83aa: CMP EDI,0x4
// 004a83ad: JGE 0x004a8201
//   XREF to: 004a8201 (CONDITIONAL_JUMP)
// 004a83b3: JMP 0x004a82eb
//   XREF to: 004a82eb (UNCONDITIONAL_JUMP)
// 004a83b8: PUSH 0x3fc90fdb
//   Label: caseD_4
// 004a83bd: PUSH 0x3f490fdb
// 004a83c2: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004a83c7: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a83ce: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 004a83d5: ADD ESP,0x8
// 004a83d8: PUSH 0x40c90fdb
// 004a83dd: PUSH 0x0
// 004a83df: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x28] (WRITE)
// 004a83e6: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004a83eb: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004a83f2: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 004a83f9: ADD ESP,0x8
// 004a83fc: MOV EAX,dword ptr [EBX + 0x3c4]
// 004a8402: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x28] (READ)
// 004a8409: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004a8410: FLD ST0
// 004a8412: FCOS
// 004a8414: FLD ST2
// 004a8416: FCOS
// 004a8418: FXCH ST2
// 004a841a: FSIN
// 004a841c: FXCH ST3
// 004a841e: FSIN
// 004a8420: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x2c] (READ)
// 004a8427: FMULP ST3
// 004a8429: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x2c] (READ)
// 004a8430: FMULP ST4
// 004a8432: FMUL float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x2c] (READ)
// 004a8439: FXCH ST2
// 004a843b: FMUL ST1
// 004a843d: LEA EAX,[EBX + 0x248]
// 004a8443: FXCH ST2
// 004a8445: FMULP
// 004a8447: PUSH EAX
// 004a8448: FXCH ST2
// 004a844a: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x90] (WRITE)
// 004a844e: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x94] (WRITE)
// 004a8452: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x8c] (WRITE)
// 004a8456: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004a845b: ADD ESP,0x4
// 004a845e: PUSH EAX
// 004a845f: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x94] (DATA)
// 004a8463: PUSH EAX
// 004a8464: LEA EAX,[EBX + 0x20]
// 004a8467: PUSH EAX
// 004a8468: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004a846e: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 004a846f: CALL core_fire.cpp_CFireEffect_FUN_004c7e60
//   XREF to: 004c7e60 (UNCONDITIONAL_CALL)
// 004a8474: ADD ESP,0x10
// 004a8477: JMP 0x004a8201
//   XREF to: 004a8201 (UNCONDITIONAL_JUMP)
// 004a847c: LEA EAX,[ESP + 0x30]
//   Label: caseD_5
//   XREF to: Stack[-0xb8] (DATA)
// 004a8480: PUSH EAX
// 004a8481: PUSH EBX
// 004a8482: CALL core_emitter.cpp_FUN_004a8d20
//   XREF to: 004a8d20 (UNCONDITIONAL_CALL)
// 004a8487: ADD ESP,0x8
// 004a848a: PUSH 0x1
// 004a848c: PUSH 0x2
// 004a848e: LEA EAX,[EBX + 0x30]
// 004a8491: PUSH EAX
// 004a8492: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0xb8] (DATA)
// 004a8496: PUSH EAX
// 004a8497: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a849d: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004a849e: CALL core_fire.cpp_CFireEffect_FUN_004c8ef0
//   XREF to: 004c8ef0 (UNCONDITIONAL_CALL)
// 004a84a3: MOV ESI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004a84a9: MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004a84b0: LEA EAX,[ESI + 0x20]
// 004a84b3: LEA EDX,[EBX + 0x20]
// 004a84b6: FLD float ptr [EAX]
// 004a84b8: FSUB float ptr [EDX]
// 004a84ba: ADD ESP,0x14
// 004a84bd: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xac] (WRITE)
// 004a84c1: FLD float ptr [EAX + 0x4]
// 004a84c4: FSUB float ptr [EDX + 0x4]
// 004a84c7: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0xa8] (WRITE)
// 004a84cb: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0xa8] (READ)
// 004a84cf: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xac] (READ)
// 004a84d3: FMUL ST0
// 004a84d5: FLD float ptr [EAX + 0x8]
// 004a84d8: FSUB float ptr [EDX + 0x8]
// 004a84db: FXCH
// 004a84dd: FADDP ST2,ST0
// 004a84df: FST float ptr [ESP + 0x44]
//   XREF to: Stack[-0xa4] (WRITE)
// 004a84e3: FMUL float ptr [ESP + 0x44]
//   XREF to: Stack[-0xa4] (READ)
// 004a84e7: FADDP
// 004a84e9: FSQRT
// 004a84eb: FCOMP double ptr [0x006240ba]
//   XREF to: 006240ba (READ)
// 004a84f1: FNSTSW AX
// 004a84f3: SAHF
// 004a84f4: JNC 0x004a8201
//   XREF to: 004a8201 (CONDITIONAL_JUMP)
// 004a84fa: PUSH EDX
// 004a84fb: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0xa0] (DATA)
// 004a84ff: PUSH EAX
// 004a8500: PUSH ESI
// 004a8501: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004a8506: ADD ESP,0xc
// 004a8509: PUSH 0x1
// 004a850b: PUSH 0x3f800000
// 004a8510: PUSH 0x0
// 004a8512: PUSH 0x0
// 004a8514: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0xa0] (DATA)
// 004a8518: PUSH EAX
// 004a8519: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004a851e: MOV ESI,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004a8525: PUSH ESI
// 004a8526: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 004a852b: ADD ESP,0x18
// 004a852e: JMP 0x004a8201
//   XREF to: 004a8201 (UNCONDITIONAL_JUMP)
// 004a8533: PUSH 0x0
//   Label: caseD_6
// 004a8535: LEA ESI,[EBX + 0x20]
// 004a8538: PUSH ESI
// 004a8539: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a853f: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004a8540: CALL core_fire.cpp_CFireEffect_FUN_004c9240
//   XREF to: 004c9240 (UNCONDITIONAL_CALL)
// 004a8545: ADD ESP,0xc
// 004a8548: PUSH 0x0
// 004a854a: PUSH ESI
// 004a854b: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004a8551: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 004a8552: CALL core_fire.cpp_CFireEffect_FUN_004c9240
//   XREF to: 004c9240 (UNCONDITIONAL_CALL)
// 004a8557: ADD ESP,0xc
// 004a855a: PUSH 0x0
// 004a855c: PUSH ESI
// 004a855d: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a8562: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004a8563: CALL core_fire.cpp_CFireEffect_FUN_004c9240
//   XREF to: 004c9240 (UNCONDITIONAL_CALL)
// 004a8568: ADD ESP,0xc
// 004a856b: PUSH 0x0
// 004a856d: PUSH ESI
// 004a856e: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a8574: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004a8575: CALL core_fire.cpp_CFireEffect_FUN_004c9240
//   XREF to: 004c9240 (UNCONDITIONAL_CALL)
// 004a857a: ADD ESP,0xc
// 004a857d: JMP 0x004a8201
//   XREF to: 004a8201 (UNCONDITIONAL_JUMP)
// 004a8582: FLD float ptr [EBX + 0x15c]
//   Label: caseD_7
// 004a8588: FMUL double ptr [0x006240b2]
//   XREF to: 006240b2 (READ)
// 004a858e: SUB ESP,0x4
// 004a8591: FSTP float ptr [ESP]
//   XREF to: Stack[-0xec] (DATA)
// 004a8594: PUSH 0x0
// 004a8596: LEA ESI,[EBX + 0x20]
// 004a8599: PUSH dword ptr [EBX + 0x160]
// 004a859f: PUSH ESI
// 004a85a0: MOV EAX,[0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
//   XREF to: 02d12db0 (PARAM)
// 004a85a5: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004a85a6: CALL core_fire.cpp_CFireEffect_FUN_004c8f50
//   XREF to: 004c8f50 (UNCONDITIONAL_CALL)
// 004a85ab: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x4c] (DATA)
// 004a85b2: ADD ESP,0x14
// 004a85b5: CMP EAX,ESI
// 004a85b7: JZ 0x004a85d6
//   XREF to: 004a85d6 (CONDITIONAL_JUMP)
// 004a85b9: MOV EAX,dword ptr [ESI]
// 004a85bb: MOV dword ptr [ESP + 0x9c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004a85c2: MOV EAX,dword ptr [ESI + 0x4]
// 004a85c5: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004a85cc: MOV EAX,dword ptr [ESI + 0x8]
// 004a85cf: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004a85d6: FLD float ptr [EBX + 0x160]
//   Label: LAB_004a85d6
// 004a85dc: FMUL double ptr [0x006240b2]
//   XREF to: 006240b2 (READ)
// 004a85e2: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x4c] (DATA)
// 004a85e9: LEA ESI,[EBX + 0x44c]
// 004a85ef: PUSH EAX
// 004a85f0: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x48] (READ)
// 004a85f7: FXCH
// 004a85f9: FADD ST0,ST1
// 004a85fb: PUSH ESI
// 004a85fc: FSTP ST1
// 004a85fe: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x48] (WRITE)
// 004a8605: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 004a860a: ADD ESP,0x8
// 004a860d: PUSH 0x7fff
// 004a8612: PUSH 0x0
// 004a8614: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004a8619: MOV EDX,EAX
// 004a861b: SAR EDX,0x1f
// 004a861e: MOV dword ptr [ESI + 0x3c],EAX
// 004a8621: SHL EDX,0x8
// 004a8624: SBB EAX,EDX
// 004a8626: SAR EAX,0x8
// 004a8629: MOV EDX,EAX
// 004a862b: SAR EDX,0x1f
// 004a862e: SHL EDX,0x2
// 004a8631: SBB EAX,EDX
// 004a8633: SAR EAX,0x2
// 004a8636: ADD ESP,0x8
// 004a8639: MOV byte ptr [ESI + 0x1c],AL
// 004a863c: PUSH dword ptr [EBX + 0x160]
// 004a8642: PUSH ESI
// 004a8643: JMP 0x004a81e2
//   XREF to: 004a81e2 (UNCONDITIONAL_JUMP)
// 004a8648: PUSH 0xffff
//   Label: caseD_8
// 004a864d: PUSH 0x1
// 004a864f: PUSH 0x10000
// 004a8654: PUSH 0x4000
// 004a8659: PUSH 0x0
// 004a865b: LEA EAX,[EBX + 0x20]
// 004a865e: PUSH EAX
// 004a865f: MOV EDI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004a8665: PUSH EDI
//   XREF to: 02d12db0 (DATA)
// 004a8666: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004a866b: ADD ESP,0x1c
// 004a866e: JMP 0x004a8201
//   XREF to: 004a8201 (UNCONDITIONAL_JUMP)
// 004a8673: MOV EDX,dword ptr [EBX + 0x3d0]
//   Label: caseD_9
// 004a8679: TEST EDX,EDX
// 004a867b: JZ 0x004a8201
//   XREF to: 004a8201 (CONDITIONAL_JUMP)
// 004a8681: MOV EAX,EDX
// 004a8683: MOV ESI,dword ptr [EDX + 0x154]
// 004a8689: MOV EDX,ESP
// 004a868b: PUSH EDX
// 004a868c: PUSH EAX
// 004a868d: CALL dword ptr [ESI + 0x14]
// 004a8690: LEA EDX,[EAX + 0xc]
// 004a8693: FLD float ptr [EAX]
// 004a8695: FADD float ptr [EDX]
// 004a8697: ADD ESP,0x8
// 004a869a: FST float ptr [ESP + 0x24]
// 004a869e: FLD float ptr [EAX + 0x4]
// 004a86a1: FADD float ptr [EDX + 0x4]
// 004a86a4: FXCH
// 004a86a6: FLD float ptr [0x006240aa]
//   XREF to: 006240aa (READ)
// 004a86ac: FXCH
// 004a86ae: FMUL ST1
// 004a86b0: FXCH ST2
// 004a86b2: FST float ptr [ESP + 0x28]
// 004a86b6: FLD float ptr [EAX + 0x8]
// 004a86b9: FADD float ptr [EDX + 0x8]
// 004a86bc: FXCH
// 004a86be: FMUL ST2
// 004a86c0: FXCH
// 004a86c2: FST float ptr [ESP + 0x2c]
// 004a86c6: FMULP ST2
// 004a86c8: LEA EAX,[ESP + 0x60]
// 004a86cc: FXCH ST2
// 004a86ce: FSTP float ptr [ESP + 0x60]
// 004a86d2: PUSH EAX
// 004a86d3: LEA EAX,[ESP + 0x88]
// 004a86da: FXCH
// 004a86dc: FSTP float ptr [ESP + 0x68]
// 004a86e0: PUSH EAX
// 004a86e1: FSTP float ptr [ESP + 0x70]
// 004a86e5: MOV ECX,dword ptr [EBX + 0x3d0]
// 004a86eb: PUSH ECX
// 004a86ec: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004a86f1: MOV EDX,dword ptr [EBX + 0x3d0]
// 004a86f7: FLD float ptr [EDX + 0x20]
// 004a86fa: FADD float ptr [EAX]
// 004a86fc: ADD ESP,0xc
// 004a86ff: FSTP float ptr [ESP + 0x6c]
// 004a8703: FLD float ptr [EDX + 0x24]
// 004a8706: FADD float ptr [EAX + 0x4]
// 004a8709: FSTP float ptr [ESP + 0x70]
// 004a870d: FLD float ptr [EDX + 0x28]
// 004a8710: LEA EDX,[ESP + 0x90]
// 004a8717: FADD float ptr [EAX + 0x8]
// 004a871a: LEA EAX,[ESP + 0x6c]
// 004a871e: FSTP float ptr [ESP + 0x74]
// 004a8722: CMP EDX,EAX
// 004a8724: JZ 0x004a8747
//   XREF to: 004a8747 (CONDITIONAL_JUMP)
// 004a8726: MOV EAX,dword ptr [ESP + 0x6c]
// 004a872a: MOV dword ptr [ESP + 0x90],EAX
// 004a8731: MOV EAX,dword ptr [ESP + 0x70]
// 004a8735: MOV dword ptr [ESP + 0x94],EAX
// 004a873c: MOV EAX,dword ptr [ESP + 0x74]
// 004a8740: MOV dword ptr [ESP + 0x98],EAX
// 004a8747: PUSH 0x40800000
//   Label: LAB_004a8747
// 004a874c: PUSH 0x0
// 004a874e: PUSH 0x0
// 004a8750: LEA EAX,[ESP + 0x9c]
// 004a8757: PUSH EAX
// 004a8758: LEA EAX,[EBX + 0x20]
// 004a875b: PUSH EAX
// 004a875c: MOV ESI,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004a8762: PUSH ESI
//   XREF to: 02d12db0 (DATA)
// 004a8763: CALL core_fire.cpp_CFireEffect_FUN_004c8fd0
//   XREF to: 004c8fd0 (UNCONDITIONAL_CALL)
// 004a8768: ADD ESP,0x18
// 004a876b: JMP 0x004a8201
//   XREF to: 004a8201 (UNCONDITIONAL_JUMP)
// 004a8770: CMP dword ptr [EBX + 0x43c],0x1
//   Label: LAB_004a8770
// 004a8777: JNZ 0x004a8786
//   XREF to: 004a8786 (CONDITIONAL_JUMP)
// 004a8779: CMP dword ptr [EBX + 0x490],0x0
// 004a8780: JNZ 0x004a8221
//   XREF to: 004a8221 (CONDITIONAL_JUMP)
// 004a8786: LEA EAX,[EBX + 0x3d4]
//   Label: LAB_004a8786
// 004a878c: PUSH EAX
// 004a878d: MOV EDX,dword ptr [EBX + 0x154]
// 004a8793: PUSH EBX
// 004a8794: CALL dword ptr [EDX + 0x24]
// 004a8797: ADD ESP,0x8
// 004a879a: MOV dword ptr [EBX + 0x438],EAX
// 004a87a0: JMP 0x004a8221
//   XREF to: 004a8221 (UNCONDITIONAL_JUMP)
// 004a87a5: MOV EAX,dword ptr [EBX + 0x438]
//   Label: LAB_004a87a5
// 004a87ab: PUSH EAX
// 004a87ac: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004a87b1: ADD ESP,0x4
// 004a87b4: JMP 0x004a8221
//   XREF to: 004a8221 (UNCONDITIONAL_JUMP)
// 004a87b9: MOV dword ptr [EBX + 0x168],0x1
//   Label: LAB_004a87b9
// 004a87c3: MOV EAX,dword ptr [EBX + 0x234]
// 004a87c9: MOV dword ptr [EBX + 0x448],EAX
// 004a87cf: MOV ESP,EBP
// 004a87d1: POP EBP
// 004a87d2: POP EDI
// 004a87d3: POP ESI
// 004a87d4: POP EBX
// 004a87d5: RET
// 004a87d6: FLD float ptr [EBX + 0x448]
//   Label: LAB_004a87d6
// 004a87dc: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a87df: FST float ptr [EBX + 0x448]
// 004a87e5: FLDZ
// 004a87e7: FCOMPP
// 004a87e9: FNSTSW AX
// 004a87eb: SAHF
// 004a87ec: JC 0x004a8263
//   XREF to: 004a8263 (CONDITIONAL_JUMP)
// 004a87f2: MOV dword ptr [EBX + 0x168],0x0
// 004a87fc: MOV EAX,dword ptr [EBX + 0x3cc]
// 004a8802: MOV dword ptr [EBX + 0x448],EAX
// 004a8808: MOV ESP,EBP
// 004a880a: POP EBP
// 004a880b: POP EDI
// 004a880c: POP ESI
// 004a880d: POP EBX
// 004a880e: RET
// 004a880f: FLD float ptr [EBX + 0x234]
//   Label: LAB_004a880f
// 004a8815: FLDZ
// 004a8817: FCOMPP
// 004a8819: FNSTSW AX
// 004a881b: SAHF
// 004a881c: JNC 0x004a8263
//   XREF to: 004a8263 (CONDITIONAL_JUMP)
// 004a8822: FLD float ptr [EBX + 0x448]
// 004a8828: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a882b: FST float ptr [EBX + 0x448]
// 004a8831: FLDZ
// 004a8833: FCOMPP
// 004a8835: FNSTSW AX
// 004a8837: SAHF
// 004a8838: JC 0x004a8263
//   XREF to: 004a8263 (CONDITIONAL_JUMP)
// 004a883e: MOV dword ptr [EBX + 0x448],0x0
// 004a8848: MOV dword ptr [EBX + 0x168],0x0
// 004a8852: MOV ESP,EBP
// 004a8854: POP EBP
// 004a8855: POP EDI
// 004a8856: POP ESI
// 004a8857: POP EBX
// 004a8858: RET
