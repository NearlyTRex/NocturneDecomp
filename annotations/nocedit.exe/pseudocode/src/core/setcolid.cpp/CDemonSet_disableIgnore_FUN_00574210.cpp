// Name: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
// Address: 00574210
// Address Range: [[00574210, 0057421e]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet * this_ptr)
// Cross-references:
//   core_gabriela.cpp_FUN_004d6d40 (004d6d40) at 004d6dfb [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b32bc [UNCONDITIONAL_CALL]
//   core_sound.cpp_processTrainSounds_FUN_005b2770 (005b2770) at 005b27c6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_disableIgnore_FUN_00574210(CDemonSet *this_ptr)

{
  this_ptr->ignore_list_count = -1;
  return;
}


// Assembly code:
// 00574210: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00574210
//   XREF to: Stack[0x4] (READ)
// 00574214: MOV dword ptr [EAX + 0x15f694],0xffffffff
// 0057421e: RET
