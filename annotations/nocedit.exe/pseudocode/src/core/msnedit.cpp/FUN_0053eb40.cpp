// Name: core_msnedit.cpp_FUN_0053eb40
// Address: 0053eb40
// Address Range: [[0053eb40, 0053ec72]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053eb40()
// Cross-references:
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053afe4 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565e63 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Can_t_start_sound_output_0063d024
//   TerminatedCString s_Playing_s_0063d060
//   TerminatedCString s_Failed_to_play_s_0063d06b
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CSound* g_CSoundPtr = 03f6af64
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_CSound_playSound_FUN_005b3a20
//   core_sound.cpp_CSound_shutdown_FUN_005b2f70
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053eb40(undefined1 param_1, undefined4 param_2) */

void core_msnedit_cpp_FUN_0053eb40(void)

{
  int iVar1;
  uint sfx_handle;
  BADSPACEBASE *in_ESP;
  double dVar2;
  char *in_stack_00000008;
  CKeys *in_stack_fffffecc;
  
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't start sound output.  (Maybe muted, or other problem?)");
  }
  else {
    core_sound_cpp_CSound_playSound_FUN_005b3a20(g_CSoundPtr,(void *)0x0,in_stack_00000008);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(sfx_handle);
    if (iVar1 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Failed to play \"%s\"",in_stack_00000008);
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec8,"Playing %s",in_stack_00000008);
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,&stack0xfffffecc);
      do {
        dVar2 = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(2,(uint)in_stack_fffffecc);
        if ((float)dVar2 < 0.0) break;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)dVar2,1.0);
        in_stack_fffffecc = g_CKeysPtr;
        iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
      } while (iVar1 == 0);
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    }
  }
  core_sound_cpp_CSound_shutdown_FUN_005b2f70(g_CSoundPtr);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}


// Assembly code:
// 0053eb40: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053eb40
// 0053eb41: PUSH ESI
// 0053eb42: PUSH EDI
// 0053eb43: PUSH EBP
// 0053eb44: MOV EBP,ESP
// 0053eb46: SUB ESP,0x138
// 0053eb4c: AND ESP,0xfffffff8
// 0053eb4f: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053eb52: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0053eb58: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 0053eb59: CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70
//   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
// 0053eb5e: ADD ESP,0x4
// 0053eb61: CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
//   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
// 0053eb66: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 0053eb6b: TEST EAX,EAX
// 0053eb6d: JZ 0x0053ec46
//   XREF to: 0053ec46 (CONDITIONAL_JUMP)
// 0053eb73: PUSH EDI
// 0053eb74: PUSH 0x0
// 0053eb76: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0053eb7c: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 0053eb7d: CALL core_sound.cpp_CSound_playSound_FUN_005b3a20
//   XREF to: 005b3a20 (UNCONDITIONAL_CALL)
// 0053eb82: ADD ESP,0xc
// 0053eb85: MOV ESI,EAX
// 0053eb87: MOV EBX,EAX
// 0053eb89: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053eb8e: PUSH ESI
// 0053eb8f: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0053eb94: ADD ESP,0x4
// 0053eb97: TEST EAX,EAX
// 0053eb99: JZ 0x0053ec5c
//   XREF to: 0053ec5c (CONDITIONAL_JUMP)
// 0053eb9f: PUSH EDI
// 0053eba0: PUSH 0x63d060
//   XREF to: 0063d060 (DATA)
// 0053eba5: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x144] (DATA)
// 0053eba9: PUSH EAX
// 0053ebaa: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053ebaf: ADD ESP,0xc
// 0053ebb2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x144] (DATA)
// 0053ebb6: PUSH EAX
// 0053ebb7: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053ebbd: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0053ebbe: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0053ebc3: ADD ESP,0x8
// 0053ebc6: PUSH 0x2
//   Label: LAB_0053ebc6
// 0053ebc8: PUSH EBX
// 0053ebc9: CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
//   XREF to: 005a9720 (UNCONDITIONAL_CALL)
// 0053ebce: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0053ebd5: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0053ebdc: FLD double ptr [ESP + 0x138]
//   XREF to: Stack[-0x18] (READ)
// 0053ebe3: ADD ESP,0x8
// 0053ebe6: FST float ptr [ESP]
//   XREF to: Stack[-0x148] (DATA)
// 0053ebe9: FLDZ
// 0053ebeb: FCOMPP
// 0053ebed: FNSTSW AX
// 0053ebef: SAHF
// 0053ebf0: JA 0x0053ec1c
//   XREF to: 0053ec1c (CONDITIONAL_JUMP)
// 0053ebf2: PUSH 0x3f800000
// 0053ebf7: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ebfc: PUSH dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x148] (READ)
// 0053ec00: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0053ec01: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 0053ec06: ADD ESP,0xc
// 0053ec09: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0053ec0e: PUSH 0x1
// 0053ec10: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0053ec12: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0053ec13: CALL dword ptr [EDX]
// 0053ec15: ADD ESP,0x8
// 0053ec18: TEST EAX,EAX
// 0053ec1a: JZ 0x0053ebc6
//   XREF to: 0053ebc6 (CONDITIONAL_JUMP)
// 0053ec1c: MOV EDX,dword ptr [0x00678a60]
//   Label: LAB_0053ec1c
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053ec22: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053ec23: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0053ec28: ADD ESP,0x4
// 0053ec2b: MOV ECX,dword ptr [0x00681ef8]
//   Label: LAB_0053ec2b
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0053ec31: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 0053ec32: CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70
//   XREF to: 005b2f70 (UNCONDITIONAL_CALL)
// 0053ec37: ADD ESP,0x4
// 0053ec3a: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053ec3f: MOV ESP,EBP
// 0053ec41: POP EBP
// 0053ec42: POP EDI
// 0053ec43: POP ESI
// 0053ec44: POP EBX
// 0053ec45: RET
// 0053ec46: PUSH 0x63d024
//   Label: LAB_0053ec46
//   XREF to: 0063d024 (DATA)
// 0053ec4b: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053ec51: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053ec52: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053ec57: ADD ESP,0x8
// 0053ec5a: JMP 0x0053ec2b
//   XREF to: 0053ec2b (UNCONDITIONAL_JUMP)
// 0053ec5c: PUSH EDI
//   Label: LAB_0053ec5c
// 0053ec5d: PUSH 0x63d06b
//   XREF to: 0063d06b (DATA)
// 0053ec62: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053ec68: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0053ec69: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053ec6e: ADD ESP,0xc
// 0053ec71: JMP 0x0053ec2b
//   XREF to: 0053ec2b (UNCONDITIONAL_JUMP)
