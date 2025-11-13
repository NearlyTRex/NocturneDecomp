// Name: sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440
// Address: 005b0440
// Address Range: [[005b0440, 005b066a]]
// Convention: __cdecl
// Signature: CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)
// Cross-references:
//   sound_sndmain.cpp_FUN_005ab5b0 (005ab5b0) at 005ab62c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_create_DirectSound_objec_006522bb
//   TerminatedCString s_Set_cooperative_level_006522d5
//   TerminatedCString s_Create_the_primary_buffe_006522eb
//   TerminatedCString s_Create_the_primary_buffe_00652305
//   undefined4 DAT_00686d58
//   SDirectSoundDeviceInfo[8] g_DirectSoundDevices
//   undefined4 g_DirectSoundDevices[0].value1
//   IDirectSound* g_DirectSound
//   IDirectSoundBuffer* g_DirectSoundPrimaryBuffer
//   undefined4 DAT_03f6a9bc
//   CDirectSoundDevice g_CDirectSoundDeviceInstance
//   HWND g_MainWindowHandle
// Function calls:
//   crt_dsound.c_DirectSoundCreate
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270
//   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)

{
  CDirectSoundDevice *pCVar1;
  HRESULT HVar2;
  char *pcVar3;
  int iVar4;
  LPGUID lpGuid;
  BADSPACEBASE *in_ESP;
  char acStack_778 [400];
  char acStack_5e8 [400];
  char acStack_458 [400];
  char acStack_2c8 [400];
  SSoundDeviceInfo local_138;
  undefined4 uStack_20;
  uint uStack_1c;
  
  pCVar1 = (CDirectSoundDevice *)
           sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(&g_CDirectSoundDeviceInstance);
  if (pCVar1 != (CDirectSoundDevice *)0x0) {
    pCVar1 = (CDirectSoundDevice *)
             sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390(device_id,&local_138);
    if (pCVar1 != (CDirectSoundDevice *)0x0) {
      lpGuid = (LPGUID)0x0;
      if (g_DirectSoundDevices[device_id].device_id_part == 0) {
        lpGuid = (LPGUID)g_DirectSoundDevices[device_id].field_4;
      }
      HVar2 = crt_dsound_c_DirectSoundCreate(lpGuid,&g_DirectSound,(LPUNKNOWN)0x0);
      if (HVar2 == 0) {
        iVar4 = (*(code *)g_DirectSound->vtable[6])();
        if (iVar4 == 0) {
          crt_memory_c_memset_FUN_005fde40(&uStack_20,0,0x14);
          uStack_20 = 0x14;
          uStack_1c = 0x11;
          iVar4 = (*(code *)g_DirectSound->vtable[3])();
          if (iVar4 != 0) {
            pcVar3 = sound_snddx_cpp_FUN_005ade70();
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_778,"DirectSux: Unable to %s.  (%s)",
                       "Create the primary buffer",pcVar3);
            sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_778);
            uStack_1c = uStack_1c & 0xffffffef;
            iVar4 = (*(code *)g_DirectSound->vtable[3])();
            if (iVar4 != 0) {
              pcVar3 = sound_snddx_cpp_FUN_005ade70();
              crt_stdio_c_sprintf_FUN_005fdbd0
                        (acStack_458,"DirectSux: Unable to %s.  (%s)",
                         "Create the primary buffer",pcVar3);
              pcVar3 = acStack_458;
              goto LAB_005b04e1;
            }
          }
          iVar4 = sound_sndmain_cpp_getHardwareMixingEnabled_FUN_005ab590();
          if ((iVar4 != 0) && (g_DirectSoundDevices[device_id].value1 != 0)) {
                    /* WARNING: Load size is inaccurate */
            (**g_DirectSoundPrimaryBuffer->field0_0x0)();
          }
          return &g_CDirectSoundDeviceInstance;
        }
        pcVar3 = sound_snddx_cpp_FUN_005ade70();
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_2c8,"DirectSux: Unable to %s.  (%s)","Set cooperative level",
                   pcVar3);
        pcVar3 = acStack_2c8;
      }
      else {
        pcVar3 = sound_snddx_cpp_FUN_005ade70();
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_5e8,"DirectSux: Unable to %s.  (%s)",
                   "create DirectSound object",pcVar3);
        pcVar3 = acStack_5e8;
      }
LAB_005b04e1:
      sound_sndmain_cpp_logSoundError_FUN_005adba0(pcVar3);
      sound_snddx_cpp_CDirectSoundDevice_close_FUN_005ae270(&g_CDirectSoundDeviceInstance);
      return (CDirectSoundDevice *)0x0;
    }
  }
  return pCVar1;
}


// Assembly code:
// 005b0440: PUSH EBX
//   Label: sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440
// 005b0441: PUSH ESI
// 005b0442: PUSH EDI
// 005b0443: SUB ESP,0x76c
// 005b0449: MOV EBX,dword ptr [ESP + 0x77c]
//   XREF to: Stack[0x4] (READ)
// 005b0450: PUSH 0x3f6ad30
//   XREF to: 03f6ad30 (DATA)
// 005b0455: CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270
//   XREF to: 005ae270 (UNCONDITIONAL_CALL)
// 005b045a: ADD ESP,0x4
// 005b045d: TEST EAX,EAX
// 005b045f: JNZ 0x005b046b
//   XREF to: 005b046b (CONDITIONAL_JUMP)
// 005b0461: ADD ESP,0x76c
//   Label: LAB_005b0461
// 005b0467: POP EDI
// 005b0468: POP ESI
// 005b0469: POP EBX
// 005b046a: RET
// 005b046b: LEA EAX,[ESP + 0x640]
//   Label: LAB_005b046b
//   XREF to: Stack[-0x138] (DATA)
// 005b0472: PUSH EAX
// 005b0473: PUSH EBX
// 005b0474: CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
//   XREF to: 005b0390 (UNCONDITIONAL_CALL)
// 005b0479: ADD ESP,0x8
// 005b047c: TEST EAX,EAX
// 005b047e: JZ 0x005b0461
//   XREF to: 005b0461 (CONDITIONAL_JUMP)
// 005b0480: LEA EAX,[EBX*0x8 + 0x0]
// 005b0487: ADD EAX,EBX
// 005b0489: SHL EAX,0x3
// 005b048c: SUB EAX,EBX
// 005b048e: SHL EAX,0x2
// 005b0491: MOV EDX,dword ptr [EAX + 0x3f69c60]
//   XREF to: 03f69c60 (DATA)
// 005b0497: XOR ECX,ECX
// 005b0499: TEST EDX,EDX
// 005b049b: JNZ 0x005b04a5
//   XREF to: 005b04a5 (CONDITIONAL_JUMP)
// 005b049d: ADD EAX,0x3f69c60
//   XREF to: 03f69c60 (DATA)
// 005b04a2: LEA ECX,[EAX + 0x4]
// 005b04a5: PUSH 0x0
//   Label: LAB_005b04a5
// 005b04a7: PUSH 0x3f6a9b0
//   XREF to: 03f6a9b0 (DATA)
// 005b04ac: PUSH ECX
// 005b04ad: CALL crt_dsound.c_DirectSoundCreate
//   XREF to: 00610f40 (UNCONDITIONAL_CALL)
// 005b04b2: TEST EAX,EAX
// 005b04b4: JZ 0x005b0503
//   XREF to: 005b0503 (CONDITIONAL_JUMP)
// 005b04b6: PUSH EAX
// 005b04b7: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005b04bc: ADD ESP,0x4
// 005b04bf: PUSH EAX
// 005b04c0: PUSH 0x6522bb
//   XREF to: 006522bb (DATA)
// 005b04c5: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b04ca: LEA EAX,[ESP + 0x19c]
// 005b04d1: PUSH EAX
// 005b04d2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b04d7: ADD ESP,0x10
// 005b04da: LEA EAX,[ESP + 0x190]
// 005b04e1: PUSH EAX
//   Label: LAB_005b04e1
// 005b04e2: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b04e7: ADD ESP,0x4
// 005b04ea: PUSH 0x3f6ad30
//   XREF to: 03f6ad30 (DATA)
// 005b04ef: CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270
//   XREF to: 005ae270 (UNCONDITIONAL_CALL)
// 005b04f4: ADD ESP,0x4
// 005b04f7: XOR EAX,EAX
// 005b04f9: ADD ESP,0x76c
// 005b04ff: POP EDI
// 005b0500: POP ESI
// 005b0501: POP EBX
// 005b0502: RET
// 005b0503: PUSH 0x2
//   Label: LAB_005b0503
// 005b0505: MOV ECX,dword ptr [0x03f98468]
//   XREF to: 03f98468 (READ)
// 005b050b: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005b0510: PUSH ECX
// 005b0511: MOV EDX,dword ptr [EAX]
// 005b0513: PUSH EAX
// 005b0514: CALL dword ptr [EDX + 0x18]
// 005b0517: TEST EAX,EAX
// 005b0519: JNZ 0x005b05ac
//   XREF to: 005b05ac (CONDITIONAL_JUMP)
// 005b051f: PUSH 0x14
// 005b0521: PUSH EAX
// 005b0522: LEA EAX,[ESP + 0x760]
// 005b0529: PUSH EAX
// 005b052a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005b052f: ADD ESP,0xc
// 005b0532: MOV ESI,0x14
// 005b0537: MOV EDI,0x11
// 005b053c: PUSH 0x0
// 005b053e: LEA EDX,[ESP + 0x75c]
// 005b0545: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005b054a: PUSH 0x3f6a9b4
//   XREF to: 03f6a9b4 (DATA)
// 005b054f: MOV dword ptr [ESP + 0x760],ESI
// 005b0556: MOV dword ptr [ESP + 0x764],EDI
// 005b055d: PUSH EDX
// 005b055e: MOV ECX,dword ptr [EAX]
// 005b0560: PUSH EAX
// 005b0561: CALL dword ptr [ECX + 0xc]
// 005b0564: TEST EAX,EAX
// 005b0566: JNZ 0x005b05dc
//   XREF to: 005b05dc (CONDITIONAL_JUMP)
// 005b0568: CALL sound_sndmain.cpp_getHardwareMixingEnabled_FUN_005ab590
//   Label: LAB_005b0568
//   XREF to: 005ab590 (UNCONDITIONAL_CALL)
// 005b056d: TEST EAX,EAX
// 005b056f: JZ 0x005b059d
//   XREF to: 005b059d (CONDITIONAL_JUMP)
// 005b0571: LEA EAX,[EBX*0x8 + 0x0]
// 005b0578: ADD EAX,EBX
// 005b057a: SHL EAX,0x3
// 005b057d: SUB EAX,EBX
// 005b057f: CMP dword ptr [EAX*0x4 + 0x3f69d78],0x0
//   XREF to: 03f69d78 (DATA)
// 005b0587: JZ 0x005b059d
//   XREF to: 005b059d (CONDITIONAL_JUMP)
// 005b0589: PUSH 0x3f6a9bc
//   XREF to: 03f6a9bc (DATA)
// 005b058e: MOV EAX,[0x03f6a9b4]
//   XREF to: 03f6a9b4 (READ)
// 005b0593: PUSH 0x686d58
//   XREF to: 00686d58 (DATA)
// 005b0598: MOV EDX,dword ptr [EAX]
// 005b059a: PUSH EAX
// 005b059b: CALL dword ptr [EDX]
// 005b059d: MOV EAX,0x3f6ad30
//   Label: LAB_005b059d
//   XREF to: 03f6ad30 (DATA)
// 005b05a2: ADD ESP,0x76c
// 005b05a8: POP EDI
// 005b05a9: POP ESI
// 005b05aa: POP EBX
// 005b05ab: RET
// 005b05ac: PUSH EAX
//   Label: LAB_005b05ac
// 005b05ad: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005b05b2: ADD ESP,0x4
// 005b05b5: PUSH EAX
// 005b05b6: PUSH 0x6522d5
//   XREF to: 006522d5 (DATA)
// 005b05bb: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b05c0: LEA EAX,[ESP + 0x4bc]
// 005b05c7: PUSH EAX
// 005b05c8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b05cd: ADD ESP,0x10
// 005b05d0: LEA EAX,[ESP + 0x4b0]
// 005b05d7: JMP 0x005b04e1
//   XREF to: 005b04e1 (UNCONDITIONAL_JUMP)
// 005b05dc: PUSH EAX
//   Label: LAB_005b05dc
// 005b05dd: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005b05e2: ADD ESP,0x4
// 005b05e5: PUSH EAX
// 005b05e6: PUSH 0x6522eb
//   XREF to: 006522eb (DATA)
// 005b05eb: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b05f0: LEA EAX,[ESP + 0xc]
// 005b05f4: PUSH EAX
// 005b05f5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b05fa: ADD ESP,0x10
// 005b05fd: MOV EAX,ESP
// 005b05ff: PUSH EAX
// 005b0600: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005b0605: ADD ESP,0x4
// 005b0608: PUSH 0x0
// 005b060a: MOV AH,byte ptr [ESP + 0x760]
// 005b0611: PUSH 0x3f6a9b4
//   XREF to: 03f6a9b4 (DATA)
// 005b0616: LEA EDX,[ESP + 0x760]
// 005b061d: AND AH,0xef
// 005b0620: PUSH EDX
// 005b0621: MOV byte ptr [ESP + 0x768],AH
// 005b0628: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005b062d: PUSH EAX
// 005b062e: MOV ECX,dword ptr [EAX]
// 005b0630: CALL dword ptr [ECX + 0xc]
// 005b0633: TEST EAX,EAX
// 005b0635: JZ 0x005b0568
//   XREF to: 005b0568 (CONDITIONAL_JUMP)
// 005b063b: PUSH EAX
// 005b063c: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005b0641: ADD ESP,0x4
// 005b0644: PUSH EAX
// 005b0645: PUSH 0x652305
//   XREF to: 00652305 (DATA)
// 005b064a: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005b064f: LEA EAX,[ESP + 0x32c]
// 005b0656: PUSH EAX
// 005b0657: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005b065c: ADD ESP,0x10
// 005b065f: LEA EAX,[ESP + 0x320]
// 005b0666: JMP 0x005b04e1
//   XREF to: 005b04e1 (UNCONDITIONAL_JUMP)
