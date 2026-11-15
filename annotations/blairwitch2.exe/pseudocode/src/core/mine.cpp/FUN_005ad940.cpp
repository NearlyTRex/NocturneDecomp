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
  double dVar3;
  CDemonGlobe *this_ptr;
  CDemonGlobe *position;
  
  this_ptr = (CDemonGlobe *)0x5ad996;
  position = (CDemonGlobe *)(param_1 + 0x7f4);
  dVar3 = round
                    ((double)((1.0 - *(float *)(param_1 + 0x7e8) / *(float *)(param_1 + 0x7dc)) *
                             (float)_DAT_005f0ef3));
  iVar1 = (int)ROUND(dVar3);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(this_ptr,(CVector3f *)position);
  *(int *)(param_1 + 0x830) = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x810) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860
            ((CDemonGlobe *)(param_1 + 0x7f4),5.0);
  *(uint *)(param_1 + 0x814) = 2;
  return;
}
