// Name: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// Address: 0053f6d0
// Address Range: [[0053f6d0, 0053f755]]
// Convention: __cdecl
// Signature: CNetGame * core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame * this_ptr)
// Cross-references:
//   core_netgame.cpp_staticInit_FUN_0053f310 (0053f310) at 0053f315 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_MyComputer_0063d2b1
//   undefined4 s_yComputer_0063d2b2
//   undefined4 s_Computer_0063d2b3
//   undefined4 s_omputer_0063d2b4
//   WatcomTypeInfo g_SNetPlayerTypeInfo
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   support_trisock.cpp_invalidateSocket_FUN_005e1ae0

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

{
  char cVar1;
  void *pvVar2;
  int extraout_EAX;
  char *pcVar3;
  char *pcVar4;
  
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->players,2,&g_SNetPlayerTypeInfo);
  support_trisock_cpp_invalidateSocket_FUN_005e1ae0((SSocketContext *)((int)pvVar2 + 0x150));
  ((CNetGame *)(extraout_EAX + -0x170))->connection_type = 0;
  *(undefined4 *)(extraout_EAX + -0x16c) = 0;
  pcVar3 = "MyComputer";
  *(undefined4 *)(extraout_EAX + -0x154) = 0;
  *(undefined4 *)(extraout_EAX + -0x60) = 0xffffffff;
  pcVar4 = (char *)(extraout_EAX + -0x168);
  *(undefined4 *)(extraout_EAX + -0x5c) = 0xffffffff;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(extraout_EAX + -8) = 0;
  return (CNetGame *)(extraout_EAX + -0x170);
}


// Assembly code:
// 0053f6d0: PUSH ESI
//   Label: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// 0053f6d1: PUSH EDI
// 0053f6d2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0053f6d6: PUSH 0x661d00
//   XREF to: 00661d00 (DATA)
// 0053f6db: PUSH 0x2
// 0053f6dd: ADD EDX,0x20
// 0053f6e0: PUSH EDX
// 0053f6e1: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0053f6e6: ADD ESP,0xc
// 0053f6e9: ADD EAX,0x150
// 0053f6ee: PUSH EAX
// 0053f6ef: CALL support_trisock.cpp_invalidateSocket_FUN_005e1ae0
//   XREF to: 005e1ae0 (UNCONDITIONAL_CALL)
// 0053f6f4: LEA EDX,[EAX + 0xfffffe90]
// 0053f6fa: MOV dword ptr [EDX],0x0
// 0053f700: MOV dword ptr [EDX + 0x4],0x0
// 0053f707: MOV ESI,0x63d2b1
//   XREF to: 0063d2b1 (DATA)
// 0053f70c: MOV dword ptr [EDX + 0x1c],0x0
// 0053f713: ADD ESP,0x4
// 0053f716: MOV dword ptr [EDX + 0x110],0xffffffff
// 0053f720: LEA EDI,[EDX + 0x8]
// 0053f723: MOV dword ptr [EDX + 0x114],0xffffffff
// 0053f72d: PUSH EDI
// 0053f72e: MOV AL,byte ptr [ESI]
//   Label: LAB_0053f72e
//   XREF to: 0063d2b1 (READ)
//   XREF to: 0063d2b3 (READ)
// 0053f730: MOV byte ptr [EDI],AL
// 0053f732: CMP AL,0x0
// 0053f734: JZ 0x0053f746
//   XREF to: 0053f746 (CONDITIONAL_JUMP)
// 0053f736: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063d2b2 (READ)
//   XREF to: 0063d2b4 (READ)
// 0053f739: ADD ESI,0x2
// 0053f73c: MOV byte ptr [EDI + 0x1],AL
// 0053f73f: ADD EDI,0x2
// 0053f742: CMP AL,0x0
// 0053f744: JNZ 0x0053f72e
//   XREF to: 0053f72e (CONDITIONAL_JUMP)
// 0053f746: POP EDI
//   Label: LAB_0053f746
// 0053f747: MOV EAX,EDX
// 0053f749: MOV dword ptr [EDX + 0x168],0x0
// 0053f753: POP EDI
// 0053f754: POP ESI
// 0053f755: RET
