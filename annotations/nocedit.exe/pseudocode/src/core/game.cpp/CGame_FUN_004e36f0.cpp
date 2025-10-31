// Name: core_game.cpp_CGame_FUN_004e36f0
// Address: 004e36f0
// Address Range: [[004e36f0, 004e37f7]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004e36f0(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db4e0 [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd12f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_noc_0062d4c5
//   TerminatedCString s_noc_0062d4c9
//   TerminatedCString s_noc_0062d4ce
//   TerminatedCString s_save_0062d4d4
//   TerminatedCString s_Select_file_to_load_0062d4d9
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char g_CurrentSaveFile
//   undefined1 DAT_02d82c81
//   undefined1 DAT_02d82c82
//   undefined1 DAT_02d82c83
// Function calls:
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e36f0(CGame *this_ptr)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char *directory;
  bool auto_select_flag;
  char acStack_204 [8];
  char acStack_1fc [240];
  char local_10c [4];
  char acStack_108 [4];
  char acStack_104 [248];
  
  this_ptr->need_chapter_reload = 0;
  *(undefined1 *)&this_ptr->save_version = 0;
  crt_string_c_splitpath_FUN_005ff178
            (&g_CurrentSaveFile,(char *)0x0,(char *)0x0,(char *)0x0,local_10c);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(acStack_108,"noc");
  if ((iVar2 == 0) ||
     (iVar2 = crt_string_c_stricmp_FUN_005fe7f0(acStack_104,".noc"), iVar2 == 0)) {
    pcVar4 = acStack_204;
    pcVar3 = &g_CurrentSaveFile;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  else {
    acStack_204[0] = '\0';
  }
  pcVar3 = acStack_204;
  auto_select_flag = true;
  directory = "*.noc";
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Select file to load");
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,pcVar4,directory,pcVar3,auto_select_flag);
  pcVar4 = acStack_1fc;
  if (iVar2 == 0) {
    return;
  }
  piVar5 = &this_ptr->save_version;
  this_ptr->need_chapter_reload = 1;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004e36f0: PUSH EBX
//   Label: core_game.cpp_CGame_FUN_004e36f0
// 004e36f1: PUSH ESI
// 004e36f2: PUSH EDI
// 004e36f3: SUB ESP,0x204
// 004e36f9: MOV EBX,dword ptr [ESP + 0x214]
//   XREF to: Stack[0x4] (READ)
// 004e3700: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x10c] (DATA)
// 004e3707: PUSH EAX
// 004e3708: PUSH 0x0
// 004e370a: PUSH 0x0
// 004e370c: PUSH 0x0
// 004e370e: MOV dword ptr [EBX + 0x9c4],0x0
// 004e3718: PUSH 0x2d82c80
//   XREF to: 02d82c80 (DATA)
// 004e371d: MOV byte ptr [EBX + 0x9c8],0x0
// 004e3724: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 004e3729: ADD ESP,0x14
// 004e372c: PUSH 0x62d4c5
//   XREF to: 0062d4c5 (DATA)
// 004e3731: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x10c] (DATA)
// 004e3738: PUSH EAX
// 004e3739: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e373e: ADD ESP,0x8
// 004e3741: TEST EAX,EAX
// 004e3743: JZ 0x004e375e
//   XREF to: 004e375e (CONDITIONAL_JUMP)
// 004e3745: PUSH 0x62d4c9
//   XREF to: 0062d4c9 (DATA)
// 004e374a: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x10c] (DATA)
// 004e3751: PUSH EAX
// 004e3752: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004e3757: ADD ESP,0x8
// 004e375a: TEST EAX,EAX
// 004e375c: JNZ 0x004e37bb
//   XREF to: 004e37bb (CONDITIONAL_JUMP)
// 004e375e: MOV ESI,0x2d82c80
//   Label: LAB_004e375e
//   XREF to: 02d82c80 (DATA)
// 004e3763: MOV EDI,ESP
// 004e3765: PUSH EDI
// 004e3766: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3766
//   XREF to: 02d82c80 (READ)
//   XREF to: 02d82c82 (READ)
// 004e3768: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x210] (DATA)
// 004e376a: CMP AL,0x0
// 004e376c: JZ 0x004e377e
//   XREF to: 004e377e (CONDITIONAL_JUMP)
// 004e376e: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02d82c81 (READ)
//   XREF to: 02d82c83 (READ)
// 004e3771: ADD ESI,0x2
// 004e3774: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x20f] (WRITE)
// 004e3777: ADD EDI,0x2
// 004e377a: CMP AL,0x0
// 004e377c: JNZ 0x004e3766
//   XREF to: 004e3766 (CONDITIONAL_JUMP)
// 004e377e: POP EDI
//   Label: LAB_004e377e
// 004e377f: PUSH 0x1
//   Label: LAB_004e377f
// 004e3781: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004e3785: PUSH EAX
// 004e3786: PUSH 0x62d4ce
//   XREF to: 0062d4ce (DATA)
// 004e378b: PUSH 0x62d4d4
//   XREF to: 0062d4d4 (DATA)
// 004e3790: PUSH 0x62d4d9
//   XREF to: 0062d4d9 (DATA)
// 004e3795: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e379a: ADD ESP,0x4
// 004e379d: PUSH EAX
// 004e379e: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004e37a4: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004e37a5: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 004e37aa: ADD ESP,0x18
// 004e37ad: TEST EAX,EAX
// 004e37af: JNZ 0x004e37c2
//   XREF to: 004e37c2 (CONDITIONAL_JUMP)
// 004e37b1: ADD ESP,0x204
// 004e37b7: POP EDI
// 004e37b8: POP ESI
// 004e37b9: POP EBX
// 004e37ba: RET
// 004e37bb: XOR AH,AH
//   Label: LAB_004e37bb
// 004e37bd: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0x210] (DATA)
// 004e37c0: JMP 0x004e377f
//   XREF to: 004e377f (UNCONDITIONAL_JUMP)
// 004e37c2: MOV ESI,ESP
//   Label: LAB_004e37c2
// 004e37c4: LEA EDI,[EBX + 0x9c8]
// 004e37ca: MOV dword ptr [EBX + 0x9c4],0x1
// 004e37d4: PUSH EDI
// 004e37d5: MOV AL,byte ptr [ESI]
//   Label: LAB_004e37d5
//   XREF to: Stack[-0x210] (DATA)
// 004e37d7: MOV byte ptr [EDI],AL
// 004e37d9: CMP AL,0x0
// 004e37db: JZ 0x004e37ed
//   XREF to: 004e37ed (CONDITIONAL_JUMP)
// 004e37dd: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x20f] (READ)
// 004e37e0: ADD ESI,0x2
// 004e37e3: MOV byte ptr [EDI + 0x1],AL
// 004e37e6: ADD EDI,0x2
// 004e37e9: CMP AL,0x0
// 004e37eb: JNZ 0x004e37d5
//   XREF to: 004e37d5 (CONDITIONAL_JUMP)
// 004e37ed: POP EDI
//   Label: LAB_004e37ed
// 004e37ee: ADD ESP,0x204
// 004e37f4: POP EDI
// 004e37f5: POP ESI
// 004e37f6: POP EBX
// 004e37f7: RET
