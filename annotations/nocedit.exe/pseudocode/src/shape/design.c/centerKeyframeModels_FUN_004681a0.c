// Name: shape_design.c_centerKeyframeModels_FUN_004681a0
// Address: 004681a0
// Address Range: [[004681a0, 0046831d]]
// Convention: __cdecl
// Signature: void shape_design.c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel * keyframe_model)

#include "nocturne.h"

void __cdecl shape_design_c_centerKeyframeModels_FUN_004681a0(SMRGLKeyframeModel *keyframe_model)

{
  char cVar1;
  SIZE_T size;
  FILE *file;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_74 [80];
  int local_24;
  SMRGLHeaderExtended *local_20;
  SMRGLHeaderExtended *local_1c;
  int local_18;
  CVector3i *local_14;
  
  bVar4 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_74,8,0,0,"Enter in common nonmoving vertex # : ");
  iVar2 = -1;
  pcVar3 = local_74;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_18 = crt_stdlib_c_atoi_FUN_005ffef0(local_74);
    local_1c = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[0]);
    local_14 = shape_design_c_findVertexListInModel_FUN_00468000(local_1c);
    for (local_24 = 1; local_24 < (keyframe_model->header).child_count; local_24 = local_24 + 1) {
      local_20 = engine_model_c_loadModelFile_FUN_00527ec0(keyframe_model->filenames[local_24]);
      shape_design_c_applyVertexCentering_FUN_004680f0(local_20,local_14 + local_18,local_18);
      size = engine_dosio_c_getFileSize_FUN_00481880
                       ("models",keyframe_model->filenames[local_24]);
      file = engine_dosio_c_getFile_FUN_00481a50
                       ("models",keyframe_model->filenames[local_24],"wb");
      if (file == (FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\design.c";
        g_CurrentLineNumber = 0x2235;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write key model");
      }
      crt_stdio_c_fwrite_FUN_005fdc00(local_20,size,1,file);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x2237);
      engine_model_c_freeMRGLData_FUN_005280b0(local_20);
    }
    engine_model_c_freeMRGLData_FUN_005280b0(local_1c);
  }
  return;
}
