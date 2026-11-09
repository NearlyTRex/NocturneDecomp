// Name: core_script.cpp_FUN_00528e00
// Address: 00528e00
// Address Range: [[00528e00, 00528f59]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00528e00(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_00528e00(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  float local_18;
  float local_14;
  
  _DAT_01ed6808 = 0;
  if ((0 < *(int *)&this_ptr->field_0x2c) && (*(int *)&this_ptr->field_0x30 != 0)) {
    if (*(int *)&g_CGamePtr->field_0xe8 != 0) {
      *(uint *)&this_ptr->field_0x1c = 0;
    }
    iVar2 = 0;
    local_18 = (float)core_charactr_cpp_FUN_00434b00(g_CGamePtr);
    _DAT_01ed7014 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (*(int *)&this_ptr->field_0x1c == 2)) || (*(int *)this_ptr != 0))
      goto LAB_00528e73;
      iVar1 = core_script_cpp_CScript_step_FUN_00529a70(this_ptr,&local_18);
      if (iVar1 == 0) goto LAB_00528e73;
      if (iVar1 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n");
LAB_00528ec5:
        *(uint *)&this_ptr->field_0x1c = 2;
      }
      else if (*(int *)&this_ptr->field_0x1c == 1) goto LAB_00528ec5;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x60f);
    if (_DAT_01ed7018 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d");
      _DAT_01ed7018 = 1;
    }
LAB_00528e73:
    if (_DAT_01ed7014 != 0) {
      core_game_cpp_FUN_004ba490(g_CGamePtr);
      _DAT_01ed7014 = 0;
    }
    iVar2 = *(int *)&this_ptr->field_0x4;
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if (0 < iVar2) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x28);
        return;
      }
    }
  }
  return;
}
