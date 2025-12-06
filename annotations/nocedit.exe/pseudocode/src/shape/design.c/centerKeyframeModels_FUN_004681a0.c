// Name: shape_design.c_centerKeyframeModels_FUN_004681a0
// Address: 004681a0
// Address Range: [[004681a0, 0046831d]]
// Convention: __cdecl
// Signature: void shape_design.c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel * keyframe_model)

#include "nocturne.h"

void __cdecl shape_design_c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel *keyframe_model)

{
  char cVar1;
  SMRGLHeaderExtended *model_ptr;
  CVector3i *pCVar2;
  SMRGLHeaderExtended *target_model;
  SIZE_T size;
  FILE *file;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  int local_24;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff8c,8,0,0,"Enter in common nonmoving vertex # : ");
  iVar3 = -1;
  pcVar4 = &stack0xffffff8c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff8c);
    model_ptr = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    pCVar2 = shape_design_c_findVertexListInModel_FUN_00468000(model_ptr);
    for (local_24 = 1; local_24 < (keyframe_model->header).child_count; local_24 = local_24 + 1) {
      target_model = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[local_24]);
      shape_design_c_applyVertexCentering_FUN_004680f0(target_model,pCVar2 + iVar3,iVar3);
      size = engine_dosio_c_getFileSize_FUN_00481880
                       ("models",keyframe_model->filenames[local_24]);
      file = engine_dosio_c_getFile_FUN_00481a50
                       ("models",keyframe_model->filenames[local_24],"wb");
      if (file == (FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x2235;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write key model");
      }
      crt_stdio_c_fwrite_FUN_005fdc00(target_model,size,1,file);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x2237);
      engine_model_c_freeMRGLData_FUN_005280b0(target_model);
    }
    engine_model_c_freeMRGLData_FUN_005280b0(model_ptr);
  }
  return;
}
