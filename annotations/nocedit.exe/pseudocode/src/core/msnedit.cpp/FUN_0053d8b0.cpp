// Name: core_msnedit.cpp_FUN_0053d8b0
// Address: 0053d8b0
// Address Range: [[0053d8b0, 0053dce8]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053d8b0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a756 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0053d85c = 0053dc42
//   TerminatedCString s_Change_s_of_type_s_to_ne_0063cd31
//   TerminatedCString s_C_s_0063cd52
//   TerminatedCString s_Attempt_to_transfer_prop_0063cd56
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   undefined4 g_ActorClassRegistrations[1]
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_actor.cpp_FUN_0040e130
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_msnedit.cpp_FUN_00538ea0
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053d8b0(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053d8b0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  CActorProperty *pCVar4;
  char *pcVar5;
  int iVar6;
  CDemonActor *pCVar7;
  int iVar8;
  int *piVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int in_stack_00000004;
  int in_stack_00000008;
  CDemonMission *in_stack_0000000c;
  int in_stack_00000010;
  undefined1 *in_stack_ffffafdc;
  uint in_stack_ffffafe0;
  uint in_stack_ffffafe4;
  uint in_stack_ffffafe8;
  uint in_stack_ffffafec;
  CActorPropertyList CStack_2b24;
  undefined1 local_624 [936];
  char local_27c [500];
  char local_88 [104];
  CDemonActor *local_20;
  CDemonActor *pCStack_1c;
  int iStack_18;
  CActorProperty *pCStack_14;
  
  if (*(int *)(in_stack_00000004 + 0x28) == 0) {
    return;
  }
  iVar10 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_624);
  if (0 < g_NumActorClassTypes) {
    iVar8 = 0;
    do {
      if (*(int *)(*(int *)((int)g_ActorClassRegistrations + iVar8) + 0x2c) != 0) {
        pcVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                           (*(CDemonActor **)(in_stack_00000004 + 0x28));
        iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                          (*(char **)((int)g_ActorClassRegistrations + iVar8),pcVar5);
        if (iVar6 != 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)local_624,
                     (char *)(*(int *)((int)g_ActorClassRegistrations + iVar8) + 1));
        }
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar10 < g_NumActorClassTypes);
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)local_624);
  pcVar5 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                     (*(CDemonActor **)(in_stack_00000004 + 0x28));
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_27c,"Change %s of type %s to new type",*(undefined4 *)(in_stack_00000004 + 0x28)
             ,pcVar5);
  iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     ((CPickList *)local_624,local_27c,-1,0);
  if (-1 < iVar10) {
    pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)local_624,iVar10);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_88,"C%s",pcVar5);
    pCVar7 = core_actor_cpp_createActorByName_FUN_0040c430(local_88);
    local_20 = pCVar7;
    (*pCVar7->vtable->setup)(pCVar7);
    iVar10 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Attempt to transfer properties?");
    if (iVar10 != 0) {
      core_actor_cpp_FUN_0040e130();
      core_actor_cpp_FUN_0040e130();
      (*pCVar7->vtable->getPropertyList)(pCVar7,&CStack_2b24);
      in_stack_ffffafdc = &stack0xffffafe0;
      (**(code **)(*(int *)(*(int *)(in_stack_00000010 + 0x28) + 0x154) + 0xd4))();
      iStack_18 = 0;
      if (0 < CStack_2b24.property_count) {
        pCStack_14 = CStack_2b24.properties;
        do {
          pCVar4 = pCStack_14;
          local_20 = (CDemonActor *)0x0;
          if (0 < (int)in_stack_ffffafdc) {
            pcVar5 = pCStack_14->name;
            piVar9 = (int *)&stack0xffffafe0;
            do {
              if ((*piVar9 == pCVar4->type) &&
                 (iVar10 = crt_string_c_stricmp_FUN_005fe7f0((char *)(piVar9 + 1),pcVar5),
                 iVar10 == 0)) {
                switch(*piVar9) {
                case 0:
                case 0xf:
                  *(undefined4 *)pCVar4->data_ptr = *(undefined4 *)piVar9[0x1a];
                  break;
                case 1:
                  *(undefined4 *)pCVar4->data_ptr = *(undefined4 *)piVar9[0x1a];
                  break;
                case 2:
                  puVar2 = (undefined4 *)piVar9[0x1a];
                  puVar3 = (undefined4 *)pCVar4->data_ptr;
                  if (puVar3 != puVar2) {
                    *puVar3 = *puVar2;
                    puVar3[1] = puVar2[1];
                    puVar3[2] = puVar2[2];
                  }
                  break;
                case 3:
                case 8:
                case 10:
                case 0xb:
                case 0xc:
                  pcVar11 = (char *)piVar9[0x1a];
                  pcVar12 = (char *)pCVar4->data_ptr;
                  do {
                    cVar1 = *pcVar11;
                    *pcVar12 = cVar1;
                    if (cVar1 == '\0') break;
                    cVar1 = pcVar11[1];
                    pcVar11 = pcVar11 + 2;
                    pcVar12[1] = cVar1;
                    pcVar12 = pcVar12 + 2;
                  } while (cVar1 != '\0');
                  break;
                case 4:
                case 5:
                case 9:
                  *(undefined4 *)pCVar4->data_ptr = *(undefined4 *)piVar9[0x1a];
                  break;
                case 6:
                  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                            ((CKeyFramedModelInstance *)pCVar4->data_ptr,
                             (char *)(piVar9[0x1a] + 0x78));
                  break;
                case 7:
                  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
                            ((CDeformableModelInstance *)pCVar4->data_ptr);
                }
              }
              local_20 = (CDemonActor *)(local_20->actor_name + 1);
              piVar9 = piVar9 + 0x3b;
            } while ((int)local_20 < (int)in_stack_ffffafdc);
          }
          pCStack_14 = pCStack_14 + 1;
          iStack_18 = iStack_18 + 1;
        } while (iStack_18 < CStack_2b24.property_count);
      }
    }
    pcVar5 = *(char **)(in_stack_00000008 + 0x28);
    pCVar7 = pCStack_1c;
    do {
      cVar1 = *pcVar5;
      pCVar7->actor_name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pCVar7->actor_name[1] = cVar1;
      pCVar7 = (CDemonActor *)(pCVar7->actor_name + 2);
    } while (cVar1 != '\0');
    iVar10 = *(int *)(in_stack_00000008 + 0x28);
    (pCStack_1c->location).position.x = *(float *)(iVar10 + 0x20);
    (pCStack_1c->location).position.y = *(float *)(iVar10 + 0x24);
    (pCStack_1c->location).position.z = *(float *)(iVar10 + 0x28);
    (pCStack_1c->location).area_id = *(int *)(iVar10 + 0x2c);
    iVar10 = *(int *)(in_stack_00000008 + 0x28);
    if (&pCStack_1c->orient != (COrientation *)(iVar10 + 0x30)) {
      (pCStack_1c->orient).pitch = *(float *)(iVar10 + 0x30);
      (pCStack_1c->orient).bank = *(float *)(iVar10 + 0x34);
      (pCStack_1c->orient).heading = *(float *)(iVar10 + 0x38);
    }
    (*pCStack_1c->vtable->setup)(pCStack_1c);
    core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
    core_msnedit_cpp_FUN_00538ea0();
    core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_0000000c);
    core_mission_cpp_CDemonMission_FUN_00523b70(in_stack_0000000c);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_0000000c);
    core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(local_624 + 8),0,(uint)in_stack_ffffafdc,in_stack_ffffafe0,
             in_stack_ffffafe4,in_stack_ffffafe8,in_stack_ffffafec);
  return;
}


// Assembly code:
// 0053d8b0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053d8b0
// 0053d8b1: PUSH ESI
// 0053d8b2: PUSH EDI
// 0053d8b3: PUSH EBP
// 0053d8b4: SUB ESP,0x501c
// 0053d8ba: MOV EAX,dword ptr [ESP + 0x5030]
//   XREF to: Stack[0x4] (READ)
// 0053d8c1: CMP dword ptr [EAX + 0x28],0x0
// 0053d8c5: JNZ 0x0053d8d2
//   XREF to: 0053d8d2 (CONDITIONAL_JUMP)
// 0053d8c7: ADD ESP,0x501c
// 0053d8cd: POP EBP
// 0053d8ce: POP EDI
// 0053d8cf: POP ESI
// 0053d8d0: POP EBX
// 0053d8d1: RET
// 0053d8d2: LEA EAX,[ESP + 0x4a08]
//   Label: LAB_0053d8d2
//   XREF to: Stack[-0x624] (DATA)
// 0053d8d9: PUSH EAX
// 0053d8da: XOR ESI,ESI
// 0053d8dc: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053d8e1: MOV ECX,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 0053d8e7: ADD ESP,0x4
// 0053d8ea: TEST ECX,ECX
// 0053d8ec: JLE 0x0053d949
//   XREF to: 0053d949 (CONDITIONAL_JUMP)
// 0053d8ee: XOR EBX,EBX
// 0053d8f0: MOV EAX,dword ptr [EBX + 0x822048]
//   Label: LAB_0053d8f0
//   XREF to: 00822048 (READ)
//   XREF to: 0082204c (READ)
// 0053d8f6: CMP dword ptr [EAX + 0x2c],0x0
// 0053d8fa: JZ 0x0053d93b
//   XREF to: 0053d93b (CONDITIONAL_JUMP)
// 0053d8fc: MOV EAX,dword ptr [ESP + 0x5030]
//   XREF to: Stack[0x4] (READ)
// 0053d903: MOV EBP,dword ptr [EAX + 0x28]
// 0053d906: PUSH EBP
// 0053d907: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 0053d90c: ADD ESP,0x4
// 0053d90f: PUSH EAX
// 0053d910: MOV EAX,dword ptr [EBX + 0x822048]
//   XREF to: 00822048 (READ)
// 0053d916: PUSH EAX
// 0053d917: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053d91c: ADD ESP,0x8
// 0053d91f: TEST EAX,EAX
// 0053d921: JZ 0x0053d93b
//   XREF to: 0053d93b (CONDITIONAL_JUMP)
// 0053d923: MOV EAX,dword ptr [EBX + 0x822048]
//   XREF to: 00822048 (READ)
// 0053d929: INC EAX
// 0053d92a: PUSH EAX
// 0053d92b: LEA EAX,[ESP + 0x4a0c]
//   XREF to: Stack[-0x624] (DATA)
// 0053d932: PUSH EAX
// 0053d933: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053d938: ADD ESP,0x8
// 0053d93b: MOV EDI,dword ptr [0x00822044]
//   Label: LAB_0053d93b
//   XREF to: 00822044 (READ)
// 0053d941: INC ESI
// 0053d942: ADD EBX,0x4
// 0053d945: CMP ESI,EDI
// 0053d947: JL 0x0053d8f0
//   XREF to: 0053d8f0 (CONDITIONAL_JUMP)
// 0053d949: LEA EAX,[ESP + 0x4a08]
//   Label: LAB_0053d949
//   XREF to: Stack[-0x624] (DATA)
// 0053d950: PUSH EAX
// 0053d951: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053d956: ADD ESP,0x4
// 0053d959: MOV EAX,dword ptr [ESP + 0x5030]
//   XREF to: Stack[0x4] (READ)
// 0053d960: MOV EBP,dword ptr [EAX + 0x28]
// 0053d963: PUSH EBP
// 0053d964: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 0053d969: ADD ESP,0x4
// 0053d96c: PUSH EAX
// 0053d96d: MOV EAX,dword ptr [ESP + 0x5034]
//   XREF to: Stack[0x4] (READ)
// 0053d974: MOV EDX,dword ptr [EAX + 0x28]
// 0053d977: PUSH EDX
// 0053d978: PUSH 0x63cd31
//   XREF to: 0063cd31 (DATA)
// 0053d97d: LEA EAX,[ESP + 0x4dbc]
//   XREF to: Stack[-0x27c] (DATA)
// 0053d984: PUSH EAX
// 0053d985: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d98a: ADD ESP,0x10
// 0053d98d: PUSH 0x0
// 0053d98f: PUSH -0x1
// 0053d991: LEA EAX,[ESP + 0x4db8]
//   XREF to: Stack[-0x27c] (DATA)
// 0053d998: PUSH EAX
// 0053d999: LEA EAX,[ESP + 0x4a14]
//   XREF to: Stack[-0x624] (DATA)
// 0053d9a0: PUSH EAX
// 0053d9a1: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053d9a6: ADD ESP,0x10
// 0053d9a9: TEST EAX,EAX
// 0053d9ab: JL 0x0053dbf7
//   XREF to: 0053dbf7 (CONDITIONAL_JUMP)
// 0053d9b1: PUSH EAX
// 0053d9b2: LEA EAX,[ESP + 0x4a0c]
//   XREF to: Stack[-0x624] (DATA)
// 0053d9b9: PUSH EAX
// 0053d9ba: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053d9bf: ADD ESP,0x8
// 0053d9c2: PUSH EAX
// 0053d9c3: PUSH 0x63cd52
//   XREF to: 0063cd52 (DATA)
// 0053d9c8: LEA EAX,[ESP + 0x4fac]
//   XREF to: Stack[-0x88] (DATA)
// 0053d9cf: PUSH EAX
// 0053d9d0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053d9d5: ADD ESP,0xc
// 0053d9d8: LEA EAX,[ESP + 0x4fa4]
//   XREF to: Stack[-0x88] (DATA)
// 0053d9df: PUSH EAX
// 0053d9e0: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 0053d9e5: ADD ESP,0x4
// 0053d9e8: MOV EBX,EAX
// 0053d9ea: PUSH EBX
// 0053d9eb: MOV dword ptr [ESP + 0x5010],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0053d9f2: MOV EAX,dword ptr [EAX + 0x154]
// 0053d9f8: CALL dword ptr [EAX]
// 0053d9fa: ADD ESP,0x4
// 0053d9fd: PUSH 0x63cd56
//   XREF to: 0063cd56 (DATA)
// 0053da02: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053da08: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053da09: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0053da0e: ADD ESP,0x8
// 0053da11: TEST EAX,EAX
// 0053da13: JZ 0x0053db0f
//   XREF to: 0053db0f (CONDITIONAL_JUMP)
// 0053da19: LEA EAX,[ESP + 0x2504]
// 0053da20: PUSH EAX
// 0053da21: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 0053da26: ADD ESP,0x4
// 0053da29: MOV EAX,ESP
// 0053da2b: PUSH EAX
// 0053da2c: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 0053da31: ADD ESP,0x4
// 0053da34: LEA EAX,[ESP + 0x2504]
// 0053da3b: PUSH EAX
// 0053da3c: MOV EDX,dword ptr [EBX + 0x154]
// 0053da42: PUSH EBX
// 0053da43: CALL dword ptr [EDX + 0xd4]
// 0053da49: ADD ESP,0x8
// 0053da4c: MOV EBX,ESP
// 0053da4e: MOV EAX,dword ptr [ESP + 0x5030]
// 0053da55: PUSH EBX
// 0053da56: MOV EAX,dword ptr [EAX + 0x28]
// 0053da59: PUSH EAX
// 0053da5a: MOV EDX,dword ptr [EAX + 0x154]
// 0053da60: CALL dword ptr [EDX + 0xd4]
// 0053da66: ADD ESP,0x8
// 0053da69: XOR EBX,EBX
// 0053da6b: MOV ESI,dword ptr [ESP + 0x2508]
// 0053da72: MOV dword ptr [ESP + 0x5010],EBX
// 0053da79: TEST ESI,ESI
// 0053da7b: JLE 0x0053db0f
//   XREF to: 0053db0f (CONDITIONAL_JUMP)
// 0053da81: LEA EAX,[ESP + 0x250c]
// 0053da88: MOV dword ptr [ESP + 0x5014],EAX
// 0053da8f: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_0053da8f
// 0053da93: XOR ESI,ESI
// 0053da95: MOV EBP,dword ptr [ESP + 0x5014]
// 0053da9c: MOV dword ptr [ESP + 0x5008],ESI
// 0053daa3: TEST EDI,EDI
// 0053daa5: JLE 0x0053dae1
//   XREF to: 0053dae1 (CONDITIONAL_JUMP)
// 0053daa7: LEA EAX,[EBP + 0x4]
// 0053daaa: LEA EBX,[ESP + 0x8]
// 0053daae: MOV dword ptr [ESP + 0x5018],EAX
// 0053dab5: MOV EAX,dword ptr [EBX]
//   Label: LAB_0053dab5
// 0053dab7: MOV ECX,dword ptr [EBP]
// 0053daba: MOV ESI,EBX
// 0053dabc: CMP EAX,ECX
// 0053dabe: JZ 0x0053dc14
//   XREF to: 0053dc14 (CONDITIONAL_JUMP)
// 0053dac4: MOV EAX,dword ptr [ESP + 0x5008]
//   Label: caseD_11
// 0053dacb: MOV EDX,dword ptr [ESP + 0x4]
// 0053dacf: INC EAX
// 0053dad0: ADD EBX,0xec
// 0053dad6: MOV dword ptr [ESP + 0x5008],EAX
// 0053dadd: CMP EAX,EDX
// 0053dadf: JL 0x0053dab5
//   XREF to: 0053dab5 (CONDITIONAL_JUMP)
// 0053dae1: MOV EDX,dword ptr [ESP + 0x5014]
//   Label: LAB_0053dae1
// 0053dae8: MOV ECX,dword ptr [ESP + 0x5010]
// 0053daef: MOV EBX,dword ptr [ESP + 0x2508]
// 0053daf6: ADD EDX,0xec
// 0053dafc: INC ECX
// 0053dafd: MOV dword ptr [ESP + 0x5014],EDX
// 0053db04: MOV dword ptr [ESP + 0x5010],ECX
// 0053db0b: CMP ECX,EBX
// 0053db0d: JL 0x0053da8f
//   XREF to: 0053da8f (CONDITIONAL_JUMP)
// 0053db0f: MOV ESI,dword ptr [ESP + 0x5030]
//   Label: LAB_0053db0f
// 0053db16: MOV EDI,dword ptr [ESP + 0x500c]
// 0053db1d: MOV ESI,dword ptr [ESI + 0x28]
// 0053db20: PUSH EDI
// 0053db21: MOV AL,byte ptr [ESI]
//   Label: LAB_0053db21
// 0053db23: MOV byte ptr [EDI],AL
// 0053db25: CMP AL,0x0
// 0053db27: JZ 0x0053db39
//   XREF to: 0053db39 (CONDITIONAL_JUMP)
// 0053db29: MOV AL,byte ptr [ESI + 0x1]
// 0053db2c: ADD ESI,0x2
// 0053db2f: MOV byte ptr [EDI + 0x1],AL
// 0053db32: ADD EDI,0x2
// 0053db35: CMP AL,0x0
// 0053db37: JNZ 0x0053db21
//   XREF to: 0053db21 (CONDITIONAL_JUMP)
// 0053db39: POP EDI
//   Label: LAB_0053db39
// 0053db3a: MOV EAX,dword ptr [ESP + 0x5030]
// 0053db41: MOV EAX,dword ptr [EAX + 0x28]
// 0053db44: MOV EDX,dword ptr [EAX + 0x20]
// 0053db47: MOV dword ptr [EDI + 0x20],EDX
// 0053db4a: MOV EDX,dword ptr [EAX + 0x24]
// 0053db4d: MOV dword ptr [EDI + 0x24],EDX
// 0053db50: MOV EDX,dword ptr [EAX + 0x28]
// 0053db53: MOV dword ptr [EDI + 0x28],EDX
// 0053db56: MOV EAX,dword ptr [EAX + 0x2c]
// 0053db59: MOV EDX,dword ptr [ESP + 0x5030]
// 0053db60: MOV dword ptr [EDI + 0x2c],EAX
// 0053db63: MOV EDX,dword ptr [EDX + 0x28]
// 0053db66: LEA EAX,[EDI + 0x30]
// 0053db69: ADD EDX,0x30
// 0053db6c: CMP EAX,EDX
// 0053db6e: JZ 0x0053db80
//   XREF to: 0053db80 (CONDITIONAL_JUMP)
// 0053db70: MOV ECX,dword ptr [EDX]
// 0053db72: MOV dword ptr [EAX],ECX
// 0053db74: MOV ECX,dword ptr [EDX + 0x4]
// 0053db77: MOV dword ptr [EAX + 0x4],ECX
// 0053db7a: MOV ECX,dword ptr [EDX + 0x8]
// 0053db7d: MOV dword ptr [EAX + 0x8],ECX
// 0053db80: MOV ECX,dword ptr [ESP + 0x500c]
//   Label: LAB_0053db80
// 0053db87: MOV EAX,dword ptr [ESP + 0x500c]
// 0053db8e: PUSH ECX
// 0053db8f: MOV EAX,dword ptr [EAX + 0x154]
// 0053db95: CALL dword ptr [EAX]
// 0053db97: ADD ESP,0x4
// 0053db9a: PUSH 0x0
// 0053db9c: MOV ESI,dword ptr [ESP + 0x5034]
// 0053dba3: MOV EBX,dword ptr [ESP + 0x5034]
// 0053dbaa: PUSH ESI
// 0053dbab: MOV EBX,dword ptr [EBX + 0x28]
// 0053dbae: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053dbb3: ADD ESP,0x8
// 0053dbb6: PUSH EBX
// 0053dbb7: PUSH ESI
// 0053dbb8: CALL core_msnedit.cpp_FUN_00538ea0
//   XREF to: 00538ea0 (UNCONDITIONAL_CALL)
// 0053dbbd: ADD ESP,0x8
// 0053dbc0: PUSH 0x1
// 0053dbc2: PUSH EBX
// 0053dbc3: PUSH ESI
// 0053dbc4: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 0053dbc9: ADD ESP,0xc
// 0053dbcc: MOV EAX,dword ptr [ESP + 0x500c]
// 0053dbd3: PUSH EAX
// 0053dbd4: PUSH ESI
// 0053dbd5: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0053dbda: ADD ESP,0x8
// 0053dbdd: PUSH ESI
// 0053dbde: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053dbe3: ADD ESP,0x4
// 0053dbe6: MOV EBX,dword ptr [ESP + 0x500c]
// 0053dbed: PUSH EBX
// 0053dbee: PUSH ESI
// 0053dbef: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053dbf4: ADD ESP,0x8
// 0053dbf7: PUSH 0x0
//   Label: LAB_0053dbf7
// 0053dbf9: LEA EAX,[ESP + 0x4a0c]
//   XREF to: Stack[-0x624] (DATA)
// 0053dc00: PUSH EAX
// 0053dc01: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053dc06: ADD ESP,0x8
// 0053dc09: ADD ESP,0x501c
// 0053dc0f: POP EBP
// 0053dc10: POP EDI
// 0053dc11: POP ESI
// 0053dc12: POP EBX
// 0053dc13: RET
// 0053dc14: MOV EDI,dword ptr [ESP + 0x5018]
//   Label: LAB_0053dc14
// 0053dc1b: PUSH EDI
// 0053dc1c: LEA EAX,[EBX + 0x4]
// 0053dc1f: PUSH EAX
// 0053dc20: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053dc25: ADD ESP,0x8
// 0053dc28: TEST EAX,EAX
// 0053dc2a: JNZ 0x0053dac4
//   XREF to: 0053dac4 (CONDITIONAL_JUMP)
// 0053dc30: MOV EAX,dword ptr [EBX]
// 0053dc32: CMP EAX,0x11
// 0053dc35: JA 0x0053dac4
//   XREF to: 0053dac4 (CONDITIONAL_JUMP)
// 0053dc3b: JMP dword ptr [EAX*0x4 + 0x53d85c]
//   Label: switchD
//   XREF to: 0053dac4 (COMPUTED_JUMP)
//   XREF to: 0053dc42 (COMPUTED_JUMP)
//   XREF to: 0053dc51 (COMPUTED_JUMP)
//   XREF to: 0053dc60 (COMPUTED_JUMP)
//   XREF to: 0053dc83 (COMPUTED_JUMP)
//   XREF to: 0053dc92 (COMPUTED_JUMP)
//   XREF to: 0053dcb7 (COMPUTED_JUMP)
//   XREF to: 0053dccf (COMPUTED_JUMP)
//   XREF to: 0053d85c (DATA)
// 0053dc42: MOV EAX,dword ptr [ESI + 0x68]
//   Label: caseD_f
// 0053dc45: MOV EDX,dword ptr [EBP + 0x68]
// 0053dc48: MOV EAX,dword ptr [EAX]
// 0053dc4a: MOV dword ptr [EDX],EAX
// 0053dc4c: JMP 0x0053dac4
//   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)
// 0053dc51: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_1
// 0053dc54: MOV EDX,dword ptr [EBP + 0x68]
// 0053dc57: MOV ECX,dword ptr [EAX]
// 0053dc59: MOV dword ptr [EDX],ECX
// 0053dc5b: JMP 0x0053dac4
//   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)
// 0053dc60: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_2
// 0053dc63: MOV EDX,dword ptr [EBP + 0x68]
// 0053dc66: CMP EDX,EAX
// 0053dc68: JZ 0x0053dac4
//   XREF to: 0053dac4 (CONDITIONAL_JUMP)
// 0053dc6e: MOV ECX,dword ptr [EAX]
// 0053dc70: MOV dword ptr [EDX],ECX
// 0053dc72: MOV ECX,dword ptr [EAX + 0x4]
// 0053dc75: MOV dword ptr [EDX + 0x4],ECX
// 0053dc78: MOV ECX,dword ptr [EAX + 0x8]
// 0053dc7b: MOV dword ptr [EDX + 0x8],ECX
// 0053dc7e: JMP 0x0053dac4
//   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)
// 0053dc83: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_9
// 0053dc86: MOV EDX,dword ptr [EBP + 0x68]
// 0053dc89: MOV EAX,dword ptr [EAX]
// 0053dc8b: MOV dword ptr [EDX],EAX
// 0053dc8d: JMP 0x0053dac4
//   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)
// 0053dc92: MOV ESI,dword ptr [ESI + 0x68]
//   Label: caseD_c
// 0053dc95: MOV EDI,dword ptr [EBP + 0x68]
// 0053dc98: PUSH EDI
// 0053dc99: MOV AL,byte ptr [ESI]
//   Label: LAB_0053dc99
// 0053dc9b: MOV byte ptr [EDI],AL
// 0053dc9d: CMP AL,0x0
// 0053dc9f: JZ 0x0053dcb1
//   XREF to: 0053dcb1 (CONDITIONAL_JUMP)
// 0053dca1: MOV AL,byte ptr [ESI + 0x1]
// 0053dca4: ADD ESI,0x2
// 0053dca7: MOV byte ptr [EDI + 0x1],AL
// 0053dcaa: ADD EDI,0x2
// 0053dcad: CMP AL,0x0
// 0053dcaf: JNZ 0x0053dc99
//   XREF to: 0053dc99 (CONDITIONAL_JUMP)
// 0053dcb1: POP EDI
//   Label: LAB_0053dcb1
// 0053dcb2: JMP 0x0053dac4
//   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)
// 0053dcb7: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_6
// 0053dcba: ADD EAX,0x78
// 0053dcbd: PUSH EAX
// 0053dcbe: MOV EDX,dword ptr [EBP + 0x68]
// 0053dcc1: PUSH EDX
// 0053dcc2: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0053dcc7: ADD ESP,0x8
// 0053dcca: JMP 0x0053dac4
//   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)
// 0053dccf: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_7
// 0053dcd2: ADD EAX,0x2260
// 0053dcd7: PUSH EAX
// 0053dcd8: MOV EAX,dword ptr [EBP + 0x68]
// 0053dcdb: PUSH EAX
// 0053dcdc: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0053dce1: ADD ESP,0x8
// 0053dce4: JMP 0x0053dac4
//   XREF to: 0053dac4 (UNCONDITIONAL_JUMP)
