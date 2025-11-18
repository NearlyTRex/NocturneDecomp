// Name: sound_sndmain.cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70
// Address: 005a9a70
// Address Range: [[005a9a70, 005a9ad1]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70(uint sfx_handle, CVector3d * velocity_source_ptr)
// Globals:
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70
          (uint sfx_handle,CVector3d *velocity_source_ptr)

{
  CSfxSlot *this_ptr;
  int iVar1;
  CVector3d *in_stack_0000000c;
  undefined4 uStack00000014;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).velocity_format = 2;
  iVar1 = 1;
  (this_ptr->options).velocity_source_ptr = in_stack_0000000c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,4);
  }
  uStack00000014 = 0x5a9acc;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return iVar1;
}


// Assembly code:
// 005a9a70: PUSH EBX
//   Label: sound_sndmain.cpp_setSfxTrackedDoubleVelocity_FUN_005a9a70
// 005a9a71: PUSH 0x1
// 005a9a73: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9a77: PUSH EDX
// 005a9a78: CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9a7d: MOV EBX,EAX
// 005a9a7f: ADD ESP,0x8
// 005a9a82: TEST EAX,EAX
// 005a9a84: JNZ 0x005a9a88
//   XREF to: 005a9a88 (CONDITIONAL_JUMP)
// 005a9a86: POP EBX
// 005a9a87: RET
// 005a9a88: PUSH EDI
//   Label: LAB_005a9a88
// 005a9a89: PUSH ESI
// 005a9a8a: PUSH 0x0
// 005a9a8c: MOV dword ptr [EAX + 0x40],0x2
// 005a9a93: PUSH EBX
// 005a9a94: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005a9a98: MOV ESI,0x1
// 005a9a9d: MOV dword ptr [EBX + 0x3c],EAX
// 005a9aa0: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a9aa5: MOV ECX,dword ptr [EBX + 0x70]
// 005a9aa8: ADD ESP,0x8
// 005a9aab: TEST ECX,ECX
// 005a9aad: JZ 0x005a9ac7
//   XREF to: 005a9ac7 (CONDITIONAL_JUMP)
// 005a9aaf: MOV EDI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9ab5: TEST EDI,EDI
// 005a9ab7: JZ 0x005a9ac7
//   XREF to: 005a9ac7 (CONDITIONAL_JUMP)
// 005a9ab9: PUSH 0x4
// 005a9abb: PUSH EBX
// 005a9abc: MOV ESI,dword ptr [EDI]
// 005a9abe: PUSH EDI
// 005a9abf: CALL dword ptr [ESI + 0x40]
// 005a9ac2: ADD ESP,0xc
// 005a9ac5: MOV ESI,EAX
// 005a9ac7: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a9ac7
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9acc: MOV EAX,ESI
// 005a9ace: POP ESI
// 005a9acf: POP EDI
// 005a9ad0: POP EBX
// 005a9ad1: RET
