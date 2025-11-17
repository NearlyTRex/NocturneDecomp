// Name: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
// Address: 005ab780
// Address Range: [[005ab780, 005ab7d5]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780(int index, SRecordingDeviceInfo * device_info)
// Cross-references:
//   sound_sndmain.cpp_findBestRecordingDevice_FUN_005ab7e0 (005ab7e0) at 005ab803 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abfac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650d2c
//   TerminatedCString s_getRecordingDeviceInfo_i_00650d41
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   SRecordingDeviceInfo[8] g_RecordingDevices
//   undefined4 g_RecordingDevices[0].device_name[4]
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780(int index,SRecordingDeviceInfo *device_info)

{
  int iVar1;
  SRecordingDeviceInfo *pSVar2;
  byte bVar3;
  undefined4 *in_stack_00000010;
  
  bVar3 = 0;
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
  if ((index < 0) || (iVar1 <= index)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x141b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("getRecordingDeviceInfo - invalid index");
  }
  pSVar2 = g_RecordingDevices + index;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_stack_00000010 = *(undefined4 *)pSVar2->device_name;
    pSVar2 = (SRecordingDeviceInfo *)((int)pSVar2 + ((uint)bVar3 * -2 + 1) * 4);
    in_stack_00000010 = in_stack_00000010 + (uint)bVar3 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005ab780: PUSH EBX
//   Label: sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
// 005ab781: PUSH ESI
// 005ab782: PUSH EDI
// 005ab783: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005ab787: CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
//   XREF to: 005ab720 (UNCONDITIONAL_CALL)
// 005ab78c: TEST EBX,EBX
// 005ab78e: JL 0x005ab7b1
//   XREF to: 005ab7b1 (CONDITIONAL_JUMP)
// 005ab790: CMP EBX,EAX
// 005ab792: JGE 0x005ab7b1
//   XREF to: 005ab7b1 (CONDITIONAL_JUMP)
// 005ab794: MOV EAX,EBX
//   Label: LAB_005ab794
// 005ab796: SHL EAX,0x5
// 005ab799: ADD EAX,EBX
// 005ab79b: MOV ECX,0x42
// 005ab7a0: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ab7a4: LEA ESI,[EAX*0x8 + 0x3f69414]
//   XREF to: 03f69414 (DATA)
// 005ab7ab: MOVSD.REP ES:EDI,ESI
//   XREF to: 03f69414 (DATA)
//   XREF to: 03f69418 (DATA)
// 005ab7ad: POP EDI
// 005ab7ae: POP ESI
// 005ab7af: POP EBX
// 005ab7b0: RET
// 005ab7b1: MOV EDX,0x650d2c
//   Label: LAB_005ab7b1
//   XREF to: 00650d2c (PARAM)
// 005ab7b6: MOV ECX,0x141b
// 005ab7bb: PUSH 0x650d41
//   XREF to: 00650d41 (DATA)
// 005ab7c0: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ab7c6: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ab7cc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ab7d1: ADD ESP,0x4
// 005ab7d4: JMP 0x005ab794
//   XREF to: 005ab794 (UNCONDITIONAL_JUMP)
