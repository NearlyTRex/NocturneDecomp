// Name: core_msnedit.cpp_FUN_0053b510
// Address: 0053b510
// Address Range: [[0053b510, 0053b9e7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053b510()
// Cross-references:
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053afd2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_0063b6e0
//   TerminatedCString s_true_0063b6e5
//   TerminatedCString s_s_Referenced_by_name_0063c654
//   TerminatedCString s_s_Checks_for_s_in_s_0063c66a
//   TerminatedCString s_No_actors_relevent_to_th_0063c685
//   TerminatedCString s_Actors_relevent_to_s_0063c6b8
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_actor.cpp_FUN_0040e130
//   core_mission.cpp_CDemonMission_FUN_00523cc0
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053b510(undefined4 param_1, undefined4 param_2) */

void core_msnedit_cpp_FUN_0053b510(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  BADSPACEBASE *in_ESP;
  char *unaff_ESI;
  CDemonMission *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CDemonMission *in_stack_00000018;
  CDemonMission *in_stack_ffffd460;
  char *in_stack_ffffd464;
  uint in_stack_ffffd468;
  uint in_stack_ffffd46c;
  uint in_stack_ffffd470;
  undefined4 auStack_2b38 [2341];
  undefined1 auStack_6a4 [8];
  undefined1 auStack_69c [936];
  undefined1 auStack_2f4 [4];
  char acStack_2f0 [4];
  char acStack_2ec [284];
  char acStack_1d0 [8];
  char acStack_1c8 [180];
  char acStack_114 [4];
  char local_110 [4];
  char acStack_10c [204];
  undefined1 auStack_40 [8];
  undefined1 local_38 [12];
  undefined1 auStack_2c [12];
  CDemonActor *pCStack_20;
  undefined1 *local_18;
  int index;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_38);
  pcVar8 = *(char **)(in_stack_0000000c + 0x68);
  cVar2 = *pcVar8;
  while (cVar2 != '\0') {
    cVar2 = *pcVar8;
    if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0U) == 0) && (cVar2 != '-')) &&
       (cVar2 != '_')) {
      pcVar8 = pcVar8 + 1;
    }
    else {
      pcVar6 = acStack_10c;
      do {
        do {
          *pcVar6 = *pcVar8;
          pbVar1 = (byte *)(pcVar8 + 1);
          auStack_2c._8_4_ = ZEXT14(*pbVar1);
          pcVar8 = pcVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0U) != 0);
      } while (((char **)auStack_2c._8_4_ == (char **)0x2d) ||
              ((char **)auStack_2c._8_4_ == (char **)0x5f));
      *pcVar6 = '\0';
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_10c,"none");
      if ((iVar3 != 0) &&
         (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_114,"true"), iVar3 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_38 + 4),local_110);
      }
    }
    cVar2 = *pcVar8;
  }
  core_mission_cpp_CDemonMission_FUN_00523cc0(in_stack_00000008);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_6a4);
  iVar3 = *(int *)(in_stack_00000010 + 0x548);
  do {
    if (iVar3 == 0) {
      if ((int)auStack_6a4._4_4_ < 1) {
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"No actors relevent to the operation of this event.");
      }
      else {
        shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)(auStack_6a4 + 4));
        crt_stdio_c_sprintf_FUN_005fdbd0(auStack_69c + 0x3a0,"Actors relevent to \"%s\"");
        pcVar8 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                   ((CPickList *)(auStack_6a4 + 4),auStack_69c + 0x3a4,-1,0);
        if (-1 < (int)pcVar8) {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    ((CStrList *)auStack_69c,(int)auStack_2f4,pcVar8,0);
          in_stack_ffffd464 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000018);
          core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
          in_stack_ffffd460 = in_stack_00000018;
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_69c,0,(uint)in_stack_ffffd460,(uint)in_stack_ffffd464,
                 in_stack_ffffd468,in_stack_ffffd46c,in_stack_ffffd470);
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                ((CStrList *)(auStack_2c + 8),0,(uint)in_stack_ffffd464);
      return;
    }
    core_actor_cpp_FUN_0040e130();
    (*pCStack_20->vtable->getPropertyList)(pCStack_20,(CActorPropertyList *)&stack0xffffd448);
    index = 0;
    if (0 < (int)auStack_2c._0_4_) {
      do {
        pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_2c,index);
        iVar4 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,unaff_ESI);
        if (iVar4 == 0) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2f0,"%s\tReferenced by name");
          in_stack_ffffd464 = acStack_2ec;
          in_stack_ffffd460 = (CDemonMission *)(auStack_69c + 8);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)in_stack_ffffd460,in_stack_ffffd464);
        }
        unaff_ESI = (char *)0x0;
        if (0 < (int)in_stack_ffffd460) {
          local_18 = &stack0xffffd468;
          do {
            if (*(int *)(&stack0xffffd464 + (int)unaff_ESI * 0xec) == 0xb) {
              pcVar6 = auStack_40 + 4;
              shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)pcVar6);
              pcVar9 = (char *)auStack_2b38[(int)unaff_ESI * 0x3b];
              cVar2 = *pcVar9;
              while (cVar2 != '\0') {
                cVar2 = *pcVar9;
                if ((((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 0xe0U) == 0) &&
                    (cVar2 != '-')) && (cVar2 != '_')) {
                  pcVar9 = pcVar9 + 1;
                }
                else {
                  pcVar7 = acStack_1d0;
                  do {
                    do {
                      *pcVar7 = *pcVar9;
                      pbVar1 = (byte *)(pcVar9 + 1);
                      local_18 = (undefined1 *)(uint)*pbVar1;
                      pcVar9 = pcVar9 + 1;
                      pcVar7 = pcVar7 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*pbVar1 + 1)] & 0xe0U) != 0);
                  } while ((local_18 == (undefined1 *)0x2d) || (local_18 == (undefined1 *)0x5f));
                  *pcVar7 = '\0';
                  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_1d0,"none");
                  if (iVar4 != 0) {
                    pcVar6 = "true";
                    iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_1d0 + 4,"true");
                    if (iVar4 != 0) {
                      pcVar6 = (char *)auStack_40;
                      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                                ((CStrList *)auStack_40,acStack_1c8);
                    }
                  }
                }
                cVar2 = *pcVar9;
              }
              iVar4 = 0;
              if (0 < (int)auStack_40._0_4_) {
                do {
                  pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                     ((CStrList *)auStack_40,iVar4);
                  iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar8,pcVar6);
                  if (iVar5 == 0) {
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (auStack_69c + 0x3a0,"%s\tChecks for \"%s\" in \"%s\"");
                    pcVar6 = auStack_69c + 0x3a4;
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)(auStack_6a4 + 4),pcVar6);
                    break;
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < (int)auStack_40._0_4_);
              }
              shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)auStack_40,0,(uint)pcVar6);
            }
            local_18 = local_18 + 0xec;
            unaff_ESI = unaff_ESI + 1;
          } while ((int)unaff_ESI < (int)in_stack_ffffd460);
        }
        index = index + 1;
      } while (index < (int)auStack_2c._0_4_);
    }
    iVar3 = *(int *)(iVar3 + 0x14c);
  } while( true );
}


// Assembly code:
// 0053b510: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053b510
// 0053b511: PUSH ESI
// 0053b512: PUSH EDI
// 0053b513: PUSH EBP
// 0053b514: SUB ESP,0x2ba0
// 0053b51a: LEA EAX,[ESP + 0x2b78]
//   XREF to: Stack[-0x38] (DATA)
// 0053b521: PUSH EAX
// 0053b522: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 0053b527: ADD ESP,0x4
// 0053b52a: MOV EBX,dword ptr [ESP + 0x2bb8]
//   XREF to: Stack[0x8] (READ)
// 0053b531: MOV EBX,dword ptr [EBX + 0x68]
// 0053b534: MOV AH,byte ptr [EBX]
// 0053b536: LEA EDI,[ESP + 0x2b78]
//   XREF to: Stack[-0x38] (DATA)
// 0053b53d: TEST AH,AH
// 0053b53f: JZ 0x0053b5bf
//   XREF to: 0053b5bf (CONDITIONAL_JUMP)
// 0053b545: XOR EAX,EAX
//   Label: LAB_0053b545
// 0053b547: MOV AL,byte ptr [EBX]
// 0053b549: MOV EDX,EAX
// 0053b54b: INC DL
// 0053b54d: AND EDX,0xff
// 0053b553: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0053b55a: JZ 0x0053b807
//   XREF to: 0053b807 (CONDITIONAL_JUMP)
// 0053b560: LEA EDX,[ESP + 0x2aa0]
//   Label: LAB_0053b560
//   XREF to: Stack[-0x110] (DATA)
// 0053b567: MOV AL,byte ptr [EBX]
//   Label: LAB_0053b567
// 0053b569: MOV byte ptr [EDX],AL
//   XREF to: Stack[-0x110] (DATA)
// 0053b56b: XOR EAX,EAX
// 0053b56d: MOV AL,byte ptr [EBX + 0x1]
// 0053b570: MOV dword ptr [ESP + 0x2b88],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0053b577: MOV CL,byte ptr [ESP + 0x2b88]
//   XREF to: Stack[-0x28] (READ)
// 0053b57e: INC CL
// 0053b580: MOVZX ESI,CL
// 0053b583: INC EBX
// 0053b584: MOV CH,byte ptr [ESI + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 0053b58a: INC EDX
// 0053b58b: TEST CH,0xe0
// 0053b58e: JNZ 0x0053b567
//   XREF to: 0053b567 (CONDITIONAL_JUMP)
// 0053b590: CMP EAX,0x2d
// 0053b593: JZ 0x0053b567
//   XREF to: 0053b567 (CONDITIONAL_JUMP)
// 0053b595: CMP EAX,0x5f
// 0053b598: JZ 0x0053b567
//   XREF to: 0053b567 (CONDITIONAL_JUMP)
// 0053b59a: PUSH 0x63b6e0
//   XREF to: 0063b6e0 (DATA)
// 0053b59f: LEA EAX,[ESP + 0x2aa4]
//   XREF to: Stack[-0x110] (DATA)
// 0053b5a6: PUSH EAX
// 0053b5a7: MOV byte ptr [EDX],0x0
//   XREF to: Stack[-0x10f] (DATA)
// 0053b5aa: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b5af: ADD ESP,0x8
// 0053b5b2: TEST EAX,EAX
// 0053b5b4: JNZ 0x0053b81f
//   XREF to: 0053b81f (CONDITIONAL_JUMP)
// 0053b5ba: CMP byte ptr [EBX],0x0
//   Label: LAB_0053b5ba
// 0053b5bd: JNZ 0x0053b545
//   XREF to: 0053b545 (CONDITIONAL_JUMP)
// 0053b5bf: MOV EDX,dword ptr [ESP + 0x2bb4]
//   Label: LAB_0053b5bf
//   XREF to: Stack[0x4] (READ)
// 0053b5c6: PUSH EDX
// 0053b5c7: CALL core_mission.cpp_CDemonMission_FUN_00523cc0
//   XREF to: 00523cc0 (UNCONDITIONAL_CALL)
// 0053b5cc: ADD ESP,0x4
// 0053b5cf: LEA EAX,[ESP + 0x2504]
//   XREF to: Stack[-0x6ac] (DATA)
// 0053b5d6: PUSH EAX
// 0053b5d7: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053b5dc: ADD ESP,0x4
// 0053b5df: MOV EAX,dword ptr [ESP + 0x2bb4]
//   XREF to: Stack[0x4] (READ)
// 0053b5e6: MOV EAX,dword ptr [EAX + 0x548]
// 0053b5ec: MOV dword ptr [ESP + 0x2b98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0053b5f3: TEST EAX,EAX
// 0053b5f5: JZ 0x0053b73d
//   XREF to: 0053b73d (CONDITIONAL_JUMP)
// 0053b5fb: MOV EAX,ESP
//   Label: LAB_0053b5fb
// 0053b5fd: PUSH EAX
// 0053b5fe: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 0053b603: ADD ESP,0x4
// 0053b606: MOV EDX,ESP
// 0053b608: MOV EAX,dword ptr [ESP + 0x2b98]
//   XREF to: Stack[-0x18] (READ)
// 0053b60f: PUSH EDX
// 0053b610: MOV EDX,dword ptr [ESP + 0x2b9c]
//   XREF to: Stack[-0x18] (READ)
// 0053b617: MOV EAX,dword ptr [EAX + 0x154]
// 0053b61d: PUSH EDX
// 0053b61e: CALL dword ptr [EAX + 0xd4]
// 0053b624: ADD ESP,0x8
// 0053b627: XOR ECX,ECX
// 0053b629: MOV EBX,dword ptr [ESP + 0x2b78]
// 0053b630: MOV dword ptr [ESP + 0x2b94],ECX
// 0053b637: TEST EBX,EBX
// 0053b639: JLE 0x0053b721
//   XREF to: 0053b721 (CONDITIONAL_JUMP)
// 0053b63f: MOV EBP,dword ptr [ESP + 0x2b94]
//   Label: LAB_0053b63f
// 0053b646: PUSH EBP
// 0053b647: LEA EAX,[ESP + 0x2b7c]
// 0053b64e: PUSH EAX
// 0053b64f: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053b654: ADD ESP,0x8
// 0053b657: MOV EDX,dword ptr [ESP + 0x2b98]
// 0053b65e: PUSH EDX
// 0053b65f: PUSH EAX
// 0053b660: MOV EDI,EAX
// 0053b662: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b667: ADD ESP,0x8
// 0053b66a: TEST EAX,EAX
// 0053b66c: JNZ 0x0053b6a3
//   XREF to: 0053b6a3 (CONDITIONAL_JUMP)
// 0053b66e: MOV ECX,dword ptr [ESP + 0x2b98]
// 0053b675: PUSH ECX
// 0053b676: PUSH 0x63c654
//   XREF to: 0063c654 (DATA)
// 0053b67b: LEA EAX,[ESP + 0x28b4]
// 0053b682: PUSH EAX
// 0053b683: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053b688: ADD ESP,0xc
// 0053b68b: LEA EAX,[ESP + 0x28ac]
// 0053b692: PUSH EAX
// 0053b693: LEA EAX,[ESP + 0x2508]
// 0053b69a: PUSH EAX
// 0053b69b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b6a0: ADD ESP,0x8
// 0053b6a3: XOR EBX,EBX
//   Label: LAB_0053b6a3
// 0053b6a5: MOV ESI,dword ptr [ESP + 0x4]
// 0053b6a9: MOV dword ptr [ESP + 0x2b9c],EBX
// 0053b6b0: TEST ESI,ESI
// 0053b6b2: JLE 0x0053b703
//   XREF to: 0053b703 (CONDITIONAL_JUMP)
// 0053b6b4: LEA EAX,[ESP + 0x8]
// 0053b6b8: ADD EAX,0x4
// 0053b6bb: MOV dword ptr [ESP + 0x2b8c],EAX
// 0053b6c2: IMUL EBX,dword ptr [ESP + 0x2b9c],0xec
//   Label: LAB_0053b6c2
// 0053b6cd: CMP dword ptr [ESP + EBX*0x1 + 0x8],0xb
// 0053b6d2: JZ 0x0053b852
//   XREF to: 0053b852 (CONDITIONAL_JUMP)
// 0053b6d8: MOV EBP,dword ptr [ESP + 0x2b8c]
//   Label: LAB_0053b6d8
// 0053b6df: MOV EAX,dword ptr [ESP + 0x2b9c]
// 0053b6e6: MOV EDX,dword ptr [ESP + 0x4]
// 0053b6ea: ADD EBP,0xec
// 0053b6f0: INC EAX
// 0053b6f1: MOV dword ptr [ESP + 0x2b8c],EBP
// 0053b6f8: MOV dword ptr [ESP + 0x2b9c],EAX
// 0053b6ff: CMP EAX,EDX
// 0053b701: JL 0x0053b6c2
//   XREF to: 0053b6c2 (CONDITIONAL_JUMP)
// 0053b703: MOV ESI,dword ptr [ESP + 0x2b94]
//   Label: LAB_0053b703
// 0053b70a: INC ESI
// 0053b70b: MOV EDI,dword ptr [ESP + 0x2b78]
// 0053b712: MOV dword ptr [ESP + 0x2b94],ESI
// 0053b719: CMP ESI,EDI
// 0053b71b: JL 0x0053b63f
//   XREF to: 0053b63f (CONDITIONAL_JUMP)
// 0053b721: MOV EAX,dword ptr [ESP + 0x2b98]
//   Label: LAB_0053b721
// 0053b728: MOV EAX,dword ptr [EAX + 0x14c]
// 0053b72e: MOV dword ptr [ESP + 0x2b98],EAX
// 0053b735: TEST EAX,EAX
// 0053b737: JNZ 0x0053b5fb
//   XREF to: 0053b5fb (CONDITIONAL_JUMP)
// 0053b73d: CMP dword ptr [ESP + 0x2504],0x1
//   Label: LAB_0053b73d
//   XREF to: Stack[-0x6ac] (READ)
// 0053b745: JL 0x0053b9d3
//   XREF to: 0053b9d3 (CONDITIONAL_JUMP)
// 0053b74b: LEA EAX,[ESP + 0x2504]
//   XREF to: Stack[-0x6ac] (DATA)
// 0053b752: PUSH EAX
// 0053b753: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053b758: ADD ESP,0x4
// 0053b75b: MOV EAX,dword ptr [ESP + 0x2bb8]
// 0053b762: ADD EAX,0x4
// 0053b765: PUSH EAX
// 0053b766: PUSH 0x63c6b8
//   XREF to: 0063c6b8 (DATA)
// 0053b76b: LEA EAX,[ESP + 0x28b4]
// 0053b772: PUSH EAX
// 0053b773: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053b778: ADD ESP,0xc
// 0053b77b: PUSH 0x0
// 0053b77d: PUSH -0x1
// 0053b77f: LEA EAX,[ESP + 0x28b4]
// 0053b786: PUSH EAX
// 0053b787: LEA EAX,[ESP + 0x2510]
// 0053b78e: PUSH EAX
// 0053b78f: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053b794: ADD ESP,0x10
// 0053b797: TEST EAX,EAX
// 0053b799: JL 0x0053b7d8
//   XREF to: 0053b7d8 (CONDITIONAL_JUMP)
// 0053b79b: PUSH 0x0
// 0053b79d: PUSH EAX
// 0053b79e: LEA EAX,[ESP + 0x28b4]
// 0053b7a5: PUSH EAX
// 0053b7a6: LEA EAX,[ESP + 0x2510]
// 0053b7ad: PUSH EAX
// 0053b7ae: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0053b7b3: ADD ESP,0x10
// 0053b7b6: LEA EAX,[ESP + 0x28ac]
// 0053b7bd: PUSH EAX
// 0053b7be: MOV EDI,dword ptr [ESP + 0x2bb8]
// 0053b7c5: PUSH EDI
// 0053b7c6: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053b7cb: ADD ESP,0x8
// 0053b7ce: PUSH EAX
// 0053b7cf: PUSH EDI
// 0053b7d0: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053b7d5: ADD ESP,0x8
//   Label: LAB_0053b7d5
// 0053b7d8: PUSH 0x0
//   Label: LAB_0053b7d8
// 0053b7da: LEA EAX,[ESP + 0x2508]
// 0053b7e1: PUSH EAX
// 0053b7e2: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053b7e7: ADD ESP,0x8
// 0053b7ea: PUSH 0x0
// 0053b7ec: LEA EAX,[ESP + 0x2b7c]
// 0053b7f3: PUSH EAX
// 0053b7f4: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0053b7f9: ADD ESP,0x8
// 0053b7fc: ADD ESP,0x2ba0
// 0053b802: POP EBP
// 0053b803: POP EDI
// 0053b804: POP ESI
// 0053b805: POP EBX
// 0053b806: RET
// 0053b807: CMP EAX,0x2d
//   Label: LAB_0053b807
// 0053b80a: JZ 0x0053b560
//   XREF to: 0053b560 (CONDITIONAL_JUMP)
// 0053b810: CMP EAX,0x5f
// 0053b813: JZ 0x0053b560
//   XREF to: 0053b560 (CONDITIONAL_JUMP)
// 0053b819: INC EBX
// 0053b81a: JMP 0x0053b5ba
//   XREF to: 0053b5ba (UNCONDITIONAL_JUMP)
// 0053b81f: PUSH 0x63b6e5
//   Label: LAB_0053b81f
//   XREF to: 0063b6e5 (DATA)
// 0053b824: LEA EAX,[ESP + 0x2aa4]
//   XREF to: Stack[-0x110] (DATA)
// 0053b82b: PUSH EAX
// 0053b82c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b831: ADD ESP,0x8
// 0053b834: TEST EAX,EAX
// 0053b836: JZ 0x0053b5ba
//   XREF to: 0053b5ba (CONDITIONAL_JUMP)
// 0053b83c: LEA EAX,[ESP + 0x2aa0]
//   XREF to: Stack[-0x110] (DATA)
// 0053b843: PUSH EAX
// 0053b844: PUSH EDI
// 0053b845: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b84a: ADD ESP,0x8
// 0053b84d: JMP 0x0053b5ba
//   XREF to: 0053b5ba (UNCONDITIONAL_JUMP)
// 0053b852: LEA EAX,[ESP + 0x2b68]
//   Label: LAB_0053b852
// 0053b859: PUSH EAX
// 0053b85a: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 0053b85f: ADD ESP,0x4
// 0053b862: MOV EBX,dword ptr [ESP + EBX*0x1 + 0x70]
// 0053b866: MOV AL,byte ptr [EBX]
// 0053b868: LEA EBP,[ESP + 0x2b68]
// 0053b86f: TEST AL,AL
// 0053b871: JZ 0x0053b8f1
//   XREF to: 0053b8f1 (CONDITIONAL_JUMP)
// 0053b877: XOR EAX,EAX
//   Label: LAB_0053b877
// 0053b879: MOV AL,byte ptr [EBX]
// 0053b87b: MOV EDX,EAX
// 0053b87d: INC DL
// 0053b87f: AND EDX,0xff
// 0053b885: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0053b88c: JZ 0x0053b976
//   XREF to: 0053b976 (CONDITIONAL_JUMP)
// 0053b892: LEA EDX,[ESP + 0x29d8]
//   Label: LAB_0053b892
// 0053b899: MOV AL,byte ptr [EBX]
//   Label: LAB_0053b899
// 0053b89b: MOV byte ptr [EDX],AL
// 0053b89d: XOR EAX,EAX
// 0053b89f: MOV AL,byte ptr [EBX + 0x1]
// 0053b8a2: MOV dword ptr [ESP + 0x2b90],EAX
// 0053b8a9: MOV CL,byte ptr [ESP + 0x2b90]
// 0053b8b0: INC CL
// 0053b8b2: MOVZX ESI,CL
// 0053b8b5: INC EBX
// 0053b8b6: MOV CH,byte ptr [ESI + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 0053b8bc: INC EDX
// 0053b8bd: TEST CH,0xe0
// 0053b8c0: JNZ 0x0053b899
//   XREF to: 0053b899 (CONDITIONAL_JUMP)
// 0053b8c2: CMP EAX,0x2d
// 0053b8c5: JZ 0x0053b899
//   XREF to: 0053b899 (CONDITIONAL_JUMP)
// 0053b8c7: CMP EAX,0x5f
// 0053b8ca: JZ 0x0053b899
//   XREF to: 0053b899 (CONDITIONAL_JUMP)
// 0053b8cc: PUSH 0x63b6e0
//   XREF to: 0063b6e0 (DATA)
// 0053b8d1: LEA EAX,[ESP + 0x29dc]
// 0053b8d8: PUSH EAX
// 0053b8d9: MOV byte ptr [EDX],0x0
// 0053b8dc: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b8e1: ADD ESP,0x8
// 0053b8e4: TEST EAX,EAX
// 0053b8e6: JNZ 0x0053b98e
//   XREF to: 0053b98e (CONDITIONAL_JUMP)
// 0053b8ec: CMP byte ptr [EBX],0x0
//   Label: LAB_0053b8ec
// 0053b8ef: JNZ 0x0053b877
//   XREF to: 0053b877 (CONDITIONAL_JUMP)
// 0053b8f1: MOV EBP,dword ptr [ESP + 0x2b68]
//   Label: LAB_0053b8f1
// 0053b8f8: XOR EBX,EBX
// 0053b8fa: TEST EBP,EBP
// 0053b8fc: JLE 0x0053b95f
//   XREF to: 0053b95f (CONDITIONAL_JUMP)
// 0053b8fe: PUSH EBX
//   Label: LAB_0053b8fe
// 0053b8ff: LEA EAX,[ESP + 0x2b6c]
// 0053b906: PUSH EAX
// 0053b907: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053b90c: ADD ESP,0x8
// 0053b90f: PUSH EAX
// 0053b910: PUSH EDI
// 0053b911: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b916: ADD ESP,0x8
// 0053b919: TEST EAX,EAX
// 0053b91b: JNZ 0x0053b9c1
//   XREF to: 0053b9c1 (CONDITIONAL_JUMP)
// 0053b921: MOV EDX,dword ptr [ESP + 0x2b8c]
// 0053b928: PUSH EDX
// 0053b929: PUSH EDI
// 0053b92a: MOV ECX,dword ptr [ESP + 0x2ba0]
// 0053b931: PUSH ECX
// 0053b932: PUSH 0x63c66a
//   XREF to: 0063c66a (DATA)
// 0053b937: LEA EAX,[ESP + 0x28bc]
// 0053b93e: PUSH EAX
// 0053b93f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053b944: ADD ESP,0x14
// 0053b947: LEA EAX,[ESP + 0x28ac]
// 0053b94e: PUSH EAX
// 0053b94f: LEA EAX,[ESP + 0x2508]
// 0053b956: PUSH EAX
// 0053b957: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b95c: ADD ESP,0x8
// 0053b95f: PUSH 0x0
//   Label: LAB_0053b95f
// 0053b961: LEA EAX,[ESP + 0x2b6c]
// 0053b968: PUSH EAX
// 0053b969: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0053b96e: ADD ESP,0x8
// 0053b971: JMP 0x0053b6d8
//   XREF to: 0053b6d8 (UNCONDITIONAL_JUMP)
// 0053b976: CMP EAX,0x2d
//   Label: LAB_0053b976
// 0053b979: JZ 0x0053b892
//   XREF to: 0053b892 (CONDITIONAL_JUMP)
// 0053b97f: CMP EAX,0x5f
// 0053b982: JZ 0x0053b892
//   XREF to: 0053b892 (CONDITIONAL_JUMP)
// 0053b988: INC EBX
// 0053b989: JMP 0x0053b8ec
//   XREF to: 0053b8ec (UNCONDITIONAL_JUMP)
// 0053b98e: PUSH 0x63b6e5
//   Label: LAB_0053b98e
//   XREF to: 0063b6e5 (DATA)
// 0053b993: LEA EAX,[ESP + 0x29dc]
// 0053b99a: PUSH EAX
// 0053b99b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b9a0: ADD ESP,0x8
// 0053b9a3: TEST EAX,EAX
// 0053b9a5: JZ 0x0053b8ec
//   XREF to: 0053b8ec (CONDITIONAL_JUMP)
// 0053b9ab: LEA EAX,[ESP + 0x29d8]
// 0053b9b2: PUSH EAX
// 0053b9b3: PUSH EBP
// 0053b9b4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b9b9: ADD ESP,0x8
// 0053b9bc: JMP 0x0053b8ec
//   XREF to: 0053b8ec (UNCONDITIONAL_JUMP)
// 0053b9c1: MOV EAX,dword ptr [ESP + 0x2b68]
//   Label: LAB_0053b9c1
// 0053b9c8: INC EBX
// 0053b9c9: CMP EBX,EAX
// 0053b9cb: JL 0x0053b8fe
//   XREF to: 0053b8fe (CONDITIONAL_JUMP)
// 0053b9d1: JMP 0x0053b95f
//   XREF to: 0053b95f (UNCONDITIONAL_JUMP)
// 0053b9d3: PUSH 0x63c685
//   Label: LAB_0053b9d3
//   XREF to: 0063c685 (DATA)
// 0053b9d8: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053b9dd: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053b9de: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053b9e3: JMP 0x0053b7d5
//   XREF to: 0053b7d5 (UNCONDITIONAL_JUMP)
