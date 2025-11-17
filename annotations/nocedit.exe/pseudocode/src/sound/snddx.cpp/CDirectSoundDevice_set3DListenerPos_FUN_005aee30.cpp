// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30
// Address: 005aee30
// Address Range: [[005aee30, 005aee63]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30(CDirectSoundDevice * this_ptr, double x, double y, double z)
// Globals:
//   IDirectSound3DListener* g_DirectSound3DListener

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30
          (CDirectSoundDevice *this_ptr,double x,double y,double z)

{
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    return;
  }
  (*g_DirectSound3DListener->vtable->SetPosition)
            (g_DirectSound3DListener,(float)x,(float)y,(float)z,0);
  return;
}


// Assembly code:
// 005aee30: MOV EDX,dword ptr [0x03f6a9bc]
//   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30
//   XREF to: 03f6a9bc (READ)
// 005aee36: TEST EDX,EDX
// 005aee38: JNZ 0x005aee3b
//   XREF to: 005aee3b (CONDITIONAL_JUMP)
// 005aee3a: RET
// 005aee3b: PUSH 0x0
//   Label: LAB_005aee3b
// 005aee3d: FLD double ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 005aee41: MOV EAX,EDX
// 005aee43: SUB ESP,0x4
// 005aee46: MOV EDX,dword ptr [EDX]
// 005aee48: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005aee4b: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 005aee4f: SUB ESP,0x4
// 005aee52: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005aee55: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005aee59: SUB ESP,0x4
// 005aee5c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005aee5f: PUSH EAX
// 005aee60: CALL dword ptr [EDX + 0x38]
// 005aee63: RET
