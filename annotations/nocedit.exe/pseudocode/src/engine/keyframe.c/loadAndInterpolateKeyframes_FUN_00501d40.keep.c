// Name: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
// Address: 00501d40
// MANUAL RECONSTRUCTION
// Address Range: [[00501d40, 00501f24]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel *keyframe_model)

#include "nocturne.h"

void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel *keyframe_model)

{
  SMRGLKeyframe *pSVar3;
  SMRGLKeyframe *pSVar4;
  int iVar4;
  int iVar5;
  SMRGLHeaderExtended *pSVar6;
  SMRGLHeaderExtended *pSVar5;
  uint uVar7;
  uint uVar8;
  uint uVar6;
  int *piVar9;
  uint uVar10;
  int iVar7;
  int iVar12;
  int local_14;
  SMRGLKeyframe *pSVar1;
  SMRGLKeyframe *pSVar2;
  uint uVar3;
  
  if (keyframe_model->base_keyframes == (SMRGLKeyframe *)0x0) {
    pSVar5 = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    keyframe_model->base_keyframes = (SMRGLKeyframe *)pSVar5;
  }
  iVar4 = engine_model_c_getMRGLSize_FUN_00528700(&keyframe_model->base_keyframes->header);
  iVar5 = engine_model_c_getMRGLSize_FUN_00528700
                    ((SMRGLHeaderExtended *)
                     ((int)&(keyframe_model->base_keyframes->header).base.type + iVar4));
  iVar12 = 0;
  if (0 < (keyframe_model->header).child_count) {
    do {
      if (keyframe_model->loaded_frames[iVar12] == (SMRGLKeyframe *)0x0) {
        pSVar6 = engine_model_c_loadModelChunk_FUN_00528970(keyframe_model->filenames[iVar12],iVar4 + iVar5);
        keyframe_model->loaded_frames[iVar12] = (SMRGLKeyframe *)pSVar6;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (keyframe_model->header).child_count);
  }
  iVar7 = 0;
  pSVar1 = keyframe_model->base_keyframes;
  if (0 < (keyframe_model->header).child_count) {
    do {
      pSVar2 = keyframe_model->loaded_frames[iVar7];
      if ((pSVar2->header).child_count != 2) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Bad key frame");
      }
      if (pSVar2[1].header.base.count != pSVar1[1].header.base.count) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfe;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Key frame vertex mismatch");
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (keyframe_model->header).child_count);
  }
  pSVar3 = keyframe_model->base_keyframes;
  local_14 = 0;
  if (0 < (keyframe_model->header).child_count) {
    do {
      uVar3 = (keyframe_model->loaded_frames[local_14]->header).base.count;
      if ((pSVar3->header).base.count != uVar3) {
        uVar6 = (pSVar3->header).base.count;
        uVar10 = (int)uVar6 >> 0x1f;
        uVar7 = uVar6 ^ uVar10;
        uVar8 = uVar7 / uVar3;
        if (0x7ffe < uVar8) {
          uVar8 = 0x7fff;
        }
        uVar6 = ((uint)(((ulonglong)uVar7 % (ulonglong)uVar3 << 0x20) / (ulonglong)uVar3) >> 0x10 |
                uVar8 << 0x10) ^ uVar10;
        iVar7 = 0;
        pSVar4 = keyframe_model->loaded_frames[local_14];
        piVar9 = &keyframe_model->loaded_frames[local_14][1].header.child_count;
        if (0 < pSVar4[1].header.base.count) {
          do {
            *piVar9 = (uint)((longlong)(int)uVar6 * (longlong)*piVar9) >> 0x10 |
                      (int)((ulonglong)((longlong)(int)uVar6 * (longlong)*piVar9) >> 0x20) << 0x10;
            piVar9[1] = (uint)((longlong)(int)uVar6 * (longlong)piVar9[1]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar6 * (longlong)piVar9[1]) >> 0x20) <<
                        0x10;
            piVar9[2] = (uint)((longlong)(int)uVar6 * (longlong)piVar9[2]) >> 0x10 |
                        (int)((ulonglong)((longlong)(int)uVar6 * (longlong)piVar9[2]) >> 0x20) <<
                        0x10;
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 3;
          } while (iVar7 < pSVar4[1].header.base.count);
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < (keyframe_model->header).child_count);
  }
  return;
}
