// Name: core_trigger.cpp_CTrigger_process_FUN_005dfac0
// Address: 005dfac0
// Address Range: [[005dfac0, 005e00a3]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_process_FUN_005dfac0(CTrigger * this_ptr)
// Globals:
//   void* switchdataD_005dfa84 = 005dfaf3
//   void* switchdataD_005dfaac = 005dfb6a
//   TerminatedCString s_core_trigger_cpp_00655616
//   undefined4 DAT_0065562c
//   undefined4 DAT_00655634
//   undefined4 DAT_00664a00
//   CEventList* g_CEventListPtr = 02d05310
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEventList g_CEventListInstance
//   CFireEffect g_CFireEffectInstance
//   undefined4 DAT_02d7a7b8
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_event.cpp_CEventList_FUN_004aabe0
//   core_fire.cpp_CFireEffect_FUN_004c8c90
//   core_hero.cpp_FUN_004f2220
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
//   core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trigger_cpp_CTrigger_process_FUN_005dfac0(CTrigger *this_ptr)

{
  CTrigger *actor_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  char *pcVar5;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  double local_b8 [3];
  CBoundingBox3D local_a0;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3i CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f aCStack_50 [2];
  int local_34;
  char *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  CLocation *local_20;
  float local_1c;
  
  uVar4 = *(undefined4 *)(this_ptr->field1_0x158 + 0x1c);
  local_34 = 0;
  this_ptr->field1_0x158[0x1a4] = '\0';
  this_ptr->field1_0x158[0x1a5] = '\0';
  this_ptr->field1_0x158[0x1a6] = '\0';
  this_ptr->field1_0x158[0x1a7] = '\0';
  switch(uVar4) {
  case 0:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      iVar9 = 0;
      (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&local_a0);
      if (0 < g_HeroCount) {
        iVar10 = 0;
        do {
          iVar8 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0();
          if (iVar8 != 0) {
            uVar4 = *(undefined4 *)((int)g_HeroActors + iVar10);
            local_2c = &DAT_00000001;
            goto LAB_005dfb52;
          }
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar9 < g_HeroCount);
      }
    }
    break;
  case 1:
    if (*(int *)(this_ptr->field1_0x158 + 0x210) == 0) {
      pcVar5 = core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      *(char **)(this_ptr->field1_0x158 + 0x210) = pcVar5;
    }
    if (*(CDemonActor **)(this_ptr->field1_0x158 + 0x210) != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                (*(CDemonActor **)(this_ptr->field1_0x158 + 0x210),"..\\core\\trigger.cpp",0xee)
      ;
      iVar9 = *(int *)(this_ptr->field1_0x158 + 0x210);
      if (((*(int *)(iVar9 + 0x70) == 1) &&
          (fVar1 = (this_ptr->base_actor).location.position.x - *(float *)(iVar9 + 0x20),
          fVar3 = (this_ptr->base_actor).location.position.y - *(float *)(iVar9 + 0x24),
          fVar2 = (this_ptr->base_actor).location.position.z - *(float *)(iVar9 + 0x28),
          fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
          *(float *)this_ptr->field1_0x158 * *(float *)this_ptr->field1_0x158)) &&
         (iVar9 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(), iVar9 != 0)) {
        uVar4 = *(undefined4 *)(this_ptr->field1_0x158 + 0x210);
        local_34 = 1;
LAB_005dfb52:
        *(undefined4 *)(this_ptr->field1_0x158 + 0x1a4) = uVar4;
      }
    }
    break;
  case 2:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      pCVar6 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                         (&this_ptr->base_actor,(CBoundingBox3D *)local_b8);
      fStack_80 = (pCVar6->min).x + (pCVar6->max).x;
      fStack_7c = (pCVar6->min).y + (pCVar6->max).y;
      CStack_68.x = fStack_80 * _DAT_0065562c;
      CStack_68.y = fStack_7c * _DAT_0065562c;
      fStack_78 = (pCVar6->min).z + (pCVar6->max).z;
      CStack_68.z = fStack_78 * _DAT_0065562c;
      pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base_actor,&CStack_5c,&CStack_68);
      if (aCStack_50 != pCVar7) {
        aCStack_50[0].x = pCVar7->x;
        aCStack_50[0].y = pCVar7->y;
        aCStack_50[0].z = pCVar7->z;
      }
      CStack_74.x = (int)ROUND(aCStack_50[0].x * _DAT_00664a00);
      CStack_74.y = (int)ROUND(aCStack_50[0].y * _DAT_00664a00);
      CStack_74.z = (int)ROUND(aCStack_50[0].z * _DAT_00664a00);
      iVar9 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                        (g_CDemonSetPtr,&CStack_74,(CVector3i *)0x0);
      local_b8[0] = (double)iVar9;
      if ((*(float *)(this_ptr->field1_0x158 + 0xc4) * (float)_DAT_00655634 <= (float)iVar9) &&
         ((float)iVar9 <= *(float *)(this_ptr->field1_0x158 + 200) * (float)_DAT_00655634)) {
        local_2c = &DAT_00000001;
      }
    }
    break;
  case 3:
  case 4:
  case 5:
    local_34 = *(int *)(this_ptr->field1_0x158 + 0x198);
    this_ptr->field1_0x158[0x198] = '\0';
    this_ptr->field1_0x158[0x199] = '\0';
    this_ptr->field1_0x158[0x19a] = '\0';
    this_ptr->field1_0x158[0x19b] = '\0';
    break;
  case 6:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      local_1c = *(float *)(this_ptr->field1_0x158 + 0x10) *
                 *(float *)(this_ptr->field1_0x158 + 0x10) +
                 *(float *)(this_ptr->field1_0x158 + 0xc) * *(float *)(this_ptr->field1_0x158 + 0xc)
                 + *(float *)(this_ptr->field1_0x158 + 8) * *(float *)(this_ptr->field1_0x158 + 8);
      local_34 = core_fire_cpp_CFireEffect_FUN_004c8c90(g_CFireEffectPtr);
    }
    break;
  case 7:
    fVar1 = *(float *)(this_ptr->field1_0x158 + 0x214) - in_stack_00000008;
    *(float *)(this_ptr->field1_0x158 + 0x214) = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->field1_0x158[0x214] = '\0';
      this_ptr->field1_0x158[0x215] = '\0';
      this_ptr->field1_0x158[0x216] = '\0';
      this_ptr->field1_0x158[0x217] = '\0';
    }
    if (0.0 < *(float *)(this_ptr->field1_0x158 + 0x1a0)) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
    break;
  case 8:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      local_28 = 0;
      for (iVar9 = 0; iVar9 < (int)g_CDemonSetPtr->actor_list_ptr; iVar9 = iVar9 + 1) {
        iVar10 = *(int *)(g_CDemonSetPtr->actor_list_data + local_28);
        iVar8 = (**(code **)(*(int *)(iVar10 + 0x154) + 0x54))();
        if ((iVar8 != 0) &&
           (iVar8 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(), iVar8 != 0)) {
          *(int *)(this_ptr->field1_0x158 + 0x1a4) = iVar10;
          local_34 = 1;
          break;
        }
        local_28 = local_28 + 4;
      }
    }
    break;
  case 9:
    iVar9 = core_hero_cpp_FUN_004f2220();
    if (iVar9 != 0) {
      local_30 = this_ptr->field1_0x158 + 0x20;
      local_2c = this_ptr->field1_0x158 + 0x70;
      local_24 = 0;
      local_20 = &(this_ptr->base_actor).location;
      for (iVar9 = 0; iVar9 < (int)g_CDemonSetPtr->actor_list_ptr; iVar9 = iVar9 + 1) {
        actor_ptr = *(CTrigger **)(g_CDemonSetPtr->actor_list_data + local_24);
        fVar1 = (actor_ptr->base_actor).location.position.x - (local_20->position).x;
        fVar3 = (actor_ptr->base_actor).location.position.y - (local_20->position).y;
        fVar2 = (actor_ptr->base_actor).location.position.z - (local_20->position).z;
        if ((((fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
               *(float *)this_ptr->field1_0x158 * *(float *)this_ptr->field1_0x158) &&
             (actor_ptr != this_ptr)) &&
            (iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(&actor_ptr->base_actor,local_2c),
            iVar10 != 0)) &&
           ((iVar10 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                (local_30,(char *)actor_ptr,0), iVar10 != 0 &&
            (iVar10 = core_trigger_cpp_CTrigger_containsActor_FUN_005e0cd0(), iVar10 != 0)))) {
          *(CTrigger **)(this_ptr->field1_0x158 + 0x1a4) = actor_ptr;
          local_34 = 1;
          break;
        }
        local_24 = local_24 + 4;
      }
    }
  }
  switch(*(undefined4 *)(this_ptr->field1_0x158 + 4)) {
  case 0:
  case 1:
    if (local_34 == 0) {
      if (*(int *)(this_ptr->field1_0x158 + 4) == 0) {
        this_ptr->field1_0x158[0x14] = '\0';
        this_ptr->field1_0x158[0x15] = '\0';
        this_ptr->field1_0x158[0x16] = '\0';
        this_ptr->field1_0x158[0x17] = '\0';
      }
      goto switchD_005dfb63_default;
    }
    break;
  case 2:
    if ((*(int *)(this_ptr->field1_0x158 + 0x194) != 0) || (local_34 == 0)) goto LAB_005e0053;
    break;
  case 3:
    if ((*(int *)(this_ptr->field1_0x158 + 0x194) == 1) && (local_34 == 0)) {
      this_ptr->field1_0x158[0x14] = '\x01';
      this_ptr->field1_0x158[0x15] = '\0';
      this_ptr->field1_0x158[0x16] = '\0';
      this_ptr->field1_0x158[0x17] = '\0';
      goto switchD_005dfb63_default;
    }
LAB_005e0053:
    this_ptr->field1_0x158[0x14] = '\0';
    this_ptr->field1_0x158[0x15] = '\0';
    this_ptr->field1_0x158[0x16] = '\0';
    this_ptr->field1_0x158[0x17] = '\0';
  default:
    goto switchD_005dfb63_default;
  }
  this_ptr->field1_0x158[0x14] = '\x01';
  this_ptr->field1_0x158[0x15] = '\0';
  this_ptr->field1_0x158[0x16] = '\0';
  this_ptr->field1_0x158[0x17] = '\0';
switchD_005dfb63_default:
  *(int *)(this_ptr->field1_0x158 + 0x194) = local_34;
  if (*(int *)(this_ptr->field1_0x158 + 0x14) == 0) {
    core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    this_ptr->field1_0x158[0x1a4] = '\0';
    this_ptr->field1_0x158[0x1a5] = '\0';
    this_ptr->field1_0x158[0x1a6] = '\0';
    this_ptr->field1_0x158[0x1a7] = '\0';
    return;
  }
  core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
  return;
}


// Assembly code:
// 005dfac0: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_process_FUN_005dfac0
// 005dfac1: PUSH ESI
// 005dfac2: PUSH EDI
// 005dfac3: PUSH EBP
// 005dfac4: MOV EBP,ESP
// 005dfac6: SUB ESP,0xac
// 005dfacc: AND ESP,0xfffffff8
// 005dfacf: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005dfad2: XOR EDX,EDX
// 005dfad4: MOV EAX,dword ptr [ESI + 0x174]
// 005dfada: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005dfae1: MOV dword ptr [ESI + 0x2fc],EDX
// 005dfae7: CMP EAX,0x9
// 005dfaea: JA 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfaec: JMP dword ptr [EAX*0x4 + 0x5dfa84]
//   Label: switchD
//   XREF to: 005dfaf3 (COMPUTED_JUMP)
//   XREF to: 005dfbce (COMPUTED_JUMP)
//   XREF to: 005dfc8c (COMPUTED_JUMP)
//   XREF to: 005dfdbb (COMPUTED_JUMP)
//   XREF to: 005dfdd7 (COMPUTED_JUMP)
//   XREF to: 005dfe23 (COMPUTED_JUMP)
//   XREF to: 005dfe91 (COMPUTED_JUMP)
//   XREF to: 005dff1c (COMPUTED_JUMP)
//   XREF to: 005dfa84 (DATA)
// 005dfaf3: LEA EAX,[ESI + 0x20]
//   Label: caseD_0
// 005dfaf6: PUSH dword ptr [ESI + 0x158]
// 005dfafc: PUSH EAX
// 005dfafd: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 005dfb02: ADD ESP,0x8
// 005dfb05: TEST EAX,EAX
// 005dfb07: JZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfb09: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0xa0] (DATA)
// 005dfb0d: PUSH EAX
// 005dfb0e: MOV EBX,dword ptr [ESI + 0x154]
// 005dfb14: PUSH ESI
// 005dfb15: XOR EDI,EDI
// 005dfb17: CALL dword ptr [EBX + 0x14]
// 005dfb1a: MOV EAX,[0x02db87bc]
//   XREF to: 02db87bc (READ)
// 005dfb1f: ADD ESP,0x8
// 005dfb22: TEST EAX,EAX
// 005dfb24: JLE 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfb26: XOR EBX,EBX
// 005dfb28: MOV EDX,dword ptr [EBX + 0x2db87c0]
//   Label: LAB_005dfb28
//   XREF to: 02db87c0 (READ)
//   XREF to: 02db87c4 (READ)
// 005dfb2e: PUSH EDX
// 005dfb2f: PUSH ESI
// 005dfb30: CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
//   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)
// 005dfb35: ADD ESP,0x8
// 005dfb38: TEST EAX,EAX
// 005dfb3a: JZ 0x005dfbbb
//   XREF to: 005dfbbb (CONDITIONAL_JUMP)
// 005dfb40: MOV ECX,0x1
// 005dfb45: MOV EAX,dword ptr [EBX + 0x2db87c0]
//   XREF to: 02db87c0 (READ)
// 005dfb4b: MOV dword ptr [ESP + 0x8c],ECX
// 005dfb52: MOV dword ptr [ESI + 0x2fc],EAX
//   Label: LAB_005dfb52
// 005dfb58: MOV EAX,dword ptr [ESI + 0x15c]
//   Label: default
// 005dfb5e: CMP EAX,0x3
// 005dfb61: JA 0x005dfb83
//   XREF to: 005dfb83 (CONDITIONAL_JUMP)
// 005dfb63: JMP dword ptr [EAX*0x4 + 0x5dfaac]
//   Label: switchD
//   XREF to: 005dfb6a (COMPUTED_JUMP)
//   XREF to: 005e003c (COMPUTED_JUMP)
//   XREF to: 005e0062 (COMPUTED_JUMP)
//   XREF to: 005dfaac (DATA)
// 005dfb6a: MOV ECX,dword ptr [ESP + 0x8c]
//   Label: caseD_1
//   XREF to: Stack[-0x34] (READ)
// 005dfb71: TEST ECX,ECX
// 005dfb73: JZ 0x005e0024
//   XREF to: 005e0024 (CONDITIONAL_JUMP)
// 005dfb79: MOV dword ptr [ESI + 0x16c],0x1
//   Label: LAB_005dfb79
// 005dfb83: MOV EAX,dword ptr [ESP + 0x8c]
//   Label: default
//   XREF to: Stack[-0x34] (READ)
// 005dfb8a: MOV EDI,dword ptr [ESI + 0x16c]
// 005dfb90: MOV dword ptr [ESI + 0x2ec],EAX
// 005dfb96: TEST EDI,EDI
// 005dfb98: JZ 0x005e0082
//   XREF to: 005e0082 (CONDITIONAL_JUMP)
// 005dfb9e: ADD ESI,0x224
// 005dfba4: PUSH ESI
// 005dfba5: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005dfbab: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 005dfbac: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005dfbb1: ADD ESP,0x8
// 005dfbb4: MOV ESP,EBP
// 005dfbb6: POP EBP
// 005dfbb7: POP EDI
// 005dfbb8: POP ESI
// 005dfbb9: POP EBX
// 005dfbba: RET
// 005dfbbb: MOV EAX,[0x02db87bc]
//   Label: LAB_005dfbbb
//   XREF to: 02db87bc (READ)
// 005dfbc0: INC EDI
// 005dfbc1: ADD EBX,0x4
// 005dfbc4: CMP EDI,EAX
// 005dfbc6: JL 0x005dfb28
//   XREF to: 005dfb28 (CONDITIONAL_JUMP)
// 005dfbcc: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005dfbce: CMP dword ptr [ESI + 0x368],0x0
//   Label: caseD_1
// 005dfbd5: JNZ 0x005dfbf3
//   XREF to: 005dfbf3 (CONDITIONAL_JUMP)
// 005dfbd7: LEA EAX,[ESI + 0x178]
// 005dfbdd: PUSH EAX
// 005dfbde: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 005dfbe4: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 005dfbe5: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 005dfbea: ADD ESP,0x8
// 005dfbed: MOV dword ptr [ESI + 0x368],EAX
// 005dfbf3: MOV EAX,dword ptr [ESI + 0x368]
//   Label: LAB_005dfbf3
// 005dfbf9: TEST EAX,EAX
// 005dfbfb: JZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfc01: PUSH 0xee
// 005dfc06: PUSH 0x655616
//   XREF to: 00655616 (DATA)
// 005dfc0b: PUSH EAX
// 005dfc0c: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 005dfc11: MOV EBX,dword ptr [ESI + 0x368]
// 005dfc17: MOV ECX,dword ptr [EBX + 0x70]
// 005dfc1a: ADD ESP,0xc
// 005dfc1d: CMP ECX,0x1
// 005dfc20: JNZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfc26: LEA EAX,[ESI + 0x20]
// 005dfc29: LEA EDI,[EBX + 0x20]
// 005dfc2c: FLD float ptr [EAX]
// 005dfc2e: FSUB float ptr [EDI]
// 005dfc30: FMUL ST0
// 005dfc32: FLD float ptr [EAX + 0x4]
// 005dfc35: FSUB float ptr [EDI + 0x4]
// 005dfc38: FMUL ST0
// 005dfc3a: FLD float ptr [EAX + 0x8]
// 005dfc3d: FXCH
// 005dfc3f: FADDP ST2,ST0
// 005dfc41: FSUB float ptr [EDI + 0x8]
// 005dfc44: FMUL ST0
// 005dfc46: FLD float ptr [ESI + 0x158]
// 005dfc4c: FXCH
// 005dfc4e: FADDP ST2,ST0
// 005dfc50: FMUL float ptr [ESI + 0x158]
// 005dfc56: FXCH
// 005dfc58: FCOMPP
// 005dfc5a: FNSTSW AX
// 005dfc5c: SAHF
// 005dfc5d: JA 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfc63: PUSH EBX
// 005dfc64: PUSH ESI
// 005dfc65: CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
//   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)
// 005dfc6a: ADD ESP,0x8
// 005dfc6d: TEST EAX,EAX
// 005dfc6f: JZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfc75: MOV EBX,0x1
// 005dfc7a: MOV EAX,dword ptr [ESI + 0x368]
// 005dfc80: MOV dword ptr [ESP + 0x8c],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 005dfc87: JMP 0x005dfb52
//   XREF to: 005dfb52 (UNCONDITIONAL_JUMP)
// 005dfc8c: LEA EAX,[ESI + 0x20]
//   Label: caseD_2
// 005dfc8f: PUSH dword ptr [ESI + 0x158]
// 005dfc95: PUSH EAX
// 005dfc96: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 005dfc9b: ADD ESP,0x8
// 005dfc9e: TEST EAX,EAX
// 005dfca0: JZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfca6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xb8] (DATA)
// 005dfcaa: PUSH EAX
// 005dfcab: MOV EBX,dword ptr [ESI + 0x154]
// 005dfcb1: PUSH ESI
// 005dfcb2: CALL dword ptr [EBX + 0x14]
// 005dfcb5: LEA EBX,[EAX + 0xc]
// 005dfcb8: FLD float ptr [EAX]
// 005dfcba: FADD float ptr [EBX]
// 005dfcbc: ADD ESP,0x8
// 005dfcbf: FST float ptr [ESP + 0x38]
// 005dfcc3: FLD float ptr [EAX + 0x4]
// 005dfcc6: FADD float ptr [EBX + 0x4]
// 005dfcc9: FXCH
// 005dfccb: FLD float ptr [0x0065562c]
//   XREF to: 0065562c (READ)
// 005dfcd1: FXCH
// 005dfcd3: FMUL ST1
// 005dfcd5: FXCH ST2
// 005dfcd7: FST float ptr [ESP + 0x3c]
// 005dfcdb: FMUL ST1
// 005dfcdd: FLD float ptr [EAX + 0x8]
// 005dfce0: FADD float ptr [EBX + 0x8]
// 005dfce3: LEA EAX,[ESP + 0x50]
// 005dfce7: FST float ptr [ESP + 0x40]
// 005dfceb: FMULP ST2
// 005dfced: PUSH EAX
// 005dfcee: LEA EAX,[ESP + 0x60]
// 005dfcf2: FXCH ST2
// 005dfcf4: FSTP float ptr [ESP + 0x54]
// 005dfcf8: PUSH EAX
// 005dfcf9: FXCH
// 005dfcfb: FSTP float ptr [ESP + 0x5c]
// 005dfcff: PUSH ESI
// 005dfd00: FSTP float ptr [ESP + 0x64]
// 005dfd04: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005dfd09: MOV EBX,EAX
// 005dfd0b: LEA EAX,[ESP + 0x74]
// 005dfd0f: ADD ESP,0xc
// 005dfd12: CMP EAX,EBX
// 005dfd14: JZ 0x005dfd2a
//   XREF to: 005dfd2a (CONDITIONAL_JUMP)
// 005dfd16: MOV EAX,dword ptr [EBX]
// 005dfd18: MOV dword ptr [ESP + 0x68],EAX
// 005dfd1c: MOV EAX,dword ptr [EBX + 0x4]
// 005dfd1f: MOV dword ptr [ESP + 0x6c],EAX
// 005dfd23: MOV EAX,dword ptr [EBX + 0x8]
// 005dfd26: MOV dword ptr [ESP + 0x70],EAX
// 005dfd2a: LEA EBX,[ESP + 0x44]
//   Label: LAB_005dfd2a
// 005dfd2e: LEA EAX,[ESP + 0x68]
// 005dfd32: FLD float ptr [EAX]
// 005dfd34: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005dfd3a: FISTP dword ptr [EBX]
// 005dfd3c: FLD float ptr [EAX + 0x4]
// 005dfd3f: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005dfd45: FISTP dword ptr [EBX + 0x4]
// 005dfd48: FLD float ptr [EAX + 0x8]
// 005dfd4b: FMUL float ptr [0x00664a00]
//   XREF to: 00664a00 (READ)
// 005dfd51: FISTP dword ptr [EBX + 0x8]
// 005dfd54: PUSH 0x0
// 005dfd56: LEA EAX,[ESP + 0x48]
// 005dfd5a: PUSH EAX
// 005dfd5b: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005dfd61: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005dfd62: CALL core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
//   XREF to: 0056db80 (UNCONDITIONAL_CALL)
// 005dfd67: FLD float ptr [ESI + 0x21c]
// 005dfd6d: ADD ESP,0xc
// 005dfd70: FMUL double ptr [0x00655634]
//   XREF to: 00655634 (READ)
// 005dfd76: MOV dword ptr [ESP + 0xa8],EAX
// 005dfd7d: FILD dword ptr [ESP + 0xa8]
// 005dfd84: FSTP double ptr [ESP]
// 005dfd87: FCOMP double ptr [ESP]
// 005dfd8a: FNSTSW AX
// 005dfd8c: SAHF
// 005dfd8d: JA 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfd93: FLD float ptr [ESI + 0x220]
// 005dfd99: FMUL double ptr [0x00655634]
//   XREF to: 00655634 (READ)
// 005dfd9f: FCOMP double ptr [ESP]
// 005dfda2: FNSTSW AX
// 005dfda4: SAHF
// 005dfda5: JC 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfdab: MOV dword ptr [ESP + 0x8c],0x1
// 005dfdb6: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005dfdbb: MOV EAX,dword ptr [ESI + 0x2f0]
//   Label: caseD_5
// 005dfdc1: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005dfdc8: MOV dword ptr [ESI + 0x2f0],0x0
// 005dfdd2: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005dfdd7: FLD float ptr [ESI + 0x36c]
//   Label: caseD_7
// 005dfddd: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005dfde0: FST float ptr [ESI + 0x36c]
// 005dfde6: FLDZ
// 005dfde8: FCOMPP
// 005dfdea: FNSTSW AX
// 005dfdec: SAHF
// 005dfded: JBE 0x005dfdf5
//   XREF to: 005dfdf5 (CONDITIONAL_JUMP)
// 005dfdef: MOV dword ptr [ESI + 0x36c],EDX
// 005dfdf5: FLD float ptr [ESI + 0x2f8]
//   Label: LAB_005dfdf5
// 005dfdfb: FLDZ
// 005dfdfd: FCOMPP
// 005dfdff: FNSTSW AX
// 005dfe01: SAHF
// 005dfe02: JC 0x005dfe15
//   XREF to: 005dfe15 (CONDITIONAL_JUMP)
// 005dfe04: MOV EAX,0x1
// 005dfe09: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005dfe10: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005dfe15: XOR EAX,EAX
//   Label: LAB_005dfe15
// 005dfe17: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005dfe1e: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005dfe23: LEA EBX,[ESI + 0x20]
//   Label: caseD_6
// 005dfe26: PUSH dword ptr [ESI + 0x158]
// 005dfe2c: PUSH EBX
// 005dfe2d: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 005dfe32: ADD ESP,0x8
// 005dfe35: TEST EAX,EAX
// 005dfe37: JZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfe3d: FLD float ptr [ESI + 0x160]
// 005dfe43: FMUL ST0
// 005dfe45: FLD float ptr [ESI + 0x164]
// 005dfe4b: FMUL ST0
// 005dfe4d: FADDP
// 005dfe4f: FLD float ptr [ESI + 0x168]
// 005dfe55: FMUL ST0
// 005dfe57: FADDP
// 005dfe59: PUSH 0x0
// 005dfe5b: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x1c] (WRITE)
// 005dfe62: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x1c] (READ)
// 005dfe69: MOV EDI,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 005dfe6f: SAR EAX,0x1
// 005dfe71: PUSH 0x0
// 005dfe73: ADD EAX,EDI
// 005dfe75: PUSH EAX
// 005dfe76: PUSH EBX
// 005dfe77: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 005dfe7c: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 005dfe7d: CALL core_fire.cpp_CFireEffect_FUN_004c8c90
//   XREF to: 004c8c90 (UNCONDITIONAL_CALL)
// 005dfe82: ADD ESP,0x14
// 005dfe85: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005dfe8c: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005dfe91: LEA EAX,[ESI + 0x20]
//   Label: caseD_8
// 005dfe94: PUSH dword ptr [ESI + 0x158]
// 005dfe9a: PUSH EAX
// 005dfe9b: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 005dfea0: ADD ESP,0x8
// 005dfea3: TEST EAX,EAX
// 005dfea5: JZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfeab: XOR EDI,EDI
// 005dfead: MOV dword ptr [ESP + 0x98],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005dfeb4: MOV EAX,[0x006810c8]
//   Label: LAB_005dfeb4
//   XREF to: 006810c8 (READ)
// 005dfeb9: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005dfebf: JGE 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dfec5: ADD EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x28] (READ)
// 005dfecc: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 005dfed2: PUSH EBX
// 005dfed3: MOV EAX,dword ptr [EBX + 0x154]
// 005dfed9: CALL dword ptr [EAX + 0x54]
// 005dfedc: ADD ESP,0x4
// 005dfedf: TEST EAX,EAX
// 005dfee1: JNZ 0x005dfef7
//   XREF to: 005dfef7 (CONDITIONAL_JUMP)
// 005dfee3: MOV EBX,dword ptr [ESP + 0x98]
//   Label: LAB_005dfee3
// 005dfeea: ADD EBX,0x4
// 005dfeed: INC EDI
// 005dfeee: MOV dword ptr [ESP + 0x98],EBX
// 005dfef5: JMP 0x005dfeb4
//   XREF to: 005dfeb4 (UNCONDITIONAL_JUMP)
// 005dfef7: PUSH EBX
//   Label: LAB_005dfef7
// 005dfef8: PUSH ESI
// 005dfef9: CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
//   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)
// 005dfefe: ADD ESP,0x8
// 005dff01: TEST EAX,EAX
// 005dff03: JZ 0x005dfee3
//   XREF to: 005dfee3 (CONDITIONAL_JUMP)
// 005dff05: MOV EDI,0x1
// 005dff0a: MOV dword ptr [ESI + 0x2fc],EBX
// 005dff10: MOV dword ptr [ESP + 0x8c],EDI
// 005dff17: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005dff1c: LEA EBX,[ESI + 0x20]
//   Label: caseD_9
// 005dff1f: PUSH dword ptr [ESI + 0x158]
// 005dff25: PUSH EBX
// 005dff26: CALL core_hero.cpp_FUN_004f2220
//   XREF to: 004f2220 (UNCONDITIONAL_CALL)
// 005dff2b: ADD ESP,0x8
// 005dff2e: TEST EAX,EAX
// 005dff30: JZ 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dff36: LEA EAX,[ESI + 0x178]
// 005dff3c: MOV dword ptr [ESP + 0xa0],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 005dff43: XOR EDI,EDI
// 005dff45: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005dff4c: LEA EAX,[ESI + 0x1c8]
// 005dff52: MOV dword ptr [ESP + 0x9c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 005dff59: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005dff60: MOV EAX,[0x006810c8]
//   Label: LAB_005dff60
//   XREF to: 006810c8 (READ)
// 005dff65: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005dff6b: JGE 0x005dfb58
//   XREF to: 005dfb58 (CONDITIONAL_JUMP)
// 005dff71: ADD EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x24] (READ)
// 005dff78: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 005dff7e: LEA EAX,[EBX + 0x20]
// 005dff81: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x20] (READ)
// 005dff88: FLD float ptr [EAX]
// 005dff8a: FSUB float ptr [EDX]
// 005dff8c: FMUL ST0
// 005dff8e: FLD float ptr [EAX + 0x4]
// 005dff91: FSUB float ptr [EDX + 0x4]
// 005dff94: FMUL ST0
// 005dff96: FLD float ptr [EAX + 0x8]
// 005dff99: FXCH
// 005dff9b: FADDP ST2,ST0
// 005dff9d: FSUB float ptr [EDX + 0x8]
// 005dffa0: FMUL ST0
// 005dffa2: FLD float ptr [ESI + 0x158]
// 005dffa8: FXCH
// 005dffaa: FADDP ST2,ST0
// 005dffac: FMUL float ptr [ESI + 0x158]
// 005dffb2: FXCH
// 005dffb4: FCOMPP
// 005dffb6: FNSTSW AX
// 005dffb8: SAHF
// 005dffb9: JBE 0x005dffcf
//   XREF to: 005dffcf (CONDITIONAL_JUMP)
// 005dffbb: MOV EBX,dword ptr [ESP + 0x9c]
//   Label: LAB_005dffbb
//   XREF to: Stack[-0x24] (READ)
// 005dffc2: ADD EBX,0x4
// 005dffc5: INC EDI
// 005dffc6: MOV dword ptr [ESP + 0x9c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 005dffcd: JMP 0x005dff60
//   XREF to: 005dff60 (UNCONDITIONAL_JUMP)
// 005dffcf: CMP EBX,ESI
//   Label: LAB_005dffcf
// 005dffd1: JZ 0x005dffbb
//   XREF to: 005dffbb (CONDITIONAL_JUMP)
// 005dffd3: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x2c] (READ)
// 005dffda: PUSH EAX
// 005dffdb: PUSH EBX
// 005dffdc: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005dffe1: ADD ESP,0x8
// 005dffe4: TEST EAX,EAX
// 005dffe6: JZ 0x005dffbb
//   XREF to: 005dffbb (CONDITIONAL_JUMP)
// 005dffe8: PUSH 0x0
// 005dffea: PUSH EBX
// 005dffeb: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x30] (READ)
// 005dfff2: PUSH EDX
// 005dfff3: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 005dfff8: ADD ESP,0xc
// 005dfffb: TEST EAX,EAX
// 005dfffd: JZ 0x005dffbb
//   XREF to: 005dffbb (CONDITIONAL_JUMP)
// 005dffff: PUSH EBX
// 005e0000: PUSH ESI
// 005e0001: CALL core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0
//   XREF to: 005e0cd0 (UNCONDITIONAL_CALL)
// 005e0006: ADD ESP,0x8
// 005e0009: TEST EAX,EAX
// 005e000b: JZ 0x005dffbb
//   XREF to: 005dffbb (CONDITIONAL_JUMP)
// 005e000d: MOV ECX,0x1
// 005e0012: MOV dword ptr [ESI + 0x2fc],EBX
// 005e0018: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 005e001f: JMP 0x005dfb58
//   XREF to: 005dfb58 (UNCONDITIONAL_JUMP)
// 005e0024: CMP dword ptr [ESI + 0x15c],0x0
//   Label: LAB_005e0024
// 005e002b: JNZ 0x005dfb83
//   XREF to: 005dfb83 (CONDITIONAL_JUMP)
// 005e0031: MOV dword ptr [ESI + 0x16c],ECX
// 005e0037: JMP 0x005dfb83
//   XREF to: 005dfb83 (UNCONDITIONAL_JUMP)
// 005e003c: CMP dword ptr [ESI + 0x2ec],0x0
//   Label: caseD_2
// 005e0043: JNZ 0x005e0053
//   XREF to: 005e0053 (CONDITIONAL_JUMP)
// 005e0045: CMP dword ptr [ESP + 0x8c],0x0
//   XREF to: Stack[-0x34] (READ)
// 005e004d: JNZ 0x005dfb79
//   XREF to: 005dfb79 (CONDITIONAL_JUMP)
// 005e0053: MOV dword ptr [ESI + 0x16c],0x0
//   Label: LAB_005e0053
// 005e005d: JMP 0x005dfb83
//   XREF to: 005dfb83 (UNCONDITIONAL_JUMP)
// 005e0062: MOV EBX,dword ptr [ESI + 0x2ec]
//   Label: caseD_3
// 005e0068: CMP EBX,0x1
// 005e006b: JNZ 0x005e0053
//   XREF to: 005e0053 (CONDITIONAL_JUMP)
// 005e006d: CMP dword ptr [ESP + 0x8c],0x0
//   XREF to: Stack[-0x34] (READ)
// 005e0075: JNZ 0x005e0053
//   XREF to: 005e0053 (CONDITIONAL_JUMP)
// 005e0077: MOV dword ptr [ESI + 0x16c],EBX
// 005e007d: JMP 0x005dfb83
//   XREF to: 005dfb83 (UNCONDITIONAL_JUMP)
// 005e0082: LEA EAX,[ESI + 0x288]
//   Label: LAB_005e0082
// 005e0088: PUSH EAX
// 005e0089: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 005e008e: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 005e008f: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 005e0094: ADD ESP,0x8
// 005e0097: MOV dword ptr [ESI + 0x2fc],EDI
// 005e009d: MOV ESP,EBP
// 005e009f: POP EBP
// 005e00a0: POP EDI
// 005e00a1: POP ESI
// 005e00a2: POP EBX
// 005e00a3: RET
