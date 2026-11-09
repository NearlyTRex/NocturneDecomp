// Name: core_script.cpp_FUN_00544310
// Address: 00544310
// Address Range: [[00544310, 0054445c]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00544310(CScript *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_00544310(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_14;
  uint local_10;
  
  _DAT_01e810a8 = 0;
  if ((0 < *(int *)&this_ptr->field_0x2c) && (*(int *)&this_ptr->field_0x30 != 0)) {
    iVar2 = core_script_cpp_FUN_0054acc0(this_ptr,"initSection");
    if (-1 < iVar2) {
      iVar3 = core_script_cpp_FUN_0054acc0(this_ptr,"initSectionEnd");
      if (iVar3 < 0) {
        _DAT_01d1d400 = "..\\core\\script.cpp";
        _DAT_01d1d404 = 0x42a;
        core_main_c_FUN_005030e0("Script has \"initSection\" label, but no \"initSectionEnd\" label.");
      }
      local_10 = *(uint *)&this_ptr->field_0x44;
      _DAT_01e818b4 = 0;
      *(int *)&this_ptr->field_0x44 = iVar2;
      iVar2 = 0;
      while( true ) {
        iVar1 = *(int *)&this_ptr->field_0x44;
        local_14 = 0.25;
        iVar4 = core_script_cpp_CScript_step_FUN_00544460(this_ptr,&local_14);
        if (iVar4 < 0) {
          _DAT_01d1d400 = "..\\core\\script.cpp";
          _DAT_01d1d404 = 0x446;
          core_main_c_FUN_005030e0
                    ("Error processing script.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                     *(uint *)(*(int *)&this_ptr->field_0x30 + iVar1 * 8),
                     *(uint *)(*(int *)&this_ptr->field_0x30 + 4 + iVar1 * 8),&DAT_01e810b0);
        }
        if (iVar3 == *(int *)&this_ptr->field_0x44) break;
        iVar2 = iVar2 + 1;
        if (10000 < iVar2) {
          _DAT_01d1d400 = "..\\core\\script.cpp";
          _DAT_01d1d404 = 0x458;
          core_main_c_FUN_005030e0("Infinite loop detected in initSection.\n");
        }
      }
      if (_DAT_01e818b4 != 0) {
        core_game_cpp_FUN_004d19d0(g_CGamePtr);
        _DAT_01e818b4 = 0;
      }
      *(uint *)&this_ptr->field_0x44 = local_10;
      return;
    }
  }
  return;
}
