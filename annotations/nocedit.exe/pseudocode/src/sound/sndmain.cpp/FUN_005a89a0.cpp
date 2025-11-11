// Name: sound_sndmain.cpp_FUN_005a89a0
// Address: 005a89a0
// Address Range: [[005a89a0, 005a89f9]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a89a0()
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxOptions[0].field5_0x14[16]
//   undefined4 g_SfxOptions[0].field5_0x14[20]
//   undefined4 g_SfxOptions[0].field5_0x14[24]
//   undefined4 g_SfxOptions[0].field5_0x14[28]
//   undefined4 g_SfxOptions[0].field5_0x14[32]
//   undefined4 g_SfxOptions[0].field5_0x14[36]
//   undefined4 g_SfxLastSlot.field_20[44]
//   undefined4 g_SfxLastSlot.field_20[48]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a89a0(void)

{
  CSfxOptions *pCVar1;
  int iVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  iVar2 = g_SfxLastSlot;
  *(undefined4 *)(g_SfxOptions[g_SfxLastSlot].field5_0x14 + 0x10) = in_stack_00000004;
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 0x14) = in_stack_00000008;
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 0x18) = in_stack_0000000c;
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 0x1c) = in_stack_00000010;
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 0x20) = in_stack_00000014;
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 0x24) = in_stack_00000018;
  pCVar1 = g_SfxOptions + iVar2;
  pCVar1->field5_0x14[0x28] = '\0';
  pCVar1->field5_0x14[0x29] = '\0';
  pCVar1->field5_0x14[0x2a] = '\0';
  pCVar1->field5_0x14[0x2b] = '\0';
  pCVar1 = g_SfxOptions + iVar2;
  pCVar1->field5_0x14[0x2c] = '\0';
  pCVar1->field5_0x14[0x2d] = '\0';
  pCVar1->field5_0x14[0x2e] = '\0';
  pCVar1->field5_0x14[0x2f] = '\0';
  return;
}


// Assembly code:
// 005a89a0: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a89a0
//   XREF to: 03f624a4 (READ)
// 005a89a5: SHL EAX,0x4
// 005a89a8: MOV EDX,EAX
// 005a89aa: SHL EAX,0x3
// 005a89ad: SUB EAX,EDX
// 005a89af: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a89b3: MOV dword ptr [EAX + 0x3f624cc],EDX
//   XREF to: 03f624cc (DATA)
// 005a89b9: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005a89bd: MOV dword ptr [EAX + 0x3f624d0],EDX
//   XREF to: 03f624d0 (DATA)
// 005a89c3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005a89c7: MOV dword ptr [EAX + 0x3f624d4],EDX
//   XREF to: 03f624d4 (DATA)
// 005a89cd: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 005a89d1: MOV dword ptr [EAX + 0x3f624d8],EDX
//   XREF to: 03f624d8 (DATA)
// 005a89d7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 005a89db: MOV dword ptr [EAX + 0x3f624dc],EDX
//   XREF to: 03f624dc (DATA)
// 005a89e1: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 005a89e5: MOV dword ptr [EAX + 0x3f624e0],EDX
//   XREF to: 03f624e0 (DATA)
// 005a89eb: XOR EDX,EDX
// 005a89ed: MOV dword ptr [EAX + 0x3f624e4],EDX
//   XREF to: 03f624e4 (DATA)
// 005a89f3: MOV dword ptr [EAX + 0x3f624e8],EDX
//   XREF to: 03f624e8 (DATA)
// 005a89f9: RET
