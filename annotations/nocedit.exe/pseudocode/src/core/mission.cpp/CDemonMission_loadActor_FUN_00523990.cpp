// Name: core_mission.cpp_CDemonMission_loadActor_FUN_00523990
// Address: 00523990
// Address Range: [[00523990, 00523aee]]
// Convention: __cdecl
// Signature: CDemonActor * core_mission.cpp_CDemonMission_loadActor_FUN_00523990(CDemonMission * this_ptr, FILE * file, CDemonActor * current_actor, char * property_description)
// Cross-references:
//   core_actor.cpp_serializeActor_FUN_0040b870 (0040b870) at 0040b896 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_unknown_00638f9b
//   TerminatedCString s_unknown_00638fa5
//   TerminatedCString s_core_mission_cpp_00638faf
//   TerminatedCString s_Error_reading_actor_poin_00638fc3
//   TerminatedCString s_anon_00638ffb
//   TerminatedCString s_WARNING_Can_t_find_actor_00639001
//   TerminatedCString s_x_0063905b
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   TerminatedCString s_none_0067d690
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00524030
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_005fea10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

CDemonActor * __cdecl
core_mission_cpp_CDemonMission_loadActor_FUN_00523990
          (CDemonMission *this_ptr,FILE *file,CDemonActor *current_actor,char *property_description)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *unaff_ESI;
  
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
  } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) != 0);
  if (iVar1 == 0x22) {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 != 0x22) {
      crt_stdio_c_fputc_FUN_005fea10(iVar1,file);
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file,"%[^\"]",&stack0xffffff1c);
      if (iVar1 == 1) {
        iVar1 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff20,"(none)");
        if (iVar1 == 0) {
          unaff_ESI = (CDemonActor *)0x0;
        }
        else {
          unaff_ESI = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(this_ptr);
          if (unaff_ESI == (CDemonActor *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"WARNING.  Can't find actor '%s' in %s property %s.  (Please note this in a bug report...)");
          }
        }
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
        if (iVar1 == 0x22) goto LAB_00523a18;
      }
    }
  }
  else {
    crt_stdio_c_fputc_FUN_005fea10(iVar1,file);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file,"%x");
    if (iVar1 == 1) goto LAB_00523a18;
  }
  do {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x22d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading actor pointer.\nOwner: %s\nDescription: %s\n");
LAB_00523a18:
    while (iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file), iVar1 != -1) {
      if (iVar1 == 10) {
        return unaff_ESI;
      }
    }
  } while( true );
}


// Assembly code:
// 00523990: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_loadActor_FUN_00523990
// 00523991: PUSH ESI
// 00523992: PUSH EDI
// 00523993: PUSH EBP
// 00523994: SUB ESP,0xcc
// 0052399a: MOV EBX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 005239a1: MOV EDI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0xc] (READ)
// 005239a8: MOV EBP,dword ptr [ESP + 0xec]
//   XREF to: Stack[0x10] (READ)
// 005239af: TEST EDI,EDI
// 005239b1: JNZ 0x005239b8
//   XREF to: 005239b8 (CONDITIONAL_JUMP)
// 005239b3: MOV EDI,0x638f9b
//   XREF to: 00638f9b (DATA)
// 005239b8: TEST EBP,EBP
//   Label: LAB_005239b8
// 005239ba: JNZ 0x005239c1
//   XREF to: 005239c1 (CONDITIONAL_JUMP)
// 005239bc: MOV EBP,0x638fa5
//   XREF to: 00638fa5 (DATA)
// 005239c1: PUSH EBX
//   Label: LAB_005239c1
// 005239c2: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005239c7: MOV EDX,EAX
// 005239c9: ADD ESP,0x4
// 005239cc: INC DL
// 005239ce: AND EDX,0xff
// 005239d4: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005239db: JNZ 0x005239c1
//   XREF to: 005239c1 (CONDITIONAL_JUMP)
// 005239dd: CMP EAX,0x22
// 005239e0: JNZ 0x00523aba
//   XREF to: 00523aba (CONDITIONAL_JUMP)
// 005239e6: PUSH EBX
// 005239e7: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005239ec: ADD ESP,0x4
// 005239ef: CMP EAX,0x22
// 005239f2: JNZ 0x00523a38
//   XREF to: 00523a38 (CONDITIONAL_JUMP)
// 005239f4: PUSH EBP
//   Label: LAB_005239f4
//   XREF to: 00638fa5 (DATA)
// 005239f5: PUSH EDI
//   XREF to: 00638f9b (DATA)
// 005239f6: MOV EAX,0x638faf
//   XREF to: 00638faf (PARAM)
// 005239fb: MOV EDX,0x22d
// 00523a00: PUSH 0x638fc3
//   XREF to: 00638fc3 (DATA)
// 00523a05: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00523a0a: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00523a10: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00523a15: ADD ESP,0xc
// 00523a18: PUSH EBX
//   Label: LAB_00523a18
// 00523a19: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00523a1e: ADD ESP,0x4
// 00523a21: CMP EAX,-0x1
// 00523a24: JZ 0x005239f4
//   XREF to: 005239f4 (CONDITIONAL_JUMP)
// 00523a26: CMP EAX,0xa
// 00523a29: JNZ 0x00523a18
//   XREF to: 00523a18 (CONDITIONAL_JUMP)
// 00523a2b: MOV EAX,ESI
// 00523a2d: ADD ESP,0xcc
// 00523a33: POP EBP
// 00523a34: POP EDI
// 00523a35: POP ESI
// 00523a36: POP EBX
// 00523a37: RET
// 00523a38: PUSH EBX
//   Label: LAB_00523a38
// 00523a39: PUSH EAX
// 00523a3a: CALL crt_stdio.c_fputc_FUN_005fea10
//   XREF to: 005fea10 (UNCONDITIONAL_CALL)
// 00523a3f: ADD ESP,0x8
// 00523a42: MOV EAX,ESP
// 00523a44: PUSH EAX
// 00523a45: PUSH 0x638ffb
//   XREF to: 00638ffb (DATA)
// 00523a4a: PUSH EBX
// 00523a4b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00523a50: ADD ESP,0xc
// 00523a53: CMP EAX,0x1
// 00523a56: JNZ 0x005239f4
//   XREF to: 005239f4 (CONDITIONAL_JUMP)
// 00523a58: PUSH 0x67d690
//   XREF to: 0067d690 (DATA)
// 00523a5d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xdc] (DATA)
// 00523a61: PUSH EAX
// 00523a62: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00523a67: ADD ESP,0x8
// 00523a6a: TEST EAX,EAX
// 00523a6c: JNZ 0x00523a84
//   XREF to: 00523a84 (CONDITIONAL_JUMP)
// 00523a6e: XOR ESI,ESI
// 00523a70: PUSH EBX
//   Label: LAB_00523a70
// 00523a71: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00523a76: ADD ESP,0x4
// 00523a79: CMP EAX,0x22
// 00523a7c: JNZ 0x005239f4
//   XREF to: 005239f4 (CONDITIONAL_JUMP)
// 00523a82: JMP 0x00523a18
//   XREF to: 00523a18 (UNCONDITIONAL_JUMP)
// 00523a84: MOV EAX,ESP
//   Label: LAB_00523a84
// 00523a86: PUSH EAX
// 00523a87: MOV EDX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 00523a8e: PUSH EDX
// 00523a8f: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 00523a94: ADD ESP,0x8
// 00523a97: MOV ESI,EAX
// 00523a99: TEST EAX,EAX
// 00523a9b: JNZ 0x00523a70
//   XREF to: 00523a70 (CONDITIONAL_JUMP)
// 00523a9d: PUSH EBP
//   XREF to: 00638fa5 (DATA)
// 00523a9e: PUSH EDI
//   XREF to: 00638f9b (DATA)
// 00523a9f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 00523aa3: PUSH EAX
// 00523aa4: PUSH 0x639001
//   XREF to: 00639001 (DATA)
// 00523aa9: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00523aaf: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00523ab0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00523ab5: ADD ESP,0x14
// 00523ab8: JMP 0x00523a70
//   XREF to: 00523a70 (UNCONDITIONAL_JUMP)
// 00523aba: PUSH EBX
//   Label: LAB_00523aba
// 00523abb: PUSH EAX
// 00523abc: CALL crt_stdio.c_fputc_FUN_005fea10
//   XREF to: 005fea10 (UNCONDITIONAL_CALL)
// 00523ac1: ADD ESP,0x8
// 00523ac4: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0x14] (DATA)
// 00523acb: PUSH EAX
// 00523acc: PUSH 0x63905b
//   XREF to: 0063905b (DATA)
// 00523ad1: PUSH EBX
// 00523ad2: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00523ad7: ADD ESP,0xc
// 00523ada: CMP EAX,0x1
// 00523add: JNZ 0x005239f4
//   XREF to: 005239f4 (CONDITIONAL_JUMP)
// 00523ae3: MOV ESI,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 00523aea: JMP 0x00523a18
//   XREF to: 00523a18 (UNCONDITIONAL_JUMP)
