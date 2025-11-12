// Name: sound_snddx.cpp_CDirectSoundDevice_FUN_005aee20
// Address: 005aee20
// Address Range: [[005aee20, 005aee2f]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_FUN_005aee20(CDirectSoundDevice * this_ptr)
// Globals:
//   undefined4 DAT_03f6a9bc

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_FUN_005aee20(CDirectSoundDevice *this_ptr)

{
  return (uint)(DAT_03f6a9bc != 0);
}


// Assembly code:
// 005aee20: CMP dword ptr [0x03f6a9bc],0x0
//   Label: sound_snddx.cpp_CDirectSoundDevice_FUN_005aee20
//   XREF to: 03f6a9bc (READ)
// 005aee27: SETNZ AL
// 005aee2a: AND EAX,0xff
// 005aee2f: RET
