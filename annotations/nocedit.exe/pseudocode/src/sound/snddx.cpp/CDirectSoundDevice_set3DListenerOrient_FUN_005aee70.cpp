// Name: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70
// Address: 005aee70
// Address Range: [[005aee70, 005aeec1]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70(CDirectSoundDevice * this_ptr)
// Globals:
//   undefined4 DAT_03f6a9bc

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70(CDirectSoundDevice *this_ptr)

{
  if (DAT_03f6a9bc == (int *)0x0) {
    return;
  }
  (**(code **)(*DAT_03f6a9bc + 0x34))();
  return;
}


// Assembly code:
// 005aee70: MOV EDX,dword ptr [0x03f6a9bc]
//   Label: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70
//   XREF to: 03f6a9bc (READ)
// 005aee76: TEST EDX,EDX
// 005aee78: JNZ 0x005aee7b
//   XREF to: 005aee7b (CONDITIONAL_JUMP)
// 005aee7a: RET
// 005aee7b: PUSH 0x0
//   Label: LAB_005aee7b
// 005aee7d: FLD double ptr [ESP + 0x34]
//   XREF to: Stack[0x30] (READ)
// 005aee81: MOV EAX,EDX
// 005aee83: SUB ESP,0x4
// 005aee86: MOV EDX,dword ptr [EDX]
// 005aee88: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005aee8b: FLD double ptr [ESP + 0x30]
//   XREF to: Stack[0x28] (READ)
// 005aee8f: SUB ESP,0x4
// 005aee92: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 005aee95: FLD double ptr [ESP + 0x2c]
//   XREF to: Stack[0x20] (READ)
// 005aee99: SUB ESP,0x4
// 005aee9c: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005aee9f: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[0x48] (READ)
// 005aeea3: SUB ESP,0x4
// 005aeea6: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005aeea9: FLD double ptr [ESP + 0x54]
//   XREF to: Stack[0x40] (READ)
// 005aeead: SUB ESP,0x4
// 005aeeb0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005aeeb3: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[0x38] (READ)
// 005aeeb7: SUB ESP,0x4
// 005aeeba: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005aeebd: PUSH EAX
// 005aeebe: CALL dword ptr [EDX + 0x34]
// 005aeec1: RET
