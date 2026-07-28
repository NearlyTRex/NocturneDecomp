// Name: engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0
// Address: 004c3aa0
// Address Range: [[004c3aa0, 004c3c84]]
// Convention: __cdecl
// Signature: void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(SMRGLKeyframeModel *keyframe_model)

#include "nocturne.h"

void __cdecl engine_keyframe_c_loadAndInterpolateKeyframes_FUN_004c3aa0(SMRGLKeyframeModel *keyframe_model)

{
  SMRGLKeyframe *pSVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  SMRGLKeyframe *pSVar6;
  uint uVar7;
  uint uVar8;
  SMRGLKeyframe *pSVar9;
  uint uVar10;
  SMRGLKeyframeModel *pSVar11;
  int iVar12;
  char (*filename) [16];
  int local_14;
  
  if (keyframe_model->base_keyframes == (SMRGLKeyframe *)0x0) {
    pSVar6 = (SMRGLKeyframe *)
             engine_model_c_loadModelFile_FUN_004dcd10(keyframe_model->filenames[0]);
    keyframe_model->base_keyframes = pSVar6;
  }
  iVar4 = engine_model_c_getMRGLSize_FUN_004dd520(&keyframe_model->base_keyframes->header);
  iVar5 = engine_model_c_getMRGLSize_FUN_004dd520
                    ((SMRGLHeaderExtended *)
                     ((int)&(keyframe_model->base_keyframes->header).base.type + iVar4));
  iVar12 = 0;
  if (0 < (keyframe_model->header).child_count) {
    filename = keyframe_model->filenames;
    pSVar11 = keyframe_model;
    do {
      if (pSVar11->loaded_frames[0] == (SMRGLKeyframe *)0x0) {
        pSVar6 = (SMRGLKeyframe *)
                 engine_model_c_loadModelChunk_FUN_004dd790(*filename,iVar4 + iVar5);
        pSVar11->loaded_frames[0] = pSVar6;
      }
      pSVar11 = (SMRGLKeyframeModel *)&(pSVar11->header).base.count;
      iVar12 = iVar12 + 1;
      filename = filename + 1;
    } while (iVar12 < (keyframe_model->header).child_count);
  }
  iVar4 = 0;
  pSVar6 = keyframe_model->base_keyframes;
  pSVar11 = keyframe_model;
  if (0 < (keyframe_model->header).child_count) {
    do {
      pSVar1 = pSVar11->loaded_frames[0];
      if ((pSVar1->header).child_count != 2) {
        PTR_01cc4800 = "..\\engine\\keyframe.c";
        INT_01cc4804 = 0xfd;
        core_main_c_FUN_004c8440("Bad key frame");
      }
      if ((pSVar1->vertex_header).count != (pSVar6->vertex_header).count) {
        PTR_01cc4800 = "..\\engine\\keyframe.c";
        INT_01cc4804 = 0xfe;
        core_main_c_FUN_004c8440("Key frame vertex mismatch");
      }
      iVar4 = iVar4 + 1;
      pSVar11 = (SMRGLKeyframeModel *)&(pSVar11->header).base.count;
    } while (iVar4 < (keyframe_model->header).child_count);
  }
  pSVar6 = keyframe_model->base_keyframes;
  local_14 = 0;
  pSVar11 = keyframe_model;
  if (0 < (keyframe_model->header).child_count) {
    do {
      uVar2 = (pSVar11->loaded_frames[0]->header).base.count;
      if ((pSVar6->header).base.count != uVar2) {
        uVar7 = (pSVar6->header).base.count;
        uVar10 = (int)uVar7 >> 0x1f;
        uVar7 = uVar7 ^ uVar10;
        uVar8 = uVar7 / uVar2;
        if (0x7ffe < uVar8) {
          uVar8 = 0x7fff;
        }
        uVar10 = ((uint)(((ulonglong)uVar7 % (ulonglong)uVar2 << 0x20) / (ulonglong)uVar2) >> 0x10 |
                 uVar8 << 0x10) ^ uVar10;
        iVar4 = 0;
        pSVar1 = pSVar11->loaded_frames[0];
        pSVar9 = pSVar11->loaded_frames[0] + 1;
        if (0 < (pSVar1->vertex_header).count) {
          do {
            lVar3 = (longlong)(int)uVar10 * (longlong)(pSVar9->header).base.type;
            iVar5 = (pSVar9->header).base.count;
            (pSVar9->header).base.type =
                 (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            lVar3 = (longlong)(int)uVar10 * (longlong)iVar5;
            iVar5 = (pSVar9->header).child_count;
            (pSVar9->header).base.count =
                 (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            lVar3 = (longlong)(int)uVar10 * (longlong)iVar5;
            (pSVar9->header).child_count =
                 (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
            iVar4 = iVar4 + 1;
            pSVar9 = (SMRGLKeyframe *)&pSVar9->vertex_header;
          } while (iVar4 < (pSVar1->vertex_header).count);
        }
      }
      local_14 = local_14 + 1;
      pSVar11 = (SMRGLKeyframeModel *)&(pSVar11->header).base.count;
    } while (local_14 < (keyframe_model->header).child_count);
  }
  return;
}
