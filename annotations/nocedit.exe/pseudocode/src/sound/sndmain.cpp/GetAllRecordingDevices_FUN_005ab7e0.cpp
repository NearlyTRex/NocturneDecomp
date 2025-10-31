// Name: sound_sndmain.cpp_GetAllRecordingDevices_FUN_005ab7e0
// Address: 005ab7e0
// Address Range: [[005ab7e0, 005ab857]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_GetAllRecordingDevices_FUN_005ab7e0()
// Cross-references:
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 (005ab860) at 005ab881 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
//   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_GetAllRecordingDevices() */

int sound_sndmain_cpp_GetAllRecordingDevices_FUN_005ab7e0(void)

{
  int iVar1;
  int iVar2;
  int local_110;
  int iStack_c;
  
  iVar1 = sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720();
  if (iVar1 < 1) {
    return -1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780();
      if (iStack_c == 1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      sound_sndmain_cpp_getRecordingDeviceInfo_FUN_005ab780();
      if (local_110 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}


// Assembly code:
// 005ab7e0: PUSH EBX
//   Label: sound_sndmain.cpp_GetAllRecordingDevices_FUN_005ab7e0
// 005ab7e1: PUSH ESI
// 005ab7e2: SUB ESP,0x210
// 005ab7e8: CALL sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
//   XREF to: 005ab720 (UNCONDITIONAL_CALL)
// 005ab7ed: MOV ESI,EAX
// 005ab7ef: CMP EAX,0x1
// 005ab7f2: JL 0x005ab848
//   XREF to: 005ab848 (CONDITIONAL_JUMP)
// 005ab7f4: XOR EBX,EBX
// 005ab7f6: TEST EAX,EAX
// 005ab7f8: JLE 0x005ab81a
//   XREF to: 005ab81a (CONDITIONAL_JUMP)
// 005ab7fa: LEA EAX,[ESP + 0x108]
//   Label: LAB_005ab7fa
//   XREF to: Stack[-0x110] (DATA)
// 005ab801: PUSH EAX
// 005ab802: PUSH EBX
// 005ab803: CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
//   XREF to: 005ab780 (UNCONDITIONAL_CALL)
// 005ab808: ADD ESP,0x8
// 005ab80b: CMP dword ptr [ESP + 0x208],0x1
//   XREF to: Stack[-0x10] (READ)
// 005ab813: JZ 0x005ab83d
//   XREF to: 005ab83d (CONDITIONAL_JUMP)
// 005ab815: INC EBX
// 005ab816: CMP EBX,ESI
// 005ab818: JL 0x005ab7fa
//   XREF to: 005ab7fa (CONDITIONAL_JUMP)
// 005ab81a: XOR EBX,EBX
//   Label: LAB_005ab81a
// 005ab81c: TEST ESI,ESI
// 005ab81e: JLE 0x005ab83b
//   XREF to: 005ab83b (CONDITIONAL_JUMP)
// 005ab820: MOV EAX,ESP
//   Label: LAB_005ab820
// 005ab822: PUSH EAX
// 005ab823: PUSH EBX
// 005ab824: CALL sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780
//   XREF to: 005ab780 (UNCONDITIONAL_CALL)
// 005ab829: ADD ESP,0x8
// 005ab82c: CMP dword ptr [ESP + 0x100],0x0
//   XREF to: Stack[-0x118] (READ)
// 005ab834: JZ 0x005ab83d
//   XREF to: 005ab83d (CONDITIONAL_JUMP)
// 005ab836: INC EBX
// 005ab837: CMP EBX,ESI
// 005ab839: JL 0x005ab820
//   XREF to: 005ab820 (CONDITIONAL_JUMP)
// 005ab83b: XOR EBX,EBX
//   Label: LAB_005ab83b
// 005ab83d: MOV EAX,EBX
//   Label: LAB_005ab83d
// 005ab83f: ADD ESP,0x210
// 005ab845: POP ESI
// 005ab846: POP EBX
// 005ab847: RET
// 005ab848: MOV EBX,0xffffffff
//   Label: LAB_005ab848
// 005ab84d: MOV EAX,EBX
// 005ab84f: ADD ESP,0x210
// 005ab855: POP ESI
// 005ab856: POP EBX
// 005ab857: RET
