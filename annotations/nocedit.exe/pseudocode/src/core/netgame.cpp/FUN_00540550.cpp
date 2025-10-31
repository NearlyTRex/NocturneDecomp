// Name: core_netgame.cpp_FUN_00540550
// Address: 00540550
// Address Range: [[00540550, 005405ac]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00540550()
// Cross-references:
//   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 (0053fbc0) at 0053fc54 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ForceMessagePump = 0x1
//   int g_NetworkPacketSize
// Function calls:
//   support_trisock.cpp_isSocketValid_FUN_005e1b70
//   support_trisock.cpp_receiveSocketData_FUN_005e1c20
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

void core_netgame_cpp_FUN_00540550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  iVar2 = support_trisock_cpp_isSocketValid_FUN_005e1b70
                    ((SSocketContext *)(in_stack_00000004 + 0x170));
  iVar1 = g_ForceMessagePump;
  if (iVar2 == 0) {
    return;
  }
  g_ForceMessagePump = 0;
  do {
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar2 = 0;
    do {
      iVar3 = support_trisock_cpp_receiveSocketData_FUN_005e1c20
                        ((SSocketContext *)(in_stack_00000004 + 0x170),(char *)&g_NetworkPacketSize,
                         0x405,(SNetworkAddr *)0x0);
      if (iVar3 < 1) {
        g_ForceMessagePump = iVar1;
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  } while( true );
}


// Assembly code:
// 00540550: PUSH ESI
//   Label: core_netgame.cpp_FUN_00540550
// 00540551: PUSH EBP
// 00540552: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00540556: ADD ESI,0x170
// 0054055c: PUSH ESI
// 0054055d: CALL support_trisock.cpp_isSocketValid_FUN_005e1b70
//   XREF to: 005e1b70 (UNCONDITIONAL_CALL)
// 00540562: ADD ESP,0x4
// 00540565: TEST EAX,EAX
// 00540567: JZ 0x005405aa
//   XREF to: 005405aa (CONDITIONAL_JUMP)
// 00540569: PUSH EDI
// 0054056a: PUSH EBX
// 0054056b: XOR EDX,EDX
// 0054056d: MOV EDI,dword ptr [0x006849a8]
//   XREF to: 006849a8 (READ)
// 00540573: MOV dword ptr [0x006849a8],EDX
//   XREF to: 006849a8 (WRITE)
// 00540579: XOR EBP,EBP
// 0054057b: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0054057b
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00540580: MOV EBX,EBP
// 00540582: PUSH EBP
//   Label: LAB_00540582
// 00540583: PUSH 0x405
// 00540588: PUSH 0x2fa88c8
//   XREF to: 02fa88c8 (DATA)
// 0054058d: PUSH ESI
// 0054058e: CALL support_trisock.cpp_receiveSocketData_FUN_005e1c20
//   XREF to: 005e1c20 (UNCONDITIONAL_CALL)
// 00540593: ADD ESP,0x10
// 00540596: TEST EAX,EAX
// 00540598: JLE 0x005405a2
//   XREF to: 005405a2 (CONDITIONAL_JUMP)
// 0054059a: INC EBX
// 0054059b: CMP EBX,0x14
// 0054059e: JL 0x00540582
//   XREF to: 00540582 (CONDITIONAL_JUMP)
// 005405a0: JMP 0x0054057b
//   XREF to: 0054057b (UNCONDITIONAL_JUMP)
// 005405a2: MOV dword ptr [0x006849a8],EDI
//   Label: LAB_005405a2
//   XREF to: 006849a8 (WRITE)
// 005405a8: POP EBX
// 005405a9: POP EDI
// 005405aa: POP EBP
//   Label: LAB_005405aa
// 005405ab: POP ESI
// 005405ac: RET
