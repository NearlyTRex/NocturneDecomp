// Name: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0
// Address: 004c3aa0
// Address Range: [[004c3aa0, 004c3c84]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_14;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar4 = engine_model_c_loadModelFile_FUN_004dcd10(param_1 + 0x18);
    *(uint *)(param_1 + 0x14) = uVar4;
  }
  iVar2 = engine_model_c_getMRGLSize_FUN_004dd520(*(uint *)(param_1 + 0x14));
  iVar3 = engine_model_c_getMRGLSize_FUN_004dd520(*(int *)(param_1 + 0x14) + iVar2);
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar11 = param_1 + 0x18;
    iVar9 = param_1;
    do {
      if (*(int *)(iVar9 + 0x118) == 0) {
        uVar4 = engine_model_c_loadModelChunk_FUN_004dd790(iVar11,iVar2 + iVar3);
        *(uint *)(iVar9 + 0x118) = uVar4;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 0x10;
    } while (iVar10 < *(int *)(param_1 + 8));
  }
  iVar10 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar11 = *(int *)(iVar3 + 0x118);
      if (*(int *)(iVar11 + 8) != 2) {
        _DAT_01cc4800 = "..\\engine\\keyframe.c";
        _DAT_01cc4804 = 0xfd;
        FUN_004c8440("Bad key frame");
      }
      if (*(int *)(iVar11 + 0x10) != *(int *)(iVar2 + 0x10)) {
        _DAT_01cc4800 = "..\\engine\\keyframe.c";
        _DAT_01cc4804 = 0xfe;
        FUN_004c8440("Key frame vertex mismatch");
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 0x14);
  local_14 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x118) + 4);
      if (*(uint *)(iVar2 + 4) != uVar1) {
        uVar5 = *(uint *)(iVar2 + 4);
        uVar8 = (int)uVar5 >> 0x1f;
        uVar5 = uVar5 ^ uVar8;
        uVar6 = uVar5 / uVar1;
        if (0x7ffe < uVar6) {
          uVar6 = 0x7fff;
        }
        uVar8 = ((uint)(((ulonglong)uVar5 % (ulonglong)uVar1 << 0x20) / (ulonglong)uVar1) >> 0x10 |
                uVar6 << 0x10) ^ uVar8;
        iVar11 = 0;
        iVar10 = *(int *)(iVar3 + 0x118);
        puVar7 = (uint *)(*(int *)(iVar3 + 0x118) + 0x14);
        if (0 < *(int *)(iVar10 + 0x10)) {
          do {
            *puVar7 = (uint)((longlong)(int)uVar8 * (longlong)(int)*puVar7) >> 0x10 |
                      (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)*puVar7) >> 0x20) <<
                      0x10;
            puVar7[1] = (uint)((longlong)(int)uVar8 * (longlong)(int)puVar7[1]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)puVar7[1]) >> 0x20)
                        << 0x10;
            puVar7[2] = (uint)((longlong)(int)uVar8 * (longlong)(int)puVar7[2]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)puVar7[2]) >> 0x20)
                        << 0x10;
            iVar11 = iVar11 + 1;
            puVar7 = puVar7 + 3;
          } while (iVar11 < *(int *)(iVar10 + 0x10));
        }
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 4;
    } while (local_14 < *(int *)(param_1 + 8));
  }
  return;
}
