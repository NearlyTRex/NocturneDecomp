// Name: core_script.cpp_FUN_005216e0
// Address: 005216e0
// Address Range: [[005216e0, 00521839]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005216e0(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_005216e0(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_18;
  float local_14;
  
  _DAT_01e650f8 = 0;
  if ((0 < *(int *)&this_ptr->field_0x2c) && (*(int *)&this_ptr->field_0x30 != 0)) {
    if (*(int *)&g_CGamePtr->field_0xe0 != 0) {
      *(uint *)&this_ptr->field_0x1c = 0;
    }
    iVar3 = 0;
    local_18 = (float)core_charactr_cpp_FUN_0042bff0(g_CGamePtr);
    _DAT_01e65904 = 0;
    local_14 = local_18;
    do {
      if (((local_18 <= 0.0) || (*(int *)&this_ptr->field_0x1c == 2)) || (*(int *)this_ptr != 0))
      goto LAB_00521753;
      iVar1 = *(int *)&this_ptr->field_0x44;
      iVar2 = core_script_cpp_FUN_00522350(this_ptr,&local_18);
      if (iVar2 == 0) goto LAB_00521753;
      if (iVar2 < 0) {
        shape_edittool_cpp_FUN_0047be40
                  (g_CEditorToolsPtr,"Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                   *(uint *)(*(int *)&this_ptr->field_0x30 + iVar1 * 8),
                   *(uint *)(*(int *)&this_ptr->field_0x30 + 4 + iVar1 * 8),&DAT_01e65100);
LAB_005217a5:
        *(uint *)&this_ptr->field_0x1c = 2;
      }
      else if (*(int *)&this_ptr->field_0x1c == 1) goto LAB_005217a5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc9);
    if (_DAT_01e65908 == 0) {
      shape_edittool_cpp_FUN_0047be40
                (g_CEditorToolsPtr,"!WARNING!  Infinite loop detected in script at line %d",
                 *(uint *)(*(int *)&this_ptr->field_0x30 + iVar1 * 8));
      _DAT_01e65908 = 1;
    }
LAB_00521753:
    if (_DAT_01e65904 != 0) {
      core_game_cpp_FUN_004b8250(g_CGamePtr);
      _DAT_01e65904 = 0;
    }
    iVar3 = *(int *)&this_ptr->field_0x4;
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
      if (0 < iVar3) {
        sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x28);
        return;
      }
    }
  }
  return;
}
