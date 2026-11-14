// Name: core_moon.cpp_CMoon_init_FUN_00521c50
// Address: 00521c50
// Address Range: [[00521c50, 00521d44]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_init_FUN_00521c50(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_init_FUN_00521c50(CMoon *this_ptr)

{
  uint *puVar1;
  int iVar2;
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded == 0) {
    if (g_CGamePtr->head_of_horror_cheat == 0x29a) {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0(this_ptr->models,"taylor_head.kfm")
      ;
      g_CGamePtr->head_of_horror_cheat = 0;
    }
    else {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0(this_ptr->models,"titletwana.kfm");
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
                (this_ptr->models + 1,"titletwanb.kfm");
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
                (this_ptr->models + 2,"titletwanc.kfm");
    }
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
              (&CAlphaBitmap_01d33ce4,"menucld2",0x100,0x100);
    this_ptr_00 = g_MoonAnimTextures;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
              (&CAlphaBitmap_01d33f50,PTR_s_titlescreen_bw_0061f830,0x280,0x1e0);
    iVar2 = 0;
    do {
      puVar1 = (uint *)((int)&PTR_s_blair_00000_0061f834 + iVar2);
      iVar2 = iVar2 + 4;
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(this_ptr_00,(char *)*puVar1,0x280,0xa5);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar2 != 0x78);
    this_ptr->is_loaded = 1;
  }
  return;
}
