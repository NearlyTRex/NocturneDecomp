// Name: sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40
// Address: 005a9b40
// Address Range: [[005a9b40, 005a9b94]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle, float base_frequency)
// Cross-references:
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 00506554 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e256f [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e8327 [UNCONDITIONAL_CALL]
// Globals:
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle,float base_frequency)

{
  CSfxSlot *this_ptr;
  float in_stack_0000000c;
  undefined4 uStack00000018;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    return 0;
  }
  (this_ptr->options).base_frequency = in_stack_0000000c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100(this_ptr,0.0);
  if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
    (*g_CSoundDevicePtr->vtable->setSfxPos)(g_CSoundDevicePtr,this_ptr,0x10);
  }
  uStack00000018 = 0x5a9b8d;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a9b40: PUSH EBX
//   Label: sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40
// 005a9b41: PUSH 0x1
// 005a9b43: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a9b47: PUSH EDX
// 005a9b48: CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9b4d: MOV EBX,EAX
// 005a9b4f: ADD ESP,0x8
// 005a9b52: TEST EAX,EAX
// 005a9b54: JNZ 0x005a9b58
//   XREF to: 005a9b58 (CONDITIONAL_JUMP)
// 005a9b56: POP EBX
// 005a9b57: RET
// 005a9b58: PUSH ESI
//   Label: LAB_005a9b58
// 005a9b59: PUSH 0x0
// 005a9b5b: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a9b5f: PUSH EBX
// 005a9b60: MOV dword ptr [EBX + 0x48],EAX
// 005a9b63: CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100
//   XREF to: 005a7100 (UNCONDITIONAL_CALL)
// 005a9b68: MOV ECX,dword ptr [EBX + 0x70]
// 005a9b6b: ADD ESP,0x8
// 005a9b6e: TEST ECX,ECX
// 005a9b70: JZ 0x005a9b88
//   XREF to: 005a9b88 (CONDITIONAL_JUMP)
// 005a9b72: MOV ESI,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005a9b78: TEST ESI,ESI
// 005a9b7a: JZ 0x005a9b88
//   XREF to: 005a9b88 (CONDITIONAL_JUMP)
// 005a9b7c: PUSH 0x10
// 005a9b7e: PUSH EBX
// 005a9b7f: MOV EDX,dword ptr [ESI]
// 005a9b81: PUSH ESI
// 005a9b82: CALL dword ptr [EDX + 0x40]
// 005a9b85: ADD ESP,0xc
// 005a9b88: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a9b88
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9b8d: MOV EAX,0x1
// 005a9b92: POP ESI
// 005a9b93: POP EBX
// 005a9b94: RET
