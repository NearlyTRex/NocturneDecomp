// Name: core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0
// Address: 005542b0
// MANUAL RECONSTRUCTION
// Address Range: [[005542b0, 00554610]]
// Convention: __cdecl
// Signature: void __cdecl core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(CProceduralTexture *this_ptr)

#include "nocturne.h"

void __cdecl core_procedur_cpp_CProceduralTexture_createWaterFrames_FUN_005542b0(CProceduralTexture *this_ptr)

{
  int iVar1;
  float wave_offset;
  uint uVar5;
  _FILE *p_Var6;
  _FILE *file;
  int *piVar8;
  int iVar11;
  int iVar14;
  int iWave;
  int iByte;
  int iCol;
  char local_130 [256];
  int local_1c;
  byte bVar3;

  for (iWave = 0; iWave < 128; iWave = iWave + 1) {
    iVar1 = rand();
    this_ptr->wave_x[iWave] = (float)iVar1 * 3.051851e-05f * (float)256;
    iVar1 = rand();
    this_ptr->wave_y[iWave] = (float)iVar1 * 3.051851e-05f * (float)256;
    iVar1 = rand();
    this_ptr->wave_radius[iWave] = (float)iVar1 * 3.051851e-05f * (float)128;
  }
  local_1c = 0;
  do {
    memset(this_ptr->texture,0,0x10000);
    for (iWave = 0; iWave < 128; iWave = iWave + 1) {
      wave_offset = core_procedur_cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620
                              (this_ptr,this_ptr->wave_radius[iWave],(float)local_1c);
      core_procedur_cpp_CProceduralTexture_applyRipple_FUN_00554670
                (this_ptr,this_ptr->wave_x[iWave],this_ptr->wave_y[iWave],wave_offset);
    }
    for (iByte = 0; iByte < 0x10000; iByte = iByte + 1) {
      uVar5 = this_ptr->texture[iByte] + 0x10;
      if (0xff < uVar5) {
        uVar5 = 0xff;
      }
      this_ptr->texture[iByte] = (uchar)uVar5;
    }
    _sprintf(local_130,"water%d.raw",local_1c);
    p_Var6 = engine_dosio_cpp_getFile_FUN_00481a50("art",local_130,"wb");
    if (p_Var6 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 100;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    _fwrite(this_ptr->texture,0x100,0x100,p_Var6);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var6,"..\\core\\procedur.cpp",0x66);
    _sprintf(local_130,"water%d.act",local_1c);
    file = engine_dosio_cpp_getFile_FUN_00481a50("art",local_130,"wb");
    if (file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\procedur.cpp";
      g_CurrentLineNumber = 0x69;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't write water frame");
    }
    iVar11 = 0;
    do {
      _fputc(iVar11,file);
      _fputc(iVar11,file);
      _fputc(iVar11,file);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x100);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\procedur.cpp",0x6f);
    for (iVar14 = 0; iVar14 < 0x100; iVar14 = iVar14 + 1) {
      piVar8 = (int *)g_ScreenBufferArray[iVar14];
      for (iCol = 0; iCol < 0x100; iCol = iCol + 1) {
        bVar3 = this_ptr->texture[iVar14 * 0x100 + iCol];
        piVar8[iCol] = (uint)bVar3 << 0x10 | (uint)bVar3 << 8 | (uint)bVar3;
      }
    }
    local_1c = local_1c + 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  } while (local_1c < 0x10);
  return;
}
