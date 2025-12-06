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
  float fVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  byte *pbVar6;
  char *pcVar7;
  SMRGLKeyframe *pSVar8;
  byte bVar9;
  double dVar10;
  SMRGLKeyframe *in_stack_fffffdb0;
  char local_10c [80];
  char local_bc [80];
  byte local_6c [80];
  FILE *local_1c;
  int local_18;
  float local_14;
  
  bVar9 = 0;
  crt_memory_c_memset_FUN_005fde40(&stack0xfffffd9c,0,0x158);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (local_10c,0x28,0,0,"Enter in final model name : ");
  iVar4 = -1;
  pcVar7 = local_10c;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar9 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              ((char *)local_6c,2,0,0xb,"Enter in number of frames : ");
    iVar4 = -1;
    pbVar6 = local_6c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
    } while (bVar2 != 0);
    if (((iVar4 != -2) && (iVar4 = crt_stdlib_c_atoi_FUN_005ffef0((char *)local_6c), 1 < iVar4)) &&
       (iVar4 < 0x11)) {
      for (local_18 = 0; local_18 < iVar4; local_18 = local_18 + 1) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        crt_stdio_c_sprintf_FUN_005fdbd0(local_bc,"Enter key frame of object %d : ");
        iVar4 = 0;
        engine_2d_c_getInputWithPrompt_FUN_004032c0((char *)local_6c,0x14,0,0,local_bc);
        iVar5 = -1;
        pbVar6 = local_6c;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
        } while (bVar2 != 0);
        if (iVar5 == -2) {
          return;
        }
        pbVar6 = local_6c;
        in_stack_fffffdb0 = (SMRGLKeyframe *)(&stack0xfffffdb4 + local_18 * 0x10);
        pSVar8 = in_stack_fffffdb0;
        do {
          bVar2 = *pbVar6;
          *(byte *)&(pSVar8->header).base.type = bVar2;
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          pbVar6 = pbVar6 + 2;
          *(byte *)((int)&(pSVar8->header).base.type + 1) = bVar2;
          pSVar8 = (SMRGLKeyframe *)((int)&(pSVar8->header).base.type + 2);
        } while (bVar2 != 0);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)local_6c,0x14,0,0,"Enter in time per frame in decimal : ");
      iVar4 = -1;
      pbVar6 = local_6c;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
      } while (bVar2 != 0);
      if (iVar4 != -2) {
        dVar10 = crt_string_c_strtod_FUN_005ff0f3((char *)in_stack_fffffdb0);
        local_14 = (float)dVar10;
        if (0.0 < local_14) {
          fVar3 = (float)127;
          if (local_14 < fVar3) {
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar10 >> 0x20),
                                        CONCAT22 /* combine 2-byte values */((short)((ulonglong)dVar10 >> 0x10),
                                                 (ushort)(local_14 < fVar3) << 8 |
                                                 (ushort)(NAN(local_14) || NAN(fVar3)) << 10 |
                                                 (ushort)(local_14 == fVar3) << 0xe)));
            local_1c = engine_dosio_c_getFile_FUN_00481a50
                                 ("models",local_10c,"wb");
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
            iVar4 = crt_ctype_c_toupper_FUN_005ff9e0((uint)local_6c[0]);
            if (iVar4 == 0x59) {
              shape_design_c_centerKeyframeModels_FUN_004681a0
                        ((SMRGLKeyframeModel *)&stack0xfffffd9c);
            }
          }
        }
      }
    }
  }
  return;
}
