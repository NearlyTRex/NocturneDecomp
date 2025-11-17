// Name: core_sound.cpp_FUN_005b2ca0
// Address: 005b2ca0
// Address Range: [[005b2ca0, 005b2cdc]]
// Convention: unknown
// Signature: undefined core_sound.cpp_FUN_005b2ca0()
// Globals:
//   undefined4 DAT_03f6b7c8
//   undefined4 DAT_03f6b7d8
//   undefined4 DAT_03f6b870
//   undefined4 DAT_03f6b874
// Function calls:
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

void core_sound_cpp_FUN_005b2ca0(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 0x10;
    sound_sndmain_cpp_FUN_005a9c40();
  } while (iVar1 != 0xa0);
  sound_sndmain_cpp_FUN_005a9c40();
  sound_sndmain_cpp_FUN_005a9c40();
  return;
}


// Assembly code:
// 005b2ca0: PUSH EBX
//   Label: core_sound.cpp_FUN_005b2ca0
// 005b2ca1: XOR EBX,EBX
// 005b2ca3: MOV EDX,dword ptr [EBX + 0x3f6b7c8]
//   Label: LAB_005b2ca3
//   XREF to: 03f6b7c8 (READ)
//   XREF to: 03f6b7d8 (READ)
// 005b2ca9: PUSH EDX
// 005b2caa: ADD EBX,0x10
// 005b2cad: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2cb2: ADD ESP,0x4
// 005b2cb5: CMP EBX,0xa0
// 005b2cbb: JNZ 0x005b2ca3
//   XREF to: 005b2ca3 (CONDITIONAL_JUMP)
// 005b2cbd: MOV ECX,dword ptr [0x03f6b870]
//   XREF to: 03f6b870 (READ)
// 005b2cc3: PUSH ECX
// 005b2cc4: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2cc9: ADD ESP,0x4
// 005b2ccc: MOV EBX,dword ptr [0x03f6b874]
//   XREF to: 03f6b874 (READ)
// 005b2cd2: PUSH EBX
// 005b2cd3: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005b2cd8: ADD ESP,0x4
// 005b2cdb: POP EBX
// 005b2cdc: RET
