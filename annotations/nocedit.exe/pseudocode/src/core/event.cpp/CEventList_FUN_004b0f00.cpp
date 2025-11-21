// Name: core_event.cpp_CEventList_FUN_004b0f00
// Address: 004b0f00
// Address Range: [[004b0f00, 004b0f89]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0f00(CEventList * this_ptr)
// Cross-references:
//   core_sound.cpp_CSound_init_FUN_005b2dd0 (005b2dd0) at 005b2f40 [UNCONDITIONAL_CALL]
// Function calls:
//   core_event.cpp_CEventList_FUN_004b0db0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
//   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0f00(CEventList *this_ptr)

{
  uint uVar1;
  int iVar2;
  CEvent *pCVar3;
  CEvent *filename;
  CEvent *pCVar4;
  
  iVar2 = 0;
  if (0 < this_ptr[1].event_count) {
    pCVar4 = this_ptr[1].event_list;
    filename = this_ptr[1].event_list + 0x18;
    do {
      pCVar3 = pCVar4 + iVar2 * 0x120;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(*(double *)(pCVar3 + 0x118),1);
      sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(1);
      pCVar4 = filename;
      uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)filename);
      iVar2 = iVar2 + 1;
      *(uint *)pCVar3 = uVar1;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      filename = filename + 0x120;
    } while (iVar2 < this_ptr[1].event_count);
  }
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  return;
}


// Assembly code:
// 004b0f00: PUSH EBX
//   Label: core_event.cpp_CEventList_FUN_004b0f00
// 004b0f01: PUSH EBP
// 004b0f02: SUB ESP,0x4
// 004b0f05: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004b0f09: MOV EDX,dword ptr [EBP + 0x3ac8]
// 004b0f0f: XOR EBX,EBX
// 004b0f11: TEST EDX,EDX
// 004b0f13: JLE 0x004b0f7b
//   XREF to: 004b0f7b (CONDITIONAL_JUMP)
// 004b0f15: PUSH EDI
// 004b0f16: PUSH ESI
// 004b0f17: LEA EAX,[EBP + 0x3acc]
// 004b0f1d: LEA EDI,[EBP + 0x3ae4]
// 004b0f23: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004b0f27: IMUL ESI,EBX,0x120
//   Label: LAB_004b0f27
// 004b0f2d: ADD ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004b0f31: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 004b0f36: PUSH 0x1
// 004b0f38: MOV EAX,dword ptr [ESI + 0x11c]
// 004b0f3e: PUSH EAX
// 004b0f3f: MOV EDX,dword ptr [ESI + 0x118]
// 004b0f45: PUSH EDX
// 004b0f46: CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
//   XREF to: 005a8be0 (UNCONDITIONAL_CALL)
// 004b0f4b: ADD ESP,0xc
// 004b0f4e: PUSH 0x1
// 004b0f50: CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90
//   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
// 004b0f55: ADD ESP,0x4
// 004b0f58: PUSH EDI
// 004b0f59: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 004b0f5e: ADD ESP,0x4
// 004b0f61: INC EBX
// 004b0f62: MOV dword ptr [ESI],EAX
// 004b0f64: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 004b0f69: MOV ECX,dword ptr [EBP + 0x3ac8]
// 004b0f6f: ADD EDI,0x120
// 004b0f75: CMP EBX,ECX
// 004b0f77: JL 0x004b0f27
//   XREF to: 004b0f27 (CONDITIONAL_JUMP)
// 004b0f79: POP ESI
// 004b0f7a: POP EDI
// 004b0f7b: PUSH EBP
//   Label: LAB_004b0f7b
// 004b0f7c: CALL core_event.cpp_CEventList_FUN_004b0db0
//   XREF to: 004b0db0 (UNCONDITIONAL_CALL)
// 004b0f81: ADD ESP,0x4
// 004b0f84: ADD ESP,0x4
// 004b0f87: POP EBP
// 004b0f88: POP EBX
// 004b0f89: RET
