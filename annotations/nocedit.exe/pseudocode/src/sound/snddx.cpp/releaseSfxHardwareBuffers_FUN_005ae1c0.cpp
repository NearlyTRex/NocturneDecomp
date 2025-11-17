// Name: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0
// Address: 005ae1c0
// Address Range: [[005ae1c0, 005ae267]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0(int sfx_handle)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
//   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
//   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_005ae1c0(int sfx_handle)

{
  LPDIRECTSOUNDBUFFER this_ptr;
  IDirectSound3DBuffer *this_ptr_00;
  IDirectSoundBuffer *this_ptr_01;
  uint error_code;
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  char acStack_188 [384];
  
  this_ptr = g_DirectSoundHardwareSfxBuffers[sfx_handle];
  if ((this_ptr != (LPDIRECTSOUNDBUFFER)0x0) &&
     (error_code = (*this_ptr->vtable->Stop)(this_ptr), error_code != 0)) {
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffe74,"DirectSux: Unable to %s.  (%s)",
               "Stop hardware sfx secondary buffer",pcVar1);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_188);
    return 0;
  }
  this_ptr_00 = g_DirectSound3DBufferInterfaces[sfx_handle];
  if (this_ptr_00 != (IDirectSound3DBuffer *)0x0) {
    (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
    g_DirectSound3DBufferInterfaces[sfx_handle] = (IDirectSound3DBuffer *)0x0;
  }
  this_ptr_01 = g_DirectSoundHardwareSfxBuffers[sfx_handle];
  if (this_ptr_01 != (IDirectSoundBuffer *)0x0) {
    (*this_ptr_01->vtable->Release)((IUnknown *)this_ptr_01);
    g_DirectSoundHardwareSfxBuffers[sfx_handle] = (IDirectSoundBuffer *)0x0;
  }
  return 1;
}


// Assembly code:
// 005ae1c0: PUSH EBX
//   Label: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0
// 005ae1c1: PUSH ESI
// 005ae1c2: SUB ESP,0x190
// 005ae1c8: MOV ESI,dword ptr [ESP + 0x19c]
//   XREF to: Stack[0x4] (READ)
// 005ae1cf: LEA EAX,[ESI*0x4 + 0x0]
// 005ae1d6: MOV EDX,dword ptr [EAX + 0x3f6aa44]
//   XREF to: 03f6aa44 (DATA)
// 005ae1dc: TEST EDX,EDX
// 005ae1de: JNZ 0x005ae220
//   XREF to: 005ae220 (CONDITIONAL_JUMP)
// 005ae1e0: LEA EBX,[ESI*0x4 + 0x0]
//   Label: LAB_005ae1e0
// 005ae1e7: ADD EBX,0x3f6aac0
//   XREF to: 03f6aac0 (DATA)
// 005ae1ed: MOV ECX,dword ptr [EBX]
//   XREF to: 03f6aac0 (DATA)
// 005ae1ef: TEST ECX,ECX
// 005ae1f1: JNZ 0x005ae25a
//   XREF to: 005ae25a (CONDITIONAL_JUMP)
// 005ae1f3: LEA EBX,[ESI*0x4 + 0x0]
//   Label: LAB_005ae1f3
// 005ae1fa: ADD EBX,0x3f6aa44
//   XREF to: 03f6aa44 (DATA)
// 005ae200: MOV ESI,dword ptr [EBX]
//   XREF to: 03f6aa44 (DATA)
// 005ae202: TEST ESI,ESI
// 005ae204: JZ 0x005ae212
//   XREF to: 005ae212 (CONDITIONAL_JUMP)
// 005ae206: PUSH ESI
// 005ae207: MOV EDX,dword ptr [ESI]
// 005ae209: CALL dword ptr [EDX + 0x8]
// 005ae20c: MOV dword ptr [EBX],0x0
//   XREF to: 03f6aa44 (DATA)
// 005ae212: MOV EAX,0x1
//   Label: LAB_005ae212
// 005ae217: ADD ESP,0x190
//   Label: LAB_005ae217
// 005ae21d: POP ESI
// 005ae21e: POP EBX
// 005ae21f: RET
// 005ae220: PUSH EDX
//   Label: LAB_005ae220
// 005ae221: MOV EBX,dword ptr [EDX]
// 005ae223: CALL dword ptr [EBX + 0x48]
// 005ae226: TEST EAX,EAX
// 005ae228: JZ 0x005ae1e0
//   XREF to: 005ae1e0 (CONDITIONAL_JUMP)
// 005ae22a: PUSH EAX
// 005ae22b: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae230: ADD ESP,0x4
// 005ae233: PUSH EAX
// 005ae234: PUSH 0x651ab9
//   XREF to: 00651ab9 (DATA)
// 005ae239: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae23e: LEA EAX,[ESP + 0xc]
// 005ae242: PUSH EAX
// 005ae243: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae248: ADD ESP,0x10
// 005ae24b: MOV EAX,ESP
// 005ae24d: PUSH EAX
// 005ae24e: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae253: ADD ESP,0x4
// 005ae256: XOR EAX,EAX
// 005ae258: JMP 0x005ae217
//   XREF to: 005ae217 (UNCONDITIONAL_JUMP)
// 005ae25a: PUSH ECX
//   Label: LAB_005ae25a
// 005ae25b: MOV EDX,dword ptr [ECX]
// 005ae25d: CALL dword ptr [EDX + 0x8]
// 005ae260: MOV dword ptr [EBX],0x0
//   XREF to: 03f6aac0 (DATA)
// 005ae266: JMP 0x005ae1f3
//   XREF to: 005ae1f3 (UNCONDITIONAL_JUMP)
