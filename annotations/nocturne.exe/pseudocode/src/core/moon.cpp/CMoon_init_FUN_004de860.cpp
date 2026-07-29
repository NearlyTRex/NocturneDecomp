// Name: core_moon.cpp_CMoon_init_FUN_004de860
// Address: 004de860
// Address Range: [[004de860, 004dea55]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_init_FUN_004de860(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_init_FUN_004de860(CMoon *this_ptr)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded == 0) {
    if (*(int *)(0x01C775EC + 0x214) == 0x29a) {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(&this_ptr->moon,"taylor_head.kfm");
      *(uint *)(0x01C775EC + 0x214) = 0;
    }
    else {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(&this_ptr->moon,"moon.kfm");
    }
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650
              ((CKeyFramedModel *)0x1cce1bc,"menubat.kfm");
    this_ptr_00 = (CAlphaBitmap *)0x1ccdc64;
    iVar5 = 0;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
              ((CAlphaBitmap *)&DAT_01ccdc50,"menucld2",0x100,0x100);
    do {
      puVar1 = (uint *)((int)&PTR_s_noc00000_005bb198 + iVar5);
      iVar5 = iVar5 + 4;
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(this_ptr_00,(char *)*puVar1,0x280,0x116);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar5 != 0x78);
    this_ptr->is_loaded = 1;
    core_course_cpp_CCourse_load_FUN_0043b690((CCourse *)0x1ccdec8,"menu1.pth");
    core_course_cpp_CCourse_load_FUN_0043b690((CCourse *)0x1ccded4,"menu2.pth");
    core_course_cpp_CCourse_load_FUN_0043b690((CCourse *)0x1ccdee0,"menu3.pth");
  }
  this_ptr->rotation_phase = 0.25;
  iVar5 = 0;
  do {
    iVar2 = rand();
    *(int *)(iVar5 + 0x1ccdeec) = iVar2 % 3;
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                      (0.0,(float)*(int *)((iVar2 % 3) * 0xc + 0x1ccdec8));
    fVar4 = (float)_DAT_01cce2bc;
    *(float *)(iVar5 + 0x1ccdef0) = -fVar3;
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,fVar4);
    *(float *)(iVar5 + 0x1ccdef4) = fVar4;
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
    *(float *)(iVar5 + 0x1ccdef8) = fVar4;
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
    *(float *)(iVar5 + 0x1ccdefc) = fVar4;
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-5.0,5.0);
    iVar2 = iVar5 + 0x18;
    *(float *)(iVar5 + 0x1ccdf00) = fVar4;
    iVar5 = iVar2;
  } while (iVar2 != 0x2d0);
  DAT_005bb210 = 0;
  return;
}
