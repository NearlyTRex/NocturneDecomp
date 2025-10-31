// Name: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690
// Address: 00434690
// Address Range: [[00434690, 0043486c]]
// Convention: __cdecl
// Signature: char * cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690(char * filename, char * buffer, int width, int height, void * optional_param)
// Globals:
//   TerminatedCString s_cockpit_ckptutil_c_00617e1e
//   TerminatedCString s_Unable_to_allocate_u_byt_00617e34
//   TerminatedCString s_cockpit_ckptutil_c_00617e6e
//   TerminatedCString s_rb_00617e84
//   TerminatedCString s_art_00617e87
//   TerminatedCString s_Unable_to_open_bitmap_fi_00617e8b
//   TerminatedCString s_cockpit_ckptutil_c_00617eac
//   TerminatedCString s_Unable_to_read_bitmap_fi_00617ec2
//   TerminatedCString s_cockpit_ckptutil_c_00617ee3
//   TerminatedCString s_cockpit_ckptutil_c_00617ef9
//   TerminatedCString s_cockpit_ckptutil_c_00617f0f
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_ckptutil.c_applyActPalette_FUN_004319b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

char * __cdecl
cockpit_ckptutil_c_loadRotatedBitmapFile_FUN_00434690
          (char *filename,char *buffer,int width,int height,void *optional_param)

{
  FILE *file;
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  uint bitmap_size;
  char *in_stack_00000020;
  char *in_stack_00000024;
  char *in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000034;
  char acStack_48 [44];
  int local_1c;
  undefined4 local_18;
  
  local_1c = width * height;
  if (buffer == (char *)0x0) {
    pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(local_1c,"..\\cockpit\\ckptutil.c",0x7bd)
    ;
    if (pvVar2 == (void *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xffffff98,"Unable to allocate %u bytes for rotated bitmap file (%s).",local_18,0);
      g_CurrentLineNumber = 0x7c0;
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff9c);
    }
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",(char *)height,"rb");
  if (file == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa4,"Unable to open bitmap file (%s).");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x7c9;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa8);
  }
  bitmap_size = 0;
  if (height != 0) {
    do {
      pcVar3 = (char *)0x0;
      pcVar4 = in_stack_00000020 + (height - bitmap_size) + -1;
      if (in_stack_00000024 != (char *)0x0) {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
          if (iVar1 == -1) {
            crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffb0,"Unable to read bitmap file (%s).");
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x7d5);
            g_CurrentLineNumber = 0x7d6;
            g_CurrentFilename = "..\\cockpit\\ckptutil.c";
            core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_48);
          }
          pcVar3 = pcVar3 + 1;
          *pcVar4 = (char)filename;
          pcVar4 = pcVar4 + height;
        } while (pcVar3 < in_stack_00000024);
      }
      bitmap_size = bitmap_size + 1;
    } while (bitmap_size < (uint)height);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x7de);
  if (in_stack_00000030 == 0) {
    return in_stack_00000024;
  }
  cockpit_ckptutil_c_applyActPalette_FUN_004319b0
            (in_stack_00000020,in_stack_00000024,bitmap_size,in_stack_00000034);
  return in_stack_00000028;
}


// Assembly code:
// 00434690: PUSH EBX
//   Label: cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690
// 00434691: PUSH ESI
// 00434692: PUSH EDI
// 00434693: PUSH EBP
// 00434694: SUB ESP,0x5c
// 00434697: MOV EBP,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x10] (READ)
// 0043469b: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 0043469f: IMUL EAX,EBP
// 004346a2: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 004346a6: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004346aa: TEST EDX,EDX
// 004346ac: JZ 0x004347a5
//   XREF to: 004347a5 (CONDITIONAL_JUMP)
// 004346b2: PUSH 0x617e84
//   Label: LAB_004346b2
//   XREF to: 00617e84 (DATA)
// 004346b7: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 004346bb: PUSH EDX
// 004346bc: PUSH 0x617e87
//   XREF to: 00617e87 (DATA)
// 004346c1: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004346c6: ADD ESP,0xc
// 004346c9: MOV EDI,EAX
// 004346cb: TEST EAX,EAX
// 004346cd: JZ 0x00434805
//   XREF to: 00434805 (CONDITIONAL_JUMP)
// 004346d3: XOR EAX,EAX
//   Label: LAB_004346d3
// 004346d5: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004346d9: TEST EBP,EBP
// 004346db: JBE 0x00434778
//   XREF to: 00434778 (CONDITIONAL_JUMP)
// 004346e1: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_004346e1
//   XREF to: Stack[-0x18] (READ)
// 004346e5: MOV EAX,EBP
// 004346e7: MOV ESI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 004346eb: SUB EAX,EDX
// 004346ed: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 004346f1: DEC EAX
// 004346f2: XOR EBX,EBX
// 004346f4: ADD ESI,EAX
// 004346f6: TEST ECX,ECX
// 004346f8: JBE 0x00434767
//   XREF to: 00434767 (CONDITIONAL_JUMP)
// 004346fa: PUSH EDI
//   Label: LAB_004346fa
// 004346fb: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00434700: ADD ESP,0x4
// 00434703: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00434707: CMP EAX,-0x1
// 0043470a: JNZ 0x00434756
//   XREF to: 00434756 (CONDITIONAL_JUMP)
// 0043470c: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 00434710: PUSH EDX
// 00434711: PUSH 0x617ec2
//   XREF to: 00617ec2 (DATA)
// 00434716: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 0043471a: PUSH EAX
// 0043471b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00434720: ADD ESP,0xc
// 00434723: PUSH 0x7d5
// 00434728: PUSH 0x617ee3
//   XREF to: 00617ee3 (DATA)
// 0043472d: PUSH EDI
// 0043472e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00434733: MOV EAX,0x7d6
// 00434738: ADD ESP,0xc
// 0043473b: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00434740: MOV EAX,ESP
// 00434742: MOV ECX,0x617ef9
//   XREF to: 00617ef9 (DATA)
// 00434747: PUSH EAX
// 00434748: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0043474e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00434753: ADD ESP,0x4
// 00434756: MOV AL,byte ptr [ESP + 0x58]
//   Label: LAB_00434756
//   XREF to: Stack[-0x14] (READ)
// 0043475a: INC EBX
// 0043475b: MOV byte ptr [ESI],AL
// 0043475d: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 00434761: ADD ESI,EBP
// 00434763: CMP EBX,EAX
// 00434765: JC 0x004346fa
//   XREF to: 004346fa (CONDITIONAL_JUMP)
// 00434767: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_00434767
//   XREF to: Stack[-0x18] (READ)
// 0043476b: INC EDX
// 0043476c: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00434770: CMP EBP,EDX
// 00434772: JA 0x004346e1
//   XREF to: 004346e1 (CONDITIONAL_JUMP)
// 00434778: PUSH 0x7de
//   Label: LAB_00434778
// 0043477d: PUSH 0x617f0f
//   XREF to: 00617f0f (DATA)
// 00434782: PUSH EDI
// 00434783: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00434788: ADD ESP,0xc
// 0043478b: CMP dword ptr [ESP + 0x80],0x0
//   XREF to: Stack[0x14] (READ)
// 00434793: JNZ 0x00434842
//   XREF to: 00434842 (CONDITIONAL_JUMP)
// 00434799: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 0043479d: ADD ESP,0x5c
// 004347a0: POP EBP
// 004347a1: POP EDI
// 004347a2: POP ESI
// 004347a3: POP EBX
// 004347a4: RET
// 004347a5: PUSH 0x7bd
//   Label: LAB_004347a5
// 004347aa: PUSH 0x617e1e
//   XREF to: 00617e1e (DATA)
// 004347af: PUSH EAX
// 004347b0: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 004347b5: ADD ESP,0xc
// 004347b8: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[0x8] (WRITE)
// 004347bc: TEST EAX,EAX
// 004347be: JNZ 0x004346b2
//   XREF to: 004346b2 (CONDITIONAL_JUMP)
// 004347c4: MOV EBX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x4] (READ)
// 004347c8: PUSH EBX
// 004347c9: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 004347cd: PUSH ESI
// 004347ce: PUSH 0x617e34
//   XREF to: 00617e34 (DATA)
// 004347d3: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x6c] (DATA)
// 004347d7: PUSH EAX
// 004347d8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004347dd: MOV EAX,0x7c0
// 004347e2: ADD ESP,0x10
// 004347e5: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004347ea: MOV EAX,ESP
// 004347ec: MOV EDI,0x617e6e
//   XREF to: 00617e6e (DATA)
// 004347f1: PUSH EAX
// 004347f2: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004347f8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004347fd: ADD ESP,0x4
// 00434800: JMP 0x004346b2
//   XREF to: 004346b2 (UNCONDITIONAL_JUMP)
// 00434805: MOV ECX,dword ptr [ESP + 0x70]
//   Label: LAB_00434805
//   XREF to: Stack[0x4] (READ)
// 00434809: PUSH ECX
// 0043480a: PUSH 0x617e8b
//   XREF to: 00617e8b (DATA)
// 0043480f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x6c] (DATA)
// 00434813: PUSH EAX
// 00434814: MOV EBX,0x617eac
//   XREF to: 00617eac (DATA)
// 00434819: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0043481e: ADD ESP,0xc
// 00434821: MOV EAX,ESP
// 00434823: MOV ESI,0x7c9
// 00434828: PUSH EAX
// 00434829: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0043482f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00434835: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043483a: ADD ESP,0x4
// 0043483d: JMP 0x004346d3
//   XREF to: 004346d3 (UNCONDITIONAL_JUMP)
// 00434842: MOV ESI,dword ptr [ESP + 0x84]
//   Label: LAB_00434842
//   XREF to: Stack[0x18] (READ)
// 00434849: PUSH ESI
// 0043484a: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 0043484e: PUSH EDI
// 0043484f: MOV EBP,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 00434853: PUSH EBP
// 00434854: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00434858: PUSH EAX
// 00434859: CALL cockpit_ckptutil.c_applyActPalette_FUN_004319b0
//   XREF to: 004319b0 (UNCONDITIONAL_CALL)
// 0043485e: ADD ESP,0x10
// 00434861: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x8] (READ)
// 00434865: ADD ESP,0x5c
// 00434868: POP EBP
// 00434869: POP EDI
// 0043486a: POP ESI
// 0043486b: POP EBX
// 0043486c: RET
