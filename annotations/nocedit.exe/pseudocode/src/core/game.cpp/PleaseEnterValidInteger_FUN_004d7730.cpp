// Name: core_game.cpp_PleaseEnterValidInteger_FUN_004d7730
// Address: 004d7730
// Address Range: [[004d7730, 004d780c]]
// Convention: unknown
// Signature: undefined core_game.cpp_PleaseEnterValidInteger_FUN_004d7730()
// Globals:
//   TerminatedCString s_Enter_Movie_FPS_0062b161
//   TerminatedCString s_Enter_number_of_frames_t_0062b171
//   TerminatedCString s_Enter_image_width_0062b1bb
//   TerminatedCString s_Enter_image_height_0062b1cd
//   TerminatedCString s_Press_CTRL_V_to_begin_re_0062b1e0
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   float g_MovieRecordingTargetFPS = 30
//   undefined4 DAT_0067b664
//   undefined4 DAT_0067b668
//   CEditorTools g_CEditorToolsPtr
//   int g_CheatFlags
//   undefined4 g_DebugRecordingParams
//   undefined4 DAT_02d831bc
// Function calls:
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_game.cpp_FUN_004d7730() */

void core_game_cpp_PleaseEnterValidInteger_FUN_004d7730(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  g_DebugRecording = 0;
  _DAT_02d831bc = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter Movie FPS",&g_MovieRecordingTargetFPS,true,
                     0.25,240.0,true);
  if (iVar2 != 0) {
    bVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                       (int *)&g_DebugRecordingParams,true,0,99999,true);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      bVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter image width",&DAT_0067b664,true,1,9999,
                         true);
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        bVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                          (g_CEditorToolsPtr,"Enter image height",&DAT_0067b668,true,1,9999
                           ,true);
        if (CONCAT31(extraout_var_01,bVar1) != 0) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
          g_CheatFlags = 1;
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 004d7730: PUSH EBX
//   Label: core_game.cpp_PleaseEnterValidInteger_FUN_004d7730
// 004d7731: PUSH ESI
// 004d7732: PUSH EDI
// 004d7733: PUSH EBP
// 004d7734: PUSH 0x1
// 004d7736: PUSH 0x43700000
// 004d773b: PUSH 0x3e800000
// 004d7740: PUSH 0x1
// 004d7742: PUSH 0x67b660
//   XREF to: 0067b660 (DATA)
// 004d7747: PUSH 0x62b161
//   XREF to: 0062b161 (DATA)
// 004d774c: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004d7752: XOR EDX,EDX
// 004d7754: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004d7755: MOV dword ptr [0x02d831b4],EDX
//   XREF to: 02d831b4 (WRITE)
// 004d775b: MOV dword ptr [0x02d831bc],EDX
//   XREF to: 02d831bc (WRITE)
// 004d7761: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 004d7766: ADD ESP,0x1c
// 004d7769: TEST EAX,EAX
// 004d776b: JNZ 0x004d7772
//   XREF to: 004d7772 (CONDITIONAL_JUMP)
// 004d776d: POP EBP
//   Label: LAB_004d776d
// 004d776e: POP EDI
// 004d776f: POP ESI
// 004d7770: POP EBX
// 004d7771: RET
// 004d7772: PUSH 0x1
//   Label: LAB_004d7772
// 004d7774: PUSH 0x1869f
// 004d7779: PUSH 0x0
// 004d777b: PUSH 0x1
// 004d777d: PUSH 0x2d831b8
//   XREF to: 02d831b8 (DATA)
// 004d7782: PUSH 0x62b171
//   XREF to: 0062b171 (DATA)
// 004d7787: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004d778d: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004d778e: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 004d7793: ADD ESP,0x1c
// 004d7796: TEST EAX,EAX
// 004d7798: JZ 0x004d776d
//   XREF to: 004d776d (CONDITIONAL_JUMP)
// 004d779a: PUSH 0x1
// 004d779c: PUSH 0x270f
// 004d77a1: PUSH 0x1
// 004d77a3: PUSH 0x1
// 004d77a5: PUSH 0x67b664
//   XREF to: 0067b664 (DATA)
// 004d77aa: PUSH 0x62b1bb
//   XREF to: 0062b1bb (DATA)
// 004d77af: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004d77b5: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004d77b6: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 004d77bb: ADD ESP,0x1c
// 004d77be: TEST EAX,EAX
// 004d77c0: JZ 0x004d776d
//   XREF to: 004d776d (CONDITIONAL_JUMP)
// 004d77c2: PUSH 0x1
// 004d77c4: PUSH 0x270f
// 004d77c9: PUSH 0x1
// 004d77cb: PUSH 0x1
// 004d77cd: PUSH 0x67b668
//   XREF to: 0067b668 (DATA)
// 004d77d2: PUSH 0x62b1cd
//   XREF to: 0062b1cd (DATA)
// 004d77d7: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004d77dd: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004d77de: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 004d77e3: ADD ESP,0x1c
// 004d77e6: TEST EAX,EAX
// 004d77e8: JZ 0x004d776d
//   XREF to: 004d776d (CONDITIONAL_JUMP)
// 004d77ea: PUSH 0x62b1e0
//   XREF to: 0062b1e0 (DATA)
// 004d77ef: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004d77f4: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004d77f5: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004d77fa: MOV EDX,0x1
// 004d77ff: ADD ESP,0x8
// 004d7802: MOV dword ptr [0x02d831b0],EDX
//   XREF to: 02d831b0 (WRITE)
// 004d7808: POP EBP
// 004d7809: POP EDI
// 004d780a: POP ESI
// 004d780b: POP EBX
// 004d780c: RET
