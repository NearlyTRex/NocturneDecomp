// Name: core_script.cpp_CScript_dbLoad_FUN_005603c0
// Address: 005603c0
// Address Range: [[005603c0, 005606dc]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_dbLoad_FUN_005603c0()
// Cross-references:
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a026 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_world_006432a2
//   TerminatedCString s_rt_006432a8
//   TerminatedCString s_world_006432ab
//   TerminatedCString s_core_script_cpp_006432b1
//   TerminatedCString s_Can_t_open_world_s_006432c4
//   TerminatedCString s_anon_006432d8
//   TerminatedCString s_anon_006432da
//   TerminatedCString s_core_script_cpp_006432ef
//   TerminatedCString s_SCScipt_dbLoad_error_par_00643302
//   TerminatedCString s_stranger_0064332f
//   TerminatedCString s_anon_00643338
//   undefined4 DAT_00643339
//   TerminatedCString s_Warning_Duplicate_wav_st_0064333a
//   undefined4 s_arning!_Duplicate_wav_string_%s_d_0064333b
//   TerminatedCString s_s_wav_0064336a
//   TerminatedCString s_sound_00643371
//   TerminatedCString s_s_mp3_00643377
//   TerminatedCString s_sound_0064337e
//   TerminatedCString s_core_script_cpp_00643384
//   TerminatedCString s_core_script_cpp_00643397
//   TerminatedCString s_SCScipt_dbLoad_out_of_me_006433aa
//   TerminatedCString s_core_script_cpp_006433ca
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_FUN_00559360
//   core_script.cpp_FUN_005606e0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_dbLoad(CScript* param_1, undefined4 dbfilename) */

void core_script_cpp_CScript_dbLoad_FUN_005603c0(void)

{
  char cVar1;
  int iVar2;
  FILE *file_handle;
  long lVar3;
  void *pvVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  byte bVar9;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000024;
  undefined4 uStack_324;
  char acStack_2e8 [44];
  char local_2bc [4];
  char acStack_2b8 [4];
  char acStack_2b4 [4];
  char acStack_2b0 [4];
  char acStack_2ac [8];
  undefined1 auStack_2a4 [20];
  char acStack_290 [4];
  char acStack_28c [6];
  undefined1 auStack_286 [426];
  char acStack_dc [4];
  char acStack_d8 [208];
  
  bVar9 = 0;
  *(undefined4 *)(in_stack_00000004 + 0x1c) = 0;
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("world",in_stack_00000008);
  if (iVar2 < 1) {
    return;
  }
  file_handle = engine_dosio_c_getFile_FUN_00481a50
                          ("world",in_stack_0000000c,"rt");
  if (file_handle == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xec2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s",in_stack_00000010);
  }
  crt_stdio_c_ftell_FUN_00601560(file_handle);
  do {
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," ");
    lVar3 = crt_stdio_c_ftell_FUN_00601560(file_handle);
    if ((int)in_stack_0000000c <= lVar3) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\script.cpp",0xf02);
      return;
    }
    iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (file_handle,"%[^,], %[^,], %[^\n]\n",&stack0xfffffce4,auStack_2a4,auStack_286);
    if (iVar2 != 3) {
      uStack_324 = *(undefined4 *)(in_stack_00000004 + 0x1c);
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xed6;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("SCScipt::dbLoad - error parsing %s record %d",in_stack_00000024);
    }
    uStack_324 = 0x5604ba;
    core_script_cpp_FUN_00559360();
    core_script_cpp_FUN_00559360();
    core_script_cpp_FUN_00559360();
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(acStack_290,"stranger");
    if (iVar2 == 0) {
      pcVar5 = "$";
      pcVar7 = acStack_28c;
      do {
        cVar1 = *pcVar5;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
    }
    uStack_324 = 0x560534;
    crt_string_c_splitpath_FUN_005ff178
              (&stack0xfffffcfc,(char *)0x0,(char *)0x0,acStack_dc,(char *)0x0);
    pcVar5 = acStack_d8;
    pcVar7 = &stack0xfffffd00;
    do {
      cVar1 = *pcVar5;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iVar2 = core_script_cpp_FUN_005606e0();
    if (-1 < iVar2) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Warning! Duplicate wav string %s detected in %s");
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_2bc,"%s.wav");
    iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_2b8);
    if (iVar2 < 1) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2b4,"%s.mp3");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",acStack_2b0);
      if (iVar2 < 1) {
        pcVar7 = acStack_2e8;
        pcVar5 = acStack_2ac;
        do {
          cVar1 = *pcVar7;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
      }
    }
    iVar2 = *(int *)(in_stack_00000004 + 0x1c) + 1;
    *(int *)(in_stack_00000004 + 0x1c) = iVar2;
    pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (*(void **)(in_stack_00000004 + 0x20),iVar2 * 0x226,
                        "..\\core\\script.cpp",0xefa);
    *(void **)(in_stack_00000004 + 0x20) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      g_CurrentFilename = "..\\core\\script.cpp";
      g_CurrentLineNumber = 0xefb;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SCScipt::dbLoad - out of memory");
    }
    puVar6 = &uStack_324;
    puVar8 = (undefined4 *)
             (*(int *)(in_stack_00000004 + 0x20) + (*(int *)(in_stack_00000004 + 0x1c) + -1) * 0x226
             );
    for (iVar2 = 0x89; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    *(undefined2 *)puVar8 = *(undefined2 *)puVar6;
  } while( true );
}


// Assembly code:
// 005603c0: PUSH EBX
//   Label: core_script.cpp_CScript_dbLoad_FUN_005603c0
// 005603c1: PUSH EBP
// 005603c2: SUB ESP,0x32c
// 005603c8: MOV EBX,dword ptr [ESP + 0x338]
//   XREF to: Stack[0x4] (READ)
// 005603cf: MOV EDX,dword ptr [ESP + 0x33c]
//   XREF to: Stack[0x8] (READ)
// 005603d6: PUSH EDX
// 005603d7: PUSH 0x6432a2
//   XREF to: 006432a2 (DATA)
// 005603dc: MOV dword ptr [EBX + 0x1c],0x0
// 005603e3: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005603e8: ADD ESP,0x8
// 005603eb: MOV dword ptr [ESP + 0x328],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005603f2: TEST EAX,EAX
// 005603f4: JG 0x005603ff
//   XREF to: 005603ff (CONDITIONAL_JUMP)
// 005603f6: ADD ESP,0x32c
// 005603fc: POP EBP
// 005603fd: POP EBX
// 005603fe: RET
// 005603ff: PUSH EDI
//   Label: LAB_005603ff
// 00560400: PUSH ESI
// 00560401: PUSH 0x6432a8
//   XREF to: 006432a8 (DATA)
// 00560406: MOV ECX,dword ptr [ESP + 0x348]
//   XREF to: Stack[0x8] (READ)
// 0056040d: PUSH ECX
// 0056040e: PUSH 0x6432ab
//   XREF to: 006432ab (DATA)
// 00560413: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00560418: ADD ESP,0xc
// 0056041b: MOV EBP,EAX
// 0056041d: TEST EAX,EAX
// 0056041f: JZ 0x00560610
//   XREF to: 00560610 (CONDITIONAL_JUMP)
// 00560425: PUSH EBP
//   Label: LAB_00560425
// 00560426: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 0056042b: ADD ESP,0x4
// 0056042e: ADD dword ptr [ESP + 0x330],EAX
//   XREF to: Stack[-0xc] (READ_WRITE)
// 00560435: PUSH 0x6432d8
//   Label: LAB_00560435
//   XREF to: 006432d8 (DATA)
// 0056043a: PUSH EBP
// 0056043b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560440: ADD ESP,0x8
// 00560443: PUSH EBP
// 00560444: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 00560449: ADD ESP,0x4
// 0056044c: CMP EAX,dword ptr [ESP + 0x330]
//   XREF to: Stack[-0xc] (READ)
// 00560453: JGE 0x005606bf
//   XREF to: 005606bf (CONDITIONAL_JUMP)
// 00560459: LEA EAX,[ESP + 0x9e]
//   XREF to: Stack[-0x29e] (DATA)
// 00560460: PUSH EAX
// 00560461: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x2bc] (DATA)
// 00560468: PUSH EAX
// 00560469: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x334] (DATA)
// 0056046d: PUSH EAX
// 0056046e: PUSH 0x6432da
//   XREF to: 006432da (DATA)
// 00560473: PUSH EBP
// 00560474: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560479: ADD ESP,0x14
// 0056047c: CMP EAX,0x3
// 0056047f: JZ 0x005604b0
//   XREF to: 005604b0 (CONDITIONAL_JUMP)
// 00560481: MOV EAX,dword ptr [EBX + 0x1c]
// 00560484: PUSH EAX
// 00560485: MOV EDX,dword ptr [ESP + 0x348]
//   XREF to: Stack[0x8] (READ)
// 0056048c: PUSH EDX
// 0056048d: MOV ESI,0x6432ef
//   XREF to: 006432ef (DATA)
// 00560492: MOV EDI,0xed6
// 00560497: PUSH 0x643302
//   XREF to: 00643302 (DATA)
// 0056049c: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005604a2: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005604a8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005604ad: ADD ESP,0xc
// 005604b0: LEA EAX,[ESP + 0x8]
//   Label: LAB_005604b0
//   XREF to: Stack[-0x334] (DATA)
// 005604b4: PUSH EAX
// 005604b5: CALL core_script.cpp_FUN_00559360
//   XREF to: 00559360 (UNCONDITIONAL_CALL)
// 005604ba: ADD ESP,0x4
// 005604bd: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x2bc] (DATA)
// 005604c4: PUSH EAX
// 005604c5: CALL core_script.cpp_FUN_00559360
//   XREF to: 00559360 (UNCONDITIONAL_CALL)
// 005604ca: ADD ESP,0x4
// 005604cd: LEA EAX,[ESP + 0x9e]
//   XREF to: Stack[-0x29e] (DATA)
// 005604d4: PUSH EAX
// 005604d5: CALL core_script.cpp_FUN_00559360
//   XREF to: 00559360 (UNCONDITIONAL_CALL)
// 005604da: ADD ESP,0x4
// 005604dd: PUSH 0x64332f
//   XREF to: 0064332f (DATA)
// 005604e2: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x2bc] (DATA)
// 005604e9: PUSH EAX
// 005604ea: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005604ef: ADD ESP,0x8
// 005604f2: TEST EAX,EAX
// 005604f4: JNZ 0x0056051c
//   XREF to: 0056051c (CONDITIONAL_JUMP)
// 005604f6: MOV ESI,0x643338
//   XREF to: 00643338 (DATA)
// 005604fb: LEA EDI,[ESP + 0x80]
//   XREF to: Stack[-0x2bc] (DATA)
// 00560502: PUSH EDI
// 00560503: MOV AL,byte ptr [ESI]
//   Label: LAB_00560503
//   XREF to: 00643338 (READ)
//   XREF to: 0064333a (READ)
// 00560505: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x2bc] (DATA)
// 00560507: CMP AL,0x0
// 00560509: JZ 0x0056051b
//   XREF to: 0056051b (CONDITIONAL_JUMP)
// 0056050b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00643339 (READ)
//   XREF to: 0064333b (READ)
// 0056050e: ADD ESI,0x2
// 00560511: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x2bb] (WRITE)
// 00560514: ADD EDI,0x2
// 00560517: CMP AL,0x0
// 00560519: JNZ 0x00560503
//   XREF to: 00560503 (CONDITIONAL_JUMP)
// 0056051b: POP EDI
//   Label: LAB_0056051b
// 0056051c: PUSH 0x0
//   Label: LAB_0056051c
// 0056051e: LEA EAX,[ESP + 0x234]
//   XREF to: Stack[-0x10c] (DATA)
// 00560525: PUSH EAX
// 00560526: PUSH 0x0
// 00560528: PUSH 0x0
// 0056052a: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x334] (DATA)
// 0056052e: PUSH EAX
// 0056052f: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 00560534: ADD ESP,0x14
// 00560537: LEA ESI,[ESP + 0x230]
//   XREF to: Stack[-0x10c] (DATA)
// 0056053e: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x334] (DATA)
// 00560542: PUSH EDI
// 00560543: MOV AL,byte ptr [ESI]
//   Label: LAB_00560543
//   XREF to: Stack[-0x10c] (DATA)
// 00560545: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x334] (DATA)
// 00560547: CMP AL,0x0
// 00560549: JZ 0x0056055b
//   XREF to: 0056055b (CONDITIONAL_JUMP)
// 0056054b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x10b] (READ)
// 0056054e: ADD ESI,0x2
// 00560551: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x333] (WRITE)
// 00560554: ADD EDI,0x2
// 00560557: CMP AL,0x0
// 00560559: JNZ 0x00560543
//   XREF to: 00560543 (CONDITIONAL_JUMP)
// 0056055b: POP EDI
//   Label: LAB_0056055b
// 0056055c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x334] (DATA)
// 00560560: PUSH EAX
// 00560561: PUSH EBX
// 00560562: CALL core_script.cpp_FUN_005606e0
//   XREF to: 005606e0 (UNCONDITIONAL_CALL)
// 00560567: ADD ESP,0x8
// 0056056a: TEST EAX,EAX
// 0056056c: JL 0x0056058f
//   XREF to: 0056058f (CONDITIONAL_JUMP)
// 0056056e: MOV ECX,dword ptr [ESP + 0x344]
//   XREF to: Stack[0x8] (READ)
// 00560575: PUSH ECX
// 00560576: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x334] (DATA)
// 0056057a: PUSH EAX
// 0056057b: PUSH 0x64333a
//   XREF to: 0064333a (DATA)
// 00560580: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00560586: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00560587: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0056058c: ADD ESP,0x10
// 0056058f: LEA EAX,[ESP + 0x8]
//   Label: LAB_0056058f
//   XREF to: Stack[-0x334] (DATA)
// 00560593: PUSH EAX
// 00560594: PUSH 0x64336a
//   XREF to: 0064336a (DATA)
// 00560599: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x2f8] (DATA)
// 0056059d: PUSH EAX
// 0056059e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005605a3: ADD ESP,0xc
// 005605a6: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x2f8] (DATA)
// 005605aa: PUSH EAX
// 005605ab: PUSH 0x643371
//   XREF to: 00643371 (DATA)
// 005605b0: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 005605b5: ADD ESP,0x8
// 005605b8: TEST EAX,EAX
// 005605ba: JLE 0x00560640
//   XREF to: 00560640 (CONDITIONAL_JUMP)
// 005605c0: MOV EDI,dword ptr [EBX + 0x1c]
//   Label: LAB_005605c0
// 005605c3: INC EDI
// 005605c4: MOV dword ptr [EBX + 0x1c],EDI
// 005605c7: IMUL EAX,EDI,0x226
// 005605cd: PUSH 0xefa
// 005605d2: PUSH 0x643384
//   XREF to: 00643384 (DATA)
// 005605d7: PUSH EAX
// 005605d8: MOV ECX,dword ptr [EBX + 0x20]
// 005605db: PUSH ECX
// 005605dc: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005605e1: ADD ESP,0x10
// 005605e4: MOV dword ptr [EBX + 0x20],EAX
// 005605e7: TEST EAX,EAX
// 005605e9: JZ 0x00560698
//   XREF to: 00560698 (CONDITIONAL_JUMP)
// 005605ef: MOV EAX,dword ptr [EBX + 0x1c]
//   Label: LAB_005605ef
// 005605f2: DEC EAX
// 005605f3: IMUL EAX,EAX,0x226
// 005605f9: MOV ECX,0x89
// 005605fe: MOV EDI,dword ptr [EBX + 0x20]
// 00560601: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x334] (DATA)
// 00560605: ADD EDI,EAX
// 00560607: MOVSD.REP ES:EDI,ESI
// 00560609: MOVSW ES:EDI,ESI
// 0056060b: JMP 0x00560435
//   XREF to: 00560435 (UNCONDITIONAL_JUMP)
// 00560610: MOV EAX,dword ptr [ESP + 0x344]
//   Label: LAB_00560610
//   XREF to: Stack[0x8] (READ)
// 00560617: PUSH EAX
// 00560618: MOV ESI,0x6432b1
//   XREF to: 006432b1 (DATA)
// 0056061d: MOV EDI,0xec2
// 00560622: PUSH 0x6432c4
//   XREF to: 006432c4 (DATA)
// 00560627: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0056062d: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00560633: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00560638: ADD ESP,0x8
// 0056063b: JMP 0x00560425
//   XREF to: 00560425 (UNCONDITIONAL_JUMP)
// 00560640: LEA EAX,[ESP + 0x8]
//   Label: LAB_00560640
//   XREF to: Stack[-0x334] (DATA)
// 00560644: PUSH EAX
// 00560645: PUSH 0x643377
//   XREF to: 00643377 (DATA)
// 0056064a: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x2f8] (DATA)
// 0056064e: PUSH EAX
// 0056064f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00560654: ADD ESP,0xc
// 00560657: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x2f8] (DATA)
// 0056065b: PUSH EAX
// 0056065c: PUSH 0x64337e
//   XREF to: 0064337e (DATA)
// 00560661: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00560666: ADD ESP,0x8
// 00560669: TEST EAX,EAX
// 0056066b: JG 0x005605c0
//   XREF to: 005605c0 (CONDITIONAL_JUMP)
// 00560671: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x334] (DATA)
// 00560675: LEA EDI,[ESP + 0x44]
//   XREF to: Stack[-0x2f8] (DATA)
// 00560679: PUSH EDI
// 0056067a: MOV AL,byte ptr [ESI]
//   Label: LAB_0056067a
//   XREF to: Stack[-0x334] (DATA)
// 0056067c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x2f8] (DATA)
// 0056067e: CMP AL,0x0
// 00560680: JZ 0x00560692
//   XREF to: 00560692 (CONDITIONAL_JUMP)
// 00560682: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x333] (READ)
// 00560685: ADD ESI,0x2
// 00560688: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x2f7] (WRITE)
// 0056068b: ADD EDI,0x2
// 0056068e: CMP AL,0x0
// 00560690: JNZ 0x0056067a
//   XREF to: 0056067a (CONDITIONAL_JUMP)
// 00560692: POP EDI
//   Label: LAB_00560692
// 00560693: JMP 0x005605c0
//   XREF to: 005605c0 (UNCONDITIONAL_JUMP)
// 00560698: MOV EDI,0x643397
//   Label: LAB_00560698
//   XREF to: 00643397 (DATA)
// 0056069d: MOV EAX,0xefb
// 005606a2: PUSH 0x6433aa
//   XREF to: 006433aa (DATA)
// 005606a7: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005606ad: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005606b2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005606b7: ADD ESP,0x4
// 005606ba: JMP 0x005605ef
//   XREF to: 005605ef (UNCONDITIONAL_JUMP)
// 005606bf: PUSH 0xf02
//   Label: LAB_005606bf
// 005606c4: PUSH 0x6433ca
//   XREF to: 006433ca (DATA)
// 005606c9: PUSH EBP
// 005606ca: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005606cf: ADD ESP,0xc
// 005606d2: POP ESI
// 005606d3: POP EDI
// 005606d4: ADD ESP,0x32c
// 005606da: POP EBP
// 005606db: POP EBX
// 005606dc: RET
