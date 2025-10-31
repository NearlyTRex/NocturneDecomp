// Name: core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0
// Address: 00543cf0
// Address Range: [[00543cf0, 00543dad]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer * this_ptr, SNetPlayer * other)

#include "nocturne.h"

void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other)

{
  *(undefined4 *)this_ptr->name = *(undefined4 *)other->name;
  *(undefined4 *)(this_ptr->name + 4) = *(undefined4 *)(other->name + 4);
  *(undefined4 *)(this_ptr->name + 8) = *(undefined4 *)(other->name + 8);
  *(undefined4 *)(this_ptr->name + 0xc) = *(undefined4 *)(other->name + 0xc);
  *(undefined4 *)(this_ptr->name + 0x10) = *(undefined4 *)(other->name + 0x10);
  *(undefined4 *)(this_ptr->name + 0x14) = *(undefined4 *)(other->name + 0x14);
  *(undefined4 *)(this_ptr->name + 0x18) = *(undefined4 *)(other->name + 0x18);
  *(undefined4 *)(this_ptr->name + 0x1c) = *(undefined4 *)(other->name + 0x1c);
  *(undefined2 *)(this_ptr->name + 0x20) = *(undefined2 *)(other->name + 0x20);
  *(undefined4 *)(this_ptr->name + 0x24) = *(undefined4 *)(other->name + 0x24);
  this_ptr->ping_quality = other->ping_quality;
  this_ptr->last_ping_sent = other->last_ping_sent;
  this_ptr->last_ping_response = other->last_ping_response;
  this_ptr->player_id = other->player_id;
  *(undefined4 *)this_ptr->field5_0x38 = *(undefined4 *)other->field5_0x38;
  *(undefined4 *)(this_ptr->field5_0x38 + 4) = *(undefined4 *)(other->field5_0x38 + 4);
  *(undefined4 *)(this_ptr->field5_0x38 + 8) = *(undefined4 *)(other->field5_0x38 + 8);
  *(undefined4 *)(this_ptr->field5_0x38 + 0xc) = *(undefined4 *)(other->field5_0x38 + 0xc);
  *(undefined4 *)(this_ptr->field5_0x38 + 0x10) = *(undefined4 *)(other->field5_0x38 + 0x10);
  *(undefined4 *)(this_ptr->field5_0x38 + 0x14) = *(undefined4 *)(other->field5_0x38 + 0x14);
  *(undefined4 *)(this_ptr->field5_0x38 + 0x18) = *(undefined4 *)(other->field5_0x38 + 0x18);
  *(undefined4 *)(this_ptr->field5_0x38 + 0x1c) = *(undefined4 *)(other->field5_0x38 + 0x1c);
  *(undefined4 *)(this_ptr->field5_0x38 + 0x20) = *(undefined4 *)(other->field5_0x38 + 0x20);
  this_ptr->sync_stage = other->sync_stage;
  *(undefined4 *)this_ptr->field_96 = *(undefined4 *)other->field_96;
  *(undefined4 *)(this_ptr->field_96 + 4) = *(undefined4 *)(other->field_96 + 4);
  *(undefined4 *)(this_ptr->field_96 + 8) = *(undefined4 *)(other->field_96 + 8);
  *(undefined4 *)(this_ptr->field_96 + 0xc) = *(undefined4 *)(other->field_96 + 0xc);
  *(undefined4 *)(this_ptr->field_96 + 0x10) = *(undefined4 *)(other->field_96 + 0x10);
  *(undefined4 *)(this_ptr->field_96 + 0x14) = *(undefined4 *)(other->field_96 + 0x14);
  return;
}


// Assembly code:
// 00543cf0: PUSH EBX
//   Label: core_netgame.cpp_SNetPlayer_copy_FUN_00543cf0
// 00543cf1: PUSH ESI
// 00543cf2: PUSH EDI
// 00543cf3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00543cf7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00543cfb: MOV EDI,EAX
// 00543cfd: MOV ESI,EDX
// 00543cff: MOVSD ES:EDI,ESI
// 00543d00: MOVSD ES:EDI,ESI
// 00543d01: MOVSD ES:EDI,ESI
// 00543d02: MOVSD ES:EDI,ESI
// 00543d03: MOVSD ES:EDI,ESI
// 00543d04: MOV ECX,dword ptr [EDX + 0x14]
// 00543d07: MOV dword ptr [EAX + 0x14],ECX
// 00543d0a: MOV ECX,dword ptr [EDX + 0x18]
// 00543d0d: MOV dword ptr [EAX + 0x18],ECX
// 00543d10: LEA ECX,[EDX + 0x1c]
// 00543d13: MOV EBX,dword ptr [ECX]
// 00543d15: MOV dword ptr [EAX + 0x1c],EBX
// 00543d18: MOV CX,word ptr [ECX + 0x4]
// 00543d1c: MOV word ptr [EAX + 0x20],CX
// 00543d20: MOV ECX,dword ptr [EDX + 0x24]
// 00543d23: MOV dword ptr [EAX + 0x24],ECX
// 00543d26: MOV ECX,dword ptr [EDX + 0x28]
// 00543d29: MOV dword ptr [EAX + 0x28],ECX
// 00543d2c: MOV ECX,dword ptr [EDX + 0x2c]
// 00543d2f: MOV dword ptr [EAX + 0x2c],ECX
// 00543d32: MOV ECX,dword ptr [EDX + 0x30]
// 00543d35: MOV dword ptr [EAX + 0x30],ECX
// 00543d38: MOV ECX,dword ptr [EDX + 0x34]
// 00543d3b: MOV dword ptr [EAX + 0x34],ECX
// 00543d3e: MOV ECX,dword ptr [EDX + 0x38]
// 00543d41: MOV dword ptr [EAX + 0x38],ECX
// 00543d44: MOV ECX,dword ptr [EDX + 0x3c]
// 00543d47: MOV dword ptr [EAX + 0x3c],ECX
// 00543d4a: MOV ECX,dword ptr [EDX + 0x40]
// 00543d4d: MOV dword ptr [EAX + 0x40],ECX
// 00543d50: MOV ECX,dword ptr [EDX + 0x44]
// 00543d53: MOV dword ptr [EAX + 0x44],ECX
// 00543d56: MOV ECX,dword ptr [EDX + 0x48]
// 00543d59: MOV dword ptr [EAX + 0x48],ECX
// 00543d5c: MOV ECX,dword ptr [EDX + 0x4c]
// 00543d5f: MOV dword ptr [EAX + 0x4c],ECX
// 00543d62: MOV ECX,dword ptr [EDX + 0x50]
// 00543d65: MOV dword ptr [EAX + 0x50],ECX
// 00543d68: MOV ECX,dword ptr [EDX + 0x54]
// 00543d6b: MOV dword ptr [EAX + 0x54],ECX
// 00543d6e: MOV ECX,dword ptr [EDX + 0x58]
// 00543d71: MOV dword ptr [EAX + 0x58],ECX
// 00543d74: MOV ECX,dword ptr [EDX + 0x5c]
// 00543d77: MOV dword ptr [EAX + 0x5c],ECX
// 00543d7a: ADD EAX,0x1c
// 00543d7d: MOV ECX,dword ptr [EDX + 0x60]
// 00543d80: MOV dword ptr [EAX + 0x44],ECX
// 00543d83: SUB EAX,0x1c
// 00543d86: MOV ECX,dword ptr [EDX + 0x64]
// 00543d89: MOV dword ptr [EAX + 0x64],ECX
// 00543d8c: ADD EAX,0x4c
// 00543d8f: MOV ECX,dword ptr [EDX + 0x68]
// 00543d92: MOV dword ptr [EAX + 0x1c],ECX
// 00543d95: SUB EAX,0x4c
// 00543d98: MOV ECX,dword ptr [EDX + 0x6c]
// 00543d9b: MOV dword ptr [EAX + 0x6c],ECX
// 00543d9e: MOV ECX,dword ptr [EDX + 0x70]
// 00543da1: MOV dword ptr [EAX + 0x70],ECX
// 00543da4: MOV ECX,dword ptr [EDX + 0x74]
// 00543da7: MOV dword ptr [EAX + 0x74],ECX
// 00543daa: POP EDI
// 00543dab: POP ESI
// 00543dac: POP EBX
// 00543dad: RET
