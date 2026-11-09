// Name: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004fcb40
// Address: 004fcb40
// Address Range: [[004fcb40, 004fcd24]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004fcb40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004fcb40(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderExtended *pSVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *filename;
  int local_14;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar5 = engine_model_c_loadModelFile_FUN_0051f6d0(param_1 + 0x18);
    *(uint *)(param_1 + 0x14) = uVar5;
  }
  iVar2 = engine_model_c_FUN_0051fee0(*(SMRGLHeaderExtended **)(param_1 + 0x14));
  iVar3 = engine_model_c_FUN_0051fee0((SMRGLHeaderExtended *)(*(int *)(param_1 + 0x14) + iVar2));
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    filename = (char *)(param_1 + 0x18);
    iVar10 = param_1;
    do {
      if (*(int *)(iVar10 + 0x118) == 0) {
        pSVar4 = engine_model_c_FUN_00520150(filename,iVar2 + iVar3);
        *(SMRGLHeaderExtended **)(iVar10 + 0x118) = pSVar4;
      }
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 1;
      filename = filename + 0x10;
    } while (iVar11 < *(int *)(param_1 + 8));
  }
  iVar11 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar10 = *(int *)(iVar3 + 0x118);
      if (*(int *)(iVar10 + 8) != 2) {
        _DAT_01d1d400 = "..\\engine\\keyframe.c";
        _DAT_01d1d404 = 0xfd;
        core_main_c_FUN_005030e0("Bad key frame");
      }
      if (*(int *)(iVar10 + 0x10) != *(int *)(iVar2 + 0x10)) {
        _DAT_01d1d400 = "..\\engine\\keyframe.c";
        _DAT_01d1d404 = 0xfe;
        core_main_c_FUN_005030e0("Key frame vertex mismatch");
      }
      iVar11 = iVar11 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar11 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 0x14);
  local_14 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x118) + 4);
      if (*(uint *)(iVar2 + 4) != uVar1) {
        uVar6 = *(uint *)(iVar2 + 4);
        uVar9 = (int)uVar6 >> 0x1f;
        uVar6 = uVar6 ^ uVar9;
        uVar7 = uVar6 / uVar1;
        if (0x7ffe < uVar7) {
          uVar7 = 0x7fff;
        }
        uVar9 = ((uint)(((ulonglong)uVar6 % (ulonglong)uVar1 << 0x20) / (ulonglong)uVar1) >> 0x10 |
                uVar7 << 0x10) ^ uVar9;
        iVar10 = 0;
        iVar11 = *(int *)(iVar3 + 0x118);
        puVar8 = (uint *)(*(int *)(iVar3 + 0x118) + 0x14);
        if (0 < *(int *)(iVar11 + 0x10)) {
          do {
            *puVar8 = (uint)((longlong)(int)uVar9 * (longlong)(int)*puVar8) >> 0x10 |
                      (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)*puVar8) >> 0x20) <<
                      0x10;
            puVar8[1] = (uint)((longlong)(int)uVar9 * (longlong)(int)puVar8[1]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)puVar8[1]) >> 0x20)
                        << 0x10;
            puVar8[2] = (uint)((longlong)(int)uVar9 * (longlong)(int)puVar8[2]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)puVar8[2]) >> 0x20)
                        << 0x10;
            iVar10 = iVar10 + 1;
            puVar8 = puVar8 + 3;
          } while (iVar10 < *(int *)(iVar11 + 0x10));
        }
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 4;
    } while (local_14 < *(int *)(param_1 + 8));
  }
  return;
}
