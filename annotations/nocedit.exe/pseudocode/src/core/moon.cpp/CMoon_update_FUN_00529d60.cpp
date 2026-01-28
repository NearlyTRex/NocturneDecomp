// Name: core_moon.cpp_CMoon_update_FUN_00529d60
// Address: 00529d60
// Address Range: [[00529d60, 00529ec6]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_00529d60(CMoon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_update_FUN_00529d60(CMoon *this_ptr,float delta_time)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar2 = delta_time * (float)0.012500000000000001 + this_ptr->rotation_phase;
  this_ptr->rotation_phase = fVar2;
  if ((float)0.57999999999999996 < fVar2) {
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
      *(float *)((int)&g_MoonBats[0].course_position + iVar4) =
           delta_time * (float)20 +
           *(float *)((int)&g_MoonBats[0].course_position + iVar4);
      if ((float)g_MoonBatCourses[*(int *)((int)&g_MoonBats[0].course_index + iVar4)].len <=
          *(float *)((int)&g_MoonBats[0].course_position + iVar4)) {
        pfVar1 = (float *)((int)&g_MoonBats[0].course_position + iVar4);
        *pfVar1 = *pfVar1 - (float)g_MoonBatCourses
                                   [*(int *)((int)&g_MoonBats[0].course_index + iVar4)].len;
      }
      fVar2 = (float)g_MoonBatModel.frame_count;
      fVar3 = delta_time * (float)30 +
              *(float *)((int)&g_MoonBats[0].animation_frame + iVar4);
      *(float *)((int)&g_MoonBats[0].animation_frame + iVar4) = fVar3;
      if (fVar2 <= fVar3) {
        pfVar1 = (float *)((int)&g_MoonBats[0].animation_frame + iVar4);
        *pfVar1 = *pfVar1 - fVar2;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != 0x2d0);
  }
  return;
}
