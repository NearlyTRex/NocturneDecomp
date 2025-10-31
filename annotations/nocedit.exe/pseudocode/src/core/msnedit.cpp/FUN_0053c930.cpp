// Name: core_msnedit.cpp_FUN_0053c930
// Address: 0053c930
// Address Range: [[0053c930, 0053c96c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c930()
// Function calls:
//   core_msnedit.cpp_BeginAndEndScene_FUN_0053c970

#include "nocturne.h"

void core_msnedit_cpp_FUN_0053c930(void)

{
  core_msnedit_cpp_BeginAndEndScene_FUN_0053c970();
  return;
}


// Assembly code:
// 0053c930: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053c930
// 0053c931: PUSH ESI
// 0053c932: PUSH EDI
// 0053c933: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0053c937: MOV EDX,dword ptr [ECX + 0x18]
// 0053c93a: MOV EBX,dword ptr [ECX + 0x20]
// 0053c93d: ADD EDX,EBX
// 0053c93f: MOV EAX,EDX
// 0053c941: SAR EDX,0x1f
// 0053c944: SUB EAX,EDX
// 0053c946: SAR EAX,0x1
// 0053c948: MOV ESI,dword ptr [ECX + 0x1c]
// 0053c94b: MOV EDX,dword ptr [ECX + 0x14]
// 0053c94e: ADD EDX,ESI
// 0053c950: PUSH EAX
// 0053c951: MOV EAX,EDX
// 0053c953: SAR EDX,0x1f
// 0053c956: SUB EAX,EDX
// 0053c958: SAR EAX,0x1
// 0053c95a: PUSH EAX
// 0053c95b: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0053c95f: PUSH EDI
// 0053c960: PUSH ECX
// 0053c961: CALL core_msnedit.cpp_BeginAndEndScene_FUN_0053c970
//   XREF to: 0053c970 (UNCONDITIONAL_CALL)
// 0053c966: ADD ESP,0x10
// 0053c969: POP EDI
// 0053c96a: POP ESI
// 0053c96b: POP EBX
// 0053c96c: RET
