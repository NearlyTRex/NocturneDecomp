// Name: core_script.cpp_CScript_process_FUN_00559960
// Address: 00559960
// Address Range: [[00559960, 00559ab9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_process_FUN_00559960(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_process_FUN_00559960(CScript *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  DAT_0310ec9c = 0;
  if ((0 < *(int *)(this_ptr->unk4 + 0x18)) && (*(int *)(this_ptr->unk4 + 0x1c) != 0)) {
    if (g_CGamePtr->cutscene_skippable != 0) {
      this_ptr->unk4[0] = '\0';
      this_ptr->unk4[1] = '\0';
      this_ptr->unk4[2] = '\0';
      this_ptr->unk4[3] = '\0';
    }
    iVar4 = 0;
    fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042f9e0((CCharacter *)g_CGamePtr);
    DAT_0310f4a4 = 0;
    do {
      if (((fVar2 <= 0.0) || (*(int *)this_ptr->unk4 == 2)) || (*(int *)this_ptr->unk1 != 0))
      goto LAB_005599d3;
      iVar1 = this_ptr->next_cmd;
      iVar3 = core_script_cpp_CScript_step_FUN_0055a810();
      if (iVar3 == 0) goto LAB_005599d3;
      if (iVar3 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + iVar1 * 8),
                   *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + 4 + iVar1 * 8),&DAT_0310eca0);
LAB_00559a25:
        this_ptr->unk4[0] = '\x02';
        this_ptr->unk4[1] = '\0';
        this_ptr->unk4[2] = '\0';
        this_ptr->unk4[3] = '\0';
      }
      else if (*(int *)this_ptr->unk4 == 1) goto LAB_00559a25;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc9);
    if (DAT_0310f4a8 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d",
                 *(uint *)(*(int *)(this_ptr->unk4 + 0x1c) + iVar1 * 8));
      DAT_0310f4a8 = 1;
    }
LAB_005599d3:
    if (DAT_0310f4a4 != 0) {
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(g_CGamePtr);
      DAT_0310f4a4 = 0;
    }
    if (this_ptr->who_is_speaking != 0) {
      iVar4 = (**(code **)(*(int *)(this_ptr->who_is_speaking + 0x154) + 0x120))();
      if (0 < iVar4) {
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->unk4 + 0xc));
        return;
      }
    }
  }
  return;
}
