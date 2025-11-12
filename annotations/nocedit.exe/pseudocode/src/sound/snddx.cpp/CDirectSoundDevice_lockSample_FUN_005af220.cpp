// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220
// Address: 005af220
// Address Range: [[005af220, 005af31b]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220(CDirectSoundDevice * this_ptr)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_sound_snddx_cpp_00651c9d
//   TerminatedCString s_DirectSoundDevice_lockSa_00651cb0
//   TerminatedCString s_Lock_hw_sample_buffer_00651ce0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
//   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
//   undefined4 DAT_03f6ab40
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_005af220(CDirectSoundDevice *this_ptr)

{
  char *pcVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  IDirectSoundBuffer *pIStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  
  if ((((in_stack_00000008 < 1) || (0x18 < in_stack_00000008)) ||
      (g_DirectSoundSampleBuffers[in_stack_00000008] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSoundBufferMetadata[in_stack_00000008].field0_0x0 < 1)) {
    return 0;
  }
  iVar2 = in_stack_00000008 * 0x14;
  if (g_DirectSoundBufferMetadata[in_stack_00000008].field1_0x4 != 0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2c4;
    iStack_1a4 = 0x5af299;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::lockSample - already locked!");
  }
  pIStack_1bc = g_DirectSoundSampleBuffers[in_stack_00000008];
  iStack_1a4 = iVar2 + 0x3f6ab4c;
  iStack_1a8 = iVar2 + 0x3f6ab44;
  iStack_1ac = iVar2 + 0x3f6ab48;
  iStack_1b0 = iVar2 + 0x3f6ab40;
  iStack_1b4 = in_stack_00000010 * g_DirectSoundBufferMetadata[in_stack_00000008].field0_0x0;
  iStack_1b8 = in_stack_0000000c * g_DirectSoundBufferMetadata[in_stack_00000008].field0_0x0;
  iVar2 = (**(code **)((int)pIStack_1bc->field0_0x0 + 0x2c))();
  if (iVar2 == 0) {
    return g_DirectSoundBufferMetadata[in_stack_00000008].field1_0x4;
  }
  pcVar1 = sound_snddx_cpp_FUN_005ade70();
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&pIStack_1bc,"DirectSux: Unable to %s.  (%s)",
             "Lock hw sample buffer",pcVar1);
  sound_sndmain_cpp_logSoundError_FUN_005adba0((char *)&pIStack_1bc);
  return 0;
}


// Assembly code:
// 005af220: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220
// 005af221: PUSH ESI
// 005af222: PUSH EBP
// 005af223: SUB ESP,0x190
// 005af229: MOV ESI,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[0x8] (READ)
// 005af230: TEST ESI,ESI
// 005af232: JLE 0x005af239
//   XREF to: 005af239 (CONDITIONAL_JUMP)
// 005af234: CMP ESI,0x19
// 005af237: JL 0x005af245
//   XREF to: 005af245 (CONDITIONAL_JUMP)
// 005af239: XOR EAX,EAX
//   Label: LAB_005af239
// 005af23b: ADD ESP,0x190
// 005af241: POP EBP
// 005af242: POP ESI
// 005af243: POP EBX
// 005af244: RET
// 005af245: CMP dword ptr [ESI*0x4 + 0x3f6a9e0],0x0
//   Label: LAB_005af245
//   XREF to: 03f6a9e0 (DATA)
// 005af24d: JZ 0x005af239
//   XREF to: 005af239 (CONDITIONAL_JUMP)
// 005af24f: LEA EBX,[ESI*0x4 + 0x0]
// 005af256: ADD EBX,ESI
// 005af258: CMP dword ptr [EBX*0x4 + 0x3f6ab3c],0x1
//   XREF to: 03f6ab3c (DATA)
// 005af260: JL 0x005af239
//   XREF to: 005af239 (CONDITIONAL_JUMP)
// 005af262: LEA EBX,[ESI*0x4 + 0x0]
// 005af269: ADD EBX,ESI
// 005af26b: SHL EBX,0x2
// 005af26e: ADD EBX,0x3f6ab3c
//   XREF to: 03f6ab3c (DATA)
// 005af274: CMP dword ptr [EBX + 0x4],0x0
//   XREF to: 03f6ab40 (DATA)
// 005af278: JZ 0x005af29c
//   XREF to: 005af29c (CONDITIONAL_JUMP)
// 005af27a: MOV EBP,0x651c9d
//   XREF to: 00651c9d (DATA)
// 005af27f: MOV EAX,0x2c4
// 005af284: PUSH 0x651cb0
//   XREF to: 00651cb0 (DATA)
// 005af289: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005af28f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005af294: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005af299: ADD ESP,0x4
// 005af29c: PUSH 0x0
//   Label: LAB_005af29c
// 005af29e: MOV EAX,dword ptr [ESI*0x4 + 0x3f6a9e0]
//   XREF to: 03f6a9e0 (DATA)
// 005af2a5: LEA ESI,[EBX + 0x10]
// 005af2a8: PUSH ESI
// 005af2a9: LEA ESI,[EBX + 0x8]
// 005af2ac: PUSH ESI
// 005af2ad: LEA ESI,[EBX + 0xc]
// 005af2b0: PUSH ESI
// 005af2b1: LEA ESI,[EBX + 0x4]
// 005af2b4: MOV ECX,dword ptr [EBX]
//   XREF to: 03f6ab3c (DATA)
// 005af2b6: PUSH ESI
// 005af2b7: MOV ESI,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[0x10] (READ)
// 005af2be: IMUL ESI,ECX
// 005af2c1: PUSH ESI
// 005af2c2: MOV ESI,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[0xc] (READ)
// 005af2c9: IMUL ESI,ECX
// 005af2cc: PUSH ESI
// 005af2cd: MOV EDX,dword ptr [EAX]
// 005af2cf: PUSH EAX
// 005af2d0: CALL dword ptr [EDX + 0x2c]
// 005af2d3: TEST EAX,EAX
// 005af2d5: JNZ 0x005af2e4
//   XREF to: 005af2e4 (CONDITIONAL_JUMP)
// 005af2d7: MOV EAX,dword ptr [EBX + 0x4]
//   XREF to: 03f6ab40 (DATA)
// 005af2da: ADD ESP,0x190
// 005af2e0: POP EBP
// 005af2e1: POP ESI
// 005af2e2: POP EBX
// 005af2e3: RET
// 005af2e4: PUSH EAX
//   Label: LAB_005af2e4
// 005af2e5: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005af2ea: ADD ESP,0x4
// 005af2ed: PUSH EAX
// 005af2ee: PUSH 0x651ce0
//   XREF to: 00651ce0 (DATA)
// 005af2f3: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005af2f8: LEA EAX,[ESP + 0xc]
// 005af2fc: PUSH EAX
// 005af2fd: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005af302: ADD ESP,0x10
// 005af305: MOV EAX,ESP
// 005af307: PUSH EAX
// 005af308: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af30d: ADD ESP,0x4
// 005af310: XOR EAX,EAX
// 005af312: ADD ESP,0x190
// 005af318: POP EBP
// 005af319: POP ESI
// 005af31a: POP EBX
// 005af31b: RET
