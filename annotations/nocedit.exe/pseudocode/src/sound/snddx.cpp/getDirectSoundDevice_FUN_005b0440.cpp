// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440
// Address: 005b0440
// Address Range: [[005b0440, 005b066a]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)

#include "nocturne.h"

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  LPGUID lpGuid;
  BADSPACEBASE *in_ESP;
  DWORD in_stack_0000000c;
  DWORD in_stack_00000010;
  byte in_stack_00000018;
  char acStack_5bc [4];
  char acStack_5b8 [396];
  char acStack_42c [4];
  char acStack_428 [396];
  char acStack_29c [4];
  char acStack_298 [356];
  SSoundDeviceInfo SStack_134;
  
  iVar1 = sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(&g_CDirectSoundDeviceInstance);
  if (iVar1 != 0) {
    iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390(device_id,&SStack_134);
    if (iVar1 != 0) {
      lpGuid = (LPGUID)0x0;
      if (g_DirectSoundDevices[device_id].device_id_part == 0) {
        lpGuid = (LPGUID)g_DirectSoundDevices[device_id].field_4;
      }
      uVar2 = crt_dsound_c_DirectSoundCreate(lpGuid,&g_DirectSound,(LPUNKNOWN)0x0);
      if (uVar2 == 0) {
        uVar2 = (*g_DirectSound->vtable->SetCooperativeLevel)(g_DirectSound,g_MainWindowHandle,2);
        if (uVar2 == 0) {
          crt_memory_c_memset_FUN_005fde40(&stack0x00000008,0,0x14);
          in_stack_0000000c = 0x14;
          in_stack_00000010 = 0x11;
          uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                            (g_DirectSound,(LPDSBUFFERDESC)&stack0x0000000c,
                             &g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
          if (uVar2 != 0) {
            pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (&stack0xfffff8b4,"DirectSux: Unable to %s.  (%s)",
                       "Create the primary buffer",pcVar3);
            sound_sndmain_cpp_logSoundError_FUN_005adba0(&stack0xfffff8b8);
            in_stack_00000018 = in_stack_00000018 & 0xef;
            uVar2 = (*g_DirectSound->vtable->CreateSoundBuffer)
                              (g_DirectSound,(LPDSBUFFERDESC)&stack0x00000014,
                               &g_DirectSoundPrimaryBuffer,(LPUNKNOWN)0x0);
            if (uVar2 != 0) {
              pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
              crt_stdio_c_sprintf_FUN_005fdbd0
                        (acStack_42c,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",pcVar3);
              pcVar3 = acStack_428;
              goto LAB_005b04e1;
            }
          }
          iVar1 = sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590();
          if ((iVar1 != 0) && (g_DirectSoundDevices[device_id].value1 != 0)) {
            (*g_DirectSoundPrimaryBuffer->vtable->QueryInterface)
                      ((IUnknown *)g_DirectSoundPrimaryBuffer,&DAT_00686d58,&g_DirectSound3DListener
                      );
          }
          return &g_CDirectSoundDeviceInstance;
        }
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_29c,"DirectSux: Unable to %s.  (%s)","Set cooperative level",
                   pcVar3);
        pcVar3 = acStack_298;
      }
      else {
        pcVar3 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(uVar2);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_5bc,"DirectSux: Unable to %s.  (%s)",
                   "create DirectSound object",pcVar3);
        pcVar3 = acStack_5b8;
      }
LAB_005b04e1:
      sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(&g_CDirectSoundDeviceInstance);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return (CDirectSoundDevice *)0x0;
}
