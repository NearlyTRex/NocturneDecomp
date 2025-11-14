// Name: sound_snddx.cpp_FUN_005af720
// Address: 005af720
// Address Range: [[005af720, 005af748]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_FUN_005af720()
// Globals:
//   IDirectSoundBuffer* g_DirectSoundSampleBuffersEnd
//   undefined4 DAT_03f6aac0

#include "nocturne.h"

undefined4 sound_snddx_cpp_FUN_005af720(void)

{
  int in_stack_00000004;
  
  if ((((0 < in_stack_00000004) && (in_stack_00000004 < 0x1f)) &&
      ((&g_DirectSoundSampleBuffersEnd)[in_stack_00000004] != (IDirectSoundBuffer *)0x0)) &&
     (g_DirectSoundBufferInUse[in_stack_00000004 + 0x1e] != 0)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005af720: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_snddx.cpp_FUN_005af720
//   XREF to: Stack[0x4] (READ)
// 005af724: TEST EAX,EAX
// 005af726: JLE 0x005af746
//   XREF to: 005af746 (CONDITIONAL_JUMP)
// 005af728: CMP EAX,0x1f
// 005af72b: JGE 0x005af746
//   XREF to: 005af746 (CONDITIONAL_JUMP)
// 005af72d: SHL EAX,0x2
// 005af730: CMP dword ptr [EAX + 0x3f6aa44],0x0
//   XREF to: 03f6aa44 (DATA)
// 005af737: JZ 0x005af746
//   XREF to: 005af746 (CONDITIONAL_JUMP)
// 005af739: CMP dword ptr [EAX + 0x3f6aac0],0x0
//   XREF to: 03f6aac0 (DATA)
// 005af740: JNZ 0x005af17d
//   XREF to: 005af17d (CONDITIONAL_JUMP)
// 005af746: XOR EAX,EAX
//   Label: LAB_005af746
// 005af748: RET
