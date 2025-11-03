// Name: core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
// Address: 004d7d90
// Address Range: [[004d7d90, 004d7e46]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
// Cross-references:
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043da67 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443fa1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047ce71 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3c3b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da1c2 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e42b3 [UNCONDITIONAL_CALL]
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 005118d4 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 00510d3a [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00511e99 [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512d7a [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513017 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c3ef [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cb48 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e54a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005399b4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581e29 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583b02 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057acb0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b1fa [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057db2e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597813 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d7bc [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051e011 [UNCONDITIONAL_CALL]
// Globals:
//   float g_MovieRecordingFrameBase = 65536
//   double g_DeltaTimeToSeconds = 0.0000152587890625
//   float g_MovieRecordingTargetFPS = 30
//   int g_GlobalDeltaTimeInt
//   int g_DebugRecording
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   wincore_winrun.cpp_getTime_FUN_005f2dc0

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  double value;
  
  iVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar1 - this_ptr->clocktime;
  iVar3 = iVar2 / 0x12;
  this_ptr->delta_time_int = iVar3;
  if (iVar3 < 0) {
    this_ptr->delta_time_int = 0;
  }
  this_ptr->clocktime = iVar1;
  if (0x4000 < this_ptr->delta_time_int) {
    this_ptr->delta_time_int = 0x4000;
  }
  iVar1 = g_DebugRecording;
  fVar4 = (float10)this_ptr->delta_time_int * (float10)this_ptr->time_scale_factor;
  value = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar2 % 0x12,iVar3));
  this_ptr->delta_time_int = (int)ROUND(fVar4);
  if (iVar1 != 0) {
    fVar4 = ((float10)g_MovieRecordingFrameBase / (float10)g_MovieRecordingTargetFPS) *
            (float10)this_ptr->time_scale_factor;
    crt_math_c_round_FUN_005fe6b0(value);
    this_ptr->delta_time_int = (int)ROUND(fVar4);
  }
  g_GlobalDeltaTimeInt = this_ptr->delta_time_int;
  this_ptr->delta_time_float = (float)this_ptr->delta_time_int * (float)g_DeltaTimeToSeconds;
  return;
}


// Assembly code:
// 004d7d90: PUSH EBX
//   Label: core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
// 004d7d91: PUSH ESI
// 004d7d92: PUSH EDI
// 004d7d93: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d7d97: CALL wincore_winrun.cpp_getTime_FUN_005f2dc0
//   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
// 004d7d9c: MOV EDX,dword ptr [EBX + 0x25c]
// 004d7da2: MOV ESI,EAX
// 004d7da4: SUB EAX,EDX
// 004d7da6: MOV EDX,EAX
// 004d7da8: MOV ECX,0x12
// 004d7dad: SAR EDX,0x1f
// 004d7db0: IDIV ECX
// 004d7db2: MOV dword ptr [EBX + 0x260],EAX
// 004d7db8: TEST EAX,EAX
// 004d7dba: JL 0x004d7e10
//   XREF to: 004d7e10 (CONDITIONAL_JUMP)
// 004d7dbc: MOV dword ptr [EBX + 0x25c],ESI
//   Label: LAB_004d7dbc
// 004d7dc2: CMP dword ptr [EBX + 0x260],0x4000
// 004d7dcc: JG 0x004d7e1c
//   XREF to: 004d7e1c (CONDITIONAL_JUMP)
// 004d7dce: FILD dword ptr [EBX + 0x260]
//   Label: LAB_004d7dce
// 004d7dd4: FMUL float ptr [EBX + 0x1ec]
// 004d7dda: MOV EDI,dword ptr [0x02d831b4]
//   XREF to: 02d831b4 (READ)
// 004d7de0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d7de5: FISTP dword ptr [EBX + 0x260]
// 004d7deb: TEST EDI,EDI
// 004d7ded: JNZ 0x004d7e28
//   XREF to: 004d7e28 (CONDITIONAL_JUMP)
// 004d7def: FILD dword ptr [EBX + 0x260]
//   Label: LAB_004d7def
// 004d7df5: MOV EAX,dword ptr [EBX + 0x260]
// 004d7dfb: FMUL double ptr [0x0062b24d]
//   XREF to: 0062b24d (READ)
// 004d7e01: MOV [0x02cf6a80],EAX
//   XREF to: 02cf6a80 (WRITE)
// 004d7e06: FSTP float ptr [EBX + 0x264]
// 004d7e0c: POP EDI
// 004d7e0d: POP ESI
// 004d7e0e: POP EBX
// 004d7e0f: RET
// 004d7e10: MOV dword ptr [EBX + 0x260],0x0
//   Label: LAB_004d7e10
// 004d7e1a: JMP 0x004d7dbc
//   XREF to: 004d7dbc (UNCONDITIONAL_JUMP)
// 004d7e1c: MOV dword ptr [EBX + 0x260],0x4000
//   Label: LAB_004d7e1c
// 004d7e26: JMP 0x004d7dce
//   XREF to: 004d7dce (UNCONDITIONAL_JUMP)
// 004d7e28: FLD float ptr [0x0062b249]
//   Label: LAB_004d7e28
//   XREF to: 0062b249 (READ)
// 004d7e2e: FDIV float ptr [0x0067b660]
//   XREF to: 0067b660 (READ)
// 004d7e34: FMUL float ptr [EBX + 0x1ec]
// 004d7e3a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004d7e3f: FISTP dword ptr [EBX + 0x260]
// 004d7e45: JMP 0x004d7def
//   XREF to: 004d7def (UNCONDITIONAL_JUMP)
