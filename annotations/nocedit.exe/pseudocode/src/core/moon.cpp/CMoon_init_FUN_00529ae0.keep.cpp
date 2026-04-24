// Name: core_moon.cpp_CMoon_init_FUN_00529ae0
// Address: 00529ae0
// MANUAL RECONSTRUCTION
// Address Range: [[00529ae0, 00529cd5]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_init_FUN_00529ae0(CMoon *this_ptr)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_init_FUN_00529ae0(CMoon *this_ptr)

{
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar1;
  int iVar3;
  int iVar5;
  CAlphaBitmap *this_ptr_00;
  
  if (this_ptr->is_loaded == 0) {
    if (g_CGamePtr->head_of_horror_cheat == 0x29a) {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&this_ptr->moon,"taylor_head.kfm");
      g_CGamePtr->head_of_horror_cheat = 0;
    }
    else {
      core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&this_ptr->moon,"moon.kfm");
    }
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&g_MoonBatModel,"menubat.kfm");
    this_ptr_00 = g_MoonAnimTextures;
    iVar5 = 0;
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              (&g_MoonCloudTexture,"menucld2",0x100,0x100);
    do {
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(this_ptr_00,g_MoonNocStrings[iVar5],0x280,0x116);
      iVar5 = iVar5 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar5 != 30);
    this_ptr->is_loaded = 1;
    core_course_cpp_CCourse_load_FUN_00442580(g_MoonBatCourses,"menu1.pth");
    core_course_cpp_CCourse_load_FUN_00442580(g_MoonBatCourses + 1,"menu2.pth");
    core_course_cpp_CCourse_load_FUN_00442580(g_MoonBatCourses + 2,"menu3.pth");
  }
  this_ptr->rotation_phase = 0.25;
  iVar3 = 0;
  do {
    iVar2 = rand();
    g_MoonBats[iVar3].course_index = iVar2 % 3;
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                      (0.0,(float)g_MoonBatCourses[iVar2 % 3].len);
    fVar1 = (float)g_MoonBatModel.frame_count;
    g_MoonBats[iVar3].course_position = -fVar3;
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,fVar1);
    g_MoonBats[iVar3].animation_frame = fVar4;
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
    g_MoonBats[iVar3].random_offset.x = fVar1;
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
    g_MoonBats[iVar3].random_offset.y = fVar1;
    fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-5.0,5.0);
    g_MoonBats[iVar3].random_offset.z = fVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 30);
  g_MoonBatsEnabled = 0;
  return;
}
