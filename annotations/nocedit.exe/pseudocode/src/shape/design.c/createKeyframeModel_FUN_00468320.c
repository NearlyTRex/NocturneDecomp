// Name: shape_design.c_createKeyframeModel_FUN_00468320
// Address: 00468320
// Address Range: [[00468320, 004685d6]]
// Convention: __cdecl
// Signature: void shape_design.c_createKeyframeModel_FUN_00468320(void)

#include "nocturne.h"

void __cdecl shape_design_c_createKeyframeModel_FUN_00468320(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  byte *pbVar5;
  char *pcVar6;
  SMRGLKeyframe *pSVar7;
  byte bVar8;
  double dVar9;
  SMRGLKeyframe *in_stack_fffffdb0;
  char local_10c [80];
  char local_bc [80];
  byte local_6c [80];
  FILE *local_1c;
  int local_18;
  float local_14;
  
  bVar8 = 0;
  crt_memory_c_memset_FUN_005fde40(&stack0xfffffd9c,0,0x158);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_10c,0x28,0,0,"Enter in final model name : ");
  iVar3 = -1;
  pcVar6 = local_10c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_6c,2,0,0xb,"Enter in number of frames : ");
    iVar3 = -1;
    pbVar5 = local_6c;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + (uint)bVar8 * -2 + 1;
    } while (bVar2 != 0);
    if (((iVar3 != -2) && (iVar3 = crt_stdlib_c_atoi_FUN_005ffef0((char *)local_6c), 1 < iVar3)) &&
       (iVar3 < 0x11)) {
      for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        crt_stdio_c_sprintf_FUN_005fdbd0(local_bc,"Enter key frame of object %d : ");
        iVar3 = 0;
        engine_2d_c_getInputWithPrompt_FUN_004032c0((char *)local_6c,0x14,0,0,local_bc);
        iVar4 = -1;
        pbVar5 = local_6c;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar2 = *pbVar5;
          pbVar5 = pbVar5 + (uint)bVar8 * -2 + 1;
        } while (bVar2 != 0);
        if (iVar4 == -2) {
          return;
        }
        pbVar5 = local_6c;
        in_stack_fffffdb0 = (SMRGLKeyframe *)(&stack0xfffffdb4 + local_18 * 0x10);
        pSVar7 = in_stack_fffffdb0;
        do {
          bVar2 = *pbVar5;
          *(byte *)&(pSVar7->header).base.type = bVar2;
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          pbVar5 = pbVar5 + 2;
          *(byte *)((int)&(pSVar7->header).base.type + 1) = bVar2;
          pSVar7 = (SMRGLKeyframe *)((int)&(pSVar7->header).base.type + 2);
        } while (bVar2 != 0);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_6c,0x14,0,0,"Enter in time per frame in decimal : ");
      iVar3 = -1;
      pbVar5 = local_6c;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + (uint)bVar8 * -2 + 1;
      } while (bVar2 != 0);
      if (iVar3 != -2) {
        dVar9 = crt_string_c_strtod_FUN_005ff0f3((char *)in_stack_fffffdb0);
        local_14 = (float)dVar9;
        if ((0.0 < local_14) && (local_14 < (float)127)) {
          crt_math_c_round_FUN_005fe6b0((double)(local_14 * (float)65536));
          local_1c = engine_dosio_c_getFile_FUN_00481a50("models",local_10c,"wb");
          if (local_1c == (FILE *)0x0) {
            g_CurrentFilename = "..\\shape\\design.c";
            g_CurrentLineNumber = 0x2277;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write keyframed model");
          }
          crt_stdio_c_fwrite_FUN_005fdc00(&stack0xfffffd9c,1,0x158,local_1c);
          local_18 = 0;
          crt_stdio_c_fwrite_FUN_005fdc00(&local_18,1,4,local_1c);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\shape\\design.c",0x227c);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          engine_2d_c_getInputWithPrompt_FUN_004032c0
                    ((char *)local_6c,1,0,0,"Use keyframe 0 to center (Y/N) ? ");
          iVar3 = crt_ctype_c_toupper_FUN_005ff9e0((uint)local_6c[0]);
          if (iVar3 == 0x59) {
            shape_design_c_centerKeyframeModels_FUN_004681a0((SMRGLKeyframeModel *)&stack0xfffffd9c)
            ;
          }
        }
      }
    }
  }
  return;
}
