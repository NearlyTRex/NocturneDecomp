// Name: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00408d10
// Address: 00408d10
// Address Range: [[00408d10, 00408e59]]
// Convention: unknown
// Signature: void engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00408d10(int param_1,uint param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00408d10(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = engine_3d_c_isVisiblePlane_FUN_00404610((SClipPlane *)(param_1 + 8));
  if (iVar2 != 0) {
    if (_DAT_01c03948 == 0) {
      if (DAT_005b7624 == 0x20) {
        _DAT_01c00c7c = engine_special_cpp_FUN_005300ec;
      }
      else {
        _DAT_01c00c7c = engine_special_cpp_FUN_00530322;
      }
    }
    else if (DAT_005b7624 == 0x20) {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
    }
    else {
      _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
    }
    _DAT_01c039a0 = param_2;
    if ((param_2 & 0x10) != 0) {
      _DAT_01c00c74 =
           engine_light_cpp_calculateLighting_FUN_004c6cc0
                     (*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10));
    }
    _DAT_01c039a4 = param_3;
    if (param_3 == 0) {
      if ((param_2 & 0xc0) != 0) {
        _DAT_01c039a4 = 1;
      }
    }
    else {
      _DAT_01c039a4 = 5;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        iVar1 = *(int *)(iVar3 + 0x18);
        *(int *)((int)&DAT_006b029c + iVar4) = iVar1;
        (&DAT_005c502c)[iVar1 * 0xc] = *(uint *)(iVar3 + 0x1c);
        iVar4 = iVar4 + 4;
        *(uint *)(&DAT_005c5030 + iVar1 * 0x30) = *(uint *)(iVar3 + 0x20);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    if (_DAT_01c00c78 == 0) {
      engine_clipper_c_clipPolygonToViewport_FUN_004349a0(*(int *)(param_1 + 4),&DAT_006b029c);
      return;
    }
    engine_clipper_c_FUN_00432cd0(*(uint *)(param_1 + 4),&DAT_006b029c);
  }
  return;
}
