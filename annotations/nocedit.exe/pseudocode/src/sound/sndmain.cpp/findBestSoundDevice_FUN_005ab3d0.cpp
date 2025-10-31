// Name: sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
// Address: 005ab3d0
// Address Range: [[005ab3d0, 005ab4b9]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0(void)
// Cross-references:
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 (005ab4c0) at 005ab4e1 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_findBestSoundDevice_FUN_005ab3d0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar2;
  SSoundDeviceInfo device_info2;
  SSoundDeviceInfo device_info3;
  SSoundDeviceInfo device_info1;
  int iStack_1c;
  
  iVar1 = sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&device_info1);
      if (device_info1.device_value1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&device_info2);
      if (((device_info2.api_type == 1) && (device_info2.device_guid != 0)) &&
         (device_info2.device_value2 == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,(SSoundDeviceInfo *)&stack0xfffffee4);
      if ((iStack_1c == 1) && (unaff_ESI == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(iVar2,&device_info3);
      if (device_info3.device_id == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}


// Assembly code:
// 005ab3d0: PUSH EBX
//   Label: sound_sndmain.cpp_findBestSoundDevice_FUN_005ab3d0
// 005ab3d1: PUSH ESI
// 005ab3d2: SUB ESP,0x460
// 005ab3d8: CALL sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
//   XREF to: 005ab2e0 (UNCONDITIONAL_CALL)
// 005ab3dd: MOV EBX,EAX
// 005ab3df: CMP EAX,0x1
// 005ab3e2: JL 0x005ab4aa
//   XREF to: 005ab4aa (CONDITIONAL_JUMP)
// 005ab3e8: XOR ESI,ESI
// 005ab3ea: TEST EAX,EAX
// 005ab3ec: JLE 0x005ab412
//   XREF to: 005ab412 (CONDITIONAL_JUMP)
// 005ab3ee: LEA EAX,[ESP + 0x230]
//   Label: LAB_005ab3ee
//   XREF to: Stack[-0x238] (DATA)
// 005ab3f5: PUSH EAX
// 005ab3f6: PUSH ESI
// 005ab3f7: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005ab3fc: ADD ESP,0x8
// 005ab3ff: CMP dword ptr [ESP + 0x338],0x0
//   XREF to: Stack[-0x130] (READ)
// 005ab407: JNZ 0x005ab49f
//   XREF to: 005ab49f (CONDITIONAL_JUMP)
// 005ab40d: INC ESI
// 005ab40e: CMP ESI,EBX
// 005ab410: JL 0x005ab3ee
//   XREF to: 005ab3ee (CONDITIONAL_JUMP)
// 005ab412: XOR ESI,ESI
//   Label: LAB_005ab412
// 005ab414: TEST EBX,EBX
// 005ab416: JLE 0x005ab447
//   XREF to: 005ab447 (CONDITIONAL_JUMP)
// 005ab418: MOV EAX,ESP
//   Label: LAB_005ab418
// 005ab41a: PUSH EAX
// 005ab41b: PUSH ESI
// 005ab41c: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005ab421: ADD ESP,0x8
// 005ab424: CMP dword ptr [ESP + 0x100],0x1
//   XREF to: Stack[-0x368] (READ)
// 005ab42c: JNZ 0x005ab442
//   XREF to: 005ab442 (CONDITIONAL_JUMP)
// 005ab42e: CMP dword ptr [ESP + 0x110],0x0
//   XREF to: Stack[-0x358] (READ)
// 005ab436: JZ 0x005ab442
//   XREF to: 005ab442 (CONDITIONAL_JUMP)
// 005ab438: CMP dword ptr [ESP + 0x114],0x0
//   XREF to: Stack[-0x354] (READ)
// 005ab440: JZ 0x005ab49f
//   XREF to: 005ab49f (CONDITIONAL_JUMP)
// 005ab442: INC ESI
//   Label: LAB_005ab442
// 005ab443: CMP ESI,EBX
// 005ab445: JL 0x005ab418
//   XREF to: 005ab418 (CONDITIONAL_JUMP)
// 005ab447: XOR ESI,ESI
//   Label: LAB_005ab447
// 005ab449: TEST EBX,EBX
// 005ab44b: JLE 0x005ab477
//   XREF to: 005ab477 (CONDITIONAL_JUMP)
// 005ab44d: LEA EAX,[ESP + 0x348]
//   Label: LAB_005ab44d
//   XREF to: Stack[-0x120] (DATA)
// 005ab454: PUSH EAX
// 005ab455: PUSH ESI
// 005ab456: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005ab45b: ADD ESP,0x8
// 005ab45e: CMP dword ptr [ESP + 0x448],0x1
//   XREF to: Stack[-0x20] (READ)
// 005ab466: JNZ 0x005ab472
//   XREF to: 005ab472 (CONDITIONAL_JUMP)
// 005ab468: CMP dword ptr [ESP + 0x45c],0x0
//   XREF to: Stack[-0xc] (READ)
// 005ab470: JZ 0x005ab49f
//   XREF to: 005ab49f (CONDITIONAL_JUMP)
// 005ab472: INC ESI
//   Label: LAB_005ab472
// 005ab473: CMP ESI,EBX
// 005ab475: JL 0x005ab44d
//   XREF to: 005ab44d (CONDITIONAL_JUMP)
// 005ab477: XOR ESI,ESI
//   Label: LAB_005ab477
// 005ab479: TEST EBX,EBX
// 005ab47b: JLE 0x005ab49d
//   XREF to: 005ab49d (CONDITIONAL_JUMP)
// 005ab47d: LEA EAX,[ESP + 0x118]
//   Label: LAB_005ab47d
//   XREF to: Stack[-0x350] (DATA)
// 005ab484: PUSH EAX
// 005ab485: PUSH ESI
// 005ab486: CALL sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370
//   XREF to: 005ab370 (UNCONDITIONAL_CALL)
// 005ab48b: ADD ESP,0x8
// 005ab48e: CMP dword ptr [ESP + 0x218],0x0
//   XREF to: Stack[-0x250] (READ)
// 005ab496: JZ 0x005ab49f
//   XREF to: 005ab49f (CONDITIONAL_JUMP)
// 005ab498: INC ESI
// 005ab499: CMP ESI,EBX
// 005ab49b: JL 0x005ab47d
//   XREF to: 005ab47d (CONDITIONAL_JUMP)
// 005ab49d: XOR ESI,ESI
//   Label: LAB_005ab49d
// 005ab49f: MOV EAX,ESI
//   Label: LAB_005ab49f
// 005ab4a1: ADD ESP,0x460
// 005ab4a7: POP ESI
// 005ab4a8: POP EBX
// 005ab4a9: RET
// 005ab4aa: MOV ESI,0xffffffff
//   Label: LAB_005ab4aa
// 005ab4af: MOV EAX,ESI
// 005ab4b1: ADD ESP,0x460
// 005ab4b7: POP ESI
// 005ab4b8: POP EBX
// 005ab4b9: RET
