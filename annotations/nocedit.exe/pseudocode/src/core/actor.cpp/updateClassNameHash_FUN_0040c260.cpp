// Name: core_actor.cpp_updateClassNameHash_FUN_0040c260
// Address: 0040c260
// Address Range: [[0040c260, 0040c286]]
// Convention: __cdecl
// Signature: uint core_actor.cpp_updateClassNameHash_FUN_0040c260(uint current_hash, int character)
// Function calls:
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

uint __cdecl core_actor_cpp_updateClassNameHash_FUN_0040c260(uint current_hash,int character)

{
  int iVar1;
  
  iVar1 = crt_ctype_c_tolower_FUN_005feb30(character);
  return character * 0x80 + ((uint)character >> 0x19) + iVar1 * 0x20001;
}


// Assembly code:
// 0040c260: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_actor.cpp_updateClassNameHash_FUN_0040c260
//   XREF to: Stack[0x8] (READ)
// 0040c264: PUSH EDX
// 0040c265: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 0040c26a: ADD ESP,0x4
// 0040c26d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0040c271: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0040c275: SHL EDX,0x7
// 0040c278: SHR ECX,0x19
// 0040c27b: ADD EDX,ECX
// 0040c27d: MOV ECX,EAX
// 0040c27f: SHL ECX,0x11
// 0040c282: ADD EDX,ECX
// 0040c284: ADD EAX,EDX
// 0040c286: RET
