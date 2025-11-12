// Name: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320
// Address: 005af320
// Address Range: [[005af320, 005af401]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320(CDirectSoundDevice * this_ptr)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_sound_snddx_cpp_00651cf6
//   TerminatedCString s_DirectSoundDevice_unlock_00651d09
//   TerminatedCString s_Unlock_hw_sample_buffer_00651d4b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
//   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
//   undefined4 DAT_03f6ab40
//   undefined4 DAT_03f6ab44
//   undefined4 DAT_03f6ab48
//   undefined4 DAT_03f6ab4c
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

void __cdecl
sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_005af320(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  IDirectSoundBuffer *pIStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  
  if ((((in_stack_00000008 < 1) || (0x18 < in_stack_00000008)) ||
      (g_DirectSoundSampleBuffers[in_stack_00000008] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSoundBufferMetadata[in_stack_00000008].field0_0x0 < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2d7;
    iStack_1ac = 0x5af35f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d");
  }
  iStack_1b0 = g_DirectSoundBufferMetadata[in_stack_00000008].field1_0x4;
  if (iStack_1b0 != 0) {
    iStack_1ac = g_DirectSoundBufferMetadata[in_stack_00000008].field3_0xc;
    pIStack_1b4 = g_DirectSoundSampleBuffers[in_stack_00000008];
    iVar1 = (**(code **)((int)pIStack_1b4->field0_0x0 + 0x4c))();
    if (iVar1 != 0) {
      pcVar2 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)&pIStack_1b4,"DirectSux: Unable to %s.  (%s)",
                 "Unlock hw sample buffer",pcVar2);
      sound_sndmain_cpp_logSoundError_FUN_005adba0((char *)&pIStack_1b4);
    }
    g_DirectSoundBufferMetadata[in_stack_00000008].field1_0x4 = 0;
  }
  return;
}


// Assembly code:
// 005af320: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320
// 005af321: PUSH ESI
// 005af322: PUSH EDI
// 005af323: PUSH EBP
// 005af324: SUB ESP,0x190
// 005af32a: MOV ESI,dword ptr [ESP + 0x1a8]
//   XREF to: Stack[0x8] (READ)
// 005af331: TEST ESI,ESI
// 005af333: JLE 0x005af33e
//   XREF to: 005af33e (CONDITIONAL_JUMP)
// 005af335: CMP ESI,0x19
// 005af338: JL 0x005af3d8
//   XREF to: 005af3d8 (CONDITIONAL_JUMP)
// 005af33e: PUSH ESI
//   Label: LAB_005af33e
// 005af33f: MOV EBX,0x651cf6
//   XREF to: 00651cf6 (PARAM)
// 005af344: MOV EDI,0x2d7
// 005af349: PUSH 0x651d09
//   XREF to: 00651d09 (DATA)
// 005af34e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005af354: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005af35a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005af35f: ADD ESP,0x8
// 005af362: LEA EAX,[ESI*0x4 + 0x0]
//   Label: LAB_005af362
// 005af369: ADD EAX,ESI
// 005af36b: MOV EBX,0x3f6ab3c
//   XREF to: 03f6ab3c (DATA)
// 005af370: SHL EAX,0x2
// 005af373: ADD EBX,EAX
// 005af375: MOV EBP,dword ptr [EBX + 0x4]
//   XREF to: 03f6ab40 (DATA)
// 005af378: TEST EBP,EBP
// 005af37a: JZ 0x005af3cd
//   XREF to: 005af3cd (CONDITIONAL_JUMP)
// 005af37c: MOV EDX,dword ptr [EBX + 0x10]
//   XREF to: 03f6ab4c (DATA)
// 005af37f: PUSH EDX
// 005af380: MOV ECX,dword ptr [EBX + 0x8]
//   XREF to: 03f6ab44 (DATA)
// 005af383: PUSH ECX
// 005af384: MOV EDI,dword ptr [EBX + 0xc]
//   XREF to: 03f6ab48 (DATA)
// 005af387: PUSH EDI
// 005af388: MOV EAX,dword ptr [ESI*0x4 + 0x3f6a9e0]
//   XREF to: 03f6a9e0 (DATA)
// 005af38f: PUSH EBP
// 005af390: MOV ESI,dword ptr [EAX]
// 005af392: PUSH EAX
// 005af393: CALL dword ptr [ESI + 0x4c]
// 005af396: TEST EAX,EAX
// 005af398: JZ 0x005af3c6
//   XREF to: 005af3c6 (CONDITIONAL_JUMP)
// 005af39a: PUSH EAX
// 005af39b: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005af3a0: ADD ESP,0x4
// 005af3a3: PUSH EAX
// 005af3a4: PUSH 0x651d4b
//   XREF to: 00651d4b (DATA)
// 005af3a9: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005af3ae: LEA EAX,[ESP + 0xc]
// 005af3b2: PUSH EAX
// 005af3b3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005af3b8: ADD ESP,0x10
// 005af3bb: MOV EAX,ESP
// 005af3bd: PUSH EAX
// 005af3be: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af3c3: ADD ESP,0x4
// 005af3c6: MOV dword ptr [EBX + 0x4],0x0
//   Label: LAB_005af3c6
//   XREF to: 03f6ab40 (DATA)
// 005af3cd: ADD ESP,0x190
//   Label: LAB_005af3cd
// 005af3d3: POP EBP
// 005af3d4: POP EDI
// 005af3d5: POP ESI
// 005af3d6: POP EBX
// 005af3d7: RET
// 005af3d8: CMP dword ptr [ESI*0x4 + 0x3f6a9e0],0x0
//   Label: LAB_005af3d8
//   XREF to: 03f6a9e0 (DATA)
// 005af3e0: JZ 0x005af33e
//   XREF to: 005af33e (CONDITIONAL_JUMP)
// 005af3e6: LEA EAX,[ESI*0x4 + 0x0]
// 005af3ed: ADD EAX,ESI
// 005af3ef: CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1
//   XREF to: 03f6ab3c (DATA)
// 005af3f7: JL 0x005af33e
//   XREF to: 005af33e (CONDITIONAL_JUMP)
// 005af3fd: JMP 0x005af362
//   XREF to: 005af362 (UNCONDITIONAL_JUMP)
