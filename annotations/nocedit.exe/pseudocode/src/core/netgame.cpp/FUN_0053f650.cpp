// Name: core_netgame.cpp_FUN_0053f650
// Address: 0053f650
// Address Range: [[0053f650, 0053f6c0]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f650()
// Globals:
//   int g_SimFrameCount
//   undefined4 g_SimFrameHistory
//   undefined4 DAT_02f9c128
//   undefined4 DAT_02f9c18c
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void core_netgame_cpp_FUN_0053f650(void)

{
  int iVar1;
  int iVar2;
  undefined4 *src;
  int in_stack_00000004;
  
  iVar1 = 0;
  if (0 < g_SimFrameCount) {
    iVar2 = 0;
    src = &DAT_02f9c128;
    do {
      while (*(int *)((int)&g_SimFrameHistory + iVar2) < in_stack_00000004) {
        g_SimFrameCount = g_SimFrameCount + -1;
        crt_string_c_memmove_FUN_005fe5e0
                  ((void *)((int)&g_SimFrameHistory + iVar2),src,(g_SimFrameCount - iVar1) * 100);
        if (g_SimFrameCount <= iVar1) {
          return;
        }
      }
      src = src + 0x19;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 100;
    } while (iVar1 < g_SimFrameCount);
  }
  return;
}


// Assembly code:
// 0053f650: PUSH EBX
//   Label: core_netgame.cpp_FUN_0053f650
// 0053f651: PUSH ESI
// 0053f652: PUSH EDI
// 0053f653: PUSH EBP
// 0053f654: MOV EBP,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 0053f65a: XOR EBX,EBX
// 0053f65c: TEST EBP,EBP
// 0053f65e: JLE 0x0053f681
//   XREF to: 0053f681 (CONDITIONAL_JUMP)
// 0053f660: MOV EDI,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 0053f665: XOR ESI,ESI
// 0053f667: ADD EDI,0x64
// 0053f66a: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0053f66a
//   XREF to: Stack[0x4] (READ)
// 0053f66e: CMP EDX,dword ptr [ESI + 0x2f9c0c4]
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 0053f674: JG 0x0053f68c
//   XREF to: 0053f68c (CONDITIONAL_JUMP)
// 0053f676: ADD EDI,0x64
// 0053f679: INC EBX
// 0053f67a: ADD ESI,0x64
// 0053f67d: CMP EBX,EBP
// 0053f67f: JL 0x0053f66a
//   XREF to: 0053f66a (CONDITIONAL_JUMP)
// 0053f681: MOV dword ptr [0x02f9c0c0],EBP
//   Label: LAB_0053f681
//   XREF to: 02f9c0c0 (WRITE)
// 0053f687: POP EBP
// 0053f688: POP EDI
// 0053f689: POP ESI
// 0053f68a: POP EBX
// 0053f68b: RET
// 0053f68c: DEC EBP
//   Label: LAB_0053f68c
// 0053f68d: MOV EAX,EBP
// 0053f68f: SUB EAX,EBX
// 0053f691: IMUL EAX,EAX,0x64
// 0053f694: PUSH EAX
// 0053f695: MOV EAX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 0053f69a: PUSH EDI
//   XREF to: 02f9c18c (DATA)
// 0053f69b: ADD EAX,ESI
// 0053f69d: PUSH EAX
//   XREF to: 02f9c128 (DATA)
// 0053f69e: MOV dword ptr [0x02f9c0c0],EBP
//   XREF to: 02f9c0c0 (WRITE)
// 0053f6a4: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0053f6a9: MOV EBP,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 0053f6af: ADD ESP,0xc
// 0053f6b2: CMP EBX,EBP
// 0053f6b4: JL 0x0053f66a
//   XREF to: 0053f66a (CONDITIONAL_JUMP)
// 0053f6b6: MOV dword ptr [0x02f9c0c0],EBP
//   XREF to: 02f9c0c0 (WRITE)
// 0053f6bc: POP EBP
// 0053f6bd: POP EDI
// 0053f6be: POP ESI
// 0053f6bf: POP EBX
// 0053f6c0: RET
