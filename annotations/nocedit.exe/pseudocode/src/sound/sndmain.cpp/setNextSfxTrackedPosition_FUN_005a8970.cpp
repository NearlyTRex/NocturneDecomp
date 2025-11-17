// Name: sound_sndmain.cpp_setNextSfxTrackedPosition_FUN_005a8970
// Address: 005a8970
// Address Range: [[005a8970, 005a8993]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxTrackedPosition_FUN_005a8970(CVector3d * position_source_ptr)
// Cross-references:
//   sound_sndmain.cpp_FUN_005a9620 (005a9620) at 005a9635 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[12]
//   undefined4 g_SfxLastSlot.field_20[16]

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_setNextSfxTrackedPosition_FUN_005a8970(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].position_format = 2;
  g_SfxOptions[iVar1].position_source_ptr = position_source_ptr;
  return;
}


// Assembly code:
// 005a8970: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_setNextSfxTrackedPosition_FUN_005a8970
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
