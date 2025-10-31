// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
// Address: 005b0390
// Address Range: [[005b0390, 005b0436]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390(int device_id, SSoundDeviceInfo * device_info)
// Cross-references:
//   sound_snddx.cpp_CreatePrimaryBufferMaybe_FUN_005b0440 (005b0440) at 005b0474 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 (005ab2e0) at 005ab34a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DirectSound_s_006522ab
//   int g_DirectSoundDeviceCount = -0x1
//   SDirectSoundDeviceInfo[8] g_DirectSoundDevices
//   undefined4 g_DirectSoundDevices[0].value2
//   undefined4 g_DirectSoundDevices[0].value1
// Function calls:
//   crt_dsound.c_DirectSoundEnumerateA
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390(int device_id,SSoundDeviceInfo *device_info)

{
  DWORD DVar1;
  
  if (g_DirectSoundDeviceCount < 0) {
    g_DirectSoundDeviceCount = 0;
    crt_dsound_c_DirectSoundEnumerateA(sound_snddx_cpp_FUN_005b0120,(LPVOID)0x0);
  }
  if ((-1 < device_id) && (device_id < g_DirectSoundDeviceCount)) {
    device_info->device_id = device_id;
    device_info->api_type = 1;
    DVar1 = g_DirectSoundDevices[device_id].value1;
    device_info->flags = 0;
    device_info->device_value1 = DVar1;
    device_info->device_value2 = g_DirectSoundDevices[device_id].value2;
    device_info->device_guid = g_DirectSoundDevices[device_id].device_id_part;
    crt_stdio_c_sprintf_FUN_005fdbd0(device_info->device_name,"DirectSound: %s");
    return 1;
  }
  return 0;
}


// Assembly code:
// 005b0390: PUSH EBX
//   Label: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
// 005b0391: PUSH ESI
// 005b0392: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b0396: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b039a: CMP dword ptr [0x00681e00],0x0
//   XREF to: 00681e00 (READ)
// 005b03a1: JL 0x005b03b4
//   XREF to: 005b03b4 (CONDITIONAL_JUMP)
// 005b03a3: TEST ESI,ESI
//   Label: LAB_005b03a3
// 005b03a5: JL 0x005b03af
//   XREF to: 005b03af (CONDITIONAL_JUMP)
// 005b03a7: CMP ESI,dword ptr [0x00681e00]
//   XREF to: 00681e00 (READ)
// 005b03ad: JL 0x005b03c9
//   XREF to: 005b03c9 (CONDITIONAL_JUMP)
// 005b03af: XOR EAX,EAX
//   Label: LAB_005b03af
// 005b03b1: POP ESI
// 005b03b2: POP EBX
// 005b03b3: RET
// 005b03b4: XOR ECX,ECX
//   Label: LAB_005b03b4
// 005b03b6: PUSH ECX
// 005b03b7: PUSH 0x5b0120
//   XREF to: 005b0120 (DATA)
// 005b03bc: MOV dword ptr [0x00681e00],ECX
//   XREF to: 00681e00 (WRITE)
// 005b03c2: CALL crt_dsound.c_DirectSoundEnumerateA
//   XREF to: 00610f3a (UNCONDITIONAL_CALL)
// 005b03c7: JMP 0x005b03a3
//   XREF to: 005b03a3 (UNCONDITIONAL_JUMP)
// 005b03c9: MOV dword ptr [EBX + 0x104],ESI
//   Label: LAB_005b03c9
// 005b03cf: LEA EAX,[ESI*0x8 + 0x0]
// 005b03d6: ADD EAX,ESI
// 005b03d8: SHL EAX,0x3
// 005b03db: SUB EAX,ESI
// 005b03dd: SHL EAX,0x2
// 005b03e0: MOV dword ptr [EBX + 0x100],0x1
// 005b03ea: MOV EDX,dword ptr [EAX + 0x3f69d78]
//   XREF to: 03f69d78 (DATA)
// 005b03f0: MOV dword ptr [EBX + 0x10c],0x0
// 005b03fa: MOV dword ptr [EBX + 0x108],EDX
// 005b0400: MOV EDX,dword ptr [EAX + 0x3f69d74]
//   XREF to: 03f69d74 (DATA)
// 005b0406: MOV dword ptr [EBX + 0x114],EDX
// 005b040c: MOV EDX,dword ptr [EAX + 0x3f69c60]
//   XREF to: 03f69c60 (DATA)
// 005b0412: ADD EAX,0x3f69c60
//   XREF to: 03f69c60 (DATA)
// 005b0417: ADD EAX,0x14
// 005b041a: PUSH EAX
// 005b041b: PUSH 0x6522ab
//   XREF to: 006522ab (DATA)
// 005b0420: PUSH EBX
// 005b0421: MOV dword ptr [EBX + 0x110],EDX
// 005b0427: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b042c: MOV EAX,0x1
// 005b0431: ADD ESP,0xc
// 005b0434: POP ESI
// 005b0435: POP EBX
// 005b0436: RET
