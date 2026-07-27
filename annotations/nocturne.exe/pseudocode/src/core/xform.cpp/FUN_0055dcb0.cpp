// Name: core_xform.cpp_FUN_0055dcb0
// Address: 0055dcb0
// Address Range: [[0055dcb0, 0055de0d]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055dcb0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0055ddb9) */
/* WARNING: Removing unreachable block (ram,0x0055dd2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_0055dcb0(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  int local_14;
  
  bVar9 = 0;
  local_14 = 0;
  if (0 < (int)_DAT_02de3138) {
    plVar6 = (longlong *)0x2de3d40;
    do {
      uVar3 = local_14 + 1;
      if (uVar3 == _DAT_02de3138) {
        uVar3 = uVar3 ^ _DAT_02de3138;
      }
      iVar4 = uVar3 * 0x30;
      bVar2 = (int)plVar6[1] <= *(int *)((int)plVar6 + 4);
      if (*(int *)(&DAT_02de3d48 + iVar4) <= *(int *)(&DAT_02de3d44 + iVar4)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        plVar8 = (longlong *)(&DAT_02de4340 + _DAT_02de313c * 0x30);
        iVar4 = 0x30;
        plVar7 = plVar6;
        while (7 < iVar4) {
          lVar1 = *plVar7;
          plVar7 = plVar7 + 1;
          *plVar8 = (longlong)ROUND((float10)lVar1);
          plVar8 = plVar8 + 1;
          iVar4 = iVar4 + -8;
        }
        if (iVar4 != 0 && -9 < iVar4 + -8) {
          *(int *)plVar8 = (int)*plVar7;
          if (4 < iVar4) {
            *(uint *)((int)plVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)plVar7 + (uint)bVar9 * -8 + 4);
          }
        }
        _DAT_02de313c = _DAT_02de313c + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateTopPlane_FUN_0055d830
                  (iVar4 + 0x2de3d40,plVar6,&DAT_02de4340 + _DAT_02de313c * 0x30);
        _DAT_02de313c = _DAT_02de313c + 1;
        break;
      case 2:
        plVar8 = (longlong *)(&DAT_02de4340 + _DAT_02de313c * 0x30);
        iVar5 = 0x30;
        plVar7 = plVar6;
        while (7 < iVar5) {
          lVar1 = *plVar7;
          plVar7 = plVar7 + 1;
          *plVar8 = (longlong)ROUND((float10)lVar1);
          plVar8 = plVar8 + 1;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          *(int *)plVar8 = (int)*plVar7;
          if (4 < iVar5) {
            *(uint *)((int)plVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)plVar7 + (uint)bVar9 * -8 + 4);
          }
        }
        _DAT_02de313c = _DAT_02de313c + 1;
        core_xform_cpp_clipInterpolateTopPlane_FUN_0055d830
                  (plVar6,iVar4 + 0x2de3d40,&DAT_02de4340 + _DAT_02de313c * 0x30);
        _DAT_02de313c = _DAT_02de313c + 1;
      }
      local_14 = local_14 + 1;
      plVar6 = plVar6 + 6;
    } while (local_14 < (int)_DAT_02de3138);
  }
  return;
}
