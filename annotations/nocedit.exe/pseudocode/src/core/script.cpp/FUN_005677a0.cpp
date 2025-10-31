// Name: core_script.cpp_FUN_005677a0
// Address: 005677a0
// Address Range: [[005677a0, 00567bba]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005677a0()
// Cross-references:
//   core_script.cpp_FUN_00562920 (00562920) at 005637ca [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0056776c = 00567828
//   TerminatedCString s_Event_tested_006440cd
//   undefined4 s_vent_tested_006440ce
//   TerminatedCString s_Event_raised_006440da
//   undefined4 s_vent_raised_006440db
//   TerminatedCString s_Persistent_event_006440e7
//   undefined4 s_ersistent_event_006440e8
//   TerminatedCString s_Game_flag_006440f8
//   undefined4 s_ame_flag_006440f9
//   TerminatedCString s_Timer_00644102
//   undefined4 s_imer_00644103
//   TerminatedCString s_Counter_00644108
//   undefined4 s_ounter_00644109
//   TerminatedCString s_Actor_referenced_00644110
//   undefined4 s_ctor_referenced_00644111
//   undefined4 s_tor_referenced_00644112
//   TerminatedCString s_Sfx_set_00644121
//   undefined4 s_fx_set_00644122
//   TerminatedCString s_Sfx_referenced_00644129
//   undefined4 s_fx_referenced_0064412a
//   TerminatedCString s_Actor_variable_set_00644138
//   undefined4 s_ctor_variable_set_00644139
//   TerminatedCString s_Actor_variable_reference_0064414b
//   undefined4 s_ctor_variable_referenced_0064414c
//   TerminatedCString s_Ini_file_variable_00644165
//   undefined4 s_ni_file_variable_00644166
//   undefined4 s_i_file_variable_00644167
//   undefined4 s_file_variable_00644168
//   TerminatedCString s_anon_00644177
//   undefined4 DAT_00644178
//   TerminatedCString s_Script_Ln_d_0064417c
//   TerminatedCString s_s_s_00644189
//   TerminatedCString s_s_s_0064418f
//   TerminatedCString s_Nothing_to_choose_from_00644196
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CEditorTools g_CEditorToolsPtr
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
// Function calls:
//   core_actor.cpp_FUN_0040e130
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   core_script.cpp_CScript_Unk18_FUN_005669a0
//   core_script.cpp_FUN_005644e0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_insert_FUN_004a5670
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005677a0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 core_script_cpp_FUN_005677a0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  uint in_stack_ffffd3b4;
  uint in_stack_ffffd3b8;
  uint in_stack_ffffd3bc;
  uint in_stack_ffffd3c0;
  uint in_stack_ffffd3c4;
  CPickList local_748;
  char local_3a0 [500];
  char local_1ac [200];
  char local_e4 [200];
  int local_1c;
  int local_18;
  char *local_14;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_748);
  local_18 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x28)) {
    local_1c = 0;
    do {
      local_14 = (char *)(local_1c + *(int *)(in_stack_00000004 + 0x2c));
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_748.base_strlist,local_14);
      if (iVar2 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_748.base_strlist,local_14);
        iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_748);
      }
      else {
        iVar2 = iVar2 + 1;
      }
      switch(*(undefined4 *)(local_14 + 0x100)) {
      case 0:
        pcVar6 = "Event tested";
        break;
      case 1:
        pcVar6 = "Event raised";
        break;
      case 2:
        pcVar6 = "Persistent event";
        break;
      case 3:
        pcVar6 = "Game flag";
        break;
      case 4:
        pcVar6 = "Timer";
        break;
      case 5:
      case 6:
        pcVar6 = "Counter";
        break;
      case 7:
        pcVar6 = "Actor referenced";
        break;
      case 8:
        pcVar6 = "Sfx set";
        break;
      case 9:
        pcVar6 = "Sfx referenced";
        break;
      case 10:
        pcVar6 = "Actor variable set";
        break;
      case 0xb:
        pcVar6 = "Actor variable referenced";
        break;
      case 0xc:
        pcVar6 = "Ini file variable";
        break;
      default:
        pcVar6 = "????";
      }
      pcVar7 = local_1ac;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      if (*(int *)(local_14 + 0x104) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_e4,"Script\tLn %d",*(undefined4 *)(local_14 + 0x10c));
      }
      else {
        core_actor_cpp_FUN_0040e130();
        (**(code **)(*(int *)(*(int *)(local_14 + 0x104) + 0x154) + 0xd4))();
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_e4,"%s\t%s",*(undefined4 *)(local_14 + 0x104),
                   &stack0xffffd3c0 + *(int *)(local_14 + 0x108) * 0xec);
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_3a0,"\t%s\t%s",local_1ac,local_e4);
      shape_edittool_cpp_CPickList_insert_FUN_004a5670(&local_748,iVar2,(int)local_3a0);
      *(int *)(local_14 + 0x110) = iVar2;
      if (0 < local_18) {
        iVar3 = 0;
        do {
          iVar5 = *(int *)(in_stack_00000004 + 0x2c) + iVar3;
          iVar4 = *(int *)(iVar5 + 0x110);
          if (iVar2 <= iVar4) {
            *(int *)(iVar5 + 0x110) = iVar4 + 1;
          }
          iVar3 = iVar3 + 0x114;
        } while (iVar3 < local_18 * 0x114);
      }
      local_1c = local_1c + 0x114;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(in_stack_00000004 + 0x28));
  }
  iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_748);
  if (iVar2 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Nothing to choose from!");
  }
  else {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_748,1);
    iVar3 = 0;
    iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      (&local_748.base_strlist,in_stack_0000000c);
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_748,in_stack_00000008,iVar2,iVar3);
    if (-1 < iVar2) {
      iVar3 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0x28)) {
        iVar4 = *(int *)(in_stack_00000004 + 0x2c);
        do {
          if (iVar2 == *(int *)(iVar4 + 0x110)) {
            if (*(int *)(iVar4 + 0x104) == 0) {
              iVar2 = *(int *)(iVar4 + 0x10c) + -1;
              if (iVar2 != DAT_0310fd48) {
                DAT_0310fd44 = *(int *)(iVar4 + 0x104);
                DAT_0310fd48 = iVar2;
                core_script_cpp_FUN_005644e0();
                core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
                core_script_cpp_CScript_Unk18_FUN_005669a0();
              }
            }
            else {
              core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
            }
            goto LAB_005679f9;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x114;
        } while (iVar3 < *(int *)(in_stack_00000004 + 0x28));
      }
      pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_748.base_strlist,iVar2);
      do {
        cVar1 = *pcVar6;
        *in_stack_0000000c = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        in_stack_0000000c[1] = cVar1;
        in_stack_0000000c = in_stack_0000000c + 2;
      } while (cVar1 != '\0');
      uVar8 = 1;
      goto LAB_00567a01;
    }
  }
LAB_005679f9:
  uVar8 = 0;
LAB_00567a01:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_748,0,in_stack_ffffd3b4,in_stack_ffffd3b8,in_stack_ffffd3bc,in_stack_ffffd3c0,
             in_stack_ffffd3c4);
  return uVar8;
}


// Assembly code:
// 005677a0: PUSH EBX
//   Label: core_script.cpp_FUN_005677a0
// 005677a1: PUSH ESI
// 005677a2: PUSH EDI
// 005677a3: PUSH EBP
// 005677a4: SUB ESP,0x2c3c
// 005677aa: MOV EBP,dword ptr [ESP + 0x2c50]
//   XREF to: Stack[0x4] (READ)
// 005677b1: LEA EAX,[ESP + 0x2504]
//   XREF to: Stack[-0x748] (DATA)
// 005677b8: PUSH EAX
// 005677b9: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005677be: ADD ESP,0x4
// 005677c1: XOR EDX,EDX
// 005677c3: MOV ECX,dword ptr [EBP + 0x28]
// 005677c6: MOV dword ptr [ESP + 0x2c34],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005677cd: TEST ECX,ECX
// 005677cf: JLE 0x00567931
//   XREF to: 00567931 (CONDITIONAL_JUMP)
// 005677d5: MOV dword ptr [ESP + 0x2c30],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005677dc: MOV EDX,dword ptr [ESP + 0x2c30]
//   Label: LAB_005677dc
//   XREF to: Stack[-0x1c] (READ)
// 005677e3: MOV EAX,dword ptr [EBP + 0x2c]
// 005677e6: ADD EDX,EAX
// 005677e8: PUSH EDX
// 005677e9: LEA EAX,[ESP + 0x2508]
//   XREF to: Stack[-0x748] (DATA)
// 005677f0: PUSH EAX
// 005677f1: MOV dword ptr [ESP + 0x2c40],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005677f8: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 005677fd: ADD ESP,0x8
// 00567800: TEST EAX,EAX
// 00567802: JL 0x00567a16
//   XREF to: 00567a16 (CONDITIONAL_JUMP)
// 00567808: LEA EBX,[EAX + 0x1]
// 0056780b: MOV EAX,dword ptr [ESP + 0x2c38]
//   Label: LAB_0056780b
//   XREF to: Stack[-0x14] (READ)
// 00567812: MOV EAX,dword ptr [EAX + 0x100]
// 00567818: CMP EAX,0xc
// 0056781b: JA 0x00567ab3
//   XREF to: 00567ab3 (CONDITIONAL_JUMP)
// 00567821: JMP dword ptr [EAX*0x4 + 0x56776c]
//   Label: switchD
//   XREF to: 00567828 (COMPUTED_JUMP)
//   XREF to: 00567a45 (COMPUTED_JUMP)
//   XREF to: 00567a4f (COMPUTED_JUMP)
//   XREF to: 00567a59 (COMPUTED_JUMP)
//   XREF to: 00567a63 (COMPUTED_JUMP)
//   XREF to: 00567a6d (COMPUTED_JUMP)
//   XREF to: 00567a77 (COMPUTED_JUMP)
//   XREF to: 00567a81 (COMPUTED_JUMP)
//   XREF to: 00567a8b (COMPUTED_JUMP)
//   XREF to: 00567a95 (COMPUTED_JUMP)
//   XREF to: 00567a9f (COMPUTED_JUMP)
//   XREF to: 00567aa9 (COMPUTED_JUMP)
//   XREF to: 0056776c (DATA)
// 00567828: MOV ESI,0x6440cd
//   Label: caseD_0
//   XREF to: 006440cd (DATA)
// 0056782d: LEA EDI,[ESP + 0x2aa0]
//   Label: LAB_0056782d
//   XREF to: Stack[-0x1ac] (DATA)
// 00567834: PUSH EDI
// 00567835: MOV AL,byte ptr [ESI]
//   Label: LAB_00567835
//   XREF to: 006440cd (READ)
//   XREF to: 006440da (READ)
//   XREF to: 006440e7 (READ)
//   XREF to: 006440f8 (READ)
//   XREF to: 00644102 (READ)
//   XREF to: 00644108 (READ)
//   XREF to: 00644110 (READ)
//   XREF to: 00644112 (READ)
//   XREF to: 00644121 (READ)
//   XREF to: 00644129 (READ)
//   XREF to: 00644138 (READ)
//   XREF to: 0064414b (READ)
//   XREF to: 00644165 (READ)
//   XREF to: 00644167 (READ)
//   XREF to: 00644177 (READ)
// 00567837: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1ac] (DATA)
// 00567839: CMP AL,0x0
// 0056783b: JZ 0x0056784d
//   XREF to: 0056784d (CONDITIONAL_JUMP)
// 0056783d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006440ce (READ)
//   XREF to: 006440db (READ)
//   XREF to: 006440e8 (READ)
//   XREF to: 006440f9 (READ)
//   XREF to: 00644103 (READ)
//   XREF to: 00644109 (READ)
//   XREF to: 00644111 (READ)
//   XREF to: 00644122 (READ)
//   XREF to: 0064412a (READ)
//   XREF to: 00644139 (READ)
//   XREF to: 0064414c (READ)
//   XREF to: 00644166 (READ)
//   XREF to: 00644168 (READ)
//   XREF to: 00644178 (READ)
// 00567840: ADD ESI,0x2
// 00567843: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1ab] (WRITE)
// 00567846: ADD EDI,0x2
// 00567849: CMP AL,0x0
// 0056784b: JNZ 0x00567835
//   XREF to: 00567835 (CONDITIONAL_JUMP)
// 0056784d: POP EDI
//   Label: LAB_0056784d
// 0056784e: MOV EAX,dword ptr [ESP + 0x2c38]
//   XREF to: Stack[-0x14] (READ)
// 00567855: CMP dword ptr [EAX + 0x104],0x0
// 0056785c: JNZ 0x00567abd
//   XREF to: 00567abd (CONDITIONAL_JUMP)
// 00567862: MOV EDI,dword ptr [EAX + 0x10c]
// 00567868: PUSH EDI
// 00567869: PUSH 0x64417c
//   XREF to: 0064417c (DATA)
// 0056786e: LEA EAX,[ESP + 0x2b70]
//   XREF to: Stack[-0xe4] (DATA)
// 00567875: PUSH EAX
// 00567876: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056787b: ADD ESP,0xc
// 0056787e: LEA EAX,[ESP + 0x2b68]
//   Label: LAB_0056787e
//   XREF to: Stack[-0xe4] (DATA)
// 00567885: PUSH EAX
// 00567886: LEA EAX,[ESP + 0x2aa4]
//   XREF to: Stack[-0x1ac] (DATA)
// 0056788d: PUSH EAX
// 0056788e: PUSH 0x64418f
//   XREF to: 0064418f (DATA)
// 00567893: LEA EAX,[ESP + 0x28b8]
//   XREF to: Stack[-0x3a0] (DATA)
// 0056789a: PUSH EAX
// 0056789b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005678a0: ADD ESP,0x10
// 005678a3: LEA EAX,[ESP + 0x28ac]
//   XREF to: Stack[-0x3a0] (DATA)
// 005678aa: PUSH EAX
// 005678ab: PUSH EBX
// 005678ac: LEA EAX,[ESP + 0x250c]
//   XREF to: Stack[-0x748] (DATA)
// 005678b3: PUSH EAX
// 005678b4: CALL shape_edittool.cpp_CPickList_insert_FUN_004a5670
//   XREF to: 004a5670 (UNCONDITIONAL_CALL)
// 005678b9: ADD ESP,0xc
// 005678bc: MOV EAX,dword ptr [ESP + 0x2c38]
//   XREF to: Stack[-0x14] (READ)
// 005678c3: MOV dword ptr [EAX + 0x110],EBX
// 005678c9: CMP dword ptr [ESP + 0x2c34],0x0
//   XREF to: Stack[-0x18] (READ)
// 005678d1: JLE 0x00567903
//   XREF to: 00567903 (CONDITIONAL_JUMP)
// 005678d3: MOV ESI,dword ptr [ESP + 0x2c34]
//   XREF to: Stack[-0x18] (READ)
// 005678da: XOR EAX,EAX
// 005678dc: IMUL ECX,ESI,0x114
// 005678e2: MOV EDX,dword ptr [EBP + 0x2c]
//   Label: LAB_005678e2
// 005678e5: ADD EDX,EAX
// 005678e7: MOV EDI,dword ptr [EDX + 0x110]
// 005678ed: CMP EBX,EDI
// 005678ef: JG 0x005678fa
//   XREF to: 005678fa (CONDITIONAL_JUMP)
// 005678f1: LEA ESI,[EDI + 0x1]
// 005678f4: MOV dword ptr [EDX + 0x110],ESI
// 005678fa: ADD EAX,0x114
//   Label: LAB_005678fa
// 005678ff: CMP EAX,ECX
// 00567901: JL 0x005678e2
//   XREF to: 005678e2 (CONDITIONAL_JUMP)
// 00567903: MOV EBX,dword ptr [ESP + 0x2c30]
//   Label: LAB_00567903
//   XREF to: Stack[-0x1c] (READ)
// 0056790a: MOV ESI,dword ptr [ESP + 0x2c34]
//   XREF to: Stack[-0x18] (READ)
// 00567911: MOV EDI,dword ptr [EBP + 0x28]
// 00567914: ADD EBX,0x114
// 0056791a: INC ESI
// 0056791b: MOV dword ptr [ESP + 0x2c30],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00567922: MOV dword ptr [ESP + 0x2c34],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00567929: CMP ESI,EDI
// 0056792b: JL 0x005677dc
//   XREF to: 005677dc (CONDITIONAL_JUMP)
// 00567931: LEA EAX,[ESP + 0x2504]
//   Label: LAB_00567931
//   XREF to: Stack[-0x748] (DATA)
// 00567938: PUSH EAX
// 00567939: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 0056793e: ADD ESP,0x4
// 00567941: CMP EAX,0x1
// 00567944: JL 0x00567b2b
//   XREF to: 00567b2b (CONDITIONAL_JUMP)
// 0056794a: PUSH 0x1
// 0056794c: LEA EAX,[ESP + 0x2508]
//   XREF to: Stack[-0x748] (DATA)
// 00567953: PUSH EAX
// 00567954: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 00567959: ADD ESP,0x8
// 0056795c: PUSH 0x0
// 0056795e: MOV EAX,dword ptr [ESP + 0x2c5c]
//   XREF to: Stack[0xc] (READ)
// 00567965: PUSH EAX
// 00567966: LEA EAX,[ESP + 0x250c]
//   XREF to: Stack[-0x748] (DATA)
// 0056796d: PUSH EAX
// 0056796e: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00567973: ADD ESP,0x8
// 00567976: PUSH EAX
// 00567977: MOV EDX,dword ptr [ESP + 0x2c5c]
//   XREF to: Stack[0x8] (READ)
// 0056797e: PUSH EDX
// 0056797f: LEA EAX,[ESP + 0x2510]
//   XREF to: Stack[-0x748] (DATA)
// 00567986: PUSH EAX
// 00567987: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0056798c: ADD ESP,0x10
// 0056798f: MOV EDI,EAX
// 00567991: TEST EAX,EAX
// 00567993: JL 0x00567b44
//   XREF to: 00567b44 (CONDITIONAL_JUMP)
// 00567999: MOV ECX,dword ptr [EBP + 0x28]
// 0056799c: XOR ESI,ESI
// 0056799e: TEST ECX,ECX
// 005679a0: JLE 0x00567b5e
//   XREF to: 00567b5e (CONDITIONAL_JUMP)
// 005679a6: MOV EAX,dword ptr [EBP + 0x2c]
// 005679a9: CMP EDI,dword ptr [EAX + 0x110]
//   Label: LAB_005679a9
// 005679af: JNZ 0x00567b4d
//   XREF to: 00567b4d (CONDITIONAL_JUMP)
// 005679b5: MOV EBX,dword ptr [EAX + 0x104]
// 005679bb: TEST EBX,EBX
// 005679bd: JNZ 0x00567ba6
//   XREF to: 00567ba6 (CONDITIONAL_JUMP)
// 005679c3: MOV EAX,dword ptr [EAX + 0x10c]
// 005679c9: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 005679cf: DEC EAX
// 005679d0: CMP EAX,EDX
// 005679d2: JZ 0x005679f6
//   XREF to: 005679f6 (CONDITIONAL_JUMP)
// 005679d4: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 005679d9: MOV dword ptr [0x0310fd44],EBX
//   XREF to: 0310fd44 (WRITE)
// 005679df: CALL core_script.cpp_FUN_005644e0
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 005679e4: PUSH EBP
// 005679e5: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 005679ea: ADD ESP,0x4
// 005679ed: PUSH EBP
// 005679ee: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 005679f3: ADD ESP,0x4
// 005679f6: XOR EDI,EDI
//   Label: LAB_005679f6
// 005679f8: PUSH EDI
// 005679f9: LEA EAX,[ESP + 0x2508]
//   Label: LAB_005679f9
//   XREF to: Stack[-0x748] (DATA)
// 00567a00: PUSH EAX
// 00567a01: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   Label: LAB_00567a01
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00567a06: ADD ESP,0x8
// 00567a09: MOV EAX,EDI
// 00567a0b: ADD ESP,0x2c3c
// 00567a11: POP EBP
// 00567a12: POP EDI
// 00567a13: POP ESI
// 00567a14: POP EBX
// 00567a15: RET
// 00567a16: MOV EAX,dword ptr [ESP + 0x2c38]
//   Label: LAB_00567a16
//   XREF to: Stack[-0x14] (READ)
// 00567a1d: PUSH EAX
// 00567a1e: LEA EAX,[ESP + 0x2508]
//   XREF to: Stack[-0x748] (DATA)
// 00567a25: PUSH EAX
// 00567a26: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00567a2b: ADD ESP,0x8
// 00567a2e: LEA EAX,[ESP + 0x2504]
//   XREF to: Stack[-0x748] (DATA)
// 00567a35: PUSH EAX
// 00567a36: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00567a3b: ADD ESP,0x4
// 00567a3e: MOV EBX,EAX
// 00567a40: JMP 0x0056780b
//   XREF to: 0056780b (UNCONDITIONAL_JUMP)
// 00567a45: MOV ESI,0x6440da
//   Label: caseD_1
//   XREF to: 006440da (DATA)
// 00567a4a: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a4f: MOV ESI,0x6440e7
//   Label: caseD_2
//   XREF to: 006440e7 (DATA)
// 00567a54: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a59: MOV ESI,0x6440f8
//   Label: caseD_3
//   XREF to: 006440f8 (DATA)
// 00567a5e: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a63: MOV ESI,0x644102
//   Label: caseD_4
//   XREF to: 00644102 (DATA)
// 00567a68: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a6d: MOV ESI,0x644108
//   Label: caseD_6
//   XREF to: 00644108 (DATA)
// 00567a72: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a77: MOV ESI,0x644110
//   Label: caseD_7
//   XREF to: 00644110 (DATA)
// 00567a7c: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a81: MOV ESI,0x644121
//   Label: caseD_8
//   XREF to: 00644121 (DATA)
// 00567a86: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a8b: MOV ESI,0x644129
//   Label: caseD_9
//   XREF to: 00644129 (DATA)
// 00567a90: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a95: MOV ESI,0x644138
//   Label: caseD_a
//   XREF to: 00644138 (DATA)
// 00567a9a: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567a9f: MOV ESI,0x64414b
//   Label: caseD_b
//   XREF to: 0064414b (DATA)
// 00567aa4: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567aa9: MOV ESI,0x644165
//   Label: caseD_c
//   XREF to: 00644165 (DATA)
// 00567aae: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567ab3: MOV ESI,0x644177
//   Label: default
//   XREF to: 00644177 (DATA)
// 00567ab8: JMP 0x0056782d
//   XREF to: 0056782d (UNCONDITIONAL_JUMP)
// 00567abd: MOV EAX,ESP
//   Label: LAB_00567abd
// 00567abf: PUSH EAX
// 00567ac0: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 00567ac5: ADD ESP,0x4
// 00567ac8: MOV ECX,ESP
// 00567aca: MOV EAX,dword ptr [ESP + 0x2c38]
//   XREF to: Stack[-0x14] (READ)
// 00567ad1: PUSH ECX
// 00567ad2: MOV EAX,dword ptr [EAX + 0x104]
// 00567ad8: PUSH EAX
// 00567ad9: MOV EDX,dword ptr [EAX + 0x154]
// 00567adf: CALL dword ptr [EDX + 0xd4]
// 00567ae5: ADD ESP,0x8
// 00567ae8: MOV EAX,dword ptr [ESP + 0x2c38]
// 00567aef: IMUL EDX,dword ptr [EAX + 0x108],0xec
// 00567af9: LEA EAX,[ESP + 0x8]
// 00567afd: ADD EAX,EDX
// 00567aff: ADD EAX,0x4
// 00567b02: PUSH EAX
// 00567b03: MOV EAX,dword ptr [ESP + 0x2c3c]
// 00567b0a: MOV ESI,dword ptr [EAX + 0x104]
// 00567b10: PUSH ESI
// 00567b11: PUSH 0x644189
//   XREF to: 00644189 (DATA)
// 00567b16: LEA EAX,[ESP + 0x2b74]
// 00567b1d: PUSH EAX
// 00567b1e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00567b23: ADD ESP,0x10
// 00567b26: JMP 0x0056787e
//   XREF to: 0056787e (UNCONDITIONAL_JUMP)
// 00567b2b: PUSH 0x644196
//   Label: LAB_00567b2b
//   XREF to: 00644196 (DATA)
// 00567b30: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00567b36: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00567b37: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00567b3c: ADD ESP,0x8
// 00567b3f: JMP 0x005679f6
//   XREF to: 005679f6 (UNCONDITIONAL_JUMP)
// 00567b44: PUSH 0x0
//   Label: LAB_00567b44
// 00567b46: XOR EDI,EAX
// 00567b48: JMP 0x005679f9
//   XREF to: 005679f9 (UNCONDITIONAL_JUMP)
// 00567b4d: INC ESI
//   Label: LAB_00567b4d
// 00567b4e: MOV EDX,dword ptr [EBP + 0x28]
// 00567b51: ADD EAX,0x114
// 00567b56: CMP ESI,EDX
// 00567b58: JL 0x005679a9
//   XREF to: 005679a9 (CONDITIONAL_JUMP)
// 00567b5e: PUSH EDI
//   Label: LAB_00567b5e
// 00567b5f: LEA EAX,[ESP + 0x2508]
//   XREF to: Stack[-0x748] (DATA)
// 00567b66: PUSH EAX
// 00567b67: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00567b6c: ADD ESP,0x8
// 00567b6f: MOV ESI,EAX
// 00567b71: MOV EDI,dword ptr [ESP + 0x2c58]
//   XREF to: Stack[0xc] (READ)
// 00567b78: PUSH EDI
// 00567b79: MOV AL,byte ptr [ESI]
//   Label: LAB_00567b79
// 00567b7b: MOV byte ptr [EDI],AL
// 00567b7d: CMP AL,0x0
// 00567b7f: JZ 0x00567b91
//   XREF to: 00567b91 (CONDITIONAL_JUMP)
// 00567b81: MOV AL,byte ptr [ESI + 0x1]
// 00567b84: ADD ESI,0x2
// 00567b87: MOV byte ptr [EDI + 0x1],AL
// 00567b8a: ADD EDI,0x2
// 00567b8d: CMP AL,0x0
// 00567b8f: JNZ 0x00567b79
//   XREF to: 00567b79 (CONDITIONAL_JUMP)
// 00567b91: POP EDI
//   Label: LAB_00567b91
// 00567b92: PUSH 0x0
// 00567b94: LEA EAX,[ESP + 0x2508]
//   XREF to: Stack[-0x748] (DATA)
// 00567b9b: PUSH EAX
// 00567b9c: MOV EDI,0x1
// 00567ba1: JMP 0x00567a01
//   XREF to: 00567a01 (UNCONDITIONAL_JUMP)
// 00567ba6: PUSH EBX
//   Label: LAB_00567ba6
// 00567ba7: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00567bad: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 00567bae: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 00567bb3: ADD ESP,0x8
// 00567bb6: JMP 0x005679f6
//   XREF to: 005679f6 (UNCONDITIONAL_JUMP)
