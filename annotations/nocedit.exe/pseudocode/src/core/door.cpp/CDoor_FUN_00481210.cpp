// Name: core_door.cpp_CDoor_FUN_00481210
// Address: 00481210
// Address Range: [[00481210, 00481244]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_FUN_00481210(CDoor * this_ptr)
// Cross-references:
//   core_door.cpp_CDoor_getMoveType_FUN_00481070 (00481070) at 00481101 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2ed0 (004f2ed0) at 004f2f31 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02c14cd8
// Function calls:
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_FUN_00481210(CDoor *this_ptr)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
  if (iVar1 != 0) {
    return;
  }
  DAT_02c14cd8 = (*((this_ptr->base_actor).metadata.vtable)->playSound)
                           (&this_ptr->base_actor,this_ptr->field9_0x47c + 0x4b0);
  return;
}


// Assembly code:
// 00481210: PUSH EBX
//   Label: core_door.cpp_CDoor_FUN_00481210
// 00481211: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00481215: MOV EDX,dword ptr [0x02c14cd8]
//   XREF to: 02c14cd8 (READ)
// 0048121b: PUSH EDX
// 0048121c: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00481221: ADD ESP,0x4
// 00481224: TEST EAX,EAX
// 00481226: JZ 0x0048122a
//   XREF to: 0048122a (CONDITIONAL_JUMP)
// 00481228: POP EBX
// 00481229: RET
// 0048122a: LEA EDX,[EBX + 0x92c]
//   Label: LAB_0048122a
// 00481230: PUSH EDX
// 00481231: MOV EAX,dword ptr [EBX + 0x154]
// 00481237: PUSH EBX
// 00481238: CALL dword ptr [EAX + 0x24]
// 0048123b: ADD ESP,0x8
// 0048123e: MOV [0x02c14cd8],EAX
//   XREF to: 02c14cd8 (WRITE)
// 00481243: POP EBX
// 00481244: RET
