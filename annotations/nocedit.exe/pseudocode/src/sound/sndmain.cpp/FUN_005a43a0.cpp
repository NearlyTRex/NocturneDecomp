// Name: sound_sndmain.cpp_FUN_005a43a0
// Address: 005a43a0
// Address Range: [[005a43a0, 005a43ff]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a43a0()
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064f54e
//   TerminatedCString s_SfxSlot_kill_must_be_loc_0064f563
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_SfxSlots[0].field7_0x74
//   undefined4 DAT_03f5dc40
//   undefined4 g_SfxSlots[2].field_116
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int sound_sndmain_cpp_FUN_005a43a0(undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1f6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!",unaff_EBX);
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = g_SfxSlots[0].field_116;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x49ff < iVar2 + 0x128) break;
    iVar1 = *(int *)(g_SfxSlots[1].field_124 + iVar2 + -8);
    iVar2 = iVar2 + 0x128;
  }
  return -1;
}


// Assembly code:
// 005a43a0: PUSH ESI
//   Label: sound_sndmain.cpp_FUN_005a43a0
// 005a43a1: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a43a8: JLE 0x005a43d2
//   XREF to: 005a43d2 (CONDITIONAL_JUMP)
// 005a43aa: MOV ESI,dword ptr [0x03f5db18]
//   Label: LAB_005a43aa
//   XREF to: 03f5db18 (READ)
// 005a43b0: XOR EAX,EAX
// 005a43b2: XOR EDX,EDX
// 005a43b4: TEST ESI,ESI
// 005a43b6: JZ 0x005a43ce
//   XREF to: 005a43ce (CONDITIONAL_JUMP)
// 005a43b8: ADD EAX,0x128
//   Label: LAB_005a43b8
// 005a43bd: INC EDX
// 005a43be: CMP EAX,0x4a00
// 005a43c3: JGE 0x005a43f9
//   XREF to: 005a43f9 (CONDITIONAL_JUMP)
// 005a43c5: CMP dword ptr [EAX + 0x3f5db18],0x0
//   XREF to: 03f5dc40 (READ)
//   XREF to: 03f5dd68 (READ)
// 005a43cc: JNZ 0x005a43b8
//   XREF to: 005a43b8 (CONDITIONAL_JUMP)
// 005a43ce: MOV EAX,EDX
//   Label: LAB_005a43ce
// 005a43d0: POP ESI
// 005a43d1: RET
// 005a43d2: PUSH EBX
//   Label: LAB_005a43d2
// 005a43d3: MOV ECX,0x64f54e
//   XREF to: 0064f54e (DATA)
// 005a43d8: MOV EBX,0x1f6
// 005a43dd: PUSH 0x64f563
//   XREF to: 0064f563 (DATA)
// 005a43e2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a43e8: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a43ee: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a43f3: ADD ESP,0x4
// 005a43f6: POP EBX
// 005a43f7: JMP 0x005a43aa
//   XREF to: 005a43aa (UNCONDITIONAL_JUMP)
// 005a43f9: MOV EAX,0xffffffff
//   Label: LAB_005a43f9
// 005a43fe: POP ESI
// 005a43ff: RET
