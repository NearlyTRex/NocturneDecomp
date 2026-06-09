// Name: shape_design.c_createKeyframeModel_FUN_00468320
// Address: 00468320
// MANUAL RECONSTRUCTION
// Address Range: [[00468320, 004685d6]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void)

#include "nocturne.h"

void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void)

{
  _FILE *file;
  int iVar2;
  double dVar8;
  SMRGLKeyframeModel local_264;
  char local_10c [80];
  char local_bc [80];
  byte local_6c [80];
  int local_18;
  float local_14;

  memset(&local_264,0,0x158);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_10c,0x28,0,0,"Enter in final model name : ");
  if (strlen(local_10c) != 0) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_6c,2,0,0xb,"Enter in number of frames : ");
    if (((strlen((char *)local_6c) != 0) &&
        (local_264.header.child_count = atoi((char *)local_6c),
        1 < local_264.header.child_count)) && (local_264.header.child_count < 0x11)) {
      for (local_18 = 0; local_18 < local_264.header.child_count; local_18 = local_18 + 1) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        _sprintf(local_bc,"Enter key frame of object %d : ",local_18 + 1);
        engine_2d_c_getInputWithPrompt_FUN_004032c0((char *)local_6c,0x14,0,0,local_bc);
        if (strlen((char *)local_6c) == 0) {
          return;
        }
        strcpy(local_264.filenames[local_18],(char *)local_6c);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_6c,0x14,0,0,"Enter in time per frame in decimal : ");
      if (strlen((char *)local_6c) != 0) {
        dVar8 = _strtod((char *)local_6c);
        local_14 = (float)dVar8;
        if ((0.0 < local_14) && (local_14 < (float)127)) {
          local_264.cycle_length = (int)ROUND(ROUND(local_14 * (float)65536));
          local_264.header.base.type = 0x20;
          file = engine_dosio_cpp_getFile_FUN_00481a50("models",local_10c,"wb");
          if (file == (_FILE *)0x0) {
            g_CurrentFilename = "..\\shape\\design.c";
            g_CurrentLineNumber = 0x2277;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write keyframed model");
          }
          _fwrite(&local_264,1,0x158,file);
          local_18 = 0;
          _fwrite(&local_18,1,4,file);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",0x227c);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_getInputWithPrompt_FUN_004032c0
                    ((char *)local_6c,1,0,0,"Use keyframe 0 to center (Y/N) ? ");
          iVar2 = toupper((uint)local_6c[0]);
          if (iVar2 == 0x59) {
            shape_design_c_centerKeyframeModels_FUN_004681a0(&local_264);
          }
        }
      }
    }
  }
  return;
}
