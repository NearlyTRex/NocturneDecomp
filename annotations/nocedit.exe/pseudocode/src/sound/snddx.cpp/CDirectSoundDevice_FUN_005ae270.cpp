// Name: sound_snddx.cpp_CDirectSoundDevice_FUN_005ae270
// Address: 005ae270
// Address Range: [[005ae270, 005ae33c]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_FUN_005ae270(CDirectSoundDevice * this_ptr)
// Cross-references:
//   sound_snddx.cpp_CreatePrimaryBufferMaybe_FUN_005b0440 (005b0440) at 005b04ef [UNCONDITIONAL_CALL]
// Globals:
//   IDirectSound* g_DirectSound
//   IDirectSoundBuffer* g_DirectSoundPrimaryBuffer
//   undefined4 DAT_03f6a9b8
//   undefined4 DAT_03f6a9bc
//   undefined4 DAT_03f6a9c0
//   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
//   undefined4 g_DirectSoundSampleBuffers[1]
//   undefined4 DAT_03f6aa44

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_FUN_005ae270(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  IDirectSoundBuffer **ppIVar2;
  
  iVar1 = (*(code *)this_ptr->vtable->func3)();
  ppIVar2 = g_DirectSoundSampleBuffers;
  do {
    if (*ppIVar2 != (IDirectSoundBuffer *)0x0) {
      (**(code **)((int)(*ppIVar2)->field0_0x0 + 8))();
      *ppIVar2 = (IDirectSoundBuffer *)0x0;
    }
    ppIVar2 = ppIVar2 + 1;
  } while (ppIVar2 != (IDirectSoundBuffer **)&DAT_03f6aa44);
  if (DAT_03f6a9bc != (int *)0x0) {
    (**(code **)(*DAT_03f6a9bc + 8))();
    DAT_03f6a9bc = (int *)0x0;
  }
  if (DAT_03f6a9b8 != (int *)0x0) {
    (**(code **)(*DAT_03f6a9b8 + 8))();
    DAT_03f6a9b8 = (int *)0x0;
  }
  if (DAT_03f6a9c0 != (int *)0x0) {
    (**(code **)(*DAT_03f6a9c0 + 8))();
    DAT_03f6a9c0 = (int *)0x0;
  }
  if (g_DirectSoundPrimaryBuffer != (IDirectSoundBuffer *)0x0) {
    (**(code **)((int)g_DirectSoundPrimaryBuffer->field0_0x0 + 8))();
    g_DirectSoundPrimaryBuffer = (IDirectSoundBuffer *)0x0;
  }
  if (g_DirectSound == (IDirectSound *)0x0) {
    return (uint)(iVar1 != 0);
  }
  (*(code *)g_DirectSound->vtable[2])();
  g_DirectSound = (IDirectSound *)0x0;
  return (uint)(iVar1 != 0);
}


// Assembly code:
// 005ae270: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_FUN_005ae270
// 005ae271: PUSH ESI
// 005ae272: PUSH EDI
// 005ae273: PUSH EBP
// 005ae274: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ae278: PUSH EDX
// 005ae279: MOV EAX,dword ptr [EDX]
// 005ae27b: MOV EDI,0x1
// 005ae280: CALL dword ptr [EAX + 0x8]
// 005ae283: ADD ESP,0x4
// 005ae286: TEST EAX,EAX
// 005ae288: JZ 0x005ae321
//   XREF to: 005ae321 (CONDITIONAL_JUMP)
// 005ae28e: MOV EBX,0x3f6a9e0
//   Label: LAB_005ae28e
//   XREF to: 03f6a9e0 (DATA)
// 005ae293: LEA ESI,[EBX + 0x64]
//   XREF to: 03f6aa44 (DATA)
// 005ae296: MOV EDX,dword ptr [EBX]
//   Label: LAB_005ae296
//   XREF to: 03f6a9e0 (READ)
//   XREF to: 03f6a9e4 (READ)
// 005ae298: TEST EDX,EDX
// 005ae29a: JZ 0x005ae2aa
//   XREF to: 005ae2aa (CONDITIONAL_JUMP)
// 005ae29c: MOV EAX,EDX
// 005ae29e: PUSH EAX
// 005ae29f: MOV EDX,dword ptr [EDX]
// 005ae2a1: CALL dword ptr [EDX + 0x8]
// 005ae2a4: MOV dword ptr [EBX],0x0
//   XREF to: 03f6a9e0 (WRITE)
// 005ae2aa: ADD EBX,0x4
//   Label: LAB_005ae2aa
// 005ae2ad: CMP EBX,ESI
// 005ae2af: JNZ 0x005ae296
//   XREF to: 005ae296 (CONDITIONAL_JUMP)
// 005ae2b1: MOV ECX,dword ptr [0x03f6a9bc]
//   XREF to: 03f6a9bc (READ)
// 005ae2b7: TEST ECX,ECX
// 005ae2b9: JZ 0x005ae2c9
//   XREF to: 005ae2c9 (CONDITIONAL_JUMP)
// 005ae2bb: PUSH ECX
// 005ae2bc: MOV EDX,dword ptr [ECX]
// 005ae2be: XOR EBX,ESI
// 005ae2c0: CALL dword ptr [EDX + 0x8]
// 005ae2c3: MOV dword ptr [0x03f6a9bc],EBX
//   XREF to: 03f6a9bc (WRITE)
// 005ae2c9: MOV ESI,dword ptr [0x03f6a9b8]
//   Label: LAB_005ae2c9
//   XREF to: 03f6a9b8 (READ)
// 005ae2cf: TEST ESI,ESI
// 005ae2d1: JZ 0x005ae2e1
//   XREF to: 005ae2e1 (CONDITIONAL_JUMP)
// 005ae2d3: PUSH ESI
// 005ae2d4: MOV EDX,dword ptr [ESI]
// 005ae2d6: XOR EBP,EBP
// 005ae2d8: CALL dword ptr [EDX + 0x8]
// 005ae2db: MOV dword ptr [0x03f6a9b8],EBP
//   XREF to: 03f6a9b8 (WRITE)
// 005ae2e1: MOV EAX,[0x03f6a9c0]
//   Label: LAB_005ae2e1
//   XREF to: 03f6a9c0 (READ)
// 005ae2e6: TEST EAX,EAX
// 005ae2e8: JZ 0x005ae2f8
//   XREF to: 005ae2f8 (CONDITIONAL_JUMP)
// 005ae2ea: PUSH EAX
// 005ae2eb: MOV EDX,dword ptr [EAX]
// 005ae2ed: CALL dword ptr [EDX + 0x8]
// 005ae2f0: XOR EDX,EDX
// 005ae2f2: MOV dword ptr [0x03f6a9c0],EDX
//   XREF to: 03f6a9c0 (WRITE)
// 005ae2f8: MOV ECX,dword ptr [0x03f6a9b4]
//   Label: LAB_005ae2f8
//   XREF to: 03f6a9b4 (READ)
// 005ae2fe: TEST ECX,ECX
// 005ae300: JZ 0x005ae310
//   XREF to: 005ae310 (CONDITIONAL_JUMP)
// 005ae302: PUSH ECX
// 005ae303: MOV EDX,dword ptr [ECX]
// 005ae305: XOR EBX,EBX
// 005ae307: CALL dword ptr [EDX + 0x8]
// 005ae30a: MOV dword ptr [0x03f6a9b4],EBX
//   XREF to: 03f6a9b4 (WRITE)
// 005ae310: MOV ESI,dword ptr [0x03f6a9b0]
//   Label: LAB_005ae310
//   XREF to: 03f6a9b0 (READ)
// 005ae316: TEST ESI,ESI
// 005ae318: JNZ 0x005ae328
//   XREF to: 005ae328 (CONDITIONAL_JUMP)
// 005ae31a: MOV EAX,EDI
// 005ae31c: POP EBP
// 005ae31d: POP EDI
// 005ae31e: POP ESI
// 005ae31f: POP EBX
// 005ae320: RET
// 005ae321: XOR EDI,EDI
//   Label: LAB_005ae321
// 005ae323: JMP 0x005ae28e
//   XREF to: 005ae28e (UNCONDITIONAL_JUMP)
// 005ae328: PUSH ESI
//   Label: LAB_005ae328
// 005ae329: MOV EDX,dword ptr [ESI]
// 005ae32b: XOR EBP,EBP
// 005ae32d: CALL dword ptr [EDX + 0x8]
// 005ae330: MOV dword ptr [0x03f6a9b0],EBP
//   XREF to: 03f6a9b0 (WRITE)
// 005ae336: MOV EAX,EDI
// 005ae338: POP EBP
// 005ae339: POP EDI
// 005ae33a: POP ESI
// 005ae33b: POP EBX
// 005ae33c: RET
