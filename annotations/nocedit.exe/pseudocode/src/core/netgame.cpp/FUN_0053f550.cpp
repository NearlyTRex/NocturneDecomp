// Name: core_netgame.cpp_FUN_0053f550
// Address: 0053f550
// Address Range: [[0053f550, 0053f592]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f550()
// Globals:
//   int g_SimFrameCount
//   undefined4 g_SimFrameHistory
//   undefined4 DAT_02f9c128

#include "nocturne.h"

int core_netgame_cpp_FUN_0053f550(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (in_stack_00000004 == *(int *)((int)&g_SimFrameHistory + iVar1)) {
        return iVar2;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 100);
  }
  return -1;
}


// Assembly code:
// 0053f550: PUSH EBX
//   Label: core_netgame.cpp_FUN_0053f550
// 0053f551: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0053f555: MOV ECX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 0053f55b: XOR EDX,EDX
// 0053f55d: TEST ECX,ECX
// 0053f55f: JLE 0x0053f584
//   XREF to: 0053f584 (CONDITIONAL_JUMP)
// 0053f561: PUSH ESI
// 0053f562: MOV ESI,ECX
// 0053f564: SHL ECX,0x2
// 0053f567: SUB ECX,ESI
// 0053f569: SHL ECX,0x3
// 0053f56c: ADD ECX,ESI
// 0053f56e: XOR EAX,EAX
// 0053f570: SHL ECX,0x2
// 0053f573: POP ESI
// 0053f574: CMP EBX,dword ptr [EAX + 0x2f9c0c4]
//   Label: LAB_0053f574
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 0053f57a: JZ 0x0053f58d
//   XREF to: 0053f58d (CONDITIONAL_JUMP)
// 0053f57c: ADD EAX,0x64
// 0053f57f: INC EDX
// 0053f580: CMP EAX,ECX
// 0053f582: JL 0x0053f574
//   XREF to: 0053f574 (CONDITIONAL_JUMP)
// 0053f584: MOV ECX,0xffffffff
//   Label: LAB_0053f584
// 0053f589: MOV EAX,ECX
// 0053f58b: POP EBX
// 0053f58c: RET
// 0053f58d: MOV ECX,EDX
//   Label: LAB_0053f58d
// 0053f58f: MOV EAX,ECX
// 0053f591: POP EBX
// 0053f592: RET
