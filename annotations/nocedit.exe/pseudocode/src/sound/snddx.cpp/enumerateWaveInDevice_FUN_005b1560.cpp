// Name: sound_snddx.cpp_enumerateWaveInDevice_FUN_005b1560
// Address: 005b1560
// Address Range: [[005b1560, 005b15f1]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_enumerateWaveInDevice_FUN_005b1560(int device_id, SRecordingDeviceInfo * device_info)
// Cross-references:
//   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720 (005ab720) at 005ab757 [UNCONDITIONAL_CALL]
// Globals:
//   waveInGetDevCapsA* waveInGetDevCapsA = 002118b2
//   TerminatedCString s_WavIn_006524e6
// Function calls:
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   waveInGetDevCapsA

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_enumerateWaveInDevice_FUN_005b1560(int device_id,SRecordingDeviceInfo *device_info)

{
  char cVar1;
  MMRESULT MVar2;
  char *pcVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SRecordingDeviceInfo *pSVar5;
  char *pcVar6;
  byte bVar7;
  MMVERSION MStack_34;
  char acStack_1c [20];
  
  bVar7 = 0;
  MVar2 = (*waveInGetDevCapsA)(device_id,(LPWAVEINCAPSA)&stack0xffffffc8,0x30);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  MStack_34 = 0x5b159f;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavIn: ");
  pSVar5 = device_info;
  do {
    cVar1 = *pcVar3;
    pSVar5->device_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pSVar5->device_name[1] = cVar1;
    pSVar5 = (SRecordingDeviceInfo *)(pSVar5->device_name + 2);
  } while (cVar1 != '\0');
  pcVar3 = acStack_1c;
  iVar4 = -1;
  do {
    pSVar5 = device_info;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pSVar5 = (SRecordingDeviceInfo *)((int)device_info + (uint)bVar7 * -2 + 1);
    pcVar6 = device_info->device_name;
    device_info = pSVar5;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)((int)&pSVar5[-1].device_id + 3);
  do {
    cVar1 = *pcVar3;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return 1;
}


// Assembly code:
// 005b1560: PUSH EBX
//   Label: sound_snddx.cpp_enumerateWaveInDevice_FUN_005b1560
// 005b1561: PUSH ESI
// 005b1562: SUB ESP,0x30
// 005b1565: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005b1569: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 005b156d: PUSH 0x30
// 005b156f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x38] (DATA)
// 005b1573: PUSH EAX
// 005b1574: PUSH ESI
// 005b1575: CALL dword ptr CS:[0x611428]
//   XREF to: EXTERNAL:00000018 (COMPUTED_CALL)
//   XREF to: 00611428 (READ)
// 005b157c: TEST EAX,EAX
// 005b157e: JZ 0x005b1588
//   XREF to: 005b1588 (CONDITIONAL_JUMP)
// 005b1580: XOR EAX,EAX
// 005b1582: ADD ESP,0x30
// 005b1585: POP ESI
// 005b1586: POP EBX
// 005b1587: RET
// 005b1588: PUSH EDI
//   Label: LAB_005b1588
// 005b1589: MOV dword ptr [EBX + 0x100],EAX
// 005b158f: PUSH 0x6524e6
//   XREF to: 006524e6 (DATA)
// 005b1594: MOV dword ptr [EBX + 0x104],ESI
// 005b159a: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005b159f: ADD ESP,0x4
// 005b15a2: MOV EDI,EBX
// 005b15a4: MOV ESI,EAX
// 005b15a6: PUSH EDI
// 005b15a7: MOV AL,byte ptr [ESI]
//   Label: LAB_005b15a7
// 005b15a9: MOV byte ptr [EDI],AL
// 005b15ab: CMP AL,0x0
// 005b15ad: JZ 0x005b15bf
//   XREF to: 005b15bf (CONDITIONAL_JUMP)
// 005b15af: MOV AL,byte ptr [ESI + 0x1]
// 005b15b2: ADD ESI,0x2
// 005b15b5: MOV byte ptr [EDI + 0x1],AL
// 005b15b8: ADD EDI,0x2
// 005b15bb: CMP AL,0x0
// 005b15bd: JNZ 0x005b15a7
//   XREF to: 005b15a7 (CONDITIONAL_JUMP)
// 005b15bf: POP EDI
//   Label: LAB_005b15bf
// 005b15c0: LEA ESI,[ESP + 0xc]
// 005b15c4: PUSH EDI
// 005b15c5: SUB ECX,ECX
// 005b15c7: DEC ECX
// 005b15c8: MOV AL,0x0
// 005b15ca: SCASB.REPNE ES:EDI
// 005b15cc: DEC EDI
// 005b15cd: MOV AL,byte ptr [ESI]
//   Label: LAB_005b15cd
// 005b15cf: MOV byte ptr [EDI],AL
// 005b15d1: CMP AL,0x0
// 005b15d3: JZ 0x005b15e5
//   XREF to: 005b15e5 (CONDITIONAL_JUMP)
// 005b15d5: MOV AL,byte ptr [ESI + 0x1]
// 005b15d8: ADD ESI,0x2
// 005b15db: MOV byte ptr [EDI + 0x1],AL
// 005b15de: ADD EDI,0x2
// 005b15e1: CMP AL,0x0
// 005b15e3: JNZ 0x005b15cd
//   XREF to: 005b15cd (CONDITIONAL_JUMP)
// 005b15e5: POP EDI
//   Label: LAB_005b15e5
// 005b15e6: MOV EAX,0x1
// 005b15eb: POP EDI
// 005b15ec: ADD ESP,0x30
// 005b15ef: POP ESI
// 005b15f0: POP EBX
// 005b15f1: RET
