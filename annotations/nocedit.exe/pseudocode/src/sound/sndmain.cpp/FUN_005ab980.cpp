// Name: sound_sndmain.cpp_FUN_005ab980
// Address: 005ab980
// Address Range: [[005ab980, 005ab98e]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ab980()
// Cross-references:
//   sound_sndmain.cpp_FUN_005aba90 (005aba90) at 005aba9e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005abb10 (005abb10) at 005abb15 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0 (005ab9a0) at 005ab9a4 [UNCONDITIONAL_CALL]
// Globals:
//   void* g_RecordingContext
// Function calls:
//   sound_sndmain.cpp_FUN_005ab970

#include "nocturne.h"

void * sound_sndmain_cpp_FUN_005ab980(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)sound_sndmain_cpp_FUN_005ab970();
  if (pvVar1 != (void *)0x0) {
    pvVar1 = g_RecordingContext;
  }
  return pvVar1;
}


// Assembly code:
// 005ab980: CALL sound_sndmain.cpp_FUN_005ab970
//   Label: sound_sndmain.cpp_FUN_005ab980
//   XREF to: 005ab970 (UNCONDITIONAL_CALL)
// 005ab985: TEST EAX,EAX
// 005ab987: JZ 0x005ab98e
//   XREF to: 005ab98e (CONDITIONAL_JUMP)
// 005ab989: MOV EAX,[0x03f69c58]
//   XREF to: 03f69c58 (READ)
// 005ab98e: RET
//   Label: LAB_005ab98e
