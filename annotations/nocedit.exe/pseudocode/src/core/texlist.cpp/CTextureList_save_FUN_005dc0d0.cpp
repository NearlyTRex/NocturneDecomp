// Name: core_texlist.cpp_CTextureList_save_FUN_005dc0d0
// Address: 005dc0d0
// Address Range: [[005dc0d0, 005dc22c]]
// Convention: __cdecl
// Signature: void core_texlist.cpp_CTextureList_save_FUN_005dc0d0(CTextureList * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_core_texlist_cpp_00654f54
//   TerminatedCString s_CTextureList_save_No_ext_00654f68
//   TerminatedCString s_tex_00654f90
//   undefined4 s_tex_00654f91
//   undefined4 s_ex_00654f92
//   undefined4 s_x_00654f93
//   TerminatedCString s_wt_00654f95
//   TerminatedCString s_data_00654f98
//   TerminatedCString s_core_texlist_cpp_00654f9d
//   TerminatedCString s_CTextureList_save_Bad_fi_00654fb1
//   TerminatedCString s_d_00654fd4
//   TerminatedCString s_s_d_00654fd8
//   TerminatedCString s_core_texlist_cpp_00654fdf
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_save_FUN_005dc0d0(CTextureList *this_ptr,char *filename)

{
  char cVar1;
  FILE *pFVar2;
  FILE *unaff_EBX;
  BADSPACEBASE *in_ESP;
  FILE *unaff_ESI;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = &stack0xfffffeec;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    pcVar3 = &stack0xfffffeec;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = &stack0xfffffeec;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_005dc120;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_005dc120;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_005dc120:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0xad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - No extension found");
  }
  pcVar3 = ".tex";
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xfffffef0,"wt");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\texlist.cpp";
    g_CurrentLineNumber = 0xb6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CTextureList::save - Bad filename!");
  }
  iVar5 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(unaff_ESI,"%d\n");
  if (0 < this_ptr->texture_count) {
    do {
      iVar5 = iVar5 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(unaff_EBX,"%s,%d\n");
    } while (iVar5 < this_ptr->texture_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EBX,"..\\core\\texlist.cpp",0xc3);
  return;
}


// Assembly code:
// 005dc0d0: PUSH EBX
//   Label: core_texlist.cpp_CTextureList_save_FUN_005dc0d0
// 005dc0d1: PUSH ESI
// 005dc0d2: PUSH EDI
// 005dc0d3: PUSH EBP
// 005dc0d4: SUB ESP,0x104
// 005dc0da: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005dc0e1: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 005dc0e8: MOV EDI,ESP
// 005dc0ea: MOV DL,0x2e
// 005dc0ec: PUSH EDI
// 005dc0ed: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc0ed
// 005dc0ef: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 005dc0f1: CMP AL,0x0
// 005dc0f3: JZ 0x005dc105
//   XREF to: 005dc105 (CONDITIONAL_JUMP)
// 005dc0f5: MOV AL,byte ptr [ESI + 0x1]
// 005dc0f8: ADD ESI,0x2
// 005dc0fb: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 005dc0fe: ADD EDI,0x2
// 005dc101: CMP AL,0x0
// 005dc103: JNZ 0x005dc0ed
//   XREF to: 005dc0ed (CONDITIONAL_JUMP)
// 005dc105: POP EDI
//   Label: LAB_005dc105
// 005dc106: MOV ESI,ESP
// 005dc108: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc108
//   XREF to: Stack[-0x114] (DATA)
// 005dc10a: CMP AL,DL
// 005dc10c: JZ 0x005dc120
//   XREF to: 005dc120 (CONDITIONAL_JUMP)
// 005dc10e: CMP AL,0x0
// 005dc110: JZ 0x005dc11e
//   XREF to: 005dc11e (CONDITIONAL_JUMP)
// 005dc112: INC ESI
// 005dc113: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x113] (DATA)
// 005dc115: CMP AL,DL
// 005dc117: JZ 0x005dc120
//   XREF to: 005dc120 (CONDITIONAL_JUMP)
// 005dc119: INC ESI
// 005dc11a: CMP AL,0x0
// 005dc11c: JNZ 0x005dc108
//   XREF to: 005dc108 (CONDITIONAL_JUMP)
// 005dc11e: SUB ESI,ESI
//   Label: LAB_005dc11e
// 005dc120: MOV EDI,ESI
//   Label: LAB_005dc120
// 005dc122: TEST ESI,ESI
// 005dc124: JZ 0x005dc205
//   XREF to: 005dc205 (CONDITIONAL_JUMP)
// 005dc12a: MOV ESI,0x654f90
//   Label: LAB_005dc12a
//   XREF to: 00654f90 (DATA)
// 005dc12f: PUSH EDI
// 005dc130: MOV AL,byte ptr [ESI]
//   Label: LAB_005dc130
//   XREF to: 00654f90 (READ)
//   XREF to: 00654f92 (READ)
// 005dc132: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x111] (DATA)
// 005dc134: CMP AL,0x0
// 005dc136: JZ 0x005dc148
//   XREF to: 005dc148 (CONDITIONAL_JUMP)
// 005dc138: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00654f91 (READ)
//   XREF to: 00654f93 (READ)
// 005dc13b: ADD ESI,0x2
// 005dc13e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x111] (WRITE)
// 005dc141: ADD EDI,0x2
// 005dc144: CMP AL,0x0
// 005dc146: JNZ 0x005dc130
//   XREF to: 005dc130 (CONDITIONAL_JUMP)
// 005dc148: POP EDI
//   Label: LAB_005dc148
// 005dc149: PUSH 0x654f95
//   XREF to: 00654f95 (DATA)
// 005dc14e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005dc152: PUSH EAX
// 005dc153: PUSH 0x654f98
//   XREF to: 00654f98 (DATA)
// 005dc158: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005dc15d: ADD ESP,0xc
// 005dc160: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005dc167: TEST EAX,EAX
// 005dc169: JNZ 0x005dc18e
//   XREF to: 005dc18e (CONDITIONAL_JUMP)
// 005dc16b: MOV EBX,0x654f9d
//   XREF to: 00654f9d (DATA)
// 005dc170: MOV ESI,0xb6
// 005dc175: PUSH 0x654fb1
//   XREF to: 00654fb1 (DATA)
// 005dc17a: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005dc180: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005dc186: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dc18b: ADD ESP,0x4
// 005dc18e: MOV EDI,dword ptr [EBP]
//   Label: LAB_005dc18e
// 005dc191: PUSH EDI
// 005dc192: PUSH 0x654fd4
//   XREF to: 00654fd4 (DATA)
// 005dc197: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005dc19e: PUSH EAX
// 005dc19f: XOR EDI,EDI
// 005dc1a1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005dc1a6: MOV EDX,dword ptr [EBP]
// 005dc1a9: ADD ESP,0xc
// 005dc1ac: TEST EDX,EDX
// 005dc1ae: JLE 0x005dc1e0
//   XREF to: 005dc1e0 (CONDITIONAL_JUMP)
// 005dc1b0: LEA ESI,[EBP + 0xc]
// 005dc1b3: MOV EBX,EBP
// 005dc1b5: MOV ECX,dword ptr [EBX + 0x5dc4]
//   Label: LAB_005dc1b5
// 005dc1bb: PUSH ECX
// 005dc1bc: PUSH ESI
// 005dc1bd: PUSH 0x654fd8
//   XREF to: 00654fd8 (DATA)
// 005dc1c2: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x14] (READ)
// 005dc1c9: ADD EBX,0x4
// 005dc1cc: PUSH EAX
// 005dc1cd: INC EDI
// 005dc1ce: ADD ESI,0x18
// 005dc1d1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005dc1d6: MOV EDX,dword ptr [EBP]
// 005dc1d9: ADD ESP,0x10
// 005dc1dc: CMP EDI,EDX
// 005dc1de: JL 0x005dc1b5
//   XREF to: 005dc1b5 (CONDITIONAL_JUMP)
// 005dc1e0: PUSH 0xc3
//   Label: LAB_005dc1e0
// 005dc1e5: PUSH 0x654fdf
//   XREF to: 00654fdf (DATA)
// 005dc1ea: MOV ECX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 005dc1f1: PUSH ECX
// 005dc1f2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005dc1f7: ADD ESP,0xc
// 005dc1fa: ADD ESP,0x104
// 005dc200: POP EBP
// 005dc201: POP EDI
// 005dc202: POP ESI
// 005dc203: POP EBX
// 005dc204: RET
// 005dc205: MOV EDX,0x654f54
//   Label: LAB_005dc205
//   XREF to: 00654f54 (DATA)
// 005dc20a: MOV ECX,0xad
// 005dc20f: PUSH 0x654f68
//   XREF to: 00654f68 (DATA)
// 005dc214: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005dc21a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005dc220: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005dc225: ADD ESP,0x4
// 005dc228: JMP 0x005dc12a
//   XREF to: 005dc12a (UNCONDITIONAL_JUMP)
