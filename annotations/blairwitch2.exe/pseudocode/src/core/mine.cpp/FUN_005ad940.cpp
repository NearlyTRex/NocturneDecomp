// Name: core_mine.cpp_FUN_005ad940
// Address: 005ad940
// Address Range: [[005ad940, 005ad9e1]]
// Convention: unknown
// Signature: void core_mine_cpp_FUN_005ad940(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mine_cpp_FUN_005ad940(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  CDemonGlobe *this_ptr;
  CVector3f *position;
  CVector3f CStack_1c;
  int iStack_10;
  
  CStack_1c.x = *(float *)(param_1 + 0x20);
  CStack_1c.z = *(float *)(param_1 + 0x28);
  CStack_1c.y = *(float *)(param_1 + 0x24) + _DAT_005f0eef;
  position = &CStack_1c;
  fVar3 = ((float10)1 - (float10)*(float *)(param_1 + 0x7e8) / (float10)*(float *)(param_1 + 0x7dc))
          * (float10)_DAT_005f0ef3;
  this_ptr = (CDemonGlobe *)(param_1 + 0x7f4);
  round();
  iStack_10 = (int)ROUND(fVar3);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(this_ptr,position);
  *(int *)(param_1 + 0x830) = iStack_10;
  iVar1 = (iStack_10 + (iStack_10 >> 0x1f) * -0x100) - (uint)((iStack_10 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x810) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
            ((CDemonGlobe *)(param_1 + 0x7f4),5.0);
  *(uint *)(param_1 + 0x814) = 2;
  return;
}
