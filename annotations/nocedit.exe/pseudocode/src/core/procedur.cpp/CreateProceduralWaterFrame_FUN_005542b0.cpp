// Name: core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0
// Address: 005542b0
// Address Range: [[005542b0, 00554610]]
// Convention: unknown
// Signature: undefined core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0()

#include "nocturne.h"

void core_procedur_cpp_CreateProceduralWaterFrame_FUN_005542b0(void)

{
  byte bVar1;
  uint uVar2;
  FILE *pFVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_stack_00000004;
  char local_130 [256];
  int local_30;
  int local_2c;
  void *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar6 = in_stack_00000004;
  do {
    local_14 = crt_stdlib_c_rand_FUN_005feb5c();
    *(float *)(iVar6 + 0x10008) = (float)local_14 * 3.051851e-05f * (float)256;
    local_14 = crt_stdlib_c_rand_FUN_005feb5c();
    *(float *)(iVar6 + 0x10208) = (float)local_14 * 3.051851e-05f * (float)256;
    local_14 = crt_stdlib_c_rand_FUN_005feb5c();
    iVar7 = iVar6 + 4;
    *(float *)(iVar6 + 0x10408) = (float)local_14 * 3.051851e-05f * (float)128;
    iVar6 = iVar7;
  } while (iVar7 != in_stack_00000004 + 0x200);
  local_28 = (void *)(in_stack_00000004 + 8);
  local_20 = in_stack_00000004 + 0x10000;
  local_24 = in_stack_00000004 + 0x200;
  local_30 = in_stack_00000004 + 0x100;
  local_1c = 0;
  local_2c = local_30;
  do {
    crt_memory_c_memset_FUN_005fde40(local_28,0,0x10000);
    iVar6 = local_24;
    iVar7 = in_stack_00000004;
    do {
      local_14 = local_1c;
      local_14 = core_procedur_cpp_FUN_00554620();
      iVar7 = iVar7 + 4;
      core_procedur_cpp_FUN_00554670();
      iVar9 = in_stack_00000004;
      iVar5 = in_stack_00000004;
      iVar10 = local_30;
      iVar8 = in_stack_00000004;
    } while (iVar7 != iVar6);
    do {
      do {
        uVar2 = *(byte *)(iVar9 + 8) + 0x10;
        if (0xff < uVar2) {
          uVar2 = 0xff;
        }
        iVar6 = iVar5 + 1;
        *(char *)(iVar5 + 8) = (char)uVar2;
        iVar9 = iVar9 + 1;
        iVar5 = iVar6;
      } while (iVar6 != iVar10);
      iVar9 = iVar8 + 0x100;
      iVar5 = iVar9;
      iVar10 = iVar10 + 0x100;
      iVar8 = iVar9;
    } while (iVar9 != local_20);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_130,"water%d.raw",local_1c);
    pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",local_130,"wb");
    if (pFVar3 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 100;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    crt_stdio_c_fwrite_FUN_005fdc00(local_28,0x100,0x100,pFVar3);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\core\\procedur.cpp",0x66);
    crt_stdio_c_sprintf_FUN_005fdbd0(local_130,"water%d.act",local_1c);
    pFVar3 = engine_dosio_c_getFile_FUN_00481a50("art",local_130,"wb");
    if (pFVar3 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 0x69;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    iVar6 = 0;
    do {
      crt_stdio_c_fputc_FUN_006007a0(iVar6,pFVar3);
      crt_stdio_c_fputc_FUN_006007a0(iVar6,pFVar3);
      crt_stdio_c_fputc_FUN_006007a0(iVar6,pFVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x100);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\core\\procedur.cpp",0x6f);
    iVar7 = 0;
    iVar6 = 0;
    local_18 = local_2c;
    do {
      iVar9 = in_stack_00000004 + iVar7 * 0x100;
      piVar4 = *(int **)((int)g_ScreenBufferArray + iVar6);
      do {
        bVar1 = *(byte *)(iVar9 + 8);
        iVar9 = iVar9 + 1;
        *piVar4 = (uint)bVar1 * 0x10000 + (uint)CONCAT11 /* combine 2-byte values */(bVar1,bVar1);
        piVar4 = piVar4 + 1;
      } while (iVar9 != local_18);
      iVar6 = iVar6 + 4;
      local_18 = local_18 + 0x100;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    iVar6 = local_1c + 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_1c = iVar6;
  } while (iVar6 < 0x10);
  return;
}
