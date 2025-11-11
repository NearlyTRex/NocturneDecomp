// Name: sound_sndwav.cpp_enumerateWaveOutDevice_FUN_005b1470
// Address: 005b1470
// Address Range: [[005b1470, 005b150d]]
// Convention: __cdecl
// Signature: int sound_sndwav.cpp_enumerateWaveOutDevice_FUN_005b1470(int device_id, SSoundDeviceInfo * device_info)
// Cross-references:
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 (005ab2e0) at 005ab317 [UNCONDITIONAL_CALL]
// Globals:
//   waveOutGetDevCapsA* waveOutGetDevCapsA = 0021192e
//   TerminatedCString s_WavOutWrite_006524d8
// Function calls:
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   waveOutGetDevCapsA

#include "nocturne.h"

int __cdecl
sound_sndwav_cpp_enumerateWaveOutDevice_FUN_005b1470(int device_id,SSoundDeviceInfo *device_info)

{
  char cVar1;
  MMRESULT MVar2;
  char *pcVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SSoundDeviceInfo *pSVar5;
  char *pcVar6;
  byte bVar7;
  MMVERSION MStack_38;
  char acStack_20 [24];
  
  bVar7 = 0;
  MVar2 = (*waveOutGetDevCapsA)(device_id,(LPWAVEOUTCAPSA)&stack0xffffffc4,0x34);
  if (MVar2 != 0) {
    return 0;
  }
  device_info->api_type = 0;
  device_info->device_id = device_id;
  device_info->device_value1 = 0;
  device_info->flags = 0;
  MStack_38 = 0x5b14bb;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("WavOutWrite: ");
  pSVar5 = device_info;
  do {
    cVar1 = *pcVar3;
    pSVar5->device_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pSVar5->device_name[1] = cVar1;
    pSVar5 = (SSoundDeviceInfo *)(pSVar5->device_name + 2);
  } while (cVar1 != '\0');
  pcVar3 = acStack_20;
  iVar4 = -1;
  do {
    pSVar5 = device_info;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pSVar5 = (SSoundDeviceInfo *)((int)device_info + (uint)bVar7 * -2 + 1);
    pcVar6 = device_info->device_name;
    device_info = pSVar5;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)((int)&pSVar5[-1].device_value2 + 3);
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
// 005b1470: PUSH EBX
//   Label: sound_sndwav.cpp_enumerateWaveOutDevice_FUN_005b1470
// 005b1471: PUSH ESI
// 005b1472: SUB ESP,0x34
// 005b1475: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005b1479: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005b147d: PUSH 0x34
// 005b147f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c] (DATA)
// 005b1483: PUSH EAX
// 005b1484: PUSH ESI
// 005b1485: CALL dword ptr CS:[0x611444]
//   XREF to: EXTERNAL:0000001f (COMPUTED_CALL)
//   XREF to: 00611444 (READ)
// 005b148c: TEST EAX,EAX
// 005b148e: JZ 0x005b1498
//   XREF to: 005b1498 (CONDITIONAL_JUMP)
// 005b1490: XOR EAX,EAX
// 005b1492: ADD ESP,0x34
// 005b1495: POP ESI
// 005b1496: POP EBX
// 005b1497: RET
// 005b1498: PUSH EDI
//   Label: LAB_005b1498
// 005b1499: MOV dword ptr [EBX + 0x100],EAX
// 005b149f: MOV dword ptr [EBX + 0x104],ESI
// 005b14a5: MOV dword ptr [EBX + 0x108],EAX
// 005b14ab: PUSH 0x6524d8
//   XREF to: 006524d8 (DATA)
// 005b14b0: MOV dword ptr [EBX + 0x10c],EAX
// 005b14b6: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005b14bb: ADD ESP,0x4
// 005b14be: MOV EDI,EBX
// 005b14c0: MOV ESI,EAX
// 005b14c2: PUSH EDI
// 005b14c3: MOV AL,byte ptr [ESI]
//   Label: LAB_005b14c3
// 005b14c5: MOV byte ptr [EDI],AL
// 005b14c7: CMP AL,0x0
// 005b14c9: JZ 0x005b14db
//   XREF to: 005b14db (CONDITIONAL_JUMP)
// 005b14cb: MOV AL,byte ptr [ESI + 0x1]
// 005b14ce: ADD ESI,0x2
// 005b14d1: MOV byte ptr [EDI + 0x1],AL
// 005b14d4: ADD EDI,0x2
// 005b14d7: CMP AL,0x0
// 005b14d9: JNZ 0x005b14c3
//   XREF to: 005b14c3 (CONDITIONAL_JUMP)
// 005b14db: POP EDI
//   Label: LAB_005b14db
// 005b14dc: LEA ESI,[ESP + 0xc]
// 005b14e0: PUSH EDI
// 005b14e1: SUB ECX,ECX
// 005b14e3: DEC ECX
// 005b14e4: MOV AL,0x0
// 005b14e6: SCASB.REPNE ES:EDI
// 005b14e8: DEC EDI
// 005b14e9: MOV AL,byte ptr [ESI]
//   Label: LAB_005b14e9
// 005b14eb: MOV byte ptr [EDI],AL
// 005b14ed: CMP AL,0x0
// 005b14ef: JZ 0x005b1501
//   XREF to: 005b1501 (CONDITIONAL_JUMP)
// 005b14f1: MOV AL,byte ptr [ESI + 0x1]
// 005b14f4: ADD ESI,0x2
// 005b14f7: MOV byte ptr [EDI + 0x1],AL
// 005b14fa: ADD EDI,0x2
// 005b14fd: CMP AL,0x0
// 005b14ff: JNZ 0x005b14e9
//   XREF to: 005b14e9 (CONDITIONAL_JUMP)
// 005b1501: POP EDI
//   Label: LAB_005b1501
// 005b1502: MOV EAX,0x1
// 005b1507: POP EDI
// 005b1508: ADD ESP,0x34
// 005b150b: POP ESI
// 005b150c: POP EBX
// 005b150d: RET
