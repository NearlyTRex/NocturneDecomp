// Name: core_filmreel.cpp_CFilmProjector_load_FUN_004beb40
// Address: 004beb40
// Address Range: [[004beb40, 004beccc]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_CFilmProjector_load_FUN_004beb40()
// Globals:
//   TerminatedCString s_s_35_loop_wav_00629b58
//   TerminatedCString s_core_filmreel_cpp_00629b64
//   TerminatedCString s_CFilmProjector_Need_to_p_00629b79
//   TerminatedCString s_s_35_start_wav_00629ba8
//   TerminatedCString s_s_35_end_wav_00629bb5
//   double DOUBLE_00629bc5 = 3.14159265350000
//   CFilterFx* g_CFilterFXPtr = 020a570c
//   CEventList* g_CEventListPtr = 02d05310
//   CFilterFx g_CFilterFXInstance
//   CEventList g_CEventListInstance
//   undefined4 g_CFilmReelClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_dest.cpp_FUN_0046f9b0
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
//   core_event.cpp_CEventList_FUN_004aabe0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_killSfx_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_CFilmProjector_load(CFilmProjector* param_1,
   undefined4 param_2) */

void core_filmreel_cpp_CFilmProjector_load_FUN_004beb40(void)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  undefined4 uVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x184) == 0) {
    if (*(int *)(in_stack_00000004 + 0x3dc) != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0x3e0));
      uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      *(undefined4 *)(in_stack_00000004 + 0x3e0) = uVar4;
    }
  }
  else {
    fVar1 = (float)DOUBLE_00629bc5;
    *(float *)(*(int *)(in_stack_00000004 + 0x158) + 0x38) =
         *(float *)(*(int *)(in_stack_00000004 + 0x158) + 0x38) - in_stack_00000008 * fVar1;
    *(float *)(in_stack_00000004 + 0x3d8) =
         *(float *)(in_stack_00000004 + 0x3d8) - in_stack_00000008 * fVar1;
    if (*(int *)(in_stack_00000004 + 0x3dc) == 0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004 + 0x158),
                          g_CFilmReelClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\filmreel.cpp";
        g_CurrentLineNumber = 0x11e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730
                (g_CFilterFXPtr,(char *)&pCVar3[2].location.position.z);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0x3e0));
      uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      *(undefined4 *)(in_stack_00000004 + 0x3e0) = uVar4;
    }
    else {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0x3e0));
      if (iVar2 == 0) {
        uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(undefined4 *)(in_stack_00000004 + 0x3e0) = uVar4;
      }
    }
    if (*(int *)(in_stack_00000004 + 0x370) == *(int *)(in_stack_00000004 + 0x158)) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0x3dc) = *(undefined4 *)(in_stack_00000004 + 0x184);
  core_dest_cpp_FUN_0046f9b0();
  return;
}


// Assembly code:
// 004beb40: PUSH EBX
//   Label: core_filmreel.cpp_CFilmProjector_load_FUN_004beb40
// 004beb41: PUSH ESI
// 004beb42: PUSH EDI
// 004beb43: PUSH EBP
// 004beb44: SUB ESP,0x10
// 004beb47: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004beb4b: MOV EDX,dword ptr [EBX + 0x184]
// 004beb51: TEST EDX,EDX
// 004beb53: JNZ 0x004beb83
//   XREF to: 004beb83 (CONDITIONAL_JUMP)
// 004beb55: CMP dword ptr [EBX + 0x3dc],0x0
// 004beb5c: JNZ 0x004bec91
//   XREF to: 004bec91 (CONDITIONAL_JUMP)
// 004beb62: PUSH dword ptr [ESP + 0x28]
//   Label: LAB_004beb62
//   XREF to: Stack[0x8] (READ)
// 004beb66: MOV EAX,dword ptr [EBX + 0x184]
// 004beb6c: PUSH EBX
// 004beb6d: MOV dword ptr [EBX + 0x3dc],EAX
// 004beb73: CALL core_dest.cpp_FUN_0046f9b0
//   XREF to: 0046f9b0 (UNCONDITIONAL_CALL)
// 004beb78: ADD ESP,0x8
// 004beb7b: ADD ESP,0x10
// 004beb7e: POP EBP
// 004beb7f: POP EDI
// 004beb80: POP ESI
// 004beb81: POP EBX
// 004beb82: RET
// 004beb83: FLD float ptr [ESP + 0x28]
//   Label: LAB_004beb83
//   XREF to: Stack[0x8] (READ)
// 004beb87: MOV EAX,dword ptr [EBX + 0x158]
// 004beb8d: FMUL double ptr [0x00629bc5]
//   XREF to: 00629bc5 (READ)
// 004beb93: FLD float ptr [EAX + 0x38]
// 004beb96: FLD ST0
// 004beb98: FSUB ST0,ST2
// 004beb9a: FSTP ST1
// 004beb9c: FSTP float ptr [EAX + 0x38]
// 004beb9f: FLD float ptr [EBX + 0x3d8]
// 004beba5: FSUBR ST1,ST0
// 004beba7: MOV EBP,dword ptr [EBX + 0x3dc]
// 004bebad: FXCH
// 004bebaf: FSTP ST1
// 004bebb1: FSTP float ptr [EBX + 0x3d8]
// 004bebb7: TEST EBP,EBP
// 004bebb9: JZ 0x004bec11
//   XREF to: 004bec11 (CONDITIONAL_JUMP)
// 004bebbb: MOV EDX,dword ptr [EBX + 0x3e0]
// 004bebc1: PUSH EDX
// 004bebc2: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004bebc7: ADD ESP,0x4
// 004bebca: TEST EAX,EAX
// 004bebcc: JZ 0x004bebf7
//   XREF to: 004bebf7 (CONDITIONAL_JUMP)
// 004bebce: MOV ECX,dword ptr [EBX + 0x370]
//   Label: LAB_004bebce
// 004bebd4: CMP ECX,dword ptr [EBX + 0x158]
// 004bebda: JNZ 0x004beb62
//   XREF to: 004beb62 (CONDITIONAL_JUMP)
// 004bebdc: LEA EAX,[EBX + 0x374]
// 004bebe2: PUSH EAX
// 004bebe3: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 004bebe9: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 004bebea: CALL core_event.cpp_CEventList_FUN_004aabe0
//   XREF to: 004aabe0 (UNCONDITIONAL_CALL)
// 004bebef: ADD ESP,0x8
// 004bebf2: JMP 0x004beb62
//   XREF to: 004beb62 (UNCONDITIONAL_JUMP)
// 004bebf7: PUSH 0x629b58
//   Label: LAB_004bebf7
//   XREF to: 00629b58 (DATA)
// 004bebfc: MOV EAX,dword ptr [EBX + 0x154]
// 004bec02: PUSH EBX
// 004bec03: CALL dword ptr [EAX + 0x24]
// 004bec06: ADD ESP,0x8
// 004bec09: MOV dword ptr [EBX + 0x3e0],EAX
// 004bec0f: JMP 0x004bebce
//   XREF to: 004bebce (UNCONDITIONAL_JUMP)
// 004bec11: MOV EAX,[0x02d12d70]
//   Label: LAB_004bec11
//   XREF to: 02d12d70 (READ)
// 004bec16: PUSH EAX
// 004bec17: MOV EDX,dword ptr [EBX + 0x158]
// 004bec1d: PUSH EDX
// 004bec1e: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004bec23: ADD ESP,0x8
// 004bec26: MOV ESI,EAX
// 004bec28: TEST EAX,EAX
// 004bec2a: JNZ 0x004bec4f
//   XREF to: 004bec4f (CONDITIONAL_JUMP)
// 004bec2c: MOV ECX,0x629b64
//   XREF to: 00629b64 (PARAM)
// 004bec31: MOV EDI,0x11e
// 004bec36: PUSH 0x629b79
//   XREF to: 00629b79 (DATA)
// 004bec3b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004bec41: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004bec47: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bec4c: ADD ESP,0x4
// 004bec4f: LEA EAX,[ESI + 0x2d8]
//   Label: LAB_004bec4f
// 004bec55: PUSH EAX
// 004bec56: MOV EBP,dword ptr [0x0066efd0]
//   XREF to: 0066efd0 (READ)
// 004bec5c: PUSH EBP
//   XREF to: 020a570c (DATA)
// 004bec5d: CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
//   XREF to: 00470730 (UNCONDITIONAL_CALL)
// 004bec62: ADD ESP,0x8
// 004bec65: MOV EAX,dword ptr [EBX + 0x3e0]
// 004bec6b: PUSH EAX
// 004bec6c: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004bec71: ADD ESP,0x4
// 004bec74: PUSH 0x629ba8
//   XREF to: 00629ba8 (DATA)
// 004bec79: MOV EAX,dword ptr [EBX + 0x154]
// 004bec7f: PUSH EBX
// 004bec80: CALL dword ptr [EAX + 0x24]
// 004bec83: ADD ESP,0x8
// 004bec86: MOV dword ptr [EBX + 0x3e0],EAX
// 004bec8c: JMP 0x004bebce
//   XREF to: 004bebce (UNCONDITIONAL_JUMP)
// 004bec91: PUSH EDX
//   Label: LAB_004bec91
// 004bec92: MOV ESI,dword ptr [0x0066efd0]
//   XREF to: 0066efd0 (READ)
// 004bec98: PUSH ESI
//   XREF to: 020a570c (DATA)
// 004bec99: CALL core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
//   XREF to: 00470730 (UNCONDITIONAL_CALL)
// 004bec9e: ADD ESP,0x8
// 004beca1: MOV EDI,dword ptr [EBX + 0x3e0]
// 004beca7: PUSH EDI
// 004beca8: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004becad: ADD ESP,0x4
// 004becb0: PUSH 0x629bb5
//   XREF to: 00629bb5 (DATA)
// 004becb5: MOV EAX,dword ptr [EBX + 0x154]
// 004becbb: PUSH EBX
// 004becbc: CALL dword ptr [EAX + 0x24]
// 004becbf: ADD ESP,0x8
// 004becc2: MOV dword ptr [EBX + 0x3e0],EAX
// 004becc8: JMP 0x004beb62
//   XREF to: 004beb62 (UNCONDITIONAL_JUMP)
