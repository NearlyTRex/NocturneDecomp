// Name: core_moon.cpp_FUN_00521c50
// Address: 00521c50
// Address Range: [[00521c50, 00521d44]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_00521c50(int *param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_00521c50(int *param_1)

{
  uint *puVar1;
  int iVar2;
  CAlphaBitmap *this_ptr;
  
  if (*param_1 == 0) {
    if (*(int *)&g_CGamePtr->field_0x230 == 0x29a) {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
                ((CKeyFramedModel *)(param_1 + 2),"taylor_head.kfm");
      *(uint *)&g_CGamePtr->field_0x230 = 0;
    }
    else {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
                ((CKeyFramedModel *)(param_1 + 2),"titletwana.kfm");
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
                ((CKeyFramedModel *)(param_1 + 0xe8),"titletwanb.kfm");
      core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
                ((CKeyFramedModel *)(param_1 + 0x1ce),"titletwanc.kfm");
    }
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
              (&CAlphaBitmap_01d33ce4,"menucld2",0x100,0x100);
    this_ptr = g_MoonAnimTextures;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
              (&CAlphaBitmap_01d33f50,PTR_s_titlescreen_bw_0061f830,0x280,0x1e0);
    iVar2 = 0;
    do {
      puVar1 = (uint *)((int)&PTR_s_blair_00000_0061f834 + iVar2);
      iVar2 = iVar2 + 4;
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(this_ptr,(char *)*puVar1,0x280,0xa5);
      this_ptr = this_ptr + 1;
    } while (iVar2 != 0x78);
    *param_1 = 1;
  }
  return;
}
