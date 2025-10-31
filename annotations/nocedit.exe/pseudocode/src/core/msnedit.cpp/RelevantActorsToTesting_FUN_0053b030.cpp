// Name: core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030
// Address: 0053b030
// Address Range: [[0053b030, 0053b507]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030()
// Cross-references:
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053afc4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_0063b6e0
//   TerminatedCString s_true_0063b6e5
//   TerminatedCString s_s_Referenced_by_name_0063c5da
//   TerminatedCString s_s_Raises_s_in_s_0063c5f0
//   TerminatedCString s_No_actors_relevent_to_th_0063c607
//   TerminatedCString s_Actors_relevent_to_s_0063c63c
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

/* Signature: undefined1 core_msnedit.cpp_RelevantActorsToTesting(undefined4 param_1, undefined4
   param_2) */

void core_msnedit_cpp_RelevantActorsToTesting_FUN_0053b030(void)

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
                  (g_CEditorToolsPtr,"No actors relevent to the testing of this condition.");
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
    (*((pCStack_20->metadata).vtable)->getPropertyList)
              (pCStack_20,(CActorPropertyList *)&stack0xffffd448);
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
            if (*(int *)(&stack0xffffd464 + (int)unaff_ESI * 0xec) == 0xc) {
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
                    crt_stdio_c_sprintf_FUN_005fdbd0(auStack_69c + 0x3a0,"%s\tRaises \"%s\" in \"%s\"")
                    ;
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
// 0053b030: PUSH EBX
//   Label: core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030
// 0053b031: PUSH ESI
// 0053b032: PUSH EDI
// 0053b033: PUSH EBP
// 0053b034: SUB ESP,0x2ba0
// 0053b03a: LEA EAX,[ESP + 0x2b78]
//   XREF to: Stack[-0x38] (DATA)
// 0053b041: PUSH EAX
// 0053b042: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 0053b047: ADD ESP,0x4
// 0053b04a: MOV EBX,dword ptr [ESP + 0x2bb8]
//   XREF to: Stack[0x8] (READ)
// 0053b051: MOV EBX,dword ptr [EBX + 0x68]
// 0053b054: MOV AH,byte ptr [EBX]
// 0053b056: LEA EDI,[ESP + 0x2b78]
//   XREF to: Stack[-0x38] (DATA)
// 0053b05d: TEST AH,AH
// 0053b05f: JZ 0x0053b0df
//   XREF to: 0053b0df (CONDITIONAL_JUMP)
// 0053b065: XOR EAX,EAX
//   Label: LAB_0053b065
// 0053b067: MOV AL,byte ptr [EBX]
// 0053b069: MOV EDX,EAX
// 0053b06b: INC DL
// 0053b06d: AND EDX,0xff
// 0053b073: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0053b07a: JZ 0x0053b327
//   XREF to: 0053b327 (CONDITIONAL_JUMP)
// 0053b080: LEA EDX,[ESP + 0x2aa0]
//   Label: LAB_0053b080
//   XREF to: Stack[-0x110] (DATA)
// 0053b087: MOV AL,byte ptr [EBX]
//   Label: LAB_0053b087
// 0053b089: MOV byte ptr [EDX],AL
//   XREF to: Stack[-0x110] (DATA)
// 0053b08b: XOR EAX,EAX
// 0053b08d: MOV AL,byte ptr [EBX + 0x1]
// 0053b090: MOV dword ptr [ESP + 0x2b88],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0053b097: MOV CL,byte ptr [ESP + 0x2b88]
//   XREF to: Stack[-0x28] (READ)
// 0053b09e: INC CL
// 0053b0a0: MOVZX ESI,CL
// 0053b0a3: INC EBX
// 0053b0a4: MOV CH,byte ptr [ESI + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 0053b0aa: INC EDX
// 0053b0ab: TEST CH,0xe0
// 0053b0ae: JNZ 0x0053b087
//   XREF to: 0053b087 (CONDITIONAL_JUMP)
// 0053b0b0: CMP EAX,0x2d
// 0053b0b3: JZ 0x0053b087
//   XREF to: 0053b087 (CONDITIONAL_JUMP)
// 0053b0b5: CMP EAX,0x5f
// 0053b0b8: JZ 0x0053b087
//   XREF to: 0053b087 (CONDITIONAL_JUMP)
// 0053b0ba: PUSH 0x63b6e0
//   XREF to: 0063b6e0 (DATA)
// 0053b0bf: LEA EAX,[ESP + 0x2aa4]
//   XREF to: Stack[-0x110] (DATA)
// 0053b0c6: PUSH EAX
// 0053b0c7: MOV byte ptr [EDX],0x0
//   XREF to: Stack[-0x10f] (DATA)
// 0053b0ca: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b0cf: ADD ESP,0x8
// 0053b0d2: TEST EAX,EAX
// 0053b0d4: JNZ 0x0053b33f
//   XREF to: 0053b33f (CONDITIONAL_JUMP)
// 0053b0da: CMP byte ptr [EBX],0x0
//   Label: LAB_0053b0da
// 0053b0dd: JNZ 0x0053b065
//   XREF to: 0053b065 (CONDITIONAL_JUMP)
// 0053b0df: MOV EDX,dword ptr [ESP + 0x2bb4]
//   Label: LAB_0053b0df
//   XREF to: Stack[0x4] (READ)
// 0053b0e6: PUSH EDX
// 0053b0e7: CALL core_mission.cpp_CDemonMission_FUN_00523cc0
//   XREF to: 00523cc0 (UNCONDITIONAL_CALL)
// 0053b0ec: ADD ESP,0x4
// 0053b0ef: LEA EAX,[ESP + 0x2504]
//   XREF to: Stack[-0x6ac] (DATA)
// 0053b0f6: PUSH EAX
// 0053b0f7: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053b0fc: ADD ESP,0x4
// 0053b0ff: MOV EAX,dword ptr [ESP + 0x2bb4]
//   XREF to: Stack[0x4] (READ)
// 0053b106: MOV EAX,dword ptr [EAX + 0x548]
// 0053b10c: MOV dword ptr [ESP + 0x2b98],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0053b113: TEST EAX,EAX
// 0053b115: JZ 0x0053b25d
//   XREF to: 0053b25d (CONDITIONAL_JUMP)
// 0053b11b: MOV EAX,ESP
//   Label: LAB_0053b11b
// 0053b11d: PUSH EAX
// 0053b11e: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 0053b123: ADD ESP,0x4
// 0053b126: MOV EDX,ESP
// 0053b128: MOV EAX,dword ptr [ESP + 0x2b98]
//   XREF to: Stack[-0x18] (READ)
// 0053b12f: PUSH EDX
// 0053b130: MOV EDX,dword ptr [ESP + 0x2b9c]
//   XREF to: Stack[-0x18] (READ)
// 0053b137: MOV EAX,dword ptr [EAX + 0x154]
// 0053b13d: PUSH EDX
// 0053b13e: CALL dword ptr [EAX + 0xd4]
// 0053b144: ADD ESP,0x8
// 0053b147: XOR ECX,ECX
// 0053b149: MOV EBX,dword ptr [ESP + 0x2b78]
// 0053b150: MOV dword ptr [ESP + 0x2b94],ECX
// 0053b157: TEST EBX,EBX
// 0053b159: JLE 0x0053b241
//   XREF to: 0053b241 (CONDITIONAL_JUMP)
// 0053b15f: MOV EBP,dword ptr [ESP + 0x2b94]
//   Label: LAB_0053b15f
// 0053b166: PUSH EBP
// 0053b167: LEA EAX,[ESP + 0x2b7c]
// 0053b16e: PUSH EAX
// 0053b16f: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053b174: ADD ESP,0x8
// 0053b177: MOV EDX,dword ptr [ESP + 0x2b98]
// 0053b17e: PUSH EDX
// 0053b17f: PUSH EAX
// 0053b180: MOV EDI,EAX
// 0053b182: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b187: ADD ESP,0x8
// 0053b18a: TEST EAX,EAX
// 0053b18c: JNZ 0x0053b1c3
//   XREF to: 0053b1c3 (CONDITIONAL_JUMP)
// 0053b18e: MOV ECX,dword ptr [ESP + 0x2b98]
// 0053b195: PUSH ECX
// 0053b196: PUSH 0x63c5da
//   XREF to: 0063c5da (DATA)
// 0053b19b: LEA EAX,[ESP + 0x28b4]
// 0053b1a2: PUSH EAX
// 0053b1a3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053b1a8: ADD ESP,0xc
// 0053b1ab: LEA EAX,[ESP + 0x28ac]
// 0053b1b2: PUSH EAX
// 0053b1b3: LEA EAX,[ESP + 0x2508]
// 0053b1ba: PUSH EAX
// 0053b1bb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b1c0: ADD ESP,0x8
// 0053b1c3: XOR EBX,EBX
//   Label: LAB_0053b1c3
// 0053b1c5: MOV ESI,dword ptr [ESP + 0x4]
// 0053b1c9: MOV dword ptr [ESP + 0x2b9c],EBX
// 0053b1d0: TEST ESI,ESI
// 0053b1d2: JLE 0x0053b223
//   XREF to: 0053b223 (CONDITIONAL_JUMP)
// 0053b1d4: LEA EAX,[ESP + 0x8]
// 0053b1d8: ADD EAX,0x4
// 0053b1db: MOV dword ptr [ESP + 0x2b8c],EAX
// 0053b1e2: IMUL EBX,dword ptr [ESP + 0x2b9c],0xec
//   Label: LAB_0053b1e2
// 0053b1ed: CMP dword ptr [ESP + EBX*0x1 + 0x8],0xc
// 0053b1f2: JZ 0x0053b372
//   XREF to: 0053b372 (CONDITIONAL_JUMP)
// 0053b1f8: MOV EBP,dword ptr [ESP + 0x2b8c]
//   Label: LAB_0053b1f8
// 0053b1ff: MOV EAX,dword ptr [ESP + 0x2b9c]
// 0053b206: MOV EDX,dword ptr [ESP + 0x4]
// 0053b20a: ADD EBP,0xec
// 0053b210: INC EAX
// 0053b211: MOV dword ptr [ESP + 0x2b8c],EBP
// 0053b218: MOV dword ptr [ESP + 0x2b9c],EAX
// 0053b21f: CMP EAX,EDX
// 0053b221: JL 0x0053b1e2
//   XREF to: 0053b1e2 (CONDITIONAL_JUMP)
// 0053b223: MOV ESI,dword ptr [ESP + 0x2b94]
//   Label: LAB_0053b223
// 0053b22a: INC ESI
// 0053b22b: MOV EDI,dword ptr [ESP + 0x2b78]
// 0053b232: MOV dword ptr [ESP + 0x2b94],ESI
// 0053b239: CMP ESI,EDI
// 0053b23b: JL 0x0053b15f
//   XREF to: 0053b15f (CONDITIONAL_JUMP)
// 0053b241: MOV EAX,dword ptr [ESP + 0x2b98]
//   Label: LAB_0053b241
// 0053b248: MOV EAX,dword ptr [EAX + 0x14c]
// 0053b24e: MOV dword ptr [ESP + 0x2b98],EAX
// 0053b255: TEST EAX,EAX
// 0053b257: JNZ 0x0053b11b
//   XREF to: 0053b11b (CONDITIONAL_JUMP)
// 0053b25d: CMP dword ptr [ESP + 0x2504],0x1
//   Label: LAB_0053b25d
//   XREF to: Stack[-0x6ac] (READ)
// 0053b265: JL 0x0053b4f3
//   XREF to: 0053b4f3 (CONDITIONAL_JUMP)
// 0053b26b: LEA EAX,[ESP + 0x2504]
//   XREF to: Stack[-0x6ac] (DATA)
// 0053b272: PUSH EAX
// 0053b273: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053b278: ADD ESP,0x4
// 0053b27b: MOV EAX,dword ptr [ESP + 0x2bb8]
// 0053b282: ADD EAX,0x4
// 0053b285: PUSH EAX
// 0053b286: PUSH 0x63c63c
//   XREF to: 0063c63c (DATA)
// 0053b28b: LEA EAX,[ESP + 0x28b4]
// 0053b292: PUSH EAX
// 0053b293: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053b298: ADD ESP,0xc
// 0053b29b: PUSH 0x0
// 0053b29d: PUSH -0x1
// 0053b29f: LEA EAX,[ESP + 0x28b4]
// 0053b2a6: PUSH EAX
// 0053b2a7: LEA EAX,[ESP + 0x2510]
// 0053b2ae: PUSH EAX
// 0053b2af: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053b2b4: ADD ESP,0x10
// 0053b2b7: TEST EAX,EAX
// 0053b2b9: JL 0x0053b2f8
//   XREF to: 0053b2f8 (CONDITIONAL_JUMP)
// 0053b2bb: PUSH 0x0
// 0053b2bd: PUSH EAX
// 0053b2be: LEA EAX,[ESP + 0x28b4]
// 0053b2c5: PUSH EAX
// 0053b2c6: LEA EAX,[ESP + 0x2510]
// 0053b2cd: PUSH EAX
// 0053b2ce: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0053b2d3: ADD ESP,0x10
// 0053b2d6: LEA EAX,[ESP + 0x28ac]
// 0053b2dd: PUSH EAX
// 0053b2de: MOV EDI,dword ptr [ESP + 0x2bb8]
// 0053b2e5: PUSH EDI
// 0053b2e6: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053b2eb: ADD ESP,0x8
// 0053b2ee: PUSH EAX
// 0053b2ef: PUSH EDI
// 0053b2f0: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053b2f5: ADD ESP,0x8
//   Label: LAB_0053b2f5
// 0053b2f8: PUSH 0x0
//   Label: LAB_0053b2f8
// 0053b2fa: LEA EAX,[ESP + 0x2508]
// 0053b301: PUSH EAX
// 0053b302: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053b307: ADD ESP,0x8
// 0053b30a: PUSH 0x0
// 0053b30c: LEA EAX,[ESP + 0x2b7c]
// 0053b313: PUSH EAX
// 0053b314: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0053b319: ADD ESP,0x8
// 0053b31c: ADD ESP,0x2ba0
// 0053b322: POP EBP
// 0053b323: POP EDI
// 0053b324: POP ESI
// 0053b325: POP EBX
// 0053b326: RET
// 0053b327: CMP EAX,0x2d
//   Label: LAB_0053b327
// 0053b32a: JZ 0x0053b080
//   XREF to: 0053b080 (CONDITIONAL_JUMP)
// 0053b330: CMP EAX,0x5f
// 0053b333: JZ 0x0053b080
//   XREF to: 0053b080 (CONDITIONAL_JUMP)
// 0053b339: INC EBX
// 0053b33a: JMP 0x0053b0da
//   XREF to: 0053b0da (UNCONDITIONAL_JUMP)
// 0053b33f: PUSH 0x63b6e5
//   Label: LAB_0053b33f
//   XREF to: 0063b6e5 (DATA)
// 0053b344: LEA EAX,[ESP + 0x2aa4]
//   XREF to: Stack[-0x110] (DATA)
// 0053b34b: PUSH EAX
// 0053b34c: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b351: ADD ESP,0x8
// 0053b354: TEST EAX,EAX
// 0053b356: JZ 0x0053b0da
//   XREF to: 0053b0da (CONDITIONAL_JUMP)
// 0053b35c: LEA EAX,[ESP + 0x2aa0]
//   XREF to: Stack[-0x110] (DATA)
// 0053b363: PUSH EAX
// 0053b364: PUSH EDI
// 0053b365: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b36a: ADD ESP,0x8
// 0053b36d: JMP 0x0053b0da
//   XREF to: 0053b0da (UNCONDITIONAL_JUMP)
// 0053b372: LEA EAX,[ESP + 0x2b68]
//   Label: LAB_0053b372
// 0053b379: PUSH EAX
// 0053b37a: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 0053b37f: ADD ESP,0x4
// 0053b382: MOV EBX,dword ptr [ESP + EBX*0x1 + 0x70]
// 0053b386: MOV AL,byte ptr [EBX]
// 0053b388: LEA EBP,[ESP + 0x2b68]
// 0053b38f: TEST AL,AL
// 0053b391: JZ 0x0053b411
//   XREF to: 0053b411 (CONDITIONAL_JUMP)
// 0053b397: XOR EAX,EAX
//   Label: LAB_0053b397
// 0053b399: MOV AL,byte ptr [EBX]
// 0053b39b: MOV EDX,EAX
// 0053b39d: INC DL
// 0053b39f: AND EDX,0xff
// 0053b3a5: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0053b3ac: JZ 0x0053b496
//   XREF to: 0053b496 (CONDITIONAL_JUMP)
// 0053b3b2: LEA EDX,[ESP + 0x29d8]
//   Label: LAB_0053b3b2
// 0053b3b9: MOV AL,byte ptr [EBX]
//   Label: LAB_0053b3b9
// 0053b3bb: MOV byte ptr [EDX],AL
// 0053b3bd: XOR EAX,EAX
// 0053b3bf: MOV AL,byte ptr [EBX + 0x1]
// 0053b3c2: MOV dword ptr [ESP + 0x2b90],EAX
// 0053b3c9: MOV CL,byte ptr [ESP + 0x2b90]
// 0053b3d0: INC CL
// 0053b3d2: MOVZX ESI,CL
// 0053b3d5: INC EBX
// 0053b3d6: MOV CH,byte ptr [ESI + 0x6849c4]
//   XREF to: 006849c4 (DATA)
// 0053b3dc: INC EDX
// 0053b3dd: TEST CH,0xe0
// 0053b3e0: JNZ 0x0053b3b9
//   XREF to: 0053b3b9 (CONDITIONAL_JUMP)
// 0053b3e2: CMP EAX,0x2d
// 0053b3e5: JZ 0x0053b3b9
//   XREF to: 0053b3b9 (CONDITIONAL_JUMP)
// 0053b3e7: CMP EAX,0x5f
// 0053b3ea: JZ 0x0053b3b9
//   XREF to: 0053b3b9 (CONDITIONAL_JUMP)
// 0053b3ec: PUSH 0x63b6e0
//   XREF to: 0063b6e0 (DATA)
// 0053b3f1: LEA EAX,[ESP + 0x29dc]
// 0053b3f8: PUSH EAX
// 0053b3f9: MOV byte ptr [EDX],0x0
// 0053b3fc: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b401: ADD ESP,0x8
// 0053b404: TEST EAX,EAX
// 0053b406: JNZ 0x0053b4ae
//   XREF to: 0053b4ae (CONDITIONAL_JUMP)
// 0053b40c: CMP byte ptr [EBX],0x0
//   Label: LAB_0053b40c
// 0053b40f: JNZ 0x0053b397
//   XREF to: 0053b397 (CONDITIONAL_JUMP)
// 0053b411: MOV EBP,dword ptr [ESP + 0x2b68]
//   Label: LAB_0053b411
// 0053b418: XOR EBX,EBX
// 0053b41a: TEST EBP,EBP
// 0053b41c: JLE 0x0053b47f
//   XREF to: 0053b47f (CONDITIONAL_JUMP)
// 0053b41e: PUSH EBX
//   Label: LAB_0053b41e
// 0053b41f: LEA EAX,[ESP + 0x2b6c]
// 0053b426: PUSH EAX
// 0053b427: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053b42c: ADD ESP,0x8
// 0053b42f: PUSH EAX
// 0053b430: PUSH EDI
// 0053b431: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b436: ADD ESP,0x8
// 0053b439: TEST EAX,EAX
// 0053b43b: JNZ 0x0053b4e1
//   XREF to: 0053b4e1 (CONDITIONAL_JUMP)
// 0053b441: MOV EDX,dword ptr [ESP + 0x2b8c]
// 0053b448: PUSH EDX
// 0053b449: PUSH EDI
// 0053b44a: MOV ECX,dword ptr [ESP + 0x2ba0]
// 0053b451: PUSH ECX
// 0053b452: PUSH 0x63c5f0
//   XREF to: 0063c5f0 (DATA)
// 0053b457: LEA EAX,[ESP + 0x28bc]
// 0053b45e: PUSH EAX
// 0053b45f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053b464: ADD ESP,0x14
// 0053b467: LEA EAX,[ESP + 0x28ac]
// 0053b46e: PUSH EAX
// 0053b46f: LEA EAX,[ESP + 0x2508]
// 0053b476: PUSH EAX
// 0053b477: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b47c: ADD ESP,0x8
// 0053b47f: PUSH 0x0
//   Label: LAB_0053b47f
// 0053b481: LEA EAX,[ESP + 0x2b6c]
// 0053b488: PUSH EAX
// 0053b489: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 0053b48e: ADD ESP,0x8
// 0053b491: JMP 0x0053b1f8
//   XREF to: 0053b1f8 (UNCONDITIONAL_JUMP)
// 0053b496: CMP EAX,0x2d
//   Label: LAB_0053b496
// 0053b499: JZ 0x0053b3b2
//   XREF to: 0053b3b2 (CONDITIONAL_JUMP)
// 0053b49f: CMP EAX,0x5f
// 0053b4a2: JZ 0x0053b3b2
//   XREF to: 0053b3b2 (CONDITIONAL_JUMP)
// 0053b4a8: INC EBX
// 0053b4a9: JMP 0x0053b40c
//   XREF to: 0053b40c (UNCONDITIONAL_JUMP)
// 0053b4ae: PUSH 0x63b6e5
//   Label: LAB_0053b4ae
//   XREF to: 0063b6e5 (DATA)
// 0053b4b3: LEA EAX,[ESP + 0x29dc]
// 0053b4ba: PUSH EAX
// 0053b4bb: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053b4c0: ADD ESP,0x8
// 0053b4c3: TEST EAX,EAX
// 0053b4c5: JZ 0x0053b40c
//   XREF to: 0053b40c (CONDITIONAL_JUMP)
// 0053b4cb: LEA EAX,[ESP + 0x29d8]
// 0053b4d2: PUSH EAX
// 0053b4d3: PUSH EBP
// 0053b4d4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053b4d9: ADD ESP,0x8
// 0053b4dc: JMP 0x0053b40c
//   XREF to: 0053b40c (UNCONDITIONAL_JUMP)
// 0053b4e1: MOV EAX,dword ptr [ESP + 0x2b68]
//   Label: LAB_0053b4e1
// 0053b4e8: INC EBX
// 0053b4e9: CMP EBX,EAX
// 0053b4eb: JL 0x0053b41e
//   XREF to: 0053b41e (CONDITIONAL_JUMP)
// 0053b4f1: JMP 0x0053b47f
//   XREF to: 0053b47f (UNCONDITIONAL_JUMP)
// 0053b4f3: PUSH 0x63c607
//   Label: LAB_0053b4f3
//   XREF to: 0063c607 (DATA)
// 0053b4f8: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053b4fd: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053b4fe: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0053b503: JMP 0x0053b2f5
//   XREF to: 0053b2f5 (UNCONDITIONAL_JUMP)
