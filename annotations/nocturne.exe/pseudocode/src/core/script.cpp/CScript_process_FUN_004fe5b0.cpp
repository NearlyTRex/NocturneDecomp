// Name: core_script.cpp_CScript_process_FUN_004fe5b0
// Address: 004fe5b0
// Address Range: [[004fe5b0, 004fe709]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_process_FUN_004fe5b0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_process_FUN_004fe5b0(CScript *this_ptr)

{
  CCharacter *this_ptr_00;
  char **ppcVar1;
  int iVar2;
  EDeathState EVar3;
  int iVar4;
  float local_18;
  float local_14;
  
  _DAT_01e56418 = 0;
  if ((0 < this_ptr->xref_count) && (this_ptr->xref_entries != (SScriptXRef *)0x0)) {
    if (0x01C775EC->cutscene_skippable != 0) {
      this_ptr->script_state = 0;
    }
    iVar4 = 0;
    local_18 = core_charactr_cpp_getGameDeltaTime_FUN_0042b5c0(0x01C775EC);
    _DAT_01e56c24 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (this_ptr->script_state == 2)) || (this_ptr->script_pause_flag != 0)
         ) goto LAB_004fe623;
      ppcVar1 = (this_ptr->script_text).data_array;
      iVar2 = core_script_cpp_CScript_step_FUN_004ff2c0(this_ptr,&local_18);
      if (iVar2 == 0) goto LAB_004fe623;
      if (iVar2 < 0) {
        shape_edittool_cpp_FUN_0046fcd0
                  (0x01BCD074,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(this_ptr->xref_entries->name + (int)ppcVar1 * 8),
                   *(uint *)(this_ptr->xref_entries->name + (int)ppcVar1 * 8 + 4),
                   &DAT_01e56420);
LAB_004fe675:
        this_ptr->script_state = 2;
      }
      else if (this_ptr->script_state == 1) goto LAB_004fe675;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc9);
    if (_DAT_01e56c28 == 0) {
      shape_edittool_cpp_FUN_0046fcd0
                (0x01BCD074,"!WARNING!  Infinite loop detected in script at line %d",
                 *(uint *)(this_ptr->xref_entries->name + (int)ppcVar1 * 8));
      _DAT_01e56c28 = 1;
    }
LAB_004fe623:
    if (_DAT_01e56c24 != 0) {
      core_game_cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(0x01C775EC);
      _DAT_01e56c24 = 0;
    }
    this_ptr_00 = (CCharacter *)this_ptr->who_is_speaking;
    if (this_ptr_00 != (CCharacter *)0x0) {
      EVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (0 < (int)EVar3) {
        sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->current_sfx_handle);
        return;
      }
    }
  }
  return;
}
