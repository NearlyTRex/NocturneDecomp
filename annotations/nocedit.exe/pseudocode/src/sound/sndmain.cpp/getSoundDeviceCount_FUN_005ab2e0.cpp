// Name: sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
// Address: 005ab2e0
// Address Range: [[005ab2e0, 005ab36d]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0(void)
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00512411 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0 (005ab3d0) at 005ab3d8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 (005ab370) at 005ab377 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abf66 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 (005ab4c0) at 005ab4d8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_writeIni_FUN_005ac220 (005ac220) at 005ac24e [UNCONDITIONAL_CALL]
// Globals:
//   int g_SoundDeviceCount = -0x1
//   SSoundDeviceInfo[8] g_SoundDevices
//   undefined4 g_SoundDevices[1].device_name[0]
//   undefined4 g_SoundDevices[2].device_name[0]
// Function calls:
//   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
//   sound_snddx.cpp_enumerateWaveOutDevice_FUN_005b1470
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < g_SoundDeviceCount) {
    return g_SoundDeviceCount;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  g_SoundDeviceCount = 0;
  iVar2 = 0;
  do {
    iVar1 = sound_snddx_cpp_enumerateWaveOutDevice_FUN_005b1470
                      (iVar2,g_SoundDevices + g_SoundDeviceCount);
    if (iVar1 == 0) break;
    g_SoundDeviceCount = g_SoundDeviceCount + 1;
    iVar2 = iVar2 + 1;
  } while (g_SoundDeviceCount < 8);
  iVar2 = 0;
  while ((g_SoundDeviceCount < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390
                            (iVar2,g_SoundDevices + g_SoundDeviceCount), iVar1 != 0))) {
    g_SoundDeviceCount = g_SoundDeviceCount + 1;
    iVar2 = iVar2 + 1;
  }
  return g_SoundDeviceCount;
}


// Assembly code:
// 005ab2e0: PUSH EBX
//   Label: sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
// 005ab2e1: MOV EBX,dword ptr [0x00681b20]
//   XREF to: 00681b20 (READ)
// 005ab2e7: TEST EBX,EBX
// 005ab2e9: JL 0x005ab2f5
//   XREF to: 005ab2f5 (CONDITIONAL_JUMP)
// 005ab2eb: MOV EAX,EBX
// 005ab2ed: MOV dword ptr [0x00681b20],EBX
//   XREF to: 00681b20 (WRITE)
// 005ab2f3: POP EBX
// 005ab2f4: RET
// 005ab2f5: PUSH ESI
//   Label: LAB_005ab2f5
// 005ab2f6: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005ab2fb: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005ab300: XOR EBX,EBX
// 005ab302: XOR ESI,ESI
// 005ab304: IMUL EAX,EBX,0x118
//   Label: LAB_005ab304
// 005ab30a: ADD EAX,0x3f689a8
//   XREF to: 03f689a8 (DATA)
// 005ab30f: PUSH EAX
//   XREF to: 03f689a8 (DATA)
//   XREF to: 03f68ac0 (DATA)
// 005ab310: PUSH ESI
// 005ab311: MOV dword ptr [0x00681b20],EBX
//   XREF to: 00681b20 (WRITE)
// 005ab317: CALL sound_snddx.cpp_enumerateWaveOutDevice_FUN_005b1470
//   XREF to: 005b1470 (UNCONDITIONAL_CALL)
// 005ab31c: MOV EBX,dword ptr [0x00681b20]
//   XREF to: 00681b20 (READ)
// 005ab322: ADD ESP,0x8
// 005ab325: TEST EAX,EAX
// 005ab327: JZ 0x005ab330
//   XREF to: 005ab330 (CONDITIONAL_JUMP)
// 005ab329: INC EBX
// 005ab32a: INC ESI
// 005ab32b: CMP EBX,0x8
// 005ab32e: JL 0x005ab304
//   XREF to: 005ab304 (CONDITIONAL_JUMP)
// 005ab330: XOR ESI,ESI
//   Label: LAB_005ab330
// 005ab332: CMP EBX,0x8
// 005ab335: JGE 0x005ab363
//   XREF to: 005ab363 (CONDITIONAL_JUMP)
// 005ab337: IMUL EAX,EBX,0x118
//   Label: LAB_005ab337
// 005ab33d: ADD EAX,0x3f689a8
//   XREF to: 03f689a8 (DATA)
// 005ab342: PUSH EAX
//   XREF to: 03f689a8 (DATA)
//   XREF to: 03f68ac0 (DATA)
//   XREF to: 03f68bd8 (DATA)
// 005ab343: PUSH ESI
// 005ab344: MOV dword ptr [0x00681b20],EBX
//   XREF to: 00681b20 (WRITE)
// 005ab34a: CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
//   XREF to: 005b0390 (UNCONDITIONAL_CALL)
// 005ab34f: MOV EBX,dword ptr [0x00681b20]
//   XREF to: 00681b20 (READ)
// 005ab355: ADD ESP,0x8
// 005ab358: TEST EAX,EAX
// 005ab35a: JZ 0x005ab363
//   XREF to: 005ab363 (CONDITIONAL_JUMP)
// 005ab35c: INC EBX
// 005ab35d: INC ESI
// 005ab35e: CMP EBX,0x8
// 005ab361: JL 0x005ab337
//   XREF to: 005ab337 (CONDITIONAL_JUMP)
// 005ab363: MOV EAX,EBX
//   Label: LAB_005ab363
// 005ab365: POP ESI
// 005ab366: MOV dword ptr [0x00681b20],EBX
//   XREF to: 00681b20 (WRITE)
// 005ab36c: POP EBX
// 005ab36d: RET
