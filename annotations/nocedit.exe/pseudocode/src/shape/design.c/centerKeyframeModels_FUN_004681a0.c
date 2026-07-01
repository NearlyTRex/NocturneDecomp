// Name: shape_design.c_centerKeyframeModels_FUN_004681a0
// Address: 004681a0
// Address Range: [[004681a0, 0046831d]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel *keyframe_model)

#include "nocturne.h"

void __cdecl shape_design_c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel *keyframe_model)

{
  int reference_vertex_id;
  SMRGLHeaderExtended *model_ptr;
  CVector3i *pCVar1;
  SMRGLHeaderExtended *target_model;
  SIZE_T size;
  _FILE *file;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_74 [80];
  int local_24;
  SMRGLHeaderExtended *local_20;
  SMRGLHeaderExtended *local_1c;
  int local_18;
  CVector3i *local_14;
  char cVar1;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_74,8,0,0,"Enter in common nonmoving vertex # : ");
  iVar2 = -1;
  pcVar3 = local_74;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    reference_vertex_id = atoi(local_74);
    model_ptr = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    pCVar1 = shape_design_c_findVertexListInModel_FUN_00468000(model_ptr);
    for (local_24 = 1; local_24 < (keyframe_model->header).child_count; local_24 = local_24 + 1) {
      target_model = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[local_24]);
      shape_design_c_applyVertexCentering_FUN_004680f0
                (target_model,pCVar1 + reference_vertex_id,reference_vertex_id);
      size = engine_dosio_cpp_getFileSize_FUN_00481880
                       ("models",keyframe_model->filenames[local_24]);
      file = engine_dosio_cpp_getFile_FUN_00481a50
                       ("models",keyframe_model->filenames[local_24],"wb");
      if (file == (_FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 8757;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write key model");
      }
      _fwrite(target_model,size,1,file);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",8759);
      engine_model_c_freeMRGLData_FUN_005280b0(target_model);
    }
    engine_model_c_freeMRGLData_FUN_005280b0(model_ptr);
  }
  return;
}
