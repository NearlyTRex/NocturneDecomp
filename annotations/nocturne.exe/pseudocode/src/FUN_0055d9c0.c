// Name: FUN_0055d9c0
// Address: 0055d9c0
// Address Range: [[0055d9c0, 0055db1c]]
// Convention: unknown
// Signature: void FUN_0055d9c0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0055dac8) */
/* WARNING: Removing unreachable block (ram,0x0055da3d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d9c0(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  int local_14;
  
  bVar9 = 0;
  local_14 = 0;
  if (0 < (int)_DAT_02de3130) {
    plVar5 = (longlong *)&DAT_02de3740;
    do {
      uVar3 = local_14 + 1;
      if (uVar3 == _DAT_02de3130) {
        uVar3 = uVar3 ^ _DAT_02de3130;
      }
      piVar6 = (int *)(&DAT_02de3740 + uVar3 * 0x30);
      bVar2 = (int)plVar5[1] <= (int)*plVar5;
      if (*(int *)(&DAT_02de3748 + uVar3 * 0x30) <= *piVar6) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        plVar8 = (longlong *)(&DAT_02de3140 + _DAT_02de3134 * 0x30);
        iVar4 = 0x30;
        plVar7 = plVar5;
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
        _DAT_02de3134 = _DAT_02de3134 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0
                  (piVar6,plVar5,&DAT_02de3140 + _DAT_02de3134 * 0x30);
        _DAT_02de3134 = _DAT_02de3134 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(&DAT_02de3140 + _DAT_02de3134 * 0x30);
        iVar4 = 0x30;
        plVar7 = plVar5;
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
        _DAT_02de3134 = _DAT_02de3134 + 1;
        core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0
                  (plVar5,piVar6,&DAT_02de3140 + _DAT_02de3134 * 0x30);
        _DAT_02de3134 = _DAT_02de3134 + 1;
      }
      local_14 = local_14 + 1;
      plVar5 = plVar5 + 6;
    } while (local_14 < (int)_DAT_02de3130);
  }
  return;
}
