// Name: sound_sndmain.cpp_FUN_005a88e0
// Address: 005a88e0
// Address Range: [[005a88e0, 005a8939]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a88e0()
// Cross-references:
//   core_fire.cpp_CFireball_onCollision_FUN_004c1690 (004c1690) at 004c1729 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a5d7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 0058111a [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b26dd [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9580 (005a9580) at 005a95b1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad467 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_SfxLastSlot
//   undefined4 g_SfxLastSlot.volume
//   undefined4 g_SfxLastSlot.position
//   undefined4 g_SfxLastSlot.loop_count
//   undefined4 g_SfxLastSlot.field_20[0]
//   undefined4 g_SfxLastSlot.field_20[4]
//   undefined4 g_SfxLastSlot.field_20[8]
//   undefined4 g_SfxLastSlot.field_20[12]
//   undefined4 g_SfxLastSlot.field_20[16]

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005a88e0(void)

{
  CSfxOptions *pCVar1;
  int iVar2;
  void *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  iVar2 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].sample_data = in_stack_00000004;
  g_SfxOptions[iVar2].volume = in_stack_00000008;
  g_SfxOptions[iVar2].position = in_stack_0000000c;
  g_SfxOptions[iVar2].loop_count = in_stack_00000010;
  *(undefined4 *)g_SfxOptions[iVar2].field5_0x14 = in_stack_00000014;
  *(undefined4 *)(g_SfxOptions[iVar2].field5_0x14 + 4) = in_stack_00000018;
  pCVar1 = g_SfxOptions + iVar2;
  pCVar1->field5_0x14[8] = '\0';
  pCVar1->field5_0x14[9] = '\0';
  pCVar1->field5_0x14[10] = '\0';
  pCVar1->field5_0x14[0xb] = '\0';
  pCVar1 = g_SfxOptions + iVar2;
  pCVar1->field5_0x14[0xc] = '\0';
  pCVar1->field5_0x14[0xd] = '\0';
  pCVar1->field5_0x14[0xe] = '\0';
  pCVar1->field5_0x14[0xf] = '\0';
  return;
}


// Assembly code:
// 005a88e0: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_FUN_005a88e0
//   XREF to: 03f624a4 (READ)
// 005a88e5: SHL EAX,0x4
// 005a88e8: MOV EDX,EAX
// 005a88ea: SHL EAX,0x3
// 005a88ed: SUB EAX,EDX
// 005a88ef: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a88f3: MOV dword ptr [EAX + 0x3f624ac],EDX
//   XREF to: 03f624ac (DATA)
// 005a88f9: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005a88fd: MOV dword ptr [EAX + 0x3f624b0],EDX
//   XREF to: 03f624b0 (DATA)
// 005a8903: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005a8907: MOV dword ptr [EAX + 0x3f624b4],EDX
//   XREF to: 03f624b4 (DATA)
// 005a890d: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 005a8911: MOV dword ptr [EAX + 0x3f624b8],EDX
//   XREF to: 03f624b8 (DATA)
// 005a8917: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 005a891b: MOV dword ptr [EAX + 0x3f624bc],EDX
//   XREF to: 03f624bc (DATA)
// 005a8921: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x18] (READ)
// 005a8925: MOV dword ptr [EAX + 0x3f624c0],EDX
//   XREF to: 03f624c0 (DATA)
// 005a892b: XOR EDX,EDX
// 005a892d: MOV dword ptr [EAX + 0x3f624c4],EDX
//   XREF to: 03f624c4 (DATA)
// 005a8933: MOV dword ptr [EAX + 0x3f624c8],EDX
//   XREF to: 03f624c8 (DATA)
// 005a8939: RET
