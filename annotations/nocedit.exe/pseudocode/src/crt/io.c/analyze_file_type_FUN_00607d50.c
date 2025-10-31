// Name: crt_io.c_analyze_file_type_FUN_00607d50
// Address: 00607d50
// Address Range: [[00607d50, 00607e61]]
// Convention: __watcallStack
// Signature: uint crt_io.c_analyze_file_type_FUN_00607d50(uint open_flags, char * filename)
// Cross-references:
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607ff7 [UNCONDITIONAL_CALL]
// Globals:
//   CloseHandle* CloseHandle = 00211c38
//   GetFileType* PTR_GetFileType_0061159c = 00211f00
//   GetLastError* GetLastError = 00211f22
//   TerminatedCString s_con_0065905c
//   TerminatedCString s_conin_00659060
//   TerminatedCString s_EXE_00659068
//   WORD g_WindowsPlatformVersion = 0x0
// Function calls:
//   CloseHandle
//   CreateFileA
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_stricmp_FUN_005fe7f0
//   GetFileType
//   GetLastError

#include "nocturne.h"

uint __watcallStack crt_io_c_analyze_file_type_FUN_00607d50(uint open_flags,char *filename)

{
  uint uVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  if (g_WindowsPlatformVersion < 0x8000) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x40;
  }
  if ((open_flags & uVar1) != 0) {
    iVar2 = crt_string_c_stricmp_FUN_005fe7f0(filename,"con");
    pcVar5 = filename;
    if (iVar2 == 0) {
      pcVar5 = "conin$";
    }
    hFile = (*PTR_CreateFileA_00611510)(pcVar5,0,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      if ((0x7fff < g_WindowsPlatformVersion) || (DVar3 = (*GetLastError)(), DVar3 == 5)) {
        uVar4 = 0x2000;
      }
    }
    else {
      DVar3 = (*PTR_GetFileType_0061159c)(hFile);
      if (DVar3 == 2) {
        uVar4 = 0x2000;
      }
      else if (DVar3 == 3) {
        uVar4 = 0x1000;
      }
      (*CloseHandle)(hFile);
    }
  }
  if ((open_flags & 0x10) == 0) {
    uVar1 = uVar4;
    if (((uVar4 & 0x2000) == 0) && ((uVar4 & 0x1000) == 0)) {
      uVar1 = uVar4 | 0x8000;
      do {
        pcVar5 = filename;
        if (*filename == '.') goto LAB_00607e31;
        if (*filename == '\0') break;
        pcVar5 = filename + 1;
        if (*pcVar5 == '.') goto LAB_00607e31;
        filename = filename + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_00607e31:
      if ((pcVar5 != (char *)0x0) &&
         (iVar2 = crt_string_c_strcmp_FUN_005fef20(pcVar5 + 1,"EXE"), iVar2 == 0)) {
        uVar1 = uVar4 | 0x8049;
      }
    }
  }
  else {
    uVar1 = 0x4049;
  }
  uVar4 = uVar1 | 0x124;
  if ((open_flags & 1) == 0) {
    uVar4 = uVar1 | 0x1b6;
  }
  return uVar4;
}


// Assembly code:
// 00607d50: PUSH EBX
//   Label: crt_io.c_analyze_file_type_FUN_00607d50
// 00607d51: PUSH ESI
// 00607d52: PUSH EDI
// 00607d53: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00607d57: MOV DX,word ptr [0x00685019]
//   XREF to: 00685019 (READ)
// 00607d5e: XOR EBX,EBX
// 00607d60: CMP DX,0x8000
// 00607d65: JNC 0x00607d6e
//   XREF to: 00607d6e (CONDITIONAL_JUMP)
// 00607d67: MOV EAX,0x20
// 00607d6c: JMP 0x00607d73
//   XREF to: 00607d73 (UNCONDITIONAL_JUMP)
// 00607d6e: MOV EAX,0x40
//   Label: LAB_00607d6e
// 00607d73: TEST dword ptr [ESP + 0x10],EAX
//   Label: LAB_00607d73
//   XREF to: Stack[0x4] (READ)
// 00607d77: JZ 0x00607df7
//   XREF to: 00607df7 (CONDITIONAL_JUMP)
// 00607d7d: PUSH 0x65905c
//   XREF to: 0065905c (DATA)
// 00607d82: PUSH ESI
// 00607d83: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00607d88: ADD ESP,0x8
// 00607d8b: TEST EAX,EAX
// 00607d8d: JNZ 0x00607d96
//   XREF to: 00607d96 (CONDITIONAL_JUMP)
// 00607d8f: MOV EAX,0x659060
//   XREF to: 00659060 (PARAM)
// 00607d94: JMP 0x00607d98
//   XREF to: 00607d98 (UNCONDITIONAL_JUMP)
// 00607d96: MOV EAX,ESI
//   Label: LAB_00607d96
// 00607d98: PUSH 0x0
//   Label: LAB_00607d98
// 00607d9a: PUSH 0x0
// 00607d9c: PUSH 0x3
// 00607d9e: PUSH 0x0
// 00607da0: PUSH 0x0
// 00607da2: PUSH 0x0
// 00607da4: PUSH EAX
//   XREF to: 00659060 (DATA)
// 00607da5: CALL dword ptr CS:[0x611510]
//   XREF to: EXTERNAL:0000004f (COMPUTED_CALL)
//   XREF to: 00611510 (READ)
// 00607dac: MOV EDI,EAX
// 00607dae: CMP EAX,-0x1
// 00607db1: JZ 0x00607ddb
//   XREF to: 00607ddb (CONDITIONAL_JUMP)
// 00607db3: PUSH EAX
// 00607db4: CALL dword ptr CS:[0x61159c]
//   XREF to: EXTERNAL:00000072 (COMPUTED_CALL)
//   XREF to: 0061159c (READ)
// 00607dbb: CMP EAX,0x2
// 00607dbe: JNZ 0x00607dc7
//   XREF to: 00607dc7 (CONDITIONAL_JUMP)
// 00607dc0: MOV EBX,0x2000
// 00607dc5: JMP 0x00607dd1
//   XREF to: 00607dd1 (UNCONDITIONAL_JUMP)
// 00607dc7: CMP EAX,0x3
//   Label: LAB_00607dc7
// 00607dca: JNZ 0x00607dd1
//   XREF to: 00607dd1 (CONDITIONAL_JUMP)
// 00607dcc: MOV EBX,0x1000
// 00607dd1: PUSH EDI
//   Label: LAB_00607dd1
// 00607dd2: CALL dword ptr CS:[0x611504]
//   XREF to: EXTERNAL:0000004c (COMPUTED_CALL)
//   XREF to: 00611504 (READ)
// 00607dd9: JMP 0x00607df7
//   XREF to: 00607df7 (UNCONDITIONAL_JUMP)
// 00607ddb: CMP word ptr [0x00685019],0x8000
//   Label: LAB_00607ddb
//   XREF to: 00685019 (READ)
// 00607de4: JNC 0x00607df2
//   XREF to: 00607df2 (CONDITIONAL_JUMP)
// 00607de6: CALL dword ptr CS:[0x6115a4]
//   XREF to: EXTERNAL:00000074 (COMPUTED_CALL)
//   XREF to: 006115a4 (READ)
// 00607ded: CMP EAX,0x5
// 00607df0: JNZ 0x00607df7
//   XREF to: 00607df7 (CONDITIONAL_JUMP)
// 00607df2: MOV EBX,0x2000
//   Label: LAB_00607df2
// 00607df7: TEST byte ptr [ESP + 0x10],0x10
//   Label: LAB_00607df7
//   XREF to: Stack[0x4] (READ)
// 00607dfc: JZ 0x00607e0a
//   XREF to: 00607e0a (CONDITIONAL_JUMP)
// 00607dfe: AND BX,0xfb6
// 00607e03: OR BX,0x4049
// 00607e08: JMP 0x00607e4b
//   XREF to: 00607e4b (UNCONDITIONAL_JUMP)
// 00607e0a: TEST BH,0x20
//   Label: LAB_00607e0a
// 00607e0d: JNZ 0x00607e4b
//   XREF to: 00607e4b (CONDITIONAL_JUMP)
// 00607e0f: TEST BH,0x10
// 00607e12: JNZ 0x00607e4b
//   XREF to: 00607e4b (CONDITIONAL_JUMP)
// 00607e14: MOV DL,0x2e
// 00607e16: OR BH,0x80
// 00607e19: MOV AL,byte ptr [ESI]
//   Label: LAB_00607e19
// 00607e1b: CMP AL,DL
// 00607e1d: JZ 0x00607e31
//   XREF to: 00607e31 (CONDITIONAL_JUMP)
// 00607e1f: CMP AL,0x0
// 00607e21: JZ 0x00607e2f
//   XREF to: 00607e2f (CONDITIONAL_JUMP)
// 00607e23: INC ESI
// 00607e24: MOV AL,byte ptr [ESI]
// 00607e26: CMP AL,DL
// 00607e28: JZ 0x00607e31
//   XREF to: 00607e31 (CONDITIONAL_JUMP)
// 00607e2a: INC ESI
// 00607e2b: CMP AL,0x0
// 00607e2d: JNZ 0x00607e19
//   XREF to: 00607e19 (CONDITIONAL_JUMP)
// 00607e2f: SUB ESI,ESI
//   Label: LAB_00607e2f
// 00607e31: TEST ESI,ESI
//   Label: LAB_00607e31
// 00607e33: JZ 0x00607e4b
//   XREF to: 00607e4b (CONDITIONAL_JUMP)
// 00607e35: PUSH 0x659068
//   XREF to: 00659068 (DATA)
// 00607e3a: INC ESI
// 00607e3b: PUSH ESI
// 00607e3c: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00607e41: ADD ESP,0x8
// 00607e44: TEST EAX,EAX
// 00607e46: JNZ 0x00607e4b
//   XREF to: 00607e4b (CONDITIONAL_JUMP)
// 00607e48: OR BL,0x49
// 00607e4b: MOV DL,byte ptr [ESP + 0x10]
//   Label: LAB_00607e4b
// 00607e4f: OR BX,0x124
// 00607e54: TEST DL,0x1
// 00607e57: JNZ 0x00607e5c
//   XREF to: 00607e5c (CONDITIONAL_JUMP)
// 00607e59: OR BL,0x92
// 00607e5c: MOV EAX,EBX
//   Label: LAB_00607e5c
// 00607e5e: POP EDI
// 00607e5f: POP ESI
// 00607e60: POP EBX
// 00607e61: RET
