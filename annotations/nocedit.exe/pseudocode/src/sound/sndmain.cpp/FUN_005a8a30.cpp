// Name: sound_sndmain.cpp_FUN_005a8a30
// Address: 005a8a30
// Address Range: [[005a8a30, 005a8a53]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8a30()
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[44]
//   undefined4 g_SfxLastSlot.field_20[48]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a8a30(void)

{
  CSfxOptions *pCVar1;
  int iVar2;
  undefined4 in_stack_00000004;
  
  iVar2 = g_SfxLastSlot;
  pCVar1 = g_SfxOptions + g_SfxLastSlot;
  pCVar1->field5_0x14[0x2c] = '\x02';
  pCVar1->field5_0x14[0x2d] = '\0';
  pCVar1->field5_0x14[0x2e] = '\0';
  pCVar1->field5_0x14[0x2f] = '\0';
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 0x28) = in_stack_00000004;
  return;
}


// Assembly code:
// 005a8a30: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a8a30
//   XREF to: 03f624a4 (READ)
// 005a8a35: SHL EAX,0x4
// 005a8a38: MOV EDX,EAX
// 005a8a3a: SHL EAX,0x3
// 005a8a3d: SUB EAX,EDX
// 005a8a3f: MOV dword ptr [EAX + 0x3f624e8],0x2
//   XREF to: 03f624e8 (DATA)
// 005a8a49: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8a4d: MOV dword ptr [EAX + 0x3f624e4],EDX
//   XREF to: 03f624e4 (DATA)
// 005a8a53: RET
