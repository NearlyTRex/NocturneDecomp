// Name: crt_io.c_CheckFileHandleAvailability_FUN_00608940
// Address: 00608940
// Address Range: [[00608940, 0060898c]]
// Convention: __cdecl
// Signature: int crt_io.c_CheckFileHandleAvailability_FUN_00608940(void)
// Cross-references:
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 006090ab [UNCONDITIONAL_CALL]
// Globals:
//   uint g_MaxHandleCount = 0x14
//   SIOControlBlock* g_IOControlBlock = 00000000
//   undefined4 g_CurrentHandleCount

#include "nocturne.h"

int __cdecl crt_io_c_CheckFileHandleAvailability_FUN_00608940(void)

{
  int iVar1;
  
  if (g_CurrentHandleCount < g_MaxHandleCount) {
    iVar1 = 0;
  }
  else {
    if (0 < (int)g_CurrentHandleCount) {
      iVar1 = 0;
      do {
        if (*(int *)((int)g_IOControlBlock->standard_handles + iVar1) == 0) {
          return 0;
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < (int)(g_CurrentHandleCount * 4));
    }
    iVar1 = 1;
  }
  return iVar1;
}


// Assembly code:
// 00608940: PUSH EBX
//   Label: crt_io.c_CheckFileHandleAvailability_FUN_00608940
// 00608941: MOV ECX,dword ptr [0x0068526c]
//   XREF to: 0068526c (READ)
// 00608947: MOV EAX,[0x00685270]
//   XREF to: 00685270 (READ)
// 0060894c: CMP EAX,dword ptr [0x00685214]
//   XREF to: 00685214 (READ)
// 00608952: JNC 0x00608958
//   XREF to: 00608958 (CONDITIONAL_JUMP)
// 00608954: XOR EAX,EAX
// 00608956: JMP 0x00608985
//   XREF to: 00608985 (UNCONDITIONAL_JUMP)
// 00608958: TEST EAX,EAX
//   Label: LAB_00608958
// 0060895a: JLE 0x00608980
//   XREF to: 00608980 (CONDITIONAL_JUMP)
// 0060895c: MOV EBX,dword ptr [0x00685270]
//   XREF to: 00685270 (READ)
// 00608962: MOV EDX,ECX
// 00608964: XOR EAX,EAX
// 00608966: SHL EBX,0x2
// 00608969: CMP dword ptr [EDX + EAX*0x1],0x0
//   Label: LAB_00608969
// 0060896d: JNZ 0x00608979
//   XREF to: 00608979 (CONDITIONAL_JUMP)
// 0060896f: XOR EAX,EAX
// 00608971: MOV dword ptr [0x0068526c],ECX
//   XREF to: 0068526c (WRITE)
// 00608977: POP EBX
// 00608978: RET
// 00608979: ADD EAX,0x4
//   Label: LAB_00608979
// 0060897c: CMP EAX,EBX
// 0060897e: JL 0x00608969
//   XREF to: 00608969 (CONDITIONAL_JUMP)
// 00608980: MOV EAX,0x1
//   Label: LAB_00608980
// 00608985: MOV dword ptr [0x0068526c],ECX
//   Label: LAB_00608985
//   XREF to: 0068526c (WRITE)
// 0060898b: POP EBX
// 0060898c: RET
