// Name: core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
// Address: 004c81f0
// Address Range: [[004c81f0, 004c822d]]
// Convention: __cdecl
// Signature: SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0(SLaserInfo * this_ptr)
// Cross-references:
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a88d6 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a8d0 (0050a8d0) at 0050aa35 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee830 (005ee830) at 005ee8e6 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065dcc0

#include "nocturne.h"

SLaserInfo * __cdecl core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(SLaserInfo *this_ptr)

{
  this_ptr->field0_0x0[0] = '\0';
  this_ptr->field0_0x0[1] = '\0';
  this_ptr->field0_0x0[2] = -0x80;
  this_ptr->field0_0x0[3] = '?';
  this_ptr->field0_0x0[8] = '\0';
  this_ptr->field0_0x0[9] = '\0';
  this_ptr->field0_0x0[10] = '\0';
  this_ptr->field0_0x0[0xb] = '\0';
  this_ptr->field0_0x0[0xc] = -1;
  this_ptr->field0_0x0[0xd] = '\0';
  this_ptr->field0_0x0[0xe] = '\0';
  this_ptr->field0_0x0[0xf] = '\0';
  this_ptr->field0_0x0[0x10] = '\0';
  this_ptr->field0_0x0[0x11] = '\0';
  this_ptr->field0_0x0[0x12] = '\0';
  this_ptr->field0_0x0[0x13] = '\0';
  this_ptr->field0_0x0[0x14] = '\0';
  this_ptr->field0_0x0[0x15] = '\0';
  this_ptr->field0_0x0[0x16] = '\0';
  this_ptr->field0_0x0[0x17] = '\0';
  this_ptr->field0_0x0[0x18] = '\0';
  this_ptr->field0_0x0[0x19] = '\0';
  this_ptr->field0_0x0[0x1a] = '\0';
  this_ptr->field0_0x0[0x1b] = '\0';
  this_ptr->field0_0x0[0x1c] = '\0';
  this_ptr->field0_0x0[0x1d] = '\0';
  this_ptr->field0_0x0[0x1e] = '\0';
  this_ptr->field0_0x0[0x1f] = '\0';
  *(undefined4 *)(this_ptr->field0_0x0 + 4) = DAT_0065dcc0;
  return this_ptr;
}


// Assembly code:
// 004c81f0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
//   XREF to: Stack[0x4] (READ)
// 004c81f4: MOV dword ptr [EAX],0x3f800000
// 004c81fa: MOV dword ptr [EAX + 0x8],0x0
// 004c8201: MOV dword ptr [EAX + 0xc],0xff
// 004c8208: MOV dword ptr [EAX + 0x10],0x0
// 004c820f: MOV dword ptr [EAX + 0x14],0x0
// 004c8216: MOV dword ptr [EAX + 0x18],0x0
// 004c821d: MOV dword ptr [EAX + 0x1c],0x0
// 004c8224: MOV EDX,dword ptr [0x0065dcc0]
//   XREF to: 0065dcc0 (READ)
// 004c822a: MOV dword ptr [EAX + 0x4],EDX
// 004c822d: RET
