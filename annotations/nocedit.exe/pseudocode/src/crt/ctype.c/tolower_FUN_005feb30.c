// Name: crt_ctype.c_tolower_FUN_005feb30
// Address: 005feb30
// Address Range: [[005feb30, 005feb41]]
// Convention: __cdecl
// Signature: int crt_ctype.c_tolower_FUN_005feb30(int character)
// Cross-references:
//   core_actor.cpp_getActorClassByName_FUN_0040c3c0 (0040c3c0) at 0040c40b [UNCONDITIONAL_CALL]
//   core_actor.cpp_hashClassName_FUN_0040c290 (0040c290) at 0040c2b5 [UNCONDITIONAL_CALL]
//   core_actor.cpp_matchClassTerm_FUN_0040c4f0 (0040c4f0) at 0040c5b2 [UNCONDITIONAL_CALL]
//   core_actor.cpp_registerActorClass_FUN_0040c2e0 (0040c2e0) at 0040c372 [UNCONDITIONAL_CALL]
//   core_actor.cpp_updateClassNameHash_FUN_0040c260 (0040c260) at 0040c265 [UNCONDITIONAL_CALL]
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607fd1 [UNCONDITIONAL_CALL]
//   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c (0060190c) at 0060192b [UNCONDITIONAL_CALL]
//   crt_stdio.c_char_to_digit_FUN_006058e8 (006058e8) at 006058fb [UNCONDITIONAL_CALL]
//   crt_stdlib.c_charToDigit_FUN_0060ee18 (0060ee18) at 0060ee33 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 (004a6e20) at 004a6ea7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_ctype_c_tolower_FUN_005feb30(int character)

{
  if ((0x40 < character) && (character < 0x5b)) {
    character = character + 0x20;
  }
  return character;
}


// Assembly code:
// 005feb30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_ctype.c_tolower_FUN_005feb30
//   XREF to: Stack[0x4] (READ)
// 005feb34: CMP EAX,0x41
// 005feb37: JL 0x005feb41
//   XREF to: 005feb41 (CONDITIONAL_JUMP)
// 005feb39: CMP EAX,0x5a
// 005feb3c: JG 0x005feb41
//   XREF to: 005feb41 (CONDITIONAL_JUMP)
// 005feb3e: ADD EAX,0x20
// 005feb41: RET
//   Label: LAB_005feb41
