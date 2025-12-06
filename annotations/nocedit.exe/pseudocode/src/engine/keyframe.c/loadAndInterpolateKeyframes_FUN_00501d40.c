// Name: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
// Address: 00501d40
// Address Range: [[00501d40, 00501f24]]
// Convention: __cdecl
// Signature: void engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel * keyframe_model)

#include "nocturne.h"

void __cdecl
engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel *keyframe_model)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLHeaderExtended *pSVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *filename;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if (keyframe_model->base_keyframes == (SMRGLKeyframe *)0x0) {
    pSVar4 = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    *(SMRGLHeaderExtended **)(in_stack_00000008 + 0x14) = pSVar4;
  }
  iVar2 = engine_model_c_getMRGLSize_FUN_00528700
                    (*(SMRGLHeaderExtended **)(in_stack_00000008 + 0x14));
  iVar3 = engine_model_c_getMRGLSize_FUN_00528700
                    ((SMRGLHeaderExtended *)(*(int *)(in_stack_0000000c + 0x14) + iVar2));
  iVar10 = 0;
  if (0 < *(int *)(in_stack_00000010 + 8)) {
    filename = (char *)(in_stack_00000010 + 0x18);
    iVar9 = in_stack_00000010;
    do {
      if (*(int *)(iVar9 + 0x118) == 0) {
        pSVar4 = engine_model_c_loadModelChunk_FUN_00528970(filename,iVar2 + iVar3);
        *(SMRGLHeaderExtended **)(iVar9 + 0x118) = pSVar4;
      }
      iVar9 = iVar9 + 4;
      iVar10 = iVar10 + 1;
      filename = filename + 0x10;
    } while (iVar10 < *(int *)(in_stack_00000010 + 8));
  }
  iVar10 = 0;
  iVar2 = *(int *)(in_stack_00000010 + 0x14);
  iVar3 = in_stack_00000010;
  if (0 < *(int *)(in_stack_00000010 + 8)) {
    do {
      iVar9 = *(int *)(iVar3 + 0x118);
      if (*(int *)(iVar9 + 8) != 2) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Bad key frame");
      }
      if (*(int *)(iVar9 + 0x10) != *(int *)(iVar2 + 0x10)) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfe;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Key frame vertex mismatch");
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < *(int *)(in_stack_00000010 + 8));
  }
  iVar2 = *(int *)(in_stack_00000010 + 0x14);
  iVar10 = 0;
  iVar3 = in_stack_00000010;
  if (0 < *(int *)(in_stack_00000010 + 8)) {
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
        iVar9 = *(int *)(iVar3 + 0x118);
        puVar7 = (uint *)(*(int *)(iVar3 + 0x118) + 0x14);
        if (0 < *(int *)(iVar9 + 0x10)) {
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
          } while (iVar11 < *(int *)(iVar9 + 0x10));
        }
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < *(int *)(in_stack_00000010 + 8));
  }
  return;
}
