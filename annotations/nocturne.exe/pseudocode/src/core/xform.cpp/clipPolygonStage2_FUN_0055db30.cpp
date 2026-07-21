// Name: core_xform.cpp_clipPolygonStage2_FUN_0055db30
// Address: 0055db30
// Address Range: [[0055db30, 0055dc92]]
// Convention: unknown
// Signature: void core_xform_cpp_clipPolygonStage2_FUN_0055db30(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0055dc3e) */
/* WARNING: Removing unreachable block (ram,0x0055dbb3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_clipPolygonStage2_FUN_0055db30(void)

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
  int iStack_14;
  
  bVar9 = 0;
  iStack_14 = 0;
  if (0 < (int)_DAT_02de3134) {
    plVar5 = (longlong *)&DAT_02de3140;
    do {
      uVar3 = iStack_14 + 1;
      if (uVar3 == _DAT_02de3134) {
        uVar3 = uVar3 ^ _DAT_02de3134;
      }
      piVar6 = (int *)(&DAT_02de3140 + uVar3 * 0x30);
      bVar2 = (int)*plVar5 <= -(int)plVar5[1];
      if (*piVar6 <= -*(int *)(&DAT_02de3148 + uVar3 * 0x30)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        plVar8 = (longlong *)(_DAT_02de3138 * 0x30 + 0x2de3d40);
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
        _DAT_02de3138 = _DAT_02de3138 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770
                  (piVar6,plVar5,_DAT_02de3138 * 0x30 + 0x2de3d40);
        _DAT_02de3138 = _DAT_02de3138 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(_DAT_02de3138 * 0x30 + 0x2de3d40);
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
        _DAT_02de3138 = _DAT_02de3138 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770
                  (plVar5,piVar6,_DAT_02de3138 * 0x30 + 0x2de3d40);
        _DAT_02de3138 = _DAT_02de3138 + 1;
      }
      iStack_14 = iStack_14 + 1;
      plVar5 = plVar5 + 6;
    } while (iStack_14 < (int)_DAT_02de3134);
  }
  return;
}
