// Name: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
// Address: 005a7fe0
// Address Range: [[005a7fe0, 005a80d0]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005acdb0 (005acdb0) at 005ace03 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_006504ad
//   TerminatedCString s_SfxSlot_pollHwHandle_no__006504c2
//   TerminatedCString s_Killing_looped_sfx_s_whi_006504e5
//   TerminatedCString s_Error_setting_hw_sfx_d_o_0065050a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
//   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(CSfxSlot *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  if (this_ptr->dsound_buffer == (void *)0x0) {
    return;
  }
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
    return;
  }
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xb71;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::pollHwHandle - no sample?");
  }
  iVar1 = (*(code *)g_CSoundDevicePtr->vtable->func21)();
  if (iVar1 == 0) {
    iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr->sample);
    if (iVar1 != 0) {
      sound_sndmain_cpp_logSoundError_FUN_005adba0
                ("Killing looped sfx %s, which died??\n",this_ptr->sample);
    }
    sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
    return;
  }
  uVar2 = 0;
  if (((this_ptr->options).field5_0x14[0x48] & 1U) == 0) {
    if (*(int *)((this_ptr->options).field5_0x14 + 0xc) != 0) {
      uVar2 = 2;
    }
    if (*(int *)((this_ptr->options).field5_0x14 + 0x2c) != 0) {
      if ((uVar2 | 4) == 0) {
        return;
      }
      goto LAB_005a809a;
    }
  }
  if (uVar2 == 0) {
    return;
  }
LAB_005a809a:
  iVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr);
  if (iVar1 != 0) {
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_005adba0
            ("Error setting hw sfx %d options (sample %s), killing.\n",this_ptr->dsound_buffer,this_ptr->sample);
  sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(this_ptr);
  return;
}


// Assembly code:
// 005a7fe0: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
// 005a7fe1: PUSH EDI
// 005a7fe2: PUSH EBP
// 005a7fe3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a7fe7: CMP dword ptr [EBX + 0x70],0x0
// 005a7feb: JZ 0x005a8040
//   XREF to: 005a8040 (CONDITIONAL_JUMP)
// 005a7fed: CMP dword ptr [0x03f69268],0x0
//   XREF to: 03f69268 (READ)
// 005a7ff4: JZ 0x005a8044
//   XREF to: 005a8044 (CONDITIONAL_JUMP)
// 005a7ff6: CMP dword ptr [EBX + 0x78],0x0
// 005a7ffa: JNZ 0x005a801f
//   XREF to: 005a801f (CONDITIONAL_JUMP)
// 005a7ffc: MOV EDI,0x6504ad
//   XREF to: 006504ad (DATA)
// 005a8001: MOV EBP,0xb71
// 005a8006: PUSH 0x6504c2
//   XREF to: 006504c2 (DATA)
// 005a800b: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a8011: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005a8017: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a801c: ADD ESP,0x4
// 005a801f: PUSH EBX
//   Label: LAB_005a801f
// 005a8020: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a8025: PUSH EAX
// 005a8026: MOV EDX,dword ptr [EAX]
// 005a8028: CALL dword ptr [EDX + 0x50]
// 005a802b: ADD ESP,0x8
// 005a802e: TEST EAX,EAX
// 005a8030: JZ 0x005a8051
//   XREF to: 005a8051 (CONDITIONAL_JUMP)
// 005a8032: MOV DL,byte ptr [EBX + 0x5c]
// 005a8035: XOR EAX,EAX
// 005a8037: TEST DL,0x1
// 005a803a: JZ 0x005a807f
//   XREF to: 005a807f (CONDITIONAL_JUMP)
// 005a803c: TEST EAX,EAX
//   Label: LAB_005a803c
// 005a803e: JNZ 0x005a809a
//   XREF to: 005a809a (CONDITIONAL_JUMP)
// 005a8040: POP EBP
//   Label: LAB_005a8040
// 005a8041: POP EDI
// 005a8042: POP EBX
// 005a8043: RET
// 005a8044: PUSH EBX
//   Label: LAB_005a8044
// 005a8045: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a804a: ADD ESP,0x4
// 005a804d: POP EBP
// 005a804e: POP EDI
// 005a804f: POP EBX
// 005a8050: RET
// 005a8051: MOV EAX,dword ptr [EBX + 0x78]
//   Label: LAB_005a8051
// 005a8054: PUSH EAX
// 005a8055: CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
//   XREF to: 005a87d0 (UNCONDITIONAL_CALL)
// 005a805a: ADD ESP,0x4
// 005a805d: TEST EAX,EAX
// 005a805f: JZ 0x005a8072
//   XREF to: 005a8072 (CONDITIONAL_JUMP)
// 005a8061: MOV EDX,dword ptr [EBX + 0x78]
// 005a8064: PUSH EDX
// 005a8065: PUSH 0x6504e5
//   XREF to: 006504e5 (DATA)
// 005a806a: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a806f: ADD ESP,0x8
// 005a8072: PUSH EBX
//   Label: LAB_005a8072
// 005a8073: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a8078: ADD ESP,0x4
// 005a807b: POP EBP
// 005a807c: POP EDI
// 005a807d: POP EBX
// 005a807e: RET
// 005a807f: CMP dword ptr [EBX + 0x20],0x0
//   Label: LAB_005a807f
// 005a8083: JZ 0x005a808a
//   XREF to: 005a808a (CONDITIONAL_JUMP)
// 005a8085: MOV EAX,0x2
// 005a808a: CMP dword ptr [EBX + 0x40],0x0
//   Label: LAB_005a808a
// 005a808e: JZ 0x005a803c
//   XREF to: 005a803c (CONDITIONAL_JUMP)
// 005a8090: OR AL,0x4
// 005a8092: TEST EAX,EAX
// 005a8094: JNZ 0x005a809a
//   XREF to: 005a809a (CONDITIONAL_JUMP)
// 005a8096: POP EBP
// 005a8097: POP EDI
// 005a8098: POP EBX
// 005a8099: RET
// 005a809a: PUSH EAX
//   Label: LAB_005a809a
// 005a809b: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a80a1: PUSH EBX
// 005a80a2: MOV ECX,dword ptr [EDX]
// 005a80a4: PUSH EDX
// 005a80a5: CALL dword ptr [ECX + 0x40]
// 005a80a8: ADD ESP,0xc
// 005a80ab: TEST EAX,EAX
// 005a80ad: JNZ 0x005a8040
//   XREF to: 005a8040 (CONDITIONAL_JUMP)
// 005a80af: MOV EDI,dword ptr [EBX + 0x78]
// 005a80b2: PUSH EDI
// 005a80b3: MOV EBP,dword ptr [EBX + 0x70]
// 005a80b6: PUSH EBP
// 005a80b7: PUSH 0x65050a
//   XREF to: 0065050a (DATA)
// 005a80bc: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005a80c1: ADD ESP,0xc
// 005a80c4: PUSH EBX
// 005a80c5: CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
//   XREF to: 005a7e60 (UNCONDITIONAL_CALL)
// 005a80ca: ADD ESP,0x4
// 005a80cd: POP EBP
// 005a80ce: POP EDI
// 005a80cf: POP EBX
// 005a80d0: RET
