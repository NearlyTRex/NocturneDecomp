// Name: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_005af190
// Address: 005af190
// Address Range: [[005af190, 005af21c]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_005af190(CDirectSoundDevice * this_ptr, int buffer_id)
// Globals:
//   TerminatedCString s_sound_snddx_cpp_00651c57
//   TerminatedCString s_DirectSoundDevice_freeSa_00651c6a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
//   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_freeSample_FUN_005af190
          (CDirectSoundDevice *this_ptr,int buffer_id)

{
  IDirectSoundBuffer *this_ptr_00;
  
  if ((((buffer_id < 1) || (0x18 < buffer_id)) ||
      (g_DirectSoundSampleBuffers[buffer_id] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSoundBufferMetadata[buffer_id].field0_0x0 < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2b1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::freeSample - Invalid handle: %d",buffer_id);
  }
  this_ptr_00 = g_DirectSoundSampleBuffers[buffer_id];
  if (this_ptr_00 != (IDirectSoundBuffer *)0x0) {
    (*this_ptr_00->vtable->Release)((IUnknown *)this_ptr_00);
    g_DirectSoundSampleBuffers[buffer_id] = (IDirectSoundBuffer *)0x0;
  }
  g_DirectSoundBufferMetadata[buffer_id].field0_0x0 = 0;
  return;
}


// Assembly code:
// 005af190: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_005af190
// 005af191: PUSH ESI
// 005af192: PUSH EBP
// 005af193: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005af197: TEST EBX,EBX
// 005af199: JLE 0x005af1a0
//   XREF to: 005af1a0 (CONDITIONAL_JUMP)
// 005af19b: CMP EBX,0x19
// 005af19e: JL 0x005af1ef
//   XREF to: 005af1ef (CONDITIONAL_JUMP)
// 005af1a0: PUSH EDI
//   Label: LAB_005af1a0
// 005af1a1: PUSH EBX
// 005af1a2: MOV ESI,0x651c57
//   XREF to: 00651c57 (DATA)
// 005af1a7: MOV EDI,0x2b1
// 005af1ac: PUSH 0x651c6a
//   XREF to: 00651c6a (DATA)
// 005af1b1: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005af1b7: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005af1bd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005af1c2: ADD ESP,0x8
// 005af1c5: POP EDI
// 005af1c6: LEA ESI,[EBX*0x4 + 0x0]
//   Label: LAB_005af1c6
// 005af1cd: ADD ESI,0x3f6a9e0
//   XREF to: 03f6a9e0 (DATA)
// 005af1d3: MOV EBP,dword ptr [ESI]
//   XREF to: 03f6a9e0 (DATA)
// 005af1d5: TEST EBP,EBP
// 005af1d7: JNZ 0x005af20e
//   XREF to: 005af20e (CONDITIONAL_JUMP)
// 005af1d9: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_005af1d9
// 005af1e0: ADD EAX,EBX
// 005af1e2: XOR EDX,EDX
// 005af1e4: MOV dword ptr [EAX*0x4 + 0x3f6ab3c],EDX
//   XREF to: 03f6ab3c (DATA)
// 005af1eb: POP EBP
// 005af1ec: POP ESI
// 005af1ed: POP EBX
// 005af1ee: RET
// 005af1ef: CMP dword ptr [EBX*0x4 + 0x3f6a9e0],0x0
//   Label: LAB_005af1ef
//   XREF to: 03f6a9e0 (DATA)
// 005af1f7: JZ 0x005af1a0
//   XREF to: 005af1a0 (CONDITIONAL_JUMP)
// 005af1f9: LEA EAX,[EBX*0x4 + 0x0]
// 005af200: ADD EAX,EBX
// 005af202: CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1
//   XREF to: 03f6ab3c (DATA)
// 005af20a: JL 0x005af1a0
//   XREF to: 005af1a0 (CONDITIONAL_JUMP)
// 005af20c: JMP 0x005af1c6
//   XREF to: 005af1c6 (UNCONDITIONAL_JUMP)
// 005af20e: PUSH EBP
//   Label: LAB_005af20e
// 005af20f: MOV EDX,dword ptr [EBP]
// 005af212: CALL dword ptr [EDX + 0x8]
// 005af215: MOV dword ptr [ESI],0x0
//   XREF to: 03f6a9e0 (DATA)
// 005af21b: JMP 0x005af1d9
//   XREF to: 005af1d9 (UNCONDITIONAL_JUMP)
