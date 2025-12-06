// Name: core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0
// Address: 005542b0
// Address Range: [[005542b0, 00554610]]
// Convention: unknown
// Signature: undefined core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0()

#include "nocturne.h"

void core_procedur_cpp_CreateProceduralWaterFrame_FUN_005542b0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  FILE *pFVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int iVar9;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000020;
  int iStack00000024;
  int in_stack_00000040;
  void *local_28;
  
  iVar7 = in_stack_00000004;
  do {
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    *(float *)(iVar7 + 0x10008) = (float)iVar2 * 3.051851e-05f * (float)256;
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    *(float *)(iVar7 + 0x10208) = (float)iVar2 * 3.051851e-05f * (float)256;
    iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
    iVar6 = iVar7 + 4;
    *(float *)(iVar7 + 0x10408) = (float)iVar2 * 3.051851e-05f * (float)128;
    iVar7 = iVar6;
  } while (iVar6 != in_stack_00000004 + 0x200);
  do {
    crt_memory_c_memset_FUN_005fde40(local_28,0,0x10000);
    iVar7 = in_stack_00000008;
    do {
      core_procedur_cpp_FUN_00554620();
      iVar7 = iVar7 + 4;
      core_procedur_cpp_FUN_00554670();
      iVar2 = in_stack_00000008;
      iVar6 = in_stack_00000008;
      iVar9 = in_stack_00000010 + 0x100;
      iVar8 = in_stack_00000008;
    } while (iVar7 != in_stack_00000010 + 0x100);
    do {
      do {
        uVar3 = *(byte *)(iVar2 + 8) + 0x10;
        if (0xff < uVar3) {
          uVar3 = 0xff;
        }
        iVar7 = iVar6 + 1;
        *(char *)(iVar6 + 8) = (char)uVar3;
        iVar2 = iVar2 + 1;
        iVar6 = iVar7;
      } while (iVar7 != iVar9);
      iVar2 = iVar8 + 0x100;
      iVar6 = iVar2;
      iVar9 = iVar9 + 0x100;
      iVar8 = iVar2;
    } while (iVar2 != in_stack_00000010 + 0x10000);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffedc,"water%d.raw",(void *)(in_stack_00000010 + 0x200));
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffee0,"wb");
    if (pFVar4 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 100;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    crt_stdio_c_fwrite_FUN_005fdc00((void *)(in_stack_00000010 + 0x200),0x100,0x100,pFVar4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\procedur.cpp",0x66);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffef0,"water%d.act");
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xfffffef4,"wb");
    if (pFVar4 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 0x69;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    iVar7 = 0;
    do {
      crt_stdio_c_fputc_FUN_006007a0(iVar7,pFVar4);
      crt_stdio_c_fputc_FUN_006007a0(iVar7,pFVar4);
      crt_stdio_c_fputc_FUN_006007a0(iVar7,pFVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\procedur.cpp",0x6f);
    iVar2 = 0;
    iVar7 = 0;
    iStack00000024 = in_stack_00000010;
    do {
      iVar6 = in_stack_00000040 + iVar2 * 0x100;
      piVar5 = *(int **)((int)g_ScreenBufferArray + iVar7);
      do {
        bVar1 = *(byte *)(iVar6 + 8);
        iVar6 = iVar6 + 1;
        *piVar5 = (uint)bVar1 * 0x10000 + (uint)CONCAT11 /* combine 2-byte values */(bVar1,bVar1);
        piVar5 = piVar5 + 1;
      } while (iVar6 != iStack00000024);
      iVar7 = iVar7 + 4;
      iStack00000024 = iStack00000024 + 0x100;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (in_stack_00000020 + 1 < 0x10);
  return;
}
