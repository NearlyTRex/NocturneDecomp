// Name: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005a89a0
// Address: 005a89a0
// Address Range: [[005a89a0, 005a89f9]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005a89a0(double vel_x, double vel_y, double vel_z)
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxOptions[0].velocity.x
//   undefined4 g_SfxOptions[0].velocity.x+4
//   undefined4 g_SfxOptions[0].velocity.y
//   undefined4 g_SfxOptions[0].velocity.y+4
//   undefined4 g_SfxOptions[0].velocity.z
//   undefined4 g_SfxOptions[0].velocity.z+4
//   undefined4 g_SfxLastSlot.field_20[44]
//   undefined4 g_SfxLastSlot.field_20[48]

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_setNextSfxStaticVelocity_FUN_005a89a0(double vel_x,double vel_y,double vel_z)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].velocity.x = vel_x;
  g_SfxOptions[iVar1].velocity.y = vel_y;
  g_SfxOptions[iVar1].velocity.z = vel_z;
  g_SfxOptions[iVar1].velocity_source_ptr = (CVector3d *)0x0;
  g_SfxOptions[iVar1].velocity_format = 0;
  return;
}


// Assembly code:
// 005a89a0: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_setNextSfxStaticVelocity_FUN_005a89a0
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
