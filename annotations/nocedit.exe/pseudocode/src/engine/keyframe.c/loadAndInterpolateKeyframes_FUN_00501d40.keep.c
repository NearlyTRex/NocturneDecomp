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
  int iVar4;
  int iVar5;
  SMRGLHeaderExtended *pSVar6;
  SMRGLKeyframe *pSVar4;
  uint uVar7;
  uint uVar8;
  uint uVar5;
  CVector3i *vert;
  uint uVar10;
  int iVar6;
  int iVar12;
  char (*filename) [16];
  int local_14;
  SMRGLKeyframe *pSVar1;
  SMRGLKeyframe *pSVar2;
  uint uVar3;
  
  if (keyframe_model->base_keyframes == (SMRGLKeyframe *)0x0) {
    pSVar4 = (SMRGLKeyframe *)
             engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    keyframe_model->base_keyframes = pSVar4;
  }
  iVar4 = engine_model_c_getMRGLSize_FUN_00528700(&keyframe_model->base_keyframes->header);
  iVar5 = engine_model_c_getMRGLSize_FUN_00528700
                    ((SMRGLHeaderExtended *)
                     ((char *)keyframe_model->base_keyframes + iVar4));
  iVar12 = 0;
  if (0 < (keyframe_model->header).child_count) {
    filename = keyframe_model->filenames;
    do {
      if (keyframe_model->loaded_frames[iVar12] == (SMRGLKeyframe *)0x0) {
        pSVar6 = engine_model_c_loadModelChunk_FUN_00528970(*filename,iVar4 + iVar5);
        keyframe_model->loaded_frames[iVar12] = (SMRGLKeyframe *)pSVar6;
      }
      iVar12 = iVar12 + 1;
      filename = filename + 1;
    } while (iVar12 < (keyframe_model->header).child_count);
  }
  iVar6 = 0;
  pSVar1 = keyframe_model->base_keyframes;
  if (0 < (keyframe_model->header).child_count) {
    do {
      pSVar2 = keyframe_model->loaded_frames[iVar6];
      if ((pSVar2->header).child_count != 2) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Bad key frame");
      }
      if ((pSVar2->vertex_header).count != (pSVar1->vertex_header).count) {
        g_CurrentFilename = "..\\engine\\keyframe.c";
        g_CurrentLineNumber = 0xfe;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Key frame vertex mismatch");
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (keyframe_model->header).child_count);
  }
  pSVar4 = keyframe_model->base_keyframes;
  local_14 = 0;
  if (0 < (keyframe_model->header).child_count) {
    do {
      uVar3 = (keyframe_model->loaded_frames[local_14]->header).base.count;
      if ((pSVar4->header).base.count != uVar3) {
        uVar5 = (pSVar4->header).base.count;
        uVar10 = -(uVar5 >> 0x1f);
        uVar7 = uVar5 ^ uVar10;
        uVar8 = uVar7 / uVar3;
        if (0x7ffe < uVar8) {
          uVar8 = 0x7fff;
        }
        uVar5 = ((uint)(((ulonglong)uVar7 % (ulonglong)uVar3 << 0x20) / (ulonglong)uVar3) >> 0x10 |
                uVar8 << 0x10) ^ uVar10;
        iVar6 = 0;
        pSVar3 = keyframe_model->loaded_frames[local_14];
        vert = pSVar3->vertices;
        if (0 < (pSVar3->vertex_header).count) {
          do {
            vert->x = (int)((longlong)(int)uVar5 * vert->x >> 0x10);
            vert->y = (int)((longlong)(int)uVar5 * vert->y >> 0x10);
            vert->z = (int)((longlong)(int)uVar5 * vert->z >> 0x10);
            iVar6 = iVar6 + 1;
            vert = vert + 1;
          } while (iVar6 < (pSVar3->vertex_header).count);
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < (keyframe_model->header).child_count);
  }
  return;
}
