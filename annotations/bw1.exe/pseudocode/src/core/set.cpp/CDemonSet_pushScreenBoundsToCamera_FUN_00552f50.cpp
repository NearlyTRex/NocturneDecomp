// Name: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50
// Address: 00552f50
// Address Range: [[00552f50, 00553132]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50(CDemonSet *this_ptr,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00552f50(CDemonSet *this_ptr,int vertex_count)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  if (DAT_00857cd4 != (CDemonCamera *)0x0) {
    piVar3 = (int *)*DAT_00612560;
    local_c = _DAT_01c4f000 - _DAT_01c4eff8;
    iVar4 = _DAT_01c4f000 + _DAT_01c4eff8;
    iVar2 = _DAT_01c4f004 - _DAT_01c4effc;
    local_8 = _DAT_01c4f004 + _DAT_01c4effc;
    local_10 = 0;
    if (0 < vertex_count) {
      do {
        if ((*(byte *)((int)piVar3 + 0x13) & 0x80) == 0) {
          if (piVar3[4] < iVar4) {
            iVar4 = piVar3[4];
          }
          if (local_c < piVar3[4]) {
            local_c = piVar3[4];
          }
          if (piVar3[5] < iVar2) {
            iVar2 = piVar3[5];
          }
          if (local_8 < piVar3[5]) {
            local_8 = piVar3[5];
          }
        }
        else {
          if ((-piVar3[2] < *piVar3) && (*piVar3 < piVar3[2])) {
            iVar1 = (int)(((longlong)*piVar3 * (longlong)_DAT_01c4eff8) / (longlong)piVar3[2]) +
                    _DAT_01c4f000;
            if (local_c < iVar1) {
              local_c = iVar1;
            }
            if (iVar1 < iVar4) {
              iVar4 = iVar1;
            }
          }
          if ((-piVar3[2] < piVar3[1]) && (piVar3[1] < piVar3[2])) {
            iVar1 = (int)(((longlong)piVar3[1] * (longlong)_DAT_01c4effc) / (longlong)piVar3[2]) +
                    _DAT_01c4f004;
            if (local_8 < iVar1) {
              local_8 = iVar1;
            }
            if (iVar1 < iVar2) {
              iVar2 = iVar1;
            }
          }
          if (piVar3[2] <= *piVar3) {
            local_c = _DAT_01c4eff8 + _DAT_01c4f000;
          }
          if (*piVar3 <= -piVar3[2]) {
            iVar4 = _DAT_01c4f000 - _DAT_01c4eff8;
          }
          if (piVar3[2] <= piVar3[1]) {
            iVar2 = _DAT_01c4effc + _DAT_01c4f004;
          }
          if (piVar3[1] <= -piVar3[2]) {
            local_8 = _DAT_01c4f004 - _DAT_01c4effc;
          }
        }
        local_10 = local_10 + 1;
        piVar3 = piVar3 + 0xc;
      } while (local_10 < vertex_count);
    }
    core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044d1d0
              (DAT_00857cd4,iVar4 >> 0x10,local_c >> 0x10,iVar2 >> 0x10,local_8 >> 0x10);
  }
  return;
}
