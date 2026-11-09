// Name: core_script.cpp_FUN_005437f0
// Address: 005437f0
// Address Range: [[005437f0, 00543949]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005437f0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_005437f0(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01e810a8 = 0;
  if ((0 < *(int *)&this_ptr->field_0x2c) && (*(int *)&this_ptr->field_0x30 != 0)) {
    if (*(int *)&g_CGamePtr->field_0xe0 != 0) {
      *(uint *)&this_ptr->field_0x1c = 0;
    }
    iVar3 = 0;
    local_18 = (float)core_charactr_cpp_FUN_004355d0(g_CGamePtr);
    _DAT_01e818b4 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (*(int *)&this_ptr->field_0x1c == 2)) || (*(int *)this_ptr != 0))
      goto LAB_00543863;
      iVar1 = *(int *)&this_ptr->field_0x44;
      iVar2 = core_script_cpp_CScript_step_FUN_00544460(this_ptr,&local_18);
      if (iVar2 == 0) goto LAB_00543863;
      if (iVar2 < 0) {
        shape_edittool_cpp_FUN_004943a0
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(*(int *)&this_ptr->field_0x30 + iVar1 * 8),
                   *(uint *)(*(int *)&this_ptr->field_0x30 + 4 + iVar1 * 8),&DAT_01e810b0);
LAB_005438b5:
        *(uint *)&this_ptr->field_0x1c = 2;
      }
      else if (*(int *)&this_ptr->field_0x1c == 1) goto LAB_005438b5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x60f);
    if (_DAT_01e818b8 == 0) {
      shape_edittool_cpp_FUN_004943a0
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d",
                 *(uint *)(*(int *)&this_ptr->field_0x30 + iVar1 * 8));
      _DAT_01e818b8 = 1;
    }
LAB_00543863:
    if (_DAT_01e818b4 != 0) {
      core_game_cpp_FUN_004d19d0(g_CGamePtr);
      _DAT_01e818b4 = 0;
    }
    iVar3 = *(int *)&this_ptr->field_0x4;
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (0 < iVar3) {
        sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x28);
        return;
      }
    }
  }
  return;
}
