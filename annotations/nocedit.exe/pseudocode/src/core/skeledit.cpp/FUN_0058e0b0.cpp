// Name: core_skeledit.cpp_FUN_0058e0b0
// Address: 0058e0b0
// Address Range: [[0058e0b0, 0058e234]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058e0b0()
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064aec2
//   TerminatedCString s_Can_t_add_another_textur_0064aed7
//   TerminatedCString s_tga_0064aef6
//   TerminatedCString s_art_0064aefb
//   TerminatedCString s_raw_0064aeff
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_file.c_makepath_FUN_005febfc
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_splitpath_FUN_005ff178
//   engine_dosio.c_getFileSize_FUN_00481880

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058e0b0
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,
               undefined4 param_5,int param_6,int param_7,int param_8,undefined4 param_9,
               char *param_10)

{
  char cVar1;
  int iVar2;
  char *path;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *path_buffer;
  char acStack_208 [4];
  char acStack_204 [8];
  char acStack_1fc [240];
  char acStack_10c [4];
  undefined1 auStack_108 [252];
  int iStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x334);
  if (4 < *(int *)(param_7 + 0xb8)) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x912;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't add another texture set!");
  }
  iStack_c = *(int *)(param_8 + 0xb8);
  iVar3 = 0;
  *(int *)(param_8 + 0xb8) = iStack_c + 1;
  if (0 < *(int *)(param_8 + 0xbc)) {
    iStack_c = iStack_c * 0x1680;
    path = (char *)(param_8 + 200);
    do {
      crt_string_c_splitpath_FUN_005ff178(path,(char *)0x0,(char *)0x0,acStack_10c,(char *)0x0);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_208,param_10,auStack_108);
      crt_file_c_makepath_FUN_005febfc
                (&stack0xfffffcf8,(char *)0x0,(char *)0x0,acStack_204,".tga");
      iVar2 = engine_dosio_c_getFileSize_FUN_00481880("art",&stack0xfffffcfc);
      path_buffer = (char *)(iVar3 * 0x48 + param_6 + unaff_EBX + 8);
      pcVar4 = path;
      if (iVar2 < 0) {
        do {
          cVar1 = *pcVar4;
          *path_buffer = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          path_buffer[1] = cVar1;
          path_buffer = path_buffer + 2;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
      else {
        crt_file_c_makepath_FUN_005febfc
                  (path_buffer,(char *)0x0,(char *)0x0,acStack_1fc,".raw");
      }
      iVar3 = iVar3 + 1;
      path = path + 0x48;
    } while (iVar3 < *(int *)(param_8 + 0xbc));
  }
  return;
}


// Assembly code:
// 0058e0b0: PUSH 0x334
//   Label: core_skeledit.cpp_FUN_0058e0b0
// 0058e0b5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058e0ba: PUSH EBX
// 0058e0bb: PUSH ESI
// 0058e0bc: PUSH EDI
// 0058e0bd: PUSH EBP
// 0058e0be: SUB ESP,0x30c
// 0058e0c4: MOV EAX,dword ptr [ESP + 0x320]
//   XREF to: Stack[0x4] (READ)
// 0058e0cb: CMP dword ptr [EAX + 0xb8],0x5
// 0058e0d2: JGE 0x0058e1f1
//   XREF to: 0058e1f1 (CONDITIONAL_JUMP)
// 0058e0d8: MOV EDX,dword ptr [ESP + 0x320]
//   Label: LAB_0058e0d8
//   XREF to: Stack[0x4] (READ)
// 0058e0df: MOV EBX,dword ptr [ESP + 0x320]
//   XREF to: Stack[0x4] (READ)
// 0058e0e6: MOV EDX,dword ptr [EDX + 0xb8]
// 0058e0ec: XOR EBP,EBP
// 0058e0ee: LEA EAX,[EDX + 0x1]
// 0058e0f1: MOV ESI,dword ptr [EBX + 0xbc]
// 0058e0f7: MOV dword ptr [EBX + 0xb8],EAX
// 0058e0fd: TEST ESI,ESI
// 0058e0ff: JLE 0x0058e1e6
//   XREF to: 0058e1e6 (CONDITIONAL_JUMP)
// 0058e105: LEA EAX,[EBX + 0xc0]
// 0058e10b: MOV dword ptr [ESP + 0x308],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058e112: LEA EAX,[EDX*0x4 + 0x0]
// 0058e119: SUB EAX,EDX
// 0058e11b: SHL EAX,0x7
// 0058e11e: MOV EDX,EAX
// 0058e120: SHL EAX,0x4
// 0058e123: SUB EAX,EDX
// 0058e125: ADD EBX,0xc8
// 0058e12b: MOV dword ptr [ESP + 0x304],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058e132: IMUL EDI,EBP,0x48
//   Label: LAB_0058e132
// 0058e135: PUSH 0x0
// 0058e137: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x118] (DATA)
// 0058e13e: PUSH EAX
// 0058e13f: PUSH 0x0
// 0058e141: PUSH 0x0
// 0058e143: PUSH EBX
// 0058e144: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0058e149: ADD ESP,0x14
// 0058e14c: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x118] (DATA)
// 0058e153: PUSH EAX
// 0058e154: MOV EAX,dword ptr [ESP + 0x328]
//   XREF to: Stack[0x8] (READ)
// 0058e15b: PUSH EAX
// 0058e15c: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x218] (DATA)
// 0058e163: PUSH EAX
// 0058e164: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0058e169: ADD ESP,0xc
// 0058e16c: PUSH 0x64aef6
//   XREF to: 0064aef6 (DATA)
// 0058e171: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x218] (DATA)
// 0058e178: PUSH EAX
// 0058e179: PUSH 0x0
// 0058e17b: PUSH 0x0
// 0058e17d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x31c] (DATA)
// 0058e181: PUSH EAX
// 0058e182: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0058e187: ADD ESP,0x14
// 0058e18a: MOV EAX,ESP
// 0058e18c: PUSH EAX
// 0058e18d: PUSH 0x64aefb
//   XREF to: 0064aefb (DATA)
// 0058e192: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 0058e197: ADD ESP,0x8
// 0058e19a: MOV EDX,dword ptr [ESP + 0x308]
//   XREF to: Stack[-0x14] (READ)
// 0058e1a1: ADD EDX,dword ptr [ESP + 0x304]
//   XREF to: Stack[-0x18] (READ)
// 0058e1a8: ADD EDI,EDX
// 0058e1aa: ADD EDI,0x8
// 0058e1ad: TEST EAX,EAX
// 0058e1af: JGE 0x0058e219
//   XREF to: 0058e219 (CONDITIONAL_JUMP)
// 0058e1b1: MOV ESI,EBX
// 0058e1b3: PUSH EDI
// 0058e1b4: MOV AL,byte ptr [ESI]
//   Label: LAB_0058e1b4
// 0058e1b6: MOV byte ptr [EDI],AL
// 0058e1b8: CMP AL,0x0
// 0058e1ba: JZ 0x0058e1cc
//   XREF to: 0058e1cc (CONDITIONAL_JUMP)
// 0058e1bc: MOV AL,byte ptr [ESI + 0x1]
// 0058e1bf: ADD ESI,0x2
// 0058e1c2: MOV byte ptr [EDI + 0x1],AL
// 0058e1c5: ADD EDI,0x2
// 0058e1c8: CMP AL,0x0
// 0058e1ca: JNZ 0x0058e1b4
//   XREF to: 0058e1b4 (CONDITIONAL_JUMP)
// 0058e1cc: POP EDI
//   Label: LAB_0058e1cc
// 0058e1cd: MOV EAX,dword ptr [ESP + 0x320]
//   Label: LAB_0058e1cd
//   XREF to: Stack[0x4] (READ)
// 0058e1d4: INC EBP
// 0058e1d5: MOV EDI,dword ptr [EAX + 0xbc]
// 0058e1db: ADD EBX,0x48
// 0058e1de: CMP EBP,EDI
// 0058e1e0: JL 0x0058e132
//   XREF to: 0058e132 (CONDITIONAL_JUMP)
// 0058e1e6: ADD ESP,0x30c
//   Label: LAB_0058e1e6
// 0058e1ec: POP EBP
// 0058e1ed: POP EDI
// 0058e1ee: POP ESI
// 0058e1ef: POP EBX
// 0058e1f0: RET
// 0058e1f1: MOV ECX,0x64aec2
//   Label: LAB_0058e1f1
//   XREF to: 0064aec2 (DATA)
// 0058e1f6: MOV EBX,0x912
// 0058e1fb: PUSH 0x64aed7
//   XREF to: 0064aed7 (DATA)
// 0058e200: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0058e206: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0058e20c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058e211: ADD ESP,0x4
// 0058e214: JMP 0x0058e0d8
//   XREF to: 0058e0d8 (UNCONDITIONAL_JUMP)
// 0058e219: PUSH 0x64aeff
//   Label: LAB_0058e219
//   XREF to: 0064aeff (DATA)
// 0058e21e: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x218] (DATA)
// 0058e225: PUSH EAX
// 0058e226: PUSH 0x0
// 0058e228: PUSH 0x0
// 0058e22a: PUSH EDI
// 0058e22b: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0058e230: ADD ESP,0x14
// 0058e233: JMP 0x0058e1cd
//   XREF to: 0058e1cd (UNCONDITIONAL_JUMP)
