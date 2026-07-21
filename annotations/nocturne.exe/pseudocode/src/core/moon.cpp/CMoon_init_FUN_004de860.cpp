// Name: core_moon.cpp_CMoon_init_FUN_004de860
// Address: 004de860
// Address Range: [[004de860, 004dea55]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_init_FUN_004de860(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_init_FUN_004de860(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    if (*(int *)(0x01C775EC + 0x214) == 0x29a) {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(param_1 + 2,"taylor_head.kfm");
      *(uint *)(0x01C775EC + 0x214) = 0;
    }
    else {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(param_1 + 2,"moon.kfm");
    }
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(0x1cce1bc,"menubat.kfm");
    iVar3 = 0x1ccdc64;
    iVar6 = 0;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
              (&DAT_01ccdc50,"menucld2",0x100,0x100);
    do {
      puVar1 = (uint *)((int)&PTR_s_noc00000_005bb198 + iVar6);
      iVar6 = iVar6 + 4;
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(iVar3,*puVar1,0x280,0x116);
      iVar3 = iVar3 + 0x14;
    } while (iVar6 != 0x78);
    *param_1 = 1;
    core_course_cpp_CCourse_load_FUN_0043b690(0x1ccdec8,"menu1.pth");
    core_course_cpp_CCourse_load_FUN_0043b690(0x1ccded4,"menu2.pth");
    core_course_cpp_CCourse_load_FUN_0043b690(0x1ccdee0,"menu3.pth");
  }
  param_1[1] = 0x3e800000;
  iVar6 = 0;
  do {
    iVar3 = rand();
    *(int *)(iVar6 + 0x1ccdeec) = iVar3 % 3;
    fVar4 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                             (0,(float)*(int *)((iVar3 % 3) * 0xc + 0x1ccdec8));
    fVar2 = (float)_DAT_01cce2bc;
    *(float *)(iVar6 + 0x1ccdef0) = -fVar4;
    uVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,fVar2);
    *(uint *)(iVar6 + 0x1ccdef4) = uVar5;
    uVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0a00000,0x40a00000);
    *(uint *)(iVar6 + 0x1ccdef8) = uVar5;
    uVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0a00000,0x40a00000);
    *(uint *)(iVar6 + 0x1ccdefc) = uVar5;
    uVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0a00000,0x40a00000);
    iVar3 = iVar6 + 0x18;
    *(uint *)(iVar6 + 0x1ccdf00) = uVar5;
    iVar6 = iVar3;
  } while (iVar3 != 0x2d0);
  DAT_005bb210 = 0;
  return;
}
