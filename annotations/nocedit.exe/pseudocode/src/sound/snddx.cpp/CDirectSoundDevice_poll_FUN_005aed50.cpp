// Name: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50
// Address: 005aed50
// Address Range: [[005aed50, 005aee1f]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50(CDirectSoundDevice * this_ptr)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Get_position_of_secondar_00651be1
//   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
//   IDirectSound3DListener* g_DirectSound3DListener
//   int g_StreamBlockSizeBytes
//   int g_StreamBlockCount
//   int g_StreamCurrentBlock
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
//   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   sound_sndmain.cpp_FUN_005acdb0
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_poll_FUN_005aed50(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  char acStack_184 [376];
  DWORD local_c;
  DWORD local_8;
  
  if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    if (g_DirectSoundSecondaryBuffer != (IDirectSoundBuffer *)0x0) {
      uVar2 = (*g_DirectSoundSecondaryBuffer->vtable->GetCurrentPosition)
                        (g_DirectSoundSecondaryBuffer,&local_c,&local_8);
      if (uVar2 != 0) {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffe78,"DirectSux: Unable to %s.  (%s)",
                   "Get position of secondary buffer",pcVar3);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_184);
        return 0;
      }
      uVar2 = (uint)this_ptr / (uint)g_StreamBlockSizeBytes;
      if (g_StreamBlockCount <= (int)uVar2) {
        uVar2 = g_StreamBlockCount - 1;
      }
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      do {
        if (uVar2 == g_StreamCurrentBlock) {
          return 1;
        }
        iVar1 = sound_snddx_cpp_fillStreamBuffer_FUN_005adff0();
      } while (iVar1 != 0);
      return 0;
    }
    iVar1 = 0;
  }
  else {
    sound_sndmain_cpp_FUN_005acdb0();
    iVar1 = 1;
  }
  return iVar1;
}


// Assembly code:
// 005aed50: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50
// 005aed51: SUB ESP,0x198
// 005aed57: CMP dword ptr [0x03f6a9bc],0x0
//   XREF to: 03f6a9bc (READ)
// 005aed5e: JNZ 0x005aed74
//   XREF to: 005aed74 (CONDITIONAL_JUMP)
// 005aed60: MOV ECX,dword ptr [0x03f6a9b8]
//   XREF to: 03f6a9b8 (READ)
// 005aed66: TEST ECX,ECX
// 005aed68: JNZ 0x005aed80
//   XREF to: 005aed80 (CONDITIONAL_JUMP)
// 005aed6a: XOR EAX,EAX
// 005aed6c: ADD ESP,0x198
//   Label: LAB_005aed6c
// 005aed72: POP EBX
// 005aed73: RET
// 005aed74: CALL sound_sndmain.cpp_FUN_005acdb0
//   Label: LAB_005aed74
//   XREF to: 005acdb0 (UNCONDITIONAL_CALL)
// 005aed79: MOV EAX,0x1
// 005aed7e: JMP 0x005aed6c
//   XREF to: 005aed6c (UNCONDITIONAL_JUMP)
// 005aed80: LEA EBX,[ESP + 0x194]
//   Label: LAB_005aed80
//   XREF to: Stack[-0x8] (DATA)
// 005aed87: PUSH EBX
// 005aed88: LEA EBX,[ESP + 0x194]
//   XREF to: Stack[-0xc] (DATA)
// 005aed8f: PUSH EBX
// 005aed90: MOV EDX,dword ptr [ECX]
// 005aed92: PUSH ECX
// 005aed93: CALL dword ptr [EDX + 0x10]
// 005aed96: TEST EAX,EAX
// 005aed98: JNZ 0x005aedd5
//   XREF to: 005aedd5 (CONDITIONAL_JUMP)
// 005aed9a: PUSH ESI
// 005aed9b: MOV EAX,dword ptr [ESP + 0x194]
// 005aeda2: MOV EBX,dword ptr [0x03f6a9d4]
//   XREF to: 03f6a9d4 (READ)
// 005aeda8: XOR EDX,EDX
// 005aedaa: DIV EBX
// 005aedac: MOV ESI,dword ptr [0x03f6a9d8]
//   XREF to: 03f6a9d8 (READ)
// 005aedb2: MOV EBX,EAX
// 005aedb4: CMP EAX,ESI
// 005aedb6: JL 0x005aedbb
//   XREF to: 005aedbb (CONDITIONAL_JUMP)
// 005aedb8: LEA EBX,[ESI + -0x1]
// 005aedbb: TEST EBX,EBX
//   Label: LAB_005aedbb
// 005aedbd: JL 0x005aee0b
//   XREF to: 005aee0b (CONDITIONAL_JUMP)
// 005aedbf: POP ESI
//   Label: LAB_005aedbf
// 005aedc0: CMP EBX,dword ptr [0x03f6a9dc]
//   Label: LAB_005aedc0
//   XREF to: 03f6a9dc (READ)
// 005aedc6: JNZ 0x005aee0f
//   XREF to: 005aee0f (CONDITIONAL_JUMP)
// 005aedc8: MOV EAX,0x1
// 005aedcd: ADD ESP,0x198
// 005aedd3: POP EBX
// 005aedd4: RET
// 005aedd5: PUSH EAX
//   Label: LAB_005aedd5
// 005aedd6: CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005aeddb: ADD ESP,0x4
// 005aedde: PUSH EAX
// 005aeddf: PUSH 0x651be1
//   XREF to: 00651be1 (DATA)
// 005aede4: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005aede9: LEA EAX,[ESP + 0xc]
// 005aeded: PUSH EAX
// 005aedee: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005aedf3: ADD ESP,0x10
// 005aedf6: MOV EAX,ESP
// 005aedf8: PUSH EAX
// 005aedf9: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005aedfe: ADD ESP,0x4
// 005aee01: XOR EAX,EAX
// 005aee03: ADD ESP,0x198
// 005aee09: POP EBX
// 005aee0a: RET
// 005aee0b: XOR EBX,EBX
//   Label: LAB_005aee0b
// 005aee0d: JMP 0x005aedbf
//   XREF to: 005aedbf (UNCONDITIONAL_JUMP)
// 005aee0f: CALL sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
//   Label: LAB_005aee0f
//   XREF to: 005adff0 (UNCONDITIONAL_CALL)
// 005aee14: TEST EAX,EAX
// 005aee16: JNZ 0x005aedc0
//   XREF to: 005aedc0 (CONDITIONAL_JUMP)
// 005aee18: ADD ESP,0x198
// 005aee1e: POP EBX
// 005aee1f: RET
