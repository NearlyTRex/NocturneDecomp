// Name: core_script.cpp_FUN_00567bc0
// Address: 00567bc0
// Address Range: [[00567bc0, 00567cfa]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567bc0()
// Cross-references:
//   core_msnedit.cpp_FUN_0053ec80 (0053ec80) at 0053edb1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_Script_line_d_006441ae
//   void* PTR_s_label_006441c0_00680e28 = 006441c0
//   void* PTR_s_anon_006441c9_00680e2c = 006441c9
// Function calls:
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00567bc0(undefined4 param_1, undefined4 param_2) */

void core_script_cpp_FUN_00567bc0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CStrList *in_stack_00000014;
  int iStack_21a0;
  undefined1 auStack_2138 [500];
  int aiStack_1f44 [1920];
  char acStack_144 [4];
  char acStack_140 [292];
  int local_1c;
  int local_18;
  int local_14;
  int iVar3;
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  local_1c = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    local_18 = 0;
    do {
      local_14 = local_18;
      iVar3 = 0;
      do {
        iVar1 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
        if ((2 < iVar1) && (iVar1 = 0, 0 < iStack_21a0)) {
          iVar2 = 0;
          do {
            if (*(int *)((int)aiStack_1f44 + iVar2) == 0xd) {
              crt_stdio_c_sprintf_FUN_005fdbd0
                        (acStack_144,"%s\tScript line %d",auStack_2138 + iVar2);
              shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000014,acStack_140);
            }
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x328;
          } while (iVar1 < iStack_21a0);
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 != 0x1e0);
      local_18 = local_18 + 8;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(in_stack_00000004 + 0x30));
  }
  return;
}


// Assembly code:
// 00567bc0: PUSH EBX
//   Label: core_script.cpp_FUN_00567bc0
// 00567bc1: PUSH ESI
// 00567bc2: PUSH EDI
// 00567bc3: PUSH EBP
// 00567bc4: SUB ESP,0x2264
// 00567bca: MOV EDI,dword ptr [ESP + 0x2278]
//   XREF to: Stack[0x4] (READ)
// 00567bd1: PUSH EDI
// 00567bd2: CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   XREF to: 0055a370 (UNCONDITIONAL_CALL)
// 00567bd7: ADD ESP,0x4
// 00567bda: XOR EDX,EDX
// 00567bdc: MOV ECX,dword ptr [EDI + 0x30]
// 00567bdf: MOV dword ptr [ESP + 0x2254],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00567be6: TEST ECX,ECX
// 00567be8: JLE 0x00567cf0
//   XREF to: 00567cf0 (CONDITIONAL_JUMP)
// 00567bee: MOV dword ptr [ESP + 0x2258],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00567bf5: MOV EBP,dword ptr [ESP + 0x2258]
//   Label: LAB_00567bf5
//   XREF to: Stack[-0x1c] (READ)
// 00567bfc: XOR EDX,EDX
// 00567bfe: MOV dword ptr [ESP + 0x225c],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00567c05: MOV dword ptr [ESP + 0x2260],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00567c0c: MOV EAX,dword ptr [ESP + 0x2260]
//   Label: LAB_00567c0c
//   XREF to: Stack[-0x14] (READ)
// 00567c13: MOV EBX,dword ptr [ESP + 0x225c]
//   XREF to: Stack[-0x18] (READ)
// 00567c1a: MOV ECX,dword ptr [EAX + 0x680e28]
//   XREF to: 00680e28 (DATA)
//   XREF to: 00680e2c (DATA)
// 00567c20: MOV EAX,dword ptr [EDI + 0x34]
// 00567c23: ADD EAX,EBX
// 00567c25: PUSH ECX
// 00567c26: MOV ESI,dword ptr [EAX + 0x4]
// 00567c29: PUSH ESI
// 00567c2a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2274] (DATA)
// 00567c2e: PUSH EAX
// 00567c2f: CALL core_script.cpp_SCmdParse_parse_FUN_00561fd0
//   XREF to: 00561fd0 (UNCONDITIONAL_CALL)
// 00567c34: ADD ESP,0xc
// 00567c37: CMP EAX,0x3
// 00567c3a: JL 0x00567ca8
//   XREF to: 00567ca8 (CONDITIONAL_JUMP)
// 00567c3c: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x21a8] (READ)
// 00567c43: XOR ESI,ESI
// 00567c45: TEST EAX,EAX
// 00567c47: JLE 0x00567ca8
//   XREF to: 00567ca8 (CONDITIONAL_JUMP)
// 00567c49: XOR EBX,EBX
// 00567c4b: CMP dword ptr [ESP + EBX*0x1 + 0x328],0xd
//   Label: LAB_00567c4b
// 00567c53: JNZ 0x00567c96
//   XREF to: 00567c96 (CONDITIONAL_JUMP)
// 00567c55: MOV EAX,dword ptr [EDI + 0x34]
// 00567c58: MOV EDX,dword ptr [EAX + EBP*0x1]
// 00567c5b: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x21a4] (DATA)
// 00567c62: ADD EAX,EBX
// 00567c64: PUSH EDX
// 00567c65: ADD EAX,0x64
// 00567c68: PUSH EAX
// 00567c69: PUSH 0x6441ae
//   XREF to: 006441ae (DATA)
// 00567c6e: LEA EAX,[ESP + 0x2134]
//   XREF to: Stack[-0x14c] (DATA)
// 00567c75: PUSH EAX
// 00567c76: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00567c7b: ADD ESP,0x10
// 00567c7e: LEA EAX,[ESP + 0x2128]
//   XREF to: Stack[-0x14c] (DATA)
// 00567c85: PUSH EAX
// 00567c86: MOV ECX,dword ptr [ESP + 0x2280]
//   XREF to: Stack[0x8] (READ)
// 00567c8d: PUSH ECX
// 00567c8e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00567c93: ADD ESP,0x8
// 00567c96: MOV EDX,dword ptr [ESP + 0xcc]
//   Label: LAB_00567c96
//   XREF to: Stack[-0x21a8] (READ)
// 00567c9d: INC ESI
// 00567c9e: ADD EBX,0x328
// 00567ca4: CMP ESI,EDX
// 00567ca6: JL 0x00567c4b
//   XREF to: 00567c4b (CONDITIONAL_JUMP)
// 00567ca8: MOV EBX,dword ptr [ESP + 0x2260]
//   Label: LAB_00567ca8
//   XREF to: Stack[-0x14] (READ)
// 00567caf: ADD EBX,0x4
// 00567cb2: MOV dword ptr [ESP + 0x2260],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00567cb9: CMP EBX,0x1e0
// 00567cbf: JNZ 0x00567c0c
//   XREF to: 00567c0c (CONDITIONAL_JUMP)
// 00567cc5: MOV EBX,dword ptr [ESP + 0x2258]
//   XREF to: Stack[-0x1c] (READ)
// 00567ccc: MOV ESI,dword ptr [ESP + 0x2254]
//   XREF to: Stack[-0x20] (READ)
// 00567cd3: MOV EBP,dword ptr [EDI + 0x30]
// 00567cd6: ADD EBX,0x8
// 00567cd9: INC ESI
// 00567cda: MOV dword ptr [ESP + 0x2258],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00567ce1: MOV dword ptr [ESP + 0x2254],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00567ce8: CMP ESI,EBP
// 00567cea: JL 0x00567bf5
//   XREF to: 00567bf5 (CONDITIONAL_JUMP)
// 00567cf0: ADD ESP,0x2264
//   Label: LAB_00567cf0
// 00567cf6: POP EBP
// 00567cf7: POP EDI
// 00567cf8: POP ESI
// 00567cf9: POP EBX
// 00567cfa: RET
