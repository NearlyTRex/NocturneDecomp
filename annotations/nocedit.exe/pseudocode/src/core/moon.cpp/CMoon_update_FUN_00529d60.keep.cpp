// Name: core_moon.cpp_CMoon_update_FUN_00529d60
// Address: 00529d60
// MANUAL RECONSTRUCTION
// Address Range: [[00529d60, 00529ec6]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_00529d60(CMoon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_00529d60(CMoon *this_ptr,float delta_time)

{
  float fVar4;
  int iVar4;
  float fVar2;
  float fVar3;
  
  fVar4 = delta_time * (float)0.012500000000000001 + this_ptr->rotation_phase;
  this_ptr->rotation_phase = fVar4;
  if ((float)0.57999999999999996 < fVar4) {
    this_ptr->rotation_phase = 0.58;
    g_MoonBatsEnabled = 1;
  }
  g_MoonAnimationTimer = delta_time * (float)12 + g_MoonAnimationTimer;
  if ((float)60 <= g_MoonAnimationTimer) {
    g_MoonAnimationTimer = g_MoonAnimationTimer + -60.0f;
  }
  g_MoonCloudScrollX = g_MoonCloudScrollX + g_GlobalDeltaTimeInt * 0x20;
  g_MoonCloudScrollY = g_MoonCloudScrollY + g_GlobalDeltaTimeInt * 0x10;
  if (g_MoonBatsEnabled != 0) {
    iVar4 = 0;
    do {
      g_MoonBats[iVar4].course_position =
           delta_time * (float)20 + g_MoonBats[iVar4].course_position;
      if ((float)g_MoonBatCourses[g_MoonBats[iVar4].course_index].len <=
          g_MoonBats[iVar4].course_position) {
        g_MoonBats[iVar4].course_position = g_MoonBats[iVar4].course_position -
            (float)g_MoonBatCourses[g_MoonBats[iVar4].course_index].len;
      }
      fVar2 = (float)g_MoonBatModel.frame_count;
      fVar3 = delta_time * (float)30 + g_MoonBats[iVar4].animation_frame;
      g_MoonBats[iVar4].animation_frame = fVar3;
      if (fVar2 <= fVar3) {
        g_MoonBats[iVar4].animation_frame = g_MoonBats[iVar4].animation_frame - fVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 30);
  }
  return;
}
