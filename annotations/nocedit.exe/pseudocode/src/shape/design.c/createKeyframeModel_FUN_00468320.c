// Name: shape_design.c_createKeyframeModel_FUN_00468320
// Address: 00468320
// Address Range: [[00468320, 004685d6]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void)

{
  byte bVar1;
  _FILE *file;
  int iVar3;
  int iVar2;
  byte *pbVar4;
  char *pcVar5;
  char (*pacVar6) [16];
  byte *pbVar3;
  byte bVar7;
  double dVar8;
  SMRGLKeyframeModel local_264;
  char local_10c [80];
  char local_bc [80];
  byte local_6c [80];
  _FILE *local_1c;
  int local_18;
  float local_14;
  char cVar1;
  byte bVar2;
  
  bVar7 = 0;
  memset(&local_264,0,0x158);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_10c,0x28,0,0,"Enter in final model name : ");
  iVar3 = -1;
  pcVar5 = local_10c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_6c,2,0,0xb,"Enter in number of frames : ");
    iVar2 = -1;
    pbVar3 = local_6c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar2 = *pbVar3;
      pbVar3 = pbVar3 + (uint)bVar7 * -2 + 1;
    } while (bVar2 != 0);
    if (((iVar2 != -2) &&
        (local_264.header.child_count = atoi((char *)local_6c),
        1 < local_264.header.child_count)) && (local_264.header.child_count < 0x11)) {
      for (local_18 = 0; local_18 < local_264.header.child_count; local_18 = local_18 + 1) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        _sprintf(local_bc,"Enter key frame of object %d : ",local_18 + 1);
        engine_2d_c_getInputWithPrompt_FUN_004032c0((char *)local_6c,0x14,0,0,local_bc);
        iVar2 = -1;
        pbVar3 = local_6c;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar1 = *pbVar3;
          pbVar3 = pbVar3 + (uint)bVar7 * -2 + 1;
        } while (bVar1 != 0);
        if (iVar2 == -2) {
          return;
        }
        pbVar4 = local_6c;
        pacVar6 = local_264.filenames + local_18;
        do {
          bVar1 = *pbVar4;
          (*pacVar6)[0] = bVar1;
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          pbVar4 = pbVar4 + 2;
          (*pacVar6)[1] = bVar1;
          pacVar6 = (char (*) [16])(*pacVar6 + 2);
        } while (bVar1 != 0);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_6c,0x14,0,0,"Enter in time per frame in decimal : ");
      iVar2 = -1;
      pbVar3 = local_6c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + (uint)bVar7 * -2 + 1;
      } while (bVar1 != 0);
      if (iVar2 != -2) {
        dVar8 = _strtod((char *)local_6c);
        local_14 = (float)dVar8;
        if ((0.0 < local_14) && (local_14 < (float)127)) {
          local_264.cycle_length = (int)ROUND(ROUND(local_14 * (float)65536));
          local_264.header.base.type = 0x20;
          file = engine_dosio_cpp_getFile_FUN_00481a50("models",local_10c,"wb");
          if (file == (_FILE *)0x0) {
            g_CurrentFilename = "..\\shape\\design.c";
            g_CurrentLineNumber = 8823;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write keyframed model");
          }
          _fwrite(&local_264,1,0x158,file);
          local_18 = 0;
          _fwrite(&local_18,1,4,file);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\shape\\design.c",8828);
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
