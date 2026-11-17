// Name: sound_sndmain.cpp_isSoundSystemActive_FUN_00575540
// Address: 00575540
// Address Range: [[00575540, 0057554f]]
// Convention: __cdecl
// Signature: uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00575540(void)

#include "nocturne.h"

uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00575540(void)

{
  return (uint)(g_CSoundDevice_PTR_02c80650 != (CSoundDevice *)0x0);
}
