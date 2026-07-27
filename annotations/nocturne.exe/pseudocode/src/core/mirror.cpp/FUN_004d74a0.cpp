// Name: core_mirror.cpp_FUN_004d74a0
// Address: 004d74a0
// Address Range: [[004d74a0, 004d76dc]]
// Convention: unknown
// Signature: undefined4 core_mirror_cpp_FUN_004d74a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_mirror_cpp_FUN_004d74a0(int param_1,int param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *local_14;
  
  _DAT_01cc9120 = *(int *)(param_2 + 4);
  iVar3 = 0;
  if (0 < _DAT_01cc9120) {
    pfVar2 = (float *)&DAT_01cc9124;
    iVar4 = param_2;
    do {
      piVar1 = (int *)(iVar4 + 0x18);
      iVar4 = iVar4 + 4;
      piVar1 = (int *)(*DAT_005ae704 + *piVar1 * 0x30);
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)*piVar1 * 0.00390625f;
      pfVar2[1] = (float)piVar1[1] * 0.00390625f;
      pfVar2[2] = (float)piVar1[2] * 0.00390625f;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 < *(int *)(param_2 + 4));
  }
  core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
            (param_1 + 0x98,&DAT_01cc9124,_DAT_01cc9120,&DAT_01cc92a8,&DAT_01cc92a4);
  if ((((2 < _DAT_01cc92a4) &&
       (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                  (param_1 + 0xa8,&DAT_01cc92a8,_DAT_01cc92a4,&DAT_01cc9124,&DAT_01cc9120),
       2 < _DAT_01cc9120)) &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                 (param_1 + 0xb8,&DAT_01cc9124,_DAT_01cc9120,&DAT_01cc92a8,&DAT_01cc92a4),
      2 < _DAT_01cc92a4)) &&
     ((core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                 (param_1 + 200,&DAT_01cc92a8,_DAT_01cc92a4,&DAT_01cc9124,&DAT_01cc9120),
      2 < _DAT_01cc9120 &&
      (core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420
                 (param_1 + 0xd8,&DAT_01cc9124,_DAT_01cc9120,&DAT_01cc92a8,&DAT_01cc92a4),
      2 < _DAT_01cc92a4)))) {
    *(int *)(param_1 + 0xec) = _DAT_01cc92a4;
    *(uint *)(param_1 + 0xf0) = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_2 + 0x10);
    *(uint *)(param_1 + 0xfc) = *(uint *)(param_2 + 0x14);
    iVar3 = 0;
    if (0 < _DAT_01cc92a4) {
      local_14 = (float *)&DAT_01cc92a8;
      iVar4 = 0xea000;
      do {
        piVar1 = (int *)(*DAT_005ae704 + iVar4);
        *piVar1 = (int)ROUND(*local_14 * 256.0f);
        piVar1[1] = (int)ROUND(local_14[1] * 256.0f);
        piVar1[2] = (int)ROUND(local_14[2] * 256.0f);
        *(uint *)(iVar4 + 0x10 + *DAT_005ae704) = 0xffffffff;
        *(int *)(param_1 + 0x100) = iVar3 + 0x4e00;
        engine_matrix_c_projectCachedPoint_FUN_004cd240(iVar3 + 0x4e00);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x30;
        local_14 = local_14 + 3;
        param_1 = param_1 + 4;
      } while (iVar3 < _DAT_01cc92a4);
    }
    return 1;
  }
  return 0;
}
