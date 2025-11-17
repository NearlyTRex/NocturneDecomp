// Name: sound_sndmain.cpp_FUN_005a9910
// Address: 005a9910
// Address Range: [[005a9910, 005a996b]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a9910()
// Globals:
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005a9910(void)

{
  CSfxSlot *this_ptr;
  uint in_stack_00000004;
  CVector3d *in_stack_0000000c;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(in_stack_00000004,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).position_format = 2;
  (this_ptr->options).position_source_ptr = in_stack_0000000c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a9910: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a9910
// 005a9911: PUSH 0x1
// 005a9913: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9917: PUSH EDX
// 005a9918: CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a991d: MOV EBX,EAX
// 005a991f: ADD ESP,0x8
// 005a9922: TEST EAX,EAX
// 005a9924: JNZ 0x005a9928
//   XREF to: 005a9928 (CONDITIONAL_JUMP)
// 005a9926: POP EBX
// 005a9927: RET
// 005a9928: PUSH ESI
//   Label: LAB_005a9928
// 005a9929: PUSH 0x0
// 005a992b: MOV dword ptr [EAX + 0x20],0x2
// 005a9932: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a9936: PUSH EBX
// 005a9937: MOV dword ptr [EBX + 0x1c],EAX
// 005a993a: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a993f: MOV ECX,dword ptr [EBX + 0x70]
// 005a9942: ADD ESP,0x8
// 005a9945: TEST ECX,ECX
// 005a9947: JZ 0x005a995f
//   XREF to: 005a995f (CONDITIONAL_JUMP)
// 005a9949: MOV ESI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a994f: TEST ESI,ESI
// 005a9951: JZ 0x005a995f
//   XREF to: 005a995f (CONDITIONAL_JUMP)
// 005a9953: PUSH 0x2
// 005a9955: PUSH EBX
// 005a9956: MOV EDX,dword ptr [ESI]
// 005a9958: PUSH ESI
// 005a9959: CALL dword ptr [EDX + 0x40]
// 005a995c: ADD ESP,0xc
// 005a995f: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a995f
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9964: MOV EAX,0x1
// 005a9969: POP ESI
// 005a996a: POP EBX
// 005a996b: RET
