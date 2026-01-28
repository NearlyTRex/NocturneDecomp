// Name: core_cloth.cpp_ParseClothFile_FUN_00439260
// Address: 00439260
// Address Range: [[00439260, 004394df]]
// Convention: unknown
// Signature: void core_cloth_cpp_ParseClothFile_FUN_00439260(void)

#include "nocturne.h"

/* Signature: byte core_cloth.cpp_ParseClothFile(uint param_1, uint param_2) */

void core_cloth_cpp_ParseClothFile_FUN_00439260(void)

{
  FILE *file;
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  file = engine_dosio_c_getFile_FUN_00481a50("models",in_stack_00000008,"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x12d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::save - Unable to open file");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"model\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"weight,gravity,dampen,spring,bodyFriction,floorFriction,windArea,momInert\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f,%f,%f,%f,%f,%f,%f,%f\n",(double)*(float *)(in_stack_00000004 + 0x3ce58),
             (double)*(float *)(in_stack_00000004 + 0x3ce5c),
             (double)*(float *)(in_stack_00000004 + 0x3ce60),
             (double)*(float *)(in_stack_00000004 + 0x3ce64),
             (double)*(float *)(in_stack_00000004 + 0x3ce68),
             (double)*(float *)(in_stack_00000004 + 0x3ce6c),
             (double)*(float *)(in_stack_00000004 + 0x3ce70),
             (double)*(float *)(in_stack_00000004 + 0x3ce74));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"transparency\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f\n",(double)*(float *)(in_stack_00000004 + 0x3ce88));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"doubleSided\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lockedVertexCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lockedVertexList\n");
  if (0 < *(int *)(in_stack_00000004 + 0x3f028)) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x3f028));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"collideBoneCount\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
    iVar2 = in_stack_00000004 + 0x3ce90;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"\"%s\",%g,%g, %g,%g,%g, %g,%g,%g, %g\n",iVar2,(double)*(float *)(iVar2 + 0x14),
                 (double)*(float *)(iVar2 + 0x18),(double)*(float *)(iVar2 + 0x1c),
                 (double)*(float *)(iVar2 + 0x20),(double)*(float *)(iVar2 + 0x24),
                 (double)*(float *)(iVar2 + 0x28),(double)*(float *)(iVar2 + 0x30),
                 (double)*(float *)(iVar2 + 0x2c),(double)*(float *)(iVar2 + 0x34));
      iVar2 = iVar2 + 0xac;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x3ce8c));
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\cloth.cpp",0x17b);
  return;
}
