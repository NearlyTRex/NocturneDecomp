// Name: sound_mp3.cpp_ReadOrwriteMultiBits_FUN_0052f5b0
// Address: 0052f5b0
// Address Range: [[0052f5b0, 0052f66a]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_ReadOrwriteMultiBits_FUN_0052f5b0()
// Cross-references:
//   sound_mp3.cpp_MPEGPickTable_LayerCheck_FUN_00534630 (00534630) at 005347c7 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00534e44 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_FUN_0052ee50
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_ReadOrwriteMultiBits(undefined4 param_1, undefined4 param_2)
    */

void sound_mp3_cpp_ReadOrwriteMultiBits_FUN_0052f5b0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_stack_00000008;
  
  puVar1 = (undefined4 *)*in_stack_00000008;
  uVar2 = sound_mp3_cpp_FUN_0052ee50();
  *puVar1 = uVar2;
  iVar3 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  puVar1[1] = 4 - iVar3;
  iVar3 = sound_mp3_cpp_FUN_0052ee50();
  puVar1[2] = (uint)(iVar3 == 0);
  uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  puVar1[3] = uVar2;
  uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  puVar1[4] = uVar2;
  uVar2 = sound_mp3_cpp_FUN_0052ee50();
  puVar1[5] = uVar2;
  uVar2 = sound_mp3_cpp_FUN_0052ee50();
  puVar1[6] = uVar2;
  uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  puVar1[7] = uVar2;
  uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  puVar1[8] = uVar2;
  uVar2 = sound_mp3_cpp_FUN_0052ee50();
  puVar1[9] = uVar2;
  uVar2 = sound_mp3_cpp_FUN_0052ee50();
  puVar1[10] = uVar2;
  uVar2 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
  puVar1[0xb] = uVar2;
  return;
}


// Assembly code:
// 0052f5b0: PUSH EBX
//   Label: sound_mp3.cpp_ReadOrwriteMultiBits_FUN_0052f5b0
// 0052f5b1: PUSH ESI
// 0052f5b2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052f5b6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052f5ba: PUSH ESI
// 0052f5bb: MOV EBX,dword ptr [EBX]
// 0052f5bd: CALL sound_mp3.cpp_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 0052f5c2: ADD ESP,0x4
// 0052f5c5: PUSH 0x2
// 0052f5c7: PUSH ESI
// 0052f5c8: MOV dword ptr [EBX],EAX
// 0052f5ca: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f5cf: MOV EDX,0x4
// 0052f5d4: ADD ESP,0x8
// 0052f5d7: SUB EDX,EAX
// 0052f5d9: PUSH ESI
// 0052f5da: MOV dword ptr [EBX + 0x4],EDX
// 0052f5dd: CALL sound_mp3.cpp_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 0052f5e2: ADD ESP,0x4
// 0052f5e5: TEST EAX,EAX
// 0052f5e7: SETZ AL
// 0052f5ea: PUSH 0x4
// 0052f5ec: AND EAX,0xff
// 0052f5f1: PUSH ESI
// 0052f5f2: MOV dword ptr [EBX + 0x8],EAX
// 0052f5f5: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f5fa: ADD ESP,0x8
// 0052f5fd: PUSH 0x2
// 0052f5ff: PUSH ESI
// 0052f600: MOV dword ptr [EBX + 0xc],EAX
// 0052f603: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f608: ADD ESP,0x8
// 0052f60b: PUSH ESI
// 0052f60c: MOV dword ptr [EBX + 0x10],EAX
// 0052f60f: CALL sound_mp3.cpp_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 0052f614: ADD ESP,0x4
// 0052f617: PUSH ESI
// 0052f618: MOV dword ptr [EBX + 0x14],EAX
// 0052f61b: CALL sound_mp3.cpp_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 0052f620: ADD ESP,0x4
// 0052f623: PUSH 0x2
// 0052f625: PUSH ESI
// 0052f626: MOV dword ptr [EBX + 0x18],EAX
// 0052f629: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f62e: ADD ESP,0x8
// 0052f631: PUSH 0x2
// 0052f633: PUSH ESI
// 0052f634: MOV dword ptr [EBX + 0x1c],EAX
// 0052f637: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f63c: ADD ESP,0x8
// 0052f63f: PUSH ESI
// 0052f640: MOV dword ptr [EBX + 0x20],EAX
// 0052f643: CALL sound_mp3.cpp_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 0052f648: ADD ESP,0x4
// 0052f64b: PUSH ESI
// 0052f64c: MOV dword ptr [EBX + 0x24],EAX
// 0052f64f: CALL sound_mp3.cpp_FUN_0052ee50
//   XREF to: 0052ee50 (UNCONDITIONAL_CALL)
// 0052f654: ADD ESP,0x4
// 0052f657: PUSH 0x2
// 0052f659: PUSH ESI
// 0052f65a: MOV dword ptr [EBX + 0x28],EAX
// 0052f65d: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052f662: ADD ESP,0x8
// 0052f665: MOV dword ptr [EBX + 0x2c],EAX
// 0052f668: POP ESI
// 0052f669: POP EBX
// 0052f66a: RET
