// Name: sound_sndmain.cpp_FUN_005a8970
// Address: 005a8970
// Address Range: [[005a8970, 005a8993]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8970()
// Cross-references:
//   sound_sndmain.cpp_FUN_005a9620 (005a9620) at 005a9635 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[12]
//   undefined4 g_SfxLastSlot.field_20[16]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a8970(void)

{
  SfxOptions *pSVar1;
  int iVar2;
  undefined4 in_stack_00000004;
  
  iVar2 = g_SfxLastSlot;
  pSVar1 = DAT_03f624a8 + g_SfxLastSlot;
  pSVar1->field0_0x0[0x20] = '\x02';
  pSVar1->field0_0x0[0x21] = '\0';
  pSVar1->field0_0x0[0x22] = '\0';
  pSVar1->field0_0x0[0x23] = '\0';
  *(undefined4 *)(DAT_03f624a8[iVar2].field0_0x0 + 0x1c) = in_stack_00000004;
  return;
}


// Assembly code:
// 005a8970: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a8970
//   XREF to: 03f624a4 (READ)
// 005a8975: SHL EAX,0x4
// 005a8978: MOV EDX,EAX
// 005a897a: SHL EAX,0x3
// 005a897d: SUB EAX,EDX
// 005a897f: MOV dword ptr [EAX + 0x3f624c8],0x2
//   XREF to: 03f624c8 (DATA)
// 005a8989: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a898d: MOV dword ptr [EAX + 0x3f624c4],EDX
//   XREF to: 03f624c4 (DATA)
// 005a8993: RET
