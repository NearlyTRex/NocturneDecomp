// Name: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
// Address: 005afcc0
// Address Range: [[005afcc0, 005afd5e]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0(CDirectSoundDevice * this_ptr, CSfxSlot * slot)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Get_active_sfx_secondary_0065207c
//   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
//   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
          (CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  uint error_code;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  char acStack_180 [380];
  DWORD local_4;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((0 < iVar1) && (iVar1 < 0x1f)) &&
      (g_DirectSoundHardwareSfxBuffers[iVar1] != (IDirectSoundBuffer *)0x0)) &&
     (g_DirectSound3DBufferInterfaces[iVar1] != (IDirectSound3DBuffer *)0x0)) {
    error_code = (*g_DirectSoundHardwareSfxBuffers[iVar1]->vtable->GetStatus)
                           (g_DirectSoundHardwareSfxBuffers[iVar1],&local_4);
    if (error_code != 0) {
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffe7c,"DirectSux: Unable to %s.  (%s)",
                 "Get active sfx secondary buffer status",pcVar2);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_180);
      return 0;
    }
    if (((uint)slot & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 005afcc0: SUB ESP,0x194
//   Label: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
// 005afcc6: MOV EAX,dword ptr [ESP + 0x19c]
//   XREF to: Stack[0x8] (READ)
// 005afccd: MOV EAX,dword ptr [EAX + 0x70]
// 005afcd0: TEST EAX,EAX
// 005afcd2: JLE 0x005afcd9
//   XREF to: 005afcd9 (CONDITIONAL_JUMP)
// 005afcd4: CMP EAX,0x1f
// 005afcd7: JL 0x005afce2
//   XREF to: 005afce2 (CONDITIONAL_JUMP)
// 005afcd9: XOR EAX,EAX
//   Label: LAB_005afcd9
// 005afcdb: ADD ESP,0x194
// 005afce1: RET
// 005afce2: LEA EDX,[EAX*0x4 + 0x0]
//   Label: LAB_005afce2
// 005afce9: CMP dword ptr [EDX + 0x3f6aa44],0x0
//   XREF to: 03f6aa44 (DATA)
// 005afcf0: JZ 0x005afcd9
//   XREF to: 005afcd9 (CONDITIONAL_JUMP)
// 005afcf2: CMP dword ptr [EDX + 0x3f6aac0],0x0
//   XREF to: 03f6aac0 (DATA)
// 005afcf9: JZ 0x005afcd9
//   XREF to: 005afcd9 (CONDITIONAL_JUMP)
// 005afcfb: LEA ECX,[ESP + 0x190]
//   XREF to: Stack[-0x4] (DATA)
// 005afd02: MOV EAX,dword ptr [EAX*0x4 + 0x3f6aa44]
//   XREF to: 03f6aa44 (DATA)
// 005afd09: PUSH ECX
// 005afd0a: MOV EDX,dword ptr [EAX]
// 005afd0c: PUSH EAX
// 005afd0d: CALL dword ptr [EDX + 0x24]
// 005afd10: TEST EAX,EAX
// 005afd12: JNZ 0x005afd2a
//   XREF to: 005afd2a (CONDITIONAL_JUMP)
// 005afd14: TEST byte ptr [ESP + 0x190],0x1
// 005afd1c: JZ 0x005afcd9
//   XREF to: 005afcd9 (CONDITIONAL_JUMP)
// 005afd1e: MOV EAX,0x1
// 005afd23: ADD ESP,0x194
// 005afd29: RET
// 005afd2a: PUSH EAX
//   Label: LAB_005afd2a
// 005afd2b: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005afd30: ADD ESP,0x4
// 005afd33: PUSH EAX
// 005afd34: PUSH 0x65207c
//   XREF to: 0065207c (DATA)
// 005afd39: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005afd3e: LEA EAX,[ESP + 0xc]
// 005afd42: PUSH EAX
// 005afd43: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005afd48: ADD ESP,0x10
// 005afd4b: MOV EAX,ESP
// 005afd4d: PUSH EAX
// 005afd4e: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005afd53: ADD ESP,0x4
// 005afd56: XOR EAX,EAX
// 005afd58: ADD ESP,0x194
// 005afd5e: RET
