// Name: crt_io.c_ConvertAccessMode_FUN_0060c850
// Address: 0060c850
// Address Range: [[0060c850, 0060c890]]
// Convention: __cdecl
// Signature: void crt_io.c_ConvertAccessMode_FUN_0060c850(int access_mode, DWORD * desired_access, DWORD * share_mode)
// Cross-references:
//   crt_stdio.c_CreateFileImpl_FUN_006090a0 (006090a0) at 006090da [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
crt_io_c_ConvertAccessMode_FUN_0060c850(int access_mode,DWORD *desired_access,DWORD *share_mode)

{
  if (access_mode == 2) {
    *desired_access = SYSTEM_GENERIC_READ_WRITE;
    *share_mode = 0x80;
    return;
  }
  if (access_mode == 1) {
    *desired_access = SYSTEM_GENERIC_WRITE;
    *share_mode = 0x80;
    return;
  }
  *desired_access = 0x80000000;
  *share_mode = 1;
  return;
}


// Assembly code:
// 0060c850: PUSH EBX
//   Label: crt_io.c_ConvertAccessMode_FUN_0060c850
// 0060c851: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060c855: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060c859: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060c85d: CMP EBX,0x2
// 0060c860: JNZ 0x0060c870
//   XREF to: 0060c870 (CONDITIONAL_JUMP)
// 0060c862: MOV dword ptr [EDX],0xc0000000
// 0060c868: MOV dword ptr [EAX],0x80
// 0060c86e: POP EBX
// 0060c86f: RET
// 0060c870: CMP EBX,0x1
//   Label: LAB_0060c870
// 0060c873: JNZ 0x0060c883
//   XREF to: 0060c883 (CONDITIONAL_JUMP)
// 0060c875: MOV dword ptr [EDX],0x40000000
// 0060c87b: MOV dword ptr [EAX],0x80
// 0060c881: POP EBX
// 0060c882: RET
// 0060c883: MOV dword ptr [EDX],0x80000000
//   Label: LAB_0060c883
// 0060c889: MOV dword ptr [EAX],0x1
// 0060c88f: POP EBX
// 0060c890: RET
