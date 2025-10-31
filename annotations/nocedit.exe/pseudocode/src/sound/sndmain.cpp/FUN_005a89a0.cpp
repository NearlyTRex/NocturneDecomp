// Name: sound_sndmain.cpp_FUN_005a89a0
// Address: 005a89a0
// Address Range: [[005a89a0, 005a89f9]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a89a0()
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 DAT_03f624a8[0].field0_0x0[36]
//   undefined4 DAT_03f624a8[0].field0_0x0[40]
//   undefined4 DAT_03f624a8[0].field0_0x0[44]
//   undefined4 DAT_03f624a8[0].field0_0x0[48]
//   undefined4 DAT_03f624a8[0].field0_0x0[52]
//   undefined4 DAT_03f624a8[0].field0_0x0[56]
//   undefined4 g_SfxLastSlot.field_20[44]
//   undefined4 g_SfxLastSlot.field_20[48]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a89a0(void)

{
  SfxOptions *pSVar1;
  int iVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  iVar2 = g_SfxLastSlot;
  *(undefined4 *)(DAT_03f624a8[g_SfxLastSlot].field0_0x0 + 0x24) = in_stack_00000004;
  *(undefined4 *)(DAT_03f624a8[iVar2].field0_0x0 + 0x28) = in_stack_00000008;
  *(undefined4 *)(DAT_03f624a8[iVar2].field0_0x0 + 0x2c) = in_stack_0000000c;
  *(undefined4 *)(DAT_03f624a8[iVar2].field0_0x0 + 0x30) = in_stack_00000010;
  *(undefined4 *)(DAT_03f624a8[iVar2].field0_0x0 + 0x34) = in_stack_00000014;
  *(undefined4 *)(DAT_03f624a8[iVar2].field0_0x0 + 0x38) = in_stack_00000018;
  pSVar1 = DAT_03f624a8 + iVar2;
  pSVar1->field0_0x0[0x3c] = '\0';
  pSVar1->field0_0x0[0x3d] = '\0';
  pSVar1->field0_0x0[0x3e] = '\0';
  pSVar1->field0_0x0[0x3f] = '\0';
  pSVar1 = DAT_03f624a8 + iVar2;
  pSVar1->field0_0x0[0x40] = '\0';
  pSVar1->field0_0x0[0x41] = '\0';
  pSVar1->field0_0x0[0x42] = '\0';
  pSVar1->field0_0x0[0x43] = '\0';
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
