// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030
// Address: 005b0030
// Address Range: [[005b0030, 005b0119]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030(CDirectSoundDevice * this_ptr, CSfxSlot * slot)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
//   TerminatedCString s_DirectSoundDevice_killSf_00652232
//   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
//   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_005b0030(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  LPDIRECTSOUNDBUFFER this_ptr_00;
  IDirectSound3DBuffer *this_ptr_01;
  IDirectSoundBuffer *this_ptr_02;
  uint error_code;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  char acStack_190 [384];
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) ||
      (g_DirectSoundHardwareSfxBuffers[iVar1] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSound3DBufferInterfaces[iVar1] == (IDirectSound3DBuffer *)0x0)) {
    sound_sndmain_cpp_logSoundError_FUN_005adba0("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  }
  else {
    this_ptr_00 = g_DirectSoundHardwareSfxBuffers[iVar1];
    if (this_ptr_00 != (LPDIRECTSOUNDBUFFER)0x0) {
      error_code = (*this_ptr_00->vtable->Stop)(this_ptr_00);
      if (error_code != 0) {
        pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffe6c,"DirectSux: Unable to %s.  (%s)",
                   "Stop hardware sfx secondary buffer",pcVar2);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_190);
        return;
      }
    }
    this_ptr_01 = g_DirectSound3DBufferInterfaces[iVar1];
    if (this_ptr_01 != (IDirectSound3DBuffer *)0x0) {
      (*this_ptr_01->vtable->Release)((IUnknown *)this_ptr_01);
      g_DirectSound3DBufferInterfaces[iVar1] = (IDirectSound3DBuffer *)0x0;
    }
    this_ptr_02 = g_DirectSoundHardwareSfxBuffers[iVar1];
    if (this_ptr_02 != (IDirectSoundBuffer *)0x0) {
      (*this_ptr_02->vtable->Release)((IUnknown *)this_ptr_02);
      g_DirectSoundHardwareSfxBuffers[iVar1] = (IDirectSoundBuffer *)0x0;
      return;
    }
  }
  return;
}


// Assembly code:
// 005b0030: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030
// 005b0031: PUSH ESI
// 005b0032: PUSH EDI
// 005b0033: PUSH EBP
// 005b0034: SUB ESP,0x190
// 005b003a: MOV EAX,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[0x8] (READ)
// 005b0041: MOV EAX,dword ptr [EAX + 0x70]
// 005b0044: TEST EAX,EAX
// 005b0046: JLE 0x005b004d
//   XREF to: 005b004d (CONDITIONAL_JUMP)
// 005b0048: CMP EAX,0x1f
// 005b004b: JL 0x005b0065
//   XREF to: 005b0065 (CONDITIONAL_JUMP)
// 005b004d: PUSH 0x652232
//   Label: LAB_005b004d
//   XREF to: 00652232 (DATA)
// 005b0052: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0057: ADD ESP,0x4
// 005b005a: ADD ESP,0x190
//   Label: LAB_005b005a
// 005b0060: POP EBP
// 005b0061: POP EDI
// 005b0062: POP ESI
// 005b0063: POP EBX
// 005b0064: RET
// 005b0065: LEA EBX,[EAX*0x4 + 0x0]
//   Label: LAB_005b0065
// 005b006c: CMP dword ptr [EBX + 0x3f6aa44],0x0
//   XREF to: 03f6aa44 (DATA)
// 005b0073: JZ 0x005b004d
//   XREF to: 005b004d (CONDITIONAL_JUMP)
// 005b0075: CMP dword ptr [EBX + 0x3f6aac0],0x0
//   XREF to: 03f6aac0 (DATA)
// 005b007c: JZ 0x005b004d
//   XREF to: 005b004d (CONDITIONAL_JUMP)
// 005b007e: MOV ESI,EAX
// 005b0080: SHL EAX,0x2
// 005b0083: MOV EBX,dword ptr [EAX + 0x3f6aa44]
//   XREF to: 03f6aa44 (DATA)
// 005b0089: TEST EBX,EBX
// 005b008b: JNZ 0x005b00d7
//   XREF to: 005b00d7 (CONDITIONAL_JUMP)
// 005b008d: LEA EBX,[ESI*0x4 + 0x0]
//   Label: LAB_005b008d
// 005b0094: ADD EBX,0x3f6aac0
//   XREF to: 03f6aac0 (DATA)
// 005b009a: MOV EDI,dword ptr [EBX]
//   XREF to: 03f6aac0 (DATA)
// 005b009c: TEST EDI,EDI
// 005b009e: JZ 0x005b00ac
//   XREF to: 005b00ac (CONDITIONAL_JUMP)
// 005b00a0: PUSH EDI
// 005b00a1: MOV EDX,dword ptr [EDI]
// 005b00a3: CALL dword ptr [EDX + 0x8]
// 005b00a6: MOV dword ptr [EBX],0x0
//   XREF to: 03f6aac0 (DATA)
// 005b00ac: LEA EBX,[ESI*0x4 + 0x0]
//   Label: LAB_005b00ac
// 005b00b3: ADD EBX,0x3f6aa44
//   XREF to: 03f6aa44 (DATA)
// 005b00b9: MOV EBP,dword ptr [EBX]
//   XREF to: 03f6aa44 (DATA)
// 005b00bb: TEST EBP,EBP
// 005b00bd: JZ 0x005b005a
//   XREF to: 005b005a (CONDITIONAL_JUMP)
// 005b00bf: PUSH EBP
// 005b00c0: MOV ESI,dword ptr [EBP]
// 005b00c3: CALL dword ptr [ESI + 0x8]
// 005b00c6: MOV dword ptr [EBX],0x0
//   XREF to: 03f6aa44 (DATA)
// 005b00cc: ADD ESP,0x190
// 005b00d2: POP EBP
// 005b00d3: POP EDI
// 005b00d4: POP ESI
// 005b00d5: POP EBX
// 005b00d6: RET
// 005b00d7: MOV EAX,EBX
//   Label: LAB_005b00d7
// 005b00d9: PUSH EAX
// 005b00da: MOV EBX,dword ptr [EBX]
// 005b00dc: CALL dword ptr [EBX + 0x48]
// 005b00df: TEST EAX,EAX
// 005b00e1: JZ 0x005b008d
//   XREF to: 005b008d (CONDITIONAL_JUMP)
// 005b00e3: PUSH EAX
// 005b00e4: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005b00e9: ADD ESP,0x4
// 005b00ec: PUSH EAX
// 005b00ed: PUSH 0x651ab9
//   XREF to: 00651ab9 (DATA)
// 005b00f2: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b00f7: LEA EAX,[ESP + 0xc]
// 005b00fb: PUSH EAX
// 005b00fc: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b0101: ADD ESP,0x10
// 005b0104: MOV EAX,ESP
// 005b0106: PUSH EAX
// 005b0107: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b010c: ADD ESP,0x4
// 005b010f: ADD ESP,0x190
// 005b0115: POP EBP
// 005b0116: POP EDI
// 005b0117: POP ESI
// 005b0118: POP EBX
// 005b0119: RET
