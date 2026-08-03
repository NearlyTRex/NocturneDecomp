// Name: core_moon.cpp_CMoon_update_FUN_004deae0
// Address: 004deae0
// Address Range: [[004deae0, 004dec46]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(CMoon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_update_FUN_004deae0(CMoon *this_ptr,float delta_time)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar2 = delta_time * (float)0.012500000000000001 + this_ptr->rotation_phase;
  this_ptr->rotation_phase = fVar2;
  if ((float)0.57999999999999996 < fVar2) {
    this_ptr->rotation_phase = 0.58;
    DAT_005bb210 = 1;
  }
  _DAT_01ccdec4 = delta_time * (float)12 + _DAT_01ccdec4;
  if ((float)60 <= _DAT_01ccdec4) {
    _DAT_01ccdec4 = _DAT_01ccdec4 + 1.6117013929914458e-314._0_4_;
  }
  _DAT_01ccdebc = _DAT_01ccdebc + _DAT_01bd1d80 * 0x20;
  _DAT_01ccdec0 = _DAT_01ccdec0 + _DAT_01bd1d80 * 0x10;
  if (DAT_005bb210 != 0) {
    iVar4 = 0;
    do {
      *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].course_position + iVar4) =
           delta_time * (float)20 +
           *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].course_position + iVar4);
      if ((float)g_CCourse_ARRAY_01ccdec8
                 [*(int *)((int)&g_SBat_ARRAY_01ccdeec[0].course_index + iVar4)].len <=
          *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].course_position + iVar4)) {
        pfVar1 = (float *)((int)&g_SBat_ARRAY_01ccdeec[0].course_position + iVar4);
        *pfVar1 = *pfVar1 - (float)g_CCourse_ARRAY_01ccdec8
                                   [*(int *)((int)&g_SBat_ARRAY_01ccdeec[0].course_index + iVar4)].
                                   len;
      }
      fVar2 = (float)g_CKeyFramedModel_01cce1bc.frame_count;
      fVar3 = delta_time * (float)30 +
              *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].animation_frame + iVar4);
      *(float *)((int)&g_SBat_ARRAY_01ccdeec[0].animation_frame + iVar4) = fVar3;
      if (fVar2 <= fVar3) {
        pfVar1 = (float *)((int)&g_SBat_ARRAY_01ccdeec[0].animation_frame + iVar4);
        *pfVar1 = *pfVar1 - fVar2;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != 0x2d0);
  }
  return;
}
