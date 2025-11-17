// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a30
// Address: 005a8a30
// Address Range: [[005a8a30, 005a8a53]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a30(CVector3d * velocity_source_ptr)
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[44]
//   undefined4 g_SfxLastSlot.field_20[48]

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a30(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].velocity_format = 2;
  g_SfxOptions[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}


// Assembly code:
// 005a8a30: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a30
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
