// Name: core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
// Address: 004bd750
// Address Range: [[004bd750, 004bd8d0]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_preprocessMusicFiles_FUN_004bd750(char * source_directory)
// Cross-references:
//   core_fileman.cpp_refreshSoundDirectory_FUN_004be590 (004be590) at 004be5a8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_mp3_00629552
//   TerminatedCString s_core_fileman_cpp_00629558
//   TerminatedCString s_Can_t_access_s_0062956c
//   TerminatedCString s_sfx_0062957c
//   TerminatedCString s_Computing_length_of_s_00629580
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_file.c_makepath_FUN_005febfc
//   crt_string.c_splitpath_FUN_005ff178
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20

#include "nocturne.h"

void __cdecl core_fileman_cpp_preprocessMusicFiles_FUN_004bd750(char *source_directory)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int index;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *in_stack_00000008;
  uint in_stack_fffff9bc;
  int local_440;
  SFoundFileInfo SStack_43c;
  char acStack_130 [4];
  char acStack_12c [264];
  undefined1 local_24 [8];
  char **appcStack_1c [3];
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_24);
  shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
            ((CStrList *)(local_24 + 4),in_stack_00000008,"*.mp3");
  index = 0;
  if (0 < (int)appcStack_1c[0]) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)appcStack_1c,index);
      pcVar4 = &stack0xfffff9a0;
      do {
        cVar1 = *pcVar2;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffff9a0);
      if (iVar3 == 0) {
        g_CurrentLineNumber = 0x3c;
        g_CurrentFilename = "..\\core\\fileman.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't access %s");
      }
      crt_string_c_splitpath_FUN_005ff178
                (&stack0xfffff9a8,local_24 + 4,acStack_130,(char *)&SStack_43c.timestamp,(char *)0x0
                );
      crt_file_c_makepath_FUN_005febfc
                ((char *)&local_440,(char *)appcStack_1c,acStack_12c,
                 (char *)&SStack_43c.container_size,"sfx");
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_43c);
      if ((iVar3 == 0) || (SStack_43c.container_size < local_440 - 1U)) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Computing length of %s");
        sound_sndmain_cpp_convertMp3ToSfxMetadata_FUN_005acf20(&stack0xfffff9b8);
      }
      index = index + 1;
    } while (index < (int)appcStack_1c[0]);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)appcStack_1c,0,in_stack_fffff9bc);
  return;
}


// Assembly code:
// 004bd750: PUSH EBX
//   Label: core_fileman.cpp_preprocessMusicFiles_FUN_004bd750
// 004bd751: PUSH ESI
// 004bd752: PUSH EDI
// 004bd753: PUSH EBP
// 004bd754: SUB ESP,0x63c
// 004bd75a: LEA EAX,[ESP + 0x628]
//   XREF to: Stack[-0x24] (DATA)
// 004bd761: PUSH EAX
// 004bd762: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bd767: ADD ESP,0x4
// 004bd76a: PUSH 0x629552
//   XREF to: 00629552 (DATA)
// 004bd76f: MOV EDX,dword ptr [ESP + 0x654]
//   XREF to: Stack[0x4] (READ)
// 004bd776: PUSH EDX
// 004bd777: LEA EAX,[ESP + 0x630]
//   XREF to: Stack[-0x24] (DATA)
// 004bd77e: PUSH EAX
// 004bd77f: CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   XREF to: 004a39e0 (UNCONDITIONAL_CALL)
// 004bd784: ADD ESP,0xc
// 004bd787: MOV ECX,dword ptr [ESP + 0x628]
//   XREF to: Stack[-0x24] (READ)
// 004bd78e: XOR EBX,EBX
// 004bd790: TEST ECX,ECX
// 004bd792: JLE 0x004bd86a
//   XREF to: 004bd86a (CONDITIONAL_JUMP)
// 004bd798: MOV EBP,0x3c
// 004bd79d: PUSH EBX
//   Label: LAB_004bd79d
// 004bd79e: LEA EAX,[ESP + 0x62c]
//   XREF to: Stack[-0x24] (DATA)
// 004bd7a5: PUSH EAX
// 004bd7a6: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bd7ab: ADD ESP,0x8
// 004bd7ae: MOV EDI,ESP
// 004bd7b0: MOV ESI,EAX
// 004bd7b2: PUSH EDI
// 004bd7b3: MOV AL,byte ptr [ESI]
//   Label: LAB_004bd7b3
// 004bd7b5: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x64c] (DATA)
// 004bd7b7: CMP AL,0x0
// 004bd7b9: JZ 0x004bd7cb
//   XREF to: 004bd7cb (CONDITIONAL_JUMP)
// 004bd7bb: MOV AL,byte ptr [ESI + 0x1]
// 004bd7be: ADD ESI,0x2
// 004bd7c1: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x64b] (WRITE)
// 004bd7c4: ADD EDI,0x2
// 004bd7c7: CMP AL,0x0
// 004bd7c9: JNZ 0x004bd7b3
//   XREF to: 004bd7b3 (CONDITIONAL_JUMP)
// 004bd7cb: POP EDI
//   Label: LAB_004bd7cb
// 004bd7cc: MOV EAX,ESP
// 004bd7ce: PUSH EAX
// 004bd7cf: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004bd7d4: ADD ESP,0x4
// 004bd7d7: TEST EAX,EAX
// 004bd7d9: JZ 0x004bd887
//   XREF to: 004bd887 (CONDITIONAL_JUMP)
// 004bd7df: PUSH 0x0
//   Label: LAB_004bd7df
// 004bd7e1: LEA EAX,[ESP + 0x42c]
//   XREF to: Stack[-0x224] (DATA)
// 004bd7e8: PUSH EAX
// 004bd7e9: LEA EAX,[ESP + 0x530]
//   XREF to: Stack[-0x124] (DATA)
// 004bd7f0: PUSH EAX
// 004bd7f1: LEA EAX,[ESP + 0x644]
//   XREF to: Stack[-0x14] (DATA)
// 004bd7f8: PUSH EAX
// 004bd7f9: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x64c] (DATA)
// 004bd7fd: PUSH EAX
// 004bd7fe: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 004bd803: ADD ESP,0x14
// 004bd806: PUSH 0x62957c
//   XREF to: 0062957c (DATA)
// 004bd80b: LEA EAX,[ESP + 0x42c]
//   XREF to: Stack[-0x224] (DATA)
// 004bd812: PUSH EAX
// 004bd813: LEA EAX,[ESP + 0x530]
//   XREF to: Stack[-0x124] (DATA)
// 004bd81a: PUSH EAX
// 004bd81b: LEA EAX,[ESP + 0x644]
//   XREF to: Stack[-0x14] (DATA)
// 004bd822: PUSH EAX
// 004bd823: LEA EAX,[ESP + 0x224]
//   XREF to: Stack[-0x438] (DATA)
// 004bd82a: PUSH EAX
// 004bd82b: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 004bd830: ADD ESP,0x14
// 004bd833: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x438] (DATA)
// 004bd83a: PUSH EAX
// 004bd83b: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004bd840: ADD ESP,0x4
// 004bd843: TEST EAX,EAX
// 004bd845: JZ 0x004bd8ad
//   XREF to: 004bd8ad (CONDITIONAL_JUMP)
// 004bd847: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x440] (READ)
// 004bd84e: MOV EDX,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0x22c] (READ)
// 004bd855: DEC EAX
// 004bd856: CMP EAX,EDX
// 004bd858: JA 0x004bd8ad
//   XREF to: 004bd8ad (CONDITIONAL_JUMP)
// 004bd85a: MOV ESI,dword ptr [ESP + 0x628]
//   Label: LAB_004bd85a
//   XREF to: Stack[-0x24] (READ)
// 004bd861: INC EBX
// 004bd862: CMP EBX,ESI
// 004bd864: JL 0x004bd79d
//   XREF to: 004bd79d (CONDITIONAL_JUMP)
// 004bd86a: PUSH 0x0
//   Label: LAB_004bd86a
// 004bd86c: LEA EAX,[ESP + 0x62c]
//   XREF to: Stack[-0x24] (DATA)
// 004bd873: PUSH EAX
// 004bd874: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bd879: ADD ESP,0x8
// 004bd87c: ADD ESP,0x63c
// 004bd882: POP EBP
// 004bd883: POP EDI
// 004bd884: POP ESI
// 004bd885: POP EBX
// 004bd886: RET
// 004bd887: MOV EAX,ESP
//   Label: LAB_004bd887
// 004bd889: PUSH EAX
// 004bd88a: MOV EDI,0x629558
//   XREF to: 00629558 (DATA)
// 004bd88f: PUSH 0x62956c
//   XREF to: 0062956c (DATA)
// 004bd894: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004bd89a: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004bd8a0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bd8a5: ADD ESP,0x8
// 004bd8a8: JMP 0x004bd7df
//   XREF to: 004bd7df (UNCONDITIONAL_JUMP)
// 004bd8ad: MOV EAX,ESP
//   Label: LAB_004bd8ad
// 004bd8af: PUSH EAX
// 004bd8b0: PUSH 0x629580
//   XREF to: 00629580 (DATA)
// 004bd8b5: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004bd8bb: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bd8bc: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bd8c1: ADD ESP,0xc
// 004bd8c4: MOV EAX,ESP
// 004bd8c6: PUSH EAX
// 004bd8c7: CALL sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20
//   XREF to: 005acf20 (UNCONDITIONAL_CALL)
// 004bd8cc: ADD ESP,0x4
// 004bd8cf: JMP 0x004bd85a
//   XREF to: 004bd85a (UNCONDITIONAL_JUMP)
