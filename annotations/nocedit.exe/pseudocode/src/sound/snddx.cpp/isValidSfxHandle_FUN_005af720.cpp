// Name: sound_snddx.cpp_isValidSfxHandle_FUN_005af720
// Address: 005af720
// Address Range: [[005af720, 005af748]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_isValidSfxHandle_FUN_005af720(int sfx_handle)
// Globals:
//   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
//   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces

#include "nocturne.h"

int __cdecl sound_snddx_cpp_isValidSfxHandle_FUN_005af720(int sfx_handle)

{
  if ((((0 < sfx_handle) && (sfx_handle < 0x1f)) &&
      (g_DirectSoundHardwareSfxBuffers[sfx_handle] != (IDirectSoundBuffer *)0x0)) &&
     (g_DirectSound3DBufferInterfaces[sfx_handle] != (IDirectSound3DBuffer *)0x0)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005af720: MOV EAX,dword ptr [ESP + 0x4]
//   Label: sound_snddx.cpp_isValidSfxHandle_FUN_005af720
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
