// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10
// Address: 005aef10
// Address Range: [[005aef10, 005aef35]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10(CDirectSoundDevice * this_ptr, double distance_in_feet)
// Globals:
//   double g_DirectSoundFeetToMeters = 0.304800000000000
//   IDirectSound3DListener* g_DirectSound3DListener

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10
          (CDirectSoundDevice *this_ptr,double distance_in_feet)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetDistanceFactor)
            (g_DirectSound3DListener,
             (float)((float10)distance_in_feet * (float10)g_DirectSoundFeetToMeters),0);
  return;
}


// Assembly code:
// 005aef10: MOV EDX,dword ptr [0x03f6a9bc]
//   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10
//   XREF to: 03f6a9bc (READ)
// 005aef16: TEST EDX,EDX
// 005aef18: JNZ 0x005aef1b
//   XREF to: 005aef1b (CONDITIONAL_JUMP)
// 005aef1a: RET
// 005aef1b: FLD double ptr [ESP + 0x8]
//   Label: LAB_005aef1b
//   XREF to: Stack[0x8] (READ)
// 005aef1f: FMUL double ptr [0x00651c04]
//   XREF to: 00651c04 (READ)
// 005aef25: PUSH 0x0
// 005aef27: MOV EAX,EDX
// 005aef29: SUB ESP,0x4
// 005aef2c: MOV EDX,dword ptr [EDX]
// 005aef2e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005aef31: PUSH EAX
// 005aef32: CALL dword ptr [EDX + 0x2c]
// 005aef35: RET
