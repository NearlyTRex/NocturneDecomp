// Name: core_msnedit.cpp_FUN_0053c210
// Address: 0053c210
// Address Range: [[0053c210, 0053c33f]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c210()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a904 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_actors_in_set_0063c850
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEditorTools g_CEditorToolsPtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_mission.cpp_CDemonMission_FUN_00524030
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053c210(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

char * core_msnedit_cpp_FUN_0053c210(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int index;
  BADSPACEBASE *in_ESP;
  int iVar4;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  CDemonMission *in_stack_00000014;
  char **in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  CStrList_vtable *in_stack_fffffc64;
  char **in_stack_fffffc68;
  CStrList_vtable *in_stack_fffffc6c;
  uint in_stack_fffffc70;
  
  if ((int)g_CDemonSetPtr->actor_list_ptr < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No actors in set.");
    return (char *)0x0;
  }
  iVar3 = 0;
  iVar4 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc4c);
  while( true ) {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar3) break;
    pcVar1 = g_CDemonSetPtr->actor_list_data + iVar4;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,*(char **)pcVar1);
  }
  iVar4 = -1;
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffffc50);
  iVar3 = iVar4;
  if ((in_stack_0000000c != (char *)0x0) && (index = 0, 0 < (int)in_stack_fffffc54)) {
    do {
      pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0xfffffc54,index);
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,pcVar1);
      iVar3 = index;
      if (iVar2 == 0) break;
      index = index + 1;
      iVar3 = iVar4;
    } while (index < (int)in_stack_fffffc54);
  }
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc54,in_stack_00000010,iVar3,0);
  if (iVar3 < 0) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc58,0,(uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,
               (uint)in_stack_fffffc60,(uint)in_stack_fffffc64,(uint)in_stack_fffffc68);
    return (char *)0x0;
  }
  shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffc58,iVar3);
  pcVar1 = core_mission_cpp_CDemonMission_FUN_00524030(in_stack_00000014);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc60,0,(uint)in_stack_fffffc60,(uint)in_stack_fffffc64,
             (uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,in_stack_fffffc70);
  return pcVar1;
}


// Assembly code:
// 0053c210: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053c210
// 0053c211: PUSH ESI
// 0053c212: PUSH EDI
// 0053c213: SUB ESP,0x3a8
// 0053c219: MOV EDI,dword ptr [ESP + 0x3c0]
//   XREF to: Stack[0xc] (READ)
// 0053c220: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053c225: CMP dword ptr [EAX + 0x14d154],0x1
//   XREF to: 032613cc (READ)
// 0053c22c: JL 0x0053c265
//   XREF to: 0053c265 (CONDITIONAL_JUMP)
// 0053c22e: MOV EAX,ESP
// 0053c230: PUSH EAX
// 0053c231: XOR EBX,EBX
// 0053c233: XOR ESI,ESI
// 0053c235: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0053c23a: ADD ESP,0x4
// 0053c23d: MOV EAX,[0x006810c8]
//   Label: LAB_0053c23d
//   XREF to: 006810c8 (READ)
// 0053c242: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0053c248: JGE 0x0053c287
//   XREF to: 0053c287 (CONDITIONAL_JUMP)
// 0053c24a: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 0053c251: PUSH EDX
// 0053c252: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c256: PUSH EAX
// 0053c257: ADD ESI,0x4
// 0053c25a: INC EBX
// 0053c25b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0053c260: ADD ESP,0x8
// 0053c263: JMP 0x0053c23d
//   XREF to: 0053c23d (UNCONDITIONAL_JUMP)
// 0053c265: PUSH 0x63c850
//   Label: LAB_0053c265
//   XREF to: 0063c850 (DATA)
// 0053c26a: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053c270: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053c271: XOR EBX,EBX
// 0053c273: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053c278: ADD ESP,0x8
// 0053c27b: MOV EAX,EBX
// 0053c27d: ADD ESP,0x3a8
// 0053c283: POP EDI
// 0053c284: POP ESI
// 0053c285: POP EBX
// 0053c286: RET
// 0053c287: MOV EAX,ESP
//   Label: LAB_0053c287
// 0053c289: PUSH EAX
// 0053c28a: MOV ESI,0xffffffff
// 0053c28f: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0053c294: ADD ESP,0x4
// 0053c297: TEST EDI,EDI
// 0053c299: JZ 0x0053c2c2
//   XREF to: 0053c2c2 (CONDITIONAL_JUMP)
// 0053c29b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c29e: XOR EBX,EBX
// 0053c2a0: TEST EAX,EAX
// 0053c2a2: JLE 0x0053c2c2
//   XREF to: 0053c2c2 (CONDITIONAL_JUMP)
// 0053c2a4: PUSH EBX
//   Label: LAB_0053c2a4
// 0053c2a5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c2a9: PUSH EAX
// 0053c2aa: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053c2af: ADD ESP,0x8
// 0053c2b2: PUSH EAX
// 0053c2b3: PUSH EDI
// 0053c2b4: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0053c2b9: ADD ESP,0x8
// 0053c2bc: TEST EAX,EAX
// 0053c2be: JNZ 0x0053c31a
//   XREF to: 0053c31a (CONDITIONAL_JUMP)
// 0053c2c0: MOV ESI,EBX
// 0053c2c2: PUSH 0x0
//   Label: LAB_0053c2c2
// 0053c2c4: PUSH ESI
// 0053c2c5: MOV EBX,dword ptr [ESP + 0x3c4]
//   XREF to: Stack[0x8] (READ)
// 0053c2cc: PUSH EBX
// 0053c2cd: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c2d1: PUSH EAX
// 0053c2d2: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0053c2d7: ADD ESP,0x10
// 0053c2da: TEST EAX,EAX
// 0053c2dc: JL 0x0053c324
//   XREF to: 0053c324 (CONDITIONAL_JUMP)
// 0053c2de: PUSH EAX
// 0053c2df: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c2e3: PUSH EAX
// 0053c2e4: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0053c2e9: ADD ESP,0x8
// 0053c2ec: PUSH EAX
// 0053c2ed: MOV ESI,dword ptr [ESP + 0x3bc]
//   XREF to: Stack[0x4] (READ)
// 0053c2f4: PUSH ESI
// 0053c2f5: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0053c2fa: ADD ESP,0x8
// 0053c2fd: PUSH 0x0
// 0053c2ff: MOV EBX,EAX
// 0053c301: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c305: PUSH EAX
// 0053c306: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053c30b: ADD ESP,0x8
// 0053c30e: MOV EAX,EBX
// 0053c310: ADD ESP,0x3a8
// 0053c316: POP EDI
// 0053c317: POP ESI
// 0053c318: POP EBX
// 0053c319: RET
// 0053c31a: MOV ECX,dword ptr [ESP]
//   Label: LAB_0053c31a
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c31d: INC EBX
// 0053c31e: CMP EBX,ECX
// 0053c320: JL 0x0053c2a4
//   XREF to: 0053c2a4 (CONDITIONAL_JUMP)
// 0053c322: JMP 0x0053c2c2
//   XREF to: 0053c2c2 (UNCONDITIONAL_JUMP)
// 0053c324: XOR EBX,EBX
//   Label: LAB_0053c324
// 0053c326: PUSH EBX
// 0053c327: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3b4] (DATA)
// 0053c32b: PUSH EAX
// 0053c32c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0053c331: ADD ESP,0x8
// 0053c334: MOV EAX,EBX
// 0053c336: ADD ESP,0x3a8
// 0053c33c: POP EDI
// 0053c33d: POP ESI
// 0053c33e: POP EBX
// 0053c33f: RET
