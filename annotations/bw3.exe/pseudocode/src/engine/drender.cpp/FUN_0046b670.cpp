// Name: engine_drender.cpp_FUN_0046b670
// Address: 0046b670
// Address Range: [[0046b670, 0046b7cd]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_0046b670(CDemonRenderer *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_0046b670(CDemonRenderer *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_14;
  
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (iVar4 = engine_3d_c_isVisiblePlane_FUN_00403920(param_2 + 8), iVar4 != 0)) {
    iVar4 = 0;
    uStack_14 = 0xffffffff;
    if (0 < *(int *)(param_2 + 4)) {
      iVar3 = 0;
      iVar2 = param_2;
      do {
        iVar1 = *(int *)(iVar2 + 0x18);
        *(int *)(&DAT_01bdd818 + iVar3) = iVar1;
        iVar3 = iVar3 + 4;
        uStack_14 = uStack_14 & *(uint *)(*(int *)param_1 + 0x10 + iVar1 * 0x30);
        iVar2 = iVar2 + 0xc;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_2 + 4));
    }
    if (((uStack_14 & 0x80000000) == 0) || ((uStack_14 & 0x1f) == 0)) {
      if ((*(int *)(param_1 + 4) == 0) &&
         ((*(int *)(param_1 + 0x20) == 0 && (iVar4 = 0, 0 < *(int *)(param_2 + 4))))) {
        iVar3 = 0;
        iVar2 = param_2;
        do {
          iVar1 = *(int *)(&DAT_01bdd818 + iVar3);
          *(uint *)(*(int *)param_1 + iVar1 * 0x30 + 0x18) = *(uint *)(iVar2 + 0x1c);
          *(uint *)(*(int *)param_1 + iVar1 * 0x30 + 0x1c) = *(uint *)(iVar2 + 0x20);
          iVar2 = iVar2 + 0xc;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < *(int *)(param_2 + 4));
      }
      if (*(int *)(param_1 + 4) == 0) {
        _DAT_01c6e2b4 = 0xc1;
        _DAT_01c6e2b8 = 3;
        _DAT_01c6b5cc = (code *)&UNK_00470130;
      }
      else {
        _DAT_01c6e2b4 = 0;
        _DAT_01c6e2b8 = 0;
        _DAT_01c6b5cc = core_dstrendr_cpp_renderDepthOnlyStandard_FUN_0046f9a6;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
                (param_1,*(int *)(param_2 + 4),(int *)&DAT_01bdd818);
    }
  }
  return;
}
