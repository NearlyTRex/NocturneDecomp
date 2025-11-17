// Name: core_script.cpp_CScript_process_FUN_00559960
// Address: 00559960
// Address Range: [[00559960, 00559ab9]]
// Convention: __cdecl
// Signature: void core_script.cpp_CScript_process_FUN_00559960(CScript * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3282 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Error_processing_script__00641720
//   TerminatedCString s_WARNING_Infinite_loop_de_0064175d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CEditorTools g_CEditorToolsPtr
//   CGame g_CGameInstance
//   undefined4 DAT_02d81b68
//   undefined4 DAT_0310ec9c
//   undefined1 DAT_0310eca0
//   undefined4 DAT_0310f4a4
//   undefined4 DAT_0310f4a8
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f9e0
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   core_script.cpp_CScript_step_FUN_0055a810
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_process_FUN_00559960(CScript *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  DAT_0310ec9c = 0;
  if ((0 < *(int *)(this_ptr->padding_0x18 + 0x18)) &&
     (*(int *)(this_ptr->padding_0x18 + 0x1c) != 0)) {
    if (g_CGamePtr->cutscene_skippable != 0) {
      this_ptr->padding_0x18[0] = '\0';
      this_ptr->padding_0x18[1] = '\0';
      this_ptr->padding_0x18[2] = '\0';
      this_ptr->padding_0x18[3] = '\0';
    }
    iVar4 = 0;
    fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    DAT_0310f4a4 = 0;
    do {
      if (((fVar2 <= 0.0) || (*(int *)this_ptr->padding_0x18 == 2)) ||
         (*(int *)this_ptr->padding_0x0 != 0)) goto LAB_005599d3;
      iVar1 = this_ptr->nextCmd;
      iVar3 = core_script_cpp_CScript_step_FUN_0055a810();
      if (iVar3 == 0) goto LAB_005599d3;
      if (iVar3 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(undefined4 *)(*(int *)(this_ptr->padding_0x18 + 0x1c) + iVar1 * 8),
                   *(undefined4 *)(*(int *)(this_ptr->padding_0x18 + 0x1c) + 4 + iVar1 * 8),
                   &DAT_0310eca0);
LAB_00559a25:
        this_ptr->padding_0x18[0] = '\x02';
        this_ptr->padding_0x18[1] = '\0';
        this_ptr->padding_0x18[2] = '\0';
        this_ptr->padding_0x18[3] = '\0';
      }
      else if (*(int *)this_ptr->padding_0x18 == 1) goto LAB_00559a25;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc9);
    if (DAT_0310f4a8 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d",
                 *(undefined4 *)(*(int *)(this_ptr->padding_0x18 + 0x1c) + iVar1 * 8));
      DAT_0310f4a8 = 1;
    }
LAB_005599d3:
    if (DAT_0310f4a4 != 0) {
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(g_CGamePtr);
      DAT_0310f4a4 = 0;
    }
    if (this_ptr->whoIsSpeaking != 0) {
      iVar4 = (**(code **)(*(int *)(this_ptr->whoIsSpeaking + 0x154) + 0x120))();
      if (0 < iVar4) {
        sound_sndmain_cpp_FUN_005a9c40();
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00559960: PUSH EBX
//   Label: core_script.cpp_CScript_process_FUN_00559960
// 00559961: PUSH ESI
// 00559962: PUSH EDI
// 00559963: PUSH EBP
// 00559964: MOV EBP,ESP
// 00559966: SUB ESP,0x8
// 00559969: AND ESP,0xfffffff8
// 0055996c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0055996f: XOR EDX,EDX
// 00559971: MOV ECX,dword ptr [EBX + 0x30]
// 00559974: MOV dword ptr [0x0310ec9c],EDX
//   XREF to: 0310ec9c (WRITE)
// 0055997a: CMP ECX,0x1
// 0055997d: JL 0x005599fe
//   XREF to: 005599fe (CONDITIONAL_JUMP)
// 00559983: CMP dword ptr [EBX + 0x34],0x0
// 00559987: JZ 0x005599fe
//   XREF to: 005599fe (CONDITIONAL_JUMP)
// 0055998d: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00559992: CMP dword ptr [EAX + 0xcc],0x0
//   XREF to: 02d81b68 (READ)
// 00559999: JZ 0x0055999e
//   XREF to: 0055999e (CONDITIONAL_JUMP)
// 0055999b: MOV dword ptr [EBX + 0x18],EDX
// 0055999e: MOV EAX,[0x0067b654]
//   Label: LAB_0055999e
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005599a3: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 005599a4: XOR ESI,ESI
// 005599a6: CALL core_charactr.cpp_CCharacter_FUN_0042f9e0
//   XREF to: 0042f9e0 (UNCONDITIONAL_CALL)
// 005599ab: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005599af: XOR EDX,EDX
// 005599b1: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005599b5: ADD ESP,0x4
// 005599b8: MOV dword ptr [0x0310f4a4],EDX
//   XREF to: 0310f4a4 (WRITE)
// 005599be: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005599c1: FLD float ptr [ESP]
//   Label: LAB_005599c1
//   XREF to: Stack[-0x18] (DATA)
// 005599c4: FLDZ
// 005599c6: FCOMPP
// 005599c8: FNSTSW AX
// 005599ca: SAHF
// 005599cb: JNC 0x005599d3
//   XREF to: 005599d3 (CONDITIONAL_JUMP)
// 005599cd: CMP dword ptr [EBX + 0x18],0x2
// 005599d1: JNZ 0x00559a05
//   XREF to: 00559a05 (CONDITIONAL_JUMP)
// 005599d3: CMP dword ptr [0x0310f4a4],0x0
//   Label: LAB_005599d3
//   XREF to: 0310f4a4 (READ)
// 005599da: JZ 0x005599f3
//   XREF to: 005599f3 (CONDITIONAL_JUMP)
// 005599dc: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005599e2: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 005599e3: CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
//   XREF to: 004dce70 (UNCONDITIONAL_CALL)
// 005599e8: XOR ECX,ECX
// 005599ea: ADD ESP,0x4
// 005599ed: MOV dword ptr [0x0310f4a4],ECX
//   XREF to: 0310f4a4 (WRITE)
// 005599f3: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_005599f3
// 005599f6: TEST ESI,ESI
// 005599f8: JNZ 0x00559a8f
//   XREF to: 00559a8f (CONDITIONAL_JUMP)
// 005599fe: MOV ESP,EBP
//   Label: LAB_005599fe
// 00559a00: POP EBP
// 00559a01: POP EDI
// 00559a02: POP ESI
// 00559a03: POP EBX
// 00559a04: RET
// 00559a05: CMP dword ptr [EBX],0x0
//   Label: LAB_00559a05
// 00559a08: JNZ 0x005599d3
//   XREF to: 005599d3 (CONDITIONAL_JUMP)
// 00559a0a: MOV EAX,ESP
// 00559a0c: PUSH EAX
// 00559a0d: PUSH EBX
// 00559a0e: MOV EDI,dword ptr [EBX + 0x48]
// 00559a11: CALL core_script.cpp_CScript_step_FUN_0055a810
//   XREF to: 0055a810 (UNCONDITIONAL_CALL)
// 00559a16: ADD ESP,0x8
// 00559a19: TEST EAX,EAX
// 00559a1b: JZ 0x005599d3
//   XREF to: 005599d3 (CONDITIONAL_JUMP)
// 00559a1d: JL 0x00559a69
//   XREF to: 00559a69 (CONDITIONAL_JUMP)
// 00559a1f: CMP dword ptr [EBX + 0x18],0x1
// 00559a23: JNZ 0x00559a2c
//   XREF to: 00559a2c (CONDITIONAL_JUMP)
// 00559a25: MOV dword ptr [EBX + 0x18],0x2
//   Label: LAB_00559a25
// 00559a2c: INC ESI
//   Label: LAB_00559a2c
// 00559a2d: CMP ESI,0xc8
// 00559a33: JLE 0x005599c1
//   XREF to: 005599c1 (CONDITIONAL_JUMP)
// 00559a35: CMP dword ptr [0x0310f4a8],0x0
//   XREF to: 0310f4a8 (READ)
// 00559a3c: JNZ 0x005599d3
//   XREF to: 005599d3 (CONDITIONAL_JUMP)
// 00559a3e: MOV EAX,dword ptr [EBX + 0x34]
// 00559a41: MOV ECX,dword ptr [EAX + EDI*0x8]
// 00559a44: PUSH ECX
// 00559a45: PUSH 0x64175d
//   XREF to: 0064175d (DATA)
// 00559a4a: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00559a50: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00559a51: MOV EDI,0x1
// 00559a56: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00559a5b: ADD ESP,0xc
// 00559a5e: MOV dword ptr [0x0310f4a8],EDI
//   XREF to: 0310f4a8 (WRITE)
// 00559a64: JMP 0x005599d3
//   XREF to: 005599d3 (UNCONDITIONAL_JUMP)
// 00559a69: MOV EAX,dword ptr [EBX + 0x34]
//   Label: LAB_00559a69
// 00559a6c: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 00559a71: MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4]
// 00559a75: PUSH EDX
// 00559a76: MOV ECX,dword ptr [EAX + EDI*0x8]
// 00559a79: PUSH ECX
// 00559a7a: PUSH 0x641720
//   XREF to: 00641720 (DATA)
// 00559a7f: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00559a84: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00559a85: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00559a8a: ADD ESP,0x14
// 00559a8d: JMP 0x00559a25
//   XREF to: 00559a25 (UNCONDITIONAL_JUMP)
// 00559a8f: PUSH ESI
//   Label: LAB_00559a8f
// 00559a90: MOV EDX,dword ptr [ESI + 0x154]
// 00559a96: CALL dword ptr [EDX + 0x120]
// 00559a9c: ADD ESP,0x4
// 00559a9f: TEST EAX,EAX
// 00559aa1: JLE 0x005599fe
//   XREF to: 005599fe (CONDITIONAL_JUMP)
// 00559aa7: MOV EDI,dword ptr [EBX + 0x24]
// 00559aaa: PUSH EDI
// 00559aab: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00559ab0: ADD ESP,0x4
// 00559ab3: MOV ESP,EBP
// 00559ab5: POP EBP
// 00559ab6: POP EDI
// 00559ab7: POP ESI
// 00559ab8: POP EBX
// 00559ab9: RET
